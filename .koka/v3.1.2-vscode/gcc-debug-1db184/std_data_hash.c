// Koka generated module: std/data/hash, koka version: 3.1.2, platform: 64-bit
#include "std_data_hash.h"
/*----------------------------------------------------------------------------
   Copyright 2024, Koka-Community Authors

   Licensed under the MIT License ("The License"). You may not
   use this file except in compliance with the License. A copy of the License
   can be found in the LICENSE file at the root of this distribution.
----------------------------------------------------------------------------*/


const uint64_t PRIME_1 = 0x9E3779B185EBCA87;
const uint64_t PRIME_2 = 0xC2B2AE3D27D4EB4F;
const uint64_t PRIME_3 = 0x165667B19E3779F9;
const uint64_t PRIME_4 = 0x85EBCA77C2B2AE63;
const uint64_t PRIME_5 = 0x27D4EB2F165667C5;
const size_t CHUNK_SIZE = sizeof(uint64_t) * 4;

int64_t kk_thread_seed(kk_context_t* ctx) {
    return ctx->thread_id;
}


kk_integer_t kk_string_hash(kk_string_t s, int64_t seed, kk_context_t* ctx) {

    kk_ssize_t length;
    uint8_t* str = (uint8_t*)kk_string_buf_borrow(s, &length, ctx);
    int64_t result = xxh64(str, length, seed);
    kk_string_drop(s, ctx);
    return kk_integer_from_int64(result, ctx);
}

kk_integer_t kk_hash_vector_int64(kk_vector_t v, int64_t seed, kk_context_t* ctx) {

    kk_ssize_t length;
    kk_box_t* buf = kk_vector_buf_borrow(v, &length, ctx);
    uint8_t* input_ptr = malloc(sizeof(uint64_t) * length);
    for (kk_ssize_t i = 0; i < length; i++) {
        ((int64_t*)input_ptr)[i] =  kk_int64_unbox(buf[i], KK_OWNED, ctx);
    }

    int64_t result = xxh64(input_ptr, sizeof(uint64_t) * length * 8, seed);
    free(input_ptr);
    input_ptr = NULL;
    return kk_integer_from_int64(result, ctx);
}

kk_integer_t kk_integer_hash(kk_integer_t i, int64_t seed, kk_context_t* ctx) {
    if (kk_is_smallint(i)) {
        return hash_small_integer(i, seed, ctx);
    } else {
        return hash_big_integer(i, seed, ctx);
    }
}

kk_integer_t hash_small_integer(kk_integer_t i, int64_t seed, kk_context_t* ctx) {

    int64_t input = 0 | kk_smallint_from_integer(i);
    uint8_t* input_ptr = ((uint8_t*)&input);
    int64_t result = xxh64(input_ptr, sizeof(input), seed);
    return kk_integer_from_int64(result, ctx);
}

kk_integer_t hash_big_integer(kk_integer_t i, int64_t seed, kk_context_t* ctx) {

    kk_warning_message("Warning! Hashing big integers may be incorrect.\n");
    uint8_t* input_ptr = ((uint8_t*)&i);
    int64_t result = xxh64(input_ptr, sizeof(kk_integer_t), seed);
    return kk_integer_from_int64(result, ctx);
}

uint64_t xxh64_read_u64(uint8_t* input, size_t cursor) {
    uint64_t output = 0 | input[0];
    output = output 
        | ((uint64_t)input[cursor + 1]) << 8
        | ((uint64_t)input[cursor + 2]) << 16
        | ((uint64_t)input[cursor + 3]) << 24
        | ((uint64_t)input[cursor + 4]) << 32
        | ((uint64_t)input[cursor + 5]) << 40
        | ((uint64_t)input[cursor + 6]) << 48
        | ((uint64_t)input[cursor + 7]) << 56;
    return output;
}

uint32_t xxh64_read_u32(uint8_t* input, size_t cursor) {
    uint32_t output = 0 | input[0];
    output = output 
        | ((uint64_t)input[cursor + 1]) << 8
        | ((uint64_t)input[cursor + 2]) << 16
        | ((uint64_t)input[cursor + 3]) << 24;
    return output;
}

uint64_t xxh64(uint8_t* input, size_t input_length, uint64_t seed) {
    size_t cursor = 0;
    uint64_t result = 0;

    if (input_length >= CHUNK_SIZE) {
        uint64_t v1 = seed + PRIME_1 + PRIME_2;
        uint64_t v2 = seed + PRIME_2;
        uint64_t v3 = seed;
        uint64_t v4 = seed - PRIME_1;

        do {
            v1 = xxh64_round(v1, xxh64_read_u64(input, cursor));
            cursor += sizeof(uint64_t);
            v2 = xxh64_round(v2, xxh64_read_u64(input, cursor));
            cursor += sizeof(uint64_t);
            v3 = xxh64_round(v3, xxh64_read_u64(input, cursor));
            cursor += sizeof(uint64_t);
            v4 = xxh64_round(v4, xxh64_read_u64(input, cursor));
            cursor += sizeof(uint64_t);

        } while (input_length - cursor >= CHUNK_SIZE);

        result = kk_bits_rotl64(v1, 1) + kk_bits_rotl64(v2, 7) + kk_bits_rotl64(v3, 12) + kk_bits_rotl64(v4, 18);
        
        result = xxh64_merge_round(result, v1);
        result = xxh64_merge_round(result, v2);
        result = xxh64_merge_round(result, v3);
        result = xxh64_merge_round(result, v4);
    } else {
        result = seed + PRIME_5;
    }

    result = result + input_length;

    return xxh64_finalize(result, input, input_length, cursor);
}

uint64_t xxh64_round(uint64_t acc, uint64_t input) {
    return kk_bits_rotl64(acc + input * PRIME_2, 31) * PRIME_1;
}

uint64_t xxh64_merge_round(uint64_t acc, uint64_t value) {
    acc ^= xxh64_round(0, value);
    return acc * PRIME_1 + PRIME_4;
}

uint64_t xxh64_finalize(uint64_t input, uint8_t* data, size_t data_length, uint64_t cursor) {
    uint64_t len = data_length - cursor;

    while (len >= 8) {
        input ^= xxh64_round(0, xxh64_read_u64(data, cursor));
        cursor += sizeof(uint64_t);
        len -= sizeof(uint64_t);
        input = kk_bits_rotl64(input, 27) * PRIME_1 + PRIME_4;
    }

    if (len >= 4) {
        input ^= ((uint64_t) xxh64_read_u32) * PRIME_1;
        cursor += sizeof(uint32_t);
        len -= sizeof(uint32_t);
        input = kk_bits_rotl64(input, 23) * PRIME_2 + PRIME_3;
    }

    while (len > 0) {
        input ^= data[cursor] * PRIME_5;
        cursor += sizeof(uint8_t);
        len -= sizeof(uint8_t);
        input = kk_bits_rotl64(input, 11) * PRIME_1;
    }

    return xxh64_avalanche(input);
}

uint64_t xxh64_avalanche(uint64_t input) {
    input ^= input >> 33;
    input = input * PRIME_2;
    input ^= input >> 29;
    input = input * PRIME_3;
    input ^= input >> 32;
    return input;
}

int64_t kk_std_data_hash_thread_fs_seed;

kk_unit_t kk_std_data_hash_list_hash_helper(kk_std_core_types__list l, kk_vector_t buf, kk_integer_t index, kk_function_t _implicit_fs_hasher, int64_t _implicit_fs_seed, kk_context_t* _ctx) { /* forall<a> (l : list<a>, buf : vector<int64>, index : int, ?hasher : (a, int64) -> int, ?seed : int64) -> () */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Nil(l, _ctx)) {
    kk_function_drop(_implicit_fs_hasher, _ctx);
    kk_integer_drop(index, _ctx);
    kk_vector_drop(buf, _ctx);
    kk_Unit; return kk_Unit;
  }
  {
    struct kk_std_core_types_Cons* _con_x51 = kk_std_core_types__as_Cons(l, _ctx);
    kk_box_t x = _con_x51->head;
    kk_std_core_types__list xs = _con_x51->tail;
    if kk_likely(kk_datatype_ptr_is_unique(l, _ctx)) {
      kk_datatype_ptr_free(l, _ctx);
    }
    else {
      kk_box_dup(x, _ctx);
      kk_std_core_types__list_dup(xs, _ctx);
      kk_datatype_ptr_decref(l, _ctx);
    }
    kk_ssize_t _b_x1_4;
    kk_integer_t _x_x52 = kk_integer_dup(index, _ctx); /*int*/
    _b_x1_4 = kk_std_core_int_ssize__t(_x_x52, _ctx); /*ssize_t*/
    int64_t _b_x2_5;
    kk_integer_t _x_x53;
    kk_function_t _x_x54 = kk_function_dup(_implicit_fs_hasher, _ctx); /*(114, int64) -> int*/
    _x_x53 = kk_function_call(kk_integer_t, (kk_function_t, kk_box_t, int64_t, kk_context_t*), _x_x54, (_x_x54, x, _implicit_fs_seed, _ctx), _ctx); /*int*/
    _b_x2_5 = kk_std_num_int64_int64(_x_x53, _ctx); /*int64*/
    kk_unit_t __ = kk_Unit;
    kk_vector_t _x_x55 = kk_vector_dup(buf, _ctx); /*vector<int64>*/
    kk_vector_unsafe_assign(_x_x55,_b_x1_4,(kk_int64_box(_b_x2_5, _ctx)),kk_context());
    { // tailcall
      kk_integer_t _x_x56 = kk_integer_add_small_const(index, 1, _ctx); /*int*/
      l = xs;
      index = _x_x56;
      goto kk__tailcall;
    }
  }
}
 
// A hashing function for lists. It takes a list `l`, an implicit `hasher` for hashing each element, and an implicit `seed` which is is an `int64`.
// Note: Currently a vector and list with the same elements will have the same hash.

kk_integer_t kk_std_data_hash_list_fs_hash(kk_std_core_types__list l, kk_function_t _implicit_fs_hasher, int64_t _implicit_fs_seed, kk_context_t* _ctx) { /* forall<a> (l : list<a>, ?hasher : (a, int64) -> int, ?seed : int64) -> int */ 
  kk_vector_t vec;
  kk_ssize_t _x_x57;
  kk_integer_t _x_x58;
  kk_std_core_types__list _x_x59 = kk_std_core_types__list_dup(l, _ctx); /*list<163>*/
  _x_x58 = kk_std_core_list__lift_length_4947(_x_x59, kk_integer_from_small(0), _ctx); /*int*/
  _x_x57 = kk_std_core_int_ssize__t(_x_x58, _ctx); /*ssize_t*/
  vec = kk_vector_alloc(_x_x57,kk_box_null(),kk_context()); /*vector<int64>*/
  kk_unit_t __ = kk_Unit;
  kk_vector_t _x_x60 = kk_vector_dup(vec, _ctx); /*vector<int64>*/
  kk_std_data_hash_list_hash_helper(l, _x_x60, kk_integer_from_small(0), _implicit_fs_hasher, _implicit_fs_seed, _ctx);
  return kk_hash_vector_int64(vec,_implicit_fs_seed,kk_context());
}
 
// A hashing function for vectors. It takes a vector `l`, an implicit `hasher` for hashing each element, and an implicit `seed` which is is an `int64`.
// Note: Currently a vector and list with the same elements will have the same hash.


// lift anonymous function
struct kk_std_data_hash_vector_fs_hash_fun66__t {
  struct kk_function_s _base;
  kk_vector_t v;
  kk_vector_t vec;
  kk_function_t _implicit_fs_hasher;
  int64_t _implicit_fs_seed;
};
static kk_unit_t kk_std_data_hash_vector_fs_hash_fun66(kk_function_t _fself, kk_integer_t i, kk_context_t* _ctx);
static kk_function_t kk_std_data_hash_vector_fs_new_hash_fun66(kk_vector_t v, kk_vector_t vec, kk_function_t _implicit_fs_hasher, int64_t _implicit_fs_seed, kk_context_t* _ctx) {
  struct kk_std_data_hash_vector_fs_hash_fun66__t* _self = kk_function_alloc_as(struct kk_std_data_hash_vector_fs_hash_fun66__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hash_vector_fs_hash_fun66, kk_context());
  _self->v = v;
  _self->vec = vec;
  _self->_implicit_fs_hasher = _implicit_fs_hasher;
  _self->_implicit_fs_seed = _implicit_fs_seed;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_std_data_hash_vector_fs_hash_fun66(kk_function_t _fself, kk_integer_t i, kk_context_t* _ctx) {
  struct kk_std_data_hash_vector_fs_hash_fun66__t* _self = kk_function_as(struct kk_std_data_hash_vector_fs_hash_fun66__t*, _fself, _ctx);
  kk_vector_t v = _self->v; /* vector<247> */
  kk_vector_t vec = _self->vec; /* vector<int64> */
  kk_function_t _implicit_fs_hasher = _self->_implicit_fs_hasher; /* (247, int64) -> int */
  int64_t _implicit_fs_seed = _self->_implicit_fs_seed; /* int64 */
  kk_drop_match(_self, {kk_vector_dup(v, _ctx);kk_vector_dup(vec, _ctx);kk_function_dup(_implicit_fs_hasher, _ctx);kk_skip_dup(_implicit_fs_seed, _ctx);}, {}, _ctx)
  kk_ssize_t _b_x7_10;
  kk_integer_t _x_x67 = kk_integer_dup(i, _ctx); /*int*/
  _b_x7_10 = kk_std_core_int_ssize__t(_x_x67, _ctx); /*ssize_t*/
  int64_t _b_x8_11;
  kk_integer_t _x_x68;
  kk_box_t _x_x69;
  kk_ssize_t _own_x46 = kk_std_core_int_ssize__t(i, _ctx); /*ssize_t*/;
  kk_box_t _brw_x47 = kk_vector_at_borrow(v,_own_x46,kk_context()); /*1298*/;
  kk_vector_drop(v, _ctx);
  _x_x69 = _brw_x47; /*1298*/
  _x_x68 = kk_function_call(kk_integer_t, (kk_function_t, kk_box_t, int64_t, kk_context_t*), _implicit_fs_hasher, (_implicit_fs_hasher, _x_x69, _implicit_fs_seed, _ctx), _ctx); /*int*/
  _b_x8_11 = kk_std_num_int64_int64(_x_x68, _ctx); /*int64*/
  kk_vector_unsafe_assign(vec,_b_x7_10,(kk_int64_box(_b_x8_11, _ctx)),kk_context()); return kk_Unit;
}

kk_integer_t kk_std_data_hash_vector_fs_hash(kk_vector_t v, kk_function_t _implicit_fs_hasher, int64_t _implicit_fs_seed, kk_context_t* _ctx) { /* forall<a> (v : vector<a>, ?hasher : (a, int64) -> int, ?seed : int64) -> int */ 
  kk_vector_t vec;
  kk_ssize_t _x_x61;
  kk_integer_t _x_x62;
  kk_ssize_t _x_x63 = kk_vector_len_borrow(v,kk_context()); /*ssize_t*/
  _x_x62 = kk_integer_from_ssize_t(_x_x63,kk_context()); /*int*/
  _x_x61 = kk_std_core_int_ssize__t(_x_x62, _ctx); /*ssize_t*/
  vec = kk_vector_alloc(_x_x61,kk_box_null(),kk_context()); /*vector<int64>*/
  kk_unit_t __ = kk_Unit;
  kk_integer_t _brw_x48;
  kk_ssize_t _x_x64 = kk_vector_len_borrow(v,kk_context()); /*ssize_t*/
  _brw_x48 = kk_integer_from_ssize_t(_x_x64,kk_context()); /*int*/
  kk_unit_t _brw_x49 = kk_Unit;
  kk_function_t _x_x65;
  kk_vector_dup(vec, _ctx);
  _x_x65 = kk_std_data_hash_vector_fs_new_hash_fun66(v, vec, _implicit_fs_hasher, _implicit_fs_seed, _ctx); /*(i : int) -> ()*/
  kk_std_core_for(_brw_x48, _x_x65, _ctx);
  kk_integer_drop(_brw_x48, _ctx);
  _brw_x49;
  return kk_hash_vector_int64(vec,_implicit_fs_seed,kk_context());
}
 
// A hashing function for eithers. It takes an either `e`, 2 implicit `hasher`s for hashing `Left` and `Right`, and an implicit `seed` which is is an `int64`.

kk_integer_t kk_std_data_hash_either_fs_hash(kk_std_core_types__either e, kk_function_t _implicit_fs_l_fs_hasher, kk_function_t _implicit_fs_r_fs_hasher, int64_t seed, kk_context_t* _ctx) { /* forall<a,b> (e : either<a,b>, ?l/hasher : (a, int64) -> int, ?r/hasher : (b, int64) -> int, seed : int64) -> int */ 
  kk_std_core_types__tuple2 hash_key;
  if (kk_std_core_types__is_Left(e, _ctx)) {
    kk_box_t l = e._cons.Left.left;
    kk_function_drop(_implicit_fs_r_fs_hasher, _ctx);
    kk_integer_t _b_x12_16 = kk_function_call(kk_integer_t, (kk_function_t, kk_box_t, int64_t, kk_context_t*), _implicit_fs_l_fs_hasher, (_implicit_fs_l_fs_hasher, l, seed, _ctx), _ctx); /*int*/;
    hash_key = kk_std_core_types__new_Tuple2(kk_integer_box(_b_x12_16, _ctx), kk_integer_box(kk_integer_from_str("979671666476914879931210933431", _ctx), _ctx), _ctx); /*(int, int)*/
  }
  else {
    kk_box_t r = e._cons.Right.right;
    kk_function_drop(_implicit_fs_l_fs_hasher, _ctx);
    kk_integer_t _b_x14_18 = kk_function_call(kk_integer_t, (kk_function_t, kk_box_t, int64_t, kk_context_t*), _implicit_fs_r_fs_hasher, (_implicit_fs_r_fs_hasher, r, seed, _ctx), _ctx); /*int*/;
    hash_key = kk_std_core_types__new_Tuple2(kk_integer_box(_b_x14_18, _ctx), kk_integer_box(kk_integer_from_str("214237100480734178309831475373", _ctx), _ctx), _ctx); /*(int, int)*/
  }
  {
    kk_box_t _box_x20 = hash_key.fst;
    kk_box_t _box_x21 = hash_key.snd;
    kk_integer_t the_hash = kk_integer_unbox(_box_x20, _ctx);
    kk_integer_t prime = kk_integer_unbox(_box_x21, _ctx);
    kk_integer_dup(prime, _ctx);
    kk_integer_dup(the_hash, _ctx);
    kk_std_core_types__tuple2_drop(hash_key, _ctx);
    kk_vector_t vec = kk_vector_alloc(((KK_IZ(2))),kk_box_null(),kk_context()); /*vector<int64>*/;
    kk_ssize_t _b_x23_26 = (KK_IZ(0)); /*ssize_t*/;
    int64_t _b_x24_27 = kk_std_num_int64_int64(the_hash, _ctx); /*int64*/;
    kk_unit_t __ = kk_Unit;
    kk_vector_t _x_x70 = kk_vector_dup(vec, _ctx); /*vector<int64>*/
    kk_vector_unsafe_assign(_x_x70,_b_x23_26,(kk_int64_box(_b_x24_27, _ctx)),kk_context());
    kk_ssize_t _b_x29_32 = (KK_IZ(1)); /*ssize_t*/;
    int64_t _b_x30_33 = kk_std_num_int64_int64(prime, _ctx); /*int64*/;
    kk_unit_t ___0 = kk_Unit;
    kk_vector_t _x_x71 = kk_vector_dup(vec, _ctx); /*vector<int64>*/
    kk_vector_unsafe_assign(_x_x71,_b_x29_32,(kk_int64_box(_b_x30_33, _ctx)),kk_context());
    return kk_hash_vector_int64(vec,seed,kk_context());
  }
}
 
// A hashing function for maybes. It takes a maybe `m`, an implicit `hasher` for `Just(a)`, and an implicit `seed` which is is an `int64`.

kk_integer_t kk_std_data_hash_maybe_fs_hash(kk_std_core_types__maybe m, kk_function_t _implicit_fs_hasher, int64_t seed, kk_context_t* _ctx) { /* forall<a> (m : maybe<a>, ?hasher : (a, int64) -> int, seed : int64) -> int */ 
  if (kk_std_core_types__is_Nothing(m, _ctx)) {
    kk_function_drop(_implicit_fs_hasher, _ctx);
    return kk_integer_hash((kk_integer_from_str("109043358147367465933604847619", _ctx)),seed,kk_context());
  }
  {
    kk_box_t x = m._cons.Just.value;
    kk_vector_t vec = kk_vector_alloc(((KK_IZ(2))),kk_box_null(),kk_context()); /*vector<int64>*/;
    kk_ssize_t _b_x35_38 = (KK_IZ(0)); /*ssize_t*/;
    int64_t _b_x36_39;
    kk_integer_t _x_x72 = kk_function_call(kk_integer_t, (kk_function_t, kk_box_t, int64_t, kk_context_t*), _implicit_fs_hasher, (_implicit_fs_hasher, x, seed, _ctx), _ctx); /*int*/
    _b_x36_39 = kk_std_num_int64_int64(_x_x72, _ctx); /*int64*/
    kk_unit_t __ = kk_Unit;
    kk_vector_t _x_x73 = kk_vector_dup(vec, _ctx); /*vector<int64>*/
    kk_vector_unsafe_assign(_x_x73,_b_x35_38,(kk_int64_box(_b_x36_39, _ctx)),kk_context());
    kk_ssize_t _b_x41_44 = (KK_IZ(1)); /*ssize_t*/;
    int64_t _b_x42_45 = kk_std_num_int64_int64(kk_integer_from_str("636221073298515699161266525619", _ctx), _ctx); /*int64*/;
    kk_unit_t ___0 = kk_Unit;
    kk_vector_t _x_x74 = kk_vector_dup(vec, _ctx); /*vector<int64>*/
    kk_vector_unsafe_assign(_x_x74,_b_x41_44,(kk_int64_box(_b_x42_45, _ctx)),kk_context());
    return kk_hash_vector_int64(vec,seed,kk_context());
  }
}

// initialization
void kk_std_data_hash__init(kk_context_t* _ctx){
  static bool _kk_initialized = false;
  if (_kk_initialized) return;
  _kk_initialized = true;
  kk_std_core_types__init(_ctx);
  kk_std_core_hnd__init(_ctx);
  kk_std_core_exn__init(_ctx);
  kk_std_core_bool__init(_ctx);
  kk_std_core_order__init(_ctx);
  kk_std_core_char__init(_ctx);
  kk_std_core_int__init(_ctx);
  kk_std_core_vector__init(_ctx);
  kk_std_core_string__init(_ctx);
  kk_std_core_sslice__init(_ctx);
  kk_std_core_list__init(_ctx);
  kk_std_core_maybe__init(_ctx);
  kk_std_core_either__init(_ctx);
  kk_std_core_tuple__init(_ctx);
  kk_std_core_show__init(_ctx);
  kk_std_core_debug__init(_ctx);
  kk_std_core_delayed__init(_ctx);
  kk_std_core_console__init(_ctx);
  kk_std_core__init(_ctx);
  kk_std_num_int64__init(_ctx);
  kk_std_test_test__init(_ctx);
  kk_std_core_dash_extras__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
  {
    kk_std_data_hash_thread_fs_seed = kk_thread_seed(kk_context()); /*int64*/
  }
}

// termination
void kk_std_data_hash__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_skip_drop(kk_std_data_hash_thread_fs_seed, _ctx);
  kk_std_core_dash_extras__done(_ctx);
  kk_std_test_test__done(_ctx);
  kk_std_num_int64__done(_ctx);
  kk_std_core__done(_ctx);
  kk_std_core_console__done(_ctx);
  kk_std_core_delayed__done(_ctx);
  kk_std_core_debug__done(_ctx);
  kk_std_core_show__done(_ctx);
  kk_std_core_tuple__done(_ctx);
  kk_std_core_either__done(_ctx);
  kk_std_core_maybe__done(_ctx);
  kk_std_core_list__done(_ctx);
  kk_std_core_sslice__done(_ctx);
  kk_std_core_string__done(_ctx);
  kk_std_core_vector__done(_ctx);
  kk_std_core_int__done(_ctx);
  kk_std_core_char__done(_ctx);
  kk_std_core_order__done(_ctx);
  kk_std_core_bool__done(_ctx);
  kk_std_core_exn__done(_ctx);
  kk_std_core_hnd__done(_ctx);
  kk_std_core_types__done(_ctx);
}
