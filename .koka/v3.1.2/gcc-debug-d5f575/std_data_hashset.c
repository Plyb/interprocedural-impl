// Koka generated module: std/data/hashset, koka version: 3.1.2, platform: 64-bit
#include "std_data_hashset.h"

kk_std_data_hashset__hash_set kk_std_data_hashset_hash_set_fs__copy(kk_std_data_hashset__hash_set _this, kk_std_core_types__optional data, kk_std_core_types__optional amount, kk_std_core_types__optional seed, kk_context_t* _ctx) { /* forall<a> (hash-set<a>, data : ? (vector<list<a>>), amount : ? int, seed : ? int64) -> hash-set<a> */ 
  kk_vector_t _x_x1083;
  if (kk_std_core_types__is_Optional(data, _ctx)) {
    kk_box_t _box_x0 = data._cons._Optional.value;
    kk_vector_t _uniq_data_216 = kk_vector_unbox(_box_x0, _ctx);
    kk_vector_dup(_uniq_data_216, _ctx);
    kk_std_core_types__optional_drop(data, _ctx);
    _x_x1083 = _uniq_data_216; /*vector<list<250>>*/
  }
  else {
    kk_std_core_types__optional_drop(data, _ctx);
    {
      struct kk_std_data_hashset_Hash_set* _con_x1084 = kk_std_data_hashset__as_Hash_set(_this, _ctx);
      kk_vector_t _x = _con_x1084->data;
      kk_vector_dup(_x, _ctx);
      _x_x1083 = _x; /*vector<list<250>>*/
    }
  }
  kk_integer_t _x_x1085;
  if (kk_std_core_types__is_Optional(amount, _ctx)) {
    kk_box_t _box_x1 = amount._cons._Optional.value;
    kk_integer_t _uniq_amount_226 = kk_integer_unbox(_box_x1, _ctx);
    kk_integer_dup(_uniq_amount_226, _ctx);
    kk_std_core_types__optional_drop(amount, _ctx);
    _x_x1085 = _uniq_amount_226; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(amount, _ctx);
    {
      struct kk_std_data_hashset_Hash_set* _con_x1086 = kk_std_data_hashset__as_Hash_set(_this, _ctx);
      kk_integer_t _x_0 = _con_x1086->amount;
      kk_integer_dup(_x_0, _ctx);
      _x_x1085 = _x_0; /*int*/
    }
  }
  int64_t _x_x1087;
  if (kk_std_core_types__is_Optional(seed, _ctx)) {
    kk_box_t _box_x2 = seed._cons._Optional.value;
    int64_t _uniq_seed_236 = kk_int64_unbox(_box_x2, KK_BORROWED, _ctx);
    kk_std_core_types__optional_drop(seed, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(2)), _ctx);
    _x_x1087 = _uniq_seed_236; /*int64*/
  }
  else {
    kk_std_core_types__optional_drop(seed, _ctx);
    {
      struct kk_std_data_hashset_Hash_set* _con_x1088 = kk_std_data_hashset__as_Hash_set(_this, _ctx);
      kk_vector_t _pat_0_2 = _con_x1088->data;
      kk_integer_t _pat_1_3 = _con_x1088->amount;
      int64_t _x_1 = _con_x1088->seed;
      if kk_likely(kk_datatype_ptr_is_unique(_this, _ctx)) {
        kk_integer_drop(_pat_1_3, _ctx);
        kk_vector_drop(_pat_0_2, _ctx);
        kk_datatype_ptr_free(_this, _ctx);
      }
      else {
        kk_datatype_ptr_decref(_this, _ctx);
      }
      _x_x1087 = _x_1; /*int64*/
    }
  }
  return kk_std_data_hashset__new_Hash_set(kk_reuse_null, 0, _x_x1083, _x_x1085, _x_x1087, _ctx);
}
extern kk_integer_t kk_std_data_hashset_int_hash_fun1091(kk_function_t _fself, kk_integer_t _x1_x1089, int64_t _x2_x1090, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hash_int_fs_hash(_x1_x1089, _x2_x1090, _ctx);
}

kk_function_t kk_std_data_hashset_int_hash;
extern kk_integer_t kk_std_data_hashset_char_hash_fun1094(kk_function_t _fself, kk_char_t _x1_x1092, int64_t _x2_x1093, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hash_char_fs_hash(_x1_x1092, _x2_x1093, _ctx);
}

kk_function_t kk_std_data_hashset_char_hash;
extern kk_integer_t kk_std_data_hashset_bool_hash_fun1097(kk_function_t _fself, bool _x1_x1095, int64_t _x2_x1096, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hash_bool_fs_hash(_x1_x1095, _x2_x1096, _ctx);
}

kk_function_t kk_std_data_hashset_bool_hash;
extern kk_integer_t kk_std_data_hashset_string_hash_fun1100(kk_function_t _fself, kk_string_t _x_x1098, int64_t _x_x1099, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_string_hash(_x_x1098,_x_x1099,kk_context());
}

kk_function_t kk_std_data_hashset_string_hash;
 
// Creates a hash-set with a specified inital `capacity`.
// If zero then the hash-set will set capacity to 1.
// The seed is initialized from the thread id.

kk_std_data_hashset__hash_set kk_std_data_hashset_thread_fs_hash_set(kk_std_core_types__optional capacity, kk_context_t* _ctx) { /* forall<a> (capacity : ? int) -> hash-set<a> */ 
  kk_integer_t n_10003;
  bool _match_x1056;
  kk_integer_t _brw_x1057;
  if (kk_std_core_types__is_Optional(capacity, _ctx)) {
    kk_box_t _box_x3 = capacity._cons._Optional.value;
    kk_integer_t _uniq_capacity_275 = kk_integer_unbox(_box_x3, _ctx);
    kk_integer_dup(_uniq_capacity_275, _ctx);
    _brw_x1057 = _uniq_capacity_275; /*int*/
  }
  else {
    _brw_x1057 = kk_integer_from_small(1); /*int*/
  }
  bool _brw_x1058 = kk_integer_gt_borrow(_brw_x1057,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x1057, _ctx);
  _match_x1056 = _brw_x1058; /*bool*/
  if (_match_x1056) {
    if (kk_std_core_types__is_Optional(capacity, _ctx)) {
      kk_box_t _box_x4 = capacity._cons._Optional.value;
      kk_integer_t _uniq_capacity_275_0 = kk_integer_unbox(_box_x4, _ctx);
      kk_integer_dup(_uniq_capacity_275_0, _ctx);
      kk_std_core_types__optional_drop(capacity, _ctx);
      n_10003 = _uniq_capacity_275_0; /*int*/
    }
    else {
      kk_std_core_types__optional_drop(capacity, _ctx);
      n_10003 = kk_integer_from_small(1); /*int*/
    }
  }
  else {
    kk_std_core_types__optional_drop(capacity, _ctx);
    n_10003 = kk_integer_from_small(1); /*int*/
  }
  kk_ssize_t _b_x5_7 = kk_std_core_int_ssize__t(n_10003, _ctx); /*ssize_t*/;
  kk_vector_t _x_x1101 = kk_std_core_vector_vector_alloc(_b_x5_7, kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx), _ctx); /*vector<3001>*/
  return kk_std_data_hashset__new_Hash_set(kk_reuse_null, 0, _x_x1101, kk_integer_from_small(0), kk_std_data_hash_thread_fs_seed, _ctx);
}
 
// monadic lift

kk_std_data_hashset__hash_set kk_std_data_hashset_random_fs__mlift_hash_set_10229(kk_std_core_types__optional capacity, int64_t _y_x10097, kk_context_t* _ctx) { /* forall<a> (capacity : ? int, int64) -> std/num/random/random hash-set<a> */ 
  kk_integer_t n_10143;
  bool _match_x1053;
  kk_integer_t _brw_x1054;
  if (kk_std_core_types__is_Optional(capacity, _ctx)) {
    kk_box_t _box_x9 = capacity._cons._Optional.value;
    kk_integer_t _uniq_capacity_332 = kk_integer_unbox(_box_x9, _ctx);
    kk_integer_dup(_uniq_capacity_332, _ctx);
    _brw_x1054 = _uniq_capacity_332; /*int*/
  }
  else {
    _brw_x1054 = kk_integer_from_small(1); /*int*/
  }
  bool _brw_x1055 = kk_integer_gt_borrow(_brw_x1054,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x1054, _ctx);
  _match_x1053 = _brw_x1055; /*bool*/
  if (_match_x1053) {
    if (kk_std_core_types__is_Optional(capacity, _ctx)) {
      kk_box_t _box_x10 = capacity._cons._Optional.value;
      kk_integer_t _uniq_capacity_332_0 = kk_integer_unbox(_box_x10, _ctx);
      kk_integer_dup(_uniq_capacity_332_0, _ctx);
      kk_std_core_types__optional_drop(capacity, _ctx);
      n_10143 = _uniq_capacity_332_0; /*int*/
    }
    else {
      kk_std_core_types__optional_drop(capacity, _ctx);
      n_10143 = kk_integer_from_small(1); /*int*/
    }
  }
  else {
    kk_std_core_types__optional_drop(capacity, _ctx);
    n_10143 = kk_integer_from_small(1); /*int*/
  }
  kk_ssize_t _b_x11_13 = kk_std_core_int_ssize__t(n_10143, _ctx); /*ssize_t*/;
  kk_vector_t _x_x1102 = kk_std_core_vector_vector_alloc(_b_x11_13, kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx), _ctx); /*vector<3001>*/
  return kk_std_data_hashset__new_Hash_set(kk_reuse_null, 0, _x_x1102, kk_integer_from_small(0), _y_x10097, _ctx);
}
 
// Creates a hash-set with a specified inital `capacity`.
// If zero then the hash-set will set capacity to 1.
// Random effect is needed to initalize the seed.


// lift anonymous function
struct kk_std_data_hashset_random_fs_hash_set_fun1104__t {
  struct kk_function_s _base;
  kk_std_core_types__optional capacity;
};
static kk_box_t kk_std_data_hashset_random_fs_hash_set_fun1104(kk_function_t _fself, kk_box_t _b_x16, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_random_fs_new_hash_set_fun1104(kk_std_core_types__optional capacity, kk_context_t* _ctx) {
  struct kk_std_data_hashset_random_fs_hash_set_fun1104__t* _self = kk_function_alloc_as(struct kk_std_data_hashset_random_fs_hash_set_fun1104__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset_random_fs_hash_set_fun1104, kk_context());
  _self->capacity = capacity;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashset_random_fs_hash_set_fun1104(kk_function_t _fself, kk_box_t _b_x16, kk_context_t* _ctx) {
  struct kk_std_data_hashset_random_fs_hash_set_fun1104__t* _self = kk_function_as(struct kk_std_data_hashset_random_fs_hash_set_fun1104__t*, _fself, _ctx);
  kk_std_core_types__optional capacity = _self->capacity; /* ? int */
  kk_drop_match(_self, {kk_std_core_types__optional_dup(capacity, _ctx);}, {}, _ctx)
  int64_t _y_x10097_24 = kk_int64_unbox(_b_x16, KK_OWNED, _ctx); /*int64*/;
  kk_std_data_hashset__hash_set _x_x1105 = kk_std_data_hashset_random_fs__mlift_hash_set_10229(capacity, _y_x10097_24, _ctx); /*std/data/hashset/hash-set<382>*/
  return kk_std_data_hashset__hash_set_box(_x_x1105, _ctx);
}

kk_std_data_hashset__hash_set kk_std_data_hashset_random_fs_hash_set(kk_std_core_types__optional capacity, kk_context_t* _ctx) { /* forall<a> (capacity : ? int) -> std/num/random/random hash-set<a> */ 
  int64_t x_10250 = kk_std_num_random_random_int64(_ctx); /*int64*/;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1103 = kk_std_core_hnd_yield_extend(kk_std_data_hashset_random_fs_new_hash_set_fun1104(capacity, _ctx), _ctx); /*3003*/
    return kk_std_data_hashset__hash_set_unbox(_x_x1103, KK_OWNED, _ctx);
  }
  {
    kk_integer_t n_10143;
    bool _match_x1050;
    kk_integer_t _brw_x1051;
    if (kk_std_core_types__is_Optional(capacity, _ctx)) {
      kk_box_t _box_x17 = capacity._cons._Optional.value;
      kk_integer_t _uniq_capacity_332 = kk_integer_unbox(_box_x17, _ctx);
      kk_integer_dup(_uniq_capacity_332, _ctx);
      _brw_x1051 = _uniq_capacity_332; /*int*/
    }
    else {
      _brw_x1051 = kk_integer_from_small(1); /*int*/
    }
    bool _brw_x1052 = kk_integer_gt_borrow(_brw_x1051,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    kk_integer_drop(_brw_x1051, _ctx);
    _match_x1050 = _brw_x1052; /*bool*/
    if (_match_x1050) {
      if (kk_std_core_types__is_Optional(capacity, _ctx)) {
        kk_box_t _box_x18 = capacity._cons._Optional.value;
        kk_integer_t _uniq_capacity_332_0 = kk_integer_unbox(_box_x18, _ctx);
        kk_integer_dup(_uniq_capacity_332_0, _ctx);
        kk_std_core_types__optional_drop(capacity, _ctx);
        n_10143 = _uniq_capacity_332_0; /*int*/
      }
      else {
        kk_std_core_types__optional_drop(capacity, _ctx);
        n_10143 = kk_integer_from_small(1); /*int*/
      }
    }
    else {
      kk_std_core_types__optional_drop(capacity, _ctx);
      n_10143 = kk_integer_from_small(1); /*int*/
    }
    kk_ssize_t _b_x19_22 = kk_std_core_int_ssize__t(n_10143, _ctx); /*ssize_t*/;
    kk_vector_t _x_x1106 = kk_std_core_vector_vector_alloc(_b_x19_22, kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx), _ctx); /*vector<3001>*/
    return kk_std_data_hashset__new_Hash_set(kk_reuse_null, 0, _x_x1106, kk_integer_from_small(0), x_10250, _ctx);
  }
}
 
// Creates a hash-set with a specified inital `capacity` and a user defined `seed`.
// If zero then the hash-set will set capacity to 1.

kk_std_data_hashset__hash_set kk_std_data_hashset_hash_set_seeded(int64_t seed, kk_std_core_types__optional capacity, kk_context_t* _ctx) { /* forall<a> (seed : int64, capacity : ? int) -> hash-set<a> */ 
  kk_integer_t n_10005;
  bool _match_x1046;
  kk_integer_t _brw_x1047;
  if (kk_std_core_types__is_Optional(capacity, _ctx)) {
    kk_box_t _box_x25 = capacity._cons._Optional.value;
    kk_integer_t _uniq_capacity_391 = kk_integer_unbox(_box_x25, _ctx);
    kk_integer_dup(_uniq_capacity_391, _ctx);
    _brw_x1047 = _uniq_capacity_391; /*int*/
  }
  else {
    _brw_x1047 = kk_integer_from_small(1); /*int*/
  }
  bool _brw_x1048 = kk_integer_gt_borrow(_brw_x1047,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x1047, _ctx);
  _match_x1046 = _brw_x1048; /*bool*/
  if (_match_x1046) {
    if (kk_std_core_types__is_Optional(capacity, _ctx)) {
      kk_box_t _box_x26 = capacity._cons._Optional.value;
      kk_integer_t _uniq_capacity_391_0 = kk_integer_unbox(_box_x26, _ctx);
      kk_integer_dup(_uniq_capacity_391_0, _ctx);
      kk_std_core_types__optional_drop(capacity, _ctx);
      n_10005 = _uniq_capacity_391_0; /*int*/
    }
    else {
      kk_std_core_types__optional_drop(capacity, _ctx);
      n_10005 = kk_integer_from_small(1); /*int*/
    }
  }
  else {
    kk_std_core_types__optional_drop(capacity, _ctx);
    n_10005 = kk_integer_from_small(1); /*int*/
  }
  kk_ssize_t _b_x27_29 = kk_std_core_int_ssize__t(n_10005, _ctx); /*ssize_t*/;
  kk_vector_t _x_x1107 = kk_std_core_vector_vector_alloc(_b_x27_29, kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx), _ctx); /*vector<3001>*/
  return kk_std_data_hashset__new_Hash_set(kk_reuse_null, 0, _x_x1107, kk_integer_from_small(0), seed, _ctx);
}
 
// Fetches the amount of items in the hash-set

kk_integer_t kk_std_data_hashset_length(kk_std_data_hashset__hash_set hs, kk_context_t* _ctx) { /* forall<a> (hs : hash-set<a>) -> int */ 
  {
    struct kk_std_data_hashset_Hash_set* _con_x1108 = kk_std_data_hashset__as_Hash_set(hs, _ctx);
    kk_vector_t _pat_0 = _con_x1108->data;
    kk_integer_t _x = _con_x1108->amount;
    if kk_likely(kk_datatype_ptr_is_unique(hs, _ctx)) {
      kk_vector_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(hs, _ctx);
    }
    else {
      kk_integer_dup(_x, _ctx);
      kk_datatype_ptr_decref(hs, _ctx);
    }
    return _x;
  }
}
 
// This helper function either clears out a vector if it is unique or creates a new vector if it isn't unique.


// lift anonymous function
struct kk_std_data_hashset_helper_fs_resize_fun1111__t {
  struct kk_function_s _base;
  kk_vector_t v;
};
static kk_unit_t kk_std_data_hashset_helper_fs_resize_fun1111(kk_function_t _fself, kk_integer_t i, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_helper_fs_new_resize_fun1111(kk_vector_t v, kk_context_t* _ctx) {
  struct kk_std_data_hashset_helper_fs_resize_fun1111__t* _self = kk_function_alloc_as(struct kk_std_data_hashset_helper_fs_resize_fun1111__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset_helper_fs_resize_fun1111, kk_context());
  _self->v = v;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_std_data_hashset_helper_fs_resize_fun1111(kk_function_t _fself, kk_integer_t i, kk_context_t* _ctx) {
  struct kk_std_data_hashset_helper_fs_resize_fun1111__t* _self = kk_function_as(struct kk_std_data_hashset_helper_fs_resize_fun1111__t*, _fself, _ctx);
  kk_vector_t v = _self->v; /* vector<list<548>> */
  kk_drop_match(_self, {kk_vector_dup(v, _ctx);}, {}, _ctx)
  kk_unit_t __ = kk_Unit;
  kk_ssize_t _own_x1043;
  kk_integer_t _x_x1112 = kk_integer_dup(i, _ctx); /*int*/
  _own_x1043 = kk_std_core_int_ssize__t(_x_x1112, _ctx); /*ssize_t*/
  kk_vector_dup(v, kk_context()); kk_box_drop(kk_vector_at_borrow(v, _own_x1043, kk_context()), kk_context()); kk_vector_unsafe_assign(v, _own_x1043, kk_box_null(), kk_context());
  kk_ssize_t _b_x32_35 = kk_std_core_int_ssize__t(i, _ctx); /*ssize_t*/;
  kk_vector_unsafe_assign(v,_b_x32_35,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); return kk_Unit;
}

kk_vector_t kk_std_data_hashset_helper_fs_resize(kk_vector_t v, kk_context_t* _ctx) { /* forall<a> (v : vector<list<a>>) -> vector<list<a>> */ 
  bool _match_x1041 = kk_datatype_is_unique(v, kk_context()); /*bool*/;
  if (_match_x1041) {
    kk_unit_t ___0 = kk_Unit;
    kk_integer_t _brw_x1044;
    kk_ssize_t _x_x1109 = kk_vector_len_borrow(v,kk_context()); /*ssize_t*/
    _brw_x1044 = kk_integer_from_ssize_t(_x_x1109,kk_context()); /*int*/
    kk_unit_t _brw_x1045 = kk_Unit;
    kk_function_t _x_x1110;
    kk_vector_dup(v, _ctx);
    _x_x1110 = kk_std_data_hashset_helper_fs_new_resize_fun1111(v, _ctx); /*(i : int) -> ()*/
    kk_std_core_for(_brw_x1044, _x_x1110, _ctx);
    kk_integer_drop(_brw_x1044, _ctx);
    _brw_x1045;
    return v;
  }
  {
    kk_integer_t n_10009;
    kk_ssize_t _x_x1113;
    kk_ssize_t _brw_x1042 = kk_vector_len_borrow(v,kk_context()); /*ssize_t*/;
    kk_vector_drop(v, _ctx);
    _x_x1113 = _brw_x1042; /*ssize_t*/
    n_10009 = kk_integer_from_ssize_t(_x_x1113,kk_context()); /*int*/
    kk_ssize_t _b_x37_39 = kk_std_core_int_ssize__t(n_10009, _ctx); /*ssize_t*/;
    return kk_std_core_vector_vector_alloc(_b_x37_39, kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx), _ctx);
  }
}
 
// Checks if a value is in the hash-set `hs` and returns `True` if found and `False` if not found.


// lift anonymous function
struct kk_std_data_hashset_contains_fun1123__t {
  struct kk_function_s _base;
  kk_box_t value;
  kk_function_t _implicit_fs__lp__eq__eq__rp_;
};
static bool kk_std_data_hashset_contains_fun1123(kk_function_t _fself, kk_box_t x, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_new_contains_fun1123(kk_box_t value, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) {
  struct kk_std_data_hashset_contains_fun1123__t* _self = kk_function_alloc_as(struct kk_std_data_hashset_contains_fun1123__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset_contains_fun1123, kk_context());
  _self->value = value;
  _self->_implicit_fs__lp__eq__eq__rp_ = _implicit_fs__lp__eq__eq__rp_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_std_data_hashset_contains_fun1123(kk_function_t _fself, kk_box_t x, kk_context_t* _ctx) {
  struct kk_std_data_hashset_contains_fun1123__t* _self = kk_function_as(struct kk_std_data_hashset_contains_fun1123__t*, _fself, _ctx);
  kk_box_t value = _self->value; /* 675 */
  kk_function_t _implicit_fs__lp__eq__eq__rp_ = _self->_implicit_fs__lp__eq__eq__rp_; /* (675, 675) -> bool */
  kk_drop_match(_self, {kk_box_dup(value, _ctx);kk_function_dup(_implicit_fs__lp__eq__eq__rp_, _ctx);}, {}, _ctx)
  return kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs__lp__eq__eq__rp_, (_implicit_fs__lp__eq__eq__rp_, x, value, _ctx), _ctx);
}

bool kk_std_data_hashset_contains(kk_std_data_hashset__hash_set hs, kk_box_t value, kk_function_t _implicit_fs_hash, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) { /* forall<a> (hs : hash-set<a>, value : a, ?hash : (a, int64) -> int, ?(==) : (a, a) -> bool) -> bool */ 
  kk_integer_t the_hash;
  kk_box_t _x_x1114 = kk_box_dup(value, _ctx); /*675*/
  int64_t _x_x1115;
  {
    struct kk_std_data_hashset_Hash_set* _con_x1116 = kk_std_data_hashset__as_Hash_set(hs, _ctx);
    int64_t _x = _con_x1116->seed;
    _x_x1115 = _x; /*int64*/
  }
  the_hash = kk_function_call(kk_integer_t, (kk_function_t, kk_box_t, int64_t, kk_context_t*), _implicit_fs_hash, (_implicit_fs_hash, _x_x1114, _x_x1115, _ctx), _ctx); /*int*/
  kk_integer_t position;
  kk_integer_t _x_x1117;
  kk_ssize_t _x_x1118;
  kk_vector_t _brw_x1039;
  {
    struct kk_std_data_hashset_Hash_set* _con_x1119 = kk_std_data_hashset__as_Hash_set(hs, _ctx);
    kk_vector_t _x_0 = _con_x1119->data;
    kk_vector_dup(_x_0, _ctx);
    _brw_x1039 = _x_0; /*vector<list<675>>*/
  }
  kk_ssize_t _brw_x1040 = kk_vector_len_borrow(_brw_x1039,kk_context()); /*ssize_t*/;
  kk_vector_drop(_brw_x1039, _ctx);
  _x_x1118 = _brw_x1040; /*ssize_t*/
  _x_x1117 = kk_integer_from_ssize_t(_x_x1118,kk_context()); /*int*/
  position = kk_integer_mod(the_hash,_x_x1117,kk_context()); /*int*/
  kk_vector_t _b_x41_43;
  {
    struct kk_std_data_hashset_Hash_set* _con_x1120 = kk_std_data_hashset__as_Hash_set(hs, _ctx);
    kk_vector_t _x_1 = _con_x1120->data;
    kk_integer_t _pat_0_1 = _con_x1120->amount;
    if kk_likely(kk_datatype_ptr_is_unique(hs, _ctx)) {
      kk_integer_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(hs, _ctx);
    }
    else {
      kk_vector_dup(_x_1, _ctx);
      kk_datatype_ptr_decref(hs, _ctx);
    }
    _b_x41_43 = _x_1; /*vector<list<675>>*/
  }
  kk_ssize_t _b_x42_44 = kk_std_core_int_ssize__t(position, _ctx); /*ssize_t*/;
  kk_std_core_types__list _match_x1037;
  kk_std_core_types__list _x_x1121;
  kk_box_t _x_x1122;
  kk_box_t _brw_x1038 = kk_vector_at_borrow(_b_x41_43,_b_x42_44,kk_context()); /*1001*/;
  kk_vector_drop(_b_x41_43, _ctx);
  _x_x1122 = _brw_x1038; /*1001*/
  _x_x1121 = kk_std_core_types__list_unbox(_x_x1122, KK_OWNED, _ctx); /*list<675>*/
  _match_x1037 = kk_std_core_list_filter(_x_x1121, kk_std_data_hashset_new_contains_fun1123(value, _implicit_fs__lp__eq__eq__rp_, _ctx), _ctx); /*list<1001>*/
  if (kk_std_core_types__is_Cons(_match_x1037, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1124 = kk_std_core_types__as_Cons(_match_x1037, _ctx);
    kk_box_t _pat_0_2 = _con_x1124->head;
    kk_std_core_types__list _pat_1_2 = _con_x1124->tail;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x1037, _ctx)) {
      kk_std_core_types__list_drop(_pat_1_2, _ctx);
      kk_box_drop(_pat_0_2, _ctx);
      kk_datatype_ptr_free(_match_x1037, _ctx);
    }
    else {
      kk_datatype_ptr_decref(_match_x1037, _ctx);
    }
    return true;
  }
  {
    return false;
  }
}
 
// Removes all buckets from the hash-set, effectively clearing the hash-set.


// lift anonymous function
struct kk_std_data_hashset_clear_fun1128__t {
  struct kk_function_s _base;
  kk_vector_t data;
};
static kk_unit_t kk_std_data_hashset_clear_fun1128(kk_function_t _fself, kk_integer_t x, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_new_clear_fun1128(kk_vector_t data, kk_context_t* _ctx) {
  struct kk_std_data_hashset_clear_fun1128__t* _self = kk_function_alloc_as(struct kk_std_data_hashset_clear_fun1128__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset_clear_fun1128, kk_context());
  _self->data = data;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_std_data_hashset_clear_fun1128(kk_function_t _fself, kk_integer_t x, kk_context_t* _ctx) {
  struct kk_std_data_hashset_clear_fun1128__t* _self = kk_function_as(struct kk_std_data_hashset_clear_fun1128__t*, _fself, _ctx);
  kk_vector_t data = _self->data; /* vector<list<788>> */
  kk_drop_match(_self, {kk_vector_dup(data, _ctx);}, {}, _ctx)
  kk_unit_t __ = kk_Unit;
  kk_ssize_t _own_x1034;
  kk_integer_t _x_x1129 = kk_integer_dup(x, _ctx); /*int*/
  _own_x1034 = kk_std_core_int_ssize__t(_x_x1129, _ctx); /*ssize_t*/
  kk_vector_dup(data, kk_context()); kk_box_drop(kk_vector_at_borrow(data, _own_x1034, kk_context()), kk_context()); kk_vector_unsafe_assign(data, _own_x1034, kk_box_null(), kk_context());
  kk_ssize_t _b_x46_49 = kk_std_core_int_ssize__t(x, _ctx); /*ssize_t*/;
  kk_vector_unsafe_assign(data,_b_x46_49,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); return kk_Unit;
}

kk_std_data_hashset__hash_set kk_std_data_hashset_clear(kk_std_data_hashset__hash_set hs, kk_context_t* _ctx) { /* forall<a> (hs : hash-set<a>) -> hash-set<a> */ 
  {
    struct kk_std_data_hashset_Hash_set* _con_x1125 = kk_std_data_hashset__as_Hash_set(hs, _ctx);
    kk_vector_t data = _con_x1125->data;
    kk_integer_t _pat_0 = _con_x1125->amount;
    int64_t seed = _con_x1125->seed;
    kk_reuse_t _ru_x1063 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(hs, _ctx)) {
      kk_integer_drop(_pat_0, _ctx);
      _ru_x1063 = (kk_datatype_ptr_reuse(hs, _ctx));
    }
    else {
      kk_vector_dup(data, _ctx);
      kk_datatype_ptr_decref(hs, _ctx);
    }
    bool _match_x1032 = kk_datatype_is_unique(data, kk_context()); /*bool*/;
    if (_match_x1032) {
      kk_unit_t ___0 = kk_Unit;
      kk_integer_t _brw_x1035;
      kk_ssize_t _x_x1126 = kk_vector_len_borrow(data,kk_context()); /*ssize_t*/
      _brw_x1035 = kk_integer_from_ssize_t(_x_x1126,kk_context()); /*int*/
      kk_unit_t _brw_x1036 = kk_Unit;
      kk_function_t _x_x1127;
      kk_vector_dup(data, _ctx);
      _x_x1127 = kk_std_data_hashset_new_clear_fun1128(data, _ctx); /*(x : int) -> ()*/
      kk_std_core_for(_brw_x1035, _x_x1127, _ctx);
      kk_integer_drop(_brw_x1035, _ctx);
      _brw_x1036;
      return kk_std_data_hashset__new_Hash_set(_ru_x1063, 0, data, kk_integer_from_small(0), seed, _ctx);
    }
    {
      kk_integer_t n_10017;
      kk_ssize_t _x_x1130;
      kk_ssize_t _brw_x1033 = kk_vector_len_borrow(data,kk_context()); /*ssize_t*/;
      kk_vector_drop(data, _ctx);
      _x_x1130 = _brw_x1033; /*ssize_t*/
      n_10017 = kk_integer_from_ssize_t(_x_x1130,kk_context()); /*int*/
      kk_ssize_t _b_x51_53 = kk_std_core_int_ssize__t(n_10017, _ctx); /*ssize_t*/;
      kk_vector_t _x_x1131 = kk_std_core_vector_vector_alloc(_b_x51_53, kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx), _ctx); /*vector<3001>*/
      return kk_std_data_hashset__new_Hash_set(_ru_x1063, 0, _x_x1131, kk_integer_from_small(0), seed, _ctx);
    }
  }
}
 
// Invoke a function `f` for each key-value of the hash-set.


// lift anonymous function
struct kk_std_data_hashset_foreach_fun1134__t {
  struct kk_function_s _base;
  kk_function_t f;
  kk_std_data_hashset__hash_set hs;
};
static kk_unit_t kk_std_data_hashset_foreach_fun1134(kk_function_t _fself, kk_integer_t i, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_new_foreach_fun1134(kk_function_t f, kk_std_data_hashset__hash_set hs, kk_context_t* _ctx) {
  struct kk_std_data_hashset_foreach_fun1134__t* _self = kk_function_alloc_as(struct kk_std_data_hashset_foreach_fun1134__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset_foreach_fun1134, kk_context());
  _self->f = f;
  _self->hs = hs;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_std_data_hashset_foreach_fun1134(kk_function_t _fself, kk_integer_t i, kk_context_t* _ctx) {
  struct kk_std_data_hashset_foreach_fun1134__t* _self = kk_function_as(struct kk_std_data_hashset_foreach_fun1134__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (868) -> 867 () */
  kk_std_data_hashset__hash_set hs = _self->hs; /* std/data/hashset/hash-set<868> */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);kk_std_data_hashset__hash_set_dup(hs, _ctx);}, {}, _ctx)
  kk_ssize_t _b_x56_58 = kk_std_core_int_ssize__t(i, _ctx); /*ssize_t*/;
  kk_std_core_types__list _x_x1135;
  kk_box_t _x_x1136;
  kk_vector_t _brw_x1026;
  {
    struct kk_std_data_hashset_Hash_set* _con_x1137 = kk_std_data_hashset__as_Hash_set(hs, _ctx);
    kk_vector_t _x_0 = _con_x1137->data;
    kk_integer_t _pat_0_0 = _con_x1137->amount;
    if kk_likely(kk_datatype_ptr_is_unique(hs, _ctx)) {
      kk_integer_drop(_pat_0_0, _ctx);
      kk_datatype_ptr_free(hs, _ctx);
    }
    else {
      kk_vector_dup(_x_0, _ctx);
      kk_datatype_ptr_decref(hs, _ctx);
    }
    _brw_x1026 = _x_0; /*vector<list<868>>*/
  }
  kk_box_t _brw_x1027 = kk_vector_at_borrow(_brw_x1026,_b_x56_58,kk_context()); /*1001*/;
  kk_vector_drop(_brw_x1026, _ctx);
  _x_x1136 = _brw_x1027; /*1001*/
  _x_x1135 = kk_std_core_types__list_unbox(_x_x1136, KK_OWNED, _ctx); /*list<868>*/
  kk_std_core_list_foreach(_x_x1135, f, _ctx); return kk_Unit;
}

kk_unit_t kk_std_data_hashset_foreach(kk_std_data_hashset__hash_set hs, kk_function_t f, kk_context_t* _ctx) { /* forall<e,a> (hs : hash-set<a>, f : (a) -> e ()) -> e () */ 
  kk_integer_t _brw_x1030;
  kk_ssize_t _x_x1132;
  kk_vector_t _brw_x1028;
  {
    struct kk_std_data_hashset_Hash_set* _con_x1133 = kk_std_data_hashset__as_Hash_set(hs, _ctx);
    kk_vector_t _x = _con_x1133->data;
    kk_vector_dup(_x, _ctx);
    _brw_x1028 = _x; /*vector<list<868>>*/
  }
  kk_ssize_t _brw_x1029 = kk_vector_len_borrow(_brw_x1028,kk_context()); /*ssize_t*/;
  kk_vector_drop(_brw_x1028, _ctx);
  _x_x1132 = _brw_x1029; /*ssize_t*/
  _brw_x1030 = kk_integer_from_ssize_t(_x_x1132,kk_context()); /*int*/
  kk_unit_t _brw_x1031 = kk_Unit;
  kk_std_core_for(_brw_x1030, kk_std_data_hashset_new_foreach_fun1134(f, hs, _ctx), _ctx);
  kk_integer_drop(_brw_x1030, _ctx);
  _brw_x1031; return kk_Unit;
}
 
// This helper will use `buckets` to allow for a `div`-less use of `unsafe-set` to set values in vector `v`.

kk_vector_t kk_std_data_hashset_helper_fs_rehash(kk_vector_t v, kk_std_core_types__list buckets, int64_t seed, kk_function_t _implicit_fs_hash, kk_context_t* _ctx) { /* forall<a> (v : vector<list<a>>, buckets : list<a>, seed : int64, ?hash : (a, int64) -> int) -> vector<list<a>> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Nil(buckets, _ctx)) {
    kk_function_drop(_implicit_fs_hash, _ctx);
    return v;
  }
  {
    struct kk_std_core_types_Cons* _con_x1138 = kk_std_core_types__as_Cons(buckets, _ctx);
    kk_box_t value = _con_x1138->head;
    kk_std_core_types__list xs = _con_x1138->tail;
    kk_reuse_t _ru_x1065 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(buckets, _ctx)) {
      _ru_x1065 = (kk_datatype_ptr_reuse(buckets, _ctx));
    }
    else {
      kk_box_dup(value, _ctx);
      kk_std_core_types__list_dup(xs, _ctx);
      kk_datatype_ptr_decref(buckets, _ctx);
    }
    kk_integer_t the_hash;
    kk_function_t _x_x1140 = kk_function_dup(_implicit_fs_hash, _ctx); /*(1153, int64) -> int*/
    kk_box_t _x_x1139 = kk_box_dup(value, _ctx); /*1153*/
    the_hash = kk_function_call(kk_integer_t, (kk_function_t, kk_box_t, int64_t, kk_context_t*), _x_x1140, (_x_x1140, _x_x1139, seed, _ctx), _ctx); /*int*/
    kk_integer_t position;
    kk_integer_t _x_x1141;
    kk_ssize_t _x_x1142 = kk_vector_len_borrow(v,kk_context()); /*ssize_t*/
    _x_x1141 = kk_integer_from_ssize_t(_x_x1142,kk_context()); /*int*/
    position = kk_integer_mod(the_hash,_x_x1141,kk_context()); /*int*/
    kk_ssize_t _b_x60_68;
    kk_integer_t _x_x1143 = kk_integer_dup(position, _ctx); /*int*/
    _b_x60_68 = kk_std_core_int_ssize__t(_x_x1143, _ctx); /*ssize_t*/
    kk_std_core_types__list _b_x63_66;
    kk_std_core_types__list _x_x1144;
    kk_box_t _x_x1145 = kk_vector_at_borrow(v,_b_x60_68,kk_context()); /*3148*/
    _x_x1144 = kk_std_core_types__list_unbox(_x_x1145, KK_OWNED, _ctx); /*list<1153>*/
    _b_x63_66 = kk_std_core_types__new_Cons(_ru_x1065, 0, value, _x_x1144, _ctx); /*list<1153>*/
    kk_vector_t new_v;
    kk_vector_t _brw_x1025 = kk_std_core_dash_extras_unsafe_set(v, position, kk_std_core_types__list_box(_b_x63_66, _ctx), _ctx); /*vector<3148>*/;
    kk_integer_drop(position, _ctx);
    new_v = _brw_x1025; /*vector<list<1153>>*/
    { // tailcall
      v = new_v;
      buckets = xs;
      goto kk__tailcall;
    }
  }
}


// lift anonymous function
struct kk_std_data_hashset_rehash_fun1147__t {
  struct kk_function_s _base;
  kk_vector_t v;
  kk_function_t _implicit_fs_hash;
  int64_t seed;
};
static kk_unit_t kk_std_data_hashset_rehash_fun1147(kk_function_t _fself, kk_box_t _b_x75, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_new_rehash_fun1147(kk_vector_t v, kk_function_t _implicit_fs_hash, int64_t seed, kk_context_t* _ctx) {
  struct kk_std_data_hashset_rehash_fun1147__t* _self = kk_function_alloc_as(struct kk_std_data_hashset_rehash_fun1147__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset_rehash_fun1147, kk_context());
  _self->v = v;
  _self->_implicit_fs_hash = _implicit_fs_hash;
  _self->seed = seed;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashset_rehash_fun1149__t {
  struct kk_function_s _base;
  kk_vector_t v;
  kk_function_t _implicit_fs_hash;
  int64_t seed;
};
static kk_unit_t kk_std_data_hashset_rehash_fun1149(kk_function_t _fself, kk_box_t entry, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_new_rehash_fun1149(kk_vector_t v, kk_function_t _implicit_fs_hash, int64_t seed, kk_context_t* _ctx) {
  struct kk_std_data_hashset_rehash_fun1149__t* _self = kk_function_alloc_as(struct kk_std_data_hashset_rehash_fun1149__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset_rehash_fun1149, kk_context());
  _self->v = v;
  _self->_implicit_fs_hash = _implicit_fs_hash;
  _self->seed = seed;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_std_data_hashset_rehash_fun1149(kk_function_t _fself, kk_box_t entry, kk_context_t* _ctx) {
  struct kk_std_data_hashset_rehash_fun1149__t* _self = kk_function_as(struct kk_std_data_hashset_rehash_fun1149__t*, _fself, _ctx);
  kk_vector_t v = _self->v; /* vector<list<1063>> */
  kk_function_t _implicit_fs_hash = _self->_implicit_fs_hash; /* (1063, int64) -> int */
  int64_t seed = _self->seed; /* int64 */
  kk_drop_match(_self, {kk_vector_dup(v, _ctx);kk_function_dup(_implicit_fs_hash, _ctx);kk_skip_dup(seed, _ctx);}, {}, _ctx)
  kk_integer_t the_hash;
  kk_box_t _x_x1150 = kk_box_dup(entry, _ctx); /*1063*/
  the_hash = kk_function_call(kk_integer_t, (kk_function_t, kk_box_t, int64_t, kk_context_t*), _implicit_fs_hash, (_implicit_fs_hash, _x_x1150, seed, _ctx), _ctx); /*int*/
  kk_integer_t position;
  kk_integer_t _x_x1151;
  kk_ssize_t _x_x1152 = kk_vector_len_borrow(v,kk_context()); /*ssize_t*/
  _x_x1151 = kk_integer_from_ssize_t(_x_x1152,kk_context()); /*int*/
  position = kk_integer_mod(the_hash,_x_x1151,kk_context()); /*int*/
  kk_std_core_types__maybe _match_x1024 = kk_std_core_vector_at(v, position, _ctx); /*maybe<3010>*/;
  if (kk_std_core_types__is_Nothing(_match_x1024, _ctx)) {
    kk_vector_drop(v, _ctx);
    kk_integer_drop(position, _ctx);
    kk_box_drop(entry, _ctx);
    kk_Unit; return kk_Unit;
  }
  {
    kk_box_t _box_x69 = _match_x1024._cons.Just.value;
    kk_std_core_types__list xs = kk_std_core_types__list_unbox(_box_x69, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(xs, _ctx);
    kk_std_core_types__maybe_drop(_match_x1024, _ctx);
    kk_ssize_t _b_x71_79 = kk_std_core_int_ssize__t(position, _ctx); /*ssize_t*/;
    kk_box_t _x_x1153;
    kk_std_core_types__list _x_x1154 = kk_std_core_types__new_Cons(kk_reuse_null, 0, entry, xs, _ctx); /*list<1024>*/
    _x_x1153 = kk_std_core_types__list_box(_x_x1154, _ctx); /*3010*/
    kk_vector_unsafe_assign(v,_b_x71_79,_x_x1153,kk_context()); return kk_Unit;
  }
}
static kk_unit_t kk_std_data_hashset_rehash_fun1147(kk_function_t _fself, kk_box_t _b_x75, kk_context_t* _ctx) {
  struct kk_std_data_hashset_rehash_fun1147__t* _self = kk_function_as(struct kk_std_data_hashset_rehash_fun1147__t*, _fself, _ctx);
  kk_vector_t v = _self->v; /* vector<list<1063>> */
  kk_function_t _implicit_fs_hash = _self->_implicit_fs_hash; /* (1063, int64) -> int */
  int64_t seed = _self->seed; /* int64 */
  kk_drop_match(_self, {kk_vector_dup(v, _ctx);kk_function_dup(_implicit_fs_hash, _ctx);kk_skip_dup(seed, _ctx);}, {}, _ctx)
  kk_std_core_types__list _x_x1148 = kk_std_core_types__list_unbox(_b_x75, KK_OWNED, _ctx); /*list<1063>*/
  kk_std_core_list_foreach(_x_x1148, kk_std_data_hashset_new_rehash_fun1149(v, _implicit_fs_hash, seed, _ctx), _ctx); return kk_Unit;
}


// lift anonymous function
struct kk_std_data_hashset_rehash_fun1156__t {
  struct kk_function_s _base;
};
static kk_std_core_types__list kk_std_data_hashset_rehash_fun1156(kk_function_t _fself, kk_box_t _b_x84, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_new_rehash_fun1156(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset_rehash_fun1156, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_std_core_types__list kk_std_data_hashset_rehash_fun1156(kk_function_t _fself, kk_box_t _b_x84, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__list x_87 = kk_std_core_types__list_unbox(_b_x84, KK_OWNED, _ctx); /*list<1063>*/;
  return x_87;
}

kk_vector_t kk_std_data_hashset_rehash(kk_vector_t v, kk_vector_t buckets, int64_t seed, kk_function_t _implicit_fs_hash, kk_context_t* _ctx) { /* forall<a> (v : vector<list<a>>, buckets : vector<list<a>>, seed : int64, ?hash : (a, int64) -> int) -> vector<list<a>> */ 
  bool _match_x1023 = kk_datatype_is_unique(v, kk_context()); /*bool*/;
  if (_match_x1023) {
    kk_unit_t __ = kk_Unit;
    kk_function_t _x_x1146;
    kk_vector_dup(v, _ctx);
    _x_x1146 = kk_std_data_hashset_new_rehash_fun1147(v, _implicit_fs_hash, seed, _ctx); /*(3013) -> 3014 ()*/
    kk_std_core_vector_foreach(buckets, _x_x1146, _ctx);
    return v;
  }
  {
    kk_std_core_types__list _b_x82_85 = kk_std_core_vector_vlist(buckets, kk_std_core_types__new_None(_ctx), _ctx); /*list<list<1063>>*/;
    kk_std_core_types__list _x_x1155 = kk_std_core_list_flatmap(_b_x82_85, kk_std_data_hashset_new_rehash_fun1156(_ctx), _ctx); /*list<3059>*/
    return kk_std_data_hashset_helper_fs_rehash(v, _x_x1155, seed, _implicit_fs_hash, _ctx);
  }
}
 
// Resizes a hash-set with `new-capacity` being the new capacity of the hashset.
// If `new-capacity` is smaller than the capacity of the hash-set then there will be more hash collisions.


// lift anonymous function
struct kk_std_data_hashset_resize_fun1162__t {
  struct kk_function_s _base;
  kk_vector_t buckets;
  kk_vector_t data;
};
static kk_unit_t kk_std_data_hashset_resize_fun1162(kk_function_t _fself, kk_integer_t i, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_new_resize_fun1162(kk_vector_t buckets, kk_vector_t data, kk_context_t* _ctx) {
  struct kk_std_data_hashset_resize_fun1162__t* _self = kk_function_alloc_as(struct kk_std_data_hashset_resize_fun1162__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset_resize_fun1162, kk_context());
  _self->buckets = buckets;
  _self->data = data;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_std_data_hashset_resize_fun1162(kk_function_t _fself, kk_integer_t i, kk_context_t* _ctx) {
  struct kk_std_data_hashset_resize_fun1162__t* _self = kk_function_as(struct kk_std_data_hashset_resize_fun1162__t*, _fself, _ctx);
  kk_vector_t buckets = _self->buckets; /* forall<a> vector<list<a>> */
  kk_vector_t data = _self->data; /* vector<list<1348>> */
  kk_drop_match(_self, {kk_vector_dup(buckets, _ctx);kk_vector_dup(data, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _match_x1016;
  kk_std_core_types__maybe _brw_x1018 = kk_std_core_vector_at(data, i, _ctx); /*maybe<3268>*/;
  kk_vector_drop(data, _ctx);
  _match_x1016 = _brw_x1018; /*maybe<3268>*/
  if (kk_std_core_types__is_Nothing(_match_x1016, _ctx)) {
    kk_integer_drop(i, _ctx);
    kk_vector_drop(buckets, _ctx);
    kk_Unit; return kk_Unit;
  }
  {
    kk_box_t _box_x92 = _match_x1016._cons.Just.value;
    kk_std_core_types__list x = kk_std_core_types__list_unbox(_box_x92, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(x, _ctx);
    kk_std_core_types__maybe_drop(_match_x1016, _ctx);
    kk_unit_t __ = kk_Unit;
    kk_ssize_t _own_x1017;
    kk_integer_t _x_x1163 = kk_integer_dup(i, _ctx); /*int*/
    _own_x1017 = kk_std_core_int_ssize__t(_x_x1163, _ctx); /*ssize_t*/
    kk_vector_dup(buckets, kk_context()); kk_box_drop(kk_vector_at_borrow(buckets, _own_x1017, kk_context()), kk_context()); kk_vector_unsafe_assign(buckets, _own_x1017, kk_box_null(), kk_context());
    kk_ssize_t _b_x94_97 = kk_std_core_int_ssize__t(i, _ctx); /*ssize_t*/;
    kk_vector_unsafe_assign(buckets,_b_x94_97,(kk_std_core_types__list_box(x, _ctx)),kk_context()); return kk_Unit;
  }
}

kk_std_data_hashset__hash_set kk_std_data_hashset_resize(kk_std_data_hashset__hash_set hs, kk_integer_t new_capacity, kk_function_t _implicit_fs_hash, kk_context_t* _ctx) { /* forall<a> (hs : hash-set<a>, new-capacity : int, ?hash : (a, int64) -> int) -> hash-set<a> */ 
  kk_integer_t n_10023;
  kk_ssize_t _x_x1157;
  kk_vector_t _brw_x1021;
  {
    struct kk_std_data_hashset_Hash_set* _con_x1158 = kk_std_data_hashset__as_Hash_set(hs, _ctx);
    kk_vector_t _x = _con_x1158->data;
    kk_vector_dup(_x, _ctx);
    _brw_x1021 = _x; /*vector<list<1348>>*/
  }
  kk_ssize_t _brw_x1022 = kk_vector_len_borrow(_brw_x1021,kk_context()); /*ssize_t*/;
  kk_vector_drop(_brw_x1021, _ctx);
  _x_x1157 = _brw_x1022; /*ssize_t*/
  n_10023 = kk_integer_from_ssize_t(_x_x1157,kk_context()); /*int*/
  kk_ssize_t _b_x88_90 = kk_std_core_int_ssize__t(n_10023, _ctx); /*ssize_t*/;
  kk_vector_t buckets = kk_std_core_vector_vector_alloc(_b_x88_90, kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx), _ctx); /*forall<a> vector<list<a>>*/;
  {
    struct kk_std_data_hashset_Hash_set* _con_x1159 = kk_std_data_hashset__as_Hash_set(hs, _ctx);
    kk_vector_t data = _con_x1159->data;
    kk_integer_t size = _con_x1159->amount;
    int64_t seed = _con_x1159->seed;
    kk_reuse_t _ru_x1066 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(hs, _ctx)) {
      _ru_x1066 = (kk_datatype_ptr_reuse(hs, _ctx));
    }
    else {
      kk_vector_dup(data, _ctx);
      kk_integer_dup(size, _ctx);
      kk_datatype_ptr_decref(hs, _ctx);
    }
    kk_unit_t ___0 = kk_Unit;
    kk_integer_t _brw_x1019;
    kk_ssize_t _x_x1160 = kk_vector_len_borrow(data,kk_context()); /*ssize_t*/
    _brw_x1019 = kk_integer_from_ssize_t(_x_x1160,kk_context()); /*int*/
    kk_unit_t _brw_x1020 = kk_Unit;
    kk_function_t _x_x1161;
    kk_vector_dup(buckets, _ctx);
    kk_vector_dup(data, _ctx);
    _x_x1161 = kk_std_data_hashset_new_resize_fun1162(buckets, data, _ctx); /*(i : int) -> ()*/
    kk_std_core_for(_brw_x1019, _x_x1161, _ctx);
    kk_integer_drop(_brw_x1019, _ctx);
    _brw_x1020;
    kk_vector_t new_data = kk_vector_realloc(data, (kk_std_core_int_ssize__t(new_capacity, _ctx)), kk_box_null(), kk_context()); /*vector<list<1348>>*/;
    kk_vector_t _x_x1164;
    kk_vector_t _x_x1165 = kk_std_data_hashset_helper_fs_resize(new_data, _ctx); /*vector<list<548>>*/
    _x_x1164 = kk_std_data_hashset_rehash(_x_x1165, buckets, seed, _implicit_fs_hash, _ctx); /*vector<list<1063>>*/
    return kk_std_data_hashset__new_Hash_set(_ru_x1066, 0, _x_x1164, size, seed, _ctx);
  }
}
 
// Inserts a `value` into the hash-set.


// lift anonymous function
struct kk_std_data_hashset_insert_fun1181__t {
  struct kk_function_s _base;
  kk_box_t value;
  kk_function_t _implicit_fs__lp__eq__eq__rp_;
};
static bool kk_std_data_hashset_insert_fun1181(kk_function_t _fself, kk_box_t x, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_new_insert_fun1181(kk_box_t value, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) {
  struct kk_std_data_hashset_insert_fun1181__t* _self = kk_function_alloc_as(struct kk_std_data_hashset_insert_fun1181__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset_insert_fun1181, kk_context());
  _self->value = value;
  _self->_implicit_fs__lp__eq__eq__rp_ = _implicit_fs__lp__eq__eq__rp_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_std_data_hashset_insert_fun1181(kk_function_t _fself, kk_box_t x, kk_context_t* _ctx) {
  struct kk_std_data_hashset_insert_fun1181__t* _self = kk_function_as(struct kk_std_data_hashset_insert_fun1181__t*, _fself, _ctx);
  kk_box_t value = _self->value; /* 1687 */
  kk_function_t _implicit_fs__lp__eq__eq__rp_ = _self->_implicit_fs__lp__eq__eq__rp_; /* (1687, 1687) -> bool */
  kk_drop_match(_self, {kk_box_dup(value, _ctx);kk_function_dup(_implicit_fs__lp__eq__eq__rp_, _ctx);}, {}, _ctx)
  bool b_10032 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs__lp__eq__eq__rp_, (_implicit_fs__lp__eq__eq__rp_, x, value, _ctx), _ctx); /*bool*/;
  if (b_10032) {
    return false;
  }
  {
    return true;
  }
}

kk_std_data_hashset__hash_set kk_std_data_hashset_insert(kk_std_data_hashset__hash_set hs, kk_box_t value, kk_function_t _implicit_fs_hash, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_when_resize, kk_function_t _implicit_fs_resizer, kk_context_t* _ctx) { /* forall<a> (hs : hash-set<a>, value : a, ?hash : (a, int64) -> int, ?(==) : (a, a) -> bool, ?when-resize : (int, int) -> bool, ?resizer : (int, int) -> int) -> hash-set<a> */ 
  kk_integer_t the_hash;
  kk_function_t _x_x1169 = kk_function_dup(_implicit_fs_hash, _ctx); /*(1687, int64) -> int*/
  kk_box_t _x_x1166 = kk_box_dup(value, _ctx); /*1687*/
  int64_t _x_x1167;
  {
    struct kk_std_data_hashset_Hash_set* _con_x1168 = kk_std_data_hashset__as_Hash_set(hs, _ctx);
    int64_t _x = _con_x1168->seed;
    _x_x1167 = _x; /*int64*/
  }
  the_hash = kk_function_call(kk_integer_t, (kk_function_t, kk_box_t, int64_t, kk_context_t*), _x_x1169, (_x_x1169, _x_x1166, _x_x1167, _ctx), _ctx); /*int*/
  kk_integer_t position;
  kk_integer_t _x_x1170;
  kk_ssize_t _x_x1171;
  kk_vector_t _brw_x1011;
  {
    struct kk_std_data_hashset_Hash_set* _con_x1172 = kk_std_data_hashset__as_Hash_set(hs, _ctx);
    kk_vector_t _x_0 = _con_x1172->data;
    kk_vector_dup(_x_0, _ctx);
    _brw_x1011 = _x_0; /*vector<list<1687>>*/
  }
  kk_ssize_t _brw_x1012 = kk_vector_len_borrow(_brw_x1011,kk_context()); /*ssize_t*/;
  kk_vector_drop(_brw_x1011, _ctx);
  _x_x1171 = _brw_x1012; /*ssize_t*/
  _x_x1170 = kk_integer_from_ssize_t(_x_x1171,kk_context()); /*int*/
  position = kk_integer_mod(the_hash,_x_x1170,kk_context()); /*int*/
  kk_std_data_hashset__hash_set new_hs;
  {
    struct kk_std_data_hashset_Hash_set* _con_x1173 = kk_std_data_hashset__as_Hash_set(hs, _ctx);
    kk_vector_t data = _con_x1173->data;
    kk_integer_t amount = _con_x1173->amount;
    int64_t seed = _con_x1173->seed;
    kk_reuse_t _ru_x1067 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(hs, _ctx)) {
      _ru_x1067 = (kk_datatype_ptr_reuse(hs, _ctx));
    }
    else {
      kk_integer_dup(amount, _ctx);
      kk_vector_dup(data, _ctx);
      kk_datatype_ptr_decref(hs, _ctx);
    }
    kk_ssize_t _b_x100_102;
    kk_integer_t _x_x1174 = kk_integer_dup(position, _ctx); /*int*/
    _b_x100_102 = kk_std_core_int_ssize__t(_x_x1174, _ctx); /*ssize_t*/
    kk_std_core_types__list xs_10031;
    kk_box_t _x_x1175 = kk_vector_at_borrow(data,_b_x100_102,kk_context()); /*3596*/
    xs_10031 = kk_std_core_types__list_unbox(_x_x1175, KK_OWNED, _ctx); /*list<1687>*/
    kk_integer_t old_bucket_size = kk_std_core_list__lift_length_4947(xs_10031, kk_integer_from_small(0), _ctx); /*int*/;
    kk_ssize_t _b_x104_106;
    kk_integer_t _x_x1176 = kk_integer_dup(position, _ctx); /*int*/
    _b_x104_106 = kk_std_core_int_ssize__t(_x_x1176, _ctx); /*ssize_t*/
    kk_std_core_types__list bucket;
    kk_box_t _x_x1177 = kk_box_dup(value, _ctx); /*1687*/
    kk_std_core_types__list _x_x1178;
    kk_std_core_types__list _x_x1179;
    kk_box_t _x_x1180 = kk_vector_at_borrow(data,_b_x104_106,kk_context()); /*3596*/
    _x_x1179 = kk_std_core_types__list_unbox(_x_x1180, KK_OWNED, _ctx); /*list<1687>*/
    _x_x1178 = kk_std_core_list_filter(_x_x1179, kk_std_data_hashset_new_insert_fun1181(value, _implicit_fs__lp__eq__eq__rp_, _ctx), _ctx); /*list<3596>*/
    bucket = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x1177, _x_x1178, _ctx); /*list<1687>*/
    kk_vector_t new_data = kk_std_core_dash_extras_unsafe_set(data, position, kk_std_core_types__list_box(bucket, _ctx), _ctx); /*vector<list<1687>>*/;
    kk_ssize_t _b_x114_116 = kk_std_core_int_ssize__t(position, _ctx); /*ssize_t*/;
    kk_std_core_types__list xs_0_10033;
    kk_box_t _x_x1182 = kk_vector_at_borrow(new_data,_b_x114_116,kk_context()); /*3587*/
    xs_0_10033 = kk_std_core_types__list_unbox(_x_x1182, KK_OWNED, _ctx); /*list<1687>*/
    kk_integer_t new_amount;
    bool _match_x1008;
    kk_integer_t _brw_x1009 = kk_std_core_list__lift_length_4947(xs_0_10033, kk_integer_from_small(0), _ctx); /*int*/;
    bool _brw_x1010 = kk_integer_lt_borrow(old_bucket_size,_brw_x1009,kk_context()); /*bool*/;
    kk_integer_drop(old_bucket_size, _ctx);
    kk_integer_drop(_brw_x1009, _ctx);
    _match_x1008 = _brw_x1010; /*bool*/
    if (_match_x1008) {
      new_amount = kk_integer_add_small_const(amount, 1, _ctx); /*int*/
    }
    else {
      new_amount = amount; /*int*/
    }
    new_hs = kk_std_data_hashset__new_Hash_set(_ru_x1067, 0, new_data, new_amount, seed, _ctx); /*std/data/hashset/hash-set<1687>*/
  }
  bool _match_x1003;
  kk_integer_t _x_x1183;
  kk_ssize_t _x_x1184;
  kk_vector_t _brw_x1006;
  {
    struct kk_std_data_hashset_Hash_set* _con_x1185 = kk_std_data_hashset__as_Hash_set(new_hs, _ctx);
    kk_vector_t _x_1 = _con_x1185->data;
    kk_vector_dup(_x_1, _ctx);
    _brw_x1006 = _x_1; /*vector<list<1687>>*/
  }
  kk_ssize_t _brw_x1007 = kk_vector_len_borrow(_brw_x1006,kk_context()); /*ssize_t*/;
  kk_vector_drop(_brw_x1006, _ctx);
  _x_x1184 = _brw_x1007; /*ssize_t*/
  _x_x1183 = kk_integer_from_ssize_t(_x_x1184,kk_context()); /*int*/
  kk_integer_t _x_x1186;
  {
    struct kk_std_data_hashset_Hash_set* _con_x1187 = kk_std_data_hashset__as_Hash_set(new_hs, _ctx);
    kk_integer_t _x_2 = _con_x1187->amount;
    kk_integer_dup(_x_2, _ctx);
    _x_x1186 = _x_2; /*int*/
  }
  _match_x1003 = kk_function_call(bool, (kk_function_t, kk_integer_t, kk_integer_t, kk_context_t*), _implicit_fs_when_resize, (_implicit_fs_when_resize, _x_x1183, _x_x1186, _ctx), _ctx); /*bool*/
  if (_match_x1003) {
    kk_std_data_hashset__hash_set _x_x1188 = kk_std_data_hashset__hash_set_dup(new_hs, _ctx); /*std/data/hashset/hash-set<1687>*/
    kk_integer_t _x_x1189;
    kk_integer_t _x_x1190;
    kk_ssize_t _x_x1191;
    kk_vector_t _brw_x1004;
    {
      struct kk_std_data_hashset_Hash_set* _con_x1192 = kk_std_data_hashset__as_Hash_set(new_hs, _ctx);
      kk_vector_t _x_3 = _con_x1192->data;
      kk_vector_dup(_x_3, _ctx);
      _brw_x1004 = _x_3; /*vector<list<1687>>*/
    }
    kk_ssize_t _brw_x1005 = kk_vector_len_borrow(_brw_x1004,kk_context()); /*ssize_t*/;
    kk_vector_drop(_brw_x1004, _ctx);
    _x_x1191 = _brw_x1005; /*ssize_t*/
    _x_x1190 = kk_integer_from_ssize_t(_x_x1191,kk_context()); /*int*/
    kk_integer_t _x_x1193;
    {
      struct kk_std_data_hashset_Hash_set* _con_x1194 = kk_std_data_hashset__as_Hash_set(new_hs, _ctx);
      kk_vector_t _pat_0_6 = _con_x1194->data;
      kk_integer_t _x_4 = _con_x1194->amount;
      if kk_likely(kk_datatype_ptr_is_unique(new_hs, _ctx)) {
        kk_vector_drop(_pat_0_6, _ctx);
        kk_datatype_ptr_free(new_hs, _ctx);
      }
      else {
        kk_integer_dup(_x_4, _ctx);
        kk_datatype_ptr_decref(new_hs, _ctx);
      }
      _x_x1193 = _x_4; /*int*/
    }
    _x_x1189 = kk_function_call(kk_integer_t, (kk_function_t, kk_integer_t, kk_integer_t, kk_context_t*), _implicit_fs_resizer, (_implicit_fs_resizer, _x_x1190, _x_x1193, _ctx), _ctx); /*int*/
    return kk_std_data_hashset_resize(_x_x1188, _x_x1189, _implicit_fs_hash, _ctx);
  }
  {
    kk_function_drop(_implicit_fs_resizer, _ctx);
    kk_function_drop(_implicit_fs_hash, _ctx);
    return new_hs;
  }
}


// lift anonymous function
struct kk_std_data_hashset_from_list_helper_fun1201__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashset_from_list_helper_fun1201(kk_function_t _fself, kk_integer_t _x1_x1199, kk_integer_t _x2_x1200, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_new_from_list_helper_fun1201(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset_from_list_helper_fun1201, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashset_from_list_helper_fun1201(kk_function_t _fself, kk_integer_t _x1_x1199, kk_integer_t _x2_x1200, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashset_when_resize(_x1_x1199, _x2_x1200, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset_from_list_helper_fun1204__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashset_from_list_helper_fun1204(kk_function_t _fself, kk_integer_t _x1_x1202, kk_integer_t _x2_x1203, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_new_from_list_helper_fun1204(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset_from_list_helper_fun1204, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashset_from_list_helper_fun1204(kk_function_t _fself, kk_integer_t _x1_x1202, kk_integer_t _x2_x1203, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashset_resizer(_x1_x1202, _x2_x1203, _ctx);
}

kk_std_data_hashset__hash_set kk_std_data_hashset_from_list_helper(kk_std_data_hashset__hash_set hs, kk_std_core_types__list l, kk_function_t _implicit_fs_hash, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) { /* forall<a> (hs : hash-set<a>, l : list<a>, ?hash : (a, int64) -> int, ?(==) : (a, a) -> bool) -> hash-set<a> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Nil(l, _ctx)) {
    kk_function_drop(_implicit_fs_hash, _ctx);
    kk_function_drop(_implicit_fs__lp__eq__eq__rp_, _ctx);
    return hs;
  }
  {
    struct kk_std_core_types_Cons* _con_x1195 = kk_std_core_types__as_Cons(l, _ctx);
    kk_box_t x = _con_x1195->head;
    kk_std_core_types__list xs = _con_x1195->tail;
    if kk_likely(kk_datatype_ptr_is_unique(l, _ctx)) {
      kk_datatype_ptr_free(l, _ctx);
    }
    else {
      kk_box_dup(x, _ctx);
      kk_std_core_types__list_dup(xs, _ctx);
      kk_datatype_ptr_decref(l, _ctx);
    }
    { // tailcall
      kk_std_data_hashset__hash_set _x_x1196;
      kk_function_t _x_x1197 = kk_function_dup(_implicit_fs_hash, _ctx); /*(1788, int64) -> int*/
      kk_function_t _x_x1198 = kk_function_dup(_implicit_fs__lp__eq__eq__rp_, _ctx); /*(1788, 1788) -> bool*/
      _x_x1196 = kk_std_data_hashset_insert(hs, x, _x_x1197, _x_x1198, kk_std_data_hashset_new_from_list_helper_fun1201(_ctx), kk_std_data_hashset_new_from_list_helper_fun1204(_ctx), _ctx); /*std/data/hashset/hash-set<1687>*/
      hs = _x_x1196;
      l = xs;
      goto kk__tailcall;
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230_fun1206__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230_fun1206(kk_function_t _fself, kk_box_t _b_x122, kk_box_t _b_x123, kk_box_t _b_x124, kk_box_t _b_x125, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_random_fs_list_fs__new_mlift_hash_set_10230_fun1206(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230_fun1206, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230_fun1210__t {
  struct kk_function_s _base;
  kk_box_t _b_x124;
};
static kk_integer_t kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230_fun1210(kk_function_t _fself, kk_box_t _b_x129, int64_t _b_x130, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_random_fs_list_fs__new_mlift_hash_set_10230_fun1210(kk_box_t _b_x124, kk_context_t* _ctx) {
  struct kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230_fun1210__t* _self = kk_function_alloc_as(struct kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230_fun1210__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230_fun1210, kk_context());
  _self->_b_x124 = _b_x124;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_integer_t kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230_fun1210(kk_function_t _fself, kk_box_t _b_x129, int64_t _b_x130, kk_context_t* _ctx) {
  struct kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230_fun1210__t* _self = kk_function_as(struct kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230_fun1210__t*, _fself, _ctx);
  kk_box_t _b_x124 = _self->_b_x124; /* 1002 */
  kk_drop_match(_self, {kk_box_dup(_b_x124, _ctx);}, {}, _ctx)
  kk_box_t _x_x1211;
  kk_function_t _x_x1212 = kk_function_unbox(_b_x124, _ctx); /*(126, 127) -> 128*/
  _x_x1211 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x1212, (_x_x1212, _b_x129, kk_int64_box(_b_x130, _ctx), _ctx), _ctx); /*128*/
  return kk_integer_unbox(_x_x1211, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230_fun1213__t {
  struct kk_function_s _base;
  kk_box_t _b_x125;
};
static bool kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230_fun1213(kk_function_t _fself, kk_box_t _b_x134, kk_box_t _b_x135, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_random_fs_list_fs__new_mlift_hash_set_10230_fun1213(kk_box_t _b_x125, kk_context_t* _ctx) {
  struct kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230_fun1213__t* _self = kk_function_alloc_as(struct kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230_fun1213__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230_fun1213, kk_context());
  _self->_b_x125 = _b_x125;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230_fun1213(kk_function_t _fself, kk_box_t _b_x134, kk_box_t _b_x135, kk_context_t* _ctx) {
  struct kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230_fun1213__t* _self = kk_function_as(struct kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230_fun1213__t*, _fself, _ctx);
  kk_box_t _b_x125 = _self->_b_x125; /* 1003 */
  kk_drop_match(_self, {kk_box_dup(_b_x125, _ctx);}, {}, _ctx)
  kk_box_t _x_x1214;
  kk_function_t _x_x1215 = kk_function_unbox(_b_x125, _ctx); /*(131, 132) -> 133*/
  _x_x1214 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x1215, (_x_x1215, _b_x134, _b_x135, _ctx), _ctx); /*133*/
  return kk_bool_unbox(_x_x1214);
}
static kk_box_t kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230_fun1206(kk_function_t _fself, kk_box_t _b_x122, kk_box_t _b_x123, kk_box_t _b_x124, kk_box_t _b_x125, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_data_hashset__hash_set _x_x1207;
  kk_std_data_hashset__hash_set _x_x1208 = kk_std_data_hashset__hash_set_unbox(_b_x122, KK_OWNED, _ctx); /*std/data/hashset/hash-set<1860>*/
  kk_std_core_types__list _x_x1209 = kk_std_core_types__list_unbox(_b_x123, KK_OWNED, _ctx); /*list<1860>*/
  _x_x1207 = kk_std_data_hashset_from_list_helper(_x_x1208, _x_x1209, kk_std_data_hashset_random_fs_list_fs__new_mlift_hash_set_10230_fun1210(_b_x124, _ctx), kk_std_data_hashset_random_fs_list_fs__new_mlift_hash_set_10230_fun1213(_b_x125, _ctx), _ctx); /*std/data/hashset/hash-set<1788>*/
  return kk_std_data_hashset__hash_set_box(_x_x1207, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230_fun1216__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs_hash;
};
static kk_box_t kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230_fun1216(kk_function_t _fself, kk_box_t _b_x139, kk_box_t _b_x140, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_random_fs_list_fs__new_mlift_hash_set_10230_fun1216(kk_function_t _implicit_fs_hash, kk_context_t* _ctx) {
  struct kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230_fun1216__t* _self = kk_function_alloc_as(struct kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230_fun1216__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230_fun1216, kk_context());
  _self->_implicit_fs_hash = _implicit_fs_hash;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230_fun1216(kk_function_t _fself, kk_box_t _b_x139, kk_box_t _b_x140, kk_context_t* _ctx) {
  struct kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230_fun1216__t* _self = kk_function_as(struct kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230_fun1216__t*, _fself, _ctx);
  kk_function_t _implicit_fs_hash = _self->_implicit_fs_hash; /* (1860, int64) -> int */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs_hash, _ctx);}, {}, _ctx)
  kk_integer_t _x_x1217;
  int64_t _x_x1218 = kk_int64_unbox(_b_x140, KK_OWNED, _ctx); /*int64*/
  _x_x1217 = kk_function_call(kk_integer_t, (kk_function_t, kk_box_t, int64_t, kk_context_t*), _implicit_fs_hash, (_implicit_fs_hash, _b_x139, _x_x1218, _ctx), _ctx); /*int*/
  return kk_integer_box(_x_x1217, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230_fun1219__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs__lp__eq__eq__rp_;
};
static kk_box_t kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230_fun1219(kk_function_t _fself, kk_box_t _b_x144, kk_box_t _b_x145, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_random_fs_list_fs__new_mlift_hash_set_10230_fun1219(kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) {
  struct kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230_fun1219__t* _self = kk_function_alloc_as(struct kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230_fun1219__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230_fun1219, kk_context());
  _self->_implicit_fs__lp__eq__eq__rp_ = _implicit_fs__lp__eq__eq__rp_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230_fun1219(kk_function_t _fself, kk_box_t _b_x144, kk_box_t _b_x145, kk_context_t* _ctx) {
  struct kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230_fun1219__t* _self = kk_function_as(struct kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230_fun1219__t*, _fself, _ctx);
  kk_function_t _implicit_fs__lp__eq__eq__rp_ = _self->_implicit_fs__lp__eq__eq__rp_; /* (1860, 1860) -> bool */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs__lp__eq__eq__rp_, _ctx);}, {}, _ctx)
  bool _x_x1220 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs__lp__eq__eq__rp_, (_implicit_fs__lp__eq__eq__rp_, _b_x144, _b_x145, _ctx), _ctx); /*bool*/
  return kk_bool_box(_x_x1220);
}

kk_std_data_hashset__hash_set kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230(kk_std_core_types__list xs, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_std_data_hashset__hash_set _y_x10100, kk_context_t* _ctx) { /* forall<a> (xs : list<a>, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int, hash-set<a>) -> std/num/random/random hash-set<a> */ 
  kk_box_t _x_x1205 = kk_std_core_hnd__open_none4(kk_std_data_hashset_random_fs_list_fs__new_mlift_hash_set_10230_fun1206(_ctx), kk_std_data_hashset__hash_set_box(_y_x10100, _ctx), kk_std_core_types__list_box(xs, _ctx), kk_function_box(kk_std_data_hashset_random_fs_list_fs__new_mlift_hash_set_10230_fun1216(_implicit_fs_hash, _ctx), _ctx), kk_function_box(kk_std_data_hashset_random_fs_list_fs__new_mlift_hash_set_10230_fun1219(_implicit_fs__lp__eq__eq__rp_, _ctx), _ctx), _ctx); /*1004*/
  return kk_std_data_hashset__hash_set_unbox(_x_x1205, KK_OWNED, _ctx);
}
 
// Creates a hash-set from a list `xs`. This hash-set has the same capacity as the length of the list `xs`.
// Random effect is needed to initalize the seed.


// lift anonymous function
struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1224__t {
  struct kk_function_s _base;
  kk_std_core_types__list xs;
  kk_function_t _implicit_fs__lp__eq__eq__rp_;
  kk_function_t _implicit_fs_hash;
};
static kk_box_t kk_std_data_hashset_random_fs_list_fs_hash_set_fun1224(kk_function_t _fself, kk_box_t _b_x183, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_random_fs_list_fs_new_hash_set_fun1224(kk_std_core_types__list xs, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_context_t* _ctx) {
  struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1224__t* _self = kk_function_alloc_as(struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1224__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset_random_fs_list_fs_hash_set_fun1224, kk_context());
  _self->xs = xs;
  _self->_implicit_fs__lp__eq__eq__rp_ = _implicit_fs__lp__eq__eq__rp_;
  _self->_implicit_fs_hash = _implicit_fs_hash;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1229__t {
  struct kk_function_s _base;
};
static kk_std_data_hashset__hash_set kk_std_data_hashset_random_fs_list_fs_hash_set_fun1229(kk_function_t _fself, kk_std_data_hashset__hash_set _x1_x1225, kk_std_core_types__list _x2_x1226, kk_function_t _x3_x1227, kk_function_t _x4_x1228, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_random_fs_list_fs_new_hash_set_fun1229(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset_random_fs_list_fs_hash_set_fun1229, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_std_data_hashset__hash_set kk_std_data_hashset_random_fs_list_fs_hash_set_fun1229(kk_function_t _fself, kk_std_data_hashset__hash_set _x1_x1225, kk_std_core_types__list _x2_x1226, kk_function_t _x3_x1227, kk_function_t _x4_x1228, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashset_from_list_helper(_x1_x1225, _x2_x1226, _x3_x1227, _x4_x1228, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1230__t {
  struct kk_function_s _base;
  kk_function_t _b_x153_214;
};
static kk_box_t kk_std_data_hashset_random_fs_list_fs_hash_set_fun1230(kk_function_t _fself, kk_box_t _b_x158, kk_box_t _b_x159, kk_box_t _b_x160, kk_box_t _b_x161, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_random_fs_list_fs_new_hash_set_fun1230(kk_function_t _b_x153_214, kk_context_t* _ctx) {
  struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1230__t* _self = kk_function_alloc_as(struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1230__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset_random_fs_list_fs_hash_set_fun1230, kk_context());
  _self->_b_x153_214 = _b_x153_214;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1234__t {
  struct kk_function_s _base;
  kk_box_t _b_x160;
};
static kk_integer_t kk_std_data_hashset_random_fs_list_fs_hash_set_fun1234(kk_function_t _fself, kk_box_t _b_x165, int64_t _b_x166, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_random_fs_list_fs_new_hash_set_fun1234(kk_box_t _b_x160, kk_context_t* _ctx) {
  struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1234__t* _self = kk_function_alloc_as(struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1234__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset_random_fs_list_fs_hash_set_fun1234, kk_context());
  _self->_b_x160 = _b_x160;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_integer_t kk_std_data_hashset_random_fs_list_fs_hash_set_fun1234(kk_function_t _fself, kk_box_t _b_x165, int64_t _b_x166, kk_context_t* _ctx) {
  struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1234__t* _self = kk_function_as(struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1234__t*, _fself, _ctx);
  kk_box_t _b_x160 = _self->_b_x160; /* 1002 */
  kk_drop_match(_self, {kk_box_dup(_b_x160, _ctx);}, {}, _ctx)
  kk_box_t _x_x1235;
  kk_function_t _x_x1236 = kk_function_unbox(_b_x160, _ctx); /*(162, 163) -> 164*/
  _x_x1235 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x1236, (_x_x1236, _b_x165, kk_int64_box(_b_x166, _ctx), _ctx), _ctx); /*164*/
  return kk_integer_unbox(_x_x1235, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1237__t {
  struct kk_function_s _base;
  kk_box_t _b_x161;
};
static bool kk_std_data_hashset_random_fs_list_fs_hash_set_fun1237(kk_function_t _fself, kk_box_t _b_x170, kk_box_t _b_x171, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_random_fs_list_fs_new_hash_set_fun1237(kk_box_t _b_x161, kk_context_t* _ctx) {
  struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1237__t* _self = kk_function_alloc_as(struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1237__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset_random_fs_list_fs_hash_set_fun1237, kk_context());
  _self->_b_x161 = _b_x161;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_std_data_hashset_random_fs_list_fs_hash_set_fun1237(kk_function_t _fself, kk_box_t _b_x170, kk_box_t _b_x171, kk_context_t* _ctx) {
  struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1237__t* _self = kk_function_as(struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1237__t*, _fself, _ctx);
  kk_box_t _b_x161 = _self->_b_x161; /* 1003 */
  kk_drop_match(_self, {kk_box_dup(_b_x161, _ctx);}, {}, _ctx)
  kk_box_t _x_x1238;
  kk_function_t _x_x1239 = kk_function_unbox(_b_x161, _ctx); /*(167, 168) -> 169*/
  _x_x1238 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x1239, (_x_x1239, _b_x170, _b_x171, _ctx), _ctx); /*169*/
  return kk_bool_unbox(_x_x1238);
}
static kk_box_t kk_std_data_hashset_random_fs_list_fs_hash_set_fun1230(kk_function_t _fself, kk_box_t _b_x158, kk_box_t _b_x159, kk_box_t _b_x160, kk_box_t _b_x161, kk_context_t* _ctx) {
  struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1230__t* _self = kk_function_as(struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1230__t*, _fself, _ctx);
  kk_function_t _b_x153_214 = _self->_b_x153_214; /* (hs : std/data/hashset/hash-set<1860>, l : list<1860>, ?hash : (1860, int64) -> int, ?(==) : (1860, 1860) -> bool) -> std/data/hashset/hash-set<1860> */
  kk_drop_match(_self, {kk_function_dup(_b_x153_214, _ctx);}, {}, _ctx)
  kk_std_data_hashset__hash_set _x_x1231;
  kk_std_data_hashset__hash_set _x_x1232 = kk_std_data_hashset__hash_set_unbox(_b_x158, KK_OWNED, _ctx); /*std/data/hashset/hash-set<1860>*/
  kk_std_core_types__list _x_x1233 = kk_std_core_types__list_unbox(_b_x159, KK_OWNED, _ctx); /*list<1860>*/
  _x_x1231 = kk_function_call(kk_std_data_hashset__hash_set, (kk_function_t, kk_std_data_hashset__hash_set, kk_std_core_types__list, kk_function_t, kk_function_t, kk_context_t*), _b_x153_214, (_b_x153_214, _x_x1232, _x_x1233, kk_std_data_hashset_random_fs_list_fs_new_hash_set_fun1234(_b_x160, _ctx), kk_std_data_hashset_random_fs_list_fs_new_hash_set_fun1237(_b_x161, _ctx), _ctx), _ctx); /*std/data/hashset/hash-set<1860>*/
  return kk_std_data_hashset__hash_set_box(_x_x1231, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1240__t {
  struct kk_function_s _base;
  kk_function_t _b_x156_217;
};
static kk_box_t kk_std_data_hashset_random_fs_list_fs_hash_set_fun1240(kk_function_t _fself, kk_box_t _b_x175, kk_box_t _b_x176, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_random_fs_list_fs_new_hash_set_fun1240(kk_function_t _b_x156_217, kk_context_t* _ctx) {
  struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1240__t* _self = kk_function_alloc_as(struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1240__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset_random_fs_list_fs_hash_set_fun1240, kk_context());
  _self->_b_x156_217 = _b_x156_217;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashset_random_fs_list_fs_hash_set_fun1240(kk_function_t _fself, kk_box_t _b_x175, kk_box_t _b_x176, kk_context_t* _ctx) {
  struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1240__t* _self = kk_function_as(struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1240__t*, _fself, _ctx);
  kk_function_t _b_x156_217 = _self->_b_x156_217; /* (1860, int64) -> int */
  kk_drop_match(_self, {kk_function_dup(_b_x156_217, _ctx);}, {}, _ctx)
  kk_integer_t _x_x1241;
  int64_t _x_x1242 = kk_int64_unbox(_b_x176, KK_OWNED, _ctx); /*int64*/
  _x_x1241 = kk_function_call(kk_integer_t, (kk_function_t, kk_box_t, int64_t, kk_context_t*), _b_x156_217, (_b_x156_217, _b_x175, _x_x1242, _ctx), _ctx); /*int*/
  return kk_integer_box(_x_x1241, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1243__t {
  struct kk_function_s _base;
  kk_function_t _b_x157_218;
};
static kk_box_t kk_std_data_hashset_random_fs_list_fs_hash_set_fun1243(kk_function_t _fself, kk_box_t _b_x180, kk_box_t _b_x181, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_random_fs_list_fs_new_hash_set_fun1243(kk_function_t _b_x157_218, kk_context_t* _ctx) {
  struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1243__t* _self = kk_function_alloc_as(struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1243__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset_random_fs_list_fs_hash_set_fun1243, kk_context());
  _self->_b_x157_218 = _b_x157_218;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashset_random_fs_list_fs_hash_set_fun1243(kk_function_t _fself, kk_box_t _b_x180, kk_box_t _b_x181, kk_context_t* _ctx) {
  struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1243__t* _self = kk_function_as(struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1243__t*, _fself, _ctx);
  kk_function_t _b_x157_218 = _self->_b_x157_218; /* (1860, 1860) -> bool */
  kk_drop_match(_self, {kk_function_dup(_b_x157_218, _ctx);}, {}, _ctx)
  bool _x_x1244 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _b_x157_218, (_b_x157_218, _b_x180, _b_x181, _ctx), _ctx); /*bool*/
  return kk_bool_box(_x_x1244);
}
static kk_box_t kk_std_data_hashset_random_fs_list_fs_hash_set_fun1224(kk_function_t _fself, kk_box_t _b_x183, kk_context_t* _ctx) {
  struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1224__t* _self = kk_function_as(struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1224__t*, _fself, _ctx);
  kk_std_core_types__list xs = _self->xs; /* list<1860> */
  kk_function_t _implicit_fs__lp__eq__eq__rp_ = _self->_implicit_fs__lp__eq__eq__rp_; /* (1860, 1860) -> bool */
  kk_function_t _implicit_fs_hash = _self->_implicit_fs_hash; /* (1860, int64) -> int */
  kk_drop_match(_self, {kk_std_core_types__list_dup(xs, _ctx);kk_function_dup(_implicit_fs__lp__eq__eq__rp_, _ctx);kk_function_dup(_implicit_fs_hash, _ctx);}, {}, _ctx)
  kk_std_data_hashset__hash_set _y_x10100_224 = kk_std_data_hashset__hash_set_unbox(_b_x183, KK_OWNED, _ctx); /*std/data/hashset/hash-set<1860>*/;
  kk_function_t _b_x153_214 = kk_std_data_hashset_random_fs_list_fs_new_hash_set_fun1229(_ctx); /*(hs : std/data/hashset/hash-set<1860>, l : list<1860>, ?hash : (1860, int64) -> int, ?(==) : (1860, 1860) -> bool) -> std/data/hashset/hash-set<1860>*/;
  kk_std_data_hashset__hash_set _b_x154_215 = _y_x10100_224; /*std/data/hashset/hash-set<1860>*/;
  kk_std_core_types__list _b_x155_216 = xs; /*list<1860>*/;
  kk_function_t _b_x156_217 = _implicit_fs_hash; /*(1860, int64) -> int*/;
  kk_function_t _b_x157_218 = _implicit_fs__lp__eq__eq__rp_; /*(1860, 1860) -> bool*/;
  return kk_std_core_hnd__open_none4(kk_std_data_hashset_random_fs_list_fs_new_hash_set_fun1230(_b_x153_214, _ctx), kk_std_data_hashset__hash_set_box(_b_x154_215, _ctx), kk_std_core_types__list_box(_b_x155_216, _ctx), kk_function_box(kk_std_data_hashset_random_fs_list_fs_new_hash_set_fun1240(_b_x156_217, _ctx), _ctx), kk_function_box(kk_std_data_hashset_random_fs_list_fs_new_hash_set_fun1243(_b_x157_218, _ctx), _ctx), _ctx);
}


// lift anonymous function
struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1245__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashset_random_fs_list_fs_hash_set_fun1245(kk_function_t _fself, kk_box_t _b_x189, kk_box_t _b_x190, kk_box_t _b_x191, kk_box_t _b_x192, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_random_fs_list_fs_new_hash_set_fun1245(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset_random_fs_list_fs_hash_set_fun1245, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1249__t {
  struct kk_function_s _base;
  kk_box_t _b_x191;
};
static kk_integer_t kk_std_data_hashset_random_fs_list_fs_hash_set_fun1249(kk_function_t _fself, kk_box_t _b_x196, int64_t _b_x197, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_random_fs_list_fs_new_hash_set_fun1249(kk_box_t _b_x191, kk_context_t* _ctx) {
  struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1249__t* _self = kk_function_alloc_as(struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1249__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset_random_fs_list_fs_hash_set_fun1249, kk_context());
  _self->_b_x191 = _b_x191;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_integer_t kk_std_data_hashset_random_fs_list_fs_hash_set_fun1249(kk_function_t _fself, kk_box_t _b_x196, int64_t _b_x197, kk_context_t* _ctx) {
  struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1249__t* _self = kk_function_as(struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1249__t*, _fself, _ctx);
  kk_box_t _b_x191 = _self->_b_x191; /* 1002 */
  kk_drop_match(_self, {kk_box_dup(_b_x191, _ctx);}, {}, _ctx)
  kk_box_t _x_x1250;
  kk_function_t _x_x1251 = kk_function_unbox(_b_x191, _ctx); /*(193, 194) -> 195*/
  _x_x1250 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x1251, (_x_x1251, _b_x196, kk_int64_box(_b_x197, _ctx), _ctx), _ctx); /*195*/
  return kk_integer_unbox(_x_x1250, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1252__t {
  struct kk_function_s _base;
  kk_box_t _b_x192;
};
static bool kk_std_data_hashset_random_fs_list_fs_hash_set_fun1252(kk_function_t _fself, kk_box_t _b_x201, kk_box_t _b_x202, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_random_fs_list_fs_new_hash_set_fun1252(kk_box_t _b_x192, kk_context_t* _ctx) {
  struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1252__t* _self = kk_function_alloc_as(struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1252__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset_random_fs_list_fs_hash_set_fun1252, kk_context());
  _self->_b_x192 = _b_x192;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_std_data_hashset_random_fs_list_fs_hash_set_fun1252(kk_function_t _fself, kk_box_t _b_x201, kk_box_t _b_x202, kk_context_t* _ctx) {
  struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1252__t* _self = kk_function_as(struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1252__t*, _fself, _ctx);
  kk_box_t _b_x192 = _self->_b_x192; /* 1003 */
  kk_drop_match(_self, {kk_box_dup(_b_x192, _ctx);}, {}, _ctx)
  kk_box_t _x_x1253;
  kk_function_t _x_x1254 = kk_function_unbox(_b_x192, _ctx); /*(198, 199) -> 200*/
  _x_x1253 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x1254, (_x_x1254, _b_x201, _b_x202, _ctx), _ctx); /*200*/
  return kk_bool_unbox(_x_x1253);
}
static kk_box_t kk_std_data_hashset_random_fs_list_fs_hash_set_fun1245(kk_function_t _fself, kk_box_t _b_x189, kk_box_t _b_x190, kk_box_t _b_x191, kk_box_t _b_x192, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_data_hashset__hash_set _x_x1246;
  kk_std_data_hashset__hash_set _x_x1247 = kk_std_data_hashset__hash_set_unbox(_b_x189, KK_OWNED, _ctx); /*std/data/hashset/hash-set<1860>*/
  kk_std_core_types__list _x_x1248 = kk_std_core_types__list_unbox(_b_x190, KK_OWNED, _ctx); /*list<1860>*/
  _x_x1246 = kk_std_data_hashset_from_list_helper(_x_x1247, _x_x1248, kk_std_data_hashset_random_fs_list_fs_new_hash_set_fun1249(_b_x191, _ctx), kk_std_data_hashset_random_fs_list_fs_new_hash_set_fun1252(_b_x192, _ctx), _ctx); /*std/data/hashset/hash-set<1788>*/
  return kk_std_data_hashset__hash_set_box(_x_x1246, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1255__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs_hash;
};
static kk_box_t kk_std_data_hashset_random_fs_list_fs_hash_set_fun1255(kk_function_t _fself, kk_box_t _b_x206, kk_box_t _b_x207, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_random_fs_list_fs_new_hash_set_fun1255(kk_function_t _implicit_fs_hash, kk_context_t* _ctx) {
  struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1255__t* _self = kk_function_alloc_as(struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1255__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset_random_fs_list_fs_hash_set_fun1255, kk_context());
  _self->_implicit_fs_hash = _implicit_fs_hash;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashset_random_fs_list_fs_hash_set_fun1255(kk_function_t _fself, kk_box_t _b_x206, kk_box_t _b_x207, kk_context_t* _ctx) {
  struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1255__t* _self = kk_function_as(struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1255__t*, _fself, _ctx);
  kk_function_t _implicit_fs_hash = _self->_implicit_fs_hash; /* (1860, int64) -> int */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs_hash, _ctx);}, {}, _ctx)
  kk_integer_t _x_x1256;
  int64_t _x_x1257 = kk_int64_unbox(_b_x207, KK_OWNED, _ctx); /*int64*/
  _x_x1256 = kk_function_call(kk_integer_t, (kk_function_t, kk_box_t, int64_t, kk_context_t*), _implicit_fs_hash, (_implicit_fs_hash, _b_x206, _x_x1257, _ctx), _ctx); /*int*/
  return kk_integer_box(_x_x1256, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1258__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs__lp__eq__eq__rp_;
};
static kk_box_t kk_std_data_hashset_random_fs_list_fs_hash_set_fun1258(kk_function_t _fself, kk_box_t _b_x211, kk_box_t _b_x212, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_random_fs_list_fs_new_hash_set_fun1258(kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) {
  struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1258__t* _self = kk_function_alloc_as(struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1258__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset_random_fs_list_fs_hash_set_fun1258, kk_context());
  _self->_implicit_fs__lp__eq__eq__rp_ = _implicit_fs__lp__eq__eq__rp_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashset_random_fs_list_fs_hash_set_fun1258(kk_function_t _fself, kk_box_t _b_x211, kk_box_t _b_x212, kk_context_t* _ctx) {
  struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1258__t* _self = kk_function_as(struct kk_std_data_hashset_random_fs_list_fs_hash_set_fun1258__t*, _fself, _ctx);
  kk_function_t _implicit_fs__lp__eq__eq__rp_ = _self->_implicit_fs__lp__eq__eq__rp_; /* (1860, 1860) -> bool */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs__lp__eq__eq__rp_, _ctx);}, {}, _ctx)
  bool _x_x1259 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs__lp__eq__eq__rp_, (_implicit_fs__lp__eq__eq__rp_, _b_x211, _b_x212, _ctx), _ctx); /*bool*/
  return kk_bool_box(_x_x1259);
}

kk_std_data_hashset__hash_set kk_std_data_hashset_random_fs_list_fs_hash_set(kk_std_core_types__list xs, kk_function_t _implicit_fs_hash, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) { /* forall<a> (xs : list<a>, ?hash : (a, int64) -> int, ?(==) : (a, a) -> bool) -> std/num/random/random hash-set<a> */ 
  kk_integer_t _b_x151_152;
  kk_std_core_types__list _x_x1221 = kk_std_core_types__list_dup(xs, _ctx); /*list<1860>*/
  _b_x151_152 = kk_std_core_list__lift_length_4947(_x_x1221, kk_integer_from_small(0), _ctx); /*int*/
  kk_std_data_hashset__hash_set x_10253;
  kk_std_core_types__optional _x_x1222 = kk_std_core_types__new_Optional(kk_integer_box(_b_x151_152, _ctx), _ctx); /*? 1003*/
  x_10253 = kk_std_data_hashset_random_fs_hash_set(_x_x1222, _ctx); /*std/data/hashset/hash-set<1860>*/
  kk_box_t _x_x1223;
  if (kk_yielding(kk_context())) {
    kk_datatype_ptr_dropn(x_10253, (KK_I32(2)), _ctx);
    _x_x1223 = kk_std_core_hnd_yield_extend(kk_std_data_hashset_random_fs_list_fs_new_hash_set_fun1224(xs, _implicit_fs__lp__eq__eq__rp_, _implicit_fs_hash, _ctx), _ctx); /*3861*/
  }
  else {
    _x_x1223 = kk_std_core_hnd__open_none4(kk_std_data_hashset_random_fs_list_fs_new_hash_set_fun1245(_ctx), kk_std_data_hashset__hash_set_box(x_10253, _ctx), kk_std_core_types__list_box(xs, _ctx), kk_function_box(kk_std_data_hashset_random_fs_list_fs_new_hash_set_fun1255(_implicit_fs_hash, _ctx), _ctx), kk_function_box(kk_std_data_hashset_random_fs_list_fs_new_hash_set_fun1258(_implicit_fs__lp__eq__eq__rp_, _ctx), _ctx), _ctx); /*3861*/
  }
  return kk_std_data_hashset__hash_set_unbox(_x_x1223, KK_OWNED, _ctx);
}
 
// Creates a hash-set from a list `xs`. This hash-set has the same capacity as the length of the list `xs`.
// The seed is initialized from the thread id.

kk_std_data_hashset__hash_set kk_std_data_hashset_thread_fs_list_fs_hash_set(kk_std_core_types__list xs, kk_function_t _implicit_fs_hash, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) { /* forall<a> (xs : list<a>, ?hash : (a, int64) -> int, ?(==) : (a, a) -> bool) -> hash-set<a> */ 
  kk_integer_t _b_x225_226;
  kk_std_core_types__list _x_x1260 = kk_std_core_types__list_dup(xs, _ctx); /*list<1928>*/
  _b_x225_226 = kk_std_core_list__lift_length_4947(_x_x1260, kk_integer_from_small(0), _ctx); /*int*/
  kk_std_core_types__optional capacity_10042 = kk_std_core_types__new_Optional(kk_integer_box(_b_x225_226, _ctx), _ctx); /*? int*/;
  kk_integer_t n_10044;
  bool _match_x999;
  kk_integer_t _brw_x1000;
  if (kk_std_core_types__is_Optional(capacity_10042, _ctx)) {
    kk_box_t _box_x227 = capacity_10042._cons._Optional.value;
    kk_integer_t _uniq_capacity_275 = kk_integer_unbox(_box_x227, _ctx);
    kk_integer_dup(_uniq_capacity_275, _ctx);
    _brw_x1000 = _uniq_capacity_275; /*int*/
  }
  else {
    _brw_x1000 = kk_integer_from_small(1); /*int*/
  }
  bool _brw_x1001 = kk_integer_gt_borrow(_brw_x1000,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x1000, _ctx);
  _match_x999 = _brw_x1001; /*bool*/
  if (_match_x999) {
    if (kk_std_core_types__is_Optional(capacity_10042, _ctx)) {
      kk_box_t _box_x228 = capacity_10042._cons._Optional.value;
      kk_integer_t _uniq_capacity_275_0 = kk_integer_unbox(_box_x228, _ctx);
      kk_integer_dup(_uniq_capacity_275_0, _ctx);
      kk_std_core_types__optional_drop(capacity_10042, _ctx);
      n_10044 = _uniq_capacity_275_0; /*int*/
    }
    else {
      kk_std_core_types__optional_drop(capacity_10042, _ctx);
      n_10044 = kk_integer_from_small(1); /*int*/
    }
  }
  else {
    kk_std_core_types__optional_drop(capacity_10042, _ctx);
    n_10044 = kk_integer_from_small(1); /*int*/
  }
  kk_ssize_t _b_x229_231 = kk_std_core_int_ssize__t(n_10044, _ctx); /*ssize_t*/;
  kk_std_core_types__list _b_x230_232 = kk_std_core_types__new_Nil(_ctx); /*list<1928>*/;
  kk_std_data_hashset__hash_set _x_x1261;
  kk_vector_t _x_x1262 = kk_std_core_vector_vector_alloc(_b_x229_231, kk_std_core_types__list_box(_b_x230_232, _ctx), _ctx); /*vector<3928>*/
  _x_x1261 = kk_std_data_hashset__new_Hash_set(kk_reuse_null, 0, _x_x1262, kk_integer_from_small(0), kk_std_data_hash_thread_fs_seed, _ctx); /*std/data/hashset/hash-set<5>*/
  return kk_std_data_hashset_from_list_helper(_x_x1261, xs, _implicit_fs_hash, _implicit_fs__lp__eq__eq__rp_, _ctx);
}
 
// Creates a hash-set from a list `xs` and with a `seed`. This hash-set has the same capacity as the length of the list `xs`.

kk_std_data_hashset__hash_set kk_std_data_hashset_list_fs_hash_set_seeded(kk_std_core_types__list xs, int64_t seed, kk_function_t _implicit_fs_hash, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) { /* forall<a> (xs : list<a>, seed : int64, ?hash : (a, int64) -> int, ?(==) : (a, a) -> bool) -> hash-set<a> */ 
  kk_integer_t _b_x233_234;
  kk_std_core_types__list _x_x1263 = kk_std_core_types__list_dup(xs, _ctx); /*list<2008>*/
  _b_x233_234 = kk_std_core_list__lift_length_4947(_x_x1263, kk_integer_from_small(0), _ctx); /*int*/
  kk_std_core_types__optional capacity_10047 = kk_std_core_types__new_Optional(kk_integer_box(_b_x233_234, _ctx), _ctx); /*? int*/;
  kk_integer_t n_10049;
  bool _match_x996;
  kk_integer_t _brw_x997;
  if (kk_std_core_types__is_Optional(capacity_10047, _ctx)) {
    kk_box_t _box_x235 = capacity_10047._cons._Optional.value;
    kk_integer_t _uniq_capacity_391 = kk_integer_unbox(_box_x235, _ctx);
    kk_integer_dup(_uniq_capacity_391, _ctx);
    _brw_x997 = _uniq_capacity_391; /*int*/
  }
  else {
    _brw_x997 = kk_integer_from_small(1); /*int*/
  }
  bool _brw_x998 = kk_integer_gt_borrow(_brw_x997,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x997, _ctx);
  _match_x996 = _brw_x998; /*bool*/
  if (_match_x996) {
    if (kk_std_core_types__is_Optional(capacity_10047, _ctx)) {
      kk_box_t _box_x236 = capacity_10047._cons._Optional.value;
      kk_integer_t _uniq_capacity_391_0 = kk_integer_unbox(_box_x236, _ctx);
      kk_integer_dup(_uniq_capacity_391_0, _ctx);
      kk_std_core_types__optional_drop(capacity_10047, _ctx);
      n_10049 = _uniq_capacity_391_0; /*int*/
    }
    else {
      kk_std_core_types__optional_drop(capacity_10047, _ctx);
      n_10049 = kk_integer_from_small(1); /*int*/
    }
  }
  else {
    kk_std_core_types__optional_drop(capacity_10047, _ctx);
    n_10049 = kk_integer_from_small(1); /*int*/
  }
  kk_ssize_t _b_x237_239 = kk_std_core_int_ssize__t(n_10049, _ctx); /*ssize_t*/;
  kk_std_core_types__list _b_x238_240 = kk_std_core_types__new_Nil(_ctx); /*list<2008>*/;
  kk_std_data_hashset__hash_set _x_x1264;
  kk_vector_t _x_x1265 = kk_std_core_vector_vector_alloc(_b_x237_239, kk_std_core_types__list_box(_b_x238_240, _ctx), _ctx); /*vector<4008>*/
  _x_x1264 = kk_std_data_hashset__new_Hash_set(kk_reuse_null, 0, _x_x1265, kk_integer_from_small(0), seed, _ctx); /*std/data/hashset/hash-set<5>*/
  return kk_std_data_hashset_from_list_helper(_x_x1264, xs, _implicit_fs_hash, _implicit_fs__lp__eq__eq__rp_, _ctx);
}
 
// Removes a value from the hash-set with a given `value`.


// lift anonymous function
struct kk_std_data_hashset_remove_fun1278__t {
  struct kk_function_s _base;
  kk_box_t value;
  kk_function_t _implicit_fs__lp__eq__eq__rp_;
};
static bool kk_std_data_hashset_remove_fun1278(kk_function_t _fself, kk_box_t x, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_new_remove_fun1278(kk_box_t value, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) {
  struct kk_std_data_hashset_remove_fun1278__t* _self = kk_function_alloc_as(struct kk_std_data_hashset_remove_fun1278__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset_remove_fun1278, kk_context());
  _self->value = value;
  _self->_implicit_fs__lp__eq__eq__rp_ = _implicit_fs__lp__eq__eq__rp_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_std_data_hashset_remove_fun1278(kk_function_t _fself, kk_box_t x, kk_context_t* _ctx) {
  struct kk_std_data_hashset_remove_fun1278__t* _self = kk_function_as(struct kk_std_data_hashset_remove_fun1278__t*, _fself, _ctx);
  kk_box_t value = _self->value; /* 2219 */
  kk_function_t _implicit_fs__lp__eq__eq__rp_ = _self->_implicit_fs__lp__eq__eq__rp_; /* (2219, 2219) -> bool */
  kk_drop_match(_self, {kk_box_dup(value, _ctx);kk_function_dup(_implicit_fs__lp__eq__eq__rp_, _ctx);}, {}, _ctx)
  bool b_10055 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs__lp__eq__eq__rp_, (_implicit_fs__lp__eq__eq__rp_, x, value, _ctx), _ctx); /*bool*/;
  if (b_10055) {
    return false;
  }
  {
    return true;
  }
}

kk_std_data_hashset__hash_set kk_std_data_hashset_remove(kk_std_data_hashset__hash_set hs, kk_box_t value, kk_function_t _implicit_fs_hash, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) { /* forall<a> (hs : hash-set<a>, value : a, ?hash : (a, int64) -> int, ?(==) : (a, a) -> bool) -> hash-set<a> */ 
  kk_integer_t the_hash;
  kk_box_t _x_x1266 = kk_box_dup(value, _ctx); /*2219*/
  int64_t _x_x1267;
  {
    struct kk_std_data_hashset_Hash_set* _con_x1268 = kk_std_data_hashset__as_Hash_set(hs, _ctx);
    int64_t _x = _con_x1268->seed;
    _x_x1267 = _x; /*int64*/
  }
  the_hash = kk_function_call(kk_integer_t, (kk_function_t, kk_box_t, int64_t, kk_context_t*), _implicit_fs_hash, (_implicit_fs_hash, _x_x1266, _x_x1267, _ctx), _ctx); /*int*/
  kk_integer_t position;
  kk_integer_t _x_x1269;
  kk_ssize_t _x_x1270;
  kk_vector_t _brw_x994;
  {
    struct kk_std_data_hashset_Hash_set* _con_x1271 = kk_std_data_hashset__as_Hash_set(hs, _ctx);
    kk_vector_t _x_0 = _con_x1271->data;
    kk_vector_dup(_x_0, _ctx);
    _brw_x994 = _x_0; /*vector<list<2219>>*/
  }
  kk_ssize_t _brw_x995 = kk_vector_len_borrow(_brw_x994,kk_context()); /*ssize_t*/;
  kk_vector_drop(_brw_x994, _ctx);
  _x_x1270 = _brw_x995; /*ssize_t*/
  _x_x1269 = kk_integer_from_ssize_t(_x_x1270,kk_context()); /*int*/
  position = kk_integer_mod(the_hash,_x_x1269,kk_context()); /*int*/
  {
    struct kk_std_data_hashset_Hash_set* _con_x1272 = kk_std_data_hashset__as_Hash_set(hs, _ctx);
    kk_vector_t data = _con_x1272->data;
    kk_integer_t amount = _con_x1272->amount;
    int64_t seed = _con_x1272->seed;
    kk_reuse_t _ru_x1070 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(hs, _ctx)) {
      _ru_x1070 = (kk_datatype_ptr_reuse(hs, _ctx));
    }
    else {
      kk_integer_dup(amount, _ctx);
      kk_vector_dup(data, _ctx);
      kk_datatype_ptr_decref(hs, _ctx);
    }
    kk_ssize_t _b_x242_244;
    kk_integer_t _x_x1273 = kk_integer_dup(position, _ctx); /*int*/
    _b_x242_244 = kk_std_core_int_ssize__t(_x_x1273, _ctx); /*ssize_t*/
    kk_std_core_types__list xs_10054;
    kk_box_t _x_x1274 = kk_vector_at_borrow(data,_b_x242_244,kk_context()); /*4214*/
    xs_10054 = kk_std_core_types__list_unbox(_x_x1274, KK_OWNED, _ctx); /*list<2219>*/
    kk_integer_t old_bucket_size = kk_std_core_list__lift_length_4947(xs_10054, kk_integer_from_small(0), _ctx); /*int*/;
    kk_ssize_t _b_x246_248;
    kk_integer_t _x_x1275 = kk_integer_dup(position, _ctx); /*int*/
    _b_x246_248 = kk_std_core_int_ssize__t(_x_x1275, _ctx); /*ssize_t*/
    kk_std_core_types__list bucket;
    kk_std_core_types__list _x_x1276;
    kk_box_t _x_x1277 = kk_vector_at_borrow(data,_b_x246_248,kk_context()); /*4214*/
    _x_x1276 = kk_std_core_types__list_unbox(_x_x1277, KK_OWNED, _ctx); /*list<2219>*/
    bucket = kk_std_core_list_filter(_x_x1276, kk_std_data_hashset_new_remove_fun1278(value, _implicit_fs__lp__eq__eq__rp_, _ctx), _ctx); /*list<2219>*/
    kk_vector_t new_data;
    kk_vector_t _x_x1279 = kk_vector_dup(data, _ctx); /*vector<list<2219>>*/
    new_data = kk_std_core_dash_extras_unsafe_set(_x_x1279, position, kk_std_core_types__list_box(bucket, _ctx), _ctx); /*vector<list<2219>>*/
    kk_ssize_t _b_x256_258 = kk_std_core_int_ssize__t(position, _ctx); /*ssize_t*/;
    kk_std_core_types__list xs_0_10056;
    kk_box_t _x_x1280;
    kk_box_t _brw_x993 = kk_vector_at_borrow(new_data,_b_x256_258,kk_context()); /*4201*/;
    kk_vector_drop(new_data, _ctx);
    _x_x1280 = _brw_x993; /*4201*/
    xs_0_10056 = kk_std_core_types__list_unbox(_x_x1280, KK_OWNED, _ctx); /*list<2219>*/
    kk_integer_t new_amount;
    bool _match_x990;
    kk_integer_t _brw_x991 = kk_std_core_list__lift_length_4947(xs_0_10056, kk_integer_from_small(0), _ctx); /*int*/;
    bool _brw_x992 = kk_integer_gt_borrow(old_bucket_size,_brw_x991,kk_context()); /*bool*/;
    kk_integer_drop(old_bucket_size, _ctx);
    kk_integer_drop(_brw_x991, _ctx);
    _match_x990 = _brw_x992; /*bool*/
    if (_match_x990) {
      kk_integer_t _x_x1281 = kk_integer_dup(amount, _ctx); /*int*/
      new_amount = kk_integer_add_small_const(_x_x1281, -1, _ctx); /*int*/
    }
    else {
      new_amount = kk_integer_dup(amount, _ctx); /*int*/
    }
    kk_integer_drop(new_amount, _ctx);
    kk_integer_t _x_x1282 = kk_integer_add_small_const(amount, -1, _ctx); /*int*/
    return kk_std_data_hashset__new_Hash_set(_ru_x1070, 0, data, _x_x1282, seed, _ctx);
  }
}
 
// monadic lift

kk_std_data_hashset__hash_set kk_std_data_hashset_effect_fs__mlift_map_10231(kk_std_data_hashset__hash_set hs, kk_vector_t new_data, kk_context_t* _ctx) { /* forall<a,b,e> (hs : hash-set<a>, new-data : vector<list<b>>) -> e hash-set<b> */ 
  kk_integer_t _x_x1283;
  {
    struct kk_std_data_hashset_Hash_set* _con_x1284 = kk_std_data_hashset__as_Hash_set(hs, _ctx);
    kk_integer_t _x_0 = _con_x1284->amount;
    kk_integer_dup(_x_0, _ctx);
    _x_x1283 = _x_0; /*int*/
  }
  int64_t _x_x1285;
  {
    struct kk_std_data_hashset_Hash_set* _con_x1286 = kk_std_data_hashset__as_Hash_set(hs, _ctx);
    kk_vector_t _pat_0_1 = _con_x1286->data;
    kk_integer_t _pat_1_1 = _con_x1286->amount;
    int64_t _x_1 = _con_x1286->seed;
    if kk_likely(kk_datatype_ptr_is_unique(hs, _ctx)) {
      kk_integer_drop(_pat_1_1, _ctx);
      kk_vector_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(hs, _ctx);
    }
    else {
      kk_datatype_ptr_decref(hs, _ctx);
    }
    _x_x1285 = _x_1; /*int64*/
  }
  return kk_std_data_hashset__new_Hash_set(kk_reuse_null, 0, new_data, _x_x1283, _x_x1285, _ctx);
}
 
// Applies a function `f` to each key-value of the hash-set via a tuple.


// lift anonymous function
struct kk_std_data_hashset_effect_fs_map_fun1289__t {
  struct kk_function_s _base;
  kk_function_t f;
};
static kk_box_t kk_std_data_hashset_effect_fs_map_fun1289(kk_function_t _fself, kk_box_t _b_x261, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_effect_fs_new_map_fun1289(kk_function_t f, kk_context_t* _ctx) {
  struct kk_std_data_hashset_effect_fs_map_fun1289__t* _self = kk_function_alloc_as(struct kk_std_data_hashset_effect_fs_map_fun1289__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset_effect_fs_map_fun1289, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashset_effect_fs_map_fun1289(kk_function_t _fself, kk_box_t _b_x261, kk_context_t* _ctx) {
  struct kk_std_data_hashset_effect_fs_map_fun1289__t* _self = kk_function_as(struct kk_std_data_hashset_effect_fs_map_fun1289__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (2387) -> 2389 2388 */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_std_core_types__list _x_x1290;
  kk_std_core_types__list _x_x1291 = kk_std_core_types__list_unbox(_b_x261, KK_OWNED, _ctx); /*list<2387>*/
  _x_x1290 = kk_std_core_list_map(_x_x1291, f, _ctx); /*list<4322>*/
  return kk_std_core_types__list_box(_x_x1290, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset_effect_fs_map_fun1293__t {
  struct kk_function_s _base;
  kk_std_data_hashset__hash_set hs;
};
static kk_box_t kk_std_data_hashset_effect_fs_map_fun1293(kk_function_t _fself, kk_box_t _b_x266, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_effect_fs_new_map_fun1293(kk_std_data_hashset__hash_set hs, kk_context_t* _ctx) {
  struct kk_std_data_hashset_effect_fs_map_fun1293__t* _self = kk_function_alloc_as(struct kk_std_data_hashset_effect_fs_map_fun1293__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset_effect_fs_map_fun1293, kk_context());
  _self->hs = hs;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashset_effect_fs_map_fun1293(kk_function_t _fself, kk_box_t _b_x266, kk_context_t* _ctx) {
  struct kk_std_data_hashset_effect_fs_map_fun1293__t* _self = kk_function_as(struct kk_std_data_hashset_effect_fs_map_fun1293__t*, _fself, _ctx);
  kk_std_data_hashset__hash_set hs = _self->hs; /* std/data/hashset/hash-set<2387> */
  kk_drop_match(_self, {kk_std_data_hashset__hash_set_dup(hs, _ctx);}, {}, _ctx)
  kk_vector_t new_data_268 = kk_vector_unbox(_b_x266, _ctx); /*vector<list<2388>>*/;
  kk_std_data_hashset__hash_set _x_x1294;
  kk_integer_t _x_x1295;
  {
    struct kk_std_data_hashset_Hash_set* _con_x1296 = kk_std_data_hashset__as_Hash_set(hs, _ctx);
    kk_integer_t _x_0 = _con_x1296->amount;
    kk_integer_dup(_x_0, _ctx);
    _x_x1295 = _x_0; /*int*/
  }
  int64_t _x_x1297;
  {
    struct kk_std_data_hashset_Hash_set* _con_x1298 = kk_std_data_hashset__as_Hash_set(hs, _ctx);
    kk_vector_t _pat_0_1 = _con_x1298->data;
    kk_integer_t _pat_1_1 = _con_x1298->amount;
    int64_t _x_1 = _con_x1298->seed;
    if kk_likely(kk_datatype_ptr_is_unique(hs, _ctx)) {
      kk_integer_drop(_pat_1_1, _ctx);
      kk_vector_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(hs, _ctx);
    }
    else {
      kk_datatype_ptr_decref(hs, _ctx);
    }
    _x_x1297 = _x_1; /*int64*/
  }
  _x_x1294 = kk_std_data_hashset__new_Hash_set(kk_reuse_null, 0, new_data_268, _x_x1295, _x_x1297, _ctx); /*std/data/hashset/hash-set<5>*/
  return kk_std_data_hashset__hash_set_box(_x_x1294, _ctx);
}

kk_std_data_hashset__hash_set kk_std_data_hashset_effect_fs_map(kk_std_data_hashset__hash_set hs, kk_function_t f, kk_context_t* _ctx) { /* forall<a,b,e> (hs : hash-set<a>, f : (a) -> e b) -> e hash-set<b> */ 
  kk_vector_t x_10260;
  kk_vector_t _x_x1287;
  {
    struct kk_std_data_hashset_Hash_set* _con_x1288 = kk_std_data_hashset__as_Hash_set(hs, _ctx);
    kk_vector_t _x = _con_x1288->data;
    kk_vector_dup(_x, _ctx);
    _x_x1287 = _x; /*vector<list<2387>>*/
  }
  x_10260 = kk_std_core_vector_map(_x_x1287, kk_std_data_hashset_effect_fs_new_map_fun1289(f, _ctx), _ctx); /*vector<list<2388>>*/
  if (kk_yielding(kk_context())) {
    kk_vector_drop(x_10260, _ctx);
    kk_box_t _x_x1292 = kk_std_core_hnd_yield_extend(kk_std_data_hashset_effect_fs_new_map_fun1293(hs, _ctx), _ctx); /*4390*/
    return kk_std_data_hashset__hash_set_unbox(_x_x1292, KK_OWNED, _ctx);
  }
  {
    kk_integer_t _x_x1299;
    {
      struct kk_std_data_hashset_Hash_set* _con_x1300 = kk_std_data_hashset__as_Hash_set(hs, _ctx);
      kk_integer_t _x_0_0 = _con_x1300->amount;
      kk_integer_dup(_x_0_0, _ctx);
      _x_x1299 = _x_0_0; /*int*/
    }
    int64_t _x_x1301;
    {
      struct kk_std_data_hashset_Hash_set* _con_x1302 = kk_std_data_hashset__as_Hash_set(hs, _ctx);
      kk_vector_t _pat_0_1_0 = _con_x1302->data;
      kk_integer_t _pat_1_1_0 = _con_x1302->amount;
      int64_t _x_1_0 = _con_x1302->seed;
      if kk_likely(kk_datatype_ptr_is_unique(hs, _ctx)) {
        kk_integer_drop(_pat_1_1_0, _ctx);
        kk_vector_drop(_pat_0_1_0, _ctx);
        kk_datatype_ptr_free(hs, _ctx);
      }
      else {
        kk_datatype_ptr_decref(hs, _ctx);
      }
      _x_x1301 = _x_1_0; /*int64*/
    }
    return kk_std_data_hashset__new_Hash_set(kk_reuse_null, 0, x_10260, _x_x1299, _x_x1301, _ctx);
  }
}
 
// Applies a function `f` to each key-value of the hash-set via a tuple.


// lift anonymous function
struct kk_std_data_hashset_unique_fs_map_fun1304__t {
  struct kk_function_s _base;
  kk_function_t f;
};
static kk_box_t kk_std_data_hashset_unique_fs_map_fun1304(kk_function_t _fself, kk_box_t _b_x271, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_unique_fs_new_map_fun1304(kk_function_t f, kk_context_t* _ctx) {
  struct kk_std_data_hashset_unique_fs_map_fun1304__t* _self = kk_function_alloc_as(struct kk_std_data_hashset_unique_fs_map_fun1304__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset_unique_fs_map_fun1304, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashset_unique_fs_map_fun1304(kk_function_t _fself, kk_box_t _b_x271, kk_context_t* _ctx) {
  struct kk_std_data_hashset_unique_fs_map_fun1304__t* _self = kk_function_as(struct kk_std_data_hashset_unique_fs_map_fun1304__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (2504) -> 2505 */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_std_core_types__list _x_x1305;
  kk_std_core_types__list _x_x1306 = kk_std_core_types__list_unbox(_b_x271, KK_OWNED, _ctx); /*list<2504>*/
  _x_x1305 = kk_std_core_list_map(_x_x1306, f, _ctx); /*list<4487>*/
  return kk_std_core_types__list_box(_x_x1305, _ctx);
}

kk_std_data_hashset__hash_set kk_std_data_hashset_unique_fs_map(kk_std_data_hashset__hash_set hs, kk_function_t f, kk_context_t* _ctx) { /* forall<a,b> (hs : hash-set<a>, f : (a) -> b) -> hash-set<b> */ 
  {
    struct kk_std_data_hashset_Hash_set* _con_x1303 = kk_std_data_hashset__as_Hash_set(hs, _ctx);
    kk_vector_t data = _con_x1303->data;
    kk_integer_t amount = _con_x1303->amount;
    int64_t seed = _con_x1303->seed;
    kk_reuse_t _ru_x1074 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(hs, _ctx)) {
      _ru_x1074 = (kk_datatype_ptr_reuse(hs, _ctx));
    }
    else {
      kk_integer_dup(amount, _ctx);
      kk_vector_dup(data, _ctx);
      kk_datatype_ptr_decref(hs, _ctx);
    }
    kk_vector_t new_data = kk_std_core_dash_extras_unique_fs_map(data, kk_std_data_hashset_unique_fs_new_map_fun1304(f, _ctx), _ctx); /*vector<list<2505>>*/;
    return kk_std_data_hashset__new_Hash_set(_ru_x1074, 0, new_data, amount, seed, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10232_fun1308__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10232_fun1308(kk_function_t _fself, kk_box_t _b_x277, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10232_fun1308(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10232_fun1308, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10232_fun1308(kk_function_t _fself, kk_box_t _b_x277, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_data_hashset__hash_set hs_4_280 = kk_std_data_hashset__hash_set_unbox(_b_x277, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/;
  kk_integer_t _x_x1309;
  {
    struct kk_std_data_hashset_Hash_set* _con_x1310 = kk_std_data_hashset__as_Hash_set(hs_4_280, _ctx);
    kk_vector_t _pat_0_6 = _con_x1310->data;
    kk_integer_t _x_1 = _con_x1310->amount;
    if kk_likely(kk_datatype_ptr_is_unique(hs_4_280, _ctx)) {
      kk_vector_drop(_pat_0_6, _ctx);
      kk_datatype_ptr_free(hs_4_280, _ctx);
    }
    else {
      kk_integer_dup(_x_1, _ctx);
      kk_datatype_ptr_decref(hs_4_280, _ctx);
    }
    _x_x1309 = _x_1; /*int*/
  }
  return kk_integer_box(_x_x1309, _ctx);
}

kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10232(kk_std_data_hashset__hash_set _y_x10136, kk_context_t* _ctx) { /* forall<h> (hash-set<int>) -> <local<h>,exn,std/test/test/test,console/console,div,exn,std/test/test/test-scope> int */ 
  kk_box_t _x_x1307 = kk_std_core_hnd__open_none1(kk_std_data_hashset__new_mlift_test_hash_set_10232_fun1308(_ctx), kk_std_data_hashset__hash_set_box(_y_x10136, _ctx), _ctx); /*1001*/
  return kk_integer_unbox(_x_x1307, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10233_fun1312__t {
  struct kk_function_s _base;
  kk_std_data_hashset__hash_set _y_x10133;
  kk_integer_t i_2;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10233_fun1312(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10233_fun1312(kk_std_data_hashset__hash_set _y_x10133, kk_integer_t i_2, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10233_fun1312__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10233_fun1312__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10233_fun1312, kk_context());
  _self->_y_x10133 = _y_x10133;
  _self->i_2 = i_2;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10233_fun1315__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10233_fun1315(kk_function_t _fself, kk_integer_t _x1_x1313, int64_t _x2_x1314, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10233_fun1315(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10233_fun1315, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10233_fun1315(kk_function_t _fself, kk_integer_t _x1_x1313, int64_t _x2_x1314, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hash_int_fs_hash(_x1_x1313, _x2_x1314, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10233_fun1316__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashset__mlift_test_hash_set_10233_fun1316(kk_function_t _fself, kk_integer_t x, kk_integer_t y, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10233_fun1316(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10233_fun1316, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashset__mlift_test_hash_set_10233_fun1316(kk_function_t _fself, kk_integer_t x, kk_integer_t y, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _brw_x988 = kk_integer_eq_borrow(x,y,kk_context()); /*bool*/;
  kk_integer_drop(x, _ctx);
  kk_integer_drop(y, _ctx);
  return _brw_x988;
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10233_fun1319__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashset__mlift_test_hash_set_10233_fun1319(kk_function_t _fself, kk_integer_t _x1_x1317, kk_integer_t _x2_x1318, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10233_fun1319(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10233_fun1319, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashset__mlift_test_hash_set_10233_fun1319(kk_function_t _fself, kk_integer_t _x1_x1317, kk_integer_t _x2_x1318, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashset_when_resize(_x1_x1317, _x2_x1318, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10233_fun1322__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10233_fun1322(kk_function_t _fself, kk_integer_t _x1_x1320, kk_integer_t _x2_x1321, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10233_fun1322(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10233_fun1322, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10233_fun1322(kk_function_t _fself, kk_integer_t _x1_x1320, kk_integer_t _x2_x1321, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashset_resizer(_x1_x1320, _x2_x1321, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10233_fun1324__t {
  struct kk_function_s _base;
  kk_function_t _b_x283_299;
};
static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10233_fun1324(kk_function_t _fself, kk_box_t _b_x287, int64_t _b_x288, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10233_fun1324(kk_function_t _b_x283_299, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10233_fun1324__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10233_fun1324__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10233_fun1324, kk_context());
  _self->_b_x283_299 = _b_x283_299;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10233_fun1324(kk_function_t _fself, kk_box_t _b_x287, int64_t _b_x288, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10233_fun1324__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10233_fun1324__t*, _fself, _ctx);
  kk_function_t _b_x283_299 = _self->_b_x283_299; /* (i : int, seed : int64) -> int */
  kk_drop_match(_self, {kk_function_dup(_b_x283_299, _ctx);}, {}, _ctx)
  kk_integer_t _x_x1325 = kk_integer_unbox(_b_x287, _ctx); /*int*/
  return kk_function_call(kk_integer_t, (kk_function_t, kk_integer_t, int64_t, kk_context_t*), _b_x283_299, (_b_x283_299, _x_x1325, _b_x288, _ctx), _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10233_fun1326__t {
  struct kk_function_s _base;
  kk_function_t _b_x284_300;
};
static bool kk_std_data_hashset__mlift_test_hash_set_10233_fun1326(kk_function_t _fself, kk_box_t _b_x289, kk_box_t _b_x290, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10233_fun1326(kk_function_t _b_x284_300, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10233_fun1326__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10233_fun1326__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10233_fun1326, kk_context());
  _self->_b_x284_300 = _b_x284_300;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_std_data_hashset__mlift_test_hash_set_10233_fun1326(kk_function_t _fself, kk_box_t _b_x289, kk_box_t _b_x290, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10233_fun1326__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10233_fun1326__t*, _fself, _ctx);
  kk_function_t _b_x284_300 = _self->_b_x284_300; /* (x : int, y : int) -> bool */
  kk_drop_match(_self, {kk_function_dup(_b_x284_300, _ctx);}, {}, _ctx)
  kk_integer_t _x_x1327 = kk_integer_unbox(_b_x289, _ctx); /*int*/
  kk_integer_t _x_x1328 = kk_integer_unbox(_b_x290, _ctx); /*int*/
  return kk_function_call(bool, (kk_function_t, kk_integer_t, kk_integer_t, kk_context_t*), _b_x284_300, (_b_x284_300, _x_x1327, _x_x1328, _ctx), _ctx);
}
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10233_fun1312(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10233_fun1312__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10233_fun1312__t*, _fself, _ctx);
  kk_std_data_hashset__hash_set _y_x10133 = _self->_y_x10133; /* std/data/hashset/hash-set<int> */
  kk_integer_t i_2 = _self->i_2; /* int */
  kk_drop_match(_self, {kk_std_data_hashset__hash_set_dup(_y_x10133, _ctx);kk_integer_dup(i_2, _ctx);}, {}, _ctx)
  kk_std_data_hashset__hash_set _b_x281_297 = _y_x10133; /*std/data/hashset/hash-set<int>*/;
  kk_integer_t _b_x282_298 = i_2; /*int*/;
  kk_function_t _b_x283_299 = kk_std_data_hashset__new_mlift_test_hash_set_10233_fun1315(_ctx); /*(i : int, seed : int64) -> int*/;
  kk_function_t _b_x284_300 = kk_std_data_hashset__new_mlift_test_hash_set_10233_fun1316(_ctx); /*(x : int, y : int) -> bool*/;
  kk_function_t _b_x285_301 = kk_std_data_hashset__new_mlift_test_hash_set_10233_fun1319(_ctx); /*(table-size : int, item-count : int) -> bool*/;
  kk_function_t _b_x286_302 = kk_std_data_hashset__new_mlift_test_hash_set_10233_fun1322(_ctx); /*(table-size : int, item-count : int) -> int*/;
  kk_std_data_hashset__hash_set _x_x1323 = kk_std_data_hashset_insert(_b_x281_297, kk_integer_box(_b_x282_298, _ctx), kk_std_data_hashset__new_mlift_test_hash_set_10233_fun1324(_b_x283_299, _ctx), kk_std_data_hashset__new_mlift_test_hash_set_10233_fun1326(_b_x284_300, _ctx), _b_x285_301, _b_x286_302, _ctx); /*std/data/hashset/hash-set<1687>*/
  return kk_std_data_hashset__hash_set_box(_x_x1323, _ctx);
}

kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10233(kk_ref_t hs_3_0, kk_integer_t i_2, kk_std_data_hashset__hash_set _y_x10133, kk_context_t* _ctx) { /* forall<h> (hs@3@0 : local-var<h,hash-set<int>>, i@2 : int, hash-set<int>) -> <local<h>,exn,std/test/test/test,console/console,div,exn,std/test/test/test-scope> () */ 
  kk_std_data_hashset__hash_set _b_x293_295;
  kk_box_t _x_x1311 = kk_std_core_hnd__open_none0(kk_std_data_hashset__new_mlift_test_hash_set_10233_fun1312(_y_x10133, i_2, _ctx), _ctx); /*1000*/
  _b_x293_295 = kk_std_data_hashset__hash_set_unbox(_x_x1311, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/
  kk_unit_t _brw_x987 = kk_Unit;
  kk_ref_set_borrow(hs_3_0,(kk_std_data_hashset__hash_set_box(_b_x293_295, _ctx)),kk_context());
  kk_ref_drop(hs_3_0, _ctx);
  _brw_x987; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10234_fun1330__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10234_fun1330(kk_function_t _fself, kk_std_data_hashset__hash_set _y_x10136, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10234_fun1330(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10234_fun1330, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10234_fun1332__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10234_fun1332(kk_function_t _fself, kk_box_t _b_x307, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10234_fun1332(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10234_fun1332, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10234_fun1332(kk_function_t _fself, kk_box_t _b_x307, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x1333;
  kk_std_data_hashset__hash_set _match_x986 = kk_std_data_hashset__hash_set_unbox(_b_x307, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/;
  {
    struct kk_std_data_hashset_Hash_set* _con_x1334 = kk_std_data_hashset__as_Hash_set(_match_x986, _ctx);
    kk_vector_t _pat_0_6 = _con_x1334->data;
    kk_integer_t _x_1 = _con_x1334->amount;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x986, _ctx)) {
      kk_vector_drop(_pat_0_6, _ctx);
      kk_datatype_ptr_free(_match_x986, _ctx);
    }
    else {
      kk_integer_dup(_x_1, _ctx);
      kk_datatype_ptr_decref(_match_x986, _ctx);
    }
    _x_x1333 = _x_1; /*int*/
  }
  return kk_integer_box(_x_x1333, _ctx);
}
static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10234_fun1330(kk_function_t _fself, kk_std_data_hashset__hash_set _y_x10136, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_box_t _x_x1331 = kk_std_core_hnd__open_none1(kk_std_data_hashset__new_mlift_test_hash_set_10234_fun1332(_ctx), kk_std_data_hashset__hash_set_box(_y_x10136, _ctx), _ctx); /*1001*/
  return kk_integer_unbox(_x_x1331, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10234_fun1336__t {
  struct kk_function_s _base;
  kk_function_t next_10266;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10234_fun1336(kk_function_t _fself, kk_box_t _b_x312, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10234_fun1336(kk_function_t next_10266, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10234_fun1336__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10234_fun1336__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10234_fun1336, kk_context());
  _self->next_10266 = next_10266;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10234_fun1336(kk_function_t _fself, kk_box_t _b_x312, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10234_fun1336__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10234_fun1336__t*, _fself, _ctx);
  kk_function_t next_10266 = _self->next_10266; /* (std/data/hashset/hash-set<int>) -> <local<4108>,exn,std/test/test/test,console/console,div,exn,std/test/test/test-scope> int */
  kk_drop_match(_self, {kk_function_dup(next_10266, _ctx);}, {}, _ctx)
  kk_integer_t _x_x1337;
  kk_std_data_hashset__hash_set _x_x1338 = kk_std_data_hashset__hash_set_unbox(_b_x312, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/
  _x_x1337 = kk_function_call(kk_integer_t, (kk_function_t, kk_std_data_hashset__hash_set, kk_context_t*), next_10266, (next_10266, _x_x1338, _ctx), _ctx); /*int*/
  return kk_integer_box(_x_x1337, _ctx);
}

kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10234(kk_ref_t hs_3_0, kk_unit_t wild___8, kk_context_t* _ctx) { /* forall<h> (hs@3@0 : local-var<h,hash-set<int>>, wild_@8 : ()) -> <local<h>,exn,std/test/test/test,console/console,div,exn,std/test/test/test-scope> int */ 
  kk_std_data_hashset__hash_set x_10265;
  kk_box_t _x_x1329 = kk_ref_get(hs_3_0,kk_context()); /*6076*/
  x_10265 = kk_std_data_hashset__hash_set_unbox(_x_x1329, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/
  kk_function_t next_10266 = kk_std_data_hashset__new_mlift_test_hash_set_10234_fun1330(_ctx); /*(std/data/hashset/hash-set<int>) -> <local<4108>,exn,std/test/test/test,console/console,div,exn,std/test/test/test-scope> int*/;
  if (kk_yielding(kk_context())) {
    kk_datatype_ptr_dropn(x_10265, (KK_I32(2)), _ctx);
    kk_box_t _x_x1335 = kk_std_core_hnd_yield_extend(kk_std_data_hashset__new_mlift_test_hash_set_10234_fun1336(next_10266, _ctx), _ctx); /*6109*/
    return kk_integer_unbox(_x_x1335, _ctx);
  }
  {
    return kk_function_call(kk_integer_t, (kk_function_t, kk_std_data_hashset__hash_set, kk_context_t*), next_10266, (next_10266, x_10265, _ctx), _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10235_fun1340__t {
  struct kk_function_s _base;
  kk_ref_t hs_3_0;
};
static kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10235_fun1340(kk_function_t _fself, kk_integer_t i_2, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10235_fun1340(kk_ref_t hs_3_0, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10235_fun1340__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10235_fun1340__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10235_fun1340, kk_context());
  _self->hs_3_0 = hs_3_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10235_fun1343__t {
  struct kk_function_s _base;
  kk_ref_t hs_3_0;
  kk_integer_t i_2;
};
static kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10235_fun1343(kk_function_t _fself, kk_std_data_hashset__hash_set _y_x10133, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10235_fun1343(kk_ref_t hs_3_0, kk_integer_t i_2, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10235_fun1343__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10235_fun1343__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10235_fun1343, kk_context());
  _self->hs_3_0 = hs_3_0;
  _self->i_2 = i_2;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10235_fun1345__t {
  struct kk_function_s _base;
  kk_std_data_hashset__hash_set _y_x10133;
  kk_integer_t i_2;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10235_fun1345(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10235_fun1345(kk_std_data_hashset__hash_set _y_x10133, kk_integer_t i_2, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10235_fun1345__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10235_fun1345__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10235_fun1345, kk_context());
  _self->_y_x10133 = _y_x10133;
  _self->i_2 = i_2;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10235_fun1347__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10235_fun1347(kk_function_t _fself, kk_box_t _b_x322, int64_t _b_x323, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10235_fun1347(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10235_fun1347, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10235_fun1347(kk_function_t _fself, kk_box_t _b_x322, int64_t _b_x323, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x1348 = kk_integer_unbox(_b_x322, _ctx); /*int*/
  return kk_std_data_hash_int_fs_hash(_x_x1348, _b_x323, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10235_fun1349__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashset__mlift_test_hash_set_10235_fun1349(kk_function_t _fself, kk_box_t _b_x324, kk_box_t _b_x325, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10235_fun1349(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10235_fun1349, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashset__mlift_test_hash_set_10235_fun1349(kk_function_t _fself, kk_box_t _b_x324, kk_box_t _b_x325, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _brw_x983 = kk_integer_unbox(_b_x324, _ctx); /*int*/;
  kk_integer_t _brw_x982 = kk_integer_unbox(_b_x325, _ctx); /*int*/;
  bool _brw_x984 = kk_integer_eq_borrow(_brw_x983,_brw_x982,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x983, _ctx);
  kk_integer_drop(_brw_x982, _ctx);
  return _brw_x984;
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10235_fun1352__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashset__mlift_test_hash_set_10235_fun1352(kk_function_t _fself, kk_integer_t _x1_x1350, kk_integer_t _x2_x1351, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10235_fun1352(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10235_fun1352, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashset__mlift_test_hash_set_10235_fun1352(kk_function_t _fself, kk_integer_t _x1_x1350, kk_integer_t _x2_x1351, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashset_when_resize(_x1_x1350, _x2_x1351, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10235_fun1355__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10235_fun1355(kk_function_t _fself, kk_integer_t _x1_x1353, kk_integer_t _x2_x1354, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10235_fun1355(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10235_fun1355, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10235_fun1355(kk_function_t _fself, kk_integer_t _x1_x1353, kk_integer_t _x2_x1354, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashset_resizer(_x1_x1353, _x2_x1354, _ctx);
}
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10235_fun1345(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10235_fun1345__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10235_fun1345__t*, _fself, _ctx);
  kk_std_data_hashset__hash_set _y_x10133 = _self->_y_x10133; /* std/data/hashset/hash-set<int> */
  kk_integer_t i_2 = _self->i_2; /* int */
  kk_drop_match(_self, {kk_std_data_hashset__hash_set_dup(_y_x10133, _ctx);kk_integer_dup(i_2, _ctx);}, {}, _ctx)
  kk_std_data_hashset__hash_set _x_x1346 = kk_std_data_hashset_insert(_y_x10133, kk_integer_box(i_2, _ctx), kk_std_data_hashset__new_mlift_test_hash_set_10235_fun1347(_ctx), kk_std_data_hashset__new_mlift_test_hash_set_10235_fun1349(_ctx), kk_std_data_hashset__new_mlift_test_hash_set_10235_fun1352(_ctx), kk_std_data_hashset__new_mlift_test_hash_set_10235_fun1355(_ctx), _ctx); /*std/data/hashset/hash-set<1687>*/
  return kk_std_data_hashset__hash_set_box(_x_x1346, _ctx);
}
static kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10235_fun1343(kk_function_t _fself, kk_std_data_hashset__hash_set _y_x10133, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10235_fun1343__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10235_fun1343__t*, _fself, _ctx);
  kk_ref_t hs_3_0 = _self->hs_3_0; /* local-var<4108,std/data/hashset/hash-set<int>> */
  kk_integer_t i_2 = _self->i_2; /* int */
  kk_drop_match(_self, {kk_ref_dup(hs_3_0, _ctx);kk_integer_dup(i_2, _ctx);}, {}, _ctx)
  kk_std_data_hashset__hash_set _b_x328_330;
  kk_box_t _x_x1344 = kk_std_core_hnd__open_none0(kk_std_data_hashset__new_mlift_test_hash_set_10235_fun1345(_y_x10133, i_2, _ctx), _ctx); /*1000*/
  _b_x328_330 = kk_std_data_hashset__hash_set_unbox(_x_x1344, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/
  kk_unit_t _brw_x981 = kk_Unit;
  kk_ref_set_borrow(hs_3_0,(kk_std_data_hashset__hash_set_box(_b_x328_330, _ctx)),kk_context());
  kk_ref_drop(hs_3_0, _ctx);
  _brw_x981; return kk_Unit;
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10235_fun1357__t {
  struct kk_function_s _base;
  kk_function_t next_0_10271;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10235_fun1357(kk_function_t _fself, kk_box_t _b_x339, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10235_fun1357(kk_function_t next_0_10271, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10235_fun1357__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10235_fun1357__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10235_fun1357, kk_context());
  _self->next_0_10271 = next_0_10271;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10235_fun1357(kk_function_t _fself, kk_box_t _b_x339, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10235_fun1357__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10235_fun1357__t*, _fself, _ctx);
  kk_function_t next_0_10271 = _self->next_0_10271; /* (std/data/hashset/hash-set<int>) -> <local<4108>,exn,std/test/test/test,console/console,div,exn,std/test/test/test-scope> () */
  kk_drop_match(_self, {kk_function_dup(next_0_10271, _ctx);}, {}, _ctx)
  kk_unit_t _x_x1358 = kk_Unit;
  kk_std_data_hashset__hash_set _x_x1359 = kk_std_data_hashset__hash_set_unbox(_b_x339, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_data_hashset__hash_set, kk_context_t*), next_0_10271, (next_0_10271, _x_x1359, _ctx), _ctx);
  return kk_unit_box(_x_x1358);
}
static kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10235_fun1340(kk_function_t _fself, kk_integer_t i_2, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10235_fun1340__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10235_fun1340__t*, _fself, _ctx);
  kk_ref_t hs_3_0 = _self->hs_3_0; /* local-var<4108,std/data/hashset/hash-set<int>> */
  kk_drop_match(_self, {kk_ref_dup(hs_3_0, _ctx);}, {}, _ctx)
  kk_std_data_hashset__hash_set x_0_10270;
  kk_box_t _x_x1341;
  kk_ref_t _x_x1342 = kk_ref_dup(hs_3_0, _ctx); /*local-var<4108,std/data/hashset/hash-set<int>>*/
  _x_x1341 = kk_ref_get(_x_x1342,kk_context()); /*6048*/
  x_0_10270 = kk_std_data_hashset__hash_set_unbox(_x_x1341, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/
  kk_function_t next_0_10271 = kk_std_data_hashset__new_mlift_test_hash_set_10235_fun1343(hs_3_0, i_2, _ctx); /*(std/data/hashset/hash-set<int>) -> <local<4108>,exn,std/test/test/test,console/console,div,exn,std/test/test/test-scope> ()*/;
  if (kk_yielding(kk_context())) {
    kk_datatype_ptr_dropn(x_0_10270, (KK_I32(2)), _ctx);
    kk_box_t _x_x1356 = kk_std_core_hnd_yield_extend(kk_std_data_hashset__new_mlift_test_hash_set_10235_fun1357(next_0_10271, _ctx), _ctx); /*6109*/
    kk_unit_unbox(_x_x1356); return kk_Unit;
  }
  {
    kk_function_call(kk_unit_t, (kk_function_t, kk_std_data_hashset__hash_set, kk_context_t*), next_0_10271, (next_0_10271, x_0_10270, _ctx), _ctx); return kk_Unit;
  }
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10235_fun1361__t {
  struct kk_function_s _base;
  kk_ref_t hs_3_0;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10235_fun1361(kk_function_t _fself, kk_box_t _b_x342, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10235_fun1361(kk_ref_t hs_3_0, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10235_fun1361__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10235_fun1361__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10235_fun1361, kk_context());
  _self->hs_3_0 = hs_3_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10235_fun1361(kk_function_t _fself, kk_box_t _b_x342, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10235_fun1361__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10235_fun1361__t*, _fself, _ctx);
  kk_ref_t hs_3_0 = _self->hs_3_0; /* local-var<4108,std/data/hashset/hash-set<int>> */
  kk_drop_match(_self, {kk_ref_dup(hs_3_0, _ctx);}, {}, _ctx)
  kk_unit_t wild___8_344 = kk_Unit;
  kk_unit_unbox(_b_x342);
  kk_integer_t _x_x1362 = kk_std_data_hashset__mlift_test_hash_set_10234(hs_3_0, wild___8_344, _ctx); /*int*/
  return kk_integer_box(_x_x1362, _ctx);
}

kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10235(kk_ref_t hs_3_0, kk_unit_t wild___7, kk_context_t* _ctx) { /* forall<h> (hs@3@0 : local-var<h,hash-set<int>>, wild_@7 : ()) -> <local<h>,exn,std/test/test/test,console/console,div,exn,std/test/test/test-scope> int */ 
  kk_unit_t x_10268 = kk_Unit;
  kk_function_t _x_x1339;
  kk_ref_dup(hs_3_0, _ctx);
  _x_x1339 = kk_std_data_hashset__new_mlift_test_hash_set_10235_fun1340(hs_3_0, _ctx); /*(i@2 : int) -> <local<4108>,exn,std/test/test/test,console/console,div,exn,std/test/test/test-scope> ()*/
  kk_std_core_for(kk_integer_from_small(50), _x_x1339, _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1360 = kk_std_core_hnd_yield_extend(kk_std_data_hashset__new_mlift_test_hash_set_10235_fun1361(hs_3_0, _ctx), _ctx); /*6109*/
    return kk_integer_unbox(_x_x1360, _ctx);
  }
  {
    return kk_std_data_hashset__mlift_test_hash_set_10234(hs_3_0, x_10268, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10236_fun1364__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10236_fun1364(kk_function_t _fself, kk_box_t _b_x347, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10236_fun1364(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10236_fun1364, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10236_fun1364(kk_function_t _fself, kk_box_t _b_x347, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_data_hashset__hash_set _x_x1365;
  kk_std_data_hashset__hash_set _x_x1366 = kk_std_data_hashset__hash_set_unbox(_b_x347, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/
  _x_x1365 = kk_std_data_hashset_clear(_x_x1366, _ctx); /*std/data/hashset/hash-set<788>*/
  return kk_std_data_hashset__hash_set_box(_x_x1365, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10236_fun1368__t {
  struct kk_function_s _base;
  kk_ref_t hs_3_0;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10236_fun1368(kk_function_t _fself, kk_box_t _b_x355, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10236_fun1368(kk_ref_t hs_3_0, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10236_fun1368__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10236_fun1368__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10236_fun1368, kk_context());
  _self->hs_3_0 = hs_3_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10236_fun1368(kk_function_t _fself, kk_box_t _b_x355, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10236_fun1368__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10236_fun1368__t*, _fself, _ctx);
  kk_ref_t hs_3_0 = _self->hs_3_0; /* local-var<4108,std/data/hashset/hash-set<int>> */
  kk_drop_match(_self, {kk_ref_dup(hs_3_0, _ctx);}, {}, _ctx)
  kk_unit_t wild___7_357 = kk_Unit;
  kk_unit_unbox(_b_x355);
  kk_integer_t _x_x1369 = kk_std_data_hashset__mlift_test_hash_set_10235(hs_3_0, wild___7_357, _ctx); /*int*/
  return kk_integer_box(_x_x1369, _ctx);
}

kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10236(kk_ref_t hs_3_0, kk_std_data_hashset__hash_set _y_x10131, kk_context_t* _ctx) { /* forall<h> (hs@3@0 : local-var<h,hash-set<int>>, hash-set<int>) -> <local<h>,exn,std/test/test/test,console/console,div,exn,std/test/test/test-scope> int */ 
  kk_std_data_hashset__hash_set _b_x349_351;
  kk_box_t _x_x1363 = kk_std_core_hnd__open_none1(kk_std_data_hashset__new_mlift_test_hash_set_10236_fun1364(_ctx), kk_std_data_hashset__hash_set_box(_y_x10131, _ctx), _ctx); /*1001*/
  _b_x349_351 = kk_std_data_hashset__hash_set_unbox(_x_x1363, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/
  kk_unit_t x_10275 = kk_Unit;
  kk_ref_set_borrow(hs_3_0,(kk_std_data_hashset__hash_set_box(_b_x349_351, _ctx)),kk_context());
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1367 = kk_std_core_hnd_yield_extend(kk_std_data_hashset__new_mlift_test_hash_set_10236_fun1368(hs_3_0, _ctx), _ctx); /*6109*/
    return kk_integer_unbox(_x_x1367, _ctx);
  }
  {
    return kk_std_data_hashset__mlift_test_hash_set_10235(hs_3_0, x_10275, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10237_fun1371__t {
  struct kk_function_s _base;
  kk_std_data_hashset__hash_set _y_x10128;
  kk_integer_t i_1;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10237_fun1371(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10237_fun1371(kk_std_data_hashset__hash_set _y_x10128, kk_integer_t i_1, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10237_fun1371__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10237_fun1371__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10237_fun1371, kk_context());
  _self->_y_x10128 = _y_x10128;
  _self->i_1 = i_1;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10237_fun1374__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10237_fun1374(kk_function_t _fself, kk_integer_t _x1_x1372, int64_t _x2_x1373, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10237_fun1374(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10237_fun1374, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10237_fun1374(kk_function_t _fself, kk_integer_t _x1_x1372, int64_t _x2_x1373, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hash_int_fs_hash(_x1_x1372, _x2_x1373, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10237_fun1375__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashset__mlift_test_hash_set_10237_fun1375(kk_function_t _fself, kk_integer_t x, kk_integer_t y, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10237_fun1375(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10237_fun1375, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashset__mlift_test_hash_set_10237_fun1375(kk_function_t _fself, kk_integer_t x, kk_integer_t y, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _brw_x977 = kk_integer_eq_borrow(x,y,kk_context()); /*bool*/;
  kk_integer_drop(x, _ctx);
  kk_integer_drop(y, _ctx);
  return _brw_x977;
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10237_fun1378__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashset__mlift_test_hash_set_10237_fun1378(kk_function_t _fself, kk_integer_t _x1_x1376, kk_integer_t _x2_x1377, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10237_fun1378(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10237_fun1378, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashset__mlift_test_hash_set_10237_fun1378(kk_function_t _fself, kk_integer_t _x1_x1376, kk_integer_t _x2_x1377, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashset_when_resize(_x1_x1376, _x2_x1377, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10237_fun1381__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10237_fun1381(kk_function_t _fself, kk_integer_t _x1_x1379, kk_integer_t _x2_x1380, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10237_fun1381(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10237_fun1381, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10237_fun1381(kk_function_t _fself, kk_integer_t _x1_x1379, kk_integer_t _x2_x1380, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashset_resizer(_x1_x1379, _x2_x1380, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10237_fun1383__t {
  struct kk_function_s _base;
  kk_function_t _b_x360_376;
};
static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10237_fun1383(kk_function_t _fself, kk_box_t _b_x364, int64_t _b_x365, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10237_fun1383(kk_function_t _b_x360_376, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10237_fun1383__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10237_fun1383__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10237_fun1383, kk_context());
  _self->_b_x360_376 = _b_x360_376;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10237_fun1383(kk_function_t _fself, kk_box_t _b_x364, int64_t _b_x365, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10237_fun1383__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10237_fun1383__t*, _fself, _ctx);
  kk_function_t _b_x360_376 = _self->_b_x360_376; /* (i : int, seed : int64) -> int */
  kk_drop_match(_self, {kk_function_dup(_b_x360_376, _ctx);}, {}, _ctx)
  kk_integer_t _x_x1384 = kk_integer_unbox(_b_x364, _ctx); /*int*/
  return kk_function_call(kk_integer_t, (kk_function_t, kk_integer_t, int64_t, kk_context_t*), _b_x360_376, (_b_x360_376, _x_x1384, _b_x365, _ctx), _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10237_fun1385__t {
  struct kk_function_s _base;
  kk_function_t _b_x361_377;
};
static bool kk_std_data_hashset__mlift_test_hash_set_10237_fun1385(kk_function_t _fself, kk_box_t _b_x366, kk_box_t _b_x367, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10237_fun1385(kk_function_t _b_x361_377, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10237_fun1385__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10237_fun1385__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10237_fun1385, kk_context());
  _self->_b_x361_377 = _b_x361_377;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_std_data_hashset__mlift_test_hash_set_10237_fun1385(kk_function_t _fself, kk_box_t _b_x366, kk_box_t _b_x367, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10237_fun1385__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10237_fun1385__t*, _fself, _ctx);
  kk_function_t _b_x361_377 = _self->_b_x361_377; /* (x : int, y : int) -> bool */
  kk_drop_match(_self, {kk_function_dup(_b_x361_377, _ctx);}, {}, _ctx)
  kk_integer_t _x_x1386 = kk_integer_unbox(_b_x366, _ctx); /*int*/
  kk_integer_t _x_x1387 = kk_integer_unbox(_b_x367, _ctx); /*int*/
  return kk_function_call(bool, (kk_function_t, kk_integer_t, kk_integer_t, kk_context_t*), _b_x361_377, (_b_x361_377, _x_x1386, _x_x1387, _ctx), _ctx);
}
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10237_fun1371(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10237_fun1371__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10237_fun1371__t*, _fself, _ctx);
  kk_std_data_hashset__hash_set _y_x10128 = _self->_y_x10128; /* std/data/hashset/hash-set<int> */
  kk_integer_t i_1 = _self->i_1; /* int */
  kk_drop_match(_self, {kk_std_data_hashset__hash_set_dup(_y_x10128, _ctx);kk_integer_dup(i_1, _ctx);}, {}, _ctx)
  kk_std_data_hashset__hash_set _b_x358_374 = _y_x10128; /*std/data/hashset/hash-set<int>*/;
  kk_integer_t _b_x359_375 = i_1; /*int*/;
  kk_function_t _b_x360_376 = kk_std_data_hashset__new_mlift_test_hash_set_10237_fun1374(_ctx); /*(i : int, seed : int64) -> int*/;
  kk_function_t _b_x361_377 = kk_std_data_hashset__new_mlift_test_hash_set_10237_fun1375(_ctx); /*(x : int, y : int) -> bool*/;
  kk_function_t _b_x362_378 = kk_std_data_hashset__new_mlift_test_hash_set_10237_fun1378(_ctx); /*(table-size : int, item-count : int) -> bool*/;
  kk_function_t _b_x363_379 = kk_std_data_hashset__new_mlift_test_hash_set_10237_fun1381(_ctx); /*(table-size : int, item-count : int) -> int*/;
  kk_std_data_hashset__hash_set _x_x1382 = kk_std_data_hashset_insert(_b_x358_374, kk_integer_box(_b_x359_375, _ctx), kk_std_data_hashset__new_mlift_test_hash_set_10237_fun1383(_b_x360_376, _ctx), kk_std_data_hashset__new_mlift_test_hash_set_10237_fun1385(_b_x361_377, _ctx), _b_x362_378, _b_x363_379, _ctx); /*std/data/hashset/hash-set<1687>*/
  return kk_std_data_hashset__hash_set_box(_x_x1382, _ctx);
}

kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10237(kk_ref_t hs_3_0, kk_integer_t i_1, kk_std_data_hashset__hash_set _y_x10128, kk_context_t* _ctx) { /* forall<h> (hs@3@0 : local-var<h,hash-set<int>>, i@1 : int, hash-set<int>) -> <local<h>,std/test/test/test,console/console,div,exn,std/test/test/test-scope> () */ 
  kk_std_data_hashset__hash_set _b_x370_372;
  kk_box_t _x_x1370 = kk_std_core_hnd__open_none0(kk_std_data_hashset__new_mlift_test_hash_set_10237_fun1371(_y_x10128, i_1, _ctx), _ctx); /*1000*/
  _b_x370_372 = kk_std_data_hashset__hash_set_unbox(_x_x1370, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/
  kk_unit_t _brw_x976 = kk_Unit;
  kk_ref_set_borrow(hs_3_0,(kk_std_data_hashset__hash_set_box(_b_x370_372, _ctx)),kk_context());
  kk_ref_drop(hs_3_0, _ctx);
  _brw_x976; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10238_fun1388__t {
  struct kk_function_s _base;
  kk_ref_t hs_3_0;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10238_fun1388(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10238_fun1388(kk_ref_t hs_3_0, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10238_fun1388__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10238_fun1388__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10238_fun1388, kk_context());
  _self->hs_3_0 = hs_3_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10238_fun1393__t {
  struct kk_function_s _base;
  kk_ref_t hs_3_0;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10238_fun1393(kk_function_t _fself, kk_box_t _b_x383, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10238_fun1393(kk_ref_t hs_3_0, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10238_fun1393__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10238_fun1393__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10238_fun1393, kk_context());
  _self->hs_3_0 = hs_3_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10238_fun1393(kk_function_t _fself, kk_box_t _b_x383, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10238_fun1393__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10238_fun1393__t*, _fself, _ctx);
  kk_ref_t hs_3_0 = _self->hs_3_0; /* local-var<4108,std/data/hashset/hash-set<int>> */
  kk_drop_match(_self, {kk_ref_dup(hs_3_0, _ctx);}, {}, _ctx)
  kk_std_data_hashset__hash_set _y_x10131_404 = kk_std_data_hashset__hash_set_unbox(_b_x383, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/;
  kk_integer_t _x_x1394 = kk_std_data_hashset__mlift_test_hash_set_10236(hs_3_0, _y_x10131_404, _ctx); /*int*/
  return kk_integer_box(_x_x1394, _ctx);
}
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10238_fun1388(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10238_fun1388__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10238_fun1388__t*, _fself, _ctx);
  kk_ref_t hs_3_0 = _self->hs_3_0; /* local-var<4108,std/data/hashset/hash-set<int>> */
  kk_drop_match(_self, {kk_ref_dup(hs_3_0, _ctx);}, {}, _ctx)
  kk_std_data_hashset__hash_set x_10277;
  kk_box_t _x_x1389;
  kk_ref_t _x_x1390 = kk_ref_dup(hs_3_0, _ctx); /*local-var<4108,std/data/hashset/hash-set<int>>*/
  _x_x1389 = kk_ref_get(_x_x1390,kk_context()); /*6076*/
  x_10277 = kk_std_data_hashset__hash_set_unbox(_x_x1389, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/
  kk_integer_t _x_x1391;
  if (kk_yielding(kk_context())) {
    kk_datatype_ptr_dropn(x_10277, (KK_I32(2)), _ctx);
    kk_box_t _x_x1392 = kk_std_core_hnd_yield_extend(kk_std_data_hashset__new_mlift_test_hash_set_10238_fun1393(hs_3_0, _ctx), _ctx); /*6109*/
    _x_x1391 = kk_integer_unbox(_x_x1392, _ctx); /*int*/
  }
  else {
    _x_x1391 = kk_std_data_hashset__mlift_test_hash_set_10236(hs_3_0, x_10277, _ctx); /*int*/
  }
  return kk_integer_box(_x_x1391, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10238_fun1395__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashset__mlift_test_hash_set_10238_fun1395(kk_function_t _fself, kk_box_t _b_x392, kk_box_t _b_x393, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10238_fun1395(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10238_fun1395, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashset__mlift_test_hash_set_10238_fun1395(kk_function_t _fself, kk_box_t _b_x392, kk_box_t _b_x393, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _brw_x973 = kk_integer_unbox(_b_x392, _ctx); /*int*/;
  kk_integer_t _brw_x972 = kk_integer_unbox(_b_x393, _ctx); /*int*/;
  bool _brw_x974 = kk_integer_eq_borrow(_brw_x973,_brw_x972,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x973, _ctx);
  kk_integer_drop(_brw_x972, _ctx);
  return _brw_x974;
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10238_fun1396__t {
  struct kk_function_s _base;
};
static kk_string_t kk_std_data_hashset__mlift_test_hash_set_10238_fun1396(kk_function_t _fself, kk_box_t _b_x394, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10238_fun1396(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10238_fun1396, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_std_data_hashset__mlift_test_hash_set_10238_fun1396(kk_function_t _fself, kk_box_t _b_x394, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x1397 = kk_integer_unbox(_b_x394, _ctx); /*int*/
  return kk_std_core_int_show(_x_x1397, _ctx);
}

kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10238(kk_ref_t hs_3_0, kk_unit_t wild___6, kk_context_t* _ctx) { /* forall<h> (hs@3@0 : local-var<h,hash-set<int>>, wild_@6 : ()) -> <local<h>,std/test/test/test,console/console,div,exn,std/test/test/test-scope> () */ 
  kk_string_t _x_x1398;
  kk_define_string_literal(, _s_x1399, 3, "233", _ctx)
  _x_x1398 = kk_string_dup(_s_x1399, _ctx); /*string*/
  kk_string_t _x_x1400;
  kk_define_string_literal(, _s_x1401, 16, "std/data/hashset", _ctx)
  _x_x1400 = kk_string_dup(_s_x1401, _ctx); /*string*/
  kk_std_test_test_expect(kk_integer_box(kk_integer_from_small(50), _ctx), kk_std_data_hashset__new_mlift_test_hash_set_10238_fun1388(hs_3_0, _ctx), kk_std_core_types__new_None(_ctx), kk_std_core_types__new_None(_ctx), kk_std_data_hashset__new_mlift_test_hash_set_10238_fun1395(_ctx), kk_std_data_hashset__new_mlift_test_hash_set_10238_fun1396(_ctx), _x_x1398, _x_x1400, _ctx); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10239_fun1403__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10239_fun1403(kk_function_t _fself, kk_box_t _b_x407, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10239_fun1403(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10239_fun1403, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10239_fun1403(kk_function_t _fself, kk_box_t _b_x407, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_data_hashset__hash_set hs_3_410 = kk_std_data_hashset__hash_set_unbox(_b_x407, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/;
  kk_integer_t _x_x1404;
  {
    struct kk_std_data_hashset_Hash_set* _con_x1405 = kk_std_data_hashset__as_Hash_set(hs_3_410, _ctx);
    kk_vector_t _pat_0_4 = _con_x1405->data;
    kk_integer_t _x_0 = _con_x1405->amount;
    if kk_likely(kk_datatype_ptr_is_unique(hs_3_410, _ctx)) {
      kk_vector_drop(_pat_0_4, _ctx);
      kk_datatype_ptr_free(hs_3_410, _ctx);
    }
    else {
      kk_integer_dup(_x_0, _ctx);
      kk_datatype_ptr_decref(hs_3_410, _ctx);
    }
    _x_x1404 = _x_0; /*int*/
  }
  return kk_integer_box(_x_x1404, _ctx);
}

kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10239(kk_std_data_hashset__hash_set _y_x10122, kk_context_t* _ctx) { /* forall<h> (hash-set<int>) -> <local<h>,exn,std/test/test/test,console/console,div,exn,std/test/test/test-scope> int */ 
  kk_box_t _x_x1402 = kk_std_core_hnd__open_none1(kk_std_data_hashset__new_mlift_test_hash_set_10239_fun1403(_ctx), kk_std_data_hashset__hash_set_box(_y_x10122, _ctx), _ctx); /*1001*/
  return kk_integer_unbox(_x_x1402, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10240_fun1407__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10240_fun1407(kk_function_t _fself, kk_std_data_hashset__hash_set _y_x10122, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10240_fun1407(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10240_fun1407, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10240_fun1409__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10240_fun1409(kk_function_t _fself, kk_box_t _b_x415, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10240_fun1409(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10240_fun1409, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10240_fun1409(kk_function_t _fself, kk_box_t _b_x415, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x1410;
  kk_std_data_hashset__hash_set _match_x971 = kk_std_data_hashset__hash_set_unbox(_b_x415, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/;
  {
    struct kk_std_data_hashset_Hash_set* _con_x1411 = kk_std_data_hashset__as_Hash_set(_match_x971, _ctx);
    kk_vector_t _pat_0_4 = _con_x1411->data;
    kk_integer_t _x_0 = _con_x1411->amount;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x971, _ctx)) {
      kk_vector_drop(_pat_0_4, _ctx);
      kk_datatype_ptr_free(_match_x971, _ctx);
    }
    else {
      kk_integer_dup(_x_0, _ctx);
      kk_datatype_ptr_decref(_match_x971, _ctx);
    }
    _x_x1410 = _x_0; /*int*/
  }
  return kk_integer_box(_x_x1410, _ctx);
}
static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10240_fun1407(kk_function_t _fself, kk_std_data_hashset__hash_set _y_x10122, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_box_t _x_x1408 = kk_std_core_hnd__open_none1(kk_std_data_hashset__new_mlift_test_hash_set_10240_fun1409(_ctx), kk_std_data_hashset__hash_set_box(_y_x10122, _ctx), _ctx); /*1001*/
  return kk_integer_unbox(_x_x1408, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10240_fun1413__t {
  struct kk_function_s _base;
  kk_function_t next_10280;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10240_fun1413(kk_function_t _fself, kk_box_t _b_x420, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10240_fun1413(kk_function_t next_10280, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10240_fun1413__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10240_fun1413__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10240_fun1413, kk_context());
  _self->next_10280 = next_10280;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10240_fun1413(kk_function_t _fself, kk_box_t _b_x420, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10240_fun1413__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10240_fun1413__t*, _fself, _ctx);
  kk_function_t next_10280 = _self->next_10280; /* (std/data/hashset/hash-set<int>) -> <local<3698>,exn,std/test/test/test,console/console,div,exn,std/test/test/test-scope> int */
  kk_drop_match(_self, {kk_function_dup(next_10280, _ctx);}, {}, _ctx)
  kk_integer_t _x_x1414;
  kk_std_data_hashset__hash_set _x_x1415 = kk_std_data_hashset__hash_set_unbox(_b_x420, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/
  _x_x1414 = kk_function_call(kk_integer_t, (kk_function_t, kk_std_data_hashset__hash_set, kk_context_t*), next_10280, (next_10280, _x_x1415, _ctx), _ctx); /*int*/
  return kk_integer_box(_x_x1414, _ctx);
}

kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10240(kk_ref_t hs_2, kk_unit_t wild___4, kk_context_t* _ctx) { /* forall<h> (hs@2 : local-var<h,hash-set<int>>, wild_@4 : ()) -> <local<h>,exn,std/test/test/test,console/console,div,exn,std/test/test/test-scope> int */ 
  kk_std_data_hashset__hash_set x_10279;
  kk_box_t _x_x1406 = kk_ref_get(hs_2,kk_context()); /*5666*/
  x_10279 = kk_std_data_hashset__hash_set_unbox(_x_x1406, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/
  kk_function_t next_10280 = kk_std_data_hashset__new_mlift_test_hash_set_10240_fun1407(_ctx); /*(std/data/hashset/hash-set<int>) -> <local<3698>,exn,std/test/test/test,console/console,div,exn,std/test/test/test-scope> int*/;
  if (kk_yielding(kk_context())) {
    kk_datatype_ptr_dropn(x_10279, (KK_I32(2)), _ctx);
    kk_box_t _x_x1412 = kk_std_core_hnd_yield_extend(kk_std_data_hashset__new_mlift_test_hash_set_10240_fun1413(next_10280, _ctx), _ctx); /*5699*/
    return kk_integer_unbox(_x_x1412, _ctx);
  }
  {
    return kk_function_call(kk_integer_t, (kk_function_t, kk_std_data_hashset__hash_set, kk_context_t*), next_10280, (next_10280, x_10279, _ctx), _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10241_fun1417__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10241_fun1417(kk_function_t _fself, kk_box_t _b_x424, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10241_fun1417(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10241_fun1417, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10241_fun1417(kk_function_t _fself, kk_box_t _b_x424, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_data_hashset__hash_set _x_x1418;
  kk_std_data_hashset__hash_set _x_x1419 = kk_std_data_hashset__hash_set_unbox(_b_x424, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/
  _x_x1418 = kk_std_data_hashset_clear(_x_x1419, _ctx); /*std/data/hashset/hash-set<788>*/
  return kk_std_data_hashset__hash_set_box(_x_x1418, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10241_fun1421__t {
  struct kk_function_s _base;
  kk_ref_t hs_2;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10241_fun1421(kk_function_t _fself, kk_box_t _b_x432, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10241_fun1421(kk_ref_t hs_2, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10241_fun1421__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10241_fun1421__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10241_fun1421, kk_context());
  _self->hs_2 = hs_2;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10241_fun1421(kk_function_t _fself, kk_box_t _b_x432, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10241_fun1421__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10241_fun1421__t*, _fself, _ctx);
  kk_ref_t hs_2 = _self->hs_2; /* local-var<3698,std/data/hashset/hash-set<int>> */
  kk_drop_match(_self, {kk_ref_dup(hs_2, _ctx);}, {}, _ctx)
  kk_unit_t wild___4_434 = kk_Unit;
  kk_unit_unbox(_b_x432);
  kk_integer_t _x_x1422 = kk_std_data_hashset__mlift_test_hash_set_10240(hs_2, wild___4_434, _ctx); /*int*/
  return kk_integer_box(_x_x1422, _ctx);
}

kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10241(kk_ref_t hs_2, kk_std_data_hashset__hash_set _y_x10120, kk_context_t* _ctx) { /* forall<h> (hs@2 : local-var<h,hash-set<int>>, hash-set<int>) -> <local<h>,exn,std/test/test/test,console/console,div,exn,std/test/test/test-scope> int */ 
  kk_std_data_hashset__hash_set _b_x426_428;
  kk_box_t _x_x1416 = kk_std_core_hnd__open_none1(kk_std_data_hashset__new_mlift_test_hash_set_10241_fun1417(_ctx), kk_std_data_hashset__hash_set_box(_y_x10120, _ctx), _ctx); /*1001*/
  _b_x426_428 = kk_std_data_hashset__hash_set_unbox(_x_x1416, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/
  kk_unit_t x_10282 = kk_Unit;
  kk_ref_set_borrow(hs_2,(kk_std_data_hashset__hash_set_box(_b_x426_428, _ctx)),kk_context());
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1420 = kk_std_core_hnd_yield_extend(kk_std_data_hashset__new_mlift_test_hash_set_10241_fun1421(hs_2, _ctx), _ctx); /*5699*/
    return kk_integer_unbox(_x_x1420, _ctx);
  }
  {
    return kk_std_data_hashset__mlift_test_hash_set_10240(hs_2, x_10282, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10242_fun1424__t {
  struct kk_function_s _base;
  kk_std_data_hashset__hash_set _y_x10117;
  kk_integer_t i_0;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10242_fun1424(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10242_fun1424(kk_std_data_hashset__hash_set _y_x10117, kk_integer_t i_0, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10242_fun1424__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10242_fun1424__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10242_fun1424, kk_context());
  _self->_y_x10117 = _y_x10117;
  _self->i_0 = i_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10242_fun1427__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10242_fun1427(kk_function_t _fself, kk_integer_t _x1_x1425, int64_t _x2_x1426, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10242_fun1427(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10242_fun1427, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10242_fun1427(kk_function_t _fself, kk_integer_t _x1_x1425, int64_t _x2_x1426, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hash_int_fs_hash(_x1_x1425, _x2_x1426, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10242_fun1428__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashset__mlift_test_hash_set_10242_fun1428(kk_function_t _fself, kk_integer_t x, kk_integer_t y, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10242_fun1428(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10242_fun1428, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashset__mlift_test_hash_set_10242_fun1428(kk_function_t _fself, kk_integer_t x, kk_integer_t y, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _brw_x968 = kk_integer_eq_borrow(x,y,kk_context()); /*bool*/;
  kk_integer_drop(x, _ctx);
  kk_integer_drop(y, _ctx);
  return _brw_x968;
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10242_fun1431__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashset__mlift_test_hash_set_10242_fun1431(kk_function_t _fself, kk_integer_t _x1_x1429, kk_integer_t _x2_x1430, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10242_fun1431(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10242_fun1431, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashset__mlift_test_hash_set_10242_fun1431(kk_function_t _fself, kk_integer_t _x1_x1429, kk_integer_t _x2_x1430, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashset_when_resize(_x1_x1429, _x2_x1430, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10242_fun1434__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10242_fun1434(kk_function_t _fself, kk_integer_t _x1_x1432, kk_integer_t _x2_x1433, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10242_fun1434(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10242_fun1434, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10242_fun1434(kk_function_t _fself, kk_integer_t _x1_x1432, kk_integer_t _x2_x1433, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashset_resizer(_x1_x1432, _x2_x1433, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10242_fun1436__t {
  struct kk_function_s _base;
  kk_function_t _b_x437_453;
};
static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10242_fun1436(kk_function_t _fself, kk_box_t _b_x441, int64_t _b_x442, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10242_fun1436(kk_function_t _b_x437_453, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10242_fun1436__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10242_fun1436__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10242_fun1436, kk_context());
  _self->_b_x437_453 = _b_x437_453;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10242_fun1436(kk_function_t _fself, kk_box_t _b_x441, int64_t _b_x442, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10242_fun1436__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10242_fun1436__t*, _fself, _ctx);
  kk_function_t _b_x437_453 = _self->_b_x437_453; /* (i : int, seed : int64) -> int */
  kk_drop_match(_self, {kk_function_dup(_b_x437_453, _ctx);}, {}, _ctx)
  kk_integer_t _x_x1437 = kk_integer_unbox(_b_x441, _ctx); /*int*/
  return kk_function_call(kk_integer_t, (kk_function_t, kk_integer_t, int64_t, kk_context_t*), _b_x437_453, (_b_x437_453, _x_x1437, _b_x442, _ctx), _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10242_fun1438__t {
  struct kk_function_s _base;
  kk_function_t _b_x438_454;
};
static bool kk_std_data_hashset__mlift_test_hash_set_10242_fun1438(kk_function_t _fself, kk_box_t _b_x443, kk_box_t _b_x444, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10242_fun1438(kk_function_t _b_x438_454, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10242_fun1438__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10242_fun1438__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10242_fun1438, kk_context());
  _self->_b_x438_454 = _b_x438_454;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_std_data_hashset__mlift_test_hash_set_10242_fun1438(kk_function_t _fself, kk_box_t _b_x443, kk_box_t _b_x444, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10242_fun1438__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10242_fun1438__t*, _fself, _ctx);
  kk_function_t _b_x438_454 = _self->_b_x438_454; /* (x : int, y : int) -> bool */
  kk_drop_match(_self, {kk_function_dup(_b_x438_454, _ctx);}, {}, _ctx)
  kk_integer_t _x_x1439 = kk_integer_unbox(_b_x443, _ctx); /*int*/
  kk_integer_t _x_x1440 = kk_integer_unbox(_b_x444, _ctx); /*int*/
  return kk_function_call(bool, (kk_function_t, kk_integer_t, kk_integer_t, kk_context_t*), _b_x438_454, (_b_x438_454, _x_x1439, _x_x1440, _ctx), _ctx);
}
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10242_fun1424(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10242_fun1424__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10242_fun1424__t*, _fself, _ctx);
  kk_std_data_hashset__hash_set _y_x10117 = _self->_y_x10117; /* std/data/hashset/hash-set<int> */
  kk_integer_t i_0 = _self->i_0; /* int */
  kk_drop_match(_self, {kk_std_data_hashset__hash_set_dup(_y_x10117, _ctx);kk_integer_dup(i_0, _ctx);}, {}, _ctx)
  kk_std_data_hashset__hash_set _b_x435_451 = _y_x10117; /*std/data/hashset/hash-set<int>*/;
  kk_integer_t _b_x436_452 = i_0; /*int*/;
  kk_function_t _b_x437_453 = kk_std_data_hashset__new_mlift_test_hash_set_10242_fun1427(_ctx); /*(i : int, seed : int64) -> int*/;
  kk_function_t _b_x438_454 = kk_std_data_hashset__new_mlift_test_hash_set_10242_fun1428(_ctx); /*(x : int, y : int) -> bool*/;
  kk_function_t _b_x439_455 = kk_std_data_hashset__new_mlift_test_hash_set_10242_fun1431(_ctx); /*(table-size : int, item-count : int) -> bool*/;
  kk_function_t _b_x440_456 = kk_std_data_hashset__new_mlift_test_hash_set_10242_fun1434(_ctx); /*(table-size : int, item-count : int) -> int*/;
  kk_std_data_hashset__hash_set _x_x1435 = kk_std_data_hashset_insert(_b_x435_451, kk_integer_box(_b_x436_452, _ctx), kk_std_data_hashset__new_mlift_test_hash_set_10242_fun1436(_b_x437_453, _ctx), kk_std_data_hashset__new_mlift_test_hash_set_10242_fun1438(_b_x438_454, _ctx), _b_x439_455, _b_x440_456, _ctx); /*std/data/hashset/hash-set<1687>*/
  return kk_std_data_hashset__hash_set_box(_x_x1435, _ctx);
}

kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10242(kk_ref_t hs_2, kk_integer_t i_0, kk_std_data_hashset__hash_set _y_x10117, kk_context_t* _ctx) { /* forall<h> (hs@2 : local-var<h,hash-set<int>>, i@0 : int, hash-set<int>) -> <local<h>,std/test/test/test,console/console,div,exn,std/test/test/test-scope> () */ 
  kk_std_data_hashset__hash_set _b_x447_449;
  kk_box_t _x_x1423 = kk_std_core_hnd__open_none0(kk_std_data_hashset__new_mlift_test_hash_set_10242_fun1424(_y_x10117, i_0, _ctx), _ctx); /*1000*/
  _b_x447_449 = kk_std_data_hashset__hash_set_unbox(_x_x1423, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/
  kk_unit_t _brw_x967 = kk_Unit;
  kk_ref_set_borrow(hs_2,(kk_std_data_hashset__hash_set_box(_b_x447_449, _ctx)),kk_context());
  kk_ref_drop(hs_2, _ctx);
  _brw_x967; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10243_fun1441__t {
  struct kk_function_s _base;
  kk_ref_t hs_2;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10243_fun1441(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10243_fun1441(kk_ref_t hs_2, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10243_fun1441__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10243_fun1441__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10243_fun1441, kk_context());
  _self->hs_2 = hs_2;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10243_fun1446__t {
  struct kk_function_s _base;
  kk_ref_t hs_2;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10243_fun1446(kk_function_t _fself, kk_box_t _b_x460, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10243_fun1446(kk_ref_t hs_2, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10243_fun1446__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10243_fun1446__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10243_fun1446, kk_context());
  _self->hs_2 = hs_2;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10243_fun1446(kk_function_t _fself, kk_box_t _b_x460, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10243_fun1446__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10243_fun1446__t*, _fself, _ctx);
  kk_ref_t hs_2 = _self->hs_2; /* local-var<3698,std/data/hashset/hash-set<int>> */
  kk_drop_match(_self, {kk_ref_dup(hs_2, _ctx);}, {}, _ctx)
  kk_std_data_hashset__hash_set _y_x10120_481 = kk_std_data_hashset__hash_set_unbox(_b_x460, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/;
  kk_integer_t _x_x1447 = kk_std_data_hashset__mlift_test_hash_set_10241(hs_2, _y_x10120_481, _ctx); /*int*/
  return kk_integer_box(_x_x1447, _ctx);
}
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10243_fun1441(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10243_fun1441__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10243_fun1441__t*, _fself, _ctx);
  kk_ref_t hs_2 = _self->hs_2; /* local-var<3698,std/data/hashset/hash-set<int>> */
  kk_drop_match(_self, {kk_ref_dup(hs_2, _ctx);}, {}, _ctx)
  kk_std_data_hashset__hash_set x_10284;
  kk_box_t _x_x1442;
  kk_ref_t _x_x1443 = kk_ref_dup(hs_2, _ctx); /*local-var<3698,std/data/hashset/hash-set<int>>*/
  _x_x1442 = kk_ref_get(_x_x1443,kk_context()); /*5666*/
  x_10284 = kk_std_data_hashset__hash_set_unbox(_x_x1442, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/
  kk_integer_t _x_x1444;
  if (kk_yielding(kk_context())) {
    kk_datatype_ptr_dropn(x_10284, (KK_I32(2)), _ctx);
    kk_box_t _x_x1445 = kk_std_core_hnd_yield_extend(kk_std_data_hashset__new_mlift_test_hash_set_10243_fun1446(hs_2, _ctx), _ctx); /*5699*/
    _x_x1444 = kk_integer_unbox(_x_x1445, _ctx); /*int*/
  }
  else {
    _x_x1444 = kk_std_data_hashset__mlift_test_hash_set_10241(hs_2, x_10284, _ctx); /*int*/
  }
  return kk_integer_box(_x_x1444, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10243_fun1448__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashset__mlift_test_hash_set_10243_fun1448(kk_function_t _fself, kk_box_t _b_x469, kk_box_t _b_x470, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10243_fun1448(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10243_fun1448, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashset__mlift_test_hash_set_10243_fun1448(kk_function_t _fself, kk_box_t _b_x469, kk_box_t _b_x470, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _brw_x964 = kk_integer_unbox(_b_x469, _ctx); /*int*/;
  kk_integer_t _brw_x963 = kk_integer_unbox(_b_x470, _ctx); /*int*/;
  bool _brw_x965 = kk_integer_eq_borrow(_brw_x964,_brw_x963,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x964, _ctx);
  kk_integer_drop(_brw_x963, _ctx);
  return _brw_x965;
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10243_fun1449__t {
  struct kk_function_s _base;
};
static kk_string_t kk_std_data_hashset__mlift_test_hash_set_10243_fun1449(kk_function_t _fself, kk_box_t _b_x471, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10243_fun1449(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10243_fun1449, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_std_data_hashset__mlift_test_hash_set_10243_fun1449(kk_function_t _fself, kk_box_t _b_x471, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x1450 = kk_integer_unbox(_b_x471, _ctx); /*int*/
  return kk_std_core_int_show(_x_x1450, _ctx);
}

kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10243(kk_ref_t hs_2, kk_unit_t wild___3, kk_context_t* _ctx) { /* forall<h> (hs@2 : local-var<h,hash-set<int>>, wild_@3 : ()) -> <local<h>,std/test/test/test,console/console,div,exn,std/test/test/test-scope> () */ 
  kk_string_t _x_x1451;
  kk_define_string_literal(, _s_x1452, 3, "226", _ctx)
  _x_x1451 = kk_string_dup(_s_x1452, _ctx); /*string*/
  kk_string_t _x_x1453;
  kk_define_string_literal(, _s_x1454, 16, "std/data/hashset", _ctx)
  _x_x1453 = kk_string_dup(_s_x1454, _ctx); /*string*/
  kk_std_test_test_expect(kk_integer_box(kk_integer_from_small(0), _ctx), kk_std_data_hashset__new_mlift_test_hash_set_10243_fun1441(hs_2, _ctx), kk_std_core_types__new_None(_ctx), kk_std_core_types__new_None(_ctx), kk_std_data_hashset__new_mlift_test_hash_set_10243_fun1448(_ctx), kk_std_data_hashset__new_mlift_test_hash_set_10243_fun1449(_ctx), _x_x1451, _x_x1453, _ctx); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10244_fun1457__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10244_fun1457(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10244_fun1457(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10244_fun1457, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10244_fun1458__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10244_fun1458(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10244_fun1458(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10244_fun1458, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10244_fun1460__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10244_fun1460(kk_function_t _fself, kk_box_t _b_x489, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10244_fun1460(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10244_fun1460, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10244_fun1460(kk_function_t _fself, kk_box_t _b_x489, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t n_3_10094;
  bool _match_x958;
  kk_integer_t _brw_x961;
  kk_std_core_types__optional _match_x960;
  kk_box_t _x_x1461 = kk_box_dup(_b_x489, _ctx); /*1000*/
  _match_x960 = kk_std_core_types__optional_unbox(_x_x1461, KK_OWNED, _ctx); /*? int*/
  if (kk_std_core_types__is_Optional(_match_x960, _ctx)) {
    kk_box_t _box_x482 = _match_x960._cons._Optional.value;
    kk_integer_t _uniq_capacity_275_3 = kk_integer_unbox(_box_x482, _ctx);
    kk_integer_dup(_uniq_capacity_275_3, _ctx);
    kk_std_core_types__optional_drop(_match_x960, _ctx);
    _brw_x961 = _uniq_capacity_275_3; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x960, _ctx);
    _brw_x961 = kk_integer_from_small(1); /*int*/
  }
  bool _brw_x962 = kk_integer_gt_borrow(_brw_x961,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x961, _ctx);
  _match_x958 = _brw_x962; /*bool*/
  if (_match_x958) {
    kk_std_core_types__optional _match_x959 = kk_std_core_types__optional_unbox(_b_x489, KK_OWNED, _ctx); /*? int*/;
    if (kk_std_core_types__is_Optional(_match_x959, _ctx)) {
      kk_box_t _box_x483 = _match_x959._cons._Optional.value;
      kk_integer_t _uniq_capacity_275_3_0 = kk_integer_unbox(_box_x483, _ctx);
      kk_integer_dup(_uniq_capacity_275_3_0, _ctx);
      kk_std_core_types__optional_drop(_match_x959, _ctx);
      n_3_10094 = _uniq_capacity_275_3_0; /*int*/
    }
    else {
      kk_std_core_types__optional_drop(_match_x959, _ctx);
      n_3_10094 = kk_integer_from_small(1); /*int*/
    }
  }
  else {
    kk_box_drop(_b_x489, _ctx);
    n_3_10094 = kk_integer_from_small(1); /*int*/
  }
  kk_ssize_t _b_x484_492 = kk_std_core_int_ssize__t(n_3_10094, _ctx); /*ssize_t*/;
  kk_std_data_hashset__hash_set _x_x1462;
  kk_vector_t _x_x1463 = kk_std_core_vector_vector_alloc(_b_x484_492, kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx), _ctx); /*vector<3001>*/
  _x_x1462 = kk_std_data_hashset__new_Hash_set(kk_reuse_null, 0, _x_x1463, kk_integer_from_small(0), kk_std_data_hash_thread_fs_seed, _ctx); /*std/data/hashset/hash-set<5>*/
  return kk_std_data_hashset__hash_set_box(_x_x1462, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10244_fun1467__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10244_fun1467(kk_function_t _fself, kk_integer_t i_1, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10244_fun1467(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10244_fun1467__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10244_fun1467__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10244_fun1467, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10244_fun1470__t {
  struct kk_function_s _base;
  kk_integer_t i_1;
  kk_ref_t loc;
};
static kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10244_fun1470(kk_function_t _fself, kk_std_data_hashset__hash_set _y_x10128, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10244_fun1470(kk_integer_t i_1, kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10244_fun1470__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10244_fun1470__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10244_fun1470, kk_context());
  _self->i_1 = i_1;
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10244_fun1472__t {
  struct kk_function_s _base;
  kk_std_data_hashset__hash_set _y_x10128;
  kk_integer_t i_1;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10244_fun1472(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10244_fun1472(kk_std_data_hashset__hash_set _y_x10128, kk_integer_t i_1, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10244_fun1472__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10244_fun1472__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10244_fun1472, kk_context());
  _self->_y_x10128 = _y_x10128;
  _self->i_1 = i_1;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10244_fun1474__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10244_fun1474(kk_function_t _fself, kk_box_t _b_x506, int64_t _b_x507, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10244_fun1474(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10244_fun1474, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10244_fun1474(kk_function_t _fself, kk_box_t _b_x506, int64_t _b_x507, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x1475 = kk_integer_unbox(_b_x506, _ctx); /*int*/
  return kk_std_data_hash_int_fs_hash(_x_x1475, _b_x507, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10244_fun1476__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashset__mlift_test_hash_set_10244_fun1476(kk_function_t _fself, kk_box_t _b_x508, kk_box_t _b_x509, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10244_fun1476(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10244_fun1476, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashset__mlift_test_hash_set_10244_fun1476(kk_function_t _fself, kk_box_t _b_x508, kk_box_t _b_x509, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _brw_x956 = kk_integer_unbox(_b_x508, _ctx); /*int*/;
  kk_integer_t _brw_x955 = kk_integer_unbox(_b_x509, _ctx); /*int*/;
  bool _brw_x957 = kk_integer_eq_borrow(_brw_x956,_brw_x955,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x956, _ctx);
  kk_integer_drop(_brw_x955, _ctx);
  return _brw_x957;
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10244_fun1479__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashset__mlift_test_hash_set_10244_fun1479(kk_function_t _fself, kk_integer_t _x1_x1477, kk_integer_t _x2_x1478, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10244_fun1479(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10244_fun1479, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashset__mlift_test_hash_set_10244_fun1479(kk_function_t _fself, kk_integer_t _x1_x1477, kk_integer_t _x2_x1478, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashset_when_resize(_x1_x1477, _x2_x1478, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10244_fun1482__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10244_fun1482(kk_function_t _fself, kk_integer_t _x1_x1480, kk_integer_t _x2_x1481, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10244_fun1482(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10244_fun1482, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10244_fun1482(kk_function_t _fself, kk_integer_t _x1_x1480, kk_integer_t _x2_x1481, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashset_resizer(_x1_x1480, _x2_x1481, _ctx);
}
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10244_fun1472(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10244_fun1472__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10244_fun1472__t*, _fself, _ctx);
  kk_std_data_hashset__hash_set _y_x10128 = _self->_y_x10128; /* std/data/hashset/hash-set<int> */
  kk_integer_t i_1 = _self->i_1; /* int */
  kk_drop_match(_self, {kk_std_data_hashset__hash_set_dup(_y_x10128, _ctx);kk_integer_dup(i_1, _ctx);}, {}, _ctx)
  kk_std_data_hashset__hash_set _x_x1473 = kk_std_data_hashset_insert(_y_x10128, kk_integer_box(i_1, _ctx), kk_std_data_hashset__new_mlift_test_hash_set_10244_fun1474(_ctx), kk_std_data_hashset__new_mlift_test_hash_set_10244_fun1476(_ctx), kk_std_data_hashset__new_mlift_test_hash_set_10244_fun1479(_ctx), kk_std_data_hashset__new_mlift_test_hash_set_10244_fun1482(_ctx), _ctx); /*std/data/hashset/hash-set<1687>*/
  return kk_std_data_hashset__hash_set_box(_x_x1473, _ctx);
}
static kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10244_fun1470(kk_function_t _fself, kk_std_data_hashset__hash_set _y_x10128, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10244_fun1470__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10244_fun1470__t*, _fself, _ctx);
  kk_integer_t i_1 = _self->i_1; /* int */
  kk_ref_t loc = _self->loc; /* local-var<4108,std/data/hashset/hash-set<int>> */
  kk_drop_match(_self, {kk_integer_dup(i_1, _ctx);kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_std_data_hashset__hash_set _b_x512_514;
  kk_box_t _x_x1471 = kk_std_core_hnd__open_none0(kk_std_data_hashset__new_mlift_test_hash_set_10244_fun1472(_y_x10128, i_1, _ctx), _ctx); /*1000*/
  _b_x512_514 = kk_std_data_hashset__hash_set_unbox(_x_x1471, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/
  kk_unit_t _brw_x954 = kk_Unit;
  kk_ref_set_borrow(loc,(kk_std_data_hashset__hash_set_box(_b_x512_514, _ctx)),kk_context());
  kk_ref_drop(loc, _ctx);
  _brw_x954; return kk_Unit;
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10244_fun1484__t {
  struct kk_function_s _base;
  kk_function_t next_0_10291;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10244_fun1484(kk_function_t _fself, kk_box_t _b_x523, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10244_fun1484(kk_function_t next_0_10291, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10244_fun1484__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10244_fun1484__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10244_fun1484, kk_context());
  _self->next_0_10291 = next_0_10291;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10244_fun1484(kk_function_t _fself, kk_box_t _b_x523, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10244_fun1484__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10244_fun1484__t*, _fself, _ctx);
  kk_function_t next_0_10291 = _self->next_0_10291; /* (std/data/hashset/hash-set<int>) -> <local<4108>,std/test/test/test,console/console,div,exn,std/test/test/test-scope> () */
  kk_drop_match(_self, {kk_function_dup(next_0_10291, _ctx);}, {}, _ctx)
  kk_unit_t _x_x1485 = kk_Unit;
  kk_std_data_hashset__hash_set _x_x1486 = kk_std_data_hashset__hash_set_unbox(_b_x523, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_data_hashset__hash_set, kk_context_t*), next_0_10291, (next_0_10291, _x_x1486, _ctx), _ctx);
  return kk_unit_box(_x_x1485);
}
static kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10244_fun1467(kk_function_t _fself, kk_integer_t i_1, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10244_fun1467__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10244_fun1467__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<4108,std/data/hashset/hash-set<int>> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_std_data_hashset__hash_set x_0_10290;
  kk_box_t _x_x1468;
  kk_ref_t _x_x1469 = kk_ref_dup(loc, _ctx); /*local-var<4108,std/data/hashset/hash-set<int>>*/
  _x_x1468 = kk_ref_get(_x_x1469,kk_context()); /*5859*/
  x_0_10290 = kk_std_data_hashset__hash_set_unbox(_x_x1468, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/
  kk_function_t next_0_10291 = kk_std_data_hashset__new_mlift_test_hash_set_10244_fun1470(i_1, loc, _ctx); /*(std/data/hashset/hash-set<int>) -> <local<4108>,std/test/test/test,console/console,div,exn,std/test/test/test-scope> ()*/;
  if (kk_yielding(kk_context())) {
    kk_datatype_ptr_dropn(x_0_10290, (KK_I32(2)), _ctx);
    kk_box_t _x_x1483 = kk_std_core_hnd_yield_extend(kk_std_data_hashset__new_mlift_test_hash_set_10244_fun1484(next_0_10291, _ctx), _ctx); /*6109*/
    kk_unit_unbox(_x_x1483); return kk_Unit;
  }
  {
    kk_function_call(kk_unit_t, (kk_function_t, kk_std_data_hashset__hash_set, kk_context_t*), next_0_10291, (next_0_10291, x_0_10290, _ctx), _ctx); return kk_Unit;
  }
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10244_fun1489__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10244_fun1489(kk_function_t _fself, kk_box_t _b_x526, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10244_fun1489(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10244_fun1489__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10244_fun1489__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10244_fun1489, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10244_fun1489(kk_function_t _fself, kk_box_t _b_x526, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10244_fun1489__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10244_fun1489__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<4108,std/data/hashset/hash-set<int>> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_unit_t _x_x1490 = kk_Unit;
  kk_unit_t _x_x1491 = kk_Unit;
  kk_unit_unbox(_b_x526);
  kk_std_data_hashset__mlift_test_hash_set_10238(loc, _x_x1491, _ctx);
  return kk_unit_box(_x_x1490);
}
static kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10244_fun1458(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_data_hashset__hash_set init_10286;
  kk_box_t _x_x1459;
  kk_box_t _x_x1464;
  kk_std_core_types__optional _x_x1465 = kk_std_core_types__new_Optional(kk_integer_box(kk_integer_from_small(1), _ctx), _ctx); /*? 1003*/
  _x_x1464 = kk_std_core_types__optional_box(_x_x1465, _ctx); /*1000*/
  _x_x1459 = kk_std_core_hnd__open_none1(kk_std_data_hashset__new_mlift_test_hash_set_10244_fun1460(_ctx), _x_x1464, _ctx); /*1001*/
  init_10286 = kk_std_data_hashset__hash_set_unbox(_x_x1459, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/
  kk_ref_t loc = kk_ref_alloc((kk_std_data_hashset__hash_set_box(init_10286, _ctx)),kk_context()); /*local-var<4108,std/data/hashset/hash-set<int>>*/;
  kk_unit_t x_10288 = kk_Unit;
  kk_function_t _x_x1466;
  kk_ref_dup(loc, _ctx);
  _x_x1466 = kk_std_data_hashset__new_mlift_test_hash_set_10244_fun1467(loc, _ctx); /*(i@1 : int) -> <local<4108>,std/test/test/test,console/console,div,exn,std/test/test/test-scope> ()*/
  kk_std_core_for(kk_integer_from_small(50), _x_x1466, _ctx);
  kk_unit_t res = kk_Unit;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1487;
    kk_function_t _x_x1488;
    kk_ref_dup(loc, _ctx);
    _x_x1488 = kk_std_data_hashset__new_mlift_test_hash_set_10244_fun1489(loc, _ctx); /*(6108) -> 6110 6109*/
    _x_x1487 = kk_std_core_hnd_yield_extend(_x_x1488, _ctx); /*6109*/
    kk_unit_unbox(_x_x1487);
  }
  else {
    kk_ref_t _x_x1492 = kk_ref_dup(loc, _ctx); /*local-var<4108,std/data/hashset/hash-set<int>>*/
    kk_std_data_hashset__mlift_test_hash_set_10238(_x_x1492, x_10288, _ctx);
  }
  kk_box_t _x_x1493 = kk_std_core_hnd_prompt_local_var(loc, kk_unit_box(res), _ctx); /*6109*/
  kk_unit_unbox(_x_x1493); return kk_Unit;
}
static kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10244_fun1457(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x1494;
  kk_define_string_literal(, _s_x1495, 16, "std/data/hashset", _ctx)
  _x_x1494 = kk_string_dup(_s_x1495, _ctx); /*string*/
  kk_string_t _x_x1496;
  kk_define_string_literal(, _s_x1497, 3, "229", _ctx)
  _x_x1496 = kk_string_dup(_s_x1497, _ctx); /*string*/
  kk_std_test_test_test__(kk_std_data_hashset__new_mlift_test_hash_set_10244_fun1458(_ctx), _x_x1494, _x_x1496, _ctx); return kk_Unit;
}

kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10244(kk_unit_t wild___5, kk_context_t* _ctx) { /* (wild_@5 : ()) -> <std/test/test/test-scope,console/console,div,exn> () */ 
  kk_string_t _x_x1455;
  kk_define_string_literal(, _s_x1456, 15, "clear then fill", _ctx)
  _x_x1455 = kk_string_dup(_s_x1456, _ctx); /*string*/
  kk_string_t _x_x1498;
  kk_define_string_literal(, _s_x1499, 16, "std/data/hashset", _ctx)
  _x_x1498 = kk_string_dup(_s_x1499, _ctx); /*string*/
  kk_string_t _x_x1500;
  kk_define_string_literal(, _s_x1501, 3, "229", _ctx)
  _x_x1500 = kk_string_dup(_s_x1501, _ctx); /*string*/
  kk_std_test_test_istest_fs_scope(_x_x1455, true, kk_std_data_hashset__new_mlift_test_hash_set_10244_fun1457(_ctx), _x_x1498, _x_x1500, _ctx); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10245_fun1503__t {
  struct kk_function_s _base;
  kk_std_data_hashset__hash_set _y_x10109;
  kk_integer_t i;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10245_fun1503(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10245_fun1503(kk_std_data_hashset__hash_set _y_x10109, kk_integer_t i, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10245_fun1503__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10245_fun1503__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10245_fun1503, kk_context());
  _self->_y_x10109 = _y_x10109;
  _self->i = i;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10245_fun1506__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10245_fun1506(kk_function_t _fself, kk_integer_t _x1_x1504, int64_t _x2_x1505, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10245_fun1506(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10245_fun1506, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10245_fun1506(kk_function_t _fself, kk_integer_t _x1_x1504, int64_t _x2_x1505, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hash_int_fs_hash(_x1_x1504, _x2_x1505, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10245_fun1507__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashset__mlift_test_hash_set_10245_fun1507(kk_function_t _fself, kk_integer_t x, kk_integer_t y, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10245_fun1507(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10245_fun1507, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashset__mlift_test_hash_set_10245_fun1507(kk_function_t _fself, kk_integer_t x, kk_integer_t y, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _brw_x951 = kk_integer_eq_borrow(x,y,kk_context()); /*bool*/;
  kk_integer_drop(x, _ctx);
  kk_integer_drop(y, _ctx);
  return _brw_x951;
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10245_fun1510__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashset__mlift_test_hash_set_10245_fun1510(kk_function_t _fself, kk_integer_t _x1_x1508, kk_integer_t _x2_x1509, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10245_fun1510(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10245_fun1510, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashset__mlift_test_hash_set_10245_fun1510(kk_function_t _fself, kk_integer_t _x1_x1508, kk_integer_t _x2_x1509, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashset_when_resize(_x1_x1508, _x2_x1509, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10245_fun1513__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10245_fun1513(kk_function_t _fself, kk_integer_t _x1_x1511, kk_integer_t _x2_x1512, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10245_fun1513(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10245_fun1513, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10245_fun1513(kk_function_t _fself, kk_integer_t _x1_x1511, kk_integer_t _x2_x1512, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashset_resizer(_x1_x1511, _x2_x1512, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10245_fun1515__t {
  struct kk_function_s _base;
  kk_function_t _b_x535_551;
};
static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10245_fun1515(kk_function_t _fself, kk_box_t _b_x539, int64_t _b_x540, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10245_fun1515(kk_function_t _b_x535_551, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10245_fun1515__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10245_fun1515__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10245_fun1515, kk_context());
  _self->_b_x535_551 = _b_x535_551;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10245_fun1515(kk_function_t _fself, kk_box_t _b_x539, int64_t _b_x540, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10245_fun1515__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10245_fun1515__t*, _fself, _ctx);
  kk_function_t _b_x535_551 = _self->_b_x535_551; /* (i : int, seed : int64) -> int */
  kk_drop_match(_self, {kk_function_dup(_b_x535_551, _ctx);}, {}, _ctx)
  kk_integer_t _x_x1516 = kk_integer_unbox(_b_x539, _ctx); /*int*/
  return kk_function_call(kk_integer_t, (kk_function_t, kk_integer_t, int64_t, kk_context_t*), _b_x535_551, (_b_x535_551, _x_x1516, _b_x540, _ctx), _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10245_fun1517__t {
  struct kk_function_s _base;
  kk_function_t _b_x536_552;
};
static bool kk_std_data_hashset__mlift_test_hash_set_10245_fun1517(kk_function_t _fself, kk_box_t _b_x541, kk_box_t _b_x542, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10245_fun1517(kk_function_t _b_x536_552, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10245_fun1517__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10245_fun1517__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10245_fun1517, kk_context());
  _self->_b_x536_552 = _b_x536_552;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_std_data_hashset__mlift_test_hash_set_10245_fun1517(kk_function_t _fself, kk_box_t _b_x541, kk_box_t _b_x542, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10245_fun1517__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10245_fun1517__t*, _fself, _ctx);
  kk_function_t _b_x536_552 = _self->_b_x536_552; /* (x : int, y : int) -> bool */
  kk_drop_match(_self, {kk_function_dup(_b_x536_552, _ctx);}, {}, _ctx)
  kk_integer_t _x_x1518 = kk_integer_unbox(_b_x541, _ctx); /*int*/
  kk_integer_t _x_x1519 = kk_integer_unbox(_b_x542, _ctx); /*int*/
  return kk_function_call(bool, (kk_function_t, kk_integer_t, kk_integer_t, kk_context_t*), _b_x536_552, (_b_x536_552, _x_x1518, _x_x1519, _ctx), _ctx);
}
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10245_fun1503(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10245_fun1503__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10245_fun1503__t*, _fself, _ctx);
  kk_std_data_hashset__hash_set _y_x10109 = _self->_y_x10109; /* std/data/hashset/hash-set<int> */
  kk_integer_t i = _self->i; /* int */
  kk_drop_match(_self, {kk_std_data_hashset__hash_set_dup(_y_x10109, _ctx);kk_integer_dup(i, _ctx);}, {}, _ctx)
  kk_std_data_hashset__hash_set _b_x533_549 = _y_x10109; /*std/data/hashset/hash-set<int>*/;
  kk_integer_t _b_x534_550 = i; /*int*/;
  kk_function_t _b_x535_551 = kk_std_data_hashset__new_mlift_test_hash_set_10245_fun1506(_ctx); /*(i : int, seed : int64) -> int*/;
  kk_function_t _b_x536_552 = kk_std_data_hashset__new_mlift_test_hash_set_10245_fun1507(_ctx); /*(x : int, y : int) -> bool*/;
  kk_function_t _b_x537_553 = kk_std_data_hashset__new_mlift_test_hash_set_10245_fun1510(_ctx); /*(table-size : int, item-count : int) -> bool*/;
  kk_function_t _b_x538_554 = kk_std_data_hashset__new_mlift_test_hash_set_10245_fun1513(_ctx); /*(table-size : int, item-count : int) -> int*/;
  kk_std_data_hashset__hash_set _x_x1514 = kk_std_data_hashset_insert(_b_x533_549, kk_integer_box(_b_x534_550, _ctx), kk_std_data_hashset__new_mlift_test_hash_set_10245_fun1515(_b_x535_551, _ctx), kk_std_data_hashset__new_mlift_test_hash_set_10245_fun1517(_b_x536_552, _ctx), _b_x537_553, _b_x538_554, _ctx); /*std/data/hashset/hash-set<1687>*/
  return kk_std_data_hashset__hash_set_box(_x_x1514, _ctx);
}

kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10245(kk_ref_t hs_1_0, kk_integer_t i, kk_std_data_hashset__hash_set _y_x10109, kk_context_t* _ctx) { /* forall<h> (hs@1@0 : local-var<h,hash-set<int>>, i : int, hash-set<int>) -> <local<h>,exn,std/test/test/test,console/console,div,exn,std/test/test/test-scope> () */ 
  kk_std_data_hashset__hash_set _b_x545_547;
  kk_box_t _x_x1502 = kk_std_core_hnd__open_none0(kk_std_data_hashset__new_mlift_test_hash_set_10245_fun1503(_y_x10109, i, _ctx), _ctx); /*1000*/
  _b_x545_547 = kk_std_data_hashset__hash_set_unbox(_x_x1502, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/
  kk_unit_t _brw_x950 = kk_Unit;
  kk_ref_set_borrow(hs_1_0,(kk_std_data_hashset__hash_set_box(_b_x545_547, _ctx)),kk_context());
  kk_ref_drop(hs_1_0, _ctx);
  _brw_x950; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10247_fun1522__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10247_fun1522(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10247_fun1522(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10247_fun1522, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10247_fun1523__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10247_fun1523(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10247_fun1523(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10247_fun1523, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10247_fun1525__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10247_fun1525(kk_function_t _fself, kk_box_t _b_x562, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10247_fun1525(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10247_fun1525, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10247_fun1525(kk_function_t _fself, kk_box_t _b_x562, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t n_2_10086;
  bool _match_x945;
  kk_integer_t _brw_x948;
  kk_std_core_types__optional _match_x947;
  kk_box_t _x_x1526 = kk_box_dup(_b_x562, _ctx); /*1000*/
  _match_x947 = kk_std_core_types__optional_unbox(_x_x1526, KK_OWNED, _ctx); /*? int*/
  if (kk_std_core_types__is_Optional(_match_x947, _ctx)) {
    kk_box_t _box_x555 = _match_x947._cons._Optional.value;
    kk_integer_t _uniq_capacity_275_2 = kk_integer_unbox(_box_x555, _ctx);
    kk_integer_dup(_uniq_capacity_275_2, _ctx);
    kk_std_core_types__optional_drop(_match_x947, _ctx);
    _brw_x948 = _uniq_capacity_275_2; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x947, _ctx);
    _brw_x948 = kk_integer_from_small(1); /*int*/
  }
  bool _brw_x949 = kk_integer_gt_borrow(_brw_x948,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x948, _ctx);
  _match_x945 = _brw_x949; /*bool*/
  if (_match_x945) {
    kk_std_core_types__optional _match_x946 = kk_std_core_types__optional_unbox(_b_x562, KK_OWNED, _ctx); /*? int*/;
    if (kk_std_core_types__is_Optional(_match_x946, _ctx)) {
      kk_box_t _box_x556 = _match_x946._cons._Optional.value;
      kk_integer_t _uniq_capacity_275_2_0 = kk_integer_unbox(_box_x556, _ctx);
      kk_integer_dup(_uniq_capacity_275_2_0, _ctx);
      kk_std_core_types__optional_drop(_match_x946, _ctx);
      n_2_10086 = _uniq_capacity_275_2_0; /*int*/
    }
    else {
      kk_std_core_types__optional_drop(_match_x946, _ctx);
      n_2_10086 = kk_integer_from_small(1); /*int*/
    }
  }
  else {
    kk_box_drop(_b_x562, _ctx);
    n_2_10086 = kk_integer_from_small(1); /*int*/
  }
  kk_ssize_t _b_x557_565 = kk_std_core_int_ssize__t(n_2_10086, _ctx); /*ssize_t*/;
  kk_std_data_hashset__hash_set _x_x1527;
  kk_vector_t _x_x1528 = kk_std_core_vector_vector_alloc(_b_x557_565, kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx), _ctx); /*vector<3001>*/
  _x_x1527 = kk_std_data_hashset__new_Hash_set(kk_reuse_null, 0, _x_x1528, kk_integer_from_small(0), kk_std_data_hash_thread_fs_seed, _ctx); /*std/data/hashset/hash-set<5>*/
  return kk_std_data_hashset__hash_set_box(_x_x1527, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10247_fun1532__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10247_fun1532(kk_function_t _fself, kk_integer_t i_0, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10247_fun1532(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10247_fun1532__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10247_fun1532__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10247_fun1532, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10247_fun1535__t {
  struct kk_function_s _base;
  kk_integer_t i_0;
  kk_ref_t loc;
};
static kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10247_fun1535(kk_function_t _fself, kk_std_data_hashset__hash_set _y_x10117, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10247_fun1535(kk_integer_t i_0, kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10247_fun1535__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10247_fun1535__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10247_fun1535, kk_context());
  _self->i_0 = i_0;
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10247_fun1537__t {
  struct kk_function_s _base;
  kk_std_data_hashset__hash_set _y_x10117;
  kk_integer_t i_0;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10247_fun1537(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10247_fun1537(kk_std_data_hashset__hash_set _y_x10117, kk_integer_t i_0, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10247_fun1537__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10247_fun1537__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10247_fun1537, kk_context());
  _self->_y_x10117 = _y_x10117;
  _self->i_0 = i_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10247_fun1539__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10247_fun1539(kk_function_t _fself, kk_box_t _b_x579, int64_t _b_x580, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10247_fun1539(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10247_fun1539, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10247_fun1539(kk_function_t _fself, kk_box_t _b_x579, int64_t _b_x580, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x1540 = kk_integer_unbox(_b_x579, _ctx); /*int*/
  return kk_std_data_hash_int_fs_hash(_x_x1540, _b_x580, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10247_fun1541__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashset__mlift_test_hash_set_10247_fun1541(kk_function_t _fself, kk_box_t _b_x581, kk_box_t _b_x582, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10247_fun1541(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10247_fun1541, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashset__mlift_test_hash_set_10247_fun1541(kk_function_t _fself, kk_box_t _b_x581, kk_box_t _b_x582, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _brw_x943 = kk_integer_unbox(_b_x581, _ctx); /*int*/;
  kk_integer_t _brw_x942 = kk_integer_unbox(_b_x582, _ctx); /*int*/;
  bool _brw_x944 = kk_integer_eq_borrow(_brw_x943,_brw_x942,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x943, _ctx);
  kk_integer_drop(_brw_x942, _ctx);
  return _brw_x944;
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10247_fun1544__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashset__mlift_test_hash_set_10247_fun1544(kk_function_t _fself, kk_integer_t _x1_x1542, kk_integer_t _x2_x1543, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10247_fun1544(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10247_fun1544, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashset__mlift_test_hash_set_10247_fun1544(kk_function_t _fself, kk_integer_t _x1_x1542, kk_integer_t _x2_x1543, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashset_when_resize(_x1_x1542, _x2_x1543, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10247_fun1547__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10247_fun1547(kk_function_t _fself, kk_integer_t _x1_x1545, kk_integer_t _x2_x1546, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10247_fun1547(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10247_fun1547, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10247_fun1547(kk_function_t _fself, kk_integer_t _x1_x1545, kk_integer_t _x2_x1546, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashset_resizer(_x1_x1545, _x2_x1546, _ctx);
}
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10247_fun1537(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10247_fun1537__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10247_fun1537__t*, _fself, _ctx);
  kk_std_data_hashset__hash_set _y_x10117 = _self->_y_x10117; /* std/data/hashset/hash-set<int> */
  kk_integer_t i_0 = _self->i_0; /* int */
  kk_drop_match(_self, {kk_std_data_hashset__hash_set_dup(_y_x10117, _ctx);kk_integer_dup(i_0, _ctx);}, {}, _ctx)
  kk_std_data_hashset__hash_set _x_x1538 = kk_std_data_hashset_insert(_y_x10117, kk_integer_box(i_0, _ctx), kk_std_data_hashset__new_mlift_test_hash_set_10247_fun1539(_ctx), kk_std_data_hashset__new_mlift_test_hash_set_10247_fun1541(_ctx), kk_std_data_hashset__new_mlift_test_hash_set_10247_fun1544(_ctx), kk_std_data_hashset__new_mlift_test_hash_set_10247_fun1547(_ctx), _ctx); /*std/data/hashset/hash-set<1687>*/
  return kk_std_data_hashset__hash_set_box(_x_x1538, _ctx);
}
static kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10247_fun1535(kk_function_t _fself, kk_std_data_hashset__hash_set _y_x10117, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10247_fun1535__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10247_fun1535__t*, _fself, _ctx);
  kk_integer_t i_0 = _self->i_0; /* int */
  kk_ref_t loc = _self->loc; /* local-var<3698,std/data/hashset/hash-set<int>> */
  kk_drop_match(_self, {kk_integer_dup(i_0, _ctx);kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_std_data_hashset__hash_set _b_x585_587;
  kk_box_t _x_x1536 = kk_std_core_hnd__open_none0(kk_std_data_hashset__new_mlift_test_hash_set_10247_fun1537(_y_x10117, i_0, _ctx), _ctx); /*1000*/
  _b_x585_587 = kk_std_data_hashset__hash_set_unbox(_x_x1536, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/
  kk_unit_t _brw_x941 = kk_Unit;
  kk_ref_set_borrow(loc,(kk_std_data_hashset__hash_set_box(_b_x585_587, _ctx)),kk_context());
  kk_ref_drop(loc, _ctx);
  _brw_x941; return kk_Unit;
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10247_fun1549__t {
  struct kk_function_s _base;
  kk_function_t next_1_10302;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10247_fun1549(kk_function_t _fself, kk_box_t _b_x596, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10247_fun1549(kk_function_t next_1_10302, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10247_fun1549__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10247_fun1549__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10247_fun1549, kk_context());
  _self->next_1_10302 = next_1_10302;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10247_fun1549(kk_function_t _fself, kk_box_t _b_x596, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10247_fun1549__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10247_fun1549__t*, _fself, _ctx);
  kk_function_t next_1_10302 = _self->next_1_10302; /* (std/data/hashset/hash-set<int>) -> <local<3698>,std/test/test/test,console/console,div,exn,std/test/test/test-scope> () */
  kk_drop_match(_self, {kk_function_dup(next_1_10302, _ctx);}, {}, _ctx)
  kk_unit_t _x_x1550 = kk_Unit;
  kk_std_data_hashset__hash_set _x_x1551 = kk_std_data_hashset__hash_set_unbox(_b_x596, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_data_hashset__hash_set, kk_context_t*), next_1_10302, (next_1_10302, _x_x1551, _ctx), _ctx);
  return kk_unit_box(_x_x1550);
}
static kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10247_fun1532(kk_function_t _fself, kk_integer_t i_0, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10247_fun1532__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10247_fun1532__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<3698,std/data/hashset/hash-set<int>> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_std_data_hashset__hash_set x_1_10301;
  kk_box_t _x_x1533;
  kk_ref_t _x_x1534 = kk_ref_dup(loc, _ctx); /*local-var<3698,std/data/hashset/hash-set<int>>*/
  _x_x1533 = kk_ref_get(_x_x1534,kk_context()); /*5526*/
  x_1_10301 = kk_std_data_hashset__hash_set_unbox(_x_x1533, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/
  kk_function_t next_1_10302 = kk_std_data_hashset__new_mlift_test_hash_set_10247_fun1535(i_0, loc, _ctx); /*(std/data/hashset/hash-set<int>) -> <local<3698>,std/test/test/test,console/console,div,exn,std/test/test/test-scope> ()*/;
  if (kk_yielding(kk_context())) {
    kk_datatype_ptr_dropn(x_1_10301, (KK_I32(2)), _ctx);
    kk_box_t _x_x1548 = kk_std_core_hnd_yield_extend(kk_std_data_hashset__new_mlift_test_hash_set_10247_fun1549(next_1_10302, _ctx), _ctx); /*5699*/
    kk_unit_unbox(_x_x1548); return kk_Unit;
  }
  {
    kk_function_call(kk_unit_t, (kk_function_t, kk_std_data_hashset__hash_set, kk_context_t*), next_1_10302, (next_1_10302, x_1_10301, _ctx), _ctx); return kk_Unit;
  }
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10247_fun1554__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10247_fun1554(kk_function_t _fself, kk_box_t _b_x599, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10247_fun1554(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10247_fun1554__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10247_fun1554__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10247_fun1554, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10247_fun1554(kk_function_t _fself, kk_box_t _b_x599, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10247_fun1554__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10247_fun1554__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<3698,std/data/hashset/hash-set<int>> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_unit_t _x_x1555 = kk_Unit;
  kk_unit_t _x_x1556 = kk_Unit;
  kk_unit_unbox(_b_x599);
  kk_std_data_hashset__mlift_test_hash_set_10243(loc, _x_x1556, _ctx);
  return kk_unit_box(_x_x1555);
}
static kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10247_fun1523(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_data_hashset__hash_set init_10297;
  kk_box_t _x_x1524;
  kk_box_t _x_x1529;
  kk_std_core_types__optional _x_x1530 = kk_std_core_types__new_Optional(kk_integer_box(kk_integer_from_small(1), _ctx), _ctx); /*? 1003*/
  _x_x1529 = kk_std_core_types__optional_box(_x_x1530, _ctx); /*1000*/
  _x_x1524 = kk_std_core_hnd__open_none1(kk_std_data_hashset__new_mlift_test_hash_set_10247_fun1525(_ctx), _x_x1529, _ctx); /*1001*/
  init_10297 = kk_std_data_hashset__hash_set_unbox(_x_x1524, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/
  kk_ref_t loc = kk_ref_alloc((kk_std_data_hashset__hash_set_box(init_10297, _ctx)),kk_context()); /*local-var<3698,std/data/hashset/hash-set<int>>*/;
  kk_unit_t x_0_10299 = kk_Unit;
  kk_function_t _x_x1531;
  kk_ref_dup(loc, _ctx);
  _x_x1531 = kk_std_data_hashset__new_mlift_test_hash_set_10247_fun1532(loc, _ctx); /*(i@0 : int) -> <local<3698>,std/test/test/test,console/console,div,exn,std/test/test/test-scope> ()*/
  kk_std_core_for(kk_integer_from_small(50), _x_x1531, _ctx);
  kk_unit_t res = kk_Unit;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1552;
    kk_function_t _x_x1553;
    kk_ref_dup(loc, _ctx);
    _x_x1553 = kk_std_data_hashset__new_mlift_test_hash_set_10247_fun1554(loc, _ctx); /*(5698) -> 5700 5699*/
    _x_x1552 = kk_std_core_hnd_yield_extend(_x_x1553, _ctx); /*5699*/
    kk_unit_unbox(_x_x1552);
  }
  else {
    kk_ref_t _x_x1557 = kk_ref_dup(loc, _ctx); /*local-var<3698,std/data/hashset/hash-set<int>>*/
    kk_std_data_hashset__mlift_test_hash_set_10243(_x_x1557, x_0_10299, _ctx);
  }
  kk_box_t _x_x1558 = kk_std_core_hnd_prompt_local_var(loc, kk_unit_box(res), _ctx); /*5699*/
  kk_unit_unbox(_x_x1558); return kk_Unit;
}
static kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10247_fun1522(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x1559;
  kk_define_string_literal(, _s_x1560, 16, "std/data/hashset", _ctx)
  _x_x1559 = kk_string_dup(_s_x1560, _ctx); /*string*/
  kk_string_t _x_x1561;
  kk_define_string_literal(, _s_x1562, 3, "222", _ctx)
  _x_x1561 = kk_string_dup(_s_x1562, _ctx); /*string*/
  kk_std_test_test_test__(kk_std_data_hashset__new_mlift_test_hash_set_10247_fun1523(_ctx), _x_x1559, _x_x1561, _ctx); return kk_Unit;
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10247_fun1568__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10247_fun1568(kk_function_t _fself, kk_box_t _b_x607, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10247_fun1568(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10247_fun1568, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10247_fun1568(kk_function_t _fself, kk_box_t _b_x607, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x1569 = kk_Unit;
  kk_unit_t _x_x1570 = kk_Unit;
  kk_unit_unbox(_b_x607);
  kk_std_data_hashset__mlift_test_hash_set_10244(_x_x1570, _ctx);
  return kk_unit_box(_x_x1569);
}

kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10247(kk_unit_t wild___2, kk_context_t* _ctx) { /* (wild_@2 : ()) -> <std/test/test/test-scope,console/console,div,exn> () */ 
  kk_unit_t x_10295 = kk_Unit;
  kk_string_t _x_x1520;
  kk_define_string_literal(, _s_x1521, 5, "clear", _ctx)
  _x_x1520 = kk_string_dup(_s_x1521, _ctx); /*string*/
  kk_string_t _x_x1563;
  kk_define_string_literal(, _s_x1564, 16, "std/data/hashset", _ctx)
  _x_x1563 = kk_string_dup(_s_x1564, _ctx); /*string*/
  kk_string_t _x_x1565;
  kk_define_string_literal(, _s_x1566, 3, "222", _ctx)
  _x_x1565 = kk_string_dup(_s_x1566, _ctx); /*string*/
  kk_std_test_test_istest_fs_scope(_x_x1520, true, kk_std_data_hashset__new_mlift_test_hash_set_10247_fun1522(_ctx), _x_x1563, _x_x1565, _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1567 = kk_std_core_hnd_yield_extend(kk_std_data_hashset__new_mlift_test_hash_set_10247_fun1568(_ctx), _ctx); /*3003*/
    kk_unit_unbox(_x_x1567); return kk_Unit;
  }
  {
    kk_std_data_hashset__mlift_test_hash_set_10244(x_10295, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10248_fun1573__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10248_fun1573(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10248_fun1573(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10248_fun1573, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10248_fun1574__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10248_fun1574(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10248_fun1574(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10248_fun1574, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10248_fun1576__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10248_fun1576(kk_function_t _fself, kk_box_t _b_x616, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10248_fun1576(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10248_fun1576, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10248_fun1576(kk_function_t _fself, kk_box_t _b_x616, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t n_1_10079;
  bool _match_x933;
  kk_integer_t _brw_x936;
  kk_std_core_types__optional _match_x935;
  kk_box_t _x_x1577 = kk_box_dup(_b_x616, _ctx); /*1000*/
  _match_x935 = kk_std_core_types__optional_unbox(_x_x1577, KK_OWNED, _ctx); /*? int*/
  if (kk_std_core_types__is_Optional(_match_x935, _ctx)) {
    kk_box_t _box_x609 = _match_x935._cons._Optional.value;
    kk_integer_t _uniq_capacity_275_1 = kk_integer_unbox(_box_x609, _ctx);
    kk_integer_dup(_uniq_capacity_275_1, _ctx);
    kk_std_core_types__optional_drop(_match_x935, _ctx);
    _brw_x936 = _uniq_capacity_275_1; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x935, _ctx);
    _brw_x936 = kk_integer_from_small(1); /*int*/
  }
  bool _brw_x937 = kk_integer_gt_borrow(_brw_x936,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x936, _ctx);
  _match_x933 = _brw_x937; /*bool*/
  if (_match_x933) {
    kk_std_core_types__optional _match_x934 = kk_std_core_types__optional_unbox(_b_x616, KK_OWNED, _ctx); /*? int*/;
    if (kk_std_core_types__is_Optional(_match_x934, _ctx)) {
      kk_box_t _box_x610 = _match_x934._cons._Optional.value;
      kk_integer_t _uniq_capacity_275_1_0 = kk_integer_unbox(_box_x610, _ctx);
      kk_integer_dup(_uniq_capacity_275_1_0, _ctx);
      kk_std_core_types__optional_drop(_match_x934, _ctx);
      n_1_10079 = _uniq_capacity_275_1_0; /*int*/
    }
    else {
      kk_std_core_types__optional_drop(_match_x934, _ctx);
      n_1_10079 = kk_integer_from_small(1); /*int*/
    }
  }
  else {
    kk_box_drop(_b_x616, _ctx);
    n_1_10079 = kk_integer_from_small(1); /*int*/
  }
  kk_ssize_t _b_x611_619 = kk_std_core_int_ssize__t(n_1_10079, _ctx); /*ssize_t*/;
  kk_std_data_hashset__hash_set _x_x1578;
  kk_vector_t _x_x1579 = kk_std_core_vector_vector_alloc(_b_x611_619, kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx), _ctx); /*vector<3001>*/
  _x_x1578 = kk_std_data_hashset__new_Hash_set(kk_reuse_null, 0, _x_x1579, kk_integer_from_small(0), kk_std_data_hash_thread_fs_seed, _ctx); /*std/data/hashset/hash-set<5>*/
  return kk_std_data_hashset__hash_set_box(_x_x1578, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10248_fun1583__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10248_fun1583(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10248_fun1583(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10248_fun1583__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10248_fun1583__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10248_fun1583, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10248_fun1584__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10248_fun1584(kk_function_t _fself, kk_integer_t i, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10248_fun1584(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10248_fun1584__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10248_fun1584__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10248_fun1584, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10248_fun1587__t {
  struct kk_function_s _base;
  kk_integer_t i;
  kk_ref_t loc;
};
static kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10248_fun1587(kk_function_t _fself, kk_std_data_hashset__hash_set _y_x10109, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10248_fun1587(kk_integer_t i, kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10248_fun1587__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10248_fun1587__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10248_fun1587, kk_context());
  _self->i = i;
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10248_fun1589__t {
  struct kk_function_s _base;
  kk_std_data_hashset__hash_set _y_x10109;
  kk_integer_t i;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10248_fun1589(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10248_fun1589(kk_std_data_hashset__hash_set _y_x10109, kk_integer_t i, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10248_fun1589__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10248_fun1589__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10248_fun1589, kk_context());
  _self->_y_x10109 = _y_x10109;
  _self->i = i;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10248_fun1591__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10248_fun1591(kk_function_t _fself, kk_box_t _b_x633, int64_t _b_x634, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10248_fun1591(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10248_fun1591, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10248_fun1591(kk_function_t _fself, kk_box_t _b_x633, int64_t _b_x634, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x1592 = kk_integer_unbox(_b_x633, _ctx); /*int*/
  return kk_std_data_hash_int_fs_hash(_x_x1592, _b_x634, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10248_fun1593__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashset__mlift_test_hash_set_10248_fun1593(kk_function_t _fself, kk_box_t _b_x635, kk_box_t _b_x636, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10248_fun1593(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10248_fun1593, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashset__mlift_test_hash_set_10248_fun1593(kk_function_t _fself, kk_box_t _b_x635, kk_box_t _b_x636, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _brw_x929 = kk_integer_unbox(_b_x635, _ctx); /*int*/;
  kk_integer_t _brw_x928 = kk_integer_unbox(_b_x636, _ctx); /*int*/;
  bool _brw_x930 = kk_integer_eq_borrow(_brw_x929,_brw_x928,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x929, _ctx);
  kk_integer_drop(_brw_x928, _ctx);
  return _brw_x930;
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10248_fun1596__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashset__mlift_test_hash_set_10248_fun1596(kk_function_t _fself, kk_integer_t _x1_x1594, kk_integer_t _x2_x1595, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10248_fun1596(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10248_fun1596, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashset__mlift_test_hash_set_10248_fun1596(kk_function_t _fself, kk_integer_t _x1_x1594, kk_integer_t _x2_x1595, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashset_when_resize(_x1_x1594, _x2_x1595, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10248_fun1599__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10248_fun1599(kk_function_t _fself, kk_integer_t _x1_x1597, kk_integer_t _x2_x1598, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10248_fun1599(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10248_fun1599, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10248_fun1599(kk_function_t _fself, kk_integer_t _x1_x1597, kk_integer_t _x2_x1598, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashset_resizer(_x1_x1597, _x2_x1598, _ctx);
}
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10248_fun1589(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10248_fun1589__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10248_fun1589__t*, _fself, _ctx);
  kk_std_data_hashset__hash_set _y_x10109 = _self->_y_x10109; /* std/data/hashset/hash-set<int> */
  kk_integer_t i = _self->i; /* int */
  kk_drop_match(_self, {kk_std_data_hashset__hash_set_dup(_y_x10109, _ctx);kk_integer_dup(i, _ctx);}, {}, _ctx)
  kk_std_data_hashset__hash_set _x_x1590 = kk_std_data_hashset_insert(_y_x10109, kk_integer_box(i, _ctx), kk_std_data_hashset__new_mlift_test_hash_set_10248_fun1591(_ctx), kk_std_data_hashset__new_mlift_test_hash_set_10248_fun1593(_ctx), kk_std_data_hashset__new_mlift_test_hash_set_10248_fun1596(_ctx), kk_std_data_hashset__new_mlift_test_hash_set_10248_fun1599(_ctx), _ctx); /*std/data/hashset/hash-set<1687>*/
  return kk_std_data_hashset__hash_set_box(_x_x1590, _ctx);
}
static kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10248_fun1587(kk_function_t _fself, kk_std_data_hashset__hash_set _y_x10109, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10248_fun1587__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10248_fun1587__t*, _fself, _ctx);
  kk_integer_t i = _self->i; /* int */
  kk_ref_t loc = _self->loc; /* local-var<3365,std/data/hashset/hash-set<int>> */
  kk_drop_match(_self, {kk_integer_dup(i, _ctx);kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_std_data_hashset__hash_set _b_x639_641;
  kk_box_t _x_x1588 = kk_std_core_hnd__open_none0(kk_std_data_hashset__new_mlift_test_hash_set_10248_fun1589(_y_x10109, i, _ctx), _ctx); /*1000*/
  _b_x639_641 = kk_std_data_hashset__hash_set_unbox(_x_x1588, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/
  kk_unit_t _brw_x927 = kk_Unit;
  kk_ref_set_borrow(loc,(kk_std_data_hashset__hash_set_box(_b_x639_641, _ctx)),kk_context());
  kk_ref_drop(loc, _ctx);
  _brw_x927; return kk_Unit;
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10248_fun1601__t {
  struct kk_function_s _base;
  kk_function_t next_1_10313;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10248_fun1601(kk_function_t _fself, kk_box_t _b_x650, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10248_fun1601(kk_function_t next_1_10313, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10248_fun1601__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10248_fun1601__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10248_fun1601, kk_context());
  _self->next_1_10313 = next_1_10313;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10248_fun1601(kk_function_t _fself, kk_box_t _b_x650, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10248_fun1601__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10248_fun1601__t*, _fself, _ctx);
  kk_function_t next_1_10313 = _self->next_1_10313; /* (std/data/hashset/hash-set<int>) -> <local<3365>,exn,std/test/test/test,console/console,div,exn,std/test/test/test-scope> () */
  kk_drop_match(_self, {kk_function_dup(next_1_10313, _ctx);}, {}, _ctx)
  kk_unit_t _x_x1602 = kk_Unit;
  kk_std_data_hashset__hash_set _x_x1603 = kk_std_data_hashset__hash_set_unbox(_b_x650, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_data_hashset__hash_set, kk_context_t*), next_1_10313, (next_1_10313, _x_x1603, _ctx), _ctx);
  return kk_unit_box(_x_x1602);
}
static kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10248_fun1584(kk_function_t _fself, kk_integer_t i, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10248_fun1584__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10248_fun1584__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<3365,std/data/hashset/hash-set<int>> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_std_data_hashset__hash_set x_1_10312;
  kk_box_t _x_x1585;
  kk_ref_t _x_x1586 = kk_ref_dup(loc, _ctx); /*local-var<3365,std/data/hashset/hash-set<int>>*/
  _x_x1585 = kk_ref_get(_x_x1586,kk_context()); /*5330*/
  x_1_10312 = kk_std_data_hashset__hash_set_unbox(_x_x1585, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/
  kk_function_t next_1_10313 = kk_std_data_hashset__new_mlift_test_hash_set_10248_fun1587(i, loc, _ctx); /*(std/data/hashset/hash-set<int>) -> <local<3365>,exn,std/test/test/test,console/console,div,exn,std/test/test/test-scope> ()*/;
  if (kk_yielding(kk_context())) {
    kk_datatype_ptr_dropn(x_1_10312, (KK_I32(2)), _ctx);
    kk_box_t _x_x1600 = kk_std_core_hnd_yield_extend(kk_std_data_hashset__new_mlift_test_hash_set_10248_fun1601(next_1_10313, _ctx), _ctx); /*5366*/
    kk_unit_unbox(_x_x1600); return kk_Unit;
  }
  {
    kk_function_call(kk_unit_t, (kk_function_t, kk_std_data_hashset__hash_set, kk_context_t*), next_1_10313, (next_1_10313, x_1_10312, _ctx), _ctx); return kk_Unit;
  }
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10248_fun1606__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10248_fun1606(kk_function_t _fself, kk_box_t _b_x653, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10248_fun1606(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10248_fun1606, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10248_fun1606(kk_function_t _fself, kk_box_t _b_x653, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_box_drop(_b_x653, _ctx);
  return kk_bool_box(true);
}
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10248_fun1583(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10248_fun1583__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10248_fun1583__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<3365,std/data/hashset/hash-set<int>> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_unit_t x_0_10310 = kk_Unit;
  kk_integer_t _brw_x931 = kk_integer_from_int(50000, _ctx); /*int*/;
  kk_unit_t _brw_x932 = kk_Unit;
  kk_std_core_for(_brw_x931, kk_std_data_hashset__new_mlift_test_hash_set_10248_fun1584(loc, _ctx), _ctx);
  kk_integer_drop(_brw_x931, _ctx);
  _brw_x932;
  bool _x_x1604;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1605 = kk_std_core_hnd_yield_extend(kk_std_data_hashset__new_mlift_test_hash_set_10248_fun1606(_ctx), _ctx); /*5366*/
    _x_x1604 = kk_bool_unbox(_x_x1605); /*bool*/
  }
  else {
    _x_x1604 = true; /*bool*/
  }
  return kk_bool_box(_x_x1604);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10248_fun1607__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashset__mlift_test_hash_set_10248_fun1607(kk_function_t _fself, kk_box_t _b_x662, kk_box_t _b_x663, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10248_fun1607(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10248_fun1607, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashset__mlift_test_hash_set_10248_fun1607(kk_function_t _fself, kk_box_t _b_x662, kk_box_t _b_x663, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x1608 = kk_bool_unbox(_b_x662); /*bool*/
  bool _x_x1609 = kk_bool_unbox(_b_x663); /*bool*/
  return kk_std_core_bool__lp__eq__eq__rp_(_x_x1608, _x_x1609, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10248_fun1610__t {
  struct kk_function_s _base;
};
static kk_string_t kk_std_data_hashset__mlift_test_hash_set_10248_fun1610(kk_function_t _fself, kk_box_t _b_x664, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10248_fun1610(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10248_fun1610, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_std_data_hashset__mlift_test_hash_set_10248_fun1610(kk_function_t _fself, kk_box_t _b_x664, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x1611 = kk_bool_unbox(_b_x664); /*bool*/
  return kk_std_core_bool_show(_x_x1611, _ctx);
}
static kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10248_fun1574(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_data_hashset__hash_set init_10308;
  kk_box_t _x_x1575;
  kk_box_t _x_x1580;
  kk_std_core_types__optional _x_x1581 = kk_std_core_types__new_Optional(kk_integer_box(kk_integer_from_small(1), _ctx), _ctx); /*? 1003*/
  _x_x1580 = kk_std_core_types__optional_box(_x_x1581, _ctx); /*1000*/
  _x_x1575 = kk_std_core_hnd__open_none1(kk_std_data_hashset__new_mlift_test_hash_set_10248_fun1576(_ctx), _x_x1580, _ctx); /*1001*/
  init_10308 = kk_std_data_hashset__hash_set_unbox(_x_x1575, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/
  kk_ref_t loc = kk_ref_alloc((kk_std_data_hashset__hash_set_box(init_10308, _ctx)),kk_context()); /*local-var<3365,std/data/hashset/hash-set<int>>*/;
  kk_unit_t res = kk_Unit;
  kk_function_t _x_x1582;
  kk_ref_dup(loc, _ctx);
  _x_x1582 = kk_std_data_hashset__new_mlift_test_hash_set_10248_fun1583(loc, _ctx); /*() -> <exn,std/test/test/test|5359> 5358*/
  kk_string_t _x_x1612;
  kk_define_string_literal(, _s_x1613, 3, "218", _ctx)
  _x_x1612 = kk_string_dup(_s_x1613, _ctx); /*string*/
  kk_string_t _x_x1614;
  kk_define_string_literal(, _s_x1615, 16, "std/data/hashset", _ctx)
  _x_x1614 = kk_string_dup(_s_x1615, _ctx); /*string*/
  kk_std_test_test_expect(kk_bool_box(true), _x_x1582, kk_std_core_types__new_None(_ctx), kk_std_core_types__new_None(_ctx), kk_std_data_hashset__new_mlift_test_hash_set_10248_fun1607(_ctx), kk_std_data_hashset__new_mlift_test_hash_set_10248_fun1610(_ctx), _x_x1612, _x_x1614, _ctx);
  kk_box_t _x_x1616 = kk_std_core_hnd_prompt_local_var(loc, kk_unit_box(res), _ctx); /*5366*/
  kk_unit_unbox(_x_x1616); return kk_Unit;
}
static kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10248_fun1573(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x1617;
  kk_define_string_literal(, _s_x1618, 16, "std/data/hashset", _ctx)
  _x_x1617 = kk_string_dup(_s_x1618, _ctx); /*string*/
  kk_string_t _x_x1619;
  kk_define_string_literal(, _s_x1620, 3, "216", _ctx)
  _x_x1619 = kk_string_dup(_s_x1620, _ctx); /*string*/
  kk_std_test_test_test__(kk_std_data_hashset__new_mlift_test_hash_set_10248_fun1574(_ctx), _x_x1617, _x_x1619, _ctx); return kk_Unit;
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10248_fun1626__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10248_fun1626(kk_function_t _fself, kk_box_t _b_x680, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10248_fun1626(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10248_fun1626, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10248_fun1626(kk_function_t _fself, kk_box_t _b_x680, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x1627 = kk_Unit;
  kk_unit_t _x_x1628 = kk_Unit;
  kk_unit_unbox(_b_x680);
  kk_std_data_hashset__mlift_test_hash_set_10247(_x_x1628, _ctx);
  return kk_unit_box(_x_x1627);
}

kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10248(kk_unit_t wild___0, kk_context_t* _ctx) { /* (wild_@0 : ()) -> <std/test/test/test-scope,console/console,div,exn> () */ 
  kk_unit_t x_10306 = kk_Unit;
  kk_string_t _x_x1571;
  kk_define_string_literal(, _s_x1572, 11, "stress test", _ctx)
  _x_x1571 = kk_string_dup(_s_x1572, _ctx); /*string*/
  kk_string_t _x_x1621;
  kk_define_string_literal(, _s_x1622, 16, "std/data/hashset", _ctx)
  _x_x1621 = kk_string_dup(_s_x1622, _ctx); /*string*/
  kk_string_t _x_x1623;
  kk_define_string_literal(, _s_x1624, 3, "216", _ctx)
  _x_x1623 = kk_string_dup(_s_x1624, _ctx); /*string*/
  kk_std_test_test_istest_fs_scope(_x_x1571, true, kk_std_data_hashset__new_mlift_test_hash_set_10248_fun1573(_ctx), _x_x1621, _x_x1623, _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1625 = kk_std_core_hnd_yield_extend(kk_std_data_hashset__new_mlift_test_hash_set_10248_fun1626(_ctx), _ctx); /*3003*/
    kk_unit_unbox(_x_x1625); return kk_Unit;
  }
  {
    kk_std_data_hashset__mlift_test_hash_set_10247(x_10306, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10249_fun1631__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10249_fun1631(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10249_fun1631(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10249_fun1631, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10249_fun1632__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10249_fun1632(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10249_fun1632(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10249_fun1632, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10249_fun1634__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10249_fun1634(kk_function_t _fself, kk_box_t _b_x689, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10249_fun1634(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10249_fun1634, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10249_fun1634(kk_function_t _fself, kk_box_t _b_x689, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t n_0_10071;
  bool _match_x919;
  kk_integer_t _brw_x922;
  kk_std_core_types__optional _match_x921;
  kk_box_t _x_x1635 = kk_box_dup(_b_x689, _ctx); /*1000*/
  _match_x921 = kk_std_core_types__optional_unbox(_x_x1635, KK_OWNED, _ctx); /*? int*/
  if (kk_std_core_types__is_Optional(_match_x921, _ctx)) {
    kk_box_t _box_x682 = _match_x921._cons._Optional.value;
    kk_integer_t _uniq_capacity_275_0_0 = kk_integer_unbox(_box_x682, _ctx);
    kk_integer_dup(_uniq_capacity_275_0_0, _ctx);
    kk_std_core_types__optional_drop(_match_x921, _ctx);
    _brw_x922 = _uniq_capacity_275_0_0; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x921, _ctx);
    _brw_x922 = kk_integer_from_small(1); /*int*/
  }
  bool _brw_x923 = kk_integer_gt_borrow(_brw_x922,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x922, _ctx);
  _match_x919 = _brw_x923; /*bool*/
  if (_match_x919) {
    kk_std_core_types__optional _match_x920 = kk_std_core_types__optional_unbox(_b_x689, KK_OWNED, _ctx); /*? int*/;
    if (kk_std_core_types__is_Optional(_match_x920, _ctx)) {
      kk_box_t _box_x683 = _match_x920._cons._Optional.value;
      kk_integer_t _uniq_capacity_275_0_1 = kk_integer_unbox(_box_x683, _ctx);
      kk_integer_dup(_uniq_capacity_275_0_1, _ctx);
      kk_std_core_types__optional_drop(_match_x920, _ctx);
      n_0_10071 = _uniq_capacity_275_0_1; /*int*/
    }
    else {
      kk_std_core_types__optional_drop(_match_x920, _ctx);
      n_0_10071 = kk_integer_from_small(1); /*int*/
    }
  }
  else {
    kk_box_drop(_b_x689, _ctx);
    n_0_10071 = kk_integer_from_small(1); /*int*/
  }
  kk_ssize_t _b_x684_692 = kk_std_core_int_ssize__t(n_0_10071, _ctx); /*ssize_t*/;
  kk_std_data_hashset__hash_set _x_x1636;
  kk_vector_t _x_x1637 = kk_std_core_vector_vector_alloc(_b_x684_692, kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx), _ctx); /*vector<3001>*/
  _x_x1636 = kk_std_data_hashset__new_Hash_set(kk_reuse_null, 0, _x_x1637, kk_integer_from_small(0), kk_std_data_hash_thread_fs_seed, _ctx); /*std/data/hashset/hash-set<5>*/
  return kk_std_data_hashset__hash_set_box(_x_x1636, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10249_fun1641__t {
  struct kk_function_s _base;
  kk_std_data_hashset__hash_set hs_0;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10249_fun1641(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10249_fun1641(kk_std_data_hashset__hash_set hs_0, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10249_fun1641__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10249_fun1641__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10249_fun1641, kk_context());
  _self->hs_0 = hs_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10249_fun1643__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10249_fun1643(kk_function_t _fself, kk_box_t _b_x702, int64_t _b_x703, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10249_fun1643(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10249_fun1643, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10249_fun1643(kk_function_t _fself, kk_box_t _b_x702, int64_t _b_x703, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x1644 = kk_integer_unbox(_b_x702, _ctx); /*int*/
  return kk_std_data_hash_int_fs_hash(_x_x1644, _b_x703, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10249_fun1645__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashset__mlift_test_hash_set_10249_fun1645(kk_function_t _fself, kk_box_t _b_x704, kk_box_t _b_x705, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10249_fun1645(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10249_fun1645, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashset__mlift_test_hash_set_10249_fun1645(kk_function_t _fself, kk_box_t _b_x704, kk_box_t _b_x705, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _brw_x917 = kk_integer_unbox(_b_x704, _ctx); /*int*/;
  kk_integer_t _brw_x916 = kk_integer_unbox(_b_x705, _ctx); /*int*/;
  bool _brw_x918 = kk_integer_eq_borrow(_brw_x917,_brw_x916,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x917, _ctx);
  kk_integer_drop(_brw_x916, _ctx);
  return _brw_x918;
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10249_fun1648__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashset__mlift_test_hash_set_10249_fun1648(kk_function_t _fself, kk_integer_t _x1_x1646, kk_integer_t _x2_x1647, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10249_fun1648(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10249_fun1648, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashset__mlift_test_hash_set_10249_fun1648(kk_function_t _fself, kk_integer_t _x1_x1646, kk_integer_t _x2_x1647, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashset_when_resize(_x1_x1646, _x2_x1647, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10249_fun1651__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10249_fun1651(kk_function_t _fself, kk_integer_t _x1_x1649, kk_integer_t _x2_x1650, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10249_fun1651(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10249_fun1651, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10249_fun1651(kk_function_t _fself, kk_integer_t _x1_x1649, kk_integer_t _x2_x1650, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashset_resizer(_x1_x1649, _x2_x1650, _ctx);
}
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10249_fun1641(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10249_fun1641__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10249_fun1641__t*, _fself, _ctx);
  kk_std_data_hashset__hash_set hs_0 = _self->hs_0; /* std/data/hashset/hash-set<int> */
  kk_drop_match(_self, {kk_std_data_hashset__hash_set_dup(hs_0, _ctx);}, {}, _ctx)
  kk_std_data_hashset__hash_set _x_x1642 = kk_std_data_hashset_insert(hs_0, kk_integer_box(kk_integer_from_small(2), _ctx), kk_std_data_hashset__new_mlift_test_hash_set_10249_fun1643(_ctx), kk_std_data_hashset__new_mlift_test_hash_set_10249_fun1645(_ctx), kk_std_data_hashset__new_mlift_test_hash_set_10249_fun1648(_ctx), kk_std_data_hashset__new_mlift_test_hash_set_10249_fun1651(_ctx), _ctx); /*std/data/hashset/hash-set<1687>*/
  return kk_std_data_hashset__hash_set_box(_x_x1642, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10249_fun1652__t {
  struct kk_function_s _base;
  kk_std_data_hashset__hash_set hs_0_sq_;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10249_fun1652(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10249_fun1652(kk_std_data_hashset__hash_set hs_0_sq_, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10249_fun1652__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10249_fun1652__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10249_fun1652, kk_context());
  _self->hs_0_sq_ = hs_0_sq_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10249_fun1654__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10249_fun1654(kk_function_t _fself, kk_box_t _b_x727, kk_box_t _b_x728, kk_box_t _b_x729, kk_box_t _b_x730, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10249_fun1654(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10249_fun1654, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10249_fun1657__t {
  struct kk_function_s _base;
  kk_box_t _b_x729;
};
static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10249_fun1657(kk_function_t _fself, kk_box_t _b_x718, int64_t _b_x719, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10249_fun1657(kk_box_t _b_x729, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10249_fun1657__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10249_fun1657__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10249_fun1657, kk_context());
  _self->_b_x729 = _b_x729;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10249_fun1657(kk_function_t _fself, kk_box_t _b_x718, int64_t _b_x719, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10249_fun1657__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10249_fun1657__t*, _fself, _ctx);
  kk_box_t _b_x729 = _self->_b_x729; /* 1002 */
  kk_drop_match(_self, {kk_box_dup(_b_x729, _ctx);}, {}, _ctx)
  kk_box_t _x_x1658;
  kk_function_t _x_x1659 = kk_function_unbox(_b_x729, _ctx); /*(731, 732) -> 733*/
  _x_x1658 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x1659, (_x_x1659, _b_x718, kk_int64_box(_b_x719, _ctx), _ctx), _ctx); /*733*/
  return kk_integer_unbox(_x_x1658, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10249_fun1660__t {
  struct kk_function_s _base;
  kk_box_t _b_x730;
};
static bool kk_std_data_hashset__mlift_test_hash_set_10249_fun1660(kk_function_t _fself, kk_box_t _b_x720, kk_box_t _b_x721, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10249_fun1660(kk_box_t _b_x730, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10249_fun1660__t* _self = kk_function_alloc_as(struct kk_std_data_hashset__mlift_test_hash_set_10249_fun1660__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset__mlift_test_hash_set_10249_fun1660, kk_context());
  _self->_b_x730 = _b_x730;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_std_data_hashset__mlift_test_hash_set_10249_fun1660(kk_function_t _fself, kk_box_t _b_x720, kk_box_t _b_x721, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10249_fun1660__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10249_fun1660__t*, _fself, _ctx);
  kk_box_t _b_x730 = _self->_b_x730; /* 1003 */
  kk_drop_match(_self, {kk_box_dup(_b_x730, _ctx);}, {}, _ctx)
  kk_box_t _x_x1661;
  kk_function_t _x_x1662 = kk_function_unbox(_b_x730, _ctx); /*(736, 737) -> 738*/
  _x_x1661 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x1662, (_x_x1662, _b_x720, _b_x721, _ctx), _ctx); /*738*/
  return kk_bool_unbox(_x_x1661);
}
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10249_fun1654(kk_function_t _fself, kk_box_t _b_x727, kk_box_t _b_x728, kk_box_t _b_x729, kk_box_t _b_x730, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_data_hashset__hash_set _x_x1655;
  kk_std_data_hashset__hash_set _x_x1656 = kk_std_data_hashset__hash_set_unbox(_b_x727, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/
  _x_x1655 = kk_std_data_hashset_remove(_x_x1656, _b_x728, kk_std_data_hashset__new_mlift_test_hash_set_10249_fun1657(_b_x729, _ctx), kk_std_data_hashset__new_mlift_test_hash_set_10249_fun1660(_b_x730, _ctx), _ctx); /*std/data/hashset/hash-set<2219>*/
  return kk_std_data_hashset__hash_set_box(_x_x1655, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10249_fun1663__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10249_fun1663(kk_function_t _fself, kk_box_t _b_x744, kk_box_t _b_x745, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10249_fun1663(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10249_fun1663, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10249_fun1663(kk_function_t _fself, kk_box_t _b_x744, kk_box_t _b_x745, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x1664;
  kk_integer_t _x_x1665 = kk_integer_unbox(_b_x744, _ctx); /*int*/
  int64_t _x_x1666 = kk_int64_unbox(_b_x745, KK_OWNED, _ctx); /*int64*/
  _x_x1664 = kk_std_data_hash_int_fs_hash(_x_x1665, _x_x1666, _ctx); /*int*/
  return kk_integer_box(_x_x1664, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10249_fun1667__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10249_fun1667(kk_function_t _fself, kk_box_t _b_x749, kk_box_t _b_x750, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10249_fun1667(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10249_fun1667, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10249_fun1667(kk_function_t _fself, kk_box_t _b_x749, kk_box_t _b_x750, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x1668;
  kk_integer_t _brw_x914 = kk_integer_unbox(_b_x749, _ctx); /*int*/;
  kk_integer_t _brw_x913 = kk_integer_unbox(_b_x750, _ctx); /*int*/;
  bool _brw_x915 = kk_integer_eq_borrow(_brw_x914,_brw_x913,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x914, _ctx);
  kk_integer_drop(_brw_x913, _ctx);
  _x_x1668 = _brw_x915; /*bool*/
  return kk_bool_box(_x_x1668);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10249_fun1669__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10249_fun1669(kk_function_t _fself, kk_box_t _b_x762, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10249_fun1669(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10249_fun1669, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10249_fun1669(kk_function_t _fself, kk_box_t _b_x762, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x1670;
  kk_std_data_hashset__hash_set _match_x912 = kk_std_data_hashset__hash_set_unbox(_b_x762, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/;
  {
    struct kk_std_data_hashset_Hash_set* _con_x1671 = kk_std_data_hashset__as_Hash_set(_match_x912, _ctx);
    kk_vector_t _pat_0_1 = _con_x1671->data;
    kk_integer_t _x = _con_x1671->amount;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x912, _ctx)) {
      kk_vector_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(_match_x912, _ctx);
    }
    else {
      kk_integer_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x912, _ctx);
    }
    _x_x1670 = _x; /*int*/
  }
  return kk_integer_box(_x_x1670, _ctx);
}
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10249_fun1652(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_data_hashset__mlift_test_hash_set_10249_fun1652__t* _self = kk_function_as(struct kk_std_data_hashset__mlift_test_hash_set_10249_fun1652__t*, _fself, _ctx);
  kk_std_data_hashset__hash_set hs_0_sq_ = _self->hs_0_sq_; /* std/data/hashset/hash-set<int> */
  kk_drop_match(_self, {kk_std_data_hashset__hash_set_dup(hs_0_sq_, _ctx);}, {}, _ctx)
  kk_std_data_hashset__hash_set _x_x1_4_10193;
  kk_box_t _x_x1653 = kk_std_core_hnd__open_none4(kk_std_data_hashset__new_mlift_test_hash_set_10249_fun1654(_ctx), kk_std_data_hashset__hash_set_box(hs_0_sq_, _ctx), kk_integer_box(kk_integer_from_small(2), _ctx), kk_function_box(kk_std_data_hashset__new_mlift_test_hash_set_10249_fun1663(_ctx), _ctx), kk_function_box(kk_std_data_hashset__new_mlift_test_hash_set_10249_fun1667(_ctx), _ctx), _ctx); /*1004*/
  _x_x1_4_10193 = kk_std_data_hashset__hash_set_unbox(_x_x1653, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/
  return kk_std_core_hnd__open_none1(kk_std_data_hashset__new_mlift_test_hash_set_10249_fun1669(_ctx), kk_std_data_hashset__hash_set_box(_x_x1_4_10193, _ctx), _ctx);
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10249_fun1672__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashset__mlift_test_hash_set_10249_fun1672(kk_function_t _fself, kk_box_t _b_x771, kk_box_t _b_x772, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10249_fun1672(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10249_fun1672, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashset__mlift_test_hash_set_10249_fun1672(kk_function_t _fself, kk_box_t _b_x771, kk_box_t _b_x772, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _brw_x910 = kk_integer_unbox(_b_x771, _ctx); /*int*/;
  kk_integer_t _brw_x909 = kk_integer_unbox(_b_x772, _ctx); /*int*/;
  bool _brw_x911 = kk_integer_eq_borrow(_brw_x910,_brw_x909,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x910, _ctx);
  kk_integer_drop(_brw_x909, _ctx);
  return _brw_x911;
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10249_fun1673__t {
  struct kk_function_s _base;
};
static kk_string_t kk_std_data_hashset__mlift_test_hash_set_10249_fun1673(kk_function_t _fself, kk_box_t _b_x773, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10249_fun1673(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10249_fun1673, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_std_data_hashset__mlift_test_hash_set_10249_fun1673(kk_function_t _fself, kk_box_t _b_x773, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x1674 = kk_integer_unbox(_b_x773, _ctx); /*int*/
  return kk_std_core_int_show(_x_x1674, _ctx);
}
static kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10249_fun1632(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_data_hashset__hash_set hs_0;
  kk_box_t _x_x1633;
  kk_box_t _x_x1638;
  kk_std_core_types__optional _x_x1639 = kk_std_core_types__new_Optional(kk_integer_box(kk_integer_from_small(1), _ctx), _ctx); /*? 1003*/
  _x_x1638 = kk_std_core_types__optional_box(_x_x1639, _ctx); /*1000*/
  _x_x1633 = kk_std_core_hnd__open_none1(kk_std_data_hashset__new_mlift_test_hash_set_10249_fun1634(_ctx), _x_x1638, _ctx); /*1001*/
  hs_0 = kk_std_data_hashset__hash_set_unbox(_x_x1633, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/
  kk_std_data_hashset__hash_set hs_0_sq_;
  kk_box_t _x_x1640 = kk_std_core_hnd__open_none0(kk_std_data_hashset__new_mlift_test_hash_set_10249_fun1641(hs_0, _ctx), _ctx); /*1000*/
  hs_0_sq_ = kk_std_data_hashset__hash_set_unbox(_x_x1640, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/
  kk_string_t _x_x1675;
  kk_define_string_literal(, _s_x1676, 3, "214", _ctx)
  _x_x1675 = kk_string_dup(_s_x1676, _ctx); /*string*/
  kk_string_t _x_x1677;
  kk_define_string_literal(, _s_x1678, 16, "std/data/hashset", _ctx)
  _x_x1677 = kk_string_dup(_s_x1678, _ctx); /*string*/
  kk_std_test_test_expect(kk_integer_box(kk_integer_from_small(0), _ctx), kk_std_data_hashset__new_mlift_test_hash_set_10249_fun1652(hs_0_sq_, _ctx), kk_std_core_types__new_None(_ctx), kk_std_core_types__new_None(_ctx), kk_std_data_hashset__new_mlift_test_hash_set_10249_fun1672(_ctx), kk_std_data_hashset__new_mlift_test_hash_set_10249_fun1673(_ctx), _x_x1675, _x_x1677, _ctx); return kk_Unit;
}
static kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10249_fun1631(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x1679;
  kk_define_string_literal(, _s_x1680, 16, "std/data/hashset", _ctx)
  _x_x1679 = kk_string_dup(_s_x1680, _ctx); /*string*/
  kk_string_t _x_x1681;
  kk_define_string_literal(, _s_x1682, 3, "211", _ctx)
  _x_x1681 = kk_string_dup(_s_x1682, _ctx); /*string*/
  kk_std_test_test_test__(kk_std_data_hashset__new_mlift_test_hash_set_10249_fun1632(_ctx), _x_x1679, _x_x1681, _ctx); return kk_Unit;
}


// lift anonymous function
struct kk_std_data_hashset__mlift_test_hash_set_10249_fun1688__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10249_fun1688(kk_function_t _fself, kk_box_t _b_x790, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset__new_mlift_test_hash_set_10249_fun1688(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset__mlift_test_hash_set_10249_fun1688, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashset__mlift_test_hash_set_10249_fun1688(kk_function_t _fself, kk_box_t _b_x790, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x1689 = kk_Unit;
  kk_unit_t _x_x1690 = kk_Unit;
  kk_unit_unbox(_b_x790);
  kk_std_data_hashset__mlift_test_hash_set_10248(_x_x1690, _ctx);
  return kk_unit_box(_x_x1689);
}

kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10249(kk_unit_t wild__, kk_context_t* _ctx) { /* (wild_ : ()) -> <std/test/test/test-scope,console/console,div,exn> () */ 
  kk_unit_t x_10318 = kk_Unit;
  kk_string_t _x_x1629;
  kk_define_string_literal(, _s_x1630, 6, "remove", _ctx)
  _x_x1629 = kk_string_dup(_s_x1630, _ctx); /*string*/
  kk_string_t _x_x1683;
  kk_define_string_literal(, _s_x1684, 16, "std/data/hashset", _ctx)
  _x_x1683 = kk_string_dup(_s_x1684, _ctx); /*string*/
  kk_string_t _x_x1685;
  kk_define_string_literal(, _s_x1686, 3, "211", _ctx)
  _x_x1685 = kk_string_dup(_s_x1686, _ctx); /*string*/
  kk_std_test_test_istest_fs_scope(_x_x1629, true, kk_std_data_hashset__new_mlift_test_hash_set_10249_fun1631(_ctx), _x_x1683, _x_x1685, _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1687 = kk_std_core_hnd_yield_extend(kk_std_data_hashset__new_mlift_test_hash_set_10249_fun1688(_ctx), _ctx); /*3003*/
    kk_unit_unbox(_x_x1687); return kk_Unit;
  }
  {
    kk_std_data_hashset__mlift_test_hash_set_10248(x_10318, _ctx); return kk_Unit;
  }
}


// lift anonymous function
struct kk_std_data_hashset_test_hash_set_fun1693__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_data_hashset_test_hash_set_fun1693(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_new_test_hash_set_fun1693(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset_test_hash_set_fun1693, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashset_test_hash_set_fun1696__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_data_hashset_test_hash_set_fun1696(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_new_test_hash_set_fun1696(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset_test_hash_set_fun1696, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashset_test_hash_set_fun1697__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_data_hashset_test_hash_set_fun1697(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_new_test_hash_set_fun1697(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset_test_hash_set_fun1697, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashset_test_hash_set_fun1699__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashset_test_hash_set_fun1699(kk_function_t _fself, kk_box_t _b_x799, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_new_test_hash_set_fun1699(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset_test_hash_set_fun1699, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashset_test_hash_set_fun1699(kk_function_t _fself, kk_box_t _b_x799, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t n_10065;
  bool _match_x903;
  kk_integer_t _brw_x906;
  kk_std_core_types__optional _match_x905;
  kk_box_t _x_x1700 = kk_box_dup(_b_x799, _ctx); /*1000*/
  _match_x905 = kk_std_core_types__optional_unbox(_x_x1700, KK_OWNED, _ctx); /*? int*/
  if (kk_std_core_types__is_Optional(_match_x905, _ctx)) {
    kk_box_t _box_x792 = _match_x905._cons._Optional.value;
    kk_integer_t _uniq_capacity_275 = kk_integer_unbox(_box_x792, _ctx);
    kk_integer_dup(_uniq_capacity_275, _ctx);
    kk_std_core_types__optional_drop(_match_x905, _ctx);
    _brw_x906 = _uniq_capacity_275; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x905, _ctx);
    _brw_x906 = kk_integer_from_small(1); /*int*/
  }
  bool _brw_x907 = kk_integer_gt_borrow(_brw_x906,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x906, _ctx);
  _match_x903 = _brw_x907; /*bool*/
  if (_match_x903) {
    kk_std_core_types__optional _match_x904 = kk_std_core_types__optional_unbox(_b_x799, KK_OWNED, _ctx); /*? int*/;
    if (kk_std_core_types__is_Optional(_match_x904, _ctx)) {
      kk_box_t _box_x793 = _match_x904._cons._Optional.value;
      kk_integer_t _uniq_capacity_275_0 = kk_integer_unbox(_box_x793, _ctx);
      kk_integer_dup(_uniq_capacity_275_0, _ctx);
      kk_std_core_types__optional_drop(_match_x904, _ctx);
      n_10065 = _uniq_capacity_275_0; /*int*/
    }
    else {
      kk_std_core_types__optional_drop(_match_x904, _ctx);
      n_10065 = kk_integer_from_small(1); /*int*/
    }
  }
  else {
    kk_box_drop(_b_x799, _ctx);
    n_10065 = kk_integer_from_small(1); /*int*/
  }
  kk_ssize_t _b_x794_802 = kk_std_core_int_ssize__t(n_10065, _ctx); /*ssize_t*/;
  kk_std_data_hashset__hash_set _x_x1701;
  kk_vector_t _x_x1702 = kk_std_core_vector_vector_alloc(_b_x794_802, kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx), _ctx); /*vector<3001>*/
  _x_x1701 = kk_std_data_hashset__new_Hash_set(kk_reuse_null, 0, _x_x1702, kk_integer_from_small(0), kk_std_data_hash_thread_fs_seed, _ctx); /*std/data/hashset/hash-set<5>*/
  return kk_std_data_hashset__hash_set_box(_x_x1701, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset_test_hash_set_fun1705__t {
  struct kk_function_s _base;
  kk_std_data_hashset__hash_set hs;
};
static kk_box_t kk_std_data_hashset_test_hash_set_fun1705(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_new_test_hash_set_fun1705(kk_std_data_hashset__hash_set hs, kk_context_t* _ctx) {
  struct kk_std_data_hashset_test_hash_set_fun1705__t* _self = kk_function_alloc_as(struct kk_std_data_hashset_test_hash_set_fun1705__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset_test_hash_set_fun1705, kk_context());
  _self->hs = hs;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashset_test_hash_set_fun1707__t {
  struct kk_function_s _base;
  kk_std_data_hashset__hash_set hs;
};
static kk_box_t kk_std_data_hashset_test_hash_set_fun1707(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_new_test_hash_set_fun1707(kk_std_data_hashset__hash_set hs, kk_context_t* _ctx) {
  struct kk_std_data_hashset_test_hash_set_fun1707__t* _self = kk_function_alloc_as(struct kk_std_data_hashset_test_hash_set_fun1707__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset_test_hash_set_fun1707, kk_context());
  _self->hs = hs;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashset_test_hash_set_fun1709__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashset_test_hash_set_fun1709(kk_function_t _fself, kk_box_t _b_x812, int64_t _b_x813, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_new_test_hash_set_fun1709(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset_test_hash_set_fun1709, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashset_test_hash_set_fun1709(kk_function_t _fself, kk_box_t _b_x812, int64_t _b_x813, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x1710 = kk_integer_unbox(_b_x812, _ctx); /*int*/
  return kk_std_data_hash_int_fs_hash(_x_x1710, _b_x813, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset_test_hash_set_fun1711__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashset_test_hash_set_fun1711(kk_function_t _fself, kk_box_t _b_x814, kk_box_t _b_x815, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_new_test_hash_set_fun1711(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset_test_hash_set_fun1711, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashset_test_hash_set_fun1711(kk_function_t _fself, kk_box_t _b_x814, kk_box_t _b_x815, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _brw_x901 = kk_integer_unbox(_b_x814, _ctx); /*int*/;
  kk_integer_t _brw_x900 = kk_integer_unbox(_b_x815, _ctx); /*int*/;
  bool _brw_x902 = kk_integer_eq_borrow(_brw_x901,_brw_x900,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x901, _ctx);
  kk_integer_drop(_brw_x900, _ctx);
  return _brw_x902;
}


// lift anonymous function
struct kk_std_data_hashset_test_hash_set_fun1714__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashset_test_hash_set_fun1714(kk_function_t _fself, kk_integer_t _x1_x1712, kk_integer_t _x2_x1713, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_new_test_hash_set_fun1714(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset_test_hash_set_fun1714, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashset_test_hash_set_fun1714(kk_function_t _fself, kk_integer_t _x1_x1712, kk_integer_t _x2_x1713, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashset_when_resize(_x1_x1712, _x2_x1713, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset_test_hash_set_fun1717__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashset_test_hash_set_fun1717(kk_function_t _fself, kk_integer_t _x1_x1715, kk_integer_t _x2_x1716, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_new_test_hash_set_fun1717(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset_test_hash_set_fun1717, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashset_test_hash_set_fun1717(kk_function_t _fself, kk_integer_t _x1_x1715, kk_integer_t _x2_x1716, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashset_resizer(_x1_x1715, _x2_x1716, _ctx);
}
static kk_box_t kk_std_data_hashset_test_hash_set_fun1707(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_data_hashset_test_hash_set_fun1707__t* _self = kk_function_as(struct kk_std_data_hashset_test_hash_set_fun1707__t*, _fself, _ctx);
  kk_std_data_hashset__hash_set hs = _self->hs; /* std/data/hashset/hash-set<int> */
  kk_drop_match(_self, {kk_std_data_hashset__hash_set_dup(hs, _ctx);}, {}, _ctx)
  kk_std_data_hashset__hash_set _x_x1708 = kk_std_data_hashset_insert(hs, kk_integer_box(kk_integer_from_small(2), _ctx), kk_std_data_hashset_new_test_hash_set_fun1709(_ctx), kk_std_data_hashset_new_test_hash_set_fun1711(_ctx), kk_std_data_hashset_new_test_hash_set_fun1714(_ctx), kk_std_data_hashset_new_test_hash_set_fun1717(_ctx), _ctx); /*std/data/hashset/hash-set<1687>*/
  return kk_std_data_hashset__hash_set_box(_x_x1708, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset_test_hash_set_fun1718__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashset_test_hash_set_fun1718(kk_function_t _fself, kk_box_t _b_x837, kk_box_t _b_x838, kk_box_t _b_x839, kk_box_t _b_x840, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_new_test_hash_set_fun1718(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset_test_hash_set_fun1718, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashset_test_hash_set_fun1721__t {
  struct kk_function_s _base;
  kk_box_t _b_x839;
};
static kk_integer_t kk_std_data_hashset_test_hash_set_fun1721(kk_function_t _fself, kk_box_t _b_x828, int64_t _b_x829, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_new_test_hash_set_fun1721(kk_box_t _b_x839, kk_context_t* _ctx) {
  struct kk_std_data_hashset_test_hash_set_fun1721__t* _self = kk_function_alloc_as(struct kk_std_data_hashset_test_hash_set_fun1721__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset_test_hash_set_fun1721, kk_context());
  _self->_b_x839 = _b_x839;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_integer_t kk_std_data_hashset_test_hash_set_fun1721(kk_function_t _fself, kk_box_t _b_x828, int64_t _b_x829, kk_context_t* _ctx) {
  struct kk_std_data_hashset_test_hash_set_fun1721__t* _self = kk_function_as(struct kk_std_data_hashset_test_hash_set_fun1721__t*, _fself, _ctx);
  kk_box_t _b_x839 = _self->_b_x839; /* 1002 */
  kk_drop_match(_self, {kk_box_dup(_b_x839, _ctx);}, {}, _ctx)
  kk_box_t _x_x1722;
  kk_function_t _x_x1723 = kk_function_unbox(_b_x839, _ctx); /*(841, 842) -> 843*/
  _x_x1722 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x1723, (_x_x1723, _b_x828, kk_int64_box(_b_x829, _ctx), _ctx), _ctx); /*843*/
  return kk_integer_unbox(_x_x1722, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset_test_hash_set_fun1724__t {
  struct kk_function_s _base;
  kk_box_t _b_x840;
};
static bool kk_std_data_hashset_test_hash_set_fun1724(kk_function_t _fself, kk_box_t _b_x830, kk_box_t _b_x831, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_new_test_hash_set_fun1724(kk_box_t _b_x840, kk_context_t* _ctx) {
  struct kk_std_data_hashset_test_hash_set_fun1724__t* _self = kk_function_alloc_as(struct kk_std_data_hashset_test_hash_set_fun1724__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashset_test_hash_set_fun1724, kk_context());
  _self->_b_x840 = _b_x840;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_std_data_hashset_test_hash_set_fun1724(kk_function_t _fself, kk_box_t _b_x830, kk_box_t _b_x831, kk_context_t* _ctx) {
  struct kk_std_data_hashset_test_hash_set_fun1724__t* _self = kk_function_as(struct kk_std_data_hashset_test_hash_set_fun1724__t*, _fself, _ctx);
  kk_box_t _b_x840 = _self->_b_x840; /* 1003 */
  kk_drop_match(_self, {kk_box_dup(_b_x840, _ctx);}, {}, _ctx)
  kk_box_t _x_x1725;
  kk_function_t _x_x1726 = kk_function_unbox(_b_x840, _ctx); /*(846, 847) -> 848*/
  _x_x1725 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x1726, (_x_x1726, _b_x830, _b_x831, _ctx), _ctx); /*848*/
  return kk_bool_unbox(_x_x1725);
}
static kk_box_t kk_std_data_hashset_test_hash_set_fun1718(kk_function_t _fself, kk_box_t _b_x837, kk_box_t _b_x838, kk_box_t _b_x839, kk_box_t _b_x840, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x1719;
  kk_std_data_hashset__hash_set _x_x1720 = kk_std_data_hashset__hash_set_unbox(_b_x837, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/
  _x_x1719 = kk_std_data_hashset_contains(_x_x1720, _b_x838, kk_std_data_hashset_new_test_hash_set_fun1721(_b_x839, _ctx), kk_std_data_hashset_new_test_hash_set_fun1724(_b_x840, _ctx), _ctx); /*bool*/
  return kk_bool_box(_x_x1719);
}


// lift anonymous function
struct kk_std_data_hashset_test_hash_set_fun1727__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashset_test_hash_set_fun1727(kk_function_t _fself, kk_box_t _b_x854, kk_box_t _b_x855, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_new_test_hash_set_fun1727(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset_test_hash_set_fun1727, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashset_test_hash_set_fun1727(kk_function_t _fself, kk_box_t _b_x854, kk_box_t _b_x855, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x1728;
  kk_integer_t _x_x1729 = kk_integer_unbox(_b_x854, _ctx); /*int*/
  int64_t _x_x1730 = kk_int64_unbox(_b_x855, KK_OWNED, _ctx); /*int64*/
  _x_x1728 = kk_std_data_hash_int_fs_hash(_x_x1729, _x_x1730, _ctx); /*int*/
  return kk_integer_box(_x_x1728, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset_test_hash_set_fun1731__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashset_test_hash_set_fun1731(kk_function_t _fself, kk_box_t _b_x859, kk_box_t _b_x860, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_new_test_hash_set_fun1731(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset_test_hash_set_fun1731, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashset_test_hash_set_fun1731(kk_function_t _fself, kk_box_t _b_x859, kk_box_t _b_x860, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x1732;
  kk_integer_t _brw_x898 = kk_integer_unbox(_b_x859, _ctx); /*int*/;
  kk_integer_t _brw_x897 = kk_integer_unbox(_b_x860, _ctx); /*int*/;
  bool _brw_x899 = kk_integer_eq_borrow(_brw_x898,_brw_x897,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x898, _ctx);
  kk_integer_drop(_brw_x897, _ctx);
  _x_x1732 = _brw_x899; /*bool*/
  return kk_bool_box(_x_x1732);
}
static kk_box_t kk_std_data_hashset_test_hash_set_fun1705(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_data_hashset_test_hash_set_fun1705__t* _self = kk_function_as(struct kk_std_data_hashset_test_hash_set_fun1705__t*, _fself, _ctx);
  kk_std_data_hashset__hash_set hs = _self->hs; /* std/data/hashset/hash-set<int> */
  kk_drop_match(_self, {kk_std_data_hashset__hash_set_dup(hs, _ctx);}, {}, _ctx)
  kk_std_data_hashset__hash_set hs_sq_;
  kk_box_t _x_x1706 = kk_std_core_hnd__open_none0(kk_std_data_hashset_new_test_hash_set_fun1707(hs, _ctx), _ctx); /*1000*/
  hs_sq_ = kk_std_data_hashset__hash_set_unbox(_x_x1706, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/
  return kk_std_core_hnd__open_none4(kk_std_data_hashset_new_test_hash_set_fun1718(_ctx), kk_std_data_hashset__hash_set_box(hs_sq_, _ctx), kk_integer_box(kk_integer_from_small(2), _ctx), kk_function_box(kk_std_data_hashset_new_test_hash_set_fun1727(_ctx), _ctx), kk_function_box(kk_std_data_hashset_new_test_hash_set_fun1731(_ctx), _ctx), _ctx);
}


// lift anonymous function
struct kk_std_data_hashset_test_hash_set_fun1733__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashset_test_hash_set_fun1733(kk_function_t _fself, kk_box_t _b_x869, kk_box_t _b_x870, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_new_test_hash_set_fun1733(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset_test_hash_set_fun1733, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashset_test_hash_set_fun1733(kk_function_t _fself, kk_box_t _b_x869, kk_box_t _b_x870, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x1734 = kk_bool_unbox(_b_x869); /*bool*/
  bool _x_x1735 = kk_bool_unbox(_b_x870); /*bool*/
  return kk_std_core_bool__lp__eq__eq__rp_(_x_x1734, _x_x1735, _ctx);
}


// lift anonymous function
struct kk_std_data_hashset_test_hash_set_fun1736__t {
  struct kk_function_s _base;
};
static kk_string_t kk_std_data_hashset_test_hash_set_fun1736(kk_function_t _fself, kk_box_t _b_x871, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_new_test_hash_set_fun1736(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset_test_hash_set_fun1736, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_std_data_hashset_test_hash_set_fun1736(kk_function_t _fself, kk_box_t _b_x871, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x1737 = kk_bool_unbox(_b_x871); /*bool*/
  return kk_std_core_bool_show(_x_x1737, _ctx);
}
static kk_unit_t kk_std_data_hashset_test_hash_set_fun1697(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_data_hashset__hash_set hs;
  kk_box_t _x_x1698;
  kk_box_t _x_x1703;
  kk_std_core_types__optional _x_x1704 = kk_std_core_types__new_Optional(kk_integer_box(kk_integer_from_small(1), _ctx), _ctx); /*? 1003*/
  _x_x1703 = kk_std_core_types__optional_box(_x_x1704, _ctx); /*1000*/
  _x_x1698 = kk_std_core_hnd__open_none1(kk_std_data_hashset_new_test_hash_set_fun1699(_ctx), _x_x1703, _ctx); /*1001*/
  hs = kk_std_data_hashset__hash_set_unbox(_x_x1698, KK_OWNED, _ctx); /*std/data/hashset/hash-set<int>*/
  kk_string_t _x_x1738;
  kk_define_string_literal(, _s_x1739, 3, "208", _ctx)
  _x_x1738 = kk_string_dup(_s_x1739, _ctx); /*string*/
  kk_string_t _x_x1740;
  kk_define_string_literal(, _s_x1741, 16, "std/data/hashset", _ctx)
  _x_x1740 = kk_string_dup(_s_x1741, _ctx); /*string*/
  kk_std_test_test_expect(kk_bool_box(true), kk_std_data_hashset_new_test_hash_set_fun1705(hs, _ctx), kk_std_core_types__new_None(_ctx), kk_std_core_types__new_None(_ctx), kk_std_data_hashset_new_test_hash_set_fun1733(_ctx), kk_std_data_hashset_new_test_hash_set_fun1736(_ctx), _x_x1738, _x_x1740, _ctx); return kk_Unit;
}
static kk_unit_t kk_std_data_hashset_test_hash_set_fun1696(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x1742;
  kk_define_string_literal(, _s_x1743, 16, "std/data/hashset", _ctx)
  _x_x1742 = kk_string_dup(_s_x1743, _ctx); /*string*/
  kk_string_t _x_x1744;
  kk_define_string_literal(, _s_x1745, 3, "206", _ctx)
  _x_x1744 = kk_string_dup(_s_x1745, _ctx); /*string*/
  kk_std_test_test_test__(kk_std_data_hashset_new_test_hash_set_fun1697(_ctx), _x_x1742, _x_x1744, _ctx); return kk_Unit;
}


// lift anonymous function
struct kk_std_data_hashset_test_hash_set_fun1751__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashset_test_hash_set_fun1751(kk_function_t _fself, kk_box_t _b_x890, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashset_new_test_hash_set_fun1751(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset_test_hash_set_fun1751, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashset_test_hash_set_fun1751(kk_function_t _fself, kk_box_t _b_x890, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x1752 = kk_Unit;
  kk_unit_t _x_x1753 = kk_Unit;
  kk_unit_unbox(_b_x890);
  kk_std_data_hashset__mlift_test_hash_set_10249(_x_x1753, _ctx);
  return kk_unit_box(_x_x1752);
}
static kk_unit_t kk_std_data_hashset_test_hash_set_fun1693(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t x_10320 = kk_Unit;
  kk_string_t _x_x1694;
  kk_define_string_literal(, _s_x1695, 6, "insert", _ctx)
  _x_x1694 = kk_string_dup(_s_x1695, _ctx); /*string*/
  kk_string_t _x_x1746;
  kk_define_string_literal(, _s_x1747, 16, "std/data/hashset", _ctx)
  _x_x1746 = kk_string_dup(_s_x1747, _ctx); /*string*/
  kk_string_t _x_x1748;
  kk_define_string_literal(, _s_x1749, 3, "206", _ctx)
  _x_x1748 = kk_string_dup(_s_x1749, _ctx); /*string*/
  kk_std_test_test_istest_fs_scope(_x_x1694, true, kk_std_data_hashset_new_test_hash_set_fun1696(_ctx), _x_x1746, _x_x1748, _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1750 = kk_std_core_hnd_yield_extend(kk_std_data_hashset_new_test_hash_set_fun1751(_ctx), _ctx); /*3003*/
    kk_unit_unbox(_x_x1750); return kk_Unit;
  }
  {
    kk_std_data_hashset__mlift_test_hash_set_10249(x_10320, _ctx); return kk_Unit;
  }
}

kk_unit_t kk_std_data_hashset_test_hash_set(kk_context_t* _ctx) { /* () -> <pure,console/console> () */ 
  kk_string_t _x_x1691;
  kk_define_string_literal(, _s_x1692, 8, "hash-set", _ctx)
  _x_x1691 = kk_string_dup(_s_x1692, _ctx); /*string*/
  kk_string_t _x_x1754;
  kk_define_string_literal(, _s_x1755, 16, "std/data/hashset", _ctx)
  _x_x1754 = kk_string_dup(_s_x1755, _ctx); /*string*/
  kk_string_t _x_x1756;
  kk_define_string_literal(, _s_x1757, 3, "205", _ctx)
  _x_x1756 = kk_string_dup(_s_x1757, _ctx); /*string*/
  kk_std_test_test_group(_x_x1691, kk_std_data_hashset_new_test_hash_set_fun1693(_ctx), kk_std_core_types__new_None(_ctx), _x_x1754, _x_x1756, _ctx); return kk_Unit;
}

// initialization
void kk_std_data_hashset__init(kk_context_t* _ctx){
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
  kk_std_test_test__init(_ctx);
  kk_std_test_bench__init(_ctx);
  kk_std_core__init(_ctx);
  kk_std_num_int64__init(_ctx);
  kk_std_test__init(_ctx);
  kk_std_num_random__init(_ctx);
  kk_std_core_dash_extras__init(_ctx);
  kk_std_data_hash__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
  {
    kk_std_data_hashset_int_hash = kk_std_data_hashset_new_int_hash_fun1091(_ctx); /*(int, int64) -> int*/
  }
  {
    kk_std_data_hashset_char_hash = kk_std_data_hashset_new_char_hash_fun1094(_ctx); /*(char, int64) -> int*/
  }
  {
    kk_std_data_hashset_bool_hash = kk_std_data_hashset_new_bool_hash_fun1097(_ctx); /*(bool, int64) -> int*/
  }
  {
    kk_std_data_hashset_string_hash = kk_std_data_hashset_new_string_hash_fun1100(_ctx); /*(string, int64) -> int*/
  }
}

// termination
void kk_std_data_hashset__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_function_drop(kk_std_data_hashset_string_hash, _ctx);
  kk_function_drop(kk_std_data_hashset_bool_hash, _ctx);
  kk_function_drop(kk_std_data_hashset_char_hash, _ctx);
  kk_function_drop(kk_std_data_hashset_int_hash, _ctx);
  kk_std_data_hash__done(_ctx);
  kk_std_core_dash_extras__done(_ctx);
  kk_std_num_random__done(_ctx);
  kk_std_test__done(_ctx);
  kk_std_num_int64__done(_ctx);
  kk_std_core__done(_ctx);
  kk_std_test_bench__done(_ctx);
  kk_std_test_test__done(_ctx);
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
