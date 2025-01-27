// Koka generated module: std/data/hashmap, koka version: 3.1.2, platform: 64-bit
#include "std_data_hashmap.h"

kk_std_data_hashmap__hash_map kk_std_data_hashmap_hash_map_fs__copy(kk_std_data_hashmap__hash_map _this, kk_std_core_types__optional data, kk_std_core_types__optional amount, kk_std_core_types__optional seed, kk_context_t* _ctx) { /* forall<a,b> (hash-map<a,b>, data : ? (vector<list<(a, b)>>), amount : ? int, seed : ? int64) -> hash-map<a,b> */ 
  kk_vector_t _x_x1416;
  if (kk_std_core_types__is_Optional(data, _ctx)) {
    kk_box_t _box_x0 = data._cons._Optional.value;
    kk_vector_t _uniq_data_425 = kk_vector_unbox(_box_x0, _ctx);
    kk_vector_dup(_uniq_data_425, _ctx);
    kk_std_core_types__optional_drop(data, _ctx);
    _x_x1416 = _uniq_data_425; /*vector<list<(470, 471)>>*/
  }
  else {
    kk_std_core_types__optional_drop(data, _ctx);
    {
      struct kk_std_data_hashmap_Hash_map* _con_x1417 = kk_std_data_hashmap__as_Hash_map(_this, _ctx);
      kk_vector_t _x = _con_x1417->data;
      kk_vector_dup(_x, _ctx);
      _x_x1416 = _x; /*vector<list<(470, 471)>>*/
    }
  }
  kk_integer_t _x_x1418;
  if (kk_std_core_types__is_Optional(amount, _ctx)) {
    kk_box_t _box_x1 = amount._cons._Optional.value;
    kk_integer_t _uniq_amount_438 = kk_integer_unbox(_box_x1, _ctx);
    kk_integer_dup(_uniq_amount_438, _ctx);
    kk_std_core_types__optional_drop(amount, _ctx);
    _x_x1418 = _uniq_amount_438; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(amount, _ctx);
    {
      struct kk_std_data_hashmap_Hash_map* _con_x1419 = kk_std_data_hashmap__as_Hash_map(_this, _ctx);
      kk_integer_t _x_0 = _con_x1419->amount;
      kk_integer_dup(_x_0, _ctx);
      _x_x1418 = _x_0; /*int*/
    }
  }
  int64_t _x_x1420;
  if (kk_std_core_types__is_Optional(seed, _ctx)) {
    kk_box_t _box_x2 = seed._cons._Optional.value;
    int64_t _uniq_seed_451 = kk_int64_unbox(_box_x2, KK_BORROWED, _ctx);
    kk_std_core_types__optional_drop(seed, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(2)), _ctx);
    _x_x1420 = _uniq_seed_451; /*int64*/
  }
  else {
    kk_std_core_types__optional_drop(seed, _ctx);
    {
      struct kk_std_data_hashmap_Hash_map* _con_x1421 = kk_std_data_hashmap__as_Hash_map(_this, _ctx);
      kk_vector_t _pat_0_2 = _con_x1421->data;
      kk_integer_t _pat_1_3 = _con_x1421->amount;
      int64_t _x_1 = _con_x1421->seed;
      if kk_likely(kk_datatype_ptr_is_unique(_this, _ctx)) {
        kk_integer_drop(_pat_1_3, _ctx);
        kk_vector_drop(_pat_0_2, _ctx);
        kk_datatype_ptr_free(_this, _ctx);
      }
      else {
        kk_datatype_ptr_decref(_this, _ctx);
      }
      _x_x1420 = _x_1; /*int64*/
    }
  }
  return kk_std_data_hashmap__new_Hash_map(kk_reuse_null, 0, _x_x1416, _x_x1418, _x_x1420, _ctx);
}
 
// monadic lift

kk_std_data_hashmap__hash_map kk_std_data_hashmap_random_fs__mlift_hash_map_10297(kk_std_core_types__optional capacity, int64_t _y_x10095, kk_context_t* _ctx) { /* forall<a,b> (capacity : ? int, int64) -> std/num/random/random hash-map<a,b> */ 
  kk_integer_t n_10168;
  bool _match_x1379;
  kk_integer_t _brw_x1380;
  if (kk_std_core_types__is_Optional(capacity, _ctx)) {
    kk_box_t _box_x3 = capacity._cons._Optional.value;
    kk_integer_t _uniq_capacity_484 = kk_integer_unbox(_box_x3, _ctx);
    kk_integer_dup(_uniq_capacity_484, _ctx);
    _brw_x1380 = _uniq_capacity_484; /*int*/
  }
  else {
    _brw_x1380 = kk_integer_from_small(1); /*int*/
  }
  bool _brw_x1381 = kk_integer_gt_borrow(_brw_x1380,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x1380, _ctx);
  _match_x1379 = _brw_x1381; /*bool*/
  if (_match_x1379) {
    if (kk_std_core_types__is_Optional(capacity, _ctx)) {
      kk_box_t _box_x4 = capacity._cons._Optional.value;
      kk_integer_t _uniq_capacity_484_0 = kk_integer_unbox(_box_x4, _ctx);
      kk_integer_dup(_uniq_capacity_484_0, _ctx);
      kk_std_core_types__optional_drop(capacity, _ctx);
      n_10168 = _uniq_capacity_484_0; /*int*/
    }
    else {
      kk_std_core_types__optional_drop(capacity, _ctx);
      n_10168 = kk_integer_from_small(1); /*int*/
    }
  }
  else {
    kk_std_core_types__optional_drop(capacity, _ctx);
    n_10168 = kk_integer_from_small(1); /*int*/
  }
  kk_ssize_t _b_x5_7 = kk_std_core_int_ssize__t(n_10168, _ctx); /*ssize_t*/;
  kk_vector_t _x_x1422 = kk_std_core_vector_vector_alloc(_b_x5_7, kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx), _ctx); /*vector<3001>*/
  return kk_std_data_hashmap__new_Hash_map(kk_reuse_null, 0, _x_x1422, kk_integer_from_small(0), _y_x10095, _ctx);
}
 
// Creates a hash-map with a specified inital `capacity`.
// If zero then the hash-map will set capacity to 1.
// Random effect is needed to initalize the seed.


// lift anonymous function
struct kk_std_data_hashmap_random_fs_hash_map_fun1424__t {
  struct kk_function_s _base;
  kk_std_core_types__optional capacity;
};
static kk_box_t kk_std_data_hashmap_random_fs_hash_map_fun1424(kk_function_t _fself, kk_box_t _b_x10, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_random_fs_new_hash_map_fun1424(kk_std_core_types__optional capacity, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_random_fs_hash_map_fun1424__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_random_fs_hash_map_fun1424__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_random_fs_hash_map_fun1424, kk_context());
  _self->capacity = capacity;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashmap_random_fs_hash_map_fun1424(kk_function_t _fself, kk_box_t _b_x10, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_random_fs_hash_map_fun1424__t* _self = kk_function_as(struct kk_std_data_hashmap_random_fs_hash_map_fun1424__t*, _fself, _ctx);
  kk_std_core_types__optional capacity = _self->capacity; /* ? int */
  kk_drop_match(_self, {kk_std_core_types__optional_dup(capacity, _ctx);}, {}, _ctx)
  int64_t _y_x10095_18 = kk_int64_unbox(_b_x10, KK_OWNED, _ctx); /*int64*/;
  kk_std_data_hashmap__hash_map _x_x1425 = kk_std_data_hashmap_random_fs__mlift_hash_map_10297(capacity, _y_x10095_18, _ctx); /*std/data/hashmap/hash-map<539,540>*/
  return kk_std_data_hashmap__hash_map_box(_x_x1425, _ctx);
}

kk_std_data_hashmap__hash_map kk_std_data_hashmap_random_fs_hash_map(kk_std_core_types__optional capacity, kk_context_t* _ctx) { /* forall<a,b> (capacity : ? int) -> std/num/random/random hash-map<a,b> */ 
  int64_t x_10329 = kk_std_num_random_random_int64(_ctx); /*int64*/;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1423 = kk_std_core_hnd_yield_extend(kk_std_data_hashmap_random_fs_new_hash_map_fun1424(capacity, _ctx), _ctx); /*3003*/
    return kk_std_data_hashmap__hash_map_unbox(_x_x1423, KK_OWNED, _ctx);
  }
  {
    kk_integer_t n_10168;
    bool _match_x1376;
    kk_integer_t _brw_x1377;
    if (kk_std_core_types__is_Optional(capacity, _ctx)) {
      kk_box_t _box_x11 = capacity._cons._Optional.value;
      kk_integer_t _uniq_capacity_484 = kk_integer_unbox(_box_x11, _ctx);
      kk_integer_dup(_uniq_capacity_484, _ctx);
      _brw_x1377 = _uniq_capacity_484; /*int*/
    }
    else {
      _brw_x1377 = kk_integer_from_small(1); /*int*/
    }
    bool _brw_x1378 = kk_integer_gt_borrow(_brw_x1377,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    kk_integer_drop(_brw_x1377, _ctx);
    _match_x1376 = _brw_x1378; /*bool*/
    if (_match_x1376) {
      if (kk_std_core_types__is_Optional(capacity, _ctx)) {
        kk_box_t _box_x12 = capacity._cons._Optional.value;
        kk_integer_t _uniq_capacity_484_0 = kk_integer_unbox(_box_x12, _ctx);
        kk_integer_dup(_uniq_capacity_484_0, _ctx);
        kk_std_core_types__optional_drop(capacity, _ctx);
        n_10168 = _uniq_capacity_484_0; /*int*/
      }
      else {
        kk_std_core_types__optional_drop(capacity, _ctx);
        n_10168 = kk_integer_from_small(1); /*int*/
      }
    }
    else {
      kk_std_core_types__optional_drop(capacity, _ctx);
      n_10168 = kk_integer_from_small(1); /*int*/
    }
    kk_ssize_t _b_x13_16 = kk_std_core_int_ssize__t(n_10168, _ctx); /*ssize_t*/;
    kk_vector_t _x_x1426 = kk_std_core_vector_vector_alloc(_b_x13_16, kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx), _ctx); /*vector<3001>*/
    return kk_std_data_hashmap__new_Hash_map(kk_reuse_null, 0, _x_x1426, kk_integer_from_small(0), x_10329, _ctx);
  }
}
 
// Creates a hash-map with a specified inital `capacity`.
// If zero then the hash-map will set capacity to 1.
// The seed is initalized using the thread's id.

kk_std_data_hashmap__hash_map kk_std_data_hashmap_thread_fs_hash_map(kk_std_core_types__optional capacity, kk_context_t* _ctx) { /* forall<a,b> (capacity : ? int) -> hash-map<a,b> */ 
  kk_integer_t n_10003;
  bool _match_x1372;
  kk_integer_t _brw_x1373;
  if (kk_std_core_types__is_Optional(capacity, _ctx)) {
    kk_box_t _box_x19 = capacity._cons._Optional.value;
    kk_integer_t _uniq_capacity_553 = kk_integer_unbox(_box_x19, _ctx);
    kk_integer_dup(_uniq_capacity_553, _ctx);
    _brw_x1373 = _uniq_capacity_553; /*int*/
  }
  else {
    _brw_x1373 = kk_integer_from_small(1); /*int*/
  }
  bool _brw_x1374 = kk_integer_gt_borrow(_brw_x1373,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x1373, _ctx);
  _match_x1372 = _brw_x1374; /*bool*/
  if (_match_x1372) {
    if (kk_std_core_types__is_Optional(capacity, _ctx)) {
      kk_box_t _box_x20 = capacity._cons._Optional.value;
      kk_integer_t _uniq_capacity_553_0 = kk_integer_unbox(_box_x20, _ctx);
      kk_integer_dup(_uniq_capacity_553_0, _ctx);
      kk_std_core_types__optional_drop(capacity, _ctx);
      n_10003 = _uniq_capacity_553_0; /*int*/
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
  kk_ssize_t _b_x21_23 = kk_std_core_int_ssize__t(n_10003, _ctx); /*ssize_t*/;
  kk_vector_t _x_x1427 = kk_std_core_vector_vector_alloc(_b_x21_23, kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx), _ctx); /*vector<3001>*/
  return kk_std_data_hashmap__new_Hash_map(kk_reuse_null, 0, _x_x1427, kk_integer_from_small(0), kk_std_data_hash_thread_fs_seed, _ctx);
}
 
// Creates a hash-map with a specified inital `capacity` and a user defined `seed`.
// If zero then the hash-map will set capacity to 1.

kk_std_data_hashmap__hash_map kk_std_data_hashmap_random_fs_hash_map_seeded(int64_t seed, kk_std_core_types__optional capacity, kk_context_t* _ctx) { /* forall<a,b> (seed : int64, capacity : ? int) -> hash-map<a,b> */ 
  kk_integer_t n_10005;
  bool _match_x1369;
  kk_integer_t _brw_x1370;
  if (kk_std_core_types__is_Optional(capacity, _ctx)) {
    kk_box_t _box_x25 = capacity._cons._Optional.value;
    kk_integer_t _uniq_capacity_620 = kk_integer_unbox(_box_x25, _ctx);
    kk_integer_dup(_uniq_capacity_620, _ctx);
    _brw_x1370 = _uniq_capacity_620; /*int*/
  }
  else {
    _brw_x1370 = kk_integer_from_small(1); /*int*/
  }
  bool _brw_x1371 = kk_integer_gt_borrow(_brw_x1370,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x1370, _ctx);
  _match_x1369 = _brw_x1371; /*bool*/
  if (_match_x1369) {
    if (kk_std_core_types__is_Optional(capacity, _ctx)) {
      kk_box_t _box_x26 = capacity._cons._Optional.value;
      kk_integer_t _uniq_capacity_620_0 = kk_integer_unbox(_box_x26, _ctx);
      kk_integer_dup(_uniq_capacity_620_0, _ctx);
      kk_std_core_types__optional_drop(capacity, _ctx);
      n_10005 = _uniq_capacity_620_0; /*int*/
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
  kk_vector_t _x_x1428 = kk_std_core_vector_vector_alloc(_b_x27_29, kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx), _ctx); /*vector<3001>*/
  return kk_std_data_hashmap__new_Hash_map(kk_reuse_null, 0, _x_x1428, kk_integer_from_small(0), seed, _ctx);
}
 
// Fetches the amount of items in the hash-map

kk_integer_t kk_std_data_hashmap_length(kk_std_data_hashmap__hash_map hm, kk_context_t* _ctx) { /* forall<a,b> (hm : hash-map<a,b>) -> int */ 
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1429 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    kk_vector_t _pat_0 = _con_x1429->data;
    kk_integer_t _x = _con_x1429->amount;
    if kk_likely(kk_datatype_ptr_is_unique(hm, _ctx)) {
      kk_vector_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(hm, _ctx);
    }
    else {
      kk_integer_dup(_x, _ctx);
      kk_datatype_ptr_decref(hm, _ctx);
    }
    return _x;
  }
}
 
// This helper function either clears out a vector if it is unique or creates a new vector if it isn't unique.


// lift anonymous function
struct kk_std_data_hashmap_helper_fs_resize_fun1432__t {
  struct kk_function_s _base;
  kk_vector_t v;
};
static kk_unit_t kk_std_data_hashmap_helper_fs_resize_fun1432(kk_function_t _fself, kk_integer_t i, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_helper_fs_new_resize_fun1432(kk_vector_t v, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_helper_fs_resize_fun1432__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_helper_fs_resize_fun1432__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_helper_fs_resize_fun1432, kk_context());
  _self->v = v;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_std_data_hashmap_helper_fs_resize_fun1432(kk_function_t _fself, kk_integer_t i, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_helper_fs_resize_fun1432__t* _self = kk_function_as(struct kk_std_data_hashmap_helper_fs_resize_fun1432__t*, _fself, _ctx);
  kk_vector_t v = _self->v; /* vector<list<(803, 804)>> */
  kk_drop_match(_self, {kk_vector_dup(v, _ctx);}, {}, _ctx)
  kk_unit_t __ = kk_Unit;
  kk_ssize_t _own_x1366;
  kk_integer_t _x_x1433 = kk_integer_dup(i, _ctx); /*int*/
  _own_x1366 = kk_std_core_int_ssize__t(_x_x1433, _ctx); /*ssize_t*/
  kk_vector_dup(v, kk_context()); kk_box_drop(kk_vector_at_borrow(v, _own_x1366, kk_context()), kk_context()); kk_vector_unsafe_assign(v, _own_x1366, kk_box_null(), kk_context());
  kk_ssize_t _b_x32_35 = kk_std_core_int_ssize__t(i, _ctx); /*ssize_t*/;
  kk_vector_unsafe_assign(v,_b_x32_35,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); return kk_Unit;
}

kk_vector_t kk_std_data_hashmap_helper_fs_resize(kk_vector_t v, kk_context_t* _ctx) { /* forall<a,b> (v : vector<list<(a, b)>>) -> vector<list<(a, b)>> */ 
  bool _match_x1364 = kk_datatype_is_unique(v, kk_context()); /*bool*/;
  if (_match_x1364) {
    kk_unit_t ___0 = kk_Unit;
    kk_integer_t _brw_x1367;
    kk_ssize_t _x_x1430 = kk_vector_len_borrow(v,kk_context()); /*ssize_t*/
    _brw_x1367 = kk_integer_from_ssize_t(_x_x1430,kk_context()); /*int*/
    kk_unit_t _brw_x1368 = kk_Unit;
    kk_function_t _x_x1431;
    kk_vector_dup(v, _ctx);
    _x_x1431 = kk_std_data_hashmap_helper_fs_new_resize_fun1432(v, _ctx); /*(i : int) -> ()*/
    kk_std_core_for(_brw_x1367, _x_x1431, _ctx);
    kk_integer_drop(_brw_x1367, _ctx);
    _brw_x1368;
    return v;
  }
  {
    kk_integer_t n_10009;
    kk_ssize_t _x_x1434;
    kk_ssize_t _brw_x1365 = kk_vector_len_borrow(v,kk_context()); /*ssize_t*/;
    kk_vector_drop(v, _ctx);
    _x_x1434 = _brw_x1365; /*ssize_t*/
    n_10009 = kk_integer_from_ssize_t(_x_x1434,kk_context()); /*int*/
    kk_ssize_t _b_x37_39 = kk_std_core_int_ssize__t(n_10009, _ctx); /*ssize_t*/;
    return kk_std_core_vector_vector_alloc(_b_x37_39, kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx), _ctx);
  }
}
 
// Removes all buckets from the hash-map, effectively clearing the hash-map.


// lift anonymous function
struct kk_std_data_hashmap_clear_fun1438__t {
  struct kk_function_s _base;
  kk_vector_t data;
};
static kk_unit_t kk_std_data_hashmap_clear_fun1438(kk_function_t _fself, kk_integer_t x, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_new_clear_fun1438(kk_vector_t data, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_clear_fun1438__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_clear_fun1438__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_clear_fun1438, kk_context());
  _self->data = data;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_std_data_hashmap_clear_fun1438(kk_function_t _fself, kk_integer_t x, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_clear_fun1438__t* _self = kk_function_as(struct kk_std_data_hashmap_clear_fun1438__t*, _fself, _ctx);
  kk_vector_t data = _self->data; /* vector<list<(934, 935)>> */
  kk_drop_match(_self, {kk_vector_dup(data, _ctx);}, {}, _ctx)
  kk_unit_t __ = kk_Unit;
  kk_ssize_t _own_x1361;
  kk_integer_t _x_x1439 = kk_integer_dup(x, _ctx); /*int*/
  _own_x1361 = kk_std_core_int_ssize__t(_x_x1439, _ctx); /*ssize_t*/
  kk_vector_dup(data, kk_context()); kk_box_drop(kk_vector_at_borrow(data, _own_x1361, kk_context()), kk_context()); kk_vector_unsafe_assign(data, _own_x1361, kk_box_null(), kk_context());
  kk_ssize_t _b_x42_45 = kk_std_core_int_ssize__t(x, _ctx); /*ssize_t*/;
  kk_vector_unsafe_assign(data,_b_x42_45,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); return kk_Unit;
}

kk_std_data_hashmap__hash_map kk_std_data_hashmap_clear(kk_std_data_hashmap__hash_map hm, kk_context_t* _ctx) { /* forall<a,b> (hm : hash-map<a,b>) -> hash-map<a,b> */ 
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1435 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    kk_vector_t data = _con_x1435->data;
    kk_integer_t _pat_0 = _con_x1435->amount;
    int64_t seed = _con_x1435->seed;
    kk_reuse_t _ru_x1384 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(hm, _ctx)) {
      kk_integer_drop(_pat_0, _ctx);
      _ru_x1384 = (kk_datatype_ptr_reuse(hm, _ctx));
    }
    else {
      kk_vector_dup(data, _ctx);
      kk_datatype_ptr_decref(hm, _ctx);
    }
    bool _match_x1359 = kk_datatype_is_unique(data, kk_context()); /*bool*/;
    if (_match_x1359) {
      kk_unit_t ___0 = kk_Unit;
      kk_integer_t _brw_x1362;
      kk_ssize_t _x_x1436 = kk_vector_len_borrow(data,kk_context()); /*ssize_t*/
      _brw_x1362 = kk_integer_from_ssize_t(_x_x1436,kk_context()); /*int*/
      kk_unit_t _brw_x1363 = kk_Unit;
      kk_function_t _x_x1437;
      kk_vector_dup(data, _ctx);
      _x_x1437 = kk_std_data_hashmap_new_clear_fun1438(data, _ctx); /*(x : int) -> ()*/
      kk_std_core_for(_brw_x1362, _x_x1437, _ctx);
      kk_integer_drop(_brw_x1362, _ctx);
      _brw_x1363;
      return kk_std_data_hashmap__new_Hash_map(_ru_x1384, 0, data, kk_integer_from_small(0), seed, _ctx);
    }
    {
      kk_integer_t n_10013;
      kk_ssize_t _x_x1440;
      kk_ssize_t _brw_x1360 = kk_vector_len_borrow(data,kk_context()); /*ssize_t*/;
      kk_vector_drop(data, _ctx);
      _x_x1440 = _brw_x1360; /*ssize_t*/
      n_10013 = kk_integer_from_ssize_t(_x_x1440,kk_context()); /*int*/
      kk_ssize_t _b_x47_49 = kk_std_core_int_ssize__t(n_10013, _ctx); /*ssize_t*/;
      kk_vector_t _x_x1441 = kk_std_core_vector_vector_alloc(_b_x47_49, kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx), _ctx); /*vector<3001>*/
      return kk_std_data_hashmap__new_Hash_map(_ru_x1384, 0, _x_x1441, kk_integer_from_small(0), seed, _ctx);
    }
  }
}
 
// Invoke a function `f` for each key-value of the hash-map.


// lift anonymous function
struct kk_std_data_hashmap_foreach_fun1444__t {
  struct kk_function_s _base;
  kk_function_t f;
  kk_std_data_hashmap__hash_map hm;
};
static kk_unit_t kk_std_data_hashmap_foreach_fun1444(kk_function_t _fself, kk_integer_t i, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_new_foreach_fun1444(kk_function_t f, kk_std_data_hashmap__hash_map hm, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_foreach_fun1444__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_foreach_fun1444__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_foreach_fun1444, kk_context());
  _self->f = f;
  _self->hm = hm;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap_foreach_fun1447__t {
  struct kk_function_s _base;
  kk_function_t f;
};
static kk_unit_t kk_std_data_hashmap_foreach_fun1447(kk_function_t _fself, kk_box_t _b_x55, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_new_foreach_fun1447(kk_function_t f, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_foreach_fun1447__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_foreach_fun1447__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_foreach_fun1447, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_std_data_hashmap_foreach_fun1447(kk_function_t _fself, kk_box_t _b_x55, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_foreach_fun1447__t* _self = kk_function_as(struct kk_std_data_hashmap_foreach_fun1447__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (1038, 1039) -> 1037 () */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _match_x1352 = kk_std_core_types__tuple2_unbox(_b_x55, KK_OWNED, _ctx); /*(1038, 1039)*/;
  {
    kk_box_t key = _match_x1352.fst;
    kk_box_t value = _match_x1352.snd;
    kk_function_call(kk_unit_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), f, (f, key, value, _ctx), _ctx); return kk_Unit;
  }
}
static kk_unit_t kk_std_data_hashmap_foreach_fun1444(kk_function_t _fself, kk_integer_t i, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_foreach_fun1444__t* _self = kk_function_as(struct kk_std_data_hashmap_foreach_fun1444__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (1038, 1039) -> 1037 () */
  kk_std_data_hashmap__hash_map hm = _self->hm; /* std/data/hashmap/hash-map<1038,1039> */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);kk_std_data_hashmap__hash_map_dup(hm, _ctx);}, {}, _ctx)
  kk_ssize_t _b_x52_59 = kk_std_core_int_ssize__t(i, _ctx); /*ssize_t*/;
  kk_std_core_types__list _b_x53_56;
  kk_box_t _x_x1445;
  kk_vector_t _brw_x1353;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1446 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    kk_vector_t _x_0 = _con_x1446->data;
    kk_integer_t _pat_0_0 = _con_x1446->amount;
    if kk_likely(kk_datatype_ptr_is_unique(hm, _ctx)) {
      kk_integer_drop(_pat_0_0, _ctx);
      kk_datatype_ptr_free(hm, _ctx);
    }
    else {
      kk_vector_dup(_x_0, _ctx);
      kk_datatype_ptr_decref(hm, _ctx);
    }
    _brw_x1353 = _x_0; /*vector<list<(1038, 1039)>>*/
  }
  kk_box_t _brw_x1354 = kk_vector_at_borrow(_brw_x1353,_b_x52_59,kk_context()); /*3029*/;
  kk_vector_drop(_brw_x1353, _ctx);
  _x_x1445 = _brw_x1354; /*3029*/
  _b_x53_56 = kk_std_core_types__list_unbox(_x_x1445, KK_OWNED, _ctx); /*list<(1038, 1039)>*/
  kk_std_core_list_foreach(_b_x53_56, kk_std_data_hashmap_new_foreach_fun1447(f, _ctx), _ctx); return kk_Unit;
}

kk_unit_t kk_std_data_hashmap_foreach(kk_std_data_hashmap__hash_map hm, kk_function_t f, kk_context_t* _ctx) { /* forall<e,a,b> (hm : hash-map<a,b>, f : (a, b) -> e ()) -> e () */ 
  kk_integer_t _brw_x1357;
  kk_ssize_t _x_x1442;
  kk_vector_t _brw_x1355;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1443 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    kk_vector_t _x = _con_x1443->data;
    kk_vector_dup(_x, _ctx);
    _brw_x1355 = _x; /*vector<list<(1038, 1039)>>*/
  }
  kk_ssize_t _brw_x1356 = kk_vector_len_borrow(_brw_x1355,kk_context()); /*ssize_t*/;
  kk_vector_drop(_brw_x1355, _ctx);
  _x_x1442 = _brw_x1356; /*ssize_t*/
  _brw_x1357 = kk_integer_from_ssize_t(_x_x1442,kk_context()); /*int*/
  kk_unit_t _brw_x1358 = kk_Unit;
  kk_std_core_for(_brw_x1357, kk_std_data_hashmap_new_foreach_fun1444(f, hm, _ctx), _ctx);
  kk_integer_drop(_brw_x1357, _ctx);
  _brw_x1358; return kk_Unit;
}
 
// This helper will use `buckets` to allow for a `div`-less use of `unsafe-set` to set values in vector `v`.

kk_vector_t kk_std_data_hashmap_helper_fs_rehash(kk_vector_t v, kk_std_core_types__list buckets, int64_t seed, kk_function_t _implicit_fs_hash, kk_context_t* _ctx) { /* forall<a,b> (v : vector<list<(a, b)>>, buckets : list<(a, b)>, seed : int64, ?hash : (a, int64) -> int) -> vector<list<(a, b)>> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Nil(buckets, _ctx)) {
    kk_function_drop(_implicit_fs_hash, _ctx);
    return v;
  }
  {
    struct kk_std_core_types_Cons* _con_x1448 = kk_std_core_types__as_Cons(buckets, _ctx);
    kk_box_t _box_x61 = _con_x1448->head;
    kk_std_core_types__tuple2 _pat_1 = kk_std_core_types__tuple2_unbox(_box_x61, KK_BORROWED, _ctx);
    kk_std_core_types__list xs = _con_x1448->tail;
    kk_box_t key = _pat_1.fst;
    kk_box_t value = _pat_1.snd;
    kk_reuse_t _ru_x1386 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(buckets, _ctx)) {
      kk_box_dup(key, _ctx);
      kk_box_dup(value, _ctx);
      kk_box_drop(_box_x61, _ctx);
      _ru_x1386 = (kk_datatype_ptr_reuse(buckets, _ctx));
    }
    else {
      kk_box_dup(key, _ctx);
      kk_box_dup(value, _ctx);
      kk_std_core_types__list_dup(xs, _ctx);
      kk_datatype_ptr_decref(buckets, _ctx);
    }
    kk_integer_t the_hash;
    kk_function_t _x_x1450 = kk_function_dup(_implicit_fs_hash, _ctx); /*(1364, int64) -> int*/
    kk_box_t _x_x1449 = kk_box_dup(key, _ctx); /*1364*/
    the_hash = kk_function_call(kk_integer_t, (kk_function_t, kk_box_t, int64_t, kk_context_t*), _x_x1450, (_x_x1450, _x_x1449, seed, _ctx), _ctx); /*int*/
    kk_integer_t position;
    kk_integer_t _x_x1451;
    kk_ssize_t _x_x1452 = kk_vector_len_borrow(v,kk_context()); /*ssize_t*/
    _x_x1451 = kk_integer_from_ssize_t(_x_x1452,kk_context()); /*int*/
    position = kk_integer_mod(the_hash,_x_x1451,kk_context()); /*int*/
    kk_ssize_t _b_x63_75;
    kk_integer_t _x_x1453 = kk_integer_dup(position, _ctx); /*int*/
    _b_x63_75 = kk_std_core_int_ssize__t(_x_x1453, _ctx); /*ssize_t*/
    kk_std_core_types__list _b_x65_73;
    kk_box_t _x_x1454 = kk_vector_at_borrow(v,_b_x63_75,kk_context()); /*3357*/
    _b_x65_73 = kk_std_core_types__list_unbox(_x_x1454, KK_OWNED, _ctx); /*list<(1364, 1365)>*/
    kk_vector_t new_v;
    kk_vector_t _brw_x1351;
    kk_box_t _x_x1455;
    kk_std_core_types__list _x_x1456;
    kk_box_t _x_x1457;
    kk_std_core_types__tuple2 _x_x1458 = kk_std_core_types__new_Tuple2(key, value, _ctx); /*(1038, 1039)*/
    _x_x1457 = kk_std_core_types__tuple2_box(_x_x1458, _ctx); /*3380*/
    _x_x1456 = kk_std_core_types__new_Cons(_ru_x1386, 0, _x_x1457, _b_x65_73, _ctx); /*list<3380>*/
    _x_x1455 = kk_std_core_types__list_box(_x_x1456, _ctx); /*3357*/
    _brw_x1351 = kk_std_core_dash_extras_unsafe_set(v, position, _x_x1455, _ctx); /*vector<3357>*/
    kk_integer_drop(position, _ctx);
    new_v = _brw_x1351; /*vector<list<(1364, 1365)>>*/
    { // tailcall
      v = new_v;
      buckets = xs;
      goto kk__tailcall;
    }
  }
}
 
// Rehash will overwrite vector `v` with values from `buckets` if it is unique, otherwise it will use `unsafe-set`


// lift anonymous function
struct kk_std_data_hashmap_rehash_fun1460__t {
  struct kk_function_s _base;
  kk_vector_t v;
  kk_function_t _implicit_fs_hash;
  int64_t seed;
};
static kk_unit_t kk_std_data_hashmap_rehash_fun1460(kk_function_t _fself, kk_box_t _b_x87, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_new_rehash_fun1460(kk_vector_t v, kk_function_t _implicit_fs_hash, int64_t seed, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_rehash_fun1460__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_rehash_fun1460__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_rehash_fun1460, kk_context());
  _self->v = v;
  _self->_implicit_fs_hash = _implicit_fs_hash;
  _self->seed = seed;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap_rehash_fun1462__t {
  struct kk_function_s _base;
  kk_vector_t v;
  kk_function_t _implicit_fs_hash;
  int64_t seed;
};
static kk_unit_t kk_std_data_hashmap_rehash_fun1462(kk_function_t _fself, kk_box_t _b_x84, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_new_rehash_fun1462(kk_vector_t v, kk_function_t _implicit_fs_hash, int64_t seed, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_rehash_fun1462__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_rehash_fun1462__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_rehash_fun1462, kk_context());
  _self->v = v;
  _self->_implicit_fs_hash = _implicit_fs_hash;
  _self->seed = seed;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_std_data_hashmap_rehash_fun1462(kk_function_t _fself, kk_box_t _b_x84, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_rehash_fun1462__t* _self = kk_function_as(struct kk_std_data_hashmap_rehash_fun1462__t*, _fself, _ctx);
  kk_vector_t v = _self->v; /* vector<list<(1252, 1253)>> */
  kk_function_t _implicit_fs_hash = _self->_implicit_fs_hash; /* (1252, int64) -> int */
  int64_t seed = _self->seed; /* int64 */
  kk_drop_match(_self, {kk_vector_dup(v, _ctx);kk_function_dup(_implicit_fs_hash, _ctx);kk_skip_dup(seed, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _match_x1349;
  kk_box_t _x_x1463 = kk_box_dup(_b_x84, _ctx); /*3203*/
  _match_x1349 = kk_std_core_types__tuple2_unbox(_x_x1463, KK_OWNED, _ctx); /*(1252, 1253)*/
  {
    kk_box_t key = _match_x1349.fst;
    kk_box_dup(key, _ctx);
    kk_std_core_types__tuple2_drop(_match_x1349, _ctx);
    kk_integer_t the_hash = kk_function_call(kk_integer_t, (kk_function_t, kk_box_t, int64_t, kk_context_t*), _implicit_fs_hash, (_implicit_fs_hash, key, seed, _ctx), _ctx); /*int*/;
    kk_integer_t position;
    kk_integer_t _x_x1464;
    kk_ssize_t _x_x1465 = kk_vector_len_borrow(v,kk_context()); /*ssize_t*/
    _x_x1464 = kk_integer_from_ssize_t(_x_x1465,kk_context()); /*int*/
    position = kk_integer_mod(the_hash,_x_x1464,kk_context()); /*int*/
    kk_std_core_types__maybe _match_x1350 = kk_std_core_vector_at(v, position, _ctx); /*maybe<1000>*/;
    if (kk_std_core_types__is_Nothing(_match_x1350, _ctx)) {
      kk_vector_drop(v, _ctx);
      kk_integer_drop(position, _ctx);
      kk_box_drop(_b_x84, _ctx);
      kk_Unit; return kk_Unit;
    }
    {
      kk_box_t _box_x76 = _match_x1350._cons.Just.value;
      kk_std_core_types__list xs = kk_std_core_types__list_unbox(_box_x76, KK_BORROWED, _ctx);
      kk_std_core_types__list_dup(xs, _ctx);
      kk_std_core_types__maybe_drop(_match_x1350, _ctx);
      kk_ssize_t _b_x80_93 = kk_std_core_int_ssize__t(position, _ctx); /*ssize_t*/;
      kk_box_t _x_x1466;
      kk_std_core_types__list _x_x1467 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _b_x84, xs, _ctx); /*list<3223>*/
      _x_x1466 = kk_std_core_types__list_box(_x_x1467, _ctx); /*3200*/
      kk_vector_unsafe_assign(v,_b_x80_93,_x_x1466,kk_context()); return kk_Unit;
    }
  }
}
static kk_unit_t kk_std_data_hashmap_rehash_fun1460(kk_function_t _fself, kk_box_t _b_x87, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_rehash_fun1460__t* _self = kk_function_as(struct kk_std_data_hashmap_rehash_fun1460__t*, _fself, _ctx);
  kk_vector_t v = _self->v; /* vector<list<(1252, 1253)>> */
  kk_function_t _implicit_fs_hash = _self->_implicit_fs_hash; /* (1252, int64) -> int */
  int64_t seed = _self->seed; /* int64 */
  kk_drop_match(_self, {kk_vector_dup(v, _ctx);kk_function_dup(_implicit_fs_hash, _ctx);kk_skip_dup(seed, _ctx);}, {}, _ctx)
  kk_std_core_types__list _x_x1461 = kk_std_core_types__list_unbox(_b_x87, KK_OWNED, _ctx); /*list<(1252, 1253)>*/
  kk_std_core_list_foreach(_x_x1461, kk_std_data_hashmap_new_rehash_fun1462(v, _implicit_fs_hash, seed, _ctx), _ctx); return kk_Unit;
}


// lift anonymous function
struct kk_std_data_hashmap_rehash_fun1468__t {
  struct kk_function_s _base;
};
static kk_std_core_types__list kk_std_data_hashmap_rehash_fun1468(kk_function_t _fself, kk_box_t _b_x101, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_new_rehash_fun1468(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap_rehash_fun1468, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_std_core_types__list kk_std_data_hashmap_rehash_fun1468(kk_function_t _fself, kk_box_t _b_x101, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_core_types__list_unbox(_b_x101, KK_OWNED, _ctx);
}

kk_vector_t kk_std_data_hashmap_rehash(kk_vector_t v, kk_vector_t buckets, int64_t seed, kk_function_t _implicit_fs_hash, kk_context_t* _ctx) { /* forall<a,b> (v : vector<list<(a, b)>>, buckets : vector<list<(a, b)>>, seed : int64, ?hash : (a, int64) -> int) -> vector<list<(a, b)>> */ 
  bool _match_x1348 = kk_datatype_is_unique(v, kk_context()); /*bool*/;
  if (_match_x1348) {
    kk_unit_t __ = kk_Unit;
    kk_function_t _x_x1459;
    kk_vector_dup(v, _ctx);
    _x_x1459 = kk_std_data_hashmap_new_rehash_fun1460(v, _implicit_fs_hash, seed, _ctx); /*(3204) -> 3205 ()*/
    kk_std_core_vector_foreach(buckets, _x_x1459, _ctx);
    return v;
  }
  {
    kk_std_core_types__list _b_x99_102 = kk_std_core_vector_vlist(buckets, kk_std_core_types__new_None(_ctx), _ctx); /*list<list<(1252, 1253)>>*/;
    kk_std_core_types__list bkts = kk_std_core_list_flatmap(_b_x99_102, kk_std_data_hashmap_new_rehash_fun1468(_ctx), _ctx); /*list<(1252, 1253)>*/;
    return kk_std_data_hashmap_helper_fs_rehash(v, bkts, seed, _implicit_fs_hash, _ctx);
  }
}
 
// Resizes a hash-map with `new-capacity` being the new capacity of the hashmap.
// If `new-capacity` is smaller than the capacity of the hash-map then there will be more hash collisions.


// lift anonymous function
struct kk_std_data_hashmap_resize_fun1474__t {
  struct kk_function_s _base;
  kk_vector_t buckets;
  kk_vector_t data;
};
static kk_unit_t kk_std_data_hashmap_resize_fun1474(kk_function_t _fself, kk_integer_t i, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_new_resize_fun1474(kk_vector_t buckets, kk_vector_t data, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_resize_fun1474__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_resize_fun1474__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_resize_fun1474, kk_context());
  _self->buckets = buckets;
  _self->data = data;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_std_data_hashmap_resize_fun1474(kk_function_t _fself, kk_integer_t i, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_resize_fun1474__t* _self = kk_function_as(struct kk_std_data_hashmap_resize_fun1474__t*, _fself, _ctx);
  kk_vector_t buckets = _self->buckets; /* forall<a,b> vector<list<(a, b)>> */
  kk_vector_t data = _self->data; /* vector<list<(1605, 1606)>> */
  kk_drop_match(_self, {kk_vector_dup(buckets, _ctx);kk_vector_dup(data, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _match_x1341;
  kk_std_core_types__maybe _brw_x1343 = kk_std_core_vector_at(data, i, _ctx); /*maybe<1000>*/;
  kk_vector_drop(data, _ctx);
  _match_x1341 = _brw_x1343; /*maybe<1000>*/
  if (kk_std_core_types__is_Nothing(_match_x1341, _ctx)) {
    kk_integer_drop(i, _ctx);
    kk_vector_drop(buckets, _ctx);
    kk_Unit; return kk_Unit;
  }
  {
    kk_box_t _box_x109 = _match_x1341._cons.Just.value;
    kk_std_core_types__list x = kk_std_core_types__list_unbox(_box_x109, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(x, _ctx);
    kk_std_core_types__maybe_drop(_match_x1341, _ctx);
    kk_unit_t __ = kk_Unit;
    kk_ssize_t _own_x1342;
    kk_integer_t _x_x1475 = kk_integer_dup(i, _ctx); /*int*/
    _own_x1342 = kk_std_core_int_ssize__t(_x_x1475, _ctx); /*ssize_t*/
    kk_vector_dup(buckets, kk_context()); kk_box_drop(kk_vector_at_borrow(buckets, _own_x1342, kk_context()), kk_context()); kk_vector_unsafe_assign(buckets, _own_x1342, kk_box_null(), kk_context());
    kk_ssize_t _b_x111_114 = kk_std_core_int_ssize__t(i, _ctx); /*ssize_t*/;
    kk_vector_unsafe_assign(buckets,_b_x111_114,(kk_std_core_types__list_box(x, _ctx)),kk_context()); return kk_Unit;
  }
}

kk_std_data_hashmap__hash_map kk_std_data_hashmap_resize(kk_std_data_hashmap__hash_map hm, kk_integer_t new_capacity, kk_function_t _implicit_fs_hash, kk_context_t* _ctx) { /* forall<a,b> (hm : hash-map<a,b>, new-capacity : int, ?hash : (a, int64) -> int) -> hash-map<a,b> */ 
  kk_integer_t n_10019;
  kk_ssize_t _x_x1469;
  kk_vector_t _brw_x1346;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1470 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    kk_vector_t _x = _con_x1470->data;
    kk_vector_dup(_x, _ctx);
    _brw_x1346 = _x; /*vector<list<(1605, 1606)>>*/
  }
  kk_ssize_t _brw_x1347 = kk_vector_len_borrow(_brw_x1346,kk_context()); /*ssize_t*/;
  kk_vector_drop(_brw_x1346, _ctx);
  _x_x1469 = _brw_x1347; /*ssize_t*/
  n_10019 = kk_integer_from_ssize_t(_x_x1469,kk_context()); /*int*/
  kk_ssize_t _b_x105_107 = kk_std_core_int_ssize__t(n_10019, _ctx); /*ssize_t*/;
  kk_vector_t buckets = kk_std_core_vector_vector_alloc(_b_x105_107, kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx), _ctx); /*forall<a,b> vector<list<(a, b)>>*/;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1471 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    kk_vector_t data = _con_x1471->data;
    kk_integer_t size = _con_x1471->amount;
    int64_t seed = _con_x1471->seed;
    kk_reuse_t _ru_x1387 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(hm, _ctx)) {
      _ru_x1387 = (kk_datatype_ptr_reuse(hm, _ctx));
    }
    else {
      kk_vector_dup(data, _ctx);
      kk_integer_dup(size, _ctx);
      kk_datatype_ptr_decref(hm, _ctx);
    }
    kk_unit_t ___0 = kk_Unit;
    kk_integer_t _brw_x1344;
    kk_ssize_t _x_x1472 = kk_vector_len_borrow(data,kk_context()); /*ssize_t*/
    _brw_x1344 = kk_integer_from_ssize_t(_x_x1472,kk_context()); /*int*/
    kk_unit_t _brw_x1345 = kk_Unit;
    kk_function_t _x_x1473;
    kk_vector_dup(buckets, _ctx);
    kk_vector_dup(data, _ctx);
    _x_x1473 = kk_std_data_hashmap_new_resize_fun1474(buckets, data, _ctx); /*(i : int) -> ()*/
    kk_std_core_for(_brw_x1344, _x_x1473, _ctx);
    kk_integer_drop(_brw_x1344, _ctx);
    _brw_x1345;
    kk_vector_t new_data = kk_vector_realloc(data, (kk_std_core_int_ssize__t(new_capacity, _ctx)), kk_box_null(), kk_context()); /*vector<list<(1605, 1606)>>*/;
    kk_vector_t _x_x1476;
    kk_vector_t _x_x1477 = kk_std_data_hashmap_helper_fs_resize(new_data, _ctx); /*vector<list<(803, 804)>>*/
    _x_x1476 = kk_std_data_hashmap_rehash(_x_x1477, buckets, seed, _implicit_fs_hash, _ctx); /*vector<list<(1252, 1253)>>*/
    return kk_std_data_hashmap__new_Hash_map(_ru_x1387, 0, _x_x1476, size, seed, _ctx);
  }
}
 
// Invoke a function `f` for each key of the hash-map.


// lift anonymous function
struct kk_std_data_hashmap_foreach_key_fun1480__t {
  struct kk_function_s _base;
  kk_function_t f;
  kk_std_data_hashmap__hash_map hm;
};
static kk_unit_t kk_std_data_hashmap_foreach_key_fun1480(kk_function_t _fself, kk_integer_t i, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_new_foreach_key_fun1480(kk_function_t f, kk_std_data_hashmap__hash_map hm, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_foreach_key_fun1480__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_foreach_key_fun1480__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_foreach_key_fun1480, kk_context());
  _self->f = f;
  _self->hm = hm;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap_foreach_key_fun1483__t {
  struct kk_function_s _base;
  kk_function_t f;
};
static kk_unit_t kk_std_data_hashmap_foreach_key_fun1483(kk_function_t _fself, kk_box_t _b_x120, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_new_foreach_key_fun1483(kk_function_t f, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_foreach_key_fun1483__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_foreach_key_fun1483__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_foreach_key_fun1483, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_std_data_hashmap_foreach_key_fun1483(kk_function_t _fself, kk_box_t _b_x120, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_foreach_key_fun1483__t* _self = kk_function_as(struct kk_std_data_hashmap_foreach_key_fun1483__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (1749) -> 1748 () */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_box_t _x_x1484;
  kk_std_core_types__tuple2 _match_x1331 = kk_std_core_types__tuple2_unbox(_b_x120, KK_OWNED, _ctx); /*(1749, 1750)*/;
  {
    kk_box_t key = _match_x1331.fst;
    kk_box_dup(key, _ctx);
    kk_std_core_types__tuple2_drop(_match_x1331, _ctx);
    _x_x1484 = key; /*1749*/
  }
  kk_function_call(kk_unit_t, (kk_function_t, kk_box_t, kk_context_t*), f, (f, _x_x1484, _ctx), _ctx); return kk_Unit;
}
static kk_unit_t kk_std_data_hashmap_foreach_key_fun1480(kk_function_t _fself, kk_integer_t i, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_foreach_key_fun1480__t* _self = kk_function_as(struct kk_std_data_hashmap_foreach_key_fun1480__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (1749) -> 1748 () */
  kk_std_data_hashmap__hash_map hm = _self->hm; /* std/data/hashmap/hash-map<1749,1750> */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);kk_std_data_hashmap__hash_map_dup(hm, _ctx);}, {}, _ctx)
  kk_ssize_t _b_x117_124 = kk_std_core_int_ssize__t(i, _ctx); /*ssize_t*/;
  kk_std_core_types__list _b_x118_121;
  kk_box_t _x_x1481;
  kk_vector_t _brw_x1332;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1482 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    kk_vector_t _x_0 = _con_x1482->data;
    kk_integer_t _pat_0_0 = _con_x1482->amount;
    if kk_likely(kk_datatype_ptr_is_unique(hm, _ctx)) {
      kk_integer_drop(_pat_0_0, _ctx);
      kk_datatype_ptr_free(hm, _ctx);
    }
    else {
      kk_vector_dup(_x_0, _ctx);
      kk_datatype_ptr_decref(hm, _ctx);
    }
    _brw_x1332 = _x_0; /*vector<list<(1749, 1750)>>*/
  }
  kk_box_t _brw_x1333 = kk_vector_at_borrow(_brw_x1332,_b_x117_124,kk_context()); /*3740*/;
  kk_vector_drop(_brw_x1332, _ctx);
  _x_x1481 = _brw_x1333; /*3740*/
  _b_x118_121 = kk_std_core_types__list_unbox(_x_x1481, KK_OWNED, _ctx); /*list<(1749, 1750)>*/
  kk_std_core_list_foreach(_b_x118_121, kk_std_data_hashmap_new_foreach_key_fun1483(f, _ctx), _ctx); return kk_Unit;
}

kk_unit_t kk_std_data_hashmap_foreach_key(kk_std_data_hashmap__hash_map hm, kk_function_t f, kk_context_t* _ctx) { /* forall<e,a,b> (hm : hash-map<a,b>, f : (a) -> e ()) -> e () */ 
  kk_integer_t _brw_x1336;
  kk_ssize_t _x_x1478;
  kk_vector_t _brw_x1334;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1479 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    kk_vector_t _x = _con_x1479->data;
    kk_vector_dup(_x, _ctx);
    _brw_x1334 = _x; /*vector<list<(1749, 1750)>>*/
  }
  kk_ssize_t _brw_x1335 = kk_vector_len_borrow(_brw_x1334,kk_context()); /*ssize_t*/;
  kk_vector_drop(_brw_x1334, _ctx);
  _x_x1478 = _brw_x1335; /*ssize_t*/
  _brw_x1336 = kk_integer_from_ssize_t(_x_x1478,kk_context()); /*int*/
  kk_unit_t _brw_x1337 = kk_Unit;
  kk_std_core_for(_brw_x1336, kk_std_data_hashmap_new_foreach_key_fun1480(f, hm, _ctx), _ctx);
  kk_integer_drop(_brw_x1336, _ctx);
  _brw_x1337; return kk_Unit;
}
 
// Invoke a function `f` for each value of the hash-map.


// lift anonymous function
struct kk_std_data_hashmap_foreach_value_fun1487__t {
  struct kk_function_s _base;
  kk_function_t f;
  kk_std_data_hashmap__hash_map hm;
};
static kk_unit_t kk_std_data_hashmap_foreach_value_fun1487(kk_function_t _fself, kk_integer_t i, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_new_foreach_value_fun1487(kk_function_t f, kk_std_data_hashmap__hash_map hm, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_foreach_value_fun1487__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_foreach_value_fun1487__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_foreach_value_fun1487, kk_context());
  _self->f = f;
  _self->hm = hm;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap_foreach_value_fun1490__t {
  struct kk_function_s _base;
  kk_function_t f;
};
static kk_unit_t kk_std_data_hashmap_foreach_value_fun1490(kk_function_t _fself, kk_box_t _b_x130, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_new_foreach_value_fun1490(kk_function_t f, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_foreach_value_fun1490__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_foreach_value_fun1490__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_foreach_value_fun1490, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_std_data_hashmap_foreach_value_fun1490(kk_function_t _fself, kk_box_t _b_x130, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_foreach_value_fun1490__t* _self = kk_function_as(struct kk_std_data_hashmap_foreach_value_fun1490__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (1855) -> 1853 () */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_box_t _x_x1491;
  kk_std_core_types__tuple2 _match_x1324 = kk_std_core_types__tuple2_unbox(_b_x130, KK_OWNED, _ctx); /*(1854, 1855)*/;
  {
    kk_box_t value = _match_x1324.snd;
    kk_box_dup(value, _ctx);
    kk_std_core_types__tuple2_drop(_match_x1324, _ctx);
    _x_x1491 = value; /*1855*/
  }
  kk_function_call(kk_unit_t, (kk_function_t, kk_box_t, kk_context_t*), f, (f, _x_x1491, _ctx), _ctx); return kk_Unit;
}
static kk_unit_t kk_std_data_hashmap_foreach_value_fun1487(kk_function_t _fself, kk_integer_t i, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_foreach_value_fun1487__t* _self = kk_function_as(struct kk_std_data_hashmap_foreach_value_fun1487__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (1855) -> 1853 () */
  kk_std_data_hashmap__hash_map hm = _self->hm; /* std/data/hashmap/hash-map<1854,1855> */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);kk_std_data_hashmap__hash_map_dup(hm, _ctx);}, {}, _ctx)
  kk_ssize_t _b_x127_134 = kk_std_core_int_ssize__t(i, _ctx); /*ssize_t*/;
  kk_std_core_types__list _b_x128_131;
  kk_box_t _x_x1488;
  kk_vector_t _brw_x1325;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1489 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    kk_vector_t _x_0 = _con_x1489->data;
    kk_integer_t _pat_0_0 = _con_x1489->amount;
    if kk_likely(kk_datatype_ptr_is_unique(hm, _ctx)) {
      kk_integer_drop(_pat_0_0, _ctx);
      kk_datatype_ptr_free(hm, _ctx);
    }
    else {
      kk_vector_dup(_x_0, _ctx);
      kk_datatype_ptr_decref(hm, _ctx);
    }
    _brw_x1325 = _x_0; /*vector<list<(1854, 1855)>>*/
  }
  kk_box_t _brw_x1326 = kk_vector_at_borrow(_brw_x1325,_b_x127_134,kk_context()); /*3845*/;
  kk_vector_drop(_brw_x1325, _ctx);
  _x_x1488 = _brw_x1326; /*3845*/
  _b_x128_131 = kk_std_core_types__list_unbox(_x_x1488, KK_OWNED, _ctx); /*list<(1854, 1855)>*/
  kk_std_core_list_foreach(_b_x128_131, kk_std_data_hashmap_new_foreach_value_fun1490(f, _ctx), _ctx); return kk_Unit;
}

kk_unit_t kk_std_data_hashmap_foreach_value(kk_std_data_hashmap__hash_map hm, kk_function_t f, kk_context_t* _ctx) { /* forall<e,a,b> (hm : hash-map<a,b>, f : (b) -> e ()) -> e () */ 
  kk_integer_t _brw_x1329;
  kk_ssize_t _x_x1485;
  kk_vector_t _brw_x1327;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1486 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    kk_vector_t _x = _con_x1486->data;
    kk_vector_dup(_x, _ctx);
    _brw_x1327 = _x; /*vector<list<(1854, 1855)>>*/
  }
  kk_ssize_t _brw_x1328 = kk_vector_len_borrow(_brw_x1327,kk_context()); /*ssize_t*/;
  kk_vector_drop(_brw_x1327, _ctx);
  _x_x1485 = _brw_x1328; /*ssize_t*/
  _brw_x1329 = kk_integer_from_ssize_t(_x_x1485,kk_context()); /*int*/
  kk_unit_t _brw_x1330 = kk_Unit;
  kk_std_core_for(_brw_x1329, kk_std_data_hashmap_new_foreach_value_fun1487(f, hm, _ctx), _ctx);
  kk_integer_drop(_brw_x1329, _ctx);
  _brw_x1330; return kk_Unit;
}

bool kk_std_data_hashmap_mb_fs__lp__eq__eq__rp_(kk_std_core_types__maybe a, kk_std_core_types__maybe b, kk_context_t* _ctx) { /* (a : maybe<int>, b : maybe<int>) -> bool */ 
  if (kk_std_core_types__is_Nothing(a, _ctx) && kk_std_core_types__is_Nothing(b, _ctx)) {
    return true;
  }
  if (kk_std_core_types__is_Just(a, _ctx) && kk_std_core_types__is_Just(b, _ctx)) {
    kk_box_t _box_x136 = a._cons.Just.value;
    kk_box_t _box_x137 = b._cons.Just.value;
    kk_integer_t x = kk_integer_unbox(_box_x136, _ctx);
    kk_integer_t y = kk_integer_unbox(_box_x137, _ctx);
    kk_integer_dup(y, _ctx);
    kk_std_core_types__maybe_drop(b, _ctx);
    kk_integer_dup(x, _ctx);
    kk_std_core_types__maybe_drop(a, _ctx);
    bool _brw_x1323 = kk_integer_eq_borrow(x,y,kk_context()); /*bool*/;
    kk_integer_drop(x, _ctx);
    kk_integer_drop(y, _ctx);
    return _brw_x1323;
  }
  {
    kk_std_core_types__maybe_drop(b, _ctx);
    kk_std_core_types__maybe_drop(a, _ctx);
    return false;
  }
}
 
// Inserts a `value` into the hash-map with a given `key`.


// lift anonymous function
struct kk_std_data_hashmap_insert_fun1505__t {
  struct kk_function_s _base;
  kk_box_t key;
  kk_function_t _implicit_fs__lp__eq__eq__rp_;
};
static bool kk_std_data_hashmap_insert_fun1505(kk_function_t _fself, kk_box_t _b_x146, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_new_insert_fun1505(kk_box_t key, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_insert_fun1505__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_insert_fun1505__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_insert_fun1505, kk_context());
  _self->key = key;
  _self->_implicit_fs__lp__eq__eq__rp_ = _implicit_fs__lp__eq__eq__rp_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_std_data_hashmap_insert_fun1505(kk_function_t _fself, kk_box_t _b_x146, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_insert_fun1505__t* _self = kk_function_as(struct kk_std_data_hashmap_insert_fun1505__t*, _fself, _ctx);
  kk_box_t key = _self->key; /* 2306 */
  kk_function_t _implicit_fs__lp__eq__eq__rp_ = _self->_implicit_fs__lp__eq__eq__rp_; /* (2306, 2306) -> bool */
  kk_drop_match(_self, {kk_box_dup(key, _ctx);kk_function_dup(_implicit_fs__lp__eq__eq__rp_, _ctx);}, {}, _ctx)
  bool b_10028;
  kk_box_t _x_x1506;
  kk_std_core_types__tuple2 _match_x1320 = kk_std_core_types__tuple2_unbox(_b_x146, KK_OWNED, _ctx); /*(2306, 2307)*/;
  {
    kk_box_t _x_1 = _match_x1320.fst;
    kk_box_dup(_x_1, _ctx);
    kk_std_core_types__tuple2_drop(_match_x1320, _ctx);
    _x_x1506 = _x_1; /*2306*/
  }
  b_10028 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs__lp__eq__eq__rp_, (_implicit_fs__lp__eq__eq__rp_, _x_x1506, key, _ctx), _ctx); /*bool*/
  if (b_10028) {
    return false;
  }
  {
    return true;
  }
}

kk_std_data_hashmap__hash_map kk_std_data_hashmap_insert(kk_std_data_hashmap__hash_map hm, kk_box_t key, kk_box_t value, kk_function_t _implicit_fs_hash, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_when_resize, kk_function_t _implicit_fs_resizer, kk_context_t* _ctx) { /* forall<a,b> (hm : hash-map<a,b>, key : a, value : b, ?hash : (a, int64) -> int, ?(==) : (a, a) -> bool, ?when-resize : (int, int) -> bool, ?resizer : (int, int) -> int) -> hash-map<a,b> */ 
  kk_integer_t the_hash;
  kk_function_t _x_x1495 = kk_function_dup(_implicit_fs_hash, _ctx); /*(2306, int64) -> int*/
  kk_box_t _x_x1492 = kk_box_dup(key, _ctx); /*2306*/
  int64_t _x_x1493;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1494 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    int64_t _x = _con_x1494->seed;
    _x_x1493 = _x; /*int64*/
  }
  the_hash = kk_function_call(kk_integer_t, (kk_function_t, kk_box_t, int64_t, kk_context_t*), _x_x1495, (_x_x1495, _x_x1492, _x_x1493, _ctx), _ctx); /*int*/
  kk_integer_t position;
  kk_integer_t _x_x1496;
  kk_ssize_t _x_x1497;
  kk_vector_t _brw_x1321;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1498 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    kk_vector_t _x_0 = _con_x1498->data;
    kk_vector_dup(_x_0, _ctx);
    _brw_x1321 = _x_0; /*vector<list<(2306, 2307)>>*/
  }
  kk_ssize_t _brw_x1322 = kk_vector_len_borrow(_brw_x1321,kk_context()); /*ssize_t*/;
  kk_vector_drop(_brw_x1321, _ctx);
  _x_x1497 = _brw_x1322; /*ssize_t*/
  _x_x1496 = kk_integer_from_ssize_t(_x_x1497,kk_context()); /*int*/
  position = kk_integer_mod(the_hash,_x_x1496,kk_context()); /*int*/
  kk_std_data_hashmap__hash_map new_hm;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1499 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    kk_vector_t data = _con_x1499->data;
    kk_integer_t amount = _con_x1499->amount;
    int64_t seed = _con_x1499->seed;
    kk_reuse_t _ru_x1390 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(hm, _ctx)) {
      _ru_x1390 = (kk_datatype_ptr_reuse(hm, _ctx));
    }
    else {
      kk_integer_dup(amount, _ctx);
      kk_vector_dup(data, _ctx);
      kk_datatype_ptr_decref(hm, _ctx);
    }
    kk_ssize_t _b_x139_141;
    kk_integer_t _x_x1500 = kk_integer_dup(position, _ctx); /*int*/
    _b_x139_141 = kk_std_core_int_ssize__t(_x_x1500, _ctx); /*ssize_t*/
    kk_std_core_types__list xs_10027;
    kk_box_t _x_x1501 = kk_vector_at_borrow(data,_b_x139_141,kk_context()); /*4200*/
    xs_10027 = kk_std_core_types__list_unbox(_x_x1501, KK_OWNED, _ctx); /*list<(2306, 2307)>*/
    kk_integer_t old_bucket_size = kk_std_core_list__lift_length_4947(xs_10027, kk_integer_from_small(0), _ctx); /*int*/;
    kk_ssize_t _b_x143_154;
    kk_integer_t _x_x1502 = kk_integer_dup(position, _ctx); /*int*/
    _b_x143_154 = kk_std_core_int_ssize__t(_x_x1502, _ctx); /*ssize_t*/
    kk_std_core_types__list _b_x144_151;
    kk_box_t _x_x1503 = kk_vector_at_borrow(data,_b_x143_154,kk_context()); /*4200*/
    _b_x144_151 = kk_std_core_types__list_unbox(_x_x1503, KK_OWNED, _ctx); /*list<(2306, 2307)>*/
    kk_std_core_types__list _b_x148_150;
    kk_function_t _x_x1504;
    kk_box_dup(key, _ctx);
    _x_x1504 = kk_std_data_hashmap_new_insert_fun1505(key, _implicit_fs__lp__eq__eq__rp_, _ctx); /*(4200) -> 4201 bool*/
    _b_x148_150 = kk_std_core_list_filter(_b_x144_151, _x_x1504, _ctx); /*list<(2306, 2307)>*/
    kk_vector_t new_data;
    kk_box_t _x_x1507;
    kk_std_core_types__list _x_x1508;
    kk_box_t _x_x1509;
    kk_std_core_types__tuple2 _x_x1510 = kk_std_core_types__new_Tuple2(key, value, _ctx); /*(1038, 1039)*/
    _x_x1509 = kk_std_core_types__tuple2_box(_x_x1510, _ctx); /*4223*/
    _x_x1508 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x1509, _b_x148_150, _ctx); /*list<4223>*/
    _x_x1507 = kk_std_core_types__list_box(_x_x1508, _ctx); /*4200*/
    new_data = kk_std_core_dash_extras_unsafe_set(data, position, _x_x1507, _ctx); /*vector<list<(2306, 2307)>>*/
    kk_ssize_t _b_x163_165 = kk_std_core_int_ssize__t(position, _ctx); /*ssize_t*/;
    kk_std_core_types__list xs_0_10030;
    kk_box_t _x_x1511 = kk_vector_at_borrow(new_data,_b_x163_165,kk_context()); /*4188*/
    xs_0_10030 = kk_std_core_types__list_unbox(_x_x1511, KK_OWNED, _ctx); /*list<(2306, 2307)>*/
    kk_integer_t new_amount;
    bool _match_x1317;
    kk_integer_t _brw_x1318 = kk_std_core_list__lift_length_4947(xs_0_10030, kk_integer_from_small(0), _ctx); /*int*/;
    bool _brw_x1319 = kk_integer_lt_borrow(old_bucket_size,_brw_x1318,kk_context()); /*bool*/;
    kk_integer_drop(old_bucket_size, _ctx);
    kk_integer_drop(_brw_x1318, _ctx);
    _match_x1317 = _brw_x1319; /*bool*/
    if (_match_x1317) {
      new_amount = kk_integer_add_small_const(amount, 1, _ctx); /*int*/
    }
    else {
      new_amount = amount; /*int*/
    }
    new_hm = kk_std_data_hashmap__new_Hash_map(_ru_x1390, 0, new_data, new_amount, seed, _ctx); /*std/data/hashmap/hash-map<2306,2307>*/
  }
  bool _match_x1312;
  kk_integer_t _x_x1512;
  kk_ssize_t _x_x1513;
  kk_vector_t _brw_x1315;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1514 = kk_std_data_hashmap__as_Hash_map(new_hm, _ctx);
    kk_vector_t _x_2 = _con_x1514->data;
    kk_vector_dup(_x_2, _ctx);
    _brw_x1315 = _x_2; /*vector<list<(2306, 2307)>>*/
  }
  kk_ssize_t _brw_x1316 = kk_vector_len_borrow(_brw_x1315,kk_context()); /*ssize_t*/;
  kk_vector_drop(_brw_x1315, _ctx);
  _x_x1513 = _brw_x1316; /*ssize_t*/
  _x_x1512 = kk_integer_from_ssize_t(_x_x1513,kk_context()); /*int*/
  kk_integer_t _x_x1515;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1516 = kk_std_data_hashmap__as_Hash_map(new_hm, _ctx);
    kk_integer_t _x_3 = _con_x1516->amount;
    kk_integer_dup(_x_3, _ctx);
    _x_x1515 = _x_3; /*int*/
  }
  _match_x1312 = kk_function_call(bool, (kk_function_t, kk_integer_t, kk_integer_t, kk_context_t*), _implicit_fs_when_resize, (_implicit_fs_when_resize, _x_x1512, _x_x1515, _ctx), _ctx); /*bool*/
  if (_match_x1312) {
    kk_std_data_hashmap__hash_map _x_x1517 = kk_std_data_hashmap__hash_map_dup(new_hm, _ctx); /*std/data/hashmap/hash-map<2306,2307>*/
    kk_integer_t _x_x1518;
    kk_integer_t _x_x1519;
    kk_ssize_t _x_x1520;
    kk_vector_t _brw_x1313;
    {
      struct kk_std_data_hashmap_Hash_map* _con_x1521 = kk_std_data_hashmap__as_Hash_map(new_hm, _ctx);
      kk_vector_t _x_4 = _con_x1521->data;
      kk_vector_dup(_x_4, _ctx);
      _brw_x1313 = _x_4; /*vector<list<(2306, 2307)>>*/
    }
    kk_ssize_t _brw_x1314 = kk_vector_len_borrow(_brw_x1313,kk_context()); /*ssize_t*/;
    kk_vector_drop(_brw_x1313, _ctx);
    _x_x1520 = _brw_x1314; /*ssize_t*/
    _x_x1519 = kk_integer_from_ssize_t(_x_x1520,kk_context()); /*int*/
    kk_integer_t _x_x1522;
    {
      struct kk_std_data_hashmap_Hash_map* _con_x1523 = kk_std_data_hashmap__as_Hash_map(new_hm, _ctx);
      kk_vector_t _pat_0_7 = _con_x1523->data;
      kk_integer_t _x_5 = _con_x1523->amount;
      if kk_likely(kk_datatype_ptr_is_unique(new_hm, _ctx)) {
        kk_vector_drop(_pat_0_7, _ctx);
        kk_datatype_ptr_free(new_hm, _ctx);
      }
      else {
        kk_integer_dup(_x_5, _ctx);
        kk_datatype_ptr_decref(new_hm, _ctx);
      }
      _x_x1522 = _x_5; /*int*/
    }
    _x_x1518 = kk_function_call(kk_integer_t, (kk_function_t, kk_integer_t, kk_integer_t, kk_context_t*), _implicit_fs_resizer, (_implicit_fs_resizer, _x_x1519, _x_x1522, _ctx), _ctx); /*int*/
    return kk_std_data_hashmap_resize(_x_x1517, _x_x1518, _implicit_fs_hash, _ctx);
  }
  {
    kk_function_drop(_implicit_fs_resizer, _ctx);
    kk_function_drop(_implicit_fs_hash, _ctx);
    return new_hm;
  }
}


// lift anonymous function
struct kk_std_data_hashmap_from_list_helper_fun1530__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashmap_from_list_helper_fun1530(kk_function_t _fself, kk_integer_t _x1_x1528, kk_integer_t _x2_x1529, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_new_from_list_helper_fun1530(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap_from_list_helper_fun1530, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashmap_from_list_helper_fun1530(kk_function_t _fself, kk_integer_t _x1_x1528, kk_integer_t _x2_x1529, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashmap_when_resize(_x1_x1528, _x2_x1529, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap_from_list_helper_fun1533__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashmap_from_list_helper_fun1533(kk_function_t _fself, kk_integer_t _x1_x1531, kk_integer_t _x2_x1532, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_new_from_list_helper_fun1533(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap_from_list_helper_fun1533, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashmap_from_list_helper_fun1533(kk_function_t _fself, kk_integer_t _x1_x1531, kk_integer_t _x2_x1532, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashmap_resizer(_x1_x1531, _x2_x1532, _ctx);
}

kk_std_data_hashmap__hash_map kk_std_data_hashmap_from_list_helper(kk_std_data_hashmap__hash_map hm, kk_std_core_types__list l, kk_function_t _implicit_fs_hash, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) { /* forall<a,b> (hm : hash-map<a,b>, l : list<(a, b)>, ?hash : (a, int64) -> int, ?(==) : (a, a) -> bool) -> hash-map<a,b> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Nil(l, _ctx)) {
    kk_function_drop(_implicit_fs_hash, _ctx);
    kk_function_drop(_implicit_fs__lp__eq__eq__rp_, _ctx);
    return hm;
  }
  {
    struct kk_std_core_types_Cons* _con_x1524 = kk_std_core_types__as_Cons(l, _ctx);
    kk_box_t _box_x166 = _con_x1524->head;
    kk_std_core_types__tuple2 _pat_1 = kk_std_core_types__tuple2_unbox(_box_x166, KK_BORROWED, _ctx);
    kk_std_core_types__list xs = _con_x1524->tail;
    kk_box_t key = _pat_1.fst;
    kk_box_t value = _pat_1.snd;
    if kk_likely(kk_datatype_ptr_is_unique(l, _ctx)) {
      kk_box_dup(key, _ctx);
      kk_box_dup(value, _ctx);
      kk_box_drop(_box_x166, _ctx);
      kk_datatype_ptr_free(l, _ctx);
    }
    else {
      kk_box_dup(key, _ctx);
      kk_box_dup(value, _ctx);
      kk_std_core_types__list_dup(xs, _ctx);
      kk_datatype_ptr_decref(l, _ctx);
    }
    { // tailcall
      kk_std_data_hashmap__hash_map _x_x1525;
      kk_function_t _x_x1526 = kk_function_dup(_implicit_fs_hash, _ctx); /*(2424, int64) -> int*/
      kk_function_t _x_x1527 = kk_function_dup(_implicit_fs__lp__eq__eq__rp_, _ctx); /*(2424, 2424) -> bool*/
      _x_x1525 = kk_std_data_hashmap_insert(hm, key, value, _x_x1526, _x_x1527, kk_std_data_hashmap_new_from_list_helper_fun1530(_ctx), kk_std_data_hashmap_new_from_list_helper_fun1533(_ctx), _ctx); /*std/data/hashmap/hash-map<2306,2307>*/
      hm = _x_x1525;
      l = xs;
      goto kk__tailcall;
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298_fun1535__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298_fun1535(kk_function_t _fself, kk_box_t _b_x172, kk_box_t _b_x173, kk_box_t _b_x174, kk_box_t _b_x175, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_random_fs_list_fs__new_mlift_hash_map_10298_fun1535(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298_fun1535, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298_fun1539__t {
  struct kk_function_s _base;
  kk_box_t _b_x174;
};
static kk_integer_t kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298_fun1539(kk_function_t _fself, kk_box_t _b_x179, int64_t _b_x180, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_random_fs_list_fs__new_mlift_hash_map_10298_fun1539(kk_box_t _b_x174, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298_fun1539__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298_fun1539__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298_fun1539, kk_context());
  _self->_b_x174 = _b_x174;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_integer_t kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298_fun1539(kk_function_t _fself, kk_box_t _b_x179, int64_t _b_x180, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298_fun1539__t* _self = kk_function_as(struct kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298_fun1539__t*, _fself, _ctx);
  kk_box_t _b_x174 = _self->_b_x174; /* 1002 */
  kk_drop_match(_self, {kk_box_dup(_b_x174, _ctx);}, {}, _ctx)
  kk_box_t _x_x1540;
  kk_function_t _x_x1541 = kk_function_unbox(_b_x174, _ctx); /*(176, 177) -> 178*/
  _x_x1540 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x1541, (_x_x1541, _b_x179, kk_int64_box(_b_x180, _ctx), _ctx), _ctx); /*178*/
  return kk_integer_unbox(_x_x1540, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298_fun1542__t {
  struct kk_function_s _base;
  kk_box_t _b_x175;
};
static bool kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298_fun1542(kk_function_t _fself, kk_box_t _b_x184, kk_box_t _b_x185, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_random_fs_list_fs__new_mlift_hash_map_10298_fun1542(kk_box_t _b_x175, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298_fun1542__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298_fun1542__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298_fun1542, kk_context());
  _self->_b_x175 = _b_x175;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298_fun1542(kk_function_t _fself, kk_box_t _b_x184, kk_box_t _b_x185, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298_fun1542__t* _self = kk_function_as(struct kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298_fun1542__t*, _fself, _ctx);
  kk_box_t _b_x175 = _self->_b_x175; /* 1003 */
  kk_drop_match(_self, {kk_box_dup(_b_x175, _ctx);}, {}, _ctx)
  kk_box_t _x_x1543;
  kk_function_t _x_x1544 = kk_function_unbox(_b_x175, _ctx); /*(181, 182) -> 183*/
  _x_x1543 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x1544, (_x_x1544, _b_x184, _b_x185, _ctx), _ctx); /*183*/
  return kk_bool_unbox(_x_x1543);
}
static kk_box_t kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298_fun1535(kk_function_t _fself, kk_box_t _b_x172, kk_box_t _b_x173, kk_box_t _b_x174, kk_box_t _b_x175, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_data_hashmap__hash_map _x_x1536;
  kk_std_data_hashmap__hash_map _x_x1537 = kk_std_data_hashmap__hash_map_unbox(_b_x172, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<2511,2512>*/
  kk_std_core_types__list _x_x1538 = kk_std_core_types__list_unbox(_b_x173, KK_OWNED, _ctx); /*list<(2511, 2512)>*/
  _x_x1536 = kk_std_data_hashmap_from_list_helper(_x_x1537, _x_x1538, kk_std_data_hashmap_random_fs_list_fs__new_mlift_hash_map_10298_fun1539(_b_x174, _ctx), kk_std_data_hashmap_random_fs_list_fs__new_mlift_hash_map_10298_fun1542(_b_x175, _ctx), _ctx); /*std/data/hashmap/hash-map<2424,2425>*/
  return kk_std_data_hashmap__hash_map_box(_x_x1536, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298_fun1545__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs_hash;
};
static kk_box_t kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298_fun1545(kk_function_t _fself, kk_box_t _b_x189, kk_box_t _b_x190, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_random_fs_list_fs__new_mlift_hash_map_10298_fun1545(kk_function_t _implicit_fs_hash, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298_fun1545__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298_fun1545__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298_fun1545, kk_context());
  _self->_implicit_fs_hash = _implicit_fs_hash;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298_fun1545(kk_function_t _fself, kk_box_t _b_x189, kk_box_t _b_x190, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298_fun1545__t* _self = kk_function_as(struct kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298_fun1545__t*, _fself, _ctx);
  kk_function_t _implicit_fs_hash = _self->_implicit_fs_hash; /* (2511, int64) -> int */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs_hash, _ctx);}, {}, _ctx)
  kk_integer_t _x_x1546;
  int64_t _x_x1547 = kk_int64_unbox(_b_x190, KK_OWNED, _ctx); /*int64*/
  _x_x1546 = kk_function_call(kk_integer_t, (kk_function_t, kk_box_t, int64_t, kk_context_t*), _implicit_fs_hash, (_implicit_fs_hash, _b_x189, _x_x1547, _ctx), _ctx); /*int*/
  return kk_integer_box(_x_x1546, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298_fun1548__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs__lp__eq__eq__rp_;
};
static kk_box_t kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298_fun1548(kk_function_t _fself, kk_box_t _b_x194, kk_box_t _b_x195, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_random_fs_list_fs__new_mlift_hash_map_10298_fun1548(kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298_fun1548__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298_fun1548__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298_fun1548, kk_context());
  _self->_implicit_fs__lp__eq__eq__rp_ = _implicit_fs__lp__eq__eq__rp_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298_fun1548(kk_function_t _fself, kk_box_t _b_x194, kk_box_t _b_x195, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298_fun1548__t* _self = kk_function_as(struct kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298_fun1548__t*, _fself, _ctx);
  kk_function_t _implicit_fs__lp__eq__eq__rp_ = _self->_implicit_fs__lp__eq__eq__rp_; /* (2511, 2511) -> bool */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs__lp__eq__eq__rp_, _ctx);}, {}, _ctx)
  bool _x_x1549 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs__lp__eq__eq__rp_, (_implicit_fs__lp__eq__eq__rp_, _b_x194, _b_x195, _ctx), _ctx); /*bool*/
  return kk_bool_box(_x_x1549);
}

kk_std_data_hashmap__hash_map kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298(kk_std_core_types__list xs, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_std_data_hashmap__hash_map _y_x10106, kk_context_t* _ctx) { /* forall<a,b> (xs : list<(a, b)>, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int, hash-map<a,b>) -> std/num/random/random hash-map<a,b> */ 
  kk_box_t _x_x1534 = kk_std_core_hnd__open_none4(kk_std_data_hashmap_random_fs_list_fs__new_mlift_hash_map_10298_fun1535(_ctx), kk_std_data_hashmap__hash_map_box(_y_x10106, _ctx), kk_std_core_types__list_box(xs, _ctx), kk_function_box(kk_std_data_hashmap_random_fs_list_fs__new_mlift_hash_map_10298_fun1545(_implicit_fs_hash, _ctx), _ctx), kk_function_box(kk_std_data_hashmap_random_fs_list_fs__new_mlift_hash_map_10298_fun1548(_implicit_fs__lp__eq__eq__rp_, _ctx), _ctx), _ctx); /*1004*/
  return kk_std_data_hashmap__hash_map_unbox(_x_x1534, KK_OWNED, _ctx);
}
 
// Creates a hash-map from a list `xs`. This hash-map has the same capacity as the length of the list `xs`.
// Random effect is needed to initalize the seed.


// lift anonymous function
struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1553__t {
  struct kk_function_s _base;
  kk_std_core_types__list xs;
  kk_function_t _implicit_fs__lp__eq__eq__rp_;
  kk_function_t _implicit_fs_hash;
};
static kk_box_t kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1553(kk_function_t _fself, kk_box_t _b_x233, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_random_fs_list_fs_new_hash_map_fun1553(kk_std_core_types__list xs, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1553__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1553__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1553, kk_context());
  _self->xs = xs;
  _self->_implicit_fs__lp__eq__eq__rp_ = _implicit_fs__lp__eq__eq__rp_;
  _self->_implicit_fs_hash = _implicit_fs_hash;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1558__t {
  struct kk_function_s _base;
};
static kk_std_data_hashmap__hash_map kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1558(kk_function_t _fself, kk_std_data_hashmap__hash_map _x1_x1554, kk_std_core_types__list _x2_x1555, kk_function_t _x3_x1556, kk_function_t _x4_x1557, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_random_fs_list_fs_new_hash_map_fun1558(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1558, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_std_data_hashmap__hash_map kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1558(kk_function_t _fself, kk_std_data_hashmap__hash_map _x1_x1554, kk_std_core_types__list _x2_x1555, kk_function_t _x3_x1556, kk_function_t _x4_x1557, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashmap_from_list_helper(_x1_x1554, _x2_x1555, _x3_x1556, _x4_x1557, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1559__t {
  struct kk_function_s _base;
  kk_function_t _b_x203_264;
};
static kk_box_t kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1559(kk_function_t _fself, kk_box_t _b_x208, kk_box_t _b_x209, kk_box_t _b_x210, kk_box_t _b_x211, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_random_fs_list_fs_new_hash_map_fun1559(kk_function_t _b_x203_264, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1559__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1559__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1559, kk_context());
  _self->_b_x203_264 = _b_x203_264;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1563__t {
  struct kk_function_s _base;
  kk_box_t _b_x210;
};
static kk_integer_t kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1563(kk_function_t _fself, kk_box_t _b_x215, int64_t _b_x216, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_random_fs_list_fs_new_hash_map_fun1563(kk_box_t _b_x210, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1563__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1563__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1563, kk_context());
  _self->_b_x210 = _b_x210;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_integer_t kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1563(kk_function_t _fself, kk_box_t _b_x215, int64_t _b_x216, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1563__t* _self = kk_function_as(struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1563__t*, _fself, _ctx);
  kk_box_t _b_x210 = _self->_b_x210; /* 1002 */
  kk_drop_match(_self, {kk_box_dup(_b_x210, _ctx);}, {}, _ctx)
  kk_box_t _x_x1564;
  kk_function_t _x_x1565 = kk_function_unbox(_b_x210, _ctx); /*(212, 213) -> 214*/
  _x_x1564 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x1565, (_x_x1565, _b_x215, kk_int64_box(_b_x216, _ctx), _ctx), _ctx); /*214*/
  return kk_integer_unbox(_x_x1564, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1566__t {
  struct kk_function_s _base;
  kk_box_t _b_x211;
};
static bool kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1566(kk_function_t _fself, kk_box_t _b_x220, kk_box_t _b_x221, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_random_fs_list_fs_new_hash_map_fun1566(kk_box_t _b_x211, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1566__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1566__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1566, kk_context());
  _self->_b_x211 = _b_x211;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1566(kk_function_t _fself, kk_box_t _b_x220, kk_box_t _b_x221, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1566__t* _self = kk_function_as(struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1566__t*, _fself, _ctx);
  kk_box_t _b_x211 = _self->_b_x211; /* 1003 */
  kk_drop_match(_self, {kk_box_dup(_b_x211, _ctx);}, {}, _ctx)
  kk_box_t _x_x1567;
  kk_function_t _x_x1568 = kk_function_unbox(_b_x211, _ctx); /*(217, 218) -> 219*/
  _x_x1567 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x1568, (_x_x1568, _b_x220, _b_x221, _ctx), _ctx); /*219*/
  return kk_bool_unbox(_x_x1567);
}
static kk_box_t kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1559(kk_function_t _fself, kk_box_t _b_x208, kk_box_t _b_x209, kk_box_t _b_x210, kk_box_t _b_x211, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1559__t* _self = kk_function_as(struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1559__t*, _fself, _ctx);
  kk_function_t _b_x203_264 = _self->_b_x203_264; /* (hm : std/data/hashmap/hash-map<2511,2512>, l : list<(2511, 2512)>, ?hash : (2511, int64) -> int, ?(==) : (2511, 2511) -> bool) -> std/data/hashmap/hash-map<2511,2512> */
  kk_drop_match(_self, {kk_function_dup(_b_x203_264, _ctx);}, {}, _ctx)
  kk_std_data_hashmap__hash_map _x_x1560;
  kk_std_data_hashmap__hash_map _x_x1561 = kk_std_data_hashmap__hash_map_unbox(_b_x208, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<2511,2512>*/
  kk_std_core_types__list _x_x1562 = kk_std_core_types__list_unbox(_b_x209, KK_OWNED, _ctx); /*list<(2511, 2512)>*/
  _x_x1560 = kk_function_call(kk_std_data_hashmap__hash_map, (kk_function_t, kk_std_data_hashmap__hash_map, kk_std_core_types__list, kk_function_t, kk_function_t, kk_context_t*), _b_x203_264, (_b_x203_264, _x_x1561, _x_x1562, kk_std_data_hashmap_random_fs_list_fs_new_hash_map_fun1563(_b_x210, _ctx), kk_std_data_hashmap_random_fs_list_fs_new_hash_map_fun1566(_b_x211, _ctx), _ctx), _ctx); /*std/data/hashmap/hash-map<2511,2512>*/
  return kk_std_data_hashmap__hash_map_box(_x_x1560, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1569__t {
  struct kk_function_s _base;
  kk_function_t _b_x206_267;
};
static kk_box_t kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1569(kk_function_t _fself, kk_box_t _b_x225, kk_box_t _b_x226, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_random_fs_list_fs_new_hash_map_fun1569(kk_function_t _b_x206_267, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1569__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1569__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1569, kk_context());
  _self->_b_x206_267 = _b_x206_267;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1569(kk_function_t _fself, kk_box_t _b_x225, kk_box_t _b_x226, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1569__t* _self = kk_function_as(struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1569__t*, _fself, _ctx);
  kk_function_t _b_x206_267 = _self->_b_x206_267; /* (2511, int64) -> int */
  kk_drop_match(_self, {kk_function_dup(_b_x206_267, _ctx);}, {}, _ctx)
  kk_integer_t _x_x1570;
  int64_t _x_x1571 = kk_int64_unbox(_b_x226, KK_OWNED, _ctx); /*int64*/
  _x_x1570 = kk_function_call(kk_integer_t, (kk_function_t, kk_box_t, int64_t, kk_context_t*), _b_x206_267, (_b_x206_267, _b_x225, _x_x1571, _ctx), _ctx); /*int*/
  return kk_integer_box(_x_x1570, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1572__t {
  struct kk_function_s _base;
  kk_function_t _b_x207_268;
};
static kk_box_t kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1572(kk_function_t _fself, kk_box_t _b_x230, kk_box_t _b_x231, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_random_fs_list_fs_new_hash_map_fun1572(kk_function_t _b_x207_268, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1572__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1572__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1572, kk_context());
  _self->_b_x207_268 = _b_x207_268;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1572(kk_function_t _fself, kk_box_t _b_x230, kk_box_t _b_x231, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1572__t* _self = kk_function_as(struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1572__t*, _fself, _ctx);
  kk_function_t _b_x207_268 = _self->_b_x207_268; /* (2511, 2511) -> bool */
  kk_drop_match(_self, {kk_function_dup(_b_x207_268, _ctx);}, {}, _ctx)
  bool _x_x1573 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _b_x207_268, (_b_x207_268, _b_x230, _b_x231, _ctx), _ctx); /*bool*/
  return kk_bool_box(_x_x1573);
}
static kk_box_t kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1553(kk_function_t _fself, kk_box_t _b_x233, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1553__t* _self = kk_function_as(struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1553__t*, _fself, _ctx);
  kk_std_core_types__list xs = _self->xs; /* list<(2511, 2512)> */
  kk_function_t _implicit_fs__lp__eq__eq__rp_ = _self->_implicit_fs__lp__eq__eq__rp_; /* (2511, 2511) -> bool */
  kk_function_t _implicit_fs_hash = _self->_implicit_fs_hash; /* (2511, int64) -> int */
  kk_drop_match(_self, {kk_std_core_types__list_dup(xs, _ctx);kk_function_dup(_implicit_fs__lp__eq__eq__rp_, _ctx);kk_function_dup(_implicit_fs_hash, _ctx);}, {}, _ctx)
  kk_std_data_hashmap__hash_map _y_x10106_274 = kk_std_data_hashmap__hash_map_unbox(_b_x233, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<2511,2512>*/;
  kk_function_t _b_x203_264 = kk_std_data_hashmap_random_fs_list_fs_new_hash_map_fun1558(_ctx); /*(hm : std/data/hashmap/hash-map<2511,2512>, l : list<(2511, 2512)>, ?hash : (2511, int64) -> int, ?(==) : (2511, 2511) -> bool) -> std/data/hashmap/hash-map<2511,2512>*/;
  kk_std_data_hashmap__hash_map _b_x204_265 = _y_x10106_274; /*std/data/hashmap/hash-map<2511,2512>*/;
  kk_std_core_types__list _b_x205_266 = xs; /*list<(2511, 2512)>*/;
  kk_function_t _b_x206_267 = _implicit_fs_hash; /*(2511, int64) -> int*/;
  kk_function_t _b_x207_268 = _implicit_fs__lp__eq__eq__rp_; /*(2511, 2511) -> bool*/;
  return kk_std_core_hnd__open_none4(kk_std_data_hashmap_random_fs_list_fs_new_hash_map_fun1559(_b_x203_264, _ctx), kk_std_data_hashmap__hash_map_box(_b_x204_265, _ctx), kk_std_core_types__list_box(_b_x205_266, _ctx), kk_function_box(kk_std_data_hashmap_random_fs_list_fs_new_hash_map_fun1569(_b_x206_267, _ctx), _ctx), kk_function_box(kk_std_data_hashmap_random_fs_list_fs_new_hash_map_fun1572(_b_x207_268, _ctx), _ctx), _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1574__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1574(kk_function_t _fself, kk_box_t _b_x239, kk_box_t _b_x240, kk_box_t _b_x241, kk_box_t _b_x242, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_random_fs_list_fs_new_hash_map_fun1574(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1574, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1578__t {
  struct kk_function_s _base;
  kk_box_t _b_x241;
};
static kk_integer_t kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1578(kk_function_t _fself, kk_box_t _b_x246, int64_t _b_x247, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_random_fs_list_fs_new_hash_map_fun1578(kk_box_t _b_x241, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1578__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1578__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1578, kk_context());
  _self->_b_x241 = _b_x241;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_integer_t kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1578(kk_function_t _fself, kk_box_t _b_x246, int64_t _b_x247, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1578__t* _self = kk_function_as(struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1578__t*, _fself, _ctx);
  kk_box_t _b_x241 = _self->_b_x241; /* 1002 */
  kk_drop_match(_self, {kk_box_dup(_b_x241, _ctx);}, {}, _ctx)
  kk_box_t _x_x1579;
  kk_function_t _x_x1580 = kk_function_unbox(_b_x241, _ctx); /*(243, 244) -> 245*/
  _x_x1579 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x1580, (_x_x1580, _b_x246, kk_int64_box(_b_x247, _ctx), _ctx), _ctx); /*245*/
  return kk_integer_unbox(_x_x1579, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1581__t {
  struct kk_function_s _base;
  kk_box_t _b_x242;
};
static bool kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1581(kk_function_t _fself, kk_box_t _b_x251, kk_box_t _b_x252, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_random_fs_list_fs_new_hash_map_fun1581(kk_box_t _b_x242, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1581__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1581__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1581, kk_context());
  _self->_b_x242 = _b_x242;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1581(kk_function_t _fself, kk_box_t _b_x251, kk_box_t _b_x252, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1581__t* _self = kk_function_as(struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1581__t*, _fself, _ctx);
  kk_box_t _b_x242 = _self->_b_x242; /* 1003 */
  kk_drop_match(_self, {kk_box_dup(_b_x242, _ctx);}, {}, _ctx)
  kk_box_t _x_x1582;
  kk_function_t _x_x1583 = kk_function_unbox(_b_x242, _ctx); /*(248, 249) -> 250*/
  _x_x1582 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x1583, (_x_x1583, _b_x251, _b_x252, _ctx), _ctx); /*250*/
  return kk_bool_unbox(_x_x1582);
}
static kk_box_t kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1574(kk_function_t _fself, kk_box_t _b_x239, kk_box_t _b_x240, kk_box_t _b_x241, kk_box_t _b_x242, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_data_hashmap__hash_map _x_x1575;
  kk_std_data_hashmap__hash_map _x_x1576 = kk_std_data_hashmap__hash_map_unbox(_b_x239, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<2511,2512>*/
  kk_std_core_types__list _x_x1577 = kk_std_core_types__list_unbox(_b_x240, KK_OWNED, _ctx); /*list<(2511, 2512)>*/
  _x_x1575 = kk_std_data_hashmap_from_list_helper(_x_x1576, _x_x1577, kk_std_data_hashmap_random_fs_list_fs_new_hash_map_fun1578(_b_x241, _ctx), kk_std_data_hashmap_random_fs_list_fs_new_hash_map_fun1581(_b_x242, _ctx), _ctx); /*std/data/hashmap/hash-map<2424,2425>*/
  return kk_std_data_hashmap__hash_map_box(_x_x1575, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1584__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs_hash;
};
static kk_box_t kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1584(kk_function_t _fself, kk_box_t _b_x256, kk_box_t _b_x257, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_random_fs_list_fs_new_hash_map_fun1584(kk_function_t _implicit_fs_hash, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1584__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1584__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1584, kk_context());
  _self->_implicit_fs_hash = _implicit_fs_hash;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1584(kk_function_t _fself, kk_box_t _b_x256, kk_box_t _b_x257, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1584__t* _self = kk_function_as(struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1584__t*, _fself, _ctx);
  kk_function_t _implicit_fs_hash = _self->_implicit_fs_hash; /* (2511, int64) -> int */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs_hash, _ctx);}, {}, _ctx)
  kk_integer_t _x_x1585;
  int64_t _x_x1586 = kk_int64_unbox(_b_x257, KK_OWNED, _ctx); /*int64*/
  _x_x1585 = kk_function_call(kk_integer_t, (kk_function_t, kk_box_t, int64_t, kk_context_t*), _implicit_fs_hash, (_implicit_fs_hash, _b_x256, _x_x1586, _ctx), _ctx); /*int*/
  return kk_integer_box(_x_x1585, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1587__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs__lp__eq__eq__rp_;
};
static kk_box_t kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1587(kk_function_t _fself, kk_box_t _b_x261, kk_box_t _b_x262, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_random_fs_list_fs_new_hash_map_fun1587(kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1587__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1587__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1587, kk_context());
  _self->_implicit_fs__lp__eq__eq__rp_ = _implicit_fs__lp__eq__eq__rp_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1587(kk_function_t _fself, kk_box_t _b_x261, kk_box_t _b_x262, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1587__t* _self = kk_function_as(struct kk_std_data_hashmap_random_fs_list_fs_hash_map_fun1587__t*, _fself, _ctx);
  kk_function_t _implicit_fs__lp__eq__eq__rp_ = _self->_implicit_fs__lp__eq__eq__rp_; /* (2511, 2511) -> bool */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs__lp__eq__eq__rp_, _ctx);}, {}, _ctx)
  bool _x_x1588 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs__lp__eq__eq__rp_, (_implicit_fs__lp__eq__eq__rp_, _b_x261, _b_x262, _ctx), _ctx); /*bool*/
  return kk_bool_box(_x_x1588);
}

kk_std_data_hashmap__hash_map kk_std_data_hashmap_random_fs_list_fs_hash_map(kk_std_core_types__list xs, kk_function_t _implicit_fs_hash, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) { /* forall<a,b> (xs : list<(a, b)>, ?hash : (a, int64) -> int, ?(==) : (a, a) -> bool) -> std/num/random/random hash-map<a,b> */ 
  kk_integer_t _b_x201_202;
  kk_std_core_types__list _x_x1550 = kk_std_core_types__list_dup(xs, _ctx); /*list<(2511, 2512)>*/
  _b_x201_202 = kk_std_core_list__lift_length_4947(_x_x1550, kk_integer_from_small(0), _ctx); /*int*/
  kk_std_data_hashmap__hash_map x_10332;
  kk_std_core_types__optional _x_x1551 = kk_std_core_types__new_Optional(kk_integer_box(_b_x201_202, _ctx), _ctx); /*? 4507*/
  x_10332 = kk_std_data_hashmap_random_fs_hash_map(_x_x1551, _ctx); /*std/data/hashmap/hash-map<2511,2512>*/
  kk_box_t _x_x1552;
  if (kk_yielding(kk_context())) {
    kk_datatype_ptr_dropn(x_10332, (KK_I32(2)), _ctx);
    _x_x1552 = kk_std_core_hnd_yield_extend(kk_std_data_hashmap_random_fs_list_fs_new_hash_map_fun1553(xs, _implicit_fs__lp__eq__eq__rp_, _implicit_fs_hash, _ctx), _ctx); /*4513*/
  }
  else {
    _x_x1552 = kk_std_core_hnd__open_none4(kk_std_data_hashmap_random_fs_list_fs_new_hash_map_fun1574(_ctx), kk_std_data_hashmap__hash_map_box(x_10332, _ctx), kk_std_core_types__list_box(xs, _ctx), kk_function_box(kk_std_data_hashmap_random_fs_list_fs_new_hash_map_fun1584(_implicit_fs_hash, _ctx), _ctx), kk_function_box(kk_std_data_hashmap_random_fs_list_fs_new_hash_map_fun1587(_implicit_fs__lp__eq__eq__rp_, _ctx), _ctx), _ctx); /*4513*/
  }
  return kk_std_data_hashmap__hash_map_unbox(_x_x1552, KK_OWNED, _ctx);
}
 
// Creates a hash-map from a list `xs`. This hash-map has the same capacity as the length of the list `xs`.
// Random effect is needed to initalize the seed.

kk_std_data_hashmap__hash_map kk_std_data_hashmap_thread_fs_list_fs_hash_map(kk_std_core_types__list xs, kk_function_t _implicit_fs_hash, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) { /* forall<a,b> (xs : list<(a, b)>, ?hash : (a, int64) -> int, ?(==) : (a, a) -> bool) -> hash-map<a,b> */ 
  kk_integer_t _b_x275_276;
  kk_std_core_types__list _x_x1589 = kk_std_core_types__list_dup(xs, _ctx); /*list<(2591, 2592)>*/
  _b_x275_276 = kk_std_core_list__lift_length_4947(_x_x1589, kk_integer_from_small(0), _ctx); /*int*/
  kk_std_core_types__optional capacity_10039 = kk_std_core_types__new_Optional(kk_integer_box(_b_x275_276, _ctx), _ctx); /*? int*/;
  kk_integer_t n_10041;
  bool _match_x1308;
  kk_integer_t _brw_x1309;
  if (kk_std_core_types__is_Optional(capacity_10039, _ctx)) {
    kk_box_t _box_x277 = capacity_10039._cons._Optional.value;
    kk_integer_t _uniq_capacity_553 = kk_integer_unbox(_box_x277, _ctx);
    kk_integer_dup(_uniq_capacity_553, _ctx);
    _brw_x1309 = _uniq_capacity_553; /*int*/
  }
  else {
    _brw_x1309 = kk_integer_from_small(1); /*int*/
  }
  bool _brw_x1310 = kk_integer_gt_borrow(_brw_x1309,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x1309, _ctx);
  _match_x1308 = _brw_x1310; /*bool*/
  if (_match_x1308) {
    if (kk_std_core_types__is_Optional(capacity_10039, _ctx)) {
      kk_box_t _box_x278 = capacity_10039._cons._Optional.value;
      kk_integer_t _uniq_capacity_553_0 = kk_integer_unbox(_box_x278, _ctx);
      kk_integer_dup(_uniq_capacity_553_0, _ctx);
      kk_std_core_types__optional_drop(capacity_10039, _ctx);
      n_10041 = _uniq_capacity_553_0; /*int*/
    }
    else {
      kk_std_core_types__optional_drop(capacity_10039, _ctx);
      n_10041 = kk_integer_from_small(1); /*int*/
    }
  }
  else {
    kk_std_core_types__optional_drop(capacity_10039, _ctx);
    n_10041 = kk_integer_from_small(1); /*int*/
  }
  kk_ssize_t _b_x279_281 = kk_std_core_int_ssize__t(n_10041, _ctx); /*ssize_t*/;
  kk_std_core_types__list _b_x280_282 = kk_std_core_types__new_Nil(_ctx); /*list<(2591, 2592)>*/;
  kk_std_data_hashmap__hash_map _x_x1590;
  kk_vector_t _x_x1591 = kk_std_core_vector_vector_alloc(_b_x279_281, kk_std_core_types__list_box(_b_x280_282, _ctx), _ctx); /*vector<4592>*/
  _x_x1590 = kk_std_data_hashmap__new_Hash_map(kk_reuse_null, 0, _x_x1591, kk_integer_from_small(0), kk_std_data_hash_thread_fs_seed, _ctx); /*std/data/hashmap/hash-map<8,9>*/
  return kk_std_data_hashmap_from_list_helper(_x_x1590, xs, _implicit_fs_hash, _implicit_fs__lp__eq__eq__rp_, _ctx);
}
 
// Creates a hash-map from a list `xs` and with a `seed`. This hash-map has the same capacity as the length of the list `xs`.

kk_std_data_hashmap__hash_map kk_std_data_hashmap_list_fs_hash_map_seeded(kk_std_core_types__list xs, int64_t seed, kk_function_t _implicit_fs_hash, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) { /* forall<a,b> (xs : list<(a, b)>, seed : int64, ?hash : (a, int64) -> int, ?(==) : (a, a) -> bool) -> hash-map<a,b> */ 
  kk_integer_t _b_x283_284;
  kk_std_core_types__list _x_x1592 = kk_std_core_types__list_dup(xs, _ctx); /*list<(2688, 2689)>*/
  _b_x283_284 = kk_std_core_list__lift_length_4947(_x_x1592, kk_integer_from_small(0), _ctx); /*int*/
  kk_std_core_types__optional capacity_10044 = kk_std_core_types__new_Optional(kk_integer_box(_b_x283_284, _ctx), _ctx); /*? int*/;
  kk_integer_t n_10046;
  bool _match_x1305;
  kk_integer_t _brw_x1306;
  if (kk_std_core_types__is_Optional(capacity_10044, _ctx)) {
    kk_box_t _box_x285 = capacity_10044._cons._Optional.value;
    kk_integer_t _uniq_capacity_620 = kk_integer_unbox(_box_x285, _ctx);
    kk_integer_dup(_uniq_capacity_620, _ctx);
    _brw_x1306 = _uniq_capacity_620; /*int*/
  }
  else {
    _brw_x1306 = kk_integer_from_small(1); /*int*/
  }
  bool _brw_x1307 = kk_integer_gt_borrow(_brw_x1306,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x1306, _ctx);
  _match_x1305 = _brw_x1307; /*bool*/
  if (_match_x1305) {
    if (kk_std_core_types__is_Optional(capacity_10044, _ctx)) {
      kk_box_t _box_x286 = capacity_10044._cons._Optional.value;
      kk_integer_t _uniq_capacity_620_0 = kk_integer_unbox(_box_x286, _ctx);
      kk_integer_dup(_uniq_capacity_620_0, _ctx);
      kk_std_core_types__optional_drop(capacity_10044, _ctx);
      n_10046 = _uniq_capacity_620_0; /*int*/
    }
    else {
      kk_std_core_types__optional_drop(capacity_10044, _ctx);
      n_10046 = kk_integer_from_small(1); /*int*/
    }
  }
  else {
    kk_std_core_types__optional_drop(capacity_10044, _ctx);
    n_10046 = kk_integer_from_small(1); /*int*/
  }
  kk_ssize_t _b_x287_289 = kk_std_core_int_ssize__t(n_10046, _ctx); /*ssize_t*/;
  kk_std_core_types__list _b_x288_290 = kk_std_core_types__new_Nil(_ctx); /*list<(2688, 2689)>*/;
  kk_std_data_hashmap__hash_map _x_x1593;
  kk_vector_t _x_x1594 = kk_std_core_vector_vector_alloc(_b_x287_289, kk_std_core_types__list_box(_b_x288_290, _ctx), _ctx); /*vector<4689>*/
  _x_x1593 = kk_std_data_hashmap__new_Hash_map(kk_reuse_null, 0, _x_x1594, kk_integer_from_small(0), seed, _ctx); /*std/data/hashmap/hash-map<8,9>*/
  return kk_std_data_hashmap_from_list_helper(_x_x1593, xs, _implicit_fs_hash, _implicit_fs__lp__eq__eq__rp_, _ctx);
}
 
// Removes a value from the hash-map with a given `key`.


// lift anonymous function
struct kk_std_data_hashmap_remove_fun1606__t {
  struct kk_function_s _base;
  kk_box_t key;
  kk_function_t _implicit_fs__lp__eq__eq__rp_;
};
static bool kk_std_data_hashmap_remove_fun1606(kk_function_t _fself, kk_box_t _b_x299, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_new_remove_fun1606(kk_box_t key, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_remove_fun1606__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_remove_fun1606__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_remove_fun1606, kk_context());
  _self->key = key;
  _self->_implicit_fs__lp__eq__eq__rp_ = _implicit_fs__lp__eq__eq__rp_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_std_data_hashmap_remove_fun1606(kk_function_t _fself, kk_box_t _b_x299, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_remove_fun1606__t* _self = kk_function_as(struct kk_std_data_hashmap_remove_fun1606__t*, _fself, _ctx);
  kk_box_t key = _self->key; /* 2953 */
  kk_function_t _implicit_fs__lp__eq__eq__rp_ = _self->_implicit_fs__lp__eq__eq__rp_; /* (2953, 2953) -> bool */
  kk_drop_match(_self, {kk_box_dup(key, _ctx);kk_function_dup(_implicit_fs__lp__eq__eq__rp_, _ctx);}, {}, _ctx)
  bool b_10052;
  kk_box_t _x_x1607;
  kk_std_core_types__tuple2 _match_x1302 = kk_std_core_types__tuple2_unbox(_b_x299, KK_OWNED, _ctx); /*(2953, 2954)*/;
  {
    kk_box_t _x_1 = _match_x1302.fst;
    kk_box_dup(_x_1, _ctx);
    kk_std_core_types__tuple2_drop(_match_x1302, _ctx);
    _x_x1607 = _x_1; /*2953*/
  }
  b_10052 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs__lp__eq__eq__rp_, (_implicit_fs__lp__eq__eq__rp_, _x_x1607, key, _ctx), _ctx); /*bool*/
  if (b_10052) {
    return false;
  }
  {
    return true;
  }
}

kk_std_data_hashmap__hash_map kk_std_data_hashmap_remove(kk_std_data_hashmap__hash_map hm, kk_box_t key, kk_function_t _implicit_fs_hash, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) { /* forall<a,b> (hm : hash-map<a,b>, key : a, ?hash : (a, int64) -> int, ?(==) : (a, a) -> bool) -> hash-map<a,b> */ 
  kk_integer_t the_hash;
  kk_box_t _x_x1595 = kk_box_dup(key, _ctx); /*2953*/
  int64_t _x_x1596;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1597 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    int64_t _x = _con_x1597->seed;
    _x_x1596 = _x; /*int64*/
  }
  the_hash = kk_function_call(kk_integer_t, (kk_function_t, kk_box_t, int64_t, kk_context_t*), _implicit_fs_hash, (_implicit_fs_hash, _x_x1595, _x_x1596, _ctx), _ctx); /*int*/
  kk_integer_t position;
  kk_integer_t _x_x1598;
  kk_ssize_t _x_x1599;
  kk_vector_t _brw_x1303;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1600 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    kk_vector_t _x_0 = _con_x1600->data;
    kk_vector_dup(_x_0, _ctx);
    _brw_x1303 = _x_0; /*vector<list<(2953, 2954)>>*/
  }
  kk_ssize_t _brw_x1304 = kk_vector_len_borrow(_brw_x1303,kk_context()); /*ssize_t*/;
  kk_vector_drop(_brw_x1303, _ctx);
  _x_x1599 = _brw_x1304; /*ssize_t*/
  _x_x1598 = kk_integer_from_ssize_t(_x_x1599,kk_context()); /*int*/
  position = kk_integer_mod(the_hash,_x_x1598,kk_context()); /*int*/
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1601 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    kk_vector_t data = _con_x1601->data;
    kk_integer_t amount = _con_x1601->amount;
    int64_t seed = _con_x1601->seed;
    kk_reuse_t _ru_x1393 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(hm, _ctx)) {
      _ru_x1393 = (kk_datatype_ptr_reuse(hm, _ctx));
    }
    else {
      kk_integer_dup(amount, _ctx);
      kk_vector_dup(data, _ctx);
      kk_datatype_ptr_decref(hm, _ctx);
    }
    kk_ssize_t _b_x292_294;
    kk_integer_t _x_x1602 = kk_integer_dup(position, _ctx); /*int*/
    _b_x292_294 = kk_std_core_int_ssize__t(_x_x1602, _ctx); /*ssize_t*/
    kk_std_core_types__list xs_10051;
    kk_box_t _x_x1603 = kk_vector_at_borrow(data,_b_x292_294,kk_context()); /*4946*/
    xs_10051 = kk_std_core_types__list_unbox(_x_x1603, KK_OWNED, _ctx); /*list<(2953, 2954)>*/
    kk_integer_t old_bucket_size = kk_std_core_list__lift_length_4947(xs_10051, kk_integer_from_small(0), _ctx); /*int*/;
    kk_ssize_t _b_x296_303;
    kk_integer_t _x_x1604 = kk_integer_dup(position, _ctx); /*int*/
    _b_x296_303 = kk_std_core_int_ssize__t(_x_x1604, _ctx); /*ssize_t*/
    kk_std_core_types__list _b_x297_300;
    kk_box_t _x_x1605 = kk_vector_at_borrow(data,_b_x296_303,kk_context()); /*4946*/
    _b_x297_300 = kk_std_core_types__list_unbox(_x_x1605, KK_OWNED, _ctx); /*list<(2953, 2954)>*/
    kk_std_core_types__list bucket = kk_std_core_list_filter(_b_x297_300, kk_std_data_hashmap_new_remove_fun1606(key, _implicit_fs__lp__eq__eq__rp_, _ctx), _ctx); /*list<(2953, 2954)>*/;
    kk_vector_t new_data = kk_std_core_dash_extras_unsafe_set(data, position, kk_std_core_types__list_box(bucket, _ctx), _ctx); /*vector<list<(2953, 2954)>>*/;
    kk_ssize_t _b_x312_314 = kk_std_core_int_ssize__t(position, _ctx); /*ssize_t*/;
    kk_std_core_types__list xs_0_10054;
    kk_box_t _x_x1608 = kk_vector_at_borrow(new_data,_b_x312_314,kk_context()); /*4934*/
    xs_0_10054 = kk_std_core_types__list_unbox(_x_x1608, KK_OWNED, _ctx); /*list<(2953, 2954)>*/
    kk_integer_t new_amount;
    bool _match_x1299;
    kk_integer_t _brw_x1300 = kk_std_core_list__lift_length_4947(xs_0_10054, kk_integer_from_small(0), _ctx); /*int*/;
    bool _brw_x1301 = kk_integer_gt_borrow(old_bucket_size,_brw_x1300,kk_context()); /*bool*/;
    kk_integer_drop(old_bucket_size, _ctx);
    kk_integer_drop(_brw_x1300, _ctx);
    _match_x1299 = _brw_x1301; /*bool*/
    if (_match_x1299) {
      new_amount = kk_integer_add_small_const(amount, -1, _ctx); /*int*/
    }
    else {
      new_amount = amount; /*int*/
    }
    return kk_std_data_hashmap__new_Hash_map(_ru_x1393, 0, new_data, new_amount, seed, _ctx);
  }
}
 
// Attempts to retreve a value from the hash-map with a given `key`. Returns `Nothing` if the key is invalid.


// lift anonymous function
struct kk_std_data_hashmap_get_fun1617__t {
  struct kk_function_s _base;
  kk_box_t key;
  kk_function_t _implicit_fs__lp__eq__eq__rp_;
};
static bool kk_std_data_hashmap_get_fun1617(kk_function_t _fself, kk_box_t _b_x319, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_new_get_fun1617(kk_box_t key, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_get_fun1617__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_get_fun1617__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_get_fun1617, kk_context());
  _self->key = key;
  _self->_implicit_fs__lp__eq__eq__rp_ = _implicit_fs__lp__eq__eq__rp_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_std_data_hashmap_get_fun1617(kk_function_t _fself, kk_box_t _b_x319, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_get_fun1617__t* _self = kk_function_as(struct kk_std_data_hashmap_get_fun1617__t*, _fself, _ctx);
  kk_box_t key = _self->key; /* 3176 */
  kk_function_t _implicit_fs__lp__eq__eq__rp_ = _self->_implicit_fs__lp__eq__eq__rp_; /* (3176, 3176) -> bool */
  kk_drop_match(_self, {kk_box_dup(key, _ctx);kk_function_dup(_implicit_fs__lp__eq__eq__rp_, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 x_325 = kk_std_core_types__tuple2_unbox(_b_x319, KK_OWNED, _ctx); /*(3176, 3177)*/;
  kk_box_t _x_x1618;
  {
    kk_box_t _x_2 = x_325.fst;
    kk_box_dup(_x_2, _ctx);
    kk_std_core_types__tuple2_drop(x_325, _ctx);
    _x_x1618 = _x_2; /*3176*/
  }
  return kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs__lp__eq__eq__rp_, (_implicit_fs__lp__eq__eq__rp_, _x_x1618, key, _ctx), _ctx);
}

kk_std_core_types__maybe kk_std_data_hashmap_get(kk_std_data_hashmap__hash_map hm, kk_box_t key, kk_function_t _implicit_fs_hash, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) { /* forall<a,b> (hm : hash-map<a,b>, key : a, ?hash : (a, int64) -> int, ?(==) : (a, a) -> bool) -> maybe<b> */ 
  kk_integer_t the_hash;
  kk_box_t _x_x1609 = kk_box_dup(key, _ctx); /*3176*/
  int64_t _x_x1610;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1611 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    int64_t _x = _con_x1611->seed;
    _x_x1610 = _x; /*int64*/
  }
  the_hash = kk_function_call(kk_integer_t, (kk_function_t, kk_box_t, int64_t, kk_context_t*), _implicit_fs_hash, (_implicit_fs_hash, _x_x1609, _x_x1610, _ctx), _ctx); /*int*/
  kk_integer_t position;
  kk_integer_t _x_x1612;
  kk_ssize_t _x_x1613;
  kk_vector_t _brw_x1297;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1614 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    kk_vector_t _x_0 = _con_x1614->data;
    kk_vector_dup(_x_0, _ctx);
    _brw_x1297 = _x_0; /*vector<list<(3176, 3177)>>*/
  }
  kk_ssize_t _brw_x1298 = kk_vector_len_borrow(_brw_x1297,kk_context()); /*ssize_t*/;
  kk_vector_drop(_brw_x1297, _ctx);
  _x_x1613 = _brw_x1298; /*ssize_t*/
  _x_x1612 = kk_integer_from_ssize_t(_x_x1613,kk_context()); /*int*/
  position = kk_integer_mod(the_hash,_x_x1612,kk_context()); /*int*/
  kk_ssize_t _b_x316_324 = kk_std_core_int_ssize__t(position, _ctx); /*ssize_t*/;
  kk_std_core_types__list _b_x317_321;
  kk_box_t _x_x1615;
  kk_vector_t _brw_x1295;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1616 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    kk_vector_t _x_1 = _con_x1616->data;
    kk_integer_t _pat_0_1 = _con_x1616->amount;
    if kk_likely(kk_datatype_ptr_is_unique(hm, _ctx)) {
      kk_integer_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(hm, _ctx);
    }
    else {
      kk_vector_dup(_x_1, _ctx);
      kk_datatype_ptr_decref(hm, _ctx);
    }
    _brw_x1295 = _x_1; /*vector<list<(3176, 3177)>>*/
  }
  kk_box_t _brw_x1296 = kk_vector_at_borrow(_brw_x1295,_b_x316_324,kk_context()); /*5170*/;
  kk_vector_drop(_brw_x1295, _ctx);
  _x_x1615 = _brw_x1296; /*5170*/
  _b_x317_321 = kk_std_core_types__list_unbox(_x_x1615, KK_OWNED, _ctx); /*list<(3176, 3177)>*/
  kk_std_core_types__list _match_x1294 = kk_std_core_list_filter(_b_x317_321, kk_std_data_hashmap_new_get_fun1617(key, _implicit_fs__lp__eq__eq__rp_, _ctx), _ctx); /*list<5170>*/;
  if (kk_std_core_types__is_Cons(_match_x1294, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1619 = kk_std_core_types__as_Cons(_match_x1294, _ctx);
    kk_box_t _box_x320 = _con_x1619->head;
    kk_std_core_types__list _pat_0_3 = _con_x1619->tail;
    kk_std_core_types__tuple2 x_0 = kk_std_core_types__tuple2_unbox(_box_x320, KK_BORROWED, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(_match_x1294, _ctx)) {
      kk_std_core_types__list_drop(_pat_0_3, _ctx);
      kk_std_core_types__tuple2_dup(x_0, _ctx);
      kk_box_drop(_box_x320, _ctx);
      kk_datatype_ptr_free(_match_x1294, _ctx);
    }
    else {
      kk_std_core_types__tuple2_dup(x_0, _ctx);
      kk_datatype_ptr_decref(_match_x1294, _ctx);
    }
    kk_box_t _x_x1620;
    {
      kk_box_t _x_3 = x_0.snd;
      kk_box_dup(_x_3, _ctx);
      kk_std_core_types__tuple2_drop(x_0, _ctx);
      _x_x1620 = _x_3; /*3177*/
    }
    return kk_std_core_types__new_Just(_x_x1620, _ctx);
  }
  {
    return kk_std_core_types__new_Nothing(_ctx);
  }
}
 
// monadic lift

kk_std_data_hashmap__hash_map kk_std_data_hashmap_effect_fs__mlift_map_10299(kk_std_data_hashmap__hash_map hm, kk_vector_t new_data, kk_context_t* _ctx) { /* forall<a,b,c,d,e> (hm : hash-map<a,b>, new-data : vector<list<(c, d)>>) -> e hash-map<c,d> */ 
  kk_integer_t _x_x1621;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1622 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    kk_integer_t _x_0 = _con_x1622->amount;
    kk_integer_dup(_x_0, _ctx);
    _x_x1621 = _x_0; /*int*/
  }
  int64_t _x_x1623;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1624 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    kk_vector_t _pat_0_1 = _con_x1624->data;
    kk_integer_t _pat_1_1 = _con_x1624->amount;
    int64_t _x_1 = _con_x1624->seed;
    if kk_likely(kk_datatype_ptr_is_unique(hm, _ctx)) {
      kk_integer_drop(_pat_1_1, _ctx);
      kk_vector_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(hm, _ctx);
    }
    else {
      kk_datatype_ptr_decref(hm, _ctx);
    }
    _x_x1623 = _x_1; /*int64*/
  }
  return kk_std_data_hashmap__new_Hash_map(kk_reuse_null, 0, new_data, _x_x1621, _x_x1623, _ctx);
}
 
// Applies a function `f` to each key-value of the hash-map via a tuple.


// lift anonymous function
struct kk_std_data_hashmap_effect_fs_map_fun1627__t {
  struct kk_function_s _base;
  kk_function_t f;
};
static kk_box_t kk_std_data_hashmap_effect_fs_map_fun1627(kk_function_t _fself, kk_box_t _b_x331, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_effect_fs_new_map_fun1627(kk_function_t f, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_effect_fs_map_fun1627__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_effect_fs_map_fun1627__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_effect_fs_map_fun1627, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap_effect_fs_map_fun1630__t {
  struct kk_function_s _base;
  kk_function_t f;
};
static kk_box_t kk_std_data_hashmap_effect_fs_map_fun1630(kk_function_t _fself, kk_box_t _b_x328, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_effect_fs_new_map_fun1630(kk_function_t f, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_effect_fs_map_fun1630__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_effect_fs_map_fun1630__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_effect_fs_map_fun1630, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashmap_effect_fs_map_fun1630(kk_function_t _fself, kk_box_t _b_x328, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_effect_fs_map_fun1630__t* _self = kk_function_as(struct kk_std_data_hashmap_effect_fs_map_fun1630__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* ((3378, 3379)) -> 3382 (3380, 3381) */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _x_x1631;
  kk_std_core_types__tuple2 _x_x1632 = kk_std_core_types__tuple2_unbox(_b_x328, KK_OWNED, _ctx); /*(3378, 3379)*/
  _x_x1631 = kk_function_call(kk_std_core_types__tuple2, (kk_function_t, kk_std_core_types__tuple2, kk_context_t*), f, (f, _x_x1632, _ctx), _ctx); /*(3380, 3381)*/
  return kk_std_core_types__tuple2_box(_x_x1631, _ctx);
}
static kk_box_t kk_std_data_hashmap_effect_fs_map_fun1627(kk_function_t _fself, kk_box_t _b_x331, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_effect_fs_map_fun1627__t* _self = kk_function_as(struct kk_std_data_hashmap_effect_fs_map_fun1627__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* ((3378, 3379)) -> 3382 (3380, 3381) */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_std_core_types__list _x_x1628;
  kk_std_core_types__list _x_x1629 = kk_std_core_types__list_unbox(_b_x331, KK_OWNED, _ctx); /*list<(3378, 3379)>*/
  _x_x1628 = kk_std_core_list_map(_x_x1629, kk_std_data_hashmap_effect_fs_new_map_fun1630(f, _ctx), _ctx); /*list<5296>*/
  return kk_std_core_types__list_box(_x_x1628, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap_effect_fs_map_fun1634__t {
  struct kk_function_s _base;
  kk_std_data_hashmap__hash_map hm;
};
static kk_box_t kk_std_data_hashmap_effect_fs_map_fun1634(kk_function_t _fself, kk_box_t _b_x338, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_effect_fs_new_map_fun1634(kk_std_data_hashmap__hash_map hm, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_effect_fs_map_fun1634__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_effect_fs_map_fun1634__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_effect_fs_map_fun1634, kk_context());
  _self->hm = hm;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashmap_effect_fs_map_fun1634(kk_function_t _fself, kk_box_t _b_x338, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_effect_fs_map_fun1634__t* _self = kk_function_as(struct kk_std_data_hashmap_effect_fs_map_fun1634__t*, _fself, _ctx);
  kk_std_data_hashmap__hash_map hm = _self->hm; /* std/data/hashmap/hash-map<3378,3379> */
  kk_drop_match(_self, {kk_std_data_hashmap__hash_map_dup(hm, _ctx);}, {}, _ctx)
  kk_vector_t new_data_340 = kk_vector_unbox(_b_x338, _ctx); /*vector<list<(3380, 3381)>>*/;
  kk_std_data_hashmap__hash_map _x_x1635;
  kk_integer_t _x_x1636;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1637 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    kk_integer_t _x_0 = _con_x1637->amount;
    kk_integer_dup(_x_0, _ctx);
    _x_x1636 = _x_0; /*int*/
  }
  int64_t _x_x1638;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1639 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    kk_vector_t _pat_0_1 = _con_x1639->data;
    kk_integer_t _pat_1_1 = _con_x1639->amount;
    int64_t _x_1 = _con_x1639->seed;
    if kk_likely(kk_datatype_ptr_is_unique(hm, _ctx)) {
      kk_integer_drop(_pat_1_1, _ctx);
      kk_vector_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(hm, _ctx);
    }
    else {
      kk_datatype_ptr_decref(hm, _ctx);
    }
    _x_x1638 = _x_1; /*int64*/
  }
  _x_x1635 = kk_std_data_hashmap__new_Hash_map(kk_reuse_null, 0, new_data_340, _x_x1636, _x_x1638, _ctx); /*std/data/hashmap/hash-map<8,9>*/
  return kk_std_data_hashmap__hash_map_box(_x_x1635, _ctx);
}

kk_std_data_hashmap__hash_map kk_std_data_hashmap_effect_fs_map(kk_std_data_hashmap__hash_map hm, kk_function_t f, kk_context_t* _ctx) { /* forall<a,b,c,d,e> (hm : hash-map<a,b>, f : ((a, b)) -> e (c, d)) -> e hash-map<c,d> */ 
  kk_vector_t x_10339;
  kk_vector_t _x_x1625;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1626 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    kk_vector_t _x = _con_x1626->data;
    kk_vector_dup(_x, _ctx);
    _x_x1625 = _x; /*vector<list<(3378, 3379)>>*/
  }
  x_10339 = kk_std_core_vector_map(_x_x1625, kk_std_data_hashmap_effect_fs_new_map_fun1627(f, _ctx), _ctx); /*vector<list<(3380, 3381)>>*/
  if (kk_yielding(kk_context())) {
    kk_vector_drop(x_10339, _ctx);
    kk_box_t _x_x1633 = kk_std_core_hnd_yield_extend(kk_std_data_hashmap_effect_fs_new_map_fun1634(hm, _ctx), _ctx); /*5383*/
    return kk_std_data_hashmap__hash_map_unbox(_x_x1633, KK_OWNED, _ctx);
  }
  {
    kk_integer_t _x_x1640;
    {
      struct kk_std_data_hashmap_Hash_map* _con_x1641 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
      kk_integer_t _x_0_0 = _con_x1641->amount;
      kk_integer_dup(_x_0_0, _ctx);
      _x_x1640 = _x_0_0; /*int*/
    }
    int64_t _x_x1642;
    {
      struct kk_std_data_hashmap_Hash_map* _con_x1643 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
      kk_vector_t _pat_0_1_0 = _con_x1643->data;
      kk_integer_t _pat_1_1_0 = _con_x1643->amount;
      int64_t _x_1_0 = _con_x1643->seed;
      if kk_likely(kk_datatype_ptr_is_unique(hm, _ctx)) {
        kk_integer_drop(_pat_1_1_0, _ctx);
        kk_vector_drop(_pat_0_1_0, _ctx);
        kk_datatype_ptr_free(hm, _ctx);
      }
      else {
        kk_datatype_ptr_decref(hm, _ctx);
      }
      _x_x1642 = _x_1_0; /*int64*/
    }
    return kk_std_data_hashmap__new_Hash_map(kk_reuse_null, 0, x_10339, _x_x1640, _x_x1642, _ctx);
  }
}
 
// Applies a function `f` to each key-value of the hash-map via a tuple.


// lift anonymous function
struct kk_std_data_hashmap_unique_fs_map_fun1645__t {
  struct kk_function_s _base;
  kk_function_t f;
};
static kk_box_t kk_std_data_hashmap_unique_fs_map_fun1645(kk_function_t _fself, kk_box_t _b_x346, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_unique_fs_new_map_fun1645(kk_function_t f, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_unique_fs_map_fun1645__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_unique_fs_map_fun1645__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_unique_fs_map_fun1645, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap_unique_fs_map_fun1648__t {
  struct kk_function_s _base;
  kk_function_t f;
};
static kk_box_t kk_std_data_hashmap_unique_fs_map_fun1648(kk_function_t _fself, kk_box_t _b_x343, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_unique_fs_new_map_fun1648(kk_function_t f, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_unique_fs_map_fun1648__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_unique_fs_map_fun1648__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_unique_fs_map_fun1648, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashmap_unique_fs_map_fun1648(kk_function_t _fself, kk_box_t _b_x343, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_unique_fs_map_fun1648__t* _self = kk_function_as(struct kk_std_data_hashmap_unique_fs_map_fun1648__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* ((3528, 3529)) -> (3530, 3531) */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _x_x1649;
  kk_std_core_types__tuple2 _x_x1650 = kk_std_core_types__tuple2_unbox(_b_x343, KK_OWNED, _ctx); /*(3528, 3529)*/
  _x_x1649 = kk_function_call(kk_std_core_types__tuple2, (kk_function_t, kk_std_core_types__tuple2, kk_context_t*), f, (f, _x_x1650, _ctx), _ctx); /*(3530, 3531)*/
  return kk_std_core_types__tuple2_box(_x_x1649, _ctx);
}
static kk_box_t kk_std_data_hashmap_unique_fs_map_fun1645(kk_function_t _fself, kk_box_t _b_x346, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_unique_fs_map_fun1645__t* _self = kk_function_as(struct kk_std_data_hashmap_unique_fs_map_fun1645__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* ((3528, 3529)) -> (3530, 3531) */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_std_core_types__list _x_x1646;
  kk_std_core_types__list _x_x1647 = kk_std_core_types__list_unbox(_b_x346, KK_OWNED, _ctx); /*list<(3528, 3529)>*/
  _x_x1646 = kk_std_core_list_map(_x_x1647, kk_std_data_hashmap_unique_fs_new_map_fun1648(f, _ctx), _ctx); /*list<5495>*/
  return kk_std_core_types__list_box(_x_x1646, _ctx);
}

kk_std_data_hashmap__hash_map kk_std_data_hashmap_unique_fs_map(kk_std_data_hashmap__hash_map hm, kk_function_t f, kk_context_t* _ctx) { /* forall<a,b,c,d> (hm : hash-map<a,b>, f : ((a, b)) -> (c, d)) -> hash-map<c,d> */ 
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1644 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    kk_vector_t data = _con_x1644->data;
    kk_integer_t amount = _con_x1644->amount;
    kk_integer_dup(amount, _ctx);
    kk_vector_dup(data, _ctx);
    kk_vector_t new_data = kk_std_core_dash_extras_unique_fs_map(data, kk_std_data_hashmap_unique_fs_new_map_fun1645(f, _ctx), _ctx); /*vector<list<(3530, 3531)>>*/;
    int64_t _x_x1651;
    {
      struct kk_std_data_hashmap_Hash_map* _con_x1652 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
      kk_vector_t _pat_0_0 = _con_x1652->data;
      kk_integer_t _pat_1_0 = _con_x1652->amount;
      int64_t _x = _con_x1652->seed;
      if kk_likely(kk_datatype_ptr_is_unique(hm, _ctx)) {
        kk_integer_drop(_pat_1_0, _ctx);
        kk_vector_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(hm, _ctx);
      }
      else {
        kk_datatype_ptr_decref(hm, _ctx);
      }
      _x_x1651 = _x; /*int64*/
    }
    return kk_std_data_hashmap__new_Hash_map(kk_reuse_null, 0, new_data, amount, _x_x1651, _ctx);
  }
}
 
// monadic lift

kk_std_data_hashmap__hash_map kk_std_data_hashmap_effect_fs__mlift_map_values_10301(kk_std_data_hashmap__hash_map hm, kk_vector_t new_data, kk_context_t* _ctx) { /* forall<a,b,e,c> (hm : hash-map<c,a>, new-data : vector<list<(c, b)>>) -> e hash-map<c,b> */ 
  kk_integer_t _x_x1653;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1654 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    kk_integer_t _x_0 = _con_x1654->amount;
    kk_integer_dup(_x_0, _ctx);
    _x_x1653 = _x_0; /*int*/
  }
  int64_t _x_x1655;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1656 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    kk_vector_t _pat_0_1 = _con_x1656->data;
    kk_integer_t _pat_1_1 = _con_x1656->amount;
    int64_t _x_1 = _con_x1656->seed;
    if kk_likely(kk_datatype_ptr_is_unique(hm, _ctx)) {
      kk_integer_drop(_pat_1_1, _ctx);
      kk_vector_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(hm, _ctx);
    }
    else {
      kk_datatype_ptr_decref(hm, _ctx);
    }
    _x_x1655 = _x_1; /*int64*/
  }
  return kk_std_data_hashmap__new_Hash_map(kk_reuse_null, 0, new_data, _x_x1653, _x_x1655, _ctx);
}
 
// Applies a function `f` to each value of the hash-map.


// lift anonymous function
struct kk_std_data_hashmap_effect_fs_map_values_fun1659__t {
  struct kk_function_s _base;
  kk_function_t f;
};
static kk_box_t kk_std_data_hashmap_effect_fs_map_values_fun1659(kk_function_t _fself, kk_box_t _b_x359, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_effect_fs_new_map_values_fun1659(kk_function_t f, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_effect_fs_map_values_fun1659__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_effect_fs_map_values_fun1659__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_effect_fs_map_values_fun1659, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap_effect_fs_map_values_fun1662__t {
  struct kk_function_s _base;
  kk_function_t f;
};
static kk_box_t kk_std_data_hashmap_effect_fs_map_values_fun1662(kk_function_t _fself, kk_box_t _b_x356, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_effect_fs_new_map_values_fun1662(kk_function_t f, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_effect_fs_map_values_fun1662__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_effect_fs_map_values_fun1662__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_effect_fs_map_values_fun1662, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap_effect_fs_map_values_fun1665__t {
  struct kk_function_s _base;
  kk_box_t key;
};
static kk_box_t kk_std_data_hashmap_effect_fs_map_values_fun1665(kk_function_t _fself, kk_box_t _b_x353, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_effect_fs_new_map_values_fun1665(kk_box_t key, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_effect_fs_map_values_fun1665__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_effect_fs_map_values_fun1665__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_effect_fs_map_values_fun1665, kk_context());
  _self->key = key;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashmap_effect_fs_map_values_fun1665(kk_function_t _fself, kk_box_t _b_x353, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_effect_fs_map_values_fun1665__t* _self = kk_function_as(struct kk_std_data_hashmap_effect_fs_map_values_fun1665__t*, _fself, _ctx);
  kk_box_t key = _self->key; /* 3781 */
  kk_drop_match(_self, {kk_box_dup(key, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _x_x1666 = kk_std_core_types__new_Tuple2(key, _b_x353, _ctx); /*(1038, 1039)*/
  return kk_std_core_types__tuple2_box(_x_x1666, _ctx);
}
static kk_box_t kk_std_data_hashmap_effect_fs_map_values_fun1662(kk_function_t _fself, kk_box_t _b_x356, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_effect_fs_map_values_fun1662__t* _self = kk_function_as(struct kk_std_data_hashmap_effect_fs_map_values_fun1662__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (3778) -> 3780 3779 */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _x_x1663;
  kk_std_core_types__tuple2 _match_x1291 = kk_std_core_types__tuple2_unbox(_b_x356, KK_OWNED, _ctx); /*(3781, 3778)*/;
  {
    kk_box_t key = _match_x1291.fst;
    kk_box_t value = _match_x1291.snd;
    kk_box_t x_0_10347 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), f, (f, value, _ctx), _ctx); /*3779*/;
    if (kk_yielding(kk_context())) {
      kk_box_drop(x_0_10347, _ctx);
      kk_box_t _x_x1664 = kk_std_core_hnd_yield_extend(kk_std_data_hashmap_effect_fs_new_map_values_fun1665(key, _ctx), _ctx); /*5782*/
      _x_x1663 = kk_std_core_types__tuple2_unbox(_x_x1664, KK_OWNED, _ctx); /*(3781, 3779)*/
    }
    else {
      _x_x1663 = kk_std_core_types__new_Tuple2(key, x_0_10347, _ctx); /*(3781, 3779)*/
    }
  }
  return kk_std_core_types__tuple2_box(_x_x1663, _ctx);
}
static kk_box_t kk_std_data_hashmap_effect_fs_map_values_fun1659(kk_function_t _fself, kk_box_t _b_x359, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_effect_fs_map_values_fun1659__t* _self = kk_function_as(struct kk_std_data_hashmap_effect_fs_map_values_fun1659__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (3778) -> 3780 3779 */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_std_core_types__list _x_x1660;
  kk_std_core_types__list _x_x1661 = kk_std_core_types__list_unbox(_b_x359, KK_OWNED, _ctx); /*list<(3781, 3778)>*/
  _x_x1660 = kk_std_core_list_map(_x_x1661, kk_std_data_hashmap_effect_fs_new_map_values_fun1662(f, _ctx), _ctx); /*list<5698>*/
  return kk_std_core_types__list_box(_x_x1660, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap_effect_fs_map_values_fun1668__t {
  struct kk_function_s _base;
  kk_std_data_hashmap__hash_map hm;
};
static kk_box_t kk_std_data_hashmap_effect_fs_map_values_fun1668(kk_function_t _fself, kk_box_t _b_x368, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_effect_fs_new_map_values_fun1668(kk_std_data_hashmap__hash_map hm, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_effect_fs_map_values_fun1668__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_effect_fs_map_values_fun1668__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_effect_fs_map_values_fun1668, kk_context());
  _self->hm = hm;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashmap_effect_fs_map_values_fun1668(kk_function_t _fself, kk_box_t _b_x368, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_effect_fs_map_values_fun1668__t* _self = kk_function_as(struct kk_std_data_hashmap_effect_fs_map_values_fun1668__t*, _fself, _ctx);
  kk_std_data_hashmap__hash_map hm = _self->hm; /* std/data/hashmap/hash-map<3781,3778> */
  kk_drop_match(_self, {kk_std_data_hashmap__hash_map_dup(hm, _ctx);}, {}, _ctx)
  kk_vector_t new_data_371 = kk_vector_unbox(_b_x368, _ctx); /*vector<list<(3781, 3779)>>*/;
  kk_std_data_hashmap__hash_map _x_x1669;
  kk_integer_t _x_x1670;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1671 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    kk_integer_t _x_0 = _con_x1671->amount;
    kk_integer_dup(_x_0, _ctx);
    _x_x1670 = _x_0; /*int*/
  }
  int64_t _x_x1672;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1673 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    kk_vector_t _pat_0_1_0 = _con_x1673->data;
    kk_integer_t _pat_1_1 = _con_x1673->amount;
    int64_t _x_1 = _con_x1673->seed;
    if kk_likely(kk_datatype_ptr_is_unique(hm, _ctx)) {
      kk_integer_drop(_pat_1_1, _ctx);
      kk_vector_drop(_pat_0_1_0, _ctx);
      kk_datatype_ptr_free(hm, _ctx);
    }
    else {
      kk_datatype_ptr_decref(hm, _ctx);
    }
    _x_x1672 = _x_1; /*int64*/
  }
  _x_x1669 = kk_std_data_hashmap__new_Hash_map(kk_reuse_null, 0, new_data_371, _x_x1670, _x_x1672, _ctx); /*std/data/hashmap/hash-map<8,9>*/
  return kk_std_data_hashmap__hash_map_box(_x_x1669, _ctx);
}

kk_std_data_hashmap__hash_map kk_std_data_hashmap_effect_fs_map_values(kk_std_data_hashmap__hash_map hm, kk_function_t f, kk_context_t* _ctx) { /* forall<a,b,e,c> (hm : hash-map<c,a>, f : (a) -> e b) -> e hash-map<c,b> */ 
  kk_vector_t x_10344;
  kk_vector_t _x_x1657;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1658 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    kk_vector_t _x = _con_x1658->data;
    kk_vector_dup(_x, _ctx);
    _x_x1657 = _x; /*vector<list<(3781, 3778)>>*/
  }
  x_10344 = kk_std_core_vector_map(_x_x1657, kk_std_data_hashmap_effect_fs_new_map_values_fun1659(f, _ctx), _ctx); /*vector<list<(3781, 3779)>>*/
  if (kk_yielding(kk_context())) {
    kk_vector_drop(x_10344, _ctx);
    kk_box_t _x_x1667 = kk_std_core_hnd_yield_extend(kk_std_data_hashmap_effect_fs_new_map_values_fun1668(hm, _ctx), _ctx); /*5782*/
    return kk_std_data_hashmap__hash_map_unbox(_x_x1667, KK_OWNED, _ctx);
  }
  {
    kk_integer_t _x_x1674;
    {
      struct kk_std_data_hashmap_Hash_map* _con_x1675 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
      kk_integer_t _x_0_0 = _con_x1675->amount;
      kk_integer_dup(_x_0_0, _ctx);
      _x_x1674 = _x_0_0; /*int*/
    }
    int64_t _x_x1676;
    {
      struct kk_std_data_hashmap_Hash_map* _con_x1677 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
      kk_vector_t _pat_0_1_1 = _con_x1677->data;
      kk_integer_t _pat_1_1_0 = _con_x1677->amount;
      int64_t _x_1_0 = _con_x1677->seed;
      if kk_likely(kk_datatype_ptr_is_unique(hm, _ctx)) {
        kk_integer_drop(_pat_1_1_0, _ctx);
        kk_vector_drop(_pat_0_1_1, _ctx);
        kk_datatype_ptr_free(hm, _ctx);
      }
      else {
        kk_datatype_ptr_decref(hm, _ctx);
      }
      _x_x1676 = _x_1_0; /*int64*/
    }
    return kk_std_data_hashmap__new_Hash_map(kk_reuse_null, 0, x_10344, _x_x1674, _x_x1676, _ctx);
  }
}
 
// Applies a function `f` to each value of the hash-map.


// lift anonymous function
struct kk_std_data_hashmap_unique_fs_map_values_fun1679__t {
  struct kk_function_s _base;
  kk_function_t f;
};
static kk_box_t kk_std_data_hashmap_unique_fs_map_values_fun1679(kk_function_t _fself, kk_box_t _b_x377, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_unique_fs_new_map_values_fun1679(kk_function_t f, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_unique_fs_map_values_fun1679__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_unique_fs_map_values_fun1679__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_unique_fs_map_values_fun1679, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap_unique_fs_map_values_fun1682__t {
  struct kk_function_s _base;
  kk_function_t f;
};
static kk_box_t kk_std_data_hashmap_unique_fs_map_values_fun1682(kk_function_t _fself, kk_box_t _b_x374, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_unique_fs_new_map_values_fun1682(kk_function_t f, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_unique_fs_map_values_fun1682__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_unique_fs_map_values_fun1682__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_unique_fs_map_values_fun1682, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashmap_unique_fs_map_values_fun1682(kk_function_t _fself, kk_box_t _b_x374, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_unique_fs_map_values_fun1682__t* _self = kk_function_as(struct kk_std_data_hashmap_unique_fs_map_values_fun1682__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (3945) -> 3946 */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _x_x1683;
  kk_std_core_types__tuple2 _match_x1289 = kk_std_core_types__tuple2_unbox(_b_x374, KK_OWNED, _ctx); /*(3947, 3945)*/;
  {
    kk_box_t key = _match_x1289.fst;
    kk_box_t value = _match_x1289.snd;
    kk_box_t _x_x1684 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), f, (f, value, _ctx), _ctx); /*3946*/
    _x_x1683 = kk_std_core_types__new_Tuple2(key, _x_x1684, _ctx); /*(1038, 1039)*/
  }
  return kk_std_core_types__tuple2_box(_x_x1683, _ctx);
}
static kk_box_t kk_std_data_hashmap_unique_fs_map_values_fun1679(kk_function_t _fself, kk_box_t _b_x377, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_unique_fs_map_values_fun1679__t* _self = kk_function_as(struct kk_std_data_hashmap_unique_fs_map_values_fun1679__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (3945) -> 3946 */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_std_core_types__list _x_x1680;
  kk_std_core_types__list _x_x1681 = kk_std_core_types__list_unbox(_b_x377, KK_OWNED, _ctx); /*list<(3947, 3945)>*/
  _x_x1680 = kk_std_core_list_map(_x_x1681, kk_std_data_hashmap_unique_fs_new_map_values_fun1682(f, _ctx), _ctx); /*list<5923>*/
  return kk_std_core_types__list_box(_x_x1680, _ctx);
}

kk_std_data_hashmap__hash_map kk_std_data_hashmap_unique_fs_map_values(kk_std_data_hashmap__hash_map hm, kk_function_t f, kk_context_t* _ctx) { /* forall<a,b,c> (hm : hash-map<c,a>, f : (a) -> b) -> hash-map<c,b> */ 
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1678 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    kk_vector_t data = _con_x1678->data;
    kk_integer_t amount = _con_x1678->amount;
    int64_t seed = _con_x1678->seed;
    kk_reuse_t _ru_x1403 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(hm, _ctx)) {
      _ru_x1403 = (kk_datatype_ptr_reuse(hm, _ctx));
    }
    else {
      kk_integer_dup(amount, _ctx);
      kk_vector_dup(data, _ctx);
      kk_datatype_ptr_decref(hm, _ctx);
    }
    kk_vector_t new_data = kk_std_core_dash_extras_unique_fs_map(data, kk_std_data_hashmap_unique_fs_new_map_values_fun1679(f, _ctx), _ctx); /*vector<list<(3947, 3946)>>*/;
    return kk_std_data_hashmap__new_Hash_map(_ru_x1403, 0, new_data, amount, seed, _ctx);
  }
}
 
// monadic lift

kk_std_data_hashmap__hash_map kk_std_data_hashmap_effect_fs__mlift_map_keys_10303(kk_std_data_hashmap__hash_map hm, kk_vector_t new_data, kk_context_t* _ctx) { /* forall<a,b,e,c> (hm : hash-map<a,c>, new-data : vector<list<(b, c)>>) -> e hash-map<b,c> */ 
  kk_integer_t _x_x1685;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1686 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    kk_integer_t _x_0 = _con_x1686->amount;
    kk_integer_dup(_x_0, _ctx);
    _x_x1685 = _x_0; /*int*/
  }
  int64_t _x_x1687;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1688 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    kk_vector_t _pat_0_1 = _con_x1688->data;
    kk_integer_t _pat_1_1 = _con_x1688->amount;
    int64_t _x_1 = _con_x1688->seed;
    if kk_likely(kk_datatype_ptr_is_unique(hm, _ctx)) {
      kk_integer_drop(_pat_1_1, _ctx);
      kk_vector_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(hm, _ctx);
    }
    else {
      kk_datatype_ptr_decref(hm, _ctx);
    }
    _x_x1687 = _x_1; /*int64*/
  }
  return kk_std_data_hashmap__new_Hash_map(kk_reuse_null, 0, new_data, _x_x1685, _x_x1687, _ctx);
}
 
// Applies a function `f` to each key of the hash-map.


// lift anonymous function
struct kk_std_data_hashmap_effect_fs_map_keys_fun1691__t {
  struct kk_function_s _base;
  kk_function_t f;
};
static kk_box_t kk_std_data_hashmap_effect_fs_map_keys_fun1691(kk_function_t _fself, kk_box_t _b_x391, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_effect_fs_new_map_keys_fun1691(kk_function_t f, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_effect_fs_map_keys_fun1691__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_effect_fs_map_keys_fun1691__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_effect_fs_map_keys_fun1691, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap_effect_fs_map_keys_fun1694__t {
  struct kk_function_s _base;
  kk_function_t f;
};
static kk_box_t kk_std_data_hashmap_effect_fs_map_keys_fun1694(kk_function_t _fself, kk_box_t _b_x388, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_effect_fs_new_map_keys_fun1694(kk_function_t f, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_effect_fs_map_keys_fun1694__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_effect_fs_map_keys_fun1694__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_effect_fs_map_keys_fun1694, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap_effect_fs_map_keys_fun1697__t {
  struct kk_function_s _base;
  kk_box_t value;
};
static kk_box_t kk_std_data_hashmap_effect_fs_map_keys_fun1697(kk_function_t _fself, kk_box_t _b_x385, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_effect_fs_new_map_keys_fun1697(kk_box_t value, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_effect_fs_map_keys_fun1697__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_effect_fs_map_keys_fun1697__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_effect_fs_map_keys_fun1697, kk_context());
  _self->value = value;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashmap_effect_fs_map_keys_fun1697(kk_function_t _fself, kk_box_t _b_x385, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_effect_fs_map_keys_fun1697__t* _self = kk_function_as(struct kk_std_data_hashmap_effect_fs_map_keys_fun1697__t*, _fself, _ctx);
  kk_box_t value = _self->value; /* 4172 */
  kk_drop_match(_self, {kk_box_dup(value, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _x_x1698 = kk_std_core_types__new_Tuple2(_b_x385, value, _ctx); /*(1038, 1039)*/
  return kk_std_core_types__tuple2_box(_x_x1698, _ctx);
}
static kk_box_t kk_std_data_hashmap_effect_fs_map_keys_fun1694(kk_function_t _fself, kk_box_t _b_x388, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_effect_fs_map_keys_fun1694__t* _self = kk_function_as(struct kk_std_data_hashmap_effect_fs_map_keys_fun1694__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (4169) -> 4171 4170 */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _x_x1695;
  kk_std_core_types__tuple2 _match_x1287 = kk_std_core_types__tuple2_unbox(_b_x388, KK_OWNED, _ctx); /*(4169, 4172)*/;
  {
    kk_box_t key = _match_x1287.fst;
    kk_box_t value = _match_x1287.snd;
    kk_box_t x_0_10356 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), f, (f, key, _ctx), _ctx); /*4170*/;
    if (kk_yielding(kk_context())) {
      kk_box_drop(x_0_10356, _ctx);
      kk_box_t _x_x1696 = kk_std_core_hnd_yield_extend(kk_std_data_hashmap_effect_fs_new_map_keys_fun1697(value, _ctx), _ctx); /*6173*/
      _x_x1695 = kk_std_core_types__tuple2_unbox(_x_x1696, KK_OWNED, _ctx); /*(4170, 4172)*/
    }
    else {
      _x_x1695 = kk_std_core_types__new_Tuple2(x_0_10356, value, _ctx); /*(4170, 4172)*/
    }
  }
  return kk_std_core_types__tuple2_box(_x_x1695, _ctx);
}
static kk_box_t kk_std_data_hashmap_effect_fs_map_keys_fun1691(kk_function_t _fself, kk_box_t _b_x391, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_effect_fs_map_keys_fun1691__t* _self = kk_function_as(struct kk_std_data_hashmap_effect_fs_map_keys_fun1691__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (4169) -> 4171 4170 */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_std_core_types__list _x_x1692;
  kk_std_core_types__list _x_x1693 = kk_std_core_types__list_unbox(_b_x391, KK_OWNED, _ctx); /*list<(4169, 4172)>*/
  _x_x1692 = kk_std_core_list_map(_x_x1693, kk_std_data_hashmap_effect_fs_new_map_keys_fun1694(f, _ctx), _ctx); /*list<6089>*/
  return kk_std_core_types__list_box(_x_x1692, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap_effect_fs_map_keys_fun1700__t {
  struct kk_function_s _base;
  kk_std_data_hashmap__hash_map hm;
};
static kk_box_t kk_std_data_hashmap_effect_fs_map_keys_fun1700(kk_function_t _fself, kk_box_t _b_x400, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_effect_fs_new_map_keys_fun1700(kk_std_data_hashmap__hash_map hm, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_effect_fs_map_keys_fun1700__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_effect_fs_map_keys_fun1700__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_effect_fs_map_keys_fun1700, kk_context());
  _self->hm = hm;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashmap_effect_fs_map_keys_fun1700(kk_function_t _fself, kk_box_t _b_x400, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_effect_fs_map_keys_fun1700__t* _self = kk_function_as(struct kk_std_data_hashmap_effect_fs_map_keys_fun1700__t*, _fself, _ctx);
  kk_std_data_hashmap__hash_map hm = _self->hm; /* std/data/hashmap/hash-map<4169,4172> */
  kk_drop_match(_self, {kk_std_data_hashmap__hash_map_dup(hm, _ctx);}, {}, _ctx)
  kk_vector_t new_data_403 = kk_vector_unbox(_b_x400, _ctx); /*vector<list<(4170, 4172)>>*/;
  kk_std_data_hashmap__hash_map _x_x1701;
  kk_integer_t _x_x1702;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1703 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    kk_integer_t _x_0 = _con_x1703->amount;
    kk_integer_dup(_x_0, _ctx);
    _x_x1702 = _x_0; /*int*/
  }
  int64_t _x_x1704;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1705 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    kk_vector_t _pat_0_1_0 = _con_x1705->data;
    kk_integer_t _pat_1_1 = _con_x1705->amount;
    int64_t _x_1 = _con_x1705->seed;
    if kk_likely(kk_datatype_ptr_is_unique(hm, _ctx)) {
      kk_integer_drop(_pat_1_1, _ctx);
      kk_vector_drop(_pat_0_1_0, _ctx);
      kk_datatype_ptr_free(hm, _ctx);
    }
    else {
      kk_datatype_ptr_decref(hm, _ctx);
    }
    _x_x1704 = _x_1; /*int64*/
  }
  _x_x1701 = kk_std_data_hashmap__new_Hash_map(kk_reuse_null, 0, new_data_403, _x_x1702, _x_x1704, _ctx); /*std/data/hashmap/hash-map<8,9>*/
  return kk_std_data_hashmap__hash_map_box(_x_x1701, _ctx);
}

kk_std_data_hashmap__hash_map kk_std_data_hashmap_effect_fs_map_keys(kk_std_data_hashmap__hash_map hm, kk_function_t f, kk_context_t* _ctx) { /* forall<a,b,e,c> (hm : hash-map<a,c>, f : (a) -> e b) -> e hash-map<b,c> */ 
  kk_vector_t x_10353;
  kk_vector_t _x_x1689;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1690 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    kk_vector_t _x = _con_x1690->data;
    kk_vector_dup(_x, _ctx);
    _x_x1689 = _x; /*vector<list<(4169, 4172)>>*/
  }
  x_10353 = kk_std_core_vector_map(_x_x1689, kk_std_data_hashmap_effect_fs_new_map_keys_fun1691(f, _ctx), _ctx); /*vector<list<(4170, 4172)>>*/
  if (kk_yielding(kk_context())) {
    kk_vector_drop(x_10353, _ctx);
    kk_box_t _x_x1699 = kk_std_core_hnd_yield_extend(kk_std_data_hashmap_effect_fs_new_map_keys_fun1700(hm, _ctx), _ctx); /*6173*/
    return kk_std_data_hashmap__hash_map_unbox(_x_x1699, KK_OWNED, _ctx);
  }
  {
    kk_integer_t _x_x1706;
    {
      struct kk_std_data_hashmap_Hash_map* _con_x1707 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
      kk_integer_t _x_0_0 = _con_x1707->amount;
      kk_integer_dup(_x_0_0, _ctx);
      _x_x1706 = _x_0_0; /*int*/
    }
    int64_t _x_x1708;
    {
      struct kk_std_data_hashmap_Hash_map* _con_x1709 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
      kk_vector_t _pat_0_1_1 = _con_x1709->data;
      kk_integer_t _pat_1_1_0 = _con_x1709->amount;
      int64_t _x_1_0 = _con_x1709->seed;
      if kk_likely(kk_datatype_ptr_is_unique(hm, _ctx)) {
        kk_integer_drop(_pat_1_1_0, _ctx);
        kk_vector_drop(_pat_0_1_1, _ctx);
        kk_datatype_ptr_free(hm, _ctx);
      }
      else {
        kk_datatype_ptr_decref(hm, _ctx);
      }
      _x_x1708 = _x_1_0; /*int64*/
    }
    return kk_std_data_hashmap__new_Hash_map(kk_reuse_null, 0, x_10353, _x_x1706, _x_x1708, _ctx);
  }
}
 
// Applies a function `f` to each key of the hash-map.


// lift anonymous function
struct kk_std_data_hashmap_unique_fs_map_keys_fun1711__t {
  struct kk_function_s _base;
  kk_function_t f;
};
static kk_box_t kk_std_data_hashmap_unique_fs_map_keys_fun1711(kk_function_t _fself, kk_box_t _b_x409, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_unique_fs_new_map_keys_fun1711(kk_function_t f, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_unique_fs_map_keys_fun1711__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_unique_fs_map_keys_fun1711__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_unique_fs_map_keys_fun1711, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap_unique_fs_map_keys_fun1714__t {
  struct kk_function_s _base;
  kk_function_t f;
};
static kk_box_t kk_std_data_hashmap_unique_fs_map_keys_fun1714(kk_function_t _fself, kk_box_t _b_x406, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_unique_fs_new_map_keys_fun1714(kk_function_t f, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_unique_fs_map_keys_fun1714__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap_unique_fs_map_keys_fun1714__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap_unique_fs_map_keys_fun1714, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashmap_unique_fs_map_keys_fun1714(kk_function_t _fself, kk_box_t _b_x406, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_unique_fs_map_keys_fun1714__t* _self = kk_function_as(struct kk_std_data_hashmap_unique_fs_map_keys_fun1714__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (4345) -> 4346 */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _x_x1715;
  kk_std_core_types__tuple2 _match_x1285 = kk_std_core_types__tuple2_unbox(_b_x406, KK_OWNED, _ctx); /*(4345, 4347)*/;
  {
    kk_box_t key = _match_x1285.fst;
    kk_box_t value = _match_x1285.snd;
    kk_box_t _x_x1716 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), f, (f, key, _ctx), _ctx); /*4346*/
    _x_x1715 = kk_std_core_types__new_Tuple2(_x_x1716, value, _ctx); /*(1038, 1039)*/
  }
  return kk_std_core_types__tuple2_box(_x_x1715, _ctx);
}
static kk_box_t kk_std_data_hashmap_unique_fs_map_keys_fun1711(kk_function_t _fself, kk_box_t _b_x409, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_unique_fs_map_keys_fun1711__t* _self = kk_function_as(struct kk_std_data_hashmap_unique_fs_map_keys_fun1711__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (4345) -> 4346 */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_std_core_types__list _x_x1712;
  kk_std_core_types__list _x_x1713 = kk_std_core_types__list_unbox(_b_x409, KK_OWNED, _ctx); /*list<(4345, 4347)>*/
  _x_x1712 = kk_std_core_list_map(_x_x1713, kk_std_data_hashmap_unique_fs_new_map_keys_fun1714(f, _ctx), _ctx); /*list<6314>*/
  return kk_std_core_types__list_box(_x_x1712, _ctx);
}

kk_std_data_hashmap__hash_map kk_std_data_hashmap_unique_fs_map_keys(kk_std_data_hashmap__hash_map hm, kk_function_t f, kk_context_t* _ctx) { /* forall<a,b,c> (hm : hash-map<a,c>, f : (a) -> b) -> hash-map<b,c> */ 
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1710 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
    kk_vector_t data = _con_x1710->data;
    kk_integer_t amount = _con_x1710->amount;
    kk_integer_dup(amount, _ctx);
    kk_vector_dup(data, _ctx);
    kk_vector_t new_data = kk_std_core_dash_extras_unique_fs_map(data, kk_std_data_hashmap_unique_fs_new_map_keys_fun1711(f, _ctx), _ctx); /*vector<list<(4346, 4347)>>*/;
    int64_t _x_x1717;
    {
      struct kk_std_data_hashmap_Hash_map* _con_x1718 = kk_std_data_hashmap__as_Hash_map(hm, _ctx);
      kk_vector_t _pat_0_0 = _con_x1718->data;
      kk_integer_t _pat_1_0 = _con_x1718->amount;
      int64_t _x = _con_x1718->seed;
      if kk_likely(kk_datatype_ptr_is_unique(hm, _ctx)) {
        kk_integer_drop(_pat_1_0, _ctx);
        kk_vector_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(hm, _ctx);
      }
      else {
        kk_datatype_ptr_decref(hm, _ctx);
      }
      _x_x1717 = _x; /*int64*/
    }
    return kk_std_data_hashmap__new_Hash_map(kk_reuse_null, 0, new_data, amount, _x_x1717, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10304_fun1720__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10304_fun1720(kk_function_t _fself, kk_box_t _b_x418, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10304_fun1720(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10304_fun1720, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10304_fun1720(kk_function_t _fself, kk_box_t _b_x418, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_data_hashmap__hash_map hm_5_421 = kk_std_data_hashmap__hash_map_unbox(_b_x418, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/;
  kk_integer_t _x_x1721;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1722 = kk_std_data_hashmap__as_Hash_map(hm_5_421, _ctx);
    kk_vector_t _pat_0_1 = _con_x1722->data;
    kk_integer_t _x_1 = _con_x1722->amount;
    if kk_likely(kk_datatype_ptr_is_unique(hm_5_421, _ctx)) {
      kk_vector_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(hm_5_421, _ctx);
    }
    else {
      kk_integer_dup(_x_1, _ctx);
      kk_datatype_ptr_decref(hm_5_421, _ctx);
    }
    _x_x1721 = _x_1; /*int*/
  }
  return kk_integer_box(_x_x1721, _ctx);
}

kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10304(kk_std_data_hashmap__hash_map _y_x10161, kk_context_t* _ctx) { /* forall<h> (hash-map<int,int>) -> <local<h>,exn,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> int */ 
  kk_box_t _x_x1719 = kk_std_core_hnd__open_none1(kk_std_data_hashmap__new_mlift_test_hash_map_10304_fun1720(_ctx), kk_std_data_hashmap__hash_map_box(_y_x10161, _ctx), _ctx); /*1001*/
  return kk_integer_unbox(_x_x1719, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10305_fun1724__t {
  struct kk_function_s _base;
  kk_std_data_hashmap__hash_map _y_x10158;
  kk_integer_t i_2;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10305_fun1724(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10305_fun1724(kk_std_data_hashmap__hash_map _y_x10158, kk_integer_t i_2, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10305_fun1724__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10305_fun1724__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10305_fun1724, kk_context());
  _self->_y_x10158 = _y_x10158;
  _self->i_2 = i_2;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10305_fun1727__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10305_fun1727(kk_function_t _fself, kk_integer_t _x1_x1725, int64_t _x2_x1726, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10305_fun1727(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10305_fun1727, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10305_fun1727(kk_function_t _fself, kk_integer_t _x1_x1725, int64_t _x2_x1726, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hash_int_fs_hash(_x1_x1725, _x2_x1726, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10305_fun1728__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10305_fun1728(kk_function_t _fself, kk_integer_t x, kk_integer_t y, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10305_fun1728(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10305_fun1728, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10305_fun1728(kk_function_t _fself, kk_integer_t x, kk_integer_t y, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _brw_x1284 = kk_integer_eq_borrow(x,y,kk_context()); /*bool*/;
  kk_integer_drop(x, _ctx);
  kk_integer_drop(y, _ctx);
  return _brw_x1284;
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10305_fun1731__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10305_fun1731(kk_function_t _fself, kk_integer_t _x1_x1729, kk_integer_t _x2_x1730, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10305_fun1731(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10305_fun1731, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10305_fun1731(kk_function_t _fself, kk_integer_t _x1_x1729, kk_integer_t _x2_x1730, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashmap_when_resize(_x1_x1729, _x2_x1730, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10305_fun1734__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10305_fun1734(kk_function_t _fself, kk_integer_t _x1_x1732, kk_integer_t _x2_x1733, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10305_fun1734(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10305_fun1734, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10305_fun1734(kk_function_t _fself, kk_integer_t _x1_x1732, kk_integer_t _x2_x1733, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashmap_resizer(_x1_x1732, _x2_x1733, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10305_fun1736__t {
  struct kk_function_s _base;
  kk_function_t _b_x425_442;
};
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10305_fun1736(kk_function_t _fself, kk_box_t _b_x429, int64_t _b_x430, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10305_fun1736(kk_function_t _b_x425_442, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10305_fun1736__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10305_fun1736__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10305_fun1736, kk_context());
  _self->_b_x425_442 = _b_x425_442;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10305_fun1736(kk_function_t _fself, kk_box_t _b_x429, int64_t _b_x430, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10305_fun1736__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10305_fun1736__t*, _fself, _ctx);
  kk_function_t _b_x425_442 = _self->_b_x425_442; /* (i : int, seed : int64) -> int */
  kk_drop_match(_self, {kk_function_dup(_b_x425_442, _ctx);}, {}, _ctx)
  kk_integer_t _x_x1737 = kk_integer_unbox(_b_x429, _ctx); /*int*/
  return kk_function_call(kk_integer_t, (kk_function_t, kk_integer_t, int64_t, kk_context_t*), _b_x425_442, (_b_x425_442, _x_x1737, _b_x430, _ctx), _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10305_fun1738__t {
  struct kk_function_s _base;
  kk_function_t _b_x426_443;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10305_fun1738(kk_function_t _fself, kk_box_t _b_x431, kk_box_t _b_x432, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10305_fun1738(kk_function_t _b_x426_443, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10305_fun1738__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10305_fun1738__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10305_fun1738, kk_context());
  _self->_b_x426_443 = _b_x426_443;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10305_fun1738(kk_function_t _fself, kk_box_t _b_x431, kk_box_t _b_x432, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10305_fun1738__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10305_fun1738__t*, _fself, _ctx);
  kk_function_t _b_x426_443 = _self->_b_x426_443; /* (x : int, y : int) -> bool */
  kk_drop_match(_self, {kk_function_dup(_b_x426_443, _ctx);}, {}, _ctx)
  kk_integer_t _x_x1739 = kk_integer_unbox(_b_x431, _ctx); /*int*/
  kk_integer_t _x_x1740 = kk_integer_unbox(_b_x432, _ctx); /*int*/
  return kk_function_call(bool, (kk_function_t, kk_integer_t, kk_integer_t, kk_context_t*), _b_x426_443, (_b_x426_443, _x_x1739, _x_x1740, _ctx), _ctx);
}
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10305_fun1724(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10305_fun1724__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10305_fun1724__t*, _fself, _ctx);
  kk_std_data_hashmap__hash_map _y_x10158 = _self->_y_x10158; /* std/data/hashmap/hash-map<int,int> */
  kk_integer_t i_2 = _self->i_2; /* int */
  kk_drop_match(_self, {kk_std_data_hashmap__hash_map_dup(_y_x10158, _ctx);kk_integer_dup(i_2, _ctx);}, {}, _ctx)
  kk_std_data_hashmap__hash_map _b_x422_439 = _y_x10158; /*std/data/hashmap/hash-map<int,int>*/;
  kk_integer_t _b_x423_440 = kk_integer_dup(i_2, _ctx); /*int*/;
  kk_integer_t _b_x424_441 = i_2; /*int*/;
  kk_function_t _b_x425_442 = kk_std_data_hashmap__new_mlift_test_hash_map_10305_fun1727(_ctx); /*(i : int, seed : int64) -> int*/;
  kk_function_t _b_x426_443 = kk_std_data_hashmap__new_mlift_test_hash_map_10305_fun1728(_ctx); /*(x : int, y : int) -> bool*/;
  kk_function_t _b_x427_444 = kk_std_data_hashmap__new_mlift_test_hash_map_10305_fun1731(_ctx); /*(table-size : int, item-count : int) -> bool*/;
  kk_function_t _b_x428_445 = kk_std_data_hashmap__new_mlift_test_hash_map_10305_fun1734(_ctx); /*(table-size : int, item-count : int) -> int*/;
  kk_std_data_hashmap__hash_map _x_x1735 = kk_std_data_hashmap_insert(_b_x422_439, kk_integer_box(_b_x423_440, _ctx), kk_integer_box(_b_x424_441, _ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10305_fun1736(_b_x425_442, _ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10305_fun1738(_b_x426_443, _ctx), _b_x427_444, _b_x428_445, _ctx); /*std/data/hashmap/hash-map<2306,2307>*/
  return kk_std_data_hashmap__hash_map_box(_x_x1735, _ctx);
}

kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10305(kk_ref_t hm_4_0, kk_integer_t i_2, kk_std_data_hashmap__hash_map _y_x10158, kk_context_t* _ctx) { /* forall<h> (hm@4@0 : local-var<h,hash-map<int,int>>, i@2 : int, hash-map<int,int>) -> <local<h>,exn,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> () */ 
  kk_std_data_hashmap__hash_map _b_x435_437;
  kk_box_t _x_x1723 = kk_std_core_hnd__open_none0(kk_std_data_hashmap__new_mlift_test_hash_map_10305_fun1724(_y_x10158, i_2, _ctx), _ctx); /*1000*/
  _b_x435_437 = kk_std_data_hashmap__hash_map_unbox(_x_x1723, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  kk_unit_t _brw_x1283 = kk_Unit;
  kk_ref_set_borrow(hm_4_0,(kk_std_data_hashmap__hash_map_box(_b_x435_437, _ctx)),kk_context());
  kk_ref_drop(hm_4_0, _ctx);
  _brw_x1283; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10306_fun1742__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10306_fun1742(kk_function_t _fself, kk_std_data_hashmap__hash_map _y_x10161, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10306_fun1742(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10306_fun1742, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10306_fun1744__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10306_fun1744(kk_function_t _fself, kk_box_t _b_x450, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10306_fun1744(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10306_fun1744, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10306_fun1744(kk_function_t _fself, kk_box_t _b_x450, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x1745;
  kk_std_data_hashmap__hash_map _match_x1282 = kk_std_data_hashmap__hash_map_unbox(_b_x450, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1746 = kk_std_data_hashmap__as_Hash_map(_match_x1282, _ctx);
    kk_vector_t _pat_0_1 = _con_x1746->data;
    kk_integer_t _x_1 = _con_x1746->amount;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x1282, _ctx)) {
      kk_vector_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(_match_x1282, _ctx);
    }
    else {
      kk_integer_dup(_x_1, _ctx);
      kk_datatype_ptr_decref(_match_x1282, _ctx);
    }
    _x_x1745 = _x_1; /*int*/
  }
  return kk_integer_box(_x_x1745, _ctx);
}
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10306_fun1742(kk_function_t _fself, kk_std_data_hashmap__hash_map _y_x10161, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_box_t _x_x1743 = kk_std_core_hnd__open_none1(kk_std_data_hashmap__new_mlift_test_hash_map_10306_fun1744(_ctx), kk_std_data_hashmap__hash_map_box(_y_x10161, _ctx), _ctx); /*1001*/
  return kk_integer_unbox(_x_x1743, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10306_fun1748__t {
  struct kk_function_s _base;
  kk_function_t next_10363;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10306_fun1748(kk_function_t _fself, kk_box_t _b_x455, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10306_fun1748(kk_function_t next_10363, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10306_fun1748__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10306_fun1748__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10306_fun1748, kk_context());
  _self->next_10363 = next_10363;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10306_fun1748(kk_function_t _fself, kk_box_t _b_x455, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10306_fun1748__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10306_fun1748__t*, _fself, _ctx);
  kk_function_t next_10363 = _self->next_10363; /* (std/data/hashmap/hash-map<int,int>) -> <local<6900>,exn,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> int */
  kk_drop_match(_self, {kk_function_dup(next_10363, _ctx);}, {}, _ctx)
  kk_integer_t _x_x1749;
  kk_std_data_hashmap__hash_map _x_x1750 = kk_std_data_hashmap__hash_map_unbox(_b_x455, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  _x_x1749 = kk_function_call(kk_integer_t, (kk_function_t, kk_std_data_hashmap__hash_map, kk_context_t*), next_10363, (next_10363, _x_x1750, _ctx), _ctx); /*int*/
  return kk_integer_box(_x_x1749, _ctx);
}

kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10306(kk_ref_t hm_4_0, kk_unit_t wild___9, kk_context_t* _ctx) { /* forall<h> (hm@4@0 : local-var<h,hash-map<int,int>>, wild_@9 : ()) -> <local<h>,exn,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> int */ 
  kk_std_data_hashmap__hash_map x_10362;
  kk_box_t _x_x1741 = kk_ref_get(hm_4_0,kk_context()); /*8866*/
  x_10362 = kk_std_data_hashmap__hash_map_unbox(_x_x1741, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  kk_function_t next_10363 = kk_std_data_hashmap__new_mlift_test_hash_map_10306_fun1742(_ctx); /*(std/data/hashmap/hash-map<int,int>) -> <local<6900>,exn,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> int*/;
  if (kk_yielding(kk_context())) {
    kk_datatype_ptr_dropn(x_10362, (KK_I32(2)), _ctx);
    kk_box_t _x_x1747 = kk_std_core_hnd_yield_extend(kk_std_data_hashmap__new_mlift_test_hash_map_10306_fun1748(next_10363, _ctx), _ctx); /*8901*/
    return kk_integer_unbox(_x_x1747, _ctx);
  }
  {
    return kk_function_call(kk_integer_t, (kk_function_t, kk_std_data_hashmap__hash_map, kk_context_t*), next_10363, (next_10363, x_10362, _ctx), _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10307_fun1752__t {
  struct kk_function_s _base;
  kk_ref_t hm_4_0;
};
static kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10307_fun1752(kk_function_t _fself, kk_integer_t i_2, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10307_fun1752(kk_ref_t hm_4_0, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10307_fun1752__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10307_fun1752__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10307_fun1752, kk_context());
  _self->hm_4_0 = hm_4_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10307_fun1755__t {
  struct kk_function_s _base;
  kk_ref_t hm_4_0;
  kk_integer_t i_2;
};
static kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10307_fun1755(kk_function_t _fself, kk_std_data_hashmap__hash_map _y_x10158, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10307_fun1755(kk_ref_t hm_4_0, kk_integer_t i_2, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10307_fun1755__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10307_fun1755__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10307_fun1755, kk_context());
  _self->hm_4_0 = hm_4_0;
  _self->i_2 = i_2;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10307_fun1757__t {
  struct kk_function_s _base;
  kk_std_data_hashmap__hash_map _y_x10158;
  kk_integer_t i_2;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10307_fun1757(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10307_fun1757(kk_std_data_hashmap__hash_map _y_x10158, kk_integer_t i_2, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10307_fun1757__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10307_fun1757__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10307_fun1757, kk_context());
  _self->_y_x10158 = _y_x10158;
  _self->i_2 = i_2;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10307_fun1761__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10307_fun1761(kk_function_t _fself, kk_box_t _b_x466, int64_t _b_x467, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10307_fun1761(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10307_fun1761, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10307_fun1761(kk_function_t _fself, kk_box_t _b_x466, int64_t _b_x467, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x1762 = kk_integer_unbox(_b_x466, _ctx); /*int*/
  return kk_std_data_hash_int_fs_hash(_x_x1762, _b_x467, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10307_fun1763__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10307_fun1763(kk_function_t _fself, kk_box_t _b_x468, kk_box_t _b_x469, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10307_fun1763(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10307_fun1763, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10307_fun1763(kk_function_t _fself, kk_box_t _b_x468, kk_box_t _b_x469, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _brw_x1279 = kk_integer_unbox(_b_x468, _ctx); /*int*/;
  kk_integer_t _brw_x1278 = kk_integer_unbox(_b_x469, _ctx); /*int*/;
  bool _brw_x1280 = kk_integer_eq_borrow(_brw_x1279,_brw_x1278,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x1279, _ctx);
  kk_integer_drop(_brw_x1278, _ctx);
  return _brw_x1280;
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10307_fun1766__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10307_fun1766(kk_function_t _fself, kk_integer_t _x1_x1764, kk_integer_t _x2_x1765, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10307_fun1766(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10307_fun1766, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10307_fun1766(kk_function_t _fself, kk_integer_t _x1_x1764, kk_integer_t _x2_x1765, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashmap_when_resize(_x1_x1764, _x2_x1765, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10307_fun1769__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10307_fun1769(kk_function_t _fself, kk_integer_t _x1_x1767, kk_integer_t _x2_x1768, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10307_fun1769(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10307_fun1769, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10307_fun1769(kk_function_t _fself, kk_integer_t _x1_x1767, kk_integer_t _x2_x1768, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashmap_resizer(_x1_x1767, _x2_x1768, _ctx);
}
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10307_fun1757(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10307_fun1757__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10307_fun1757__t*, _fself, _ctx);
  kk_std_data_hashmap__hash_map _y_x10158 = _self->_y_x10158; /* std/data/hashmap/hash-map<int,int> */
  kk_integer_t i_2 = _self->i_2; /* int */
  kk_drop_match(_self, {kk_std_data_hashmap__hash_map_dup(_y_x10158, _ctx);kk_integer_dup(i_2, _ctx);}, {}, _ctx)
  kk_std_data_hashmap__hash_map _x_x1758;
  kk_box_t _x_x1759;
  kk_integer_t _x_x1760 = kk_integer_dup(i_2, _ctx); /*int*/
  _x_x1759 = kk_integer_box(_x_x1760, _ctx); /*2306*/
  _x_x1758 = kk_std_data_hashmap_insert(_y_x10158, _x_x1759, kk_integer_box(i_2, _ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10307_fun1761(_ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10307_fun1763(_ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10307_fun1766(_ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10307_fun1769(_ctx), _ctx); /*std/data/hashmap/hash-map<2306,2307>*/
  return kk_std_data_hashmap__hash_map_box(_x_x1758, _ctx);
}
static kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10307_fun1755(kk_function_t _fself, kk_std_data_hashmap__hash_map _y_x10158, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10307_fun1755__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10307_fun1755__t*, _fself, _ctx);
  kk_ref_t hm_4_0 = _self->hm_4_0; /* local-var<6900,std/data/hashmap/hash-map<int,int>> */
  kk_integer_t i_2 = _self->i_2; /* int */
  kk_drop_match(_self, {kk_ref_dup(hm_4_0, _ctx);kk_integer_dup(i_2, _ctx);}, {}, _ctx)
  kk_std_data_hashmap__hash_map _b_x472_474;
  kk_box_t _x_x1756 = kk_std_core_hnd__open_none0(kk_std_data_hashmap__new_mlift_test_hash_map_10307_fun1757(_y_x10158, i_2, _ctx), _ctx); /*1000*/
  _b_x472_474 = kk_std_data_hashmap__hash_map_unbox(_x_x1756, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  kk_unit_t _brw_x1277 = kk_Unit;
  kk_ref_set_borrow(hm_4_0,(kk_std_data_hashmap__hash_map_box(_b_x472_474, _ctx)),kk_context());
  kk_ref_drop(hm_4_0, _ctx);
  _brw_x1277; return kk_Unit;
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10307_fun1771__t {
  struct kk_function_s _base;
  kk_function_t next_0_10368;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10307_fun1771(kk_function_t _fself, kk_box_t _b_x484, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10307_fun1771(kk_function_t next_0_10368, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10307_fun1771__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10307_fun1771__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10307_fun1771, kk_context());
  _self->next_0_10368 = next_0_10368;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10307_fun1771(kk_function_t _fself, kk_box_t _b_x484, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10307_fun1771__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10307_fun1771__t*, _fself, _ctx);
  kk_function_t next_0_10368 = _self->next_0_10368; /* (std/data/hashmap/hash-map<int,int>) -> <local<6900>,exn,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> () */
  kk_drop_match(_self, {kk_function_dup(next_0_10368, _ctx);}, {}, _ctx)
  kk_unit_t _x_x1772 = kk_Unit;
  kk_std_data_hashmap__hash_map _x_x1773 = kk_std_data_hashmap__hash_map_unbox(_b_x484, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_data_hashmap__hash_map, kk_context_t*), next_0_10368, (next_0_10368, _x_x1773, _ctx), _ctx);
  return kk_unit_box(_x_x1772);
}
static kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10307_fun1752(kk_function_t _fself, kk_integer_t i_2, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10307_fun1752__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10307_fun1752__t*, _fself, _ctx);
  kk_ref_t hm_4_0 = _self->hm_4_0; /* local-var<6900,std/data/hashmap/hash-map<int,int>> */
  kk_drop_match(_self, {kk_ref_dup(hm_4_0, _ctx);}, {}, _ctx)
  kk_std_data_hashmap__hash_map x_0_10367;
  kk_box_t _x_x1753;
  kk_ref_t _x_x1754 = kk_ref_dup(hm_4_0, _ctx); /*local-var<6900,std/data/hashmap/hash-map<int,int>>*/
  _x_x1753 = kk_ref_get(_x_x1754,kk_context()); /*8834*/
  x_0_10367 = kk_std_data_hashmap__hash_map_unbox(_x_x1753, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  kk_function_t next_0_10368 = kk_std_data_hashmap__new_mlift_test_hash_map_10307_fun1755(hm_4_0, i_2, _ctx); /*(std/data/hashmap/hash-map<int,int>) -> <local<6900>,exn,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> ()*/;
  if (kk_yielding(kk_context())) {
    kk_datatype_ptr_dropn(x_0_10367, (KK_I32(2)), _ctx);
    kk_box_t _x_x1770 = kk_std_core_hnd_yield_extend(kk_std_data_hashmap__new_mlift_test_hash_map_10307_fun1771(next_0_10368, _ctx), _ctx); /*8901*/
    kk_unit_unbox(_x_x1770); return kk_Unit;
  }
  {
    kk_function_call(kk_unit_t, (kk_function_t, kk_std_data_hashmap__hash_map, kk_context_t*), next_0_10368, (next_0_10368, x_0_10367, _ctx), _ctx); return kk_Unit;
  }
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10307_fun1775__t {
  struct kk_function_s _base;
  kk_ref_t hm_4_0;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10307_fun1775(kk_function_t _fself, kk_box_t _b_x487, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10307_fun1775(kk_ref_t hm_4_0, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10307_fun1775__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10307_fun1775__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10307_fun1775, kk_context());
  _self->hm_4_0 = hm_4_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10307_fun1775(kk_function_t _fself, kk_box_t _b_x487, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10307_fun1775__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10307_fun1775__t*, _fself, _ctx);
  kk_ref_t hm_4_0 = _self->hm_4_0; /* local-var<6900,std/data/hashmap/hash-map<int,int>> */
  kk_drop_match(_self, {kk_ref_dup(hm_4_0, _ctx);}, {}, _ctx)
  kk_unit_t wild___9_489 = kk_Unit;
  kk_unit_unbox(_b_x487);
  kk_integer_t _x_x1776 = kk_std_data_hashmap__mlift_test_hash_map_10306(hm_4_0, wild___9_489, _ctx); /*int*/
  return kk_integer_box(_x_x1776, _ctx);
}

kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10307(kk_ref_t hm_4_0, kk_unit_t wild___8, kk_context_t* _ctx) { /* forall<h> (hm@4@0 : local-var<h,hash-map<int,int>>, wild_@8 : ()) -> <local<h>,exn,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> int */ 
  kk_unit_t x_10365 = kk_Unit;
  kk_function_t _x_x1751;
  kk_ref_dup(hm_4_0, _ctx);
  _x_x1751 = kk_std_data_hashmap__new_mlift_test_hash_map_10307_fun1752(hm_4_0, _ctx); /*(i@2 : int) -> <local<6900>,exn,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> ()*/
  kk_std_core_for(kk_integer_from_small(50), _x_x1751, _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1774 = kk_std_core_hnd_yield_extend(kk_std_data_hashmap__new_mlift_test_hash_map_10307_fun1775(hm_4_0, _ctx), _ctx); /*8901*/
    return kk_integer_unbox(_x_x1774, _ctx);
  }
  {
    return kk_std_data_hashmap__mlift_test_hash_map_10306(hm_4_0, x_10365, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10308_fun1778__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10308_fun1778(kk_function_t _fself, kk_box_t _b_x492, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10308_fun1778(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10308_fun1778, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10308_fun1778(kk_function_t _fself, kk_box_t _b_x492, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_data_hashmap__hash_map _x_x1779;
  kk_std_data_hashmap__hash_map _x_x1780 = kk_std_data_hashmap__hash_map_unbox(_b_x492, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  _x_x1779 = kk_std_data_hashmap_clear(_x_x1780, _ctx); /*std/data/hashmap/hash-map<934,935>*/
  return kk_std_data_hashmap__hash_map_box(_x_x1779, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10308_fun1782__t {
  struct kk_function_s _base;
  kk_ref_t hm_4_0;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10308_fun1782(kk_function_t _fself, kk_box_t _b_x500, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10308_fun1782(kk_ref_t hm_4_0, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10308_fun1782__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10308_fun1782__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10308_fun1782, kk_context());
  _self->hm_4_0 = hm_4_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10308_fun1782(kk_function_t _fself, kk_box_t _b_x500, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10308_fun1782__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10308_fun1782__t*, _fself, _ctx);
  kk_ref_t hm_4_0 = _self->hm_4_0; /* local-var<6900,std/data/hashmap/hash-map<int,int>> */
  kk_drop_match(_self, {kk_ref_dup(hm_4_0, _ctx);}, {}, _ctx)
  kk_unit_t wild___8_502 = kk_Unit;
  kk_unit_unbox(_b_x500);
  kk_integer_t _x_x1783 = kk_std_data_hashmap__mlift_test_hash_map_10307(hm_4_0, wild___8_502, _ctx); /*int*/
  return kk_integer_box(_x_x1783, _ctx);
}

kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10308(kk_ref_t hm_4_0, kk_std_data_hashmap__hash_map _y_x10156, kk_context_t* _ctx) { /* forall<h> (hm@4@0 : local-var<h,hash-map<int,int>>, hash-map<int,int>) -> <local<h>,exn,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> int */ 
  kk_std_data_hashmap__hash_map _b_x494_496;
  kk_box_t _x_x1777 = kk_std_core_hnd__open_none1(kk_std_data_hashmap__new_mlift_test_hash_map_10308_fun1778(_ctx), kk_std_data_hashmap__hash_map_box(_y_x10156, _ctx), _ctx); /*1001*/
  _b_x494_496 = kk_std_data_hashmap__hash_map_unbox(_x_x1777, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  kk_unit_t x_10372 = kk_Unit;
  kk_ref_set_borrow(hm_4_0,(kk_std_data_hashmap__hash_map_box(_b_x494_496, _ctx)),kk_context());
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1781 = kk_std_core_hnd_yield_extend(kk_std_data_hashmap__new_mlift_test_hash_map_10308_fun1782(hm_4_0, _ctx), _ctx); /*8901*/
    return kk_integer_unbox(_x_x1781, _ctx);
  }
  {
    return kk_std_data_hashmap__mlift_test_hash_map_10307(hm_4_0, x_10372, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10309_fun1785__t {
  struct kk_function_s _base;
  kk_std_data_hashmap__hash_map _y_x10153;
  kk_integer_t i_1;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10309_fun1785(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10309_fun1785(kk_std_data_hashmap__hash_map _y_x10153, kk_integer_t i_1, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10309_fun1785__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10309_fun1785__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10309_fun1785, kk_context());
  _self->_y_x10153 = _y_x10153;
  _self->i_1 = i_1;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10309_fun1788__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10309_fun1788(kk_function_t _fself, kk_integer_t _x1_x1786, int64_t _x2_x1787, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10309_fun1788(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10309_fun1788, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10309_fun1788(kk_function_t _fself, kk_integer_t _x1_x1786, int64_t _x2_x1787, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hash_int_fs_hash(_x1_x1786, _x2_x1787, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10309_fun1789__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10309_fun1789(kk_function_t _fself, kk_integer_t x, kk_integer_t y, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10309_fun1789(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10309_fun1789, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10309_fun1789(kk_function_t _fself, kk_integer_t x, kk_integer_t y, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _brw_x1273 = kk_integer_eq_borrow(x,y,kk_context()); /*bool*/;
  kk_integer_drop(x, _ctx);
  kk_integer_drop(y, _ctx);
  return _brw_x1273;
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10309_fun1792__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10309_fun1792(kk_function_t _fself, kk_integer_t _x1_x1790, kk_integer_t _x2_x1791, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10309_fun1792(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10309_fun1792, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10309_fun1792(kk_function_t _fself, kk_integer_t _x1_x1790, kk_integer_t _x2_x1791, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashmap_when_resize(_x1_x1790, _x2_x1791, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10309_fun1795__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10309_fun1795(kk_function_t _fself, kk_integer_t _x1_x1793, kk_integer_t _x2_x1794, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10309_fun1795(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10309_fun1795, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10309_fun1795(kk_function_t _fself, kk_integer_t _x1_x1793, kk_integer_t _x2_x1794, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashmap_resizer(_x1_x1793, _x2_x1794, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10309_fun1797__t {
  struct kk_function_s _base;
  kk_function_t _b_x506_523;
};
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10309_fun1797(kk_function_t _fself, kk_box_t _b_x510, int64_t _b_x511, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10309_fun1797(kk_function_t _b_x506_523, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10309_fun1797__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10309_fun1797__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10309_fun1797, kk_context());
  _self->_b_x506_523 = _b_x506_523;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10309_fun1797(kk_function_t _fself, kk_box_t _b_x510, int64_t _b_x511, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10309_fun1797__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10309_fun1797__t*, _fself, _ctx);
  kk_function_t _b_x506_523 = _self->_b_x506_523; /* (i : int, seed : int64) -> int */
  kk_drop_match(_self, {kk_function_dup(_b_x506_523, _ctx);}, {}, _ctx)
  kk_integer_t _x_x1798 = kk_integer_unbox(_b_x510, _ctx); /*int*/
  return kk_function_call(kk_integer_t, (kk_function_t, kk_integer_t, int64_t, kk_context_t*), _b_x506_523, (_b_x506_523, _x_x1798, _b_x511, _ctx), _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10309_fun1799__t {
  struct kk_function_s _base;
  kk_function_t _b_x507_524;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10309_fun1799(kk_function_t _fself, kk_box_t _b_x512, kk_box_t _b_x513, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10309_fun1799(kk_function_t _b_x507_524, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10309_fun1799__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10309_fun1799__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10309_fun1799, kk_context());
  _self->_b_x507_524 = _b_x507_524;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10309_fun1799(kk_function_t _fself, kk_box_t _b_x512, kk_box_t _b_x513, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10309_fun1799__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10309_fun1799__t*, _fself, _ctx);
  kk_function_t _b_x507_524 = _self->_b_x507_524; /* (x : int, y : int) -> bool */
  kk_drop_match(_self, {kk_function_dup(_b_x507_524, _ctx);}, {}, _ctx)
  kk_integer_t _x_x1800 = kk_integer_unbox(_b_x512, _ctx); /*int*/
  kk_integer_t _x_x1801 = kk_integer_unbox(_b_x513, _ctx); /*int*/
  return kk_function_call(bool, (kk_function_t, kk_integer_t, kk_integer_t, kk_context_t*), _b_x507_524, (_b_x507_524, _x_x1800, _x_x1801, _ctx), _ctx);
}
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10309_fun1785(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10309_fun1785__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10309_fun1785__t*, _fself, _ctx);
  kk_std_data_hashmap__hash_map _y_x10153 = _self->_y_x10153; /* std/data/hashmap/hash-map<int,int> */
  kk_integer_t i_1 = _self->i_1; /* int */
  kk_drop_match(_self, {kk_std_data_hashmap__hash_map_dup(_y_x10153, _ctx);kk_integer_dup(i_1, _ctx);}, {}, _ctx)
  kk_std_data_hashmap__hash_map _b_x503_520 = _y_x10153; /*std/data/hashmap/hash-map<int,int>*/;
  kk_integer_t _b_x504_521 = kk_integer_dup(i_1, _ctx); /*int*/;
  kk_integer_t _b_x505_522 = i_1; /*int*/;
  kk_function_t _b_x506_523 = kk_std_data_hashmap__new_mlift_test_hash_map_10309_fun1788(_ctx); /*(i : int, seed : int64) -> int*/;
  kk_function_t _b_x507_524 = kk_std_data_hashmap__new_mlift_test_hash_map_10309_fun1789(_ctx); /*(x : int, y : int) -> bool*/;
  kk_function_t _b_x508_525 = kk_std_data_hashmap__new_mlift_test_hash_map_10309_fun1792(_ctx); /*(table-size : int, item-count : int) -> bool*/;
  kk_function_t _b_x509_526 = kk_std_data_hashmap__new_mlift_test_hash_map_10309_fun1795(_ctx); /*(table-size : int, item-count : int) -> int*/;
  kk_std_data_hashmap__hash_map _x_x1796 = kk_std_data_hashmap_insert(_b_x503_520, kk_integer_box(_b_x504_521, _ctx), kk_integer_box(_b_x505_522, _ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10309_fun1797(_b_x506_523, _ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10309_fun1799(_b_x507_524, _ctx), _b_x508_525, _b_x509_526, _ctx); /*std/data/hashmap/hash-map<2306,2307>*/
  return kk_std_data_hashmap__hash_map_box(_x_x1796, _ctx);
}

kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10309(kk_ref_t hm_4_0, kk_integer_t i_1, kk_std_data_hashmap__hash_map _y_x10153, kk_context_t* _ctx) { /* forall<h> (hm@4@0 : local-var<h,hash-map<int,int>>, i@1 : int, hash-map<int,int>) -> <local<h>,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> () */ 
  kk_std_data_hashmap__hash_map _b_x516_518;
  kk_box_t _x_x1784 = kk_std_core_hnd__open_none0(kk_std_data_hashmap__new_mlift_test_hash_map_10309_fun1785(_y_x10153, i_1, _ctx), _ctx); /*1000*/
  _b_x516_518 = kk_std_data_hashmap__hash_map_unbox(_x_x1784, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  kk_unit_t _brw_x1272 = kk_Unit;
  kk_ref_set_borrow(hm_4_0,(kk_std_data_hashmap__hash_map_box(_b_x516_518, _ctx)),kk_context());
  kk_ref_drop(hm_4_0, _ctx);
  _brw_x1272; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10310_fun1802__t {
  struct kk_function_s _base;
  kk_ref_t hm_4_0;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10310_fun1802(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10310_fun1802(kk_ref_t hm_4_0, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10310_fun1802__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10310_fun1802__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10310_fun1802, kk_context());
  _self->hm_4_0 = hm_4_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10310_fun1807__t {
  struct kk_function_s _base;
  kk_ref_t hm_4_0;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10310_fun1807(kk_function_t _fself, kk_box_t _b_x530, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10310_fun1807(kk_ref_t hm_4_0, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10310_fun1807__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10310_fun1807__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10310_fun1807, kk_context());
  _self->hm_4_0 = hm_4_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10310_fun1807(kk_function_t _fself, kk_box_t _b_x530, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10310_fun1807__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10310_fun1807__t*, _fself, _ctx);
  kk_ref_t hm_4_0 = _self->hm_4_0; /* local-var<6900,std/data/hashmap/hash-map<int,int>> */
  kk_drop_match(_self, {kk_ref_dup(hm_4_0, _ctx);}, {}, _ctx)
  kk_std_data_hashmap__hash_map _y_x10156_551 = kk_std_data_hashmap__hash_map_unbox(_b_x530, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/;
  kk_integer_t _x_x1808 = kk_std_data_hashmap__mlift_test_hash_map_10308(hm_4_0, _y_x10156_551, _ctx); /*int*/
  return kk_integer_box(_x_x1808, _ctx);
}
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10310_fun1802(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10310_fun1802__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10310_fun1802__t*, _fself, _ctx);
  kk_ref_t hm_4_0 = _self->hm_4_0; /* local-var<6900,std/data/hashmap/hash-map<int,int>> */
  kk_drop_match(_self, {kk_ref_dup(hm_4_0, _ctx);}, {}, _ctx)
  kk_std_data_hashmap__hash_map x_10374;
  kk_box_t _x_x1803;
  kk_ref_t _x_x1804 = kk_ref_dup(hm_4_0, _ctx); /*local-var<6900,std/data/hashmap/hash-map<int,int>>*/
  _x_x1803 = kk_ref_get(_x_x1804,kk_context()); /*8866*/
  x_10374 = kk_std_data_hashmap__hash_map_unbox(_x_x1803, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  kk_integer_t _x_x1805;
  if (kk_yielding(kk_context())) {
    kk_datatype_ptr_dropn(x_10374, (KK_I32(2)), _ctx);
    kk_box_t _x_x1806 = kk_std_core_hnd_yield_extend(kk_std_data_hashmap__new_mlift_test_hash_map_10310_fun1807(hm_4_0, _ctx), _ctx); /*8901*/
    _x_x1805 = kk_integer_unbox(_x_x1806, _ctx); /*int*/
  }
  else {
    _x_x1805 = kk_std_data_hashmap__mlift_test_hash_map_10308(hm_4_0, x_10374, _ctx); /*int*/
  }
  return kk_integer_box(_x_x1805, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10310_fun1809__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10310_fun1809(kk_function_t _fself, kk_box_t _b_x539, kk_box_t _b_x540, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10310_fun1809(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10310_fun1809, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10310_fun1809(kk_function_t _fself, kk_box_t _b_x539, kk_box_t _b_x540, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _brw_x1269 = kk_integer_unbox(_b_x539, _ctx); /*int*/;
  kk_integer_t _brw_x1268 = kk_integer_unbox(_b_x540, _ctx); /*int*/;
  bool _brw_x1270 = kk_integer_eq_borrow(_brw_x1269,_brw_x1268,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x1269, _ctx);
  kk_integer_drop(_brw_x1268, _ctx);
  return _brw_x1270;
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10310_fun1810__t {
  struct kk_function_s _base;
};
static kk_string_t kk_std_data_hashmap__mlift_test_hash_map_10310_fun1810(kk_function_t _fself, kk_box_t _b_x541, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10310_fun1810(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10310_fun1810, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_std_data_hashmap__mlift_test_hash_map_10310_fun1810(kk_function_t _fself, kk_box_t _b_x541, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x1811 = kk_integer_unbox(_b_x541, _ctx); /*int*/
  return kk_std_core_int_show(_x_x1811, _ctx);
}

kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10310(kk_ref_t hm_4_0, kk_unit_t wild___7, kk_context_t* _ctx) { /* forall<h> (hm@4@0 : local-var<h,hash-map<int,int>>, wild_@7 : ()) -> <local<h>,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> () */ 
  kk_string_t _x_x1812;
  kk_define_string_literal(, _s_x1813, 3, "294", _ctx)
  _x_x1812 = kk_string_dup(_s_x1813, _ctx); /*string*/
  kk_string_t _x_x1814;
  kk_define_string_literal(, _s_x1815, 16, "std/data/hashmap", _ctx)
  _x_x1814 = kk_string_dup(_s_x1815, _ctx); /*string*/
  kk_std_test_test_expect(kk_integer_box(kk_integer_from_small(50), _ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10310_fun1802(hm_4_0, _ctx), kk_std_core_types__new_None(_ctx), kk_std_core_types__new_None(_ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10310_fun1809(_ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10310_fun1810(_ctx), _x_x1812, _x_x1814, _ctx); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10311_fun1817__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10311_fun1817(kk_function_t _fself, kk_integer_t i_1, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10311_fun1817(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10311_fun1817__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10311_fun1817__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10311_fun1817, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10311_fun1820__t {
  struct kk_function_s _base;
  kk_integer_t i_1;
  kk_ref_t loc;
};
static kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10311_fun1820(kk_function_t _fself, kk_std_data_hashmap__hash_map _y_x10153, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10311_fun1820(kk_integer_t i_1, kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10311_fun1820__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10311_fun1820__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10311_fun1820, kk_context());
  _self->i_1 = i_1;
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10311_fun1822__t {
  struct kk_function_s _base;
  kk_std_data_hashmap__hash_map _y_x10153;
  kk_integer_t i_1;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10311_fun1822(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10311_fun1822(kk_std_data_hashmap__hash_map _y_x10153, kk_integer_t i_1, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10311_fun1822__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10311_fun1822__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10311_fun1822, kk_context());
  _self->_y_x10153 = _y_x10153;
  _self->i_1 = i_1;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10311_fun1826__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10311_fun1826(kk_function_t _fself, kk_box_t _b_x563, int64_t _b_x564, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10311_fun1826(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10311_fun1826, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10311_fun1826(kk_function_t _fself, kk_box_t _b_x563, int64_t _b_x564, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x1827 = kk_integer_unbox(_b_x563, _ctx); /*int*/
  return kk_std_data_hash_int_fs_hash(_x_x1827, _b_x564, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10311_fun1828__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10311_fun1828(kk_function_t _fself, kk_box_t _b_x565, kk_box_t _b_x566, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10311_fun1828(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10311_fun1828, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10311_fun1828(kk_function_t _fself, kk_box_t _b_x565, kk_box_t _b_x566, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _brw_x1266 = kk_integer_unbox(_b_x565, _ctx); /*int*/;
  kk_integer_t _brw_x1265 = kk_integer_unbox(_b_x566, _ctx); /*int*/;
  bool _brw_x1267 = kk_integer_eq_borrow(_brw_x1266,_brw_x1265,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x1266, _ctx);
  kk_integer_drop(_brw_x1265, _ctx);
  return _brw_x1267;
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10311_fun1831__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10311_fun1831(kk_function_t _fself, kk_integer_t _x1_x1829, kk_integer_t _x2_x1830, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10311_fun1831(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10311_fun1831, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10311_fun1831(kk_function_t _fself, kk_integer_t _x1_x1829, kk_integer_t _x2_x1830, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashmap_when_resize(_x1_x1829, _x2_x1830, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10311_fun1834__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10311_fun1834(kk_function_t _fself, kk_integer_t _x1_x1832, kk_integer_t _x2_x1833, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10311_fun1834(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10311_fun1834, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10311_fun1834(kk_function_t _fself, kk_integer_t _x1_x1832, kk_integer_t _x2_x1833, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashmap_resizer(_x1_x1832, _x2_x1833, _ctx);
}
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10311_fun1822(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10311_fun1822__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10311_fun1822__t*, _fself, _ctx);
  kk_std_data_hashmap__hash_map _y_x10153 = _self->_y_x10153; /* std/data/hashmap/hash-map<int,int> */
  kk_integer_t i_1 = _self->i_1; /* int */
  kk_drop_match(_self, {kk_std_data_hashmap__hash_map_dup(_y_x10153, _ctx);kk_integer_dup(i_1, _ctx);}, {}, _ctx)
  kk_std_data_hashmap__hash_map _x_x1823;
  kk_box_t _x_x1824;
  kk_integer_t _x_x1825 = kk_integer_dup(i_1, _ctx); /*int*/
  _x_x1824 = kk_integer_box(_x_x1825, _ctx); /*2306*/
  _x_x1823 = kk_std_data_hashmap_insert(_y_x10153, _x_x1824, kk_integer_box(i_1, _ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10311_fun1826(_ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10311_fun1828(_ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10311_fun1831(_ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10311_fun1834(_ctx), _ctx); /*std/data/hashmap/hash-map<2306,2307>*/
  return kk_std_data_hashmap__hash_map_box(_x_x1823, _ctx);
}
static kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10311_fun1820(kk_function_t _fself, kk_std_data_hashmap__hash_map _y_x10153, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10311_fun1820__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10311_fun1820__t*, _fself, _ctx);
  kk_integer_t i_1 = _self->i_1; /* int */
  kk_ref_t loc = _self->loc; /* local-var<6900,std/data/hashmap/hash-map<int,int>> */
  kk_drop_match(_self, {kk_integer_dup(i_1, _ctx);kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_std_data_hashmap__hash_map _b_x569_571;
  kk_box_t _x_x1821 = kk_std_core_hnd__open_none0(kk_std_data_hashmap__new_mlift_test_hash_map_10311_fun1822(_y_x10153, i_1, _ctx), _ctx); /*1000*/
  _b_x569_571 = kk_std_data_hashmap__hash_map_unbox(_x_x1821, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  kk_unit_t _brw_x1264 = kk_Unit;
  kk_ref_set_borrow(loc,(kk_std_data_hashmap__hash_map_box(_b_x569_571, _ctx)),kk_context());
  kk_ref_drop(loc, _ctx);
  _brw_x1264; return kk_Unit;
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10311_fun1836__t {
  struct kk_function_s _base;
  kk_function_t next_0_10381;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10311_fun1836(kk_function_t _fself, kk_box_t _b_x581, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10311_fun1836(kk_function_t next_0_10381, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10311_fun1836__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10311_fun1836__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10311_fun1836, kk_context());
  _self->next_0_10381 = next_0_10381;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10311_fun1836(kk_function_t _fself, kk_box_t _b_x581, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10311_fun1836__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10311_fun1836__t*, _fself, _ctx);
  kk_function_t next_0_10381 = _self->next_0_10381; /* (std/data/hashmap/hash-map<int,int>) -> <local<6900>,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> () */
  kk_drop_match(_self, {kk_function_dup(next_0_10381, _ctx);}, {}, _ctx)
  kk_unit_t _x_x1837 = kk_Unit;
  kk_std_data_hashmap__hash_map _x_x1838 = kk_std_data_hashmap__hash_map_unbox(_b_x581, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_data_hashmap__hash_map, kk_context_t*), next_0_10381, (next_0_10381, _x_x1838, _ctx), _ctx);
  return kk_unit_box(_x_x1837);
}
static kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10311_fun1817(kk_function_t _fself, kk_integer_t i_1, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10311_fun1817__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10311_fun1817__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<6900,std/data/hashmap/hash-map<int,int>> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_std_data_hashmap__hash_map x_0_10380;
  kk_box_t _x_x1818;
  kk_ref_t _x_x1819 = kk_ref_dup(loc, _ctx); /*local-var<6900,std/data/hashmap/hash-map<int,int>>*/
  _x_x1818 = kk_ref_get(_x_x1819,kk_context()); /*8638*/
  x_0_10380 = kk_std_data_hashmap__hash_map_unbox(_x_x1818, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  kk_function_t next_0_10381 = kk_std_data_hashmap__new_mlift_test_hash_map_10311_fun1820(i_1, loc, _ctx); /*(std/data/hashmap/hash-map<int,int>) -> <local<6900>,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> ()*/;
  if (kk_yielding(kk_context())) {
    kk_datatype_ptr_dropn(x_0_10380, (KK_I32(2)), _ctx);
    kk_box_t _x_x1835 = kk_std_core_hnd_yield_extend(kk_std_data_hashmap__new_mlift_test_hash_map_10311_fun1836(next_0_10381, _ctx), _ctx); /*8901*/
    kk_unit_unbox(_x_x1835); return kk_Unit;
  }
  {
    kk_function_call(kk_unit_t, (kk_function_t, kk_std_data_hashmap__hash_map, kk_context_t*), next_0_10381, (next_0_10381, x_0_10380, _ctx), _ctx); return kk_Unit;
  }
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10311_fun1841__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10311_fun1841(kk_function_t _fself, kk_box_t _b_x584, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10311_fun1841(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10311_fun1841__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10311_fun1841__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10311_fun1841, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10311_fun1841(kk_function_t _fself, kk_box_t _b_x584, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10311_fun1841__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10311_fun1841__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<6900,std/data/hashmap/hash-map<int,int>> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_unit_t _x_x1842 = kk_Unit;
  kk_unit_t _x_x1843 = kk_Unit;
  kk_unit_unbox(_b_x584);
  kk_std_data_hashmap__mlift_test_hash_map_10310(loc, _x_x1843, _ctx);
  return kk_unit_box(_x_x1842);
}

kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10311(kk_std_data_hashmap__hash_map _y_x10152, kk_context_t* _ctx) { /* forall<h> (hash-map<int,int>) -> <std/num/random/random,local<h>,std/test/test/test,console/console,div,exn,std/test/test/test-scope> () */ 
  kk_ref_t loc = kk_ref_alloc((kk_std_data_hashmap__hash_map_box(_y_x10152, _ctx)),kk_context()); /*local-var<6900,std/data/hashmap/hash-map<int,int>>*/;
  kk_unit_t x_10378 = kk_Unit;
  kk_function_t _x_x1816;
  kk_ref_dup(loc, _ctx);
  _x_x1816 = kk_std_data_hashmap__new_mlift_test_hash_map_10311_fun1817(loc, _ctx); /*(i@1 : int) -> <local<6900>,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> ()*/
  kk_std_core_for(kk_integer_from_small(50), _x_x1816, _ctx);
  kk_unit_t res = kk_Unit;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1839;
    kk_function_t _x_x1840;
    kk_ref_dup(loc, _ctx);
    _x_x1840 = kk_std_data_hashmap__new_mlift_test_hash_map_10311_fun1841(loc, _ctx); /*(8900) -> 8902 8901*/
    _x_x1839 = kk_std_core_hnd_yield_extend(_x_x1840, _ctx); /*8901*/
    kk_unit_unbox(_x_x1839);
  }
  else {
    kk_ref_t _x_x1844 = kk_ref_dup(loc, _ctx); /*local-var<6900,std/data/hashmap/hash-map<int,int>>*/
    kk_std_data_hashmap__mlift_test_hash_map_10310(_x_x1844, x_10378, _ctx);
  }
  kk_box_t _x_x1845 = kk_std_core_hnd_prompt_local_var(loc, kk_unit_box(res), _ctx); /*8901*/
  kk_unit_unbox(_x_x1845); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10312_fun1847__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10312_fun1847(kk_function_t _fself, kk_box_t _b_x593, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10312_fun1847(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10312_fun1847, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10312_fun1847(kk_function_t _fself, kk_box_t _b_x593, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_data_hashmap__hash_map hm_4_596 = kk_std_data_hashmap__hash_map_unbox(_b_x593, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/;
  kk_integer_t _x_x1848;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1849 = kk_std_data_hashmap__as_Hash_map(hm_4_596, _ctx);
    kk_vector_t _pat_0_0 = _con_x1849->data;
    kk_integer_t _x_0 = _con_x1849->amount;
    if kk_likely(kk_datatype_ptr_is_unique(hm_4_596, _ctx)) {
      kk_vector_drop(_pat_0_0, _ctx);
      kk_datatype_ptr_free(hm_4_596, _ctx);
    }
    else {
      kk_integer_dup(_x_0, _ctx);
      kk_datatype_ptr_decref(hm_4_596, _ctx);
    }
    _x_x1848 = _x_0; /*int*/
  }
  return kk_integer_box(_x_x1848, _ctx);
}

kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10312(kk_std_data_hashmap__hash_map _y_x10146, kk_context_t* _ctx) { /* forall<h> (hash-map<int,int>) -> <local<h>,exn,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> int */ 
  kk_box_t _x_x1846 = kk_std_core_hnd__open_none1(kk_std_data_hashmap__new_mlift_test_hash_map_10312_fun1847(_ctx), kk_std_data_hashmap__hash_map_box(_y_x10146, _ctx), _ctx); /*1001*/
  return kk_integer_unbox(_x_x1846, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10313_fun1851__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10313_fun1851(kk_function_t _fself, kk_std_data_hashmap__hash_map _y_x10146, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10313_fun1851(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10313_fun1851, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10313_fun1853__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10313_fun1853(kk_function_t _fself, kk_box_t _b_x601, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10313_fun1853(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10313_fun1853, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10313_fun1853(kk_function_t _fself, kk_box_t _b_x601, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x1854;
  kk_std_data_hashmap__hash_map _match_x1261 = kk_std_data_hashmap__hash_map_unbox(_b_x601, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1855 = kk_std_data_hashmap__as_Hash_map(_match_x1261, _ctx);
    kk_vector_t _pat_0_0 = _con_x1855->data;
    kk_integer_t _x_0 = _con_x1855->amount;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x1261, _ctx)) {
      kk_vector_drop(_pat_0_0, _ctx);
      kk_datatype_ptr_free(_match_x1261, _ctx);
    }
    else {
      kk_integer_dup(_x_0, _ctx);
      kk_datatype_ptr_decref(_match_x1261, _ctx);
    }
    _x_x1854 = _x_0; /*int*/
  }
  return kk_integer_box(_x_x1854, _ctx);
}
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10313_fun1851(kk_function_t _fself, kk_std_data_hashmap__hash_map _y_x10146, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_box_t _x_x1852 = kk_std_core_hnd__open_none1(kk_std_data_hashmap__new_mlift_test_hash_map_10313_fun1853(_ctx), kk_std_data_hashmap__hash_map_box(_y_x10146, _ctx), _ctx); /*1001*/
  return kk_integer_unbox(_x_x1852, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10313_fun1857__t {
  struct kk_function_s _base;
  kk_function_t next_10386;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10313_fun1857(kk_function_t _fself, kk_box_t _b_x606, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10313_fun1857(kk_function_t next_10386, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10313_fun1857__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10313_fun1857__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10313_fun1857, kk_context());
  _self->next_10386 = next_10386;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10313_fun1857(kk_function_t _fself, kk_box_t _b_x606, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10313_fun1857__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10313_fun1857__t*, _fself, _ctx);
  kk_function_t next_10386 = _self->next_10386; /* (std/data/hashmap/hash-map<int,int>) -> <local<6465>,exn,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> int */
  kk_drop_match(_self, {kk_function_dup(next_10386, _ctx);}, {}, _ctx)
  kk_integer_t _x_x1858;
  kk_std_data_hashmap__hash_map _x_x1859 = kk_std_data_hashmap__hash_map_unbox(_b_x606, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  _x_x1858 = kk_function_call(kk_integer_t, (kk_function_t, kk_std_data_hashmap__hash_map, kk_context_t*), next_10386, (next_10386, _x_x1859, _ctx), _ctx); /*int*/
  return kk_integer_box(_x_x1858, _ctx);
}

kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10313(kk_ref_t hm_3, kk_unit_t wild___5, kk_context_t* _ctx) { /* forall<h> (hm@3 : local-var<h,hash-map<int,int>>, wild_@5 : ()) -> <local<h>,exn,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> int */ 
  kk_std_data_hashmap__hash_map x_10385;
  kk_box_t _x_x1850 = kk_ref_get(hm_3,kk_context()); /*8431*/
  x_10385 = kk_std_data_hashmap__hash_map_unbox(_x_x1850, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  kk_function_t next_10386 = kk_std_data_hashmap__new_mlift_test_hash_map_10313_fun1851(_ctx); /*(std/data/hashmap/hash-map<int,int>) -> <local<6465>,exn,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> int*/;
  if (kk_yielding(kk_context())) {
    kk_datatype_ptr_dropn(x_10385, (KK_I32(2)), _ctx);
    kk_box_t _x_x1856 = kk_std_core_hnd_yield_extend(kk_std_data_hashmap__new_mlift_test_hash_map_10313_fun1857(next_10386, _ctx), _ctx); /*8466*/
    return kk_integer_unbox(_x_x1856, _ctx);
  }
  {
    return kk_function_call(kk_integer_t, (kk_function_t, kk_std_data_hashmap__hash_map, kk_context_t*), next_10386, (next_10386, x_10385, _ctx), _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10314_fun1861__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10314_fun1861(kk_function_t _fself, kk_box_t _b_x610, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10314_fun1861(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10314_fun1861, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10314_fun1861(kk_function_t _fself, kk_box_t _b_x610, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_data_hashmap__hash_map _x_x1862;
  kk_std_data_hashmap__hash_map _x_x1863 = kk_std_data_hashmap__hash_map_unbox(_b_x610, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  _x_x1862 = kk_std_data_hashmap_clear(_x_x1863, _ctx); /*std/data/hashmap/hash-map<934,935>*/
  return kk_std_data_hashmap__hash_map_box(_x_x1862, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10314_fun1865__t {
  struct kk_function_s _base;
  kk_ref_t hm_3;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10314_fun1865(kk_function_t _fself, kk_box_t _b_x618, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10314_fun1865(kk_ref_t hm_3, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10314_fun1865__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10314_fun1865__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10314_fun1865, kk_context());
  _self->hm_3 = hm_3;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10314_fun1865(kk_function_t _fself, kk_box_t _b_x618, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10314_fun1865__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10314_fun1865__t*, _fself, _ctx);
  kk_ref_t hm_3 = _self->hm_3; /* local-var<6465,std/data/hashmap/hash-map<int,int>> */
  kk_drop_match(_self, {kk_ref_dup(hm_3, _ctx);}, {}, _ctx)
  kk_unit_t wild___5_620 = kk_Unit;
  kk_unit_unbox(_b_x618);
  kk_integer_t _x_x1866 = kk_std_data_hashmap__mlift_test_hash_map_10313(hm_3, wild___5_620, _ctx); /*int*/
  return kk_integer_box(_x_x1866, _ctx);
}

kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10314(kk_ref_t hm_3, kk_std_data_hashmap__hash_map _y_x10144, kk_context_t* _ctx) { /* forall<h> (hm@3 : local-var<h,hash-map<int,int>>, hash-map<int,int>) -> <local<h>,exn,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> int */ 
  kk_std_data_hashmap__hash_map _b_x612_614;
  kk_box_t _x_x1860 = kk_std_core_hnd__open_none1(kk_std_data_hashmap__new_mlift_test_hash_map_10314_fun1861(_ctx), kk_std_data_hashmap__hash_map_box(_y_x10144, _ctx), _ctx); /*1001*/
  _b_x612_614 = kk_std_data_hashmap__hash_map_unbox(_x_x1860, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  kk_unit_t x_10388 = kk_Unit;
  kk_ref_set_borrow(hm_3,(kk_std_data_hashmap__hash_map_box(_b_x612_614, _ctx)),kk_context());
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1864 = kk_std_core_hnd_yield_extend(kk_std_data_hashmap__new_mlift_test_hash_map_10314_fun1865(hm_3, _ctx), _ctx); /*8466*/
    return kk_integer_unbox(_x_x1864, _ctx);
  }
  {
    return kk_std_data_hashmap__mlift_test_hash_map_10313(hm_3, x_10388, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10315_fun1868__t {
  struct kk_function_s _base;
  kk_std_data_hashmap__hash_map _y_x10141;
  kk_integer_t i_0;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10315_fun1868(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10315_fun1868(kk_std_data_hashmap__hash_map _y_x10141, kk_integer_t i_0, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10315_fun1868__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10315_fun1868__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10315_fun1868, kk_context());
  _self->_y_x10141 = _y_x10141;
  _self->i_0 = i_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10315_fun1871__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10315_fun1871(kk_function_t _fself, kk_integer_t _x1_x1869, int64_t _x2_x1870, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10315_fun1871(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10315_fun1871, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10315_fun1871(kk_function_t _fself, kk_integer_t _x1_x1869, int64_t _x2_x1870, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hash_int_fs_hash(_x1_x1869, _x2_x1870, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10315_fun1872__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10315_fun1872(kk_function_t _fself, kk_integer_t x, kk_integer_t y, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10315_fun1872(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10315_fun1872, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10315_fun1872(kk_function_t _fself, kk_integer_t x, kk_integer_t y, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _brw_x1258 = kk_integer_eq_borrow(x,y,kk_context()); /*bool*/;
  kk_integer_drop(x, _ctx);
  kk_integer_drop(y, _ctx);
  return _brw_x1258;
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10315_fun1875__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10315_fun1875(kk_function_t _fself, kk_integer_t _x1_x1873, kk_integer_t _x2_x1874, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10315_fun1875(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10315_fun1875, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10315_fun1875(kk_function_t _fself, kk_integer_t _x1_x1873, kk_integer_t _x2_x1874, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashmap_when_resize(_x1_x1873, _x2_x1874, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10315_fun1878__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10315_fun1878(kk_function_t _fself, kk_integer_t _x1_x1876, kk_integer_t _x2_x1877, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10315_fun1878(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10315_fun1878, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10315_fun1878(kk_function_t _fself, kk_integer_t _x1_x1876, kk_integer_t _x2_x1877, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashmap_resizer(_x1_x1876, _x2_x1877, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10315_fun1880__t {
  struct kk_function_s _base;
  kk_function_t _b_x624_641;
};
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10315_fun1880(kk_function_t _fself, kk_box_t _b_x628, int64_t _b_x629, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10315_fun1880(kk_function_t _b_x624_641, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10315_fun1880__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10315_fun1880__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10315_fun1880, kk_context());
  _self->_b_x624_641 = _b_x624_641;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10315_fun1880(kk_function_t _fself, kk_box_t _b_x628, int64_t _b_x629, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10315_fun1880__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10315_fun1880__t*, _fself, _ctx);
  kk_function_t _b_x624_641 = _self->_b_x624_641; /* (i : int, seed : int64) -> int */
  kk_drop_match(_self, {kk_function_dup(_b_x624_641, _ctx);}, {}, _ctx)
  kk_integer_t _x_x1881 = kk_integer_unbox(_b_x628, _ctx); /*int*/
  return kk_function_call(kk_integer_t, (kk_function_t, kk_integer_t, int64_t, kk_context_t*), _b_x624_641, (_b_x624_641, _x_x1881, _b_x629, _ctx), _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10315_fun1882__t {
  struct kk_function_s _base;
  kk_function_t _b_x625_642;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10315_fun1882(kk_function_t _fself, kk_box_t _b_x630, kk_box_t _b_x631, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10315_fun1882(kk_function_t _b_x625_642, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10315_fun1882__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10315_fun1882__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10315_fun1882, kk_context());
  _self->_b_x625_642 = _b_x625_642;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10315_fun1882(kk_function_t _fself, kk_box_t _b_x630, kk_box_t _b_x631, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10315_fun1882__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10315_fun1882__t*, _fself, _ctx);
  kk_function_t _b_x625_642 = _self->_b_x625_642; /* (x : int, y : int) -> bool */
  kk_drop_match(_self, {kk_function_dup(_b_x625_642, _ctx);}, {}, _ctx)
  kk_integer_t _x_x1883 = kk_integer_unbox(_b_x630, _ctx); /*int*/
  kk_integer_t _x_x1884 = kk_integer_unbox(_b_x631, _ctx); /*int*/
  return kk_function_call(bool, (kk_function_t, kk_integer_t, kk_integer_t, kk_context_t*), _b_x625_642, (_b_x625_642, _x_x1883, _x_x1884, _ctx), _ctx);
}
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10315_fun1868(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10315_fun1868__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10315_fun1868__t*, _fself, _ctx);
  kk_std_data_hashmap__hash_map _y_x10141 = _self->_y_x10141; /* std/data/hashmap/hash-map<int,int> */
  kk_integer_t i_0 = _self->i_0; /* int */
  kk_drop_match(_self, {kk_std_data_hashmap__hash_map_dup(_y_x10141, _ctx);kk_integer_dup(i_0, _ctx);}, {}, _ctx)
  kk_std_data_hashmap__hash_map _b_x621_638 = _y_x10141; /*std/data/hashmap/hash-map<int,int>*/;
  kk_integer_t _b_x622_639 = kk_integer_dup(i_0, _ctx); /*int*/;
  kk_integer_t _b_x623_640 = i_0; /*int*/;
  kk_function_t _b_x624_641 = kk_std_data_hashmap__new_mlift_test_hash_map_10315_fun1871(_ctx); /*(i : int, seed : int64) -> int*/;
  kk_function_t _b_x625_642 = kk_std_data_hashmap__new_mlift_test_hash_map_10315_fun1872(_ctx); /*(x : int, y : int) -> bool*/;
  kk_function_t _b_x626_643 = kk_std_data_hashmap__new_mlift_test_hash_map_10315_fun1875(_ctx); /*(table-size : int, item-count : int) -> bool*/;
  kk_function_t _b_x627_644 = kk_std_data_hashmap__new_mlift_test_hash_map_10315_fun1878(_ctx); /*(table-size : int, item-count : int) -> int*/;
  kk_std_data_hashmap__hash_map _x_x1879 = kk_std_data_hashmap_insert(_b_x621_638, kk_integer_box(_b_x622_639, _ctx), kk_integer_box(_b_x623_640, _ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10315_fun1880(_b_x624_641, _ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10315_fun1882(_b_x625_642, _ctx), _b_x626_643, _b_x627_644, _ctx); /*std/data/hashmap/hash-map<2306,2307>*/
  return kk_std_data_hashmap__hash_map_box(_x_x1879, _ctx);
}

kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10315(kk_ref_t hm_3, kk_integer_t i_0, kk_std_data_hashmap__hash_map _y_x10141, kk_context_t* _ctx) { /* forall<h> (hm@3 : local-var<h,hash-map<int,int>>, i@0 : int, hash-map<int,int>) -> <local<h>,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> () */ 
  kk_std_data_hashmap__hash_map _b_x634_636;
  kk_box_t _x_x1867 = kk_std_core_hnd__open_none0(kk_std_data_hashmap__new_mlift_test_hash_map_10315_fun1868(_y_x10141, i_0, _ctx), _ctx); /*1000*/
  _b_x634_636 = kk_std_data_hashmap__hash_map_unbox(_x_x1867, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  kk_unit_t _brw_x1257 = kk_Unit;
  kk_ref_set_borrow(hm_3,(kk_std_data_hashmap__hash_map_box(_b_x634_636, _ctx)),kk_context());
  kk_ref_drop(hm_3, _ctx);
  _brw_x1257; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10316_fun1885__t {
  struct kk_function_s _base;
  kk_ref_t hm_3;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10316_fun1885(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10316_fun1885(kk_ref_t hm_3, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10316_fun1885__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10316_fun1885__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10316_fun1885, kk_context());
  _self->hm_3 = hm_3;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10316_fun1890__t {
  struct kk_function_s _base;
  kk_ref_t hm_3;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10316_fun1890(kk_function_t _fself, kk_box_t _b_x648, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10316_fun1890(kk_ref_t hm_3, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10316_fun1890__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10316_fun1890__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10316_fun1890, kk_context());
  _self->hm_3 = hm_3;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10316_fun1890(kk_function_t _fself, kk_box_t _b_x648, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10316_fun1890__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10316_fun1890__t*, _fself, _ctx);
  kk_ref_t hm_3 = _self->hm_3; /* local-var<6465,std/data/hashmap/hash-map<int,int>> */
  kk_drop_match(_self, {kk_ref_dup(hm_3, _ctx);}, {}, _ctx)
  kk_std_data_hashmap__hash_map _y_x10144_669 = kk_std_data_hashmap__hash_map_unbox(_b_x648, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/;
  kk_integer_t _x_x1891 = kk_std_data_hashmap__mlift_test_hash_map_10314(hm_3, _y_x10144_669, _ctx); /*int*/
  return kk_integer_box(_x_x1891, _ctx);
}
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10316_fun1885(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10316_fun1885__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10316_fun1885__t*, _fself, _ctx);
  kk_ref_t hm_3 = _self->hm_3; /* local-var<6465,std/data/hashmap/hash-map<int,int>> */
  kk_drop_match(_self, {kk_ref_dup(hm_3, _ctx);}, {}, _ctx)
  kk_std_data_hashmap__hash_map x_10390;
  kk_box_t _x_x1886;
  kk_ref_t _x_x1887 = kk_ref_dup(hm_3, _ctx); /*local-var<6465,std/data/hashmap/hash-map<int,int>>*/
  _x_x1886 = kk_ref_get(_x_x1887,kk_context()); /*8431*/
  x_10390 = kk_std_data_hashmap__hash_map_unbox(_x_x1886, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  kk_integer_t _x_x1888;
  if (kk_yielding(kk_context())) {
    kk_datatype_ptr_dropn(x_10390, (KK_I32(2)), _ctx);
    kk_box_t _x_x1889 = kk_std_core_hnd_yield_extend(kk_std_data_hashmap__new_mlift_test_hash_map_10316_fun1890(hm_3, _ctx), _ctx); /*8466*/
    _x_x1888 = kk_integer_unbox(_x_x1889, _ctx); /*int*/
  }
  else {
    _x_x1888 = kk_std_data_hashmap__mlift_test_hash_map_10314(hm_3, x_10390, _ctx); /*int*/
  }
  return kk_integer_box(_x_x1888, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10316_fun1892__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10316_fun1892(kk_function_t _fself, kk_box_t _b_x657, kk_box_t _b_x658, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10316_fun1892(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10316_fun1892, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10316_fun1892(kk_function_t _fself, kk_box_t _b_x657, kk_box_t _b_x658, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _brw_x1254 = kk_integer_unbox(_b_x657, _ctx); /*int*/;
  kk_integer_t _brw_x1253 = kk_integer_unbox(_b_x658, _ctx); /*int*/;
  bool _brw_x1255 = kk_integer_eq_borrow(_brw_x1254,_brw_x1253,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x1254, _ctx);
  kk_integer_drop(_brw_x1253, _ctx);
  return _brw_x1255;
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10316_fun1893__t {
  struct kk_function_s _base;
};
static kk_string_t kk_std_data_hashmap__mlift_test_hash_map_10316_fun1893(kk_function_t _fself, kk_box_t _b_x659, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10316_fun1893(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10316_fun1893, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_std_data_hashmap__mlift_test_hash_map_10316_fun1893(kk_function_t _fself, kk_box_t _b_x659, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x1894 = kk_integer_unbox(_b_x659, _ctx); /*int*/
  return kk_std_core_int_show(_x_x1894, _ctx);
}

kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10316(kk_ref_t hm_3, kk_unit_t wild___4, kk_context_t* _ctx) { /* forall<h> (hm@3 : local-var<h,hash-map<int,int>>, wild_@4 : ()) -> <local<h>,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> () */ 
  kk_string_t _x_x1895;
  kk_define_string_literal(, _s_x1896, 3, "287", _ctx)
  _x_x1895 = kk_string_dup(_s_x1896, _ctx); /*string*/
  kk_string_t _x_x1897;
  kk_define_string_literal(, _s_x1898, 16, "std/data/hashmap", _ctx)
  _x_x1897 = kk_string_dup(_s_x1898, _ctx); /*string*/
  kk_std_test_test_expect(kk_integer_box(kk_integer_from_small(0), _ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10316_fun1885(hm_3, _ctx), kk_std_core_types__new_None(_ctx), kk_std_core_types__new_None(_ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10316_fun1892(_ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10316_fun1893(_ctx), _x_x1895, _x_x1897, _ctx); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10317_fun1900__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10317_fun1900(kk_function_t _fself, kk_integer_t i_0, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10317_fun1900(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10317_fun1900__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10317_fun1900__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10317_fun1900, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10317_fun1903__t {
  struct kk_function_s _base;
  kk_integer_t i_0;
  kk_ref_t loc;
};
static kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10317_fun1903(kk_function_t _fself, kk_std_data_hashmap__hash_map _y_x10141, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10317_fun1903(kk_integer_t i_0, kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10317_fun1903__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10317_fun1903__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10317_fun1903, kk_context());
  _self->i_0 = i_0;
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10317_fun1905__t {
  struct kk_function_s _base;
  kk_std_data_hashmap__hash_map _y_x10141;
  kk_integer_t i_0;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10317_fun1905(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10317_fun1905(kk_std_data_hashmap__hash_map _y_x10141, kk_integer_t i_0, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10317_fun1905__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10317_fun1905__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10317_fun1905, kk_context());
  _self->_y_x10141 = _y_x10141;
  _self->i_0 = i_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10317_fun1909__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10317_fun1909(kk_function_t _fself, kk_box_t _b_x681, int64_t _b_x682, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10317_fun1909(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10317_fun1909, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10317_fun1909(kk_function_t _fself, kk_box_t _b_x681, int64_t _b_x682, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x1910 = kk_integer_unbox(_b_x681, _ctx); /*int*/
  return kk_std_data_hash_int_fs_hash(_x_x1910, _b_x682, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10317_fun1911__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10317_fun1911(kk_function_t _fself, kk_box_t _b_x683, kk_box_t _b_x684, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10317_fun1911(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10317_fun1911, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10317_fun1911(kk_function_t _fself, kk_box_t _b_x683, kk_box_t _b_x684, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _brw_x1251 = kk_integer_unbox(_b_x683, _ctx); /*int*/;
  kk_integer_t _brw_x1250 = kk_integer_unbox(_b_x684, _ctx); /*int*/;
  bool _brw_x1252 = kk_integer_eq_borrow(_brw_x1251,_brw_x1250,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x1251, _ctx);
  kk_integer_drop(_brw_x1250, _ctx);
  return _brw_x1252;
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10317_fun1914__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10317_fun1914(kk_function_t _fself, kk_integer_t _x1_x1912, kk_integer_t _x2_x1913, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10317_fun1914(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10317_fun1914, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10317_fun1914(kk_function_t _fself, kk_integer_t _x1_x1912, kk_integer_t _x2_x1913, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashmap_when_resize(_x1_x1912, _x2_x1913, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10317_fun1917__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10317_fun1917(kk_function_t _fself, kk_integer_t _x1_x1915, kk_integer_t _x2_x1916, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10317_fun1917(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10317_fun1917, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10317_fun1917(kk_function_t _fself, kk_integer_t _x1_x1915, kk_integer_t _x2_x1916, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashmap_resizer(_x1_x1915, _x2_x1916, _ctx);
}
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10317_fun1905(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10317_fun1905__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10317_fun1905__t*, _fself, _ctx);
  kk_std_data_hashmap__hash_map _y_x10141 = _self->_y_x10141; /* std/data/hashmap/hash-map<int,int> */
  kk_integer_t i_0 = _self->i_0; /* int */
  kk_drop_match(_self, {kk_std_data_hashmap__hash_map_dup(_y_x10141, _ctx);kk_integer_dup(i_0, _ctx);}, {}, _ctx)
  kk_std_data_hashmap__hash_map _x_x1906;
  kk_box_t _x_x1907;
  kk_integer_t _x_x1908 = kk_integer_dup(i_0, _ctx); /*int*/
  _x_x1907 = kk_integer_box(_x_x1908, _ctx); /*2306*/
  _x_x1906 = kk_std_data_hashmap_insert(_y_x10141, _x_x1907, kk_integer_box(i_0, _ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10317_fun1909(_ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10317_fun1911(_ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10317_fun1914(_ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10317_fun1917(_ctx), _ctx); /*std/data/hashmap/hash-map<2306,2307>*/
  return kk_std_data_hashmap__hash_map_box(_x_x1906, _ctx);
}
static kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10317_fun1903(kk_function_t _fself, kk_std_data_hashmap__hash_map _y_x10141, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10317_fun1903__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10317_fun1903__t*, _fself, _ctx);
  kk_integer_t i_0 = _self->i_0; /* int */
  kk_ref_t loc = _self->loc; /* local-var<6465,std/data/hashmap/hash-map<int,int>> */
  kk_drop_match(_self, {kk_integer_dup(i_0, _ctx);kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_std_data_hashmap__hash_map _b_x687_689;
  kk_box_t _x_x1904 = kk_std_core_hnd__open_none0(kk_std_data_hashmap__new_mlift_test_hash_map_10317_fun1905(_y_x10141, i_0, _ctx), _ctx); /*1000*/
  _b_x687_689 = kk_std_data_hashmap__hash_map_unbox(_x_x1904, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  kk_unit_t _brw_x1249 = kk_Unit;
  kk_ref_set_borrow(loc,(kk_std_data_hashmap__hash_map_box(_b_x687_689, _ctx)),kk_context());
  kk_ref_drop(loc, _ctx);
  _brw_x1249; return kk_Unit;
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10317_fun1919__t {
  struct kk_function_s _base;
  kk_function_t next_0_10397;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10317_fun1919(kk_function_t _fself, kk_box_t _b_x699, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10317_fun1919(kk_function_t next_0_10397, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10317_fun1919__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10317_fun1919__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10317_fun1919, kk_context());
  _self->next_0_10397 = next_0_10397;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10317_fun1919(kk_function_t _fself, kk_box_t _b_x699, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10317_fun1919__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10317_fun1919__t*, _fself, _ctx);
  kk_function_t next_0_10397 = _self->next_0_10397; /* (std/data/hashmap/hash-map<int,int>) -> <local<6465>,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> () */
  kk_drop_match(_self, {kk_function_dup(next_0_10397, _ctx);}, {}, _ctx)
  kk_unit_t _x_x1920 = kk_Unit;
  kk_std_data_hashmap__hash_map _x_x1921 = kk_std_data_hashmap__hash_map_unbox(_b_x699, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_data_hashmap__hash_map, kk_context_t*), next_0_10397, (next_0_10397, _x_x1921, _ctx), _ctx);
  return kk_unit_box(_x_x1920);
}
static kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10317_fun1900(kk_function_t _fself, kk_integer_t i_0, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10317_fun1900__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10317_fun1900__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<6465,std/data/hashmap/hash-map<int,int>> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_std_data_hashmap__hash_map x_0_10396;
  kk_box_t _x_x1901;
  kk_ref_t _x_x1902 = kk_ref_dup(loc, _ctx); /*local-var<6465,std/data/hashmap/hash-map<int,int>>*/
  _x_x1901 = kk_ref_get(_x_x1902,kk_context()); /*8284*/
  x_0_10396 = kk_std_data_hashmap__hash_map_unbox(_x_x1901, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  kk_function_t next_0_10397 = kk_std_data_hashmap__new_mlift_test_hash_map_10317_fun1903(i_0, loc, _ctx); /*(std/data/hashmap/hash-map<int,int>) -> <local<6465>,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> ()*/;
  if (kk_yielding(kk_context())) {
    kk_datatype_ptr_dropn(x_0_10396, (KK_I32(2)), _ctx);
    kk_box_t _x_x1918 = kk_std_core_hnd_yield_extend(kk_std_data_hashmap__new_mlift_test_hash_map_10317_fun1919(next_0_10397, _ctx), _ctx); /*8466*/
    kk_unit_unbox(_x_x1918); return kk_Unit;
  }
  {
    kk_function_call(kk_unit_t, (kk_function_t, kk_std_data_hashmap__hash_map, kk_context_t*), next_0_10397, (next_0_10397, x_0_10396, _ctx), _ctx); return kk_Unit;
  }
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10317_fun1924__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10317_fun1924(kk_function_t _fself, kk_box_t _b_x702, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10317_fun1924(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10317_fun1924__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10317_fun1924__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10317_fun1924, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10317_fun1924(kk_function_t _fself, kk_box_t _b_x702, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10317_fun1924__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10317_fun1924__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<6465,std/data/hashmap/hash-map<int,int>> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_unit_t _x_x1925 = kk_Unit;
  kk_unit_t _x_x1926 = kk_Unit;
  kk_unit_unbox(_b_x702);
  kk_std_data_hashmap__mlift_test_hash_map_10316(loc, _x_x1926, _ctx);
  return kk_unit_box(_x_x1925);
}

kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10317(kk_std_data_hashmap__hash_map _y_x10140, kk_context_t* _ctx) { /* forall<h> (hash-map<int,int>) -> <std/num/random/random,local<h>,std/test/test/test,console/console,div,exn,std/test/test/test-scope> () */ 
  kk_ref_t loc = kk_ref_alloc((kk_std_data_hashmap__hash_map_box(_y_x10140, _ctx)),kk_context()); /*local-var<6465,std/data/hashmap/hash-map<int,int>>*/;
  kk_unit_t x_10394 = kk_Unit;
  kk_function_t _x_x1899;
  kk_ref_dup(loc, _ctx);
  _x_x1899 = kk_std_data_hashmap__new_mlift_test_hash_map_10317_fun1900(loc, _ctx); /*(i@0 : int) -> <local<6465>,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> ()*/
  kk_std_core_for(kk_integer_from_small(50), _x_x1899, _ctx);
  kk_unit_t res = kk_Unit;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1922;
    kk_function_t _x_x1923;
    kk_ref_dup(loc, _ctx);
    _x_x1923 = kk_std_data_hashmap__new_mlift_test_hash_map_10317_fun1924(loc, _ctx); /*(8465) -> 8467 8466*/
    _x_x1922 = kk_std_core_hnd_yield_extend(_x_x1923, _ctx); /*8466*/
    kk_unit_unbox(_x_x1922);
  }
  else {
    kk_ref_t _x_x1927 = kk_ref_dup(loc, _ctx); /*local-var<6465,std/data/hashmap/hash-map<int,int>>*/
    kk_std_data_hashmap__mlift_test_hash_map_10316(_x_x1927, x_10394, _ctx);
  }
  kk_box_t _x_x1928 = kk_std_core_hnd_prompt_local_var(loc, kk_unit_box(res), _ctx); /*8466*/
  kk_unit_unbox(_x_x1928); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10318_fun1931__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10318_fun1931(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10318_fun1931(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10318_fun1931, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10318_fun1932__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10318_fun1932(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10318_fun1932(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10318_fun1932, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10318_fun1934__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10318_fun1934(kk_function_t _fself, kk_box_t _b_x713, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10318_fun1934(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10318_fun1934, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10318_fun1934(kk_function_t _fself, kk_box_t _b_x713, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_data_hashmap__hash_map _x_x1935;
  kk_std_core_types__optional _x_x1936 = kk_std_core_types__optional_unbox(_b_x713, KK_OWNED, _ctx); /*? int*/
  _x_x1935 = kk_std_data_hashmap_random_fs_hash_map(_x_x1936, _ctx); /*std/data/hashmap/hash-map<539,540>*/
  return kk_std_data_hashmap__hash_map_box(_x_x1935, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10318_fun1940__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10318_fun1940(kk_function_t _fself, kk_box_t _b_x719, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10318_fun1940(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10318_fun1940, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10318_fun1940(kk_function_t _fself, kk_box_t _b_x719, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_data_hashmap__hash_map _y_x10152_721 = kk_std_data_hashmap__hash_map_unbox(_b_x719, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/;
  kk_unit_t _x_x1941 = kk_Unit;
  kk_std_data_hashmap__mlift_test_hash_map_10311(_y_x10152_721, _ctx);
  return kk_unit_box(_x_x1941);
}
static kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10318_fun1932(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_ssize_t _b_x710_714 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_std_data_hashmap__hash_map x_10401;
  kk_box_t _x_x1933;
  kk_box_t _x_x1937;
  kk_std_core_types__optional _x_x1938 = kk_std_core_types__new_Optional(kk_integer_box(kk_integer_from_small(1), _ctx), _ctx); /*? 8898*/
  _x_x1937 = kk_std_core_types__optional_box(_x_x1938, _ctx); /*1000*/
  _x_x1933 = kk_std_core_hnd__open_at1(_b_x710_714, kk_std_data_hashmap__new_mlift_test_hash_map_10318_fun1934(_ctx), _x_x1937, _ctx); /*1001*/
  x_10401 = kk_std_data_hashmap__hash_map_unbox(_x_x1933, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  if (kk_yielding(kk_context())) {
    kk_datatype_ptr_dropn(x_10401, (KK_I32(2)), _ctx);
    kk_box_t _x_x1939 = kk_std_core_hnd_yield_extend(kk_std_data_hashmap__new_mlift_test_hash_map_10318_fun1940(_ctx), _ctx); /*8901*/
    kk_unit_unbox(_x_x1939); return kk_Unit;
  }
  {
    kk_std_data_hashmap__mlift_test_hash_map_10311(x_10401, _ctx); return kk_Unit;
  }
}
static kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10318_fun1931(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x1942;
  kk_define_string_literal(, _s_x1943, 16, "std/data/hashmap", _ctx)
  _x_x1942 = kk_string_dup(_s_x1943, _ctx); /*string*/
  kk_string_t _x_x1944;
  kk_define_string_literal(, _s_x1945, 3, "290", _ctx)
  _x_x1944 = kk_string_dup(_s_x1945, _ctx); /*string*/
  kk_std_test_test_test__(kk_std_data_hashmap__new_mlift_test_hash_map_10318_fun1932(_ctx), _x_x1942, _x_x1944, _ctx); return kk_Unit;
}

kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10318(kk_unit_t wild___6, kk_context_t* _ctx) { /* (wild_@6 : ()) -> <std/test/test/test-scope,console/console,div,exn,std/num/random/random> () */ 
  kk_string_t _x_x1929;
  kk_define_string_literal(, _s_x1930, 15, "clear then fill", _ctx)
  _x_x1929 = kk_string_dup(_s_x1930, _ctx); /*string*/
  kk_string_t _x_x1946;
  kk_define_string_literal(, _s_x1947, 16, "std/data/hashmap", _ctx)
  _x_x1946 = kk_string_dup(_s_x1947, _ctx); /*string*/
  kk_string_t _x_x1948;
  kk_define_string_literal(, _s_x1949, 3, "290", _ctx)
  _x_x1948 = kk_string_dup(_s_x1949, _ctx); /*string*/
  kk_std_test_test_istest_fs_scope(_x_x1929, true, kk_std_data_hashmap__new_mlift_test_hash_map_10318_fun1931(_ctx), _x_x1946, _x_x1948, _ctx); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10319_fun1951__t {
  struct kk_function_s _base;
  kk_std_data_hashmap__hash_map _y_x10132;
  kk_integer_t i;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10319_fun1951(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10319_fun1951(kk_std_data_hashmap__hash_map _y_x10132, kk_integer_t i, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10319_fun1951__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10319_fun1951__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10319_fun1951, kk_context());
  _self->_y_x10132 = _y_x10132;
  _self->i = i;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10319_fun1954__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10319_fun1954(kk_function_t _fself, kk_integer_t _x1_x1952, int64_t _x2_x1953, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10319_fun1954(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10319_fun1954, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10319_fun1954(kk_function_t _fself, kk_integer_t _x1_x1952, int64_t _x2_x1953, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hash_int_fs_hash(_x1_x1952, _x2_x1953, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10319_fun1955__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10319_fun1955(kk_function_t _fself, kk_integer_t x, kk_integer_t y, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10319_fun1955(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10319_fun1955, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10319_fun1955(kk_function_t _fself, kk_integer_t x, kk_integer_t y, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _brw_x1245 = kk_integer_eq_borrow(x,y,kk_context()); /*bool*/;
  kk_integer_drop(x, _ctx);
  kk_integer_drop(y, _ctx);
  return _brw_x1245;
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10319_fun1958__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10319_fun1958(kk_function_t _fself, kk_integer_t _x1_x1956, kk_integer_t _x2_x1957, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10319_fun1958(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10319_fun1958, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10319_fun1958(kk_function_t _fself, kk_integer_t _x1_x1956, kk_integer_t _x2_x1957, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashmap_when_resize(_x1_x1956, _x2_x1957, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10319_fun1961__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10319_fun1961(kk_function_t _fself, kk_integer_t _x1_x1959, kk_integer_t _x2_x1960, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10319_fun1961(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10319_fun1961, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10319_fun1961(kk_function_t _fself, kk_integer_t _x1_x1959, kk_integer_t _x2_x1960, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashmap_resizer(_x1_x1959, _x2_x1960, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10319_fun1963__t {
  struct kk_function_s _base;
  kk_function_t _b_x725_742;
};
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10319_fun1963(kk_function_t _fself, kk_box_t _b_x729, int64_t _b_x730, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10319_fun1963(kk_function_t _b_x725_742, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10319_fun1963__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10319_fun1963__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10319_fun1963, kk_context());
  _self->_b_x725_742 = _b_x725_742;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10319_fun1963(kk_function_t _fself, kk_box_t _b_x729, int64_t _b_x730, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10319_fun1963__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10319_fun1963__t*, _fself, _ctx);
  kk_function_t _b_x725_742 = _self->_b_x725_742; /* (i : int, seed : int64) -> int */
  kk_drop_match(_self, {kk_function_dup(_b_x725_742, _ctx);}, {}, _ctx)
  kk_integer_t _x_x1964 = kk_integer_unbox(_b_x729, _ctx); /*int*/
  return kk_function_call(kk_integer_t, (kk_function_t, kk_integer_t, int64_t, kk_context_t*), _b_x725_742, (_b_x725_742, _x_x1964, _b_x730, _ctx), _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10319_fun1965__t {
  struct kk_function_s _base;
  kk_function_t _b_x726_743;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10319_fun1965(kk_function_t _fself, kk_box_t _b_x731, kk_box_t _b_x732, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10319_fun1965(kk_function_t _b_x726_743, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10319_fun1965__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10319_fun1965__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10319_fun1965, kk_context());
  _self->_b_x726_743 = _b_x726_743;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10319_fun1965(kk_function_t _fself, kk_box_t _b_x731, kk_box_t _b_x732, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10319_fun1965__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10319_fun1965__t*, _fself, _ctx);
  kk_function_t _b_x726_743 = _self->_b_x726_743; /* (x : int, y : int) -> bool */
  kk_drop_match(_self, {kk_function_dup(_b_x726_743, _ctx);}, {}, _ctx)
  kk_integer_t _x_x1966 = kk_integer_unbox(_b_x731, _ctx); /*int*/
  kk_integer_t _x_x1967 = kk_integer_unbox(_b_x732, _ctx); /*int*/
  return kk_function_call(bool, (kk_function_t, kk_integer_t, kk_integer_t, kk_context_t*), _b_x726_743, (_b_x726_743, _x_x1966, _x_x1967, _ctx), _ctx);
}
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10319_fun1951(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10319_fun1951__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10319_fun1951__t*, _fself, _ctx);
  kk_std_data_hashmap__hash_map _y_x10132 = _self->_y_x10132; /* std/data/hashmap/hash-map<int,int> */
  kk_integer_t i = _self->i; /* int */
  kk_drop_match(_self, {kk_std_data_hashmap__hash_map_dup(_y_x10132, _ctx);kk_integer_dup(i, _ctx);}, {}, _ctx)
  kk_std_data_hashmap__hash_map _b_x722_739 = _y_x10132; /*std/data/hashmap/hash-map<int,int>*/;
  kk_integer_t _b_x723_740 = kk_integer_dup(i, _ctx); /*int*/;
  kk_integer_t _b_x724_741 = i; /*int*/;
  kk_function_t _b_x725_742 = kk_std_data_hashmap__new_mlift_test_hash_map_10319_fun1954(_ctx); /*(i : int, seed : int64) -> int*/;
  kk_function_t _b_x726_743 = kk_std_data_hashmap__new_mlift_test_hash_map_10319_fun1955(_ctx); /*(x : int, y : int) -> bool*/;
  kk_function_t _b_x727_744 = kk_std_data_hashmap__new_mlift_test_hash_map_10319_fun1958(_ctx); /*(table-size : int, item-count : int) -> bool*/;
  kk_function_t _b_x728_745 = kk_std_data_hashmap__new_mlift_test_hash_map_10319_fun1961(_ctx); /*(table-size : int, item-count : int) -> int*/;
  kk_std_data_hashmap__hash_map _x_x1962 = kk_std_data_hashmap_insert(_b_x722_739, kk_integer_box(_b_x723_740, _ctx), kk_integer_box(_b_x724_741, _ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10319_fun1963(_b_x725_742, _ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10319_fun1965(_b_x726_743, _ctx), _b_x727_744, _b_x728_745, _ctx); /*std/data/hashmap/hash-map<2306,2307>*/
  return kk_std_data_hashmap__hash_map_box(_x_x1962, _ctx);
}

kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10319(kk_ref_t hm_2, kk_integer_t i, kk_std_data_hashmap__hash_map _y_x10132, kk_context_t* _ctx) { /* forall<h> (hm@2 : local-var<h,hash-map<int,int>>, i : int, hash-map<int,int>) -> <local<h>,exn,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> () */ 
  kk_std_data_hashmap__hash_map _b_x735_737;
  kk_box_t _x_x1950 = kk_std_core_hnd__open_none0(kk_std_data_hashmap__new_mlift_test_hash_map_10319_fun1951(_y_x10132, i, _ctx), _ctx); /*1000*/
  _b_x735_737 = kk_std_data_hashmap__hash_map_unbox(_x_x1950, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  kk_unit_t _brw_x1244 = kk_Unit;
  kk_ref_set_borrow(hm_2,(kk_std_data_hashmap__hash_map_box(_b_x735_737, _ctx)),kk_context());
  kk_ref_drop(hm_2, _ctx);
  _brw_x1244; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10321_fun1969__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10321_fun1969(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10321_fun1969(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10321_fun1969__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10321_fun1969__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10321_fun1969, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10321_fun1970__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10321_fun1970(kk_function_t _fself, kk_integer_t i, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10321_fun1970(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10321_fun1970__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10321_fun1970__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10321_fun1970, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10321_fun1973__t {
  struct kk_function_s _base;
  kk_integer_t i;
  kk_ref_t loc;
};
static kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10321_fun1973(kk_function_t _fself, kk_std_data_hashmap__hash_map _y_x10132, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10321_fun1973(kk_integer_t i, kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10321_fun1973__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10321_fun1973__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10321_fun1973, kk_context());
  _self->i = i;
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10321_fun1975__t {
  struct kk_function_s _base;
  kk_std_data_hashmap__hash_map _y_x10132;
  kk_integer_t i;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10321_fun1975(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10321_fun1975(kk_std_data_hashmap__hash_map _y_x10132, kk_integer_t i, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10321_fun1975__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10321_fun1975__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10321_fun1975, kk_context());
  _self->_y_x10132 = _y_x10132;
  _self->i = i;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10321_fun1979__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10321_fun1979(kk_function_t _fself, kk_box_t _b_x757, int64_t _b_x758, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10321_fun1979(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10321_fun1979, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10321_fun1979(kk_function_t _fself, kk_box_t _b_x757, int64_t _b_x758, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x1980 = kk_integer_unbox(_b_x757, _ctx); /*int*/
  return kk_std_data_hash_int_fs_hash(_x_x1980, _b_x758, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10321_fun1981__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10321_fun1981(kk_function_t _fself, kk_box_t _b_x759, kk_box_t _b_x760, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10321_fun1981(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10321_fun1981, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10321_fun1981(kk_function_t _fself, kk_box_t _b_x759, kk_box_t _b_x760, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _brw_x1240 = kk_integer_unbox(_b_x759, _ctx); /*int*/;
  kk_integer_t _brw_x1239 = kk_integer_unbox(_b_x760, _ctx); /*int*/;
  bool _brw_x1241 = kk_integer_eq_borrow(_brw_x1240,_brw_x1239,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x1240, _ctx);
  kk_integer_drop(_brw_x1239, _ctx);
  return _brw_x1241;
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10321_fun1984__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10321_fun1984(kk_function_t _fself, kk_integer_t _x1_x1982, kk_integer_t _x2_x1983, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10321_fun1984(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10321_fun1984, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10321_fun1984(kk_function_t _fself, kk_integer_t _x1_x1982, kk_integer_t _x2_x1983, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashmap_when_resize(_x1_x1982, _x2_x1983, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10321_fun1987__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10321_fun1987(kk_function_t _fself, kk_integer_t _x1_x1985, kk_integer_t _x2_x1986, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10321_fun1987(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10321_fun1987, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10321_fun1987(kk_function_t _fself, kk_integer_t _x1_x1985, kk_integer_t _x2_x1986, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashmap_resizer(_x1_x1985, _x2_x1986, _ctx);
}
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10321_fun1975(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10321_fun1975__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10321_fun1975__t*, _fself, _ctx);
  kk_std_data_hashmap__hash_map _y_x10132 = _self->_y_x10132; /* std/data/hashmap/hash-map<int,int> */
  kk_integer_t i = _self->i; /* int */
  kk_drop_match(_self, {kk_std_data_hashmap__hash_map_dup(_y_x10132, _ctx);kk_integer_dup(i, _ctx);}, {}, _ctx)
  kk_std_data_hashmap__hash_map _x_x1976;
  kk_box_t _x_x1977;
  kk_integer_t _x_x1978 = kk_integer_dup(i, _ctx); /*int*/
  _x_x1977 = kk_integer_box(_x_x1978, _ctx); /*2306*/
  _x_x1976 = kk_std_data_hashmap_insert(_y_x10132, _x_x1977, kk_integer_box(i, _ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10321_fun1979(_ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10321_fun1981(_ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10321_fun1984(_ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10321_fun1987(_ctx), _ctx); /*std/data/hashmap/hash-map<2306,2307>*/
  return kk_std_data_hashmap__hash_map_box(_x_x1976, _ctx);
}
static kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10321_fun1973(kk_function_t _fself, kk_std_data_hashmap__hash_map _y_x10132, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10321_fun1973__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10321_fun1973__t*, _fself, _ctx);
  kk_integer_t i = _self->i; /* int */
  kk_ref_t loc = _self->loc; /* local-var<6111,std/data/hashmap/hash-map<int,int>> */
  kk_drop_match(_self, {kk_integer_dup(i, _ctx);kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_std_data_hashmap__hash_map _b_x763_765;
  kk_box_t _x_x1974 = kk_std_core_hnd__open_none0(kk_std_data_hashmap__new_mlift_test_hash_map_10321_fun1975(_y_x10132, i, _ctx), _ctx); /*1000*/
  _b_x763_765 = kk_std_data_hashmap__hash_map_unbox(_x_x1974, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  kk_unit_t _brw_x1238 = kk_Unit;
  kk_ref_set_borrow(loc,(kk_std_data_hashmap__hash_map_box(_b_x763_765, _ctx)),kk_context());
  kk_ref_drop(loc, _ctx);
  _brw_x1238; return kk_Unit;
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10321_fun1989__t {
  struct kk_function_s _base;
  kk_function_t next_0_10408;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10321_fun1989(kk_function_t _fself, kk_box_t _b_x775, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10321_fun1989(kk_function_t next_0_10408, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10321_fun1989__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10321_fun1989__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10321_fun1989, kk_context());
  _self->next_0_10408 = next_0_10408;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10321_fun1989(kk_function_t _fself, kk_box_t _b_x775, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10321_fun1989__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10321_fun1989__t*, _fself, _ctx);
  kk_function_t next_0_10408 = _self->next_0_10408; /* (std/data/hashmap/hash-map<int,int>) -> <local<6111>,exn,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> () */
  kk_drop_match(_self, {kk_function_dup(next_0_10408, _ctx);}, {}, _ctx)
  kk_unit_t _x_x1990 = kk_Unit;
  kk_std_data_hashmap__hash_map _x_x1991 = kk_std_data_hashmap__hash_map_unbox(_b_x775, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_data_hashmap__hash_map, kk_context_t*), next_0_10408, (next_0_10408, _x_x1991, _ctx), _ctx);
  return kk_unit_box(_x_x1990);
}
static kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10321_fun1970(kk_function_t _fself, kk_integer_t i, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10321_fun1970__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10321_fun1970__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<6111,std/data/hashmap/hash-map<int,int>> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_std_data_hashmap__hash_map x_0_10407;
  kk_box_t _x_x1971;
  kk_ref_t _x_x1972 = kk_ref_dup(loc, _ctx); /*local-var<6111,std/data/hashmap/hash-map<int,int>>*/
  _x_x1971 = kk_ref_get(_x_x1972,kk_context()); /*8074*/
  x_0_10407 = kk_std_data_hashmap__hash_map_unbox(_x_x1971, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  kk_function_t next_0_10408 = kk_std_data_hashmap__new_mlift_test_hash_map_10321_fun1973(i, loc, _ctx); /*(std/data/hashmap/hash-map<int,int>) -> <local<6111>,exn,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> ()*/;
  if (kk_yielding(kk_context())) {
    kk_datatype_ptr_dropn(x_0_10407, (KK_I32(2)), _ctx);
    kk_box_t _x_x1988 = kk_std_core_hnd_yield_extend(kk_std_data_hashmap__new_mlift_test_hash_map_10321_fun1989(next_0_10408, _ctx), _ctx); /*8112*/
    kk_unit_unbox(_x_x1988); return kk_Unit;
  }
  {
    kk_function_call(kk_unit_t, (kk_function_t, kk_std_data_hashmap__hash_map, kk_context_t*), next_0_10408, (next_0_10408, x_0_10407, _ctx), _ctx); return kk_Unit;
  }
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10321_fun1994__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10321_fun1994(kk_function_t _fself, kk_box_t _b_x778, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10321_fun1994(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10321_fun1994, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10321_fun1994(kk_function_t _fself, kk_box_t _b_x778, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_box_drop(_b_x778, _ctx);
  return kk_bool_box(true);
}
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10321_fun1969(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10321_fun1969__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10321_fun1969__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<6111,std/data/hashmap/hash-map<int,int>> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_unit_t x_10405 = kk_Unit;
  kk_integer_t _brw_x1242 = kk_integer_from_int(50000, _ctx); /*int*/;
  kk_unit_t _brw_x1243 = kk_Unit;
  kk_std_core_for(_brw_x1242, kk_std_data_hashmap__new_mlift_test_hash_map_10321_fun1970(loc, _ctx), _ctx);
  kk_integer_drop(_brw_x1242, _ctx);
  _brw_x1243;
  bool _x_x1992;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1993 = kk_std_core_hnd_yield_extend(kk_std_data_hashmap__new_mlift_test_hash_map_10321_fun1994(_ctx), _ctx); /*8112*/
    _x_x1992 = kk_bool_unbox(_x_x1993); /*bool*/
  }
  else {
    _x_x1992 = true; /*bool*/
  }
  return kk_bool_box(_x_x1992);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10321_fun1995__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10321_fun1995(kk_function_t _fself, kk_box_t _b_x787, kk_box_t _b_x788, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10321_fun1995(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10321_fun1995, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10321_fun1995(kk_function_t _fself, kk_box_t _b_x787, kk_box_t _b_x788, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x1996 = kk_bool_unbox(_b_x787); /*bool*/
  bool _x_x1997 = kk_bool_unbox(_b_x788); /*bool*/
  return kk_std_core_bool__lp__eq__eq__rp_(_x_x1996, _x_x1997, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10321_fun1998__t {
  struct kk_function_s _base;
};
static kk_string_t kk_std_data_hashmap__mlift_test_hash_map_10321_fun1998(kk_function_t _fself, kk_box_t _b_x789, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10321_fun1998(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10321_fun1998, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_std_data_hashmap__mlift_test_hash_map_10321_fun1998(kk_function_t _fself, kk_box_t _b_x789, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x1999 = kk_bool_unbox(_b_x789); /*bool*/
  return kk_std_core_bool_show(_x_x1999, _ctx);
}

kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10321(kk_std_data_hashmap__hash_map _y_x10131, kk_context_t* _ctx) { /* forall<h> (hash-map<int,int>) -> <std/num/random/random,local<h>,std/test/test/test,console/console,div,exn,std/test/test/test-scope> () */ 
  kk_ref_t loc = kk_ref_alloc((kk_std_data_hashmap__hash_map_box(_y_x10131, _ctx)),kk_context()); /*local-var<6111,std/data/hashmap/hash-map<int,int>>*/;
  kk_unit_t res = kk_Unit;
  kk_function_t _x_x1968;
  kk_ref_dup(loc, _ctx);
  _x_x1968 = kk_std_data_hashmap__new_mlift_test_hash_map_10321_fun1969(loc, _ctx); /*() -> <exn,std/test/test/test|8103> 8102*/
  kk_string_t _x_x2000;
  kk_define_string_literal(, _s_x2001, 3, "279", _ctx)
  _x_x2000 = kk_string_dup(_s_x2001, _ctx); /*string*/
  kk_string_t _x_x2002;
  kk_define_string_literal(, _s_x2003, 16, "std/data/hashmap", _ctx)
  _x_x2002 = kk_string_dup(_s_x2003, _ctx); /*string*/
  kk_std_test_test_expect(kk_bool_box(true), _x_x1968, kk_std_core_types__new_None(_ctx), kk_std_core_types__new_None(_ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10321_fun1995(_ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10321_fun1998(_ctx), _x_x2000, _x_x2002, _ctx);
  kk_box_t _x_x2004 = kk_std_core_hnd_prompt_local_var(loc, kk_unit_box(res), _ctx); /*8112*/
  kk_unit_unbox(_x_x2004); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10322_fun2007__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10322_fun2007(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10322_fun2007(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10322_fun2007, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10322_fun2008__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10322_fun2008(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10322_fun2008(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10322_fun2008, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10322_fun2010__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10322_fun2010(kk_function_t _fself, kk_box_t _b_x808, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10322_fun2010(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10322_fun2010, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10322_fun2010(kk_function_t _fself, kk_box_t _b_x808, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_data_hashmap__hash_map _x_x2011;
  kk_std_core_types__optional _x_x2012 = kk_std_core_types__optional_unbox(_b_x808, KK_OWNED, _ctx); /*? int*/
  _x_x2011 = kk_std_data_hashmap_random_fs_hash_map(_x_x2012, _ctx); /*std/data/hashmap/hash-map<539,540>*/
  return kk_std_data_hashmap__hash_map_box(_x_x2011, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10322_fun2016__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10322_fun2016(kk_function_t _fself, kk_box_t _b_x814, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10322_fun2016(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10322_fun2016, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10322_fun2016(kk_function_t _fself, kk_box_t _b_x814, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x2017 = kk_Unit;
  kk_std_data_hashmap__hash_map _x_x2018 = kk_std_data_hashmap__hash_map_unbox(_b_x814, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  kk_std_data_hashmap__mlift_test_hash_map_10317(_x_x2018, _ctx);
  return kk_unit_box(_x_x2017);
}
static kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10322_fun2008(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_ssize_t _b_x805_809 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_std_data_hashmap__hash_map x_0_10415;
  kk_box_t _x_x2009;
  kk_box_t _x_x2013;
  kk_std_core_types__optional _x_x2014 = kk_std_core_types__new_Optional(kk_integer_box(kk_integer_from_small(1), _ctx), _ctx); /*? 8463*/
  _x_x2013 = kk_std_core_types__optional_box(_x_x2014, _ctx); /*1000*/
  _x_x2009 = kk_std_core_hnd__open_at1(_b_x805_809, kk_std_data_hashmap__new_mlift_test_hash_map_10322_fun2010(_ctx), _x_x2013, _ctx); /*1001*/
  x_0_10415 = kk_std_data_hashmap__hash_map_unbox(_x_x2009, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  if (kk_yielding(kk_context())) {
    kk_datatype_ptr_dropn(x_0_10415, (KK_I32(2)), _ctx);
    kk_box_t _x_x2015 = kk_std_core_hnd_yield_extend(kk_std_data_hashmap__new_mlift_test_hash_map_10322_fun2016(_ctx), _ctx); /*8466*/
    kk_unit_unbox(_x_x2015); return kk_Unit;
  }
  {
    kk_std_data_hashmap__mlift_test_hash_map_10317(x_0_10415, _ctx); return kk_Unit;
  }
}
static kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10322_fun2007(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x2019;
  kk_define_string_literal(, _s_x2020, 16, "std/data/hashmap", _ctx)
  _x_x2019 = kk_string_dup(_s_x2020, _ctx); /*string*/
  kk_string_t _x_x2021;
  kk_define_string_literal(, _s_x2022, 3, "283", _ctx)
  _x_x2021 = kk_string_dup(_s_x2022, _ctx); /*string*/
  kk_std_test_test_test__(kk_std_data_hashmap__new_mlift_test_hash_map_10322_fun2008(_ctx), _x_x2019, _x_x2021, _ctx); return kk_Unit;
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10322_fun2028__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10322_fun2028(kk_function_t _fself, kk_box_t _b_x818, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10322_fun2028(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10322_fun2028, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10322_fun2028(kk_function_t _fself, kk_box_t _b_x818, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x2029 = kk_Unit;
  kk_unit_t _x_x2030 = kk_Unit;
  kk_unit_unbox(_b_x818);
  kk_std_data_hashmap__mlift_test_hash_map_10318(_x_x2030, _ctx);
  return kk_unit_box(_x_x2029);
}

kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10322(kk_unit_t wild___3, kk_context_t* _ctx) { /* (wild_@3 : ()) -> <std/test/test/test-scope,console/console,div,exn,std/num/random/random> () */ 
  kk_unit_t x_10413 = kk_Unit;
  kk_string_t _x_x2005;
  kk_define_string_literal(, _s_x2006, 5, "clear", _ctx)
  _x_x2005 = kk_string_dup(_s_x2006, _ctx); /*string*/
  kk_string_t _x_x2023;
  kk_define_string_literal(, _s_x2024, 16, "std/data/hashmap", _ctx)
  _x_x2023 = kk_string_dup(_s_x2024, _ctx); /*string*/
  kk_string_t _x_x2025;
  kk_define_string_literal(, _s_x2026, 3, "283", _ctx)
  _x_x2025 = kk_string_dup(_s_x2026, _ctx); /*string*/
  kk_std_test_test_istest_fs_scope(_x_x2005, true, kk_std_data_hashmap__new_mlift_test_hash_map_10322_fun2007(_ctx), _x_x2023, _x_x2025, _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x2027 = kk_std_core_hnd_yield_extend(kk_std_data_hashmap__new_mlift_test_hash_map_10322_fun2028(_ctx), _ctx); /*3003*/
    kk_unit_unbox(_x_x2027); return kk_Unit;
  }
  {
    kk_std_data_hashmap__mlift_test_hash_map_10318(x_10413, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2032__t {
  struct kk_function_s _base;
  kk_std_data_hashmap__hash_map hm_1_0;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10323_fun2032(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2032(kk_std_data_hashmap__hash_map hm_1_0, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2032__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2032__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10323_fun2032, kk_context());
  _self->hm_1_0 = hm_1_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2034__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10323_fun2034(kk_function_t _fself, kk_box_t _b_x827, int64_t _b_x828, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2034(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10323_fun2034, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10323_fun2034(kk_function_t _fself, kk_box_t _b_x827, int64_t _b_x828, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x2035 = kk_integer_unbox(_b_x827, _ctx); /*int*/
  return kk_std_data_hash_int_fs_hash(_x_x2035, _b_x828, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2036__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10323_fun2036(kk_function_t _fself, kk_box_t _b_x829, kk_box_t _b_x830, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2036(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10323_fun2036, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10323_fun2036(kk_function_t _fself, kk_box_t _b_x829, kk_box_t _b_x830, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _brw_x1232 = kk_integer_unbox(_b_x829, _ctx); /*int*/;
  kk_integer_t _brw_x1231 = kk_integer_unbox(_b_x830, _ctx); /*int*/;
  bool _brw_x1233 = kk_integer_eq_borrow(_brw_x1232,_brw_x1231,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x1232, _ctx);
  kk_integer_drop(_brw_x1231, _ctx);
  return _brw_x1233;
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2039__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10323_fun2039(kk_function_t _fself, kk_integer_t _x1_x2037, kk_integer_t _x2_x2038, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2039(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10323_fun2039, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10323_fun2039(kk_function_t _fself, kk_integer_t _x1_x2037, kk_integer_t _x2_x2038, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashmap_when_resize(_x1_x2037, _x2_x2038, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2042__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10323_fun2042(kk_function_t _fself, kk_integer_t _x1_x2040, kk_integer_t _x2_x2041, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2042(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10323_fun2042, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10323_fun2042(kk_function_t _fself, kk_integer_t _x1_x2040, kk_integer_t _x2_x2041, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashmap_resizer(_x1_x2040, _x2_x2041, _ctx);
}
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10323_fun2032(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2032__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2032__t*, _fself, _ctx);
  kk_std_data_hashmap__hash_map hm_1_0 = _self->hm_1_0; /* std/data/hashmap/hash-map<int,int> */
  kk_drop_match(_self, {kk_std_data_hashmap__hash_map_dup(hm_1_0, _ctx);}, {}, _ctx)
  kk_std_data_hashmap__hash_map _x_x2033 = kk_std_data_hashmap_insert(hm_1_0, kk_integer_box(kk_integer_from_small(1), _ctx), kk_integer_box(kk_integer_from_small(2), _ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2034(_ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2036(_ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2039(_ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2042(_ctx), _ctx); /*std/data/hashmap/hash-map<2306,2307>*/
  return kk_std_data_hashmap__hash_map_box(_x_x2033, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2045__t {
  struct kk_function_s _base;
  kk_std_data_hashmap__hash_map hm_1_sq_;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10323_fun2045(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2045(kk_std_data_hashmap__hash_map hm_1_sq_, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2045__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2045__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10323_fun2045, kk_context());
  _self->hm_1_sq_ = hm_1_sq_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2047__t {
  struct kk_function_s _base;
  kk_std_data_hashmap__hash_map hm_1_sq_;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10323_fun2047(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2047(kk_std_data_hashmap__hash_map hm_1_sq_, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2047__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2047__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10323_fun2047, kk_context());
  _self->hm_1_sq_ = hm_1_sq_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2049__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10323_fun2049(kk_function_t _fself, kk_box_t _b_x848, int64_t _b_x849, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2049(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10323_fun2049, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10323_fun2049(kk_function_t _fself, kk_box_t _b_x848, int64_t _b_x849, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x2050 = kk_integer_unbox(_b_x848, _ctx); /*int*/
  return kk_std_data_hash_int_fs_hash(_x_x2050, _b_x849, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2051__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10323_fun2051(kk_function_t _fself, kk_box_t _b_x850, kk_box_t _b_x851, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2051(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10323_fun2051, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10323_fun2051(kk_function_t _fself, kk_box_t _b_x850, kk_box_t _b_x851, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _brw_x1229 = kk_integer_unbox(_b_x850, _ctx); /*int*/;
  kk_integer_t _brw_x1228 = kk_integer_unbox(_b_x851, _ctx); /*int*/;
  bool _brw_x1230 = kk_integer_eq_borrow(_brw_x1229,_brw_x1228,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x1229, _ctx);
  kk_integer_drop(_brw_x1228, _ctx);
  return _brw_x1230;
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2054__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10323_fun2054(kk_function_t _fself, kk_integer_t _x1_x2052, kk_integer_t _x2_x2053, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2054(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10323_fun2054, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10323_fun2054(kk_function_t _fself, kk_integer_t _x1_x2052, kk_integer_t _x2_x2053, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashmap_when_resize(_x1_x2052, _x2_x2053, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2057__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10323_fun2057(kk_function_t _fself, kk_integer_t _x1_x2055, kk_integer_t _x2_x2056, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2057(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10323_fun2057, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10323_fun2057(kk_function_t _fself, kk_integer_t _x1_x2055, kk_integer_t _x2_x2056, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashmap_resizer(_x1_x2055, _x2_x2056, _ctx);
}
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10323_fun2047(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2047__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2047__t*, _fself, _ctx);
  kk_std_data_hashmap__hash_map hm_1_sq_ = _self->hm_1_sq_; /* std/data/hashmap/hash-map<int,int> */
  kk_drop_match(_self, {kk_std_data_hashmap__hash_map_dup(hm_1_sq_, _ctx);}, {}, _ctx)
  kk_std_data_hashmap__hash_map _x_x2048 = kk_std_data_hashmap_insert(hm_1_sq_, kk_integer_box(kk_integer_from_small(1), _ctx), kk_integer_box(kk_integer_from_small(3), _ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2049(_ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2051(_ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2054(_ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2057(_ctx), _ctx); /*std/data/hashmap/hash-map<2306,2307>*/
  return kk_std_data_hashmap__hash_map_box(_x_x2048, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2058__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10323_fun2058(kk_function_t _fself, kk_box_t _b_x874, kk_box_t _b_x875, kk_box_t _b_x876, kk_box_t _b_x877, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2058(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10323_fun2058, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2059__t {
  struct kk_function_s _base;
  kk_box_t _b_x876;
};
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10323_fun2059(kk_function_t _fself, kk_integer_t _b_x881, int64_t _b_x882, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2059(kk_box_t _b_x876, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2059__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2059__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10323_fun2059, kk_context());
  _self->_b_x876 = _b_x876;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10323_fun2059(kk_function_t _fself, kk_integer_t _b_x881, int64_t _b_x882, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2059__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2059__t*, _fself, _ctx);
  kk_box_t _b_x876 = _self->_b_x876; /* 1002 */
  kk_drop_match(_self, {kk_box_dup(_b_x876, _ctx);}, {}, _ctx)
  kk_box_t _x_x2060;
  kk_function_t _x_x2061 = kk_function_unbox(_b_x876, _ctx); /*(878, 879) -> 880*/
  _x_x2060 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x2061, (_x_x2061, kk_integer_box(_b_x881, _ctx), kk_int64_box(_b_x882, _ctx), _ctx), _ctx); /*880*/
  return kk_integer_unbox(_x_x2060, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2062__t {
  struct kk_function_s _base;
  kk_box_t _b_x877;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10323_fun2062(kk_function_t _fself, kk_integer_t _b_x886, kk_integer_t _b_x887, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2062(kk_box_t _b_x877, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2062__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2062__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10323_fun2062, kk_context());
  _self->_b_x877 = _b_x877;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10323_fun2062(kk_function_t _fself, kk_integer_t _b_x886, kk_integer_t _b_x887, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2062__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2062__t*, _fself, _ctx);
  kk_box_t _b_x877 = _self->_b_x877; /* 1003 */
  kk_drop_match(_self, {kk_box_dup(_b_x877, _ctx);}, {}, _ctx)
  kk_box_t _x_x2063;
  kk_function_t _x_x2064 = kk_function_unbox(_b_x877, _ctx); /*(883, 884) -> 885*/
  _x_x2063 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x2064, (_x_x2064, kk_integer_box(_b_x886, _ctx), kk_integer_box(_b_x887, _ctx), _ctx), _ctx); /*885*/
  return kk_bool_unbox(_x_x2063);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2066__t {
  struct kk_function_s _base;
  kk_function_t _b_x863_938;
};
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10323_fun2066(kk_function_t _fself, kk_box_t _b_x865, int64_t _b_x866, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2066(kk_function_t _b_x863_938, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2066__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2066__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10323_fun2066, kk_context());
  _self->_b_x863_938 = _b_x863_938;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10323_fun2066(kk_function_t _fself, kk_box_t _b_x865, int64_t _b_x866, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2066__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2066__t*, _fself, _ctx);
  kk_function_t _b_x863_938 = _self->_b_x863_938; /* (int, int64) -> int */
  kk_drop_match(_self, {kk_function_dup(_b_x863_938, _ctx);}, {}, _ctx)
  kk_integer_t _x_x2067 = kk_integer_unbox(_b_x865, _ctx); /*int*/
  return kk_function_call(kk_integer_t, (kk_function_t, kk_integer_t, int64_t, kk_context_t*), _b_x863_938, (_b_x863_938, _x_x2067, _b_x866, _ctx), _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2068__t {
  struct kk_function_s _base;
  kk_function_t _b_x864_939;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10323_fun2068(kk_function_t _fself, kk_box_t _b_x867, kk_box_t _b_x868, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2068(kk_function_t _b_x864_939, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2068__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2068__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10323_fun2068, kk_context());
  _self->_b_x864_939 = _b_x864_939;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10323_fun2068(kk_function_t _fself, kk_box_t _b_x867, kk_box_t _b_x868, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2068__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2068__t*, _fself, _ctx);
  kk_function_t _b_x864_939 = _self->_b_x864_939; /* (int, int) -> bool */
  kk_drop_match(_self, {kk_function_dup(_b_x864_939, _ctx);}, {}, _ctx)
  kk_integer_t _x_x2069 = kk_integer_unbox(_b_x867, _ctx); /*int*/
  kk_integer_t _x_x2070 = kk_integer_unbox(_b_x868, _ctx); /*int*/
  return kk_function_call(bool, (kk_function_t, kk_integer_t, kk_integer_t, kk_context_t*), _b_x864_939, (_b_x864_939, _x_x2069, _x_x2070, _ctx), _ctx);
}
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10323_fun2058(kk_function_t _fself, kk_box_t _b_x874, kk_box_t _b_x875, kk_box_t _b_x876, kk_box_t _b_x877, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_data_hashmap__hash_map _b_x861_936 = kk_std_data_hashmap__hash_map_unbox(_b_x874, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/;
  kk_integer_t _b_x862_937 = kk_integer_unbox(_b_x875, _ctx); /*int*/;
  kk_function_t _b_x863_938 = kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2059(_b_x876, _ctx); /*(int, int64) -> int*/;
  kk_function_t _b_x864_939 = kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2062(_b_x877, _ctx); /*(int, int) -> bool*/;
  kk_std_core_types__maybe _x_x2065 = kk_std_data_hashmap_get(_b_x861_936, kk_integer_box(_b_x862_937, _ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2066(_b_x863_938, _ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2068(_b_x864_939, _ctx), _ctx); /*maybe<3177>*/
  return kk_std_core_types__maybe_box(_x_x2065, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2071__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10323_fun2071(kk_function_t _fself, kk_box_t _b_x891, kk_box_t _b_x892, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2071(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10323_fun2071, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10323_fun2071(kk_function_t _fself, kk_box_t _b_x891, kk_box_t _b_x892, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x2072;
  kk_integer_t _x_x2073 = kk_integer_unbox(_b_x891, _ctx); /*int*/
  int64_t _x_x2074 = kk_int64_unbox(_b_x892, KK_OWNED, _ctx); /*int64*/
  _x_x2072 = kk_std_data_hash_int_fs_hash(_x_x2073, _x_x2074, _ctx); /*int*/
  return kk_integer_box(_x_x2072, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2075__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10323_fun2075(kk_function_t _fself, kk_box_t _b_x896, kk_box_t _b_x897, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2075(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10323_fun2075, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10323_fun2075(kk_function_t _fself, kk_box_t _b_x896, kk_box_t _b_x897, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x2076;
  kk_integer_t _brw_x1226 = kk_integer_unbox(_b_x896, _ctx); /*int*/;
  kk_integer_t _brw_x1225 = kk_integer_unbox(_b_x897, _ctx); /*int*/;
  bool _brw_x1227 = kk_integer_eq_borrow(_brw_x1226,_brw_x1225,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x1226, _ctx);
  kk_integer_drop(_brw_x1225, _ctx);
  _x_x2076 = _brw_x1227; /*bool*/
  return kk_bool_box(_x_x2076);
}
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10323_fun2045(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2045__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2045__t*, _fself, _ctx);
  kk_std_data_hashmap__hash_map hm_1_sq_ = _self->hm_1_sq_; /* std/data/hashmap/hash-map<int,int> */
  kk_drop_match(_self, {kk_std_data_hashmap__hash_map_dup(hm_1_sq_, _ctx);}, {}, _ctx)
  kk_std_data_hashmap__hash_map hm_;
  kk_box_t _x_x2046 = kk_std_core_hnd__open_none0(kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2047(hm_1_sq_, _ctx), _ctx); /*1000*/
  hm_ = kk_std_data_hashmap__hash_map_unbox(_x_x2046, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  return kk_std_core_hnd__open_none4(kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2058(_ctx), kk_std_data_hashmap__hash_map_box(hm_, _ctx), kk_integer_box(kk_integer_from_small(1), _ctx), kk_function_box(kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2071(_ctx), _ctx), kk_function_box(kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2075(_ctx), _ctx), _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2077__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10323_fun2077(kk_function_t _fself, kk_box_t _b_x914, kk_box_t _b_x915, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2077(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10323_fun2077, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2079__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10323_fun2079(kk_function_t _fself, kk_box_t _b_x901, kk_box_t _b_x902, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2079(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10323_fun2079, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10323_fun2079(kk_function_t _fself, kk_box_t _b_x901, kk_box_t _b_x902, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x2080;
  kk_std_core_types__maybe _x_x2081 = kk_std_core_types__maybe_unbox(_b_x901, KK_OWNED, _ctx); /*maybe<int>*/
  kk_std_core_types__maybe _x_x2082 = kk_std_core_types__maybe_unbox(_b_x902, KK_OWNED, _ctx); /*maybe<int>*/
  _x_x2080 = kk_std_data_hashmap_mb_fs__lp__eq__eq__rp_(_x_x2081, _x_x2082, _ctx); /*bool*/
  return kk_bool_box(_x_x2080);
}
static bool kk_std_data_hashmap__mlift_test_hash_map_10323_fun2077(kk_function_t _fself, kk_box_t _b_x914, kk_box_t _b_x915, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_box_t _x_x2078 = kk_std_core_hnd__open_none2(kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2079(_ctx), _b_x914, _b_x915, _ctx); /*1002*/
  return kk_bool_unbox(_x_x2078);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2083__t {
  struct kk_function_s _base;
};
static kk_string_t kk_std_data_hashmap__mlift_test_hash_map_10323_fun2083(kk_function_t _fself, kk_box_t _b_x916, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2083(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10323_fun2083, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10323_fun2085__t {
  struct kk_function_s _base;
};
static kk_string_t kk_std_data_hashmap__mlift_test_hash_map_10323_fun2085(kk_function_t _fself, kk_box_t _b_x905, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2085(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10323_fun2085, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_std_data_hashmap__mlift_test_hash_map_10323_fun2085(kk_function_t _fself, kk_box_t _b_x905, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x2086 = kk_integer_unbox(_b_x905, _ctx); /*int*/
  return kk_std_core_int_show(_x_x2086, _ctx);
}
static kk_string_t kk_std_data_hashmap__mlift_test_hash_map_10323_fun2083(kk_function_t _fself, kk_box_t _b_x916, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x_x2084 = kk_std_core_types__maybe_unbox(_b_x916, KK_OWNED, _ctx); /*maybe<int>*/
  return kk_std_core_maybe_show(_x_x2084, kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2085(_ctx), _ctx);
}

kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10323(kk_std_data_hashmap__hash_map hm_1_0, kk_context_t* _ctx) { /* (hm@1@0 : hash-map<int,int>) -> <std/num/random/random,std/test/test/test,console/console,div,exn,std/test/test/test-scope> () */ 
  kk_std_data_hashmap__hash_map hm_1_sq_;
  kk_box_t _x_x2031 = kk_std_core_hnd__open_none0(kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2032(hm_1_0, _ctx), _ctx); /*1000*/
  hm_1_sq_ = kk_std_data_hashmap__hash_map_unbox(_x_x2031, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  kk_box_t _x_x2043;
  kk_std_core_types__maybe _x_x2044 = kk_std_core_types__new_Just(kk_integer_box(kk_integer_from_small(3), _ctx), _ctx); /*maybe<7849>*/
  _x_x2043 = kk_std_core_types__maybe_box(_x_x2044, _ctx); /*7822*/
  kk_string_t _x_x2087;
  kk_define_string_literal(, _s_x2088, 3, "274", _ctx)
  _x_x2087 = kk_string_dup(_s_x2088, _ctx); /*string*/
  kk_string_t _x_x2089;
  kk_define_string_literal(, _s_x2090, 16, "std/data/hashmap", _ctx)
  _x_x2089 = kk_string_dup(_s_x2090, _ctx); /*string*/
  kk_std_test_test_expect(_x_x2043, kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2045(hm_1_sq_, _ctx), kk_std_core_types__new_None(_ctx), kk_std_core_types__new_None(_ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2077(_ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10323_fun2083(_ctx), _x_x2087, _x_x2089, _ctx); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10324_fun2093__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10324_fun2093(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10324_fun2093(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10324_fun2093, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10324_fun2094__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10324_fun2094(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10324_fun2094(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10324_fun2094, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10324_fun2096__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10324_fun2096(kk_function_t _fself, kk_box_t _b_x947, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10324_fun2096(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10324_fun2096, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10324_fun2096(kk_function_t _fself, kk_box_t _b_x947, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_data_hashmap__hash_map _x_x2097;
  kk_std_core_types__optional _x_x2098 = kk_std_core_types__optional_unbox(_b_x947, KK_OWNED, _ctx); /*? int*/
  _x_x2097 = kk_std_data_hashmap_random_fs_hash_map(_x_x2098, _ctx); /*std/data/hashmap/hash-map<539,540>*/
  return kk_std_data_hashmap__hash_map_box(_x_x2097, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10324_fun2102__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10324_fun2102(kk_function_t _fself, kk_box_t _b_x953, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10324_fun2102(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10324_fun2102, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10324_fun2102(kk_function_t _fself, kk_box_t _b_x953, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x2103 = kk_Unit;
  kk_std_data_hashmap__hash_map _x_x2104 = kk_std_data_hashmap__hash_map_unbox(_b_x953, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  kk_std_data_hashmap__mlift_test_hash_map_10321(_x_x2104, _ctx);
  return kk_unit_box(_x_x2103);
}
static kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10324_fun2094(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_ssize_t _b_x944_948 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_std_data_hashmap__hash_map x_0_10419;
  kk_box_t _x_x2095;
  kk_box_t _x_x2099;
  kk_std_core_types__optional _x_x2100 = kk_std_core_types__new_Optional(kk_integer_box(kk_integer_from_small(1), _ctx), _ctx); /*? 8109*/
  _x_x2099 = kk_std_core_types__optional_box(_x_x2100, _ctx); /*1000*/
  _x_x2095 = kk_std_core_hnd__open_at1(_b_x944_948, kk_std_data_hashmap__new_mlift_test_hash_map_10324_fun2096(_ctx), _x_x2099, _ctx); /*1001*/
  x_0_10419 = kk_std_data_hashmap__hash_map_unbox(_x_x2095, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  if (kk_yielding(kk_context())) {
    kk_datatype_ptr_dropn(x_0_10419, (KK_I32(2)), _ctx);
    kk_box_t _x_x2101 = kk_std_core_hnd_yield_extend(kk_std_data_hashmap__new_mlift_test_hash_map_10324_fun2102(_ctx), _ctx); /*8112*/
    kk_unit_unbox(_x_x2101); return kk_Unit;
  }
  {
    kk_std_data_hashmap__mlift_test_hash_map_10321(x_0_10419, _ctx); return kk_Unit;
  }
}
static kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10324_fun2093(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x2105;
  kk_define_string_literal(, _s_x2106, 16, "std/data/hashmap", _ctx)
  _x_x2105 = kk_string_dup(_s_x2106, _ctx); /*string*/
  kk_string_t _x_x2107;
  kk_define_string_literal(, _s_x2108, 3, "277", _ctx)
  _x_x2107 = kk_string_dup(_s_x2108, _ctx); /*string*/
  kk_std_test_test_test__(kk_std_data_hashmap__new_mlift_test_hash_map_10324_fun2094(_ctx), _x_x2105, _x_x2107, _ctx); return kk_Unit;
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10324_fun2114__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10324_fun2114(kk_function_t _fself, kk_box_t _b_x957, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10324_fun2114(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10324_fun2114, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10324_fun2114(kk_function_t _fself, kk_box_t _b_x957, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x2115 = kk_Unit;
  kk_unit_t _x_x2116 = kk_Unit;
  kk_unit_unbox(_b_x957);
  kk_std_data_hashmap__mlift_test_hash_map_10322(_x_x2116, _ctx);
  return kk_unit_box(_x_x2115);
}

kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10324(kk_unit_t wild___1, kk_context_t* _ctx) { /* (wild_@1 : ()) -> <std/test/test/test-scope,console/console,div,exn,std/num/random/random> () */ 
  kk_unit_t x_10417 = kk_Unit;
  kk_string_t _x_x2091;
  kk_define_string_literal(, _s_x2092, 11, "stress test", _ctx)
  _x_x2091 = kk_string_dup(_s_x2092, _ctx); /*string*/
  kk_string_t _x_x2109;
  kk_define_string_literal(, _s_x2110, 16, "std/data/hashmap", _ctx)
  _x_x2109 = kk_string_dup(_s_x2110, _ctx); /*string*/
  kk_string_t _x_x2111;
  kk_define_string_literal(, _s_x2112, 3, "277", _ctx)
  _x_x2111 = kk_string_dup(_s_x2112, _ctx); /*string*/
  kk_std_test_test_istest_fs_scope(_x_x2091, true, kk_std_data_hashmap__new_mlift_test_hash_map_10324_fun2093(_ctx), _x_x2109, _x_x2111, _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x2113 = kk_std_core_hnd_yield_extend(kk_std_data_hashmap__new_mlift_test_hash_map_10324_fun2114(_ctx), _ctx); /*3003*/
    kk_unit_unbox(_x_x2113); return kk_Unit;
  }
  {
    kk_std_data_hashmap__mlift_test_hash_map_10322(x_10417, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10325_fun2118__t {
  struct kk_function_s _base;
  kk_std_data_hashmap__hash_map hm_0;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10325_fun2118(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10325_fun2118(kk_std_data_hashmap__hash_map hm_0, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10325_fun2118__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10325_fun2118__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10325_fun2118, kk_context());
  _self->hm_0 = hm_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10325_fun2120__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10325_fun2120(kk_function_t _fself, kk_box_t _b_x966, int64_t _b_x967, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10325_fun2120(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10325_fun2120, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10325_fun2120(kk_function_t _fself, kk_box_t _b_x966, int64_t _b_x967, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x2121 = kk_integer_unbox(_b_x966, _ctx); /*int*/
  return kk_std_data_hash_int_fs_hash(_x_x2121, _b_x967, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10325_fun2122__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10325_fun2122(kk_function_t _fself, kk_box_t _b_x968, kk_box_t _b_x969, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10325_fun2122(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10325_fun2122, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10325_fun2122(kk_function_t _fself, kk_box_t _b_x968, kk_box_t _b_x969, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _brw_x1221 = kk_integer_unbox(_b_x968, _ctx); /*int*/;
  kk_integer_t _brw_x1220 = kk_integer_unbox(_b_x969, _ctx); /*int*/;
  bool _brw_x1222 = kk_integer_eq_borrow(_brw_x1221,_brw_x1220,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x1221, _ctx);
  kk_integer_drop(_brw_x1220, _ctx);
  return _brw_x1222;
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10325_fun2125__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10325_fun2125(kk_function_t _fself, kk_integer_t _x1_x2123, kk_integer_t _x2_x2124, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10325_fun2125(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10325_fun2125, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10325_fun2125(kk_function_t _fself, kk_integer_t _x1_x2123, kk_integer_t _x2_x2124, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashmap_when_resize(_x1_x2123, _x2_x2124, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10325_fun2128__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10325_fun2128(kk_function_t _fself, kk_integer_t _x1_x2126, kk_integer_t _x2_x2127, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10325_fun2128(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10325_fun2128, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10325_fun2128(kk_function_t _fself, kk_integer_t _x1_x2126, kk_integer_t _x2_x2127, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashmap_resizer(_x1_x2126, _x2_x2127, _ctx);
}
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10325_fun2118(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10325_fun2118__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10325_fun2118__t*, _fself, _ctx);
  kk_std_data_hashmap__hash_map hm_0 = _self->hm_0; /* std/data/hashmap/hash-map<int,int> */
  kk_drop_match(_self, {kk_std_data_hashmap__hash_map_dup(hm_0, _ctx);}, {}, _ctx)
  kk_std_data_hashmap__hash_map _x_x2119 = kk_std_data_hashmap_insert(hm_0, kk_integer_box(kk_integer_from_small(1), _ctx), kk_integer_box(kk_integer_from_small(2), _ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10325_fun2120(_ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10325_fun2122(_ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10325_fun2125(_ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10325_fun2128(_ctx), _ctx); /*std/data/hashmap/hash-map<2306,2307>*/
  return kk_std_data_hashmap__hash_map_box(_x_x2119, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10325_fun2129__t {
  struct kk_function_s _base;
  kk_std_data_hashmap__hash_map hm_0_sq_;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10325_fun2129(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10325_fun2129(kk_std_data_hashmap__hash_map hm_0_sq_, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10325_fun2129__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10325_fun2129__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10325_fun2129, kk_context());
  _self->hm_0_sq_ = hm_0_sq_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10325_fun2131__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10325_fun2131(kk_function_t _fself, kk_box_t _b_x992, kk_box_t _b_x993, kk_box_t _b_x994, kk_box_t _b_x995, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10325_fun2131(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10325_fun2131, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10325_fun2134__t {
  struct kk_function_s _base;
  kk_box_t _b_x994;
};
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10325_fun2134(kk_function_t _fself, kk_box_t _b_x983, int64_t _b_x984, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10325_fun2134(kk_box_t _b_x994, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10325_fun2134__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10325_fun2134__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10325_fun2134, kk_context());
  _self->_b_x994 = _b_x994;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10325_fun2134(kk_function_t _fself, kk_box_t _b_x983, int64_t _b_x984, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10325_fun2134__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10325_fun2134__t*, _fself, _ctx);
  kk_box_t _b_x994 = _self->_b_x994; /* 1002 */
  kk_drop_match(_self, {kk_box_dup(_b_x994, _ctx);}, {}, _ctx)
  kk_box_t _x_x2135;
  kk_function_t _x_x2136 = kk_function_unbox(_b_x994, _ctx); /*(996, 997) -> 998*/
  _x_x2135 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x2136, (_x_x2136, _b_x983, kk_int64_box(_b_x984, _ctx), _ctx), _ctx); /*998*/
  return kk_integer_unbox(_x_x2135, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10325_fun2137__t {
  struct kk_function_s _base;
  kk_box_t _b_x995;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10325_fun2137(kk_function_t _fself, kk_box_t _b_x985, kk_box_t _b_x986, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10325_fun2137(kk_box_t _b_x995, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10325_fun2137__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10325_fun2137__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10325_fun2137, kk_context());
  _self->_b_x995 = _b_x995;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10325_fun2137(kk_function_t _fself, kk_box_t _b_x985, kk_box_t _b_x986, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10325_fun2137__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10325_fun2137__t*, _fself, _ctx);
  kk_box_t _b_x995 = _self->_b_x995; /* 1003 */
  kk_drop_match(_self, {kk_box_dup(_b_x995, _ctx);}, {}, _ctx)
  kk_box_t _x_x2138;
  kk_function_t _x_x2139 = kk_function_unbox(_b_x995, _ctx); /*(1001, 1002) -> 1003*/
  _x_x2138 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x2139, (_x_x2139, _b_x985, _b_x986, _ctx), _ctx); /*1003*/
  return kk_bool_unbox(_x_x2138);
}
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10325_fun2131(kk_function_t _fself, kk_box_t _b_x992, kk_box_t _b_x993, kk_box_t _b_x994, kk_box_t _b_x995, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_data_hashmap__hash_map _x_x2132;
  kk_std_data_hashmap__hash_map _x_x2133 = kk_std_data_hashmap__hash_map_unbox(_b_x992, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  _x_x2132 = kk_std_data_hashmap_remove(_x_x2133, _b_x993, kk_std_data_hashmap__new_mlift_test_hash_map_10325_fun2134(_b_x994, _ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10325_fun2137(_b_x995, _ctx), _ctx); /*std/data/hashmap/hash-map<2953,2954>*/
  return kk_std_data_hashmap__hash_map_box(_x_x2132, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10325_fun2140__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10325_fun2140(kk_function_t _fself, kk_box_t _b_x1009, kk_box_t _b_x1010, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10325_fun2140(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10325_fun2140, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10325_fun2140(kk_function_t _fself, kk_box_t _b_x1009, kk_box_t _b_x1010, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x2141;
  kk_integer_t _x_x2142 = kk_integer_unbox(_b_x1009, _ctx); /*int*/
  int64_t _x_x2143 = kk_int64_unbox(_b_x1010, KK_OWNED, _ctx); /*int64*/
  _x_x2141 = kk_std_data_hash_int_fs_hash(_x_x2142, _x_x2143, _ctx); /*int*/
  return kk_integer_box(_x_x2141, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10325_fun2144__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10325_fun2144(kk_function_t _fself, kk_box_t _b_x1014, kk_box_t _b_x1015, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10325_fun2144(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10325_fun2144, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10325_fun2144(kk_function_t _fself, kk_box_t _b_x1014, kk_box_t _b_x1015, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x2145;
  kk_integer_t _brw_x1218 = kk_integer_unbox(_b_x1014, _ctx); /*int*/;
  kk_integer_t _brw_x1217 = kk_integer_unbox(_b_x1015, _ctx); /*int*/;
  bool _brw_x1219 = kk_integer_eq_borrow(_brw_x1218,_brw_x1217,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x1218, _ctx);
  kk_integer_drop(_brw_x1217, _ctx);
  _x_x2145 = _brw_x1219; /*bool*/
  return kk_bool_box(_x_x2145);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10325_fun2146__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10325_fun2146(kk_function_t _fself, kk_box_t _b_x1027, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10325_fun2146(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10325_fun2146, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10325_fun2146(kk_function_t _fself, kk_box_t _b_x1027, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_data_hashmap__hash_map hm_1_1053 = kk_std_data_hashmap__hash_map_unbox(_b_x1027, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/;
  kk_integer_t _x_x2147;
  {
    struct kk_std_data_hashmap_Hash_map* _con_x2148 = kk_std_data_hashmap__as_Hash_map(hm_1_1053, _ctx);
    kk_vector_t _pat_0 = _con_x2148->data;
    kk_integer_t _x = _con_x2148->amount;
    if kk_likely(kk_datatype_ptr_is_unique(hm_1_1053, _ctx)) {
      kk_vector_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(hm_1_1053, _ctx);
    }
    else {
      kk_integer_dup(_x, _ctx);
      kk_datatype_ptr_decref(hm_1_1053, _ctx);
    }
    _x_x2147 = _x; /*int*/
  }
  return kk_integer_box(_x_x2147, _ctx);
}
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10325_fun2129(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10325_fun2129__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10325_fun2129__t*, _fself, _ctx);
  kk_std_data_hashmap__hash_map hm_0_sq_ = _self->hm_0_sq_; /* std/data/hashmap/hash-map<int,int> */
  kk_drop_match(_self, {kk_std_data_hashmap__hash_map_dup(hm_0_sq_, _ctx);}, {}, _ctx)
  kk_std_data_hashmap__hash_map _x_x1_5_10238;
  kk_box_t _x_x2130 = kk_std_core_hnd__open_none4(kk_std_data_hashmap__new_mlift_test_hash_map_10325_fun2131(_ctx), kk_std_data_hashmap__hash_map_box(hm_0_sq_, _ctx), kk_integer_box(kk_integer_from_small(1), _ctx), kk_function_box(kk_std_data_hashmap__new_mlift_test_hash_map_10325_fun2140(_ctx), _ctx), kk_function_box(kk_std_data_hashmap__new_mlift_test_hash_map_10325_fun2144(_ctx), _ctx), _ctx); /*1004*/
  _x_x1_5_10238 = kk_std_data_hashmap__hash_map_unbox(_x_x2130, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  return kk_std_core_hnd__open_none1(kk_std_data_hashmap__new_mlift_test_hash_map_10325_fun2146(_ctx), kk_std_data_hashmap__hash_map_box(_x_x1_5_10238, _ctx), _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10325_fun2149__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10325_fun2149(kk_function_t _fself, kk_box_t _b_x1036, kk_box_t _b_x1037, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10325_fun2149(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10325_fun2149, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10325_fun2149(kk_function_t _fself, kk_box_t _b_x1036, kk_box_t _b_x1037, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _brw_x1215 = kk_integer_unbox(_b_x1036, _ctx); /*int*/;
  kk_integer_t _brw_x1214 = kk_integer_unbox(_b_x1037, _ctx); /*int*/;
  bool _brw_x1216 = kk_integer_eq_borrow(_brw_x1215,_brw_x1214,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x1215, _ctx);
  kk_integer_drop(_brw_x1214, _ctx);
  return _brw_x1216;
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10325_fun2150__t {
  struct kk_function_s _base;
};
static kk_string_t kk_std_data_hashmap__mlift_test_hash_map_10325_fun2150(kk_function_t _fself, kk_box_t _b_x1038, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10325_fun2150(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10325_fun2150, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_std_data_hashmap__mlift_test_hash_map_10325_fun2150(kk_function_t _fself, kk_box_t _b_x1038, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x2151 = kk_integer_unbox(_b_x1038, _ctx); /*int*/
  return kk_std_core_int_show(_x_x2151, _ctx);
}

kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10325(kk_std_data_hashmap__hash_map hm_0, kk_context_t* _ctx) { /* (hm@0 : hash-map<int,int>) -> <std/num/random/random,std/test/test/test,console/console,div,exn,std/test/test/test-scope> () */ 
  kk_std_data_hashmap__hash_map hm_0_sq_;
  kk_box_t _x_x2117 = kk_std_core_hnd__open_none0(kk_std_data_hashmap__new_mlift_test_hash_map_10325_fun2118(hm_0, _ctx), _ctx); /*1000*/
  hm_0_sq_ = kk_std_data_hashmap__hash_map_unbox(_x_x2117, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  kk_string_t _x_x2152;
  kk_define_string_literal(, _s_x2153, 3, "269", _ctx)
  _x_x2152 = kk_string_dup(_s_x2153, _ctx); /*string*/
  kk_string_t _x_x2154;
  kk_define_string_literal(, _s_x2155, 16, "std/data/hashmap", _ctx)
  _x_x2154 = kk_string_dup(_s_x2155, _ctx); /*string*/
  kk_std_test_test_expect(kk_integer_box(kk_integer_from_small(0), _ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10325_fun2129(hm_0_sq_, _ctx), kk_std_core_types__new_None(_ctx), kk_std_core_types__new_None(_ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10325_fun2149(_ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10325_fun2150(_ctx), _x_x2152, _x_x2154, _ctx); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10326_fun2158__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10326_fun2158(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10326_fun2158(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10326_fun2158, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10326_fun2159__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10326_fun2159(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10326_fun2159(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10326_fun2159, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10326_fun2161__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10326_fun2161(kk_function_t _fself, kk_box_t _b_x1058, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10326_fun2161(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10326_fun2161, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10326_fun2161(kk_function_t _fself, kk_box_t _b_x1058, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_data_hashmap__hash_map _x_x2162;
  kk_std_core_types__optional _x_x2163 = kk_std_core_types__optional_unbox(_b_x1058, KK_OWNED, _ctx); /*? int*/
  _x_x2162 = kk_std_data_hashmap_random_fs_hash_map(_x_x2163, _ctx); /*std/data/hashmap/hash-map<539,540>*/
  return kk_std_data_hashmap__hash_map_box(_x_x2162, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10326_fun2167__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10326_fun2167(kk_function_t _fself, kk_box_t _b_x1064, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10326_fun2167(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10326_fun2167, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10326_fun2167(kk_function_t _fself, kk_box_t _b_x1064, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x2168 = kk_Unit;
  kk_std_data_hashmap__hash_map _x_x2169 = kk_std_data_hashmap__hash_map_unbox(_b_x1064, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  kk_std_data_hashmap__mlift_test_hash_map_10323(_x_x2169, _ctx);
  return kk_unit_box(_x_x2168);
}
static kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10326_fun2159(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_ssize_t _b_x1055_1059 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_std_data_hashmap__hash_map x_0_10423;
  kk_box_t _x_x2160;
  kk_box_t _x_x2164;
  kk_std_core_types__optional _x_x2165 = kk_std_core_types__new_Optional(kk_integer_box(kk_integer_from_small(1), _ctx), _ctx); /*? 7825*/
  _x_x2164 = kk_std_core_types__optional_box(_x_x2165, _ctx); /*1000*/
  _x_x2160 = kk_std_core_hnd__open_at1(_b_x1055_1059, kk_std_data_hashmap__new_mlift_test_hash_map_10326_fun2161(_ctx), _x_x2164, _ctx); /*1001*/
  x_0_10423 = kk_std_data_hashmap__hash_map_unbox(_x_x2160, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  if (kk_yielding(kk_context())) {
    kk_datatype_ptr_dropn(x_0_10423, (KK_I32(2)), _ctx);
    kk_box_t _x_x2166 = kk_std_core_hnd_yield_extend(kk_std_data_hashmap__new_mlift_test_hash_map_10326_fun2167(_ctx), _ctx); /*3003*/
    kk_unit_unbox(_x_x2166); return kk_Unit;
  }
  {
    kk_std_data_hashmap__mlift_test_hash_map_10323(x_0_10423, _ctx); return kk_Unit;
  }
}
static kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10326_fun2158(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x2170;
  kk_define_string_literal(, _s_x2171, 16, "std/data/hashmap", _ctx)
  _x_x2170 = kk_string_dup(_s_x2171, _ctx); /*string*/
  kk_string_t _x_x2172;
  kk_define_string_literal(, _s_x2173, 3, "271", _ctx)
  _x_x2172 = kk_string_dup(_s_x2173, _ctx); /*string*/
  kk_std_test_test_test__(kk_std_data_hashmap__new_mlift_test_hash_map_10326_fun2159(_ctx), _x_x2170, _x_x2172, _ctx); return kk_Unit;
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10326_fun2179__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10326_fun2179(kk_function_t _fself, kk_box_t _b_x1067, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10326_fun2179(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10326_fun2179, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10326_fun2179(kk_function_t _fself, kk_box_t _b_x1067, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x2180 = kk_Unit;
  kk_unit_t _x_x2181 = kk_Unit;
  kk_unit_unbox(_b_x1067);
  kk_std_data_hashmap__mlift_test_hash_map_10324(_x_x2181, _ctx);
  return kk_unit_box(_x_x2180);
}

kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10326(kk_unit_t wild___0, kk_context_t* _ctx) { /* (wild_@0 : ()) -> <std/test/test/test-scope,console/console,div,exn,std/num/random/random> () */ 
  kk_unit_t x_10421 = kk_Unit;
  kk_string_t _x_x2156;
  kk_define_string_literal(, _s_x2157, 9, "overwrite", _ctx)
  _x_x2156 = kk_string_dup(_s_x2157, _ctx); /*string*/
  kk_string_t _x_x2174;
  kk_define_string_literal(, _s_x2175, 16, "std/data/hashmap", _ctx)
  _x_x2174 = kk_string_dup(_s_x2175, _ctx); /*string*/
  kk_string_t _x_x2176;
  kk_define_string_literal(, _s_x2177, 3, "271", _ctx)
  _x_x2176 = kk_string_dup(_s_x2177, _ctx); /*string*/
  kk_std_test_test_istest_fs_scope(_x_x2156, true, kk_std_data_hashmap__new_mlift_test_hash_map_10326_fun2158(_ctx), _x_x2174, _x_x2176, _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x2178 = kk_std_core_hnd_yield_extend(kk_std_data_hashmap__new_mlift_test_hash_map_10326_fun2179(_ctx), _ctx); /*3003*/
    kk_unit_unbox(_x_x2178); return kk_Unit;
  }
  {
    kk_std_data_hashmap__mlift_test_hash_map_10324(x_10421, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2184__t {
  struct kk_function_s _base;
  kk_std_data_hashmap__hash_map hm;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10327_fun2184(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10327_fun2184(kk_std_data_hashmap__hash_map hm, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2184__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2184__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10327_fun2184, kk_context());
  _self->hm = hm;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2186__t {
  struct kk_function_s _base;
  kk_std_data_hashmap__hash_map hm;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10327_fun2186(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10327_fun2186(kk_std_data_hashmap__hash_map hm, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2186__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2186__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10327_fun2186, kk_context());
  _self->hm = hm;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2188__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10327_fun2188(kk_function_t _fself, kk_box_t _b_x1077, int64_t _b_x1078, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10327_fun2188(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10327_fun2188, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10327_fun2188(kk_function_t _fself, kk_box_t _b_x1077, int64_t _b_x1078, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x2189 = kk_integer_unbox(_b_x1077, _ctx); /*int*/
  return kk_std_data_hash_int_fs_hash(_x_x2189, _b_x1078, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2190__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10327_fun2190(kk_function_t _fself, kk_box_t _b_x1079, kk_box_t _b_x1080, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10327_fun2190(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10327_fun2190, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10327_fun2190(kk_function_t _fself, kk_box_t _b_x1079, kk_box_t _b_x1080, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _brw_x1210 = kk_integer_unbox(_b_x1079, _ctx); /*int*/;
  kk_integer_t _brw_x1209 = kk_integer_unbox(_b_x1080, _ctx); /*int*/;
  bool _brw_x1211 = kk_integer_eq_borrow(_brw_x1210,_brw_x1209,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x1210, _ctx);
  kk_integer_drop(_brw_x1209, _ctx);
  return _brw_x1211;
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2193__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10327_fun2193(kk_function_t _fself, kk_integer_t _x1_x2191, kk_integer_t _x2_x2192, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10327_fun2193(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10327_fun2193, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10327_fun2193(kk_function_t _fself, kk_integer_t _x1_x2191, kk_integer_t _x2_x2192, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashmap_when_resize(_x1_x2191, _x2_x2192, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2196__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10327_fun2196(kk_function_t _fself, kk_integer_t _x1_x2194, kk_integer_t _x2_x2195, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10327_fun2196(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10327_fun2196, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10327_fun2196(kk_function_t _fself, kk_integer_t _x1_x2194, kk_integer_t _x2_x2195, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_data_hashmap_resizer(_x1_x2194, _x2_x2195, _ctx);
}
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10327_fun2186(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2186__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2186__t*, _fself, _ctx);
  kk_std_data_hashmap__hash_map hm = _self->hm; /* std/data/hashmap/hash-map<int,int> */
  kk_drop_match(_self, {kk_std_data_hashmap__hash_map_dup(hm, _ctx);}, {}, _ctx)
  kk_std_data_hashmap__hash_map _x_x2187 = kk_std_data_hashmap_insert(hm, kk_integer_box(kk_integer_from_small(1), _ctx), kk_integer_box(kk_integer_from_small(2), _ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10327_fun2188(_ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10327_fun2190(_ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10327_fun2193(_ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10327_fun2196(_ctx), _ctx); /*std/data/hashmap/hash-map<2306,2307>*/
  return kk_std_data_hashmap__hash_map_box(_x_x2187, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2197__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10327_fun2197(kk_function_t _fself, kk_box_t _b_x1103, kk_box_t _b_x1104, kk_box_t _b_x1105, kk_box_t _b_x1106, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10327_fun2197(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10327_fun2197, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2198__t {
  struct kk_function_s _base;
  kk_box_t _b_x1105;
};
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10327_fun2198(kk_function_t _fself, kk_integer_t _b_x1110, int64_t _b_x1111, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10327_fun2198(kk_box_t _b_x1105, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2198__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2198__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10327_fun2198, kk_context());
  _self->_b_x1105 = _b_x1105;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10327_fun2198(kk_function_t _fself, kk_integer_t _b_x1110, int64_t _b_x1111, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2198__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2198__t*, _fself, _ctx);
  kk_box_t _b_x1105 = _self->_b_x1105; /* 1002 */
  kk_drop_match(_self, {kk_box_dup(_b_x1105, _ctx);}, {}, _ctx)
  kk_box_t _x_x2199;
  kk_function_t _x_x2200 = kk_function_unbox(_b_x1105, _ctx); /*(1107, 1108) -> 1109*/
  _x_x2199 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x2200, (_x_x2200, kk_integer_box(_b_x1110, _ctx), kk_int64_box(_b_x1111, _ctx), _ctx), _ctx); /*1109*/
  return kk_integer_unbox(_x_x2199, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2201__t {
  struct kk_function_s _base;
  kk_box_t _b_x1106;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10327_fun2201(kk_function_t _fself, kk_integer_t _b_x1115, kk_integer_t _b_x1116, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10327_fun2201(kk_box_t _b_x1106, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2201__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2201__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10327_fun2201, kk_context());
  _self->_b_x1106 = _b_x1106;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10327_fun2201(kk_function_t _fself, kk_integer_t _b_x1115, kk_integer_t _b_x1116, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2201__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2201__t*, _fself, _ctx);
  kk_box_t _b_x1106 = _self->_b_x1106; /* 1003 */
  kk_drop_match(_self, {kk_box_dup(_b_x1106, _ctx);}, {}, _ctx)
  kk_box_t _x_x2202;
  kk_function_t _x_x2203 = kk_function_unbox(_b_x1106, _ctx); /*(1112, 1113) -> 1114*/
  _x_x2202 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x2203, (_x_x2203, kk_integer_box(_b_x1115, _ctx), kk_integer_box(_b_x1116, _ctx), _ctx), _ctx); /*1114*/
  return kk_bool_unbox(_x_x2202);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2205__t {
  struct kk_function_s _base;
  kk_function_t _b_x1092_1167;
};
static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10327_fun2205(kk_function_t _fself, kk_box_t _b_x1094, int64_t _b_x1095, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10327_fun2205(kk_function_t _b_x1092_1167, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2205__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2205__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10327_fun2205, kk_context());
  _self->_b_x1092_1167 = _b_x1092_1167;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10327_fun2205(kk_function_t _fself, kk_box_t _b_x1094, int64_t _b_x1095, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2205__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2205__t*, _fself, _ctx);
  kk_function_t _b_x1092_1167 = _self->_b_x1092_1167; /* (int, int64) -> int */
  kk_drop_match(_self, {kk_function_dup(_b_x1092_1167, _ctx);}, {}, _ctx)
  kk_integer_t _x_x2206 = kk_integer_unbox(_b_x1094, _ctx); /*int*/
  return kk_function_call(kk_integer_t, (kk_function_t, kk_integer_t, int64_t, kk_context_t*), _b_x1092_1167, (_b_x1092_1167, _x_x2206, _b_x1095, _ctx), _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2207__t {
  struct kk_function_s _base;
  kk_function_t _b_x1093_1168;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10327_fun2207(kk_function_t _fself, kk_box_t _b_x1096, kk_box_t _b_x1097, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10327_fun2207(kk_function_t _b_x1093_1168, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2207__t* _self = kk_function_alloc_as(struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2207__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_hashmap__mlift_test_hash_map_10327_fun2207, kk_context());
  _self->_b_x1093_1168 = _b_x1093_1168;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_std_data_hashmap__mlift_test_hash_map_10327_fun2207(kk_function_t _fself, kk_box_t _b_x1096, kk_box_t _b_x1097, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2207__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2207__t*, _fself, _ctx);
  kk_function_t _b_x1093_1168 = _self->_b_x1093_1168; /* (int, int) -> bool */
  kk_drop_match(_self, {kk_function_dup(_b_x1093_1168, _ctx);}, {}, _ctx)
  kk_integer_t _x_x2208 = kk_integer_unbox(_b_x1096, _ctx); /*int*/
  kk_integer_t _x_x2209 = kk_integer_unbox(_b_x1097, _ctx); /*int*/
  return kk_function_call(bool, (kk_function_t, kk_integer_t, kk_integer_t, kk_context_t*), _b_x1093_1168, (_b_x1093_1168, _x_x2208, _x_x2209, _ctx), _ctx);
}
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10327_fun2197(kk_function_t _fself, kk_box_t _b_x1103, kk_box_t _b_x1104, kk_box_t _b_x1105, kk_box_t _b_x1106, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_data_hashmap__hash_map _b_x1090_1165 = kk_std_data_hashmap__hash_map_unbox(_b_x1103, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/;
  kk_integer_t _b_x1091_1166 = kk_integer_unbox(_b_x1104, _ctx); /*int*/;
  kk_function_t _b_x1092_1167 = kk_std_data_hashmap__new_mlift_test_hash_map_10327_fun2198(_b_x1105, _ctx); /*(int, int64) -> int*/;
  kk_function_t _b_x1093_1168 = kk_std_data_hashmap__new_mlift_test_hash_map_10327_fun2201(_b_x1106, _ctx); /*(int, int) -> bool*/;
  kk_std_core_types__maybe _x_x2204 = kk_std_data_hashmap_get(_b_x1090_1165, kk_integer_box(_b_x1091_1166, _ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10327_fun2205(_b_x1092_1167, _ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10327_fun2207(_b_x1093_1168, _ctx), _ctx); /*maybe<3177>*/
  return kk_std_core_types__maybe_box(_x_x2204, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2210__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10327_fun2210(kk_function_t _fself, kk_box_t _b_x1120, kk_box_t _b_x1121, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10327_fun2210(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10327_fun2210, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10327_fun2210(kk_function_t _fself, kk_box_t _b_x1120, kk_box_t _b_x1121, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x2211;
  kk_integer_t _x_x2212 = kk_integer_unbox(_b_x1120, _ctx); /*int*/
  int64_t _x_x2213 = kk_int64_unbox(_b_x1121, KK_OWNED, _ctx); /*int64*/
  _x_x2211 = kk_std_data_hash_int_fs_hash(_x_x2212, _x_x2213, _ctx); /*int*/
  return kk_integer_box(_x_x2211, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2214__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10327_fun2214(kk_function_t _fself, kk_box_t _b_x1125, kk_box_t _b_x1126, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10327_fun2214(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10327_fun2214, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10327_fun2214(kk_function_t _fself, kk_box_t _b_x1125, kk_box_t _b_x1126, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x2215;
  kk_integer_t _brw_x1207 = kk_integer_unbox(_b_x1125, _ctx); /*int*/;
  kk_integer_t _brw_x1206 = kk_integer_unbox(_b_x1126, _ctx); /*int*/;
  bool _brw_x1208 = kk_integer_eq_borrow(_brw_x1207,_brw_x1206,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x1207, _ctx);
  kk_integer_drop(_brw_x1206, _ctx);
  _x_x2215 = _brw_x1208; /*bool*/
  return kk_bool_box(_x_x2215);
}
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10327_fun2184(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2184__t* _self = kk_function_as(struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2184__t*, _fself, _ctx);
  kk_std_data_hashmap__hash_map hm = _self->hm; /* std/data/hashmap/hash-map<int,int> */
  kk_drop_match(_self, {kk_std_data_hashmap__hash_map_dup(hm, _ctx);}, {}, _ctx)
  kk_std_data_hashmap__hash_map hm_sq_;
  kk_box_t _x_x2185 = kk_std_core_hnd__open_none0(kk_std_data_hashmap__new_mlift_test_hash_map_10327_fun2186(hm, _ctx), _ctx); /*1000*/
  hm_sq_ = kk_std_data_hashmap__hash_map_unbox(_x_x2185, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  return kk_std_core_hnd__open_none4(kk_std_data_hashmap__new_mlift_test_hash_map_10327_fun2197(_ctx), kk_std_data_hashmap__hash_map_box(hm_sq_, _ctx), kk_integer_box(kk_integer_from_small(1), _ctx), kk_function_box(kk_std_data_hashmap__new_mlift_test_hash_map_10327_fun2210(_ctx), _ctx), kk_function_box(kk_std_data_hashmap__new_mlift_test_hash_map_10327_fun2214(_ctx), _ctx), _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2216__t {
  struct kk_function_s _base;
};
static bool kk_std_data_hashmap__mlift_test_hash_map_10327_fun2216(kk_function_t _fself, kk_box_t _b_x1143, kk_box_t _b_x1144, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10327_fun2216(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10327_fun2216, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2218__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10327_fun2218(kk_function_t _fself, kk_box_t _b_x1130, kk_box_t _b_x1131, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10327_fun2218(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10327_fun2218, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10327_fun2218(kk_function_t _fself, kk_box_t _b_x1130, kk_box_t _b_x1131, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x2219;
  kk_std_core_types__maybe _x_x2220 = kk_std_core_types__maybe_unbox(_b_x1130, KK_OWNED, _ctx); /*maybe<int>*/
  kk_std_core_types__maybe _x_x2221 = kk_std_core_types__maybe_unbox(_b_x1131, KK_OWNED, _ctx); /*maybe<int>*/
  _x_x2219 = kk_std_data_hashmap_mb_fs__lp__eq__eq__rp_(_x_x2220, _x_x2221, _ctx); /*bool*/
  return kk_bool_box(_x_x2219);
}
static bool kk_std_data_hashmap__mlift_test_hash_map_10327_fun2216(kk_function_t _fself, kk_box_t _b_x1143, kk_box_t _b_x1144, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_box_t _x_x2217 = kk_std_core_hnd__open_none2(kk_std_data_hashmap__new_mlift_test_hash_map_10327_fun2218(_ctx), _b_x1143, _b_x1144, _ctx); /*1002*/
  return kk_bool_unbox(_x_x2217);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2222__t {
  struct kk_function_s _base;
};
static kk_string_t kk_std_data_hashmap__mlift_test_hash_map_10327_fun2222(kk_function_t _fself, kk_box_t _b_x1145, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10327_fun2222(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10327_fun2222, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10327_fun2224__t {
  struct kk_function_s _base;
};
static kk_string_t kk_std_data_hashmap__mlift_test_hash_map_10327_fun2224(kk_function_t _fself, kk_box_t _b_x1134, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10327_fun2224(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10327_fun2224, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_std_data_hashmap__mlift_test_hash_map_10327_fun2224(kk_function_t _fself, kk_box_t _b_x1134, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x2225 = kk_integer_unbox(_b_x1134, _ctx); /*int*/
  return kk_std_core_int_show(_x_x2225, _ctx);
}
static kk_string_t kk_std_data_hashmap__mlift_test_hash_map_10327_fun2222(kk_function_t _fself, kk_box_t _b_x1145, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x_x2223 = kk_std_core_types__maybe_unbox(_b_x1145, KK_OWNED, _ctx); /*maybe<int>*/
  return kk_std_core_maybe_show(_x_x2223, kk_std_data_hashmap__new_mlift_test_hash_map_10327_fun2224(_ctx), _ctx);
}

kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10327(kk_std_data_hashmap__hash_map hm, kk_context_t* _ctx) { /* (hm : hash-map<int,int>) -> <std/num/random/random,std/test/test/test,console/console,div,exn,std/test/test/test-scope> () */ 
  kk_box_t _x_x2182;
  kk_std_core_types__maybe _x_x2183 = kk_std_core_types__new_Just(kk_integer_box(kk_integer_from_small(2), _ctx), _ctx); /*maybe<6930>*/
  _x_x2182 = kk_std_core_types__maybe_box(_x_x2183, _ctx); /*14809*/
  kk_string_t _x_x2226;
  kk_define_string_literal(, _s_x2227, 3, "263", _ctx)
  _x_x2226 = kk_string_dup(_s_x2227, _ctx); /*string*/
  kk_string_t _x_x2228;
  kk_define_string_literal(, _s_x2229, 16, "std/data/hashmap", _ctx)
  _x_x2228 = kk_string_dup(_s_x2229, _ctx); /*string*/
  kk_std_test_test_expect(_x_x2182, kk_std_data_hashmap__new_mlift_test_hash_map_10327_fun2184(hm, _ctx), kk_std_core_types__new_None(_ctx), kk_std_core_types__new_None(_ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10327_fun2216(_ctx), kk_std_data_hashmap__new_mlift_test_hash_map_10327_fun2222(_ctx), _x_x2226, _x_x2228, _ctx); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10328_fun2232__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10328_fun2232(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10328_fun2232(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10328_fun2232, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10328_fun2233__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10328_fun2233(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10328_fun2233(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10328_fun2233, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10328_fun2235__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10328_fun2235(kk_function_t _fself, kk_box_t _b_x1176, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10328_fun2235(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10328_fun2235, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10328_fun2235(kk_function_t _fself, kk_box_t _b_x1176, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_data_hashmap__hash_map _x_x2236;
  kk_std_core_types__optional _x_x2237 = kk_std_core_types__optional_unbox(_b_x1176, KK_OWNED, _ctx); /*? int*/
  _x_x2236 = kk_std_data_hashmap_random_fs_hash_map(_x_x2237, _ctx); /*std/data/hashmap/hash-map<539,540>*/
  return kk_std_data_hashmap__hash_map_box(_x_x2236, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10328_fun2241__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10328_fun2241(kk_function_t _fself, kk_box_t _b_x1182, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10328_fun2241(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10328_fun2241, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10328_fun2241(kk_function_t _fself, kk_box_t _b_x1182, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x2242 = kk_Unit;
  kk_std_data_hashmap__hash_map _x_x2243 = kk_std_data_hashmap__hash_map_unbox(_b_x1182, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  kk_std_data_hashmap__mlift_test_hash_map_10325(_x_x2243, _ctx);
  return kk_unit_box(_x_x2242);
}
static kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10328_fun2233(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_ssize_t _b_x1173_1177 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_std_data_hashmap__hash_map x_0_10427;
  kk_box_t _x_x2234;
  kk_box_t _x_x2238;
  kk_std_core_types__optional _x_x2239 = kk_std_core_types__new_Optional(kk_integer_box(kk_integer_from_small(1), _ctx), _ctx); /*? 7214*/
  _x_x2238 = kk_std_core_types__optional_box(_x_x2239, _ctx); /*1000*/
  _x_x2234 = kk_std_core_hnd__open_at1(_b_x1173_1177, kk_std_data_hashmap__new_mlift_test_hash_map_10328_fun2235(_ctx), _x_x2238, _ctx); /*1001*/
  x_0_10427 = kk_std_data_hashmap__hash_map_unbox(_x_x2234, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  if (kk_yielding(kk_context())) {
    kk_datatype_ptr_dropn(x_0_10427, (KK_I32(2)), _ctx);
    kk_box_t _x_x2240 = kk_std_core_hnd_yield_extend(kk_std_data_hashmap__new_mlift_test_hash_map_10328_fun2241(_ctx), _ctx); /*3003*/
    kk_unit_unbox(_x_x2240); return kk_Unit;
  }
  {
    kk_std_data_hashmap__mlift_test_hash_map_10325(x_0_10427, _ctx); return kk_Unit;
  }
}
static kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10328_fun2232(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x2244;
  kk_define_string_literal(, _s_x2245, 16, "std/data/hashmap", _ctx)
  _x_x2244 = kk_string_dup(_s_x2245, _ctx); /*string*/
  kk_string_t _x_x2246;
  kk_define_string_literal(, _s_x2247, 3, "266", _ctx)
  _x_x2246 = kk_string_dup(_s_x2247, _ctx); /*string*/
  kk_std_test_test_test__(kk_std_data_hashmap__new_mlift_test_hash_map_10328_fun2233(_ctx), _x_x2244, _x_x2246, _ctx); return kk_Unit;
}


// lift anonymous function
struct kk_std_data_hashmap__mlift_test_hash_map_10328_fun2253__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10328_fun2253(kk_function_t _fself, kk_box_t _b_x1185, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap__new_mlift_test_hash_map_10328_fun2253(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap__mlift_test_hash_map_10328_fun2253, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashmap__mlift_test_hash_map_10328_fun2253(kk_function_t _fself, kk_box_t _b_x1185, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x2254 = kk_Unit;
  kk_unit_t _x_x2255 = kk_Unit;
  kk_unit_unbox(_b_x1185);
  kk_std_data_hashmap__mlift_test_hash_map_10326(_x_x2255, _ctx);
  return kk_unit_box(_x_x2254);
}

kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10328(kk_unit_t wild__, kk_context_t* _ctx) { /* (wild_ : ()) -> <std/test/test/test-scope,console/console,div,exn,std/num/random/random> () */ 
  kk_unit_t x_10425 = kk_Unit;
  kk_string_t _x_x2230;
  kk_define_string_literal(, _s_x2231, 6, "remove", _ctx)
  _x_x2230 = kk_string_dup(_s_x2231, _ctx); /*string*/
  kk_string_t _x_x2248;
  kk_define_string_literal(, _s_x2249, 16, "std/data/hashmap", _ctx)
  _x_x2248 = kk_string_dup(_s_x2249, _ctx); /*string*/
  kk_string_t _x_x2250;
  kk_define_string_literal(, _s_x2251, 3, "266", _ctx)
  _x_x2250 = kk_string_dup(_s_x2251, _ctx); /*string*/
  kk_std_test_test_istest_fs_scope(_x_x2230, true, kk_std_data_hashmap__new_mlift_test_hash_map_10328_fun2232(_ctx), _x_x2248, _x_x2250, _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x2252 = kk_std_core_hnd_yield_extend(kk_std_data_hashmap__new_mlift_test_hash_map_10328_fun2253(_ctx), _ctx); /*3003*/
    kk_unit_unbox(_x_x2252); return kk_Unit;
  }
  {
    kk_std_data_hashmap__mlift_test_hash_map_10326(x_10425, _ctx); return kk_Unit;
  }
}


// lift anonymous function
struct kk_std_data_hashmap_test_hash_map_fun2258__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_data_hashmap_test_hash_map_fun2258(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_new_test_hash_map_fun2258(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap_test_hash_map_fun2258, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap_test_hash_map_fun2261__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_data_hashmap_test_hash_map_fun2261(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_new_test_hash_map_fun2261(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap_test_hash_map_fun2261, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap_test_hash_map_fun2262__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_data_hashmap_test_hash_map_fun2262(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_new_test_hash_map_fun2262(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap_test_hash_map_fun2262, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_data_hashmap_test_hash_map_fun2264__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap_test_hash_map_fun2264(kk_function_t _fself, kk_box_t _b_x1191, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_new_test_hash_map_fun2264(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap_test_hash_map_fun2264, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashmap_test_hash_map_fun2264(kk_function_t _fself, kk_box_t _b_x1191, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_data_hashmap__hash_map _x_x2265;
  kk_std_core_types__optional _x_x2266 = kk_std_core_types__optional_unbox(_b_x1191, KK_OWNED, _ctx); /*? int*/
  _x_x2265 = kk_std_data_hashmap_random_fs_hash_map(_x_x2266, _ctx); /*std/data/hashmap/hash-map<539,540>*/
  return kk_std_data_hashmap__hash_map_box(_x_x2265, _ctx);
}


// lift anonymous function
struct kk_std_data_hashmap_test_hash_map_fun2270__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap_test_hash_map_fun2270(kk_function_t _fself, kk_box_t _b_x1197, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_new_test_hash_map_fun2270(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap_test_hash_map_fun2270, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashmap_test_hash_map_fun2270(kk_function_t _fself, kk_box_t _b_x1197, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x2271 = kk_Unit;
  kk_std_data_hashmap__hash_map _x_x2272 = kk_std_data_hashmap__hash_map_unbox(_b_x1197, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  kk_std_data_hashmap__mlift_test_hash_map_10327(_x_x2272, _ctx);
  return kk_unit_box(_x_x2271);
}
static kk_unit_t kk_std_data_hashmap_test_hash_map_fun2262(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_ssize_t _b_x1188_1192 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_std_data_hashmap__hash_map x_0_10431;
  kk_box_t _x_x2263;
  kk_box_t _x_x2267;
  kk_std_core_types__optional _x_x2268 = kk_std_core_types__new_Optional(kk_integer_box(kk_integer_from_small(1), _ctx), _ctx); /*? 14812*/
  _x_x2267 = kk_std_core_types__optional_box(_x_x2268, _ctx); /*1000*/
  _x_x2263 = kk_std_core_hnd__open_at1(_b_x1188_1192, kk_std_data_hashmap_new_test_hash_map_fun2264(_ctx), _x_x2267, _ctx); /*1001*/
  x_0_10431 = kk_std_data_hashmap__hash_map_unbox(_x_x2263, KK_OWNED, _ctx); /*std/data/hashmap/hash-map<int,int>*/
  if (kk_yielding(kk_context())) {
    kk_datatype_ptr_dropn(x_0_10431, (KK_I32(2)), _ctx);
    kk_box_t _x_x2269 = kk_std_core_hnd_yield_extend(kk_std_data_hashmap_new_test_hash_map_fun2270(_ctx), _ctx); /*3003*/
    kk_unit_unbox(_x_x2269); return kk_Unit;
  }
  {
    kk_std_data_hashmap__mlift_test_hash_map_10327(x_0_10431, _ctx); return kk_Unit;
  }
}
static kk_unit_t kk_std_data_hashmap_test_hash_map_fun2261(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x2273;
  kk_define_string_literal(, _s_x2274, 16, "std/data/hashmap", _ctx)
  _x_x2273 = kk_string_dup(_s_x2274, _ctx); /*string*/
  kk_string_t _x_x2275;
  kk_define_string_literal(, _s_x2276, 3, "261", _ctx)
  _x_x2275 = kk_string_dup(_s_x2276, _ctx); /*string*/
  kk_std_test_test_test__(kk_std_data_hashmap_new_test_hash_map_fun2262(_ctx), _x_x2273, _x_x2275, _ctx); return kk_Unit;
}


// lift anonymous function
struct kk_std_data_hashmap_test_hash_map_fun2282__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_data_hashmap_test_hash_map_fun2282(kk_function_t _fself, kk_box_t _b_x1200, kk_context_t* _ctx);
static kk_function_t kk_std_data_hashmap_new_test_hash_map_fun2282(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashmap_test_hash_map_fun2282, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_data_hashmap_test_hash_map_fun2282(kk_function_t _fself, kk_box_t _b_x1200, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x2283 = kk_Unit;
  kk_unit_t _x_x2284 = kk_Unit;
  kk_unit_unbox(_b_x1200);
  kk_std_data_hashmap__mlift_test_hash_map_10328(_x_x2284, _ctx);
  return kk_unit_box(_x_x2283);
}
static kk_unit_t kk_std_data_hashmap_test_hash_map_fun2258(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t x_10429 = kk_Unit;
  kk_string_t _x_x2259;
  kk_define_string_literal(, _s_x2260, 6, "insert", _ctx)
  _x_x2259 = kk_string_dup(_s_x2260, _ctx); /*string*/
  kk_string_t _x_x2277;
  kk_define_string_literal(, _s_x2278, 16, "std/data/hashmap", _ctx)
  _x_x2277 = kk_string_dup(_s_x2278, _ctx); /*string*/
  kk_string_t _x_x2279;
  kk_define_string_literal(, _s_x2280, 3, "261", _ctx)
  _x_x2279 = kk_string_dup(_s_x2280, _ctx); /*string*/
  kk_std_test_test_istest_fs_scope(_x_x2259, true, kk_std_data_hashmap_new_test_hash_map_fun2261(_ctx), _x_x2277, _x_x2279, _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x2281 = kk_std_core_hnd_yield_extend(kk_std_data_hashmap_new_test_hash_map_fun2282(_ctx), _ctx); /*3003*/
    kk_unit_unbox(_x_x2281); return kk_Unit;
  }
  {
    kk_std_data_hashmap__mlift_test_hash_map_10328(x_10429, _ctx); return kk_Unit;
  }
}

kk_unit_t kk_std_data_hashmap_test_hash_map(kk_context_t* _ctx) { /* () -> <pure,console/console,std/num/random/random> () */ 
  kk_string_t _x_x2256;
  kk_define_string_literal(, _s_x2257, 8, "hash-map", _ctx)
  _x_x2256 = kk_string_dup(_s_x2257, _ctx); /*string*/
  kk_string_t _x_x2285;
  kk_define_string_literal(, _s_x2286, 16, "std/data/hashmap", _ctx)
  _x_x2285 = kk_string_dup(_s_x2286, _ctx); /*string*/
  kk_string_t _x_x2287;
  kk_define_string_literal(, _s_x2288, 3, "260", _ctx)
  _x_x2287 = kk_string_dup(_s_x2288, _ctx); /*string*/
  kk_std_test_test_group(_x_x2256, kk_std_data_hashmap_new_test_hash_map_fun2258(_ctx), kk_std_core_types__new_None(_ctx), _x_x2285, _x_x2287, _ctx); return kk_Unit;
}

// initialization
void kk_std_data_hashmap__init(kk_context_t* _ctx){
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
  kk_std_core_dash_extras__init(_ctx);
  kk_std_test__init(_ctx);
  kk_std_num_int64__init(_ctx);
  kk_std_num_random__init(_ctx);
  kk_std_data_hash__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
}

// termination
void kk_std_data_hashmap__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_data_hash__done(_ctx);
  kk_std_num_random__done(_ctx);
  kk_std_num_int64__done(_ctx);
  kk_std_test__done(_ctx);
  kk_std_core_dash_extras__done(_ctx);
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
