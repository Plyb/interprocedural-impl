#pragma once
#ifndef kk_std_data_hashmap_H
#define kk_std_data_hashmap_H
// Koka generated module: std/data/hashmap, koka version: 3.1.2, platform: 64-bit
#include <kklib.h>
#include "std_core_types.h"
#include "std_core_hnd.h"
#include "std_core_exn.h"
#include "std_core_bool.h"
#include "std_core_order.h"
#include "std_core_char.h"
#include "std_core_int.h"
#include "std_core_vector.h"
#include "std_core_string.h"
#include "std_core_sslice.h"
#include "std_core_list.h"
#include "std_core_maybe.h"
#include "std_core_either.h"
#include "std_core_tuple.h"
#include "std_core_show.h"
#include "std_core_debug.h"
#include "std_core_delayed.h"
#include "std_core_console.h"
#include "std_test_test.h"
#include "std_test_bench.h"
#include "std_core.h"
#include "std_core_dash_extras.h"
#include "std_test.h"
#include "std_num_int64.h"
#include "std_num_random.h"
#include "std_data_hash.h"

// type declarations

// type std/data/hashmap/hash-map
struct kk_std_data_hashmap__hash_map_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_std_data_hashmap__hash_map;
struct kk_std_data_hashmap_Hash_map {
  struct kk_std_data_hashmap__hash_map_s _base;
  kk_vector_t data;
  kk_integer_t amount;
  int64_t seed;
};
static inline kk_std_data_hashmap__hash_map kk_std_data_hashmap__base_Hash_map(struct kk_std_data_hashmap_Hash_map* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_std_data_hashmap__hash_map kk_std_data_hashmap__new_Hash_map(kk_reuse_t _at, int32_t _cpath, kk_vector_t data, kk_integer_t amount, int64_t seed, kk_context_t* _ctx) {
  struct kk_std_data_hashmap_Hash_map* _con = kk_block_alloc_at_as(struct kk_std_data_hashmap_Hash_map, _at, 2 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->data = data;
  _con->amount = amount;
  _con->seed = seed;
  return kk_std_data_hashmap__base_Hash_map(_con, _ctx);
}
static inline struct kk_std_data_hashmap_Hash_map* kk_std_data_hashmap__as_Hash_map(kk_std_data_hashmap__hash_map x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_std_data_hashmap_Hash_map*, x, (kk_tag_t)(1), _ctx);
}
static inline bool kk_std_data_hashmap__is_Hash_map(kk_std_data_hashmap__hash_map x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_std_data_hashmap__hash_map kk_std_data_hashmap__hash_map_dup(kk_std_data_hashmap__hash_map _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_std_data_hashmap__hash_map_drop(kk_std_data_hashmap__hash_map _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_std_data_hashmap__hash_map_box(kk_std_data_hashmap__hash_map _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_std_data_hashmap__hash_map kk_std_data_hashmap__hash_map_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// value declarations
 
// Automatically generated. Retrieves the `data` constructor field of the `:hash-map` type.

static inline kk_vector_t kk_std_data_hashmap_hash_map_fs_data(kk_std_data_hashmap__hash_map _this, kk_context_t* _ctx) { /* forall<a,b> (hash-map<a,b>) -> vector<list<(a, b)>> */ 
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1413 = kk_std_data_hashmap__as_Hash_map(_this, _ctx);
    kk_vector_t _x = _con_x1413->data;
    return kk_vector_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `amount` constructor field of the `:hash-map` type.

static inline kk_integer_t kk_std_data_hashmap_hash_map_fs_amount(kk_std_data_hashmap__hash_map _this, kk_context_t* _ctx) { /* forall<a,b> (hash-map<a,b>) -> int */ 
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1414 = kk_std_data_hashmap__as_Hash_map(_this, _ctx);
    kk_integer_t _x = _con_x1414->amount;
    return kk_integer_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `seed` constructor field of the `:hash-map` type.

static inline int64_t kk_std_data_hashmap_hash_map_fs_seed(kk_std_data_hashmap__hash_map _this, kk_context_t* _ctx) { /* forall<a,b> (hash-map<a,b>) -> int64 */ 
  {
    struct kk_std_data_hashmap_Hash_map* _con_x1415 = kk_std_data_hashmap__as_Hash_map(_this, _ctx);
    int64_t _x = _con_x1415->seed;
    return _x;
  }
}

kk_std_data_hashmap__hash_map kk_std_data_hashmap_hash_map_fs__copy(kk_std_data_hashmap__hash_map _this, kk_std_core_types__optional data, kk_std_core_types__optional amount, kk_std_core_types__optional seed, kk_context_t* _ctx); /* forall<a,b> (hash-map<a,b>, data : ? (vector<list<(a, b)>>), amount : ? int, seed : ? int64) -> hash-map<a,b> */ 

kk_std_data_hashmap__hash_map kk_std_data_hashmap_random_fs__mlift_hash_map_10297(kk_std_core_types__optional capacity, int64_t _y_x10095, kk_context_t* _ctx); /* forall<a,b> (capacity : ? int, int64) -> std/num/random/random hash-map<a,b> */ 

kk_std_data_hashmap__hash_map kk_std_data_hashmap_random_fs_hash_map(kk_std_core_types__optional capacity, kk_context_t* _ctx); /* forall<a,b> (capacity : ? int) -> std/num/random/random hash-map<a,b> */ 

kk_std_data_hashmap__hash_map kk_std_data_hashmap_thread_fs_hash_map(kk_std_core_types__optional capacity, kk_context_t* _ctx); /* forall<a,b> (capacity : ? int) -> hash-map<a,b> */ 

kk_std_data_hashmap__hash_map kk_std_data_hashmap_random_fs_hash_map_seeded(int64_t seed, kk_std_core_types__optional capacity, kk_context_t* _ctx); /* forall<a,b> (seed : int64, capacity : ? int) -> hash-map<a,b> */ 

kk_integer_t kk_std_data_hashmap_length(kk_std_data_hashmap__hash_map hm, kk_context_t* _ctx); /* forall<a,b> (hm : hash-map<a,b>) -> int */ 

kk_vector_t kk_std_data_hashmap_helper_fs_resize(kk_vector_t v, kk_context_t* _ctx); /* forall<a,b> (v : vector<list<(a, b)>>) -> vector<list<(a, b)>> */ 

kk_std_data_hashmap__hash_map kk_std_data_hashmap_clear(kk_std_data_hashmap__hash_map hm, kk_context_t* _ctx); /* forall<a,b> (hm : hash-map<a,b>) -> hash-map<a,b> */ 

kk_unit_t kk_std_data_hashmap_foreach(kk_std_data_hashmap__hash_map hm, kk_function_t f, kk_context_t* _ctx); /* forall<e,a,b> (hm : hash-map<a,b>, f : (a, b) -> e ()) -> e () */ 

kk_vector_t kk_std_data_hashmap_helper_fs_rehash(kk_vector_t v, kk_std_core_types__list buckets, int64_t seed, kk_function_t _implicit_fs_hash, kk_context_t* _ctx); /* forall<a,b> (v : vector<list<(a, b)>>, buckets : list<(a, b)>, seed : int64, ?hash : (a, int64) -> int) -> vector<list<(a, b)>> */ 

kk_vector_t kk_std_data_hashmap_rehash(kk_vector_t v, kk_vector_t buckets, int64_t seed, kk_function_t _implicit_fs_hash, kk_context_t* _ctx); /* forall<a,b> (v : vector<list<(a, b)>>, buckets : vector<list<(a, b)>>, seed : int64, ?hash : (a, int64) -> int) -> vector<list<(a, b)>> */ 

kk_std_data_hashmap__hash_map kk_std_data_hashmap_resize(kk_std_data_hashmap__hash_map hm, kk_integer_t new_capacity, kk_function_t _implicit_fs_hash, kk_context_t* _ctx); /* forall<a,b> (hm : hash-map<a,b>, new-capacity : int, ?hash : (a, int64) -> int) -> hash-map<a,b> */ 
 
// Internal function that dictates when to resize the hash-map. This can be overridden with implicits.

static inline bool kk_std_data_hashmap_when_resize(kk_integer_t table_size, kk_integer_t item_count, kk_context_t* _ctx) { /* (table-size : int, item-count : int) -> bool */ 
  bool _match_x1338;
  kk_integer_t _brw_x1339 = kk_integer_mul((kk_integer_from_small(2)),table_size,kk_context()); /*int*/;
  bool _brw_x1340 = kk_integer_lte_borrow(_brw_x1339,item_count,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x1339, _ctx);
  kk_integer_drop(item_count, _ctx);
  _match_x1338 = _brw_x1340; /*bool*/
  if (_match_x1338) {
    return true;
  }
  {
    return false;
  }
}
 
// Internal function that determines the new size of a hash-map when inserting. This can be overridden with implicits.

static inline kk_integer_t kk_std_data_hashmap_resizer(kk_integer_t table_size, kk_integer_t item_count, kk_context_t* _ctx) { /* (table-size : int, item-count : int) -> int */ 
  kk_integer_drop(table_size, _ctx);
  return kk_integer_mul(item_count,(kk_integer_from_small(2)),kk_context());
}

kk_unit_t kk_std_data_hashmap_foreach_key(kk_std_data_hashmap__hash_map hm, kk_function_t f, kk_context_t* _ctx); /* forall<e,a,b> (hm : hash-map<a,b>, f : (a) -> e ()) -> e () */ 

kk_unit_t kk_std_data_hashmap_foreach_value(kk_std_data_hashmap__hash_map hm, kk_function_t f, kk_context_t* _ctx); /* forall<e,a,b> (hm : hash-map<a,b>, f : (b) -> e ()) -> e () */ 

bool kk_std_data_hashmap_mb_fs__lp__eq__eq__rp_(kk_std_core_types__maybe a, kk_std_core_types__maybe b, kk_context_t* _ctx); /* (a : maybe<int>, b : maybe<int>) -> bool */ 

kk_std_data_hashmap__hash_map kk_std_data_hashmap_insert(kk_std_data_hashmap__hash_map hm, kk_box_t key, kk_box_t value, kk_function_t _implicit_fs_hash, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_when_resize, kk_function_t _implicit_fs_resizer, kk_context_t* _ctx); /* forall<a,b> (hm : hash-map<a,b>, key : a, value : b, ?hash : (a, int64) -> int, ?(==) : (a, a) -> bool, ?when-resize : (int, int) -> bool, ?resizer : (int, int) -> int) -> hash-map<a,b> */ 

kk_std_data_hashmap__hash_map kk_std_data_hashmap_from_list_helper(kk_std_data_hashmap__hash_map hm, kk_std_core_types__list l, kk_function_t _implicit_fs_hash, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx); /* forall<a,b> (hm : hash-map<a,b>, l : list<(a, b)>, ?hash : (a, int64) -> int, ?(==) : (a, a) -> bool) -> hash-map<a,b> */ 

kk_std_data_hashmap__hash_map kk_std_data_hashmap_random_fs_list_fs__mlift_hash_map_10298(kk_std_core_types__list xs, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_std_data_hashmap__hash_map _y_x10106, kk_context_t* _ctx); /* forall<a,b> (xs : list<(a, b)>, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int, hash-map<a,b>) -> std/num/random/random hash-map<a,b> */ 

kk_std_data_hashmap__hash_map kk_std_data_hashmap_random_fs_list_fs_hash_map(kk_std_core_types__list xs, kk_function_t _implicit_fs_hash, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx); /* forall<a,b> (xs : list<(a, b)>, ?hash : (a, int64) -> int, ?(==) : (a, a) -> bool) -> std/num/random/random hash-map<a,b> */ 

kk_std_data_hashmap__hash_map kk_std_data_hashmap_thread_fs_list_fs_hash_map(kk_std_core_types__list xs, kk_function_t _implicit_fs_hash, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx); /* forall<a,b> (xs : list<(a, b)>, ?hash : (a, int64) -> int, ?(==) : (a, a) -> bool) -> hash-map<a,b> */ 

kk_std_data_hashmap__hash_map kk_std_data_hashmap_list_fs_hash_map_seeded(kk_std_core_types__list xs, int64_t seed, kk_function_t _implicit_fs_hash, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx); /* forall<a,b> (xs : list<(a, b)>, seed : int64, ?hash : (a, int64) -> int, ?(==) : (a, a) -> bool) -> hash-map<a,b> */ 

kk_std_data_hashmap__hash_map kk_std_data_hashmap_remove(kk_std_data_hashmap__hash_map hm, kk_box_t key, kk_function_t _implicit_fs_hash, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx); /* forall<a,b> (hm : hash-map<a,b>, key : a, ?hash : (a, int64) -> int, ?(==) : (a, a) -> bool) -> hash-map<a,b> */ 

kk_std_core_types__maybe kk_std_data_hashmap_get(kk_std_data_hashmap__hash_map hm, kk_box_t key, kk_function_t _implicit_fs_hash, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx); /* forall<a,b> (hm : hash-map<a,b>, key : a, ?hash : (a, int64) -> int, ?(==) : (a, a) -> bool) -> maybe<b> */ 

kk_std_data_hashmap__hash_map kk_std_data_hashmap_effect_fs__mlift_map_10299(kk_std_data_hashmap__hash_map hm, kk_vector_t new_data, kk_context_t* _ctx); /* forall<a,b,c,d,e> (hm : hash-map<a,b>, new-data : vector<list<(c, d)>>) -> e hash-map<c,d> */ 

kk_std_data_hashmap__hash_map kk_std_data_hashmap_effect_fs_map(kk_std_data_hashmap__hash_map hm, kk_function_t f, kk_context_t* _ctx); /* forall<a,b,c,d,e> (hm : hash-map<a,b>, f : ((a, b)) -> e (c, d)) -> e hash-map<c,d> */ 

kk_std_data_hashmap__hash_map kk_std_data_hashmap_unique_fs_map(kk_std_data_hashmap__hash_map hm, kk_function_t f, kk_context_t* _ctx); /* forall<a,b,c,d> (hm : hash-map<a,b>, f : ((a, b)) -> (c, d)) -> hash-map<c,d> */ 
 
// monadic lift

static inline kk_std_core_types__tuple2 kk_std_data_hashmap_effect_fs__mlift_map_values_10300(kk_box_t key, kk_box_t _y_x10109, kk_context_t* _ctx) { /* forall<a,e,b> (key : b, a) -> e (b, a) */ 
  return kk_std_core_types__new_Tuple2(key, _y_x10109, _ctx);
}

kk_std_data_hashmap__hash_map kk_std_data_hashmap_effect_fs__mlift_map_values_10301(kk_std_data_hashmap__hash_map hm, kk_vector_t new_data, kk_context_t* _ctx); /* forall<a,b,e,c> (hm : hash-map<c,a>, new-data : vector<list<(c, b)>>) -> e hash-map<c,b> */ 

kk_std_data_hashmap__hash_map kk_std_data_hashmap_effect_fs_map_values(kk_std_data_hashmap__hash_map hm, kk_function_t f, kk_context_t* _ctx); /* forall<a,b,e,c> (hm : hash-map<c,a>, f : (a) -> e b) -> e hash-map<c,b> */ 

kk_std_data_hashmap__hash_map kk_std_data_hashmap_unique_fs_map_values(kk_std_data_hashmap__hash_map hm, kk_function_t f, kk_context_t* _ctx); /* forall<a,b,c> (hm : hash-map<c,a>, f : (a) -> b) -> hash-map<c,b> */ 
 
// monadic lift

static inline kk_std_core_types__tuple2 kk_std_data_hashmap_effect_fs__mlift_map_keys_10302(kk_box_t value, kk_box_t _y_x10113, kk_context_t* _ctx) { /* forall<a,e,b> (value : b, a) -> e (a, b) */ 
  return kk_std_core_types__new_Tuple2(_y_x10113, value, _ctx);
}

kk_std_data_hashmap__hash_map kk_std_data_hashmap_effect_fs__mlift_map_keys_10303(kk_std_data_hashmap__hash_map hm, kk_vector_t new_data, kk_context_t* _ctx); /* forall<a,b,e,c> (hm : hash-map<a,c>, new-data : vector<list<(b, c)>>) -> e hash-map<b,c> */ 

kk_std_data_hashmap__hash_map kk_std_data_hashmap_effect_fs_map_keys(kk_std_data_hashmap__hash_map hm, kk_function_t f, kk_context_t* _ctx); /* forall<a,b,e,c> (hm : hash-map<a,c>, f : (a) -> e b) -> e hash-map<b,c> */ 

kk_std_data_hashmap__hash_map kk_std_data_hashmap_unique_fs_map_keys(kk_std_data_hashmap__hash_map hm, kk_function_t f, kk_context_t* _ctx); /* forall<a,b,c> (hm : hash-map<a,c>, f : (a) -> b) -> hash-map<b,c> */ 

kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10304(kk_std_data_hashmap__hash_map _y_x10161, kk_context_t* _ctx); /* forall<h> (hash-map<int,int>) -> <local<h>,exn,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> int */ 

kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10305(kk_ref_t hm_4_0, kk_integer_t i_2, kk_std_data_hashmap__hash_map _y_x10158, kk_context_t* _ctx); /* forall<h> (hm@4@0 : local-var<h,hash-map<int,int>>, i@2 : int, hash-map<int,int>) -> <local<h>,exn,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> () */ 

kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10306(kk_ref_t hm_4_0, kk_unit_t wild___9, kk_context_t* _ctx); /* forall<h> (hm@4@0 : local-var<h,hash-map<int,int>>, wild_@9 : ()) -> <local<h>,exn,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> int */ 

kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10307(kk_ref_t hm_4_0, kk_unit_t wild___8, kk_context_t* _ctx); /* forall<h> (hm@4@0 : local-var<h,hash-map<int,int>>, wild_@8 : ()) -> <local<h>,exn,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> int */ 

kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10308(kk_ref_t hm_4_0, kk_std_data_hashmap__hash_map _y_x10156, kk_context_t* _ctx); /* forall<h> (hm@4@0 : local-var<h,hash-map<int,int>>, hash-map<int,int>) -> <local<h>,exn,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> int */ 

kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10309(kk_ref_t hm_4_0, kk_integer_t i_1, kk_std_data_hashmap__hash_map _y_x10153, kk_context_t* _ctx); /* forall<h> (hm@4@0 : local-var<h,hash-map<int,int>>, i@1 : int, hash-map<int,int>) -> <local<h>,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> () */ 

kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10310(kk_ref_t hm_4_0, kk_unit_t wild___7, kk_context_t* _ctx); /* forall<h> (hm@4@0 : local-var<h,hash-map<int,int>>, wild_@7 : ()) -> <local<h>,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> () */ 

kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10311(kk_std_data_hashmap__hash_map _y_x10152, kk_context_t* _ctx); /* forall<h> (hash-map<int,int>) -> <std/num/random/random,local<h>,std/test/test/test,console/console,div,exn,std/test/test/test-scope> () */ 

kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10312(kk_std_data_hashmap__hash_map _y_x10146, kk_context_t* _ctx); /* forall<h> (hash-map<int,int>) -> <local<h>,exn,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> int */ 

kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10313(kk_ref_t hm_3, kk_unit_t wild___5, kk_context_t* _ctx); /* forall<h> (hm@3 : local-var<h,hash-map<int,int>>, wild_@5 : ()) -> <local<h>,exn,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> int */ 

kk_integer_t kk_std_data_hashmap__mlift_test_hash_map_10314(kk_ref_t hm_3, kk_std_data_hashmap__hash_map _y_x10144, kk_context_t* _ctx); /* forall<h> (hm@3 : local-var<h,hash-map<int,int>>, hash-map<int,int>) -> <local<h>,exn,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> int */ 

kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10315(kk_ref_t hm_3, kk_integer_t i_0, kk_std_data_hashmap__hash_map _y_x10141, kk_context_t* _ctx); /* forall<h> (hm@3 : local-var<h,hash-map<int,int>>, i@0 : int, hash-map<int,int>) -> <local<h>,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> () */ 

kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10316(kk_ref_t hm_3, kk_unit_t wild___4, kk_context_t* _ctx); /* forall<h> (hm@3 : local-var<h,hash-map<int,int>>, wild_@4 : ()) -> <local<h>,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> () */ 

kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10317(kk_std_data_hashmap__hash_map _y_x10140, kk_context_t* _ctx); /* forall<h> (hash-map<int,int>) -> <std/num/random/random,local<h>,std/test/test/test,console/console,div,exn,std/test/test/test-scope> () */ 

kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10318(kk_unit_t wild___6, kk_context_t* _ctx); /* (wild_@6 : ()) -> <std/test/test/test-scope,console/console,div,exn,std/num/random/random> () */ 

kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10319(kk_ref_t hm_2, kk_integer_t i, kk_std_data_hashmap__hash_map _y_x10132, kk_context_t* _ctx); /* forall<h> (hm@2 : local-var<h,hash-map<int,int>>, i : int, hash-map<int,int>) -> <local<h>,exn,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> () */ 
 
// monadic lift

static inline bool kk_std_data_hashmap__mlift_test_hash_map_10320(kk_unit_t wild___2, kk_context_t* _ctx) { /* forall<h> (wild_@2 : ()) -> <local<h>,exn,std/test/test/test,std/num/random/random,console/console,div,exn,std/test/test/test-scope> bool */ 
  return true;
}

kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10321(kk_std_data_hashmap__hash_map _y_x10131, kk_context_t* _ctx); /* forall<h> (hash-map<int,int>) -> <std/num/random/random,local<h>,std/test/test/test,console/console,div,exn,std/test/test/test-scope> () */ 

kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10322(kk_unit_t wild___3, kk_context_t* _ctx); /* (wild_@3 : ()) -> <std/test/test/test-scope,console/console,div,exn,std/num/random/random> () */ 

kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10323(kk_std_data_hashmap__hash_map hm_1_0, kk_context_t* _ctx); /* (hm@1@0 : hash-map<int,int>) -> <std/num/random/random,std/test/test/test,console/console,div,exn,std/test/test/test-scope> () */ 

kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10324(kk_unit_t wild___1, kk_context_t* _ctx); /* (wild_@1 : ()) -> <std/test/test/test-scope,console/console,div,exn,std/num/random/random> () */ 

kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10325(kk_std_data_hashmap__hash_map hm_0, kk_context_t* _ctx); /* (hm@0 : hash-map<int,int>) -> <std/num/random/random,std/test/test/test,console/console,div,exn,std/test/test/test-scope> () */ 

kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10326(kk_unit_t wild___0, kk_context_t* _ctx); /* (wild_@0 : ()) -> <std/test/test/test-scope,console/console,div,exn,std/num/random/random> () */ 

kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10327(kk_std_data_hashmap__hash_map hm, kk_context_t* _ctx); /* (hm : hash-map<int,int>) -> <std/num/random/random,std/test/test/test,console/console,div,exn,std/test/test/test-scope> () */ 

kk_unit_t kk_std_data_hashmap__mlift_test_hash_map_10328(kk_unit_t wild__, kk_context_t* _ctx); /* (wild_ : ()) -> <std/test/test/test-scope,console/console,div,exn,std/num/random/random> () */ 

kk_unit_t kk_std_data_hashmap_test_hash_map(kk_context_t* _ctx); /* () -> <pure,console/console,std/num/random/random> () */ 

void kk_std_data_hashmap__init(kk_context_t* _ctx);


void kk_std_data_hashmap__done(kk_context_t* _ctx);

#endif // header
