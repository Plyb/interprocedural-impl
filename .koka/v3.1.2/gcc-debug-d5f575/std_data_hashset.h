#pragma once
#ifndef kk_std_data_hashset_H
#define kk_std_data_hashset_H
// Koka generated module: std/data/hashset, koka version: 3.1.2, platform: 64-bit
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
#include "std_num_int64.h"
#include "std_test.h"
#include "std_num_random.h"
#include "std_core_dash_extras.h"
#include "std_data_hash.h"

// type declarations

// type std/data/hashset/hash-set
struct kk_std_data_hashset__hash_set_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_std_data_hashset__hash_set;
struct kk_std_data_hashset_Hash_set {
  struct kk_std_data_hashset__hash_set_s _base;
  kk_vector_t data;
  kk_integer_t amount;
  int64_t seed;
};
static inline kk_std_data_hashset__hash_set kk_std_data_hashset__base_Hash_set(struct kk_std_data_hashset_Hash_set* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_std_data_hashset__hash_set kk_std_data_hashset__new_Hash_set(kk_reuse_t _at, int32_t _cpath, kk_vector_t data, kk_integer_t amount, int64_t seed, kk_context_t* _ctx) {
  struct kk_std_data_hashset_Hash_set* _con = kk_block_alloc_at_as(struct kk_std_data_hashset_Hash_set, _at, 2 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->data = data;
  _con->amount = amount;
  _con->seed = seed;
  return kk_std_data_hashset__base_Hash_set(_con, _ctx);
}
static inline struct kk_std_data_hashset_Hash_set* kk_std_data_hashset__as_Hash_set(kk_std_data_hashset__hash_set x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_std_data_hashset_Hash_set*, x, (kk_tag_t)(1), _ctx);
}
static inline bool kk_std_data_hashset__is_Hash_set(kk_std_data_hashset__hash_set x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_std_data_hashset__hash_set kk_std_data_hashset__hash_set_dup(kk_std_data_hashset__hash_set _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_std_data_hashset__hash_set_drop(kk_std_data_hashset__hash_set _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_std_data_hashset__hash_set_box(kk_std_data_hashset__hash_set _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_std_data_hashset__hash_set kk_std_data_hashset__hash_set_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// value declarations
 
// Automatically generated. Retrieves the `data` constructor field of the `:hash-set` type.

static inline kk_vector_t kk_std_data_hashset_hash_set_fs_data(kk_std_data_hashset__hash_set _this, kk_context_t* _ctx) { /* forall<a> (hash-set<a>) -> vector<list<a>> */ 
  {
    struct kk_std_data_hashset_Hash_set* _con_x1080 = kk_std_data_hashset__as_Hash_set(_this, _ctx);
    kk_vector_t _x = _con_x1080->data;
    return kk_vector_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `amount` constructor field of the `:hash-set` type.

static inline kk_integer_t kk_std_data_hashset_hash_set_fs_amount(kk_std_data_hashset__hash_set _this, kk_context_t* _ctx) { /* forall<a> (hash-set<a>) -> int */ 
  {
    struct kk_std_data_hashset_Hash_set* _con_x1081 = kk_std_data_hashset__as_Hash_set(_this, _ctx);
    kk_integer_t _x = _con_x1081->amount;
    return kk_integer_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `seed` constructor field of the `:hash-set` type.

static inline int64_t kk_std_data_hashset_hash_set_fs_seed(kk_std_data_hashset__hash_set _this, kk_context_t* _ctx) { /* forall<a> (hash-set<a>) -> int64 */ 
  {
    struct kk_std_data_hashset_Hash_set* _con_x1082 = kk_std_data_hashset__as_Hash_set(_this, _ctx);
    int64_t _x = _con_x1082->seed;
    return _x;
  }
}

kk_std_data_hashset__hash_set kk_std_data_hashset_hash_set_fs__copy(kk_std_data_hashset__hash_set _this, kk_std_core_types__optional data, kk_std_core_types__optional amount, kk_std_core_types__optional seed, kk_context_t* _ctx); /* forall<a> (hash-set<a>, data : ? (vector<list<a>>), amount : ? int, seed : ? int64) -> hash-set<a> */ 


// lift anonymous function
struct kk_std_data_hashset_int_hash_fun1091__t {
  struct kk_function_s _base;
};
extern kk_integer_t kk_std_data_hashset_int_hash_fun1091(kk_function_t _fself, kk_integer_t _x1_x1089, int64_t _x2_x1090, kk_context_t* _ctx);
static inline kk_function_t kk_std_data_hashset_new_int_hash_fun1091(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset_int_hash_fun1091, _ctx)
  return kk_function_dup(_fself,kk_context());
}


extern kk_function_t kk_std_data_hashset_int_hash;


// lift anonymous function
struct kk_std_data_hashset_char_hash_fun1094__t {
  struct kk_function_s _base;
};
extern kk_integer_t kk_std_data_hashset_char_hash_fun1094(kk_function_t _fself, kk_char_t _x1_x1092, int64_t _x2_x1093, kk_context_t* _ctx);
static inline kk_function_t kk_std_data_hashset_new_char_hash_fun1094(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset_char_hash_fun1094, _ctx)
  return kk_function_dup(_fself,kk_context());
}


extern kk_function_t kk_std_data_hashset_char_hash;


// lift anonymous function
struct kk_std_data_hashset_bool_hash_fun1097__t {
  struct kk_function_s _base;
};
extern kk_integer_t kk_std_data_hashset_bool_hash_fun1097(kk_function_t _fself, bool _x1_x1095, int64_t _x2_x1096, kk_context_t* _ctx);
static inline kk_function_t kk_std_data_hashset_new_bool_hash_fun1097(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset_bool_hash_fun1097, _ctx)
  return kk_function_dup(_fself,kk_context());
}


extern kk_function_t kk_std_data_hashset_bool_hash;


// lift anonymous function
struct kk_std_data_hashset_string_hash_fun1100__t {
  struct kk_function_s _base;
};
extern kk_integer_t kk_std_data_hashset_string_hash_fun1100(kk_function_t _fself, kk_string_t _x_x1098, int64_t _x_x1099, kk_context_t* _ctx);
static inline kk_function_t kk_std_data_hashset_new_string_hash_fun1100(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_data_hashset_string_hash_fun1100, _ctx)
  return kk_function_dup(_fself,kk_context());
}


extern kk_function_t kk_std_data_hashset_string_hash;

kk_std_data_hashset__hash_set kk_std_data_hashset_thread_fs_hash_set(kk_std_core_types__optional capacity, kk_context_t* _ctx); /* forall<a> (capacity : ? int) -> hash-set<a> */ 

kk_std_data_hashset__hash_set kk_std_data_hashset_random_fs__mlift_hash_set_10229(kk_std_core_types__optional capacity, int64_t _y_x10097, kk_context_t* _ctx); /* forall<a> (capacity : ? int, int64) -> std/num/random/random hash-set<a> */ 

kk_std_data_hashset__hash_set kk_std_data_hashset_random_fs_hash_set(kk_std_core_types__optional capacity, kk_context_t* _ctx); /* forall<a> (capacity : ? int) -> std/num/random/random hash-set<a> */ 

kk_std_data_hashset__hash_set kk_std_data_hashset_hash_set_seeded(int64_t seed, kk_std_core_types__optional capacity, kk_context_t* _ctx); /* forall<a> (seed : int64, capacity : ? int) -> hash-set<a> */ 

kk_integer_t kk_std_data_hashset_length(kk_std_data_hashset__hash_set hs, kk_context_t* _ctx); /* forall<a> (hs : hash-set<a>) -> int */ 

kk_vector_t kk_std_data_hashset_helper_fs_resize(kk_vector_t v, kk_context_t* _ctx); /* forall<a> (v : vector<list<a>>) -> vector<list<a>> */ 

bool kk_std_data_hashset_contains(kk_std_data_hashset__hash_set hs, kk_box_t value, kk_function_t _implicit_fs_hash, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx); /* forall<a> (hs : hash-set<a>, value : a, ?hash : (a, int64) -> int, ?(==) : (a, a) -> bool) -> bool */ 

kk_std_data_hashset__hash_set kk_std_data_hashset_clear(kk_std_data_hashset__hash_set hs, kk_context_t* _ctx); /* forall<a> (hs : hash-set<a>) -> hash-set<a> */ 

kk_unit_t kk_std_data_hashset_foreach(kk_std_data_hashset__hash_set hs, kk_function_t f, kk_context_t* _ctx); /* forall<e,a> (hs : hash-set<a>, f : (a) -> e ()) -> e () */ 

kk_vector_t kk_std_data_hashset_helper_fs_rehash(kk_vector_t v, kk_std_core_types__list buckets, int64_t seed, kk_function_t _implicit_fs_hash, kk_context_t* _ctx); /* forall<a> (v : vector<list<a>>, buckets : list<a>, seed : int64, ?hash : (a, int64) -> int) -> vector<list<a>> */ 

kk_vector_t kk_std_data_hashset_rehash(kk_vector_t v, kk_vector_t buckets, int64_t seed, kk_function_t _implicit_fs_hash, kk_context_t* _ctx); /* forall<a> (v : vector<list<a>>, buckets : vector<list<a>>, seed : int64, ?hash : (a, int64) -> int) -> vector<list<a>> */ 

kk_std_data_hashset__hash_set kk_std_data_hashset_resize(kk_std_data_hashset__hash_set hs, kk_integer_t new_capacity, kk_function_t _implicit_fs_hash, kk_context_t* _ctx); /* forall<a> (hs : hash-set<a>, new-capacity : int, ?hash : (a, int64) -> int) -> hash-set<a> */ 
 
// Internal function that dictates when to resize the hash-set. This can be overridden with implicits.

static inline bool kk_std_data_hashset_when_resize(kk_integer_t table_size, kk_integer_t item_count, kk_context_t* _ctx) { /* (table-size : int, item-count : int) -> bool */ 
  bool _match_x1013;
  kk_integer_t _brw_x1014 = kk_integer_mul((kk_integer_from_small(2)),table_size,kk_context()); /*int*/;
  bool _brw_x1015 = kk_integer_lte_borrow(_brw_x1014,item_count,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x1014, _ctx);
  kk_integer_drop(item_count, _ctx);
  _match_x1013 = _brw_x1015; /*bool*/
  if (_match_x1013) {
    return true;
  }
  {
    return false;
  }
}
 
// Internal function that determines the new size of a hash-set when inserting. This can be overridden with implicits.

static inline kk_integer_t kk_std_data_hashset_resizer(kk_integer_t table_size, kk_integer_t item_count, kk_context_t* _ctx) { /* (table-size : int, item-count : int) -> int */ 
  kk_integer_drop(table_size, _ctx);
  return kk_integer_mul(item_count,(kk_integer_from_small(2)),kk_context());
}

kk_std_data_hashset__hash_set kk_std_data_hashset_insert(kk_std_data_hashset__hash_set hs, kk_box_t value, kk_function_t _implicit_fs_hash, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_when_resize, kk_function_t _implicit_fs_resizer, kk_context_t* _ctx); /* forall<a> (hs : hash-set<a>, value : a, ?hash : (a, int64) -> int, ?(==) : (a, a) -> bool, ?when-resize : (int, int) -> bool, ?resizer : (int, int) -> int) -> hash-set<a> */ 

kk_std_data_hashset__hash_set kk_std_data_hashset_from_list_helper(kk_std_data_hashset__hash_set hs, kk_std_core_types__list l, kk_function_t _implicit_fs_hash, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx); /* forall<a> (hs : hash-set<a>, l : list<a>, ?hash : (a, int64) -> int, ?(==) : (a, a) -> bool) -> hash-set<a> */ 

kk_std_data_hashset__hash_set kk_std_data_hashset_random_fs_list_fs__mlift_hash_set_10230(kk_std_core_types__list xs, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_std_data_hashset__hash_set _y_x10100, kk_context_t* _ctx); /* forall<a> (xs : list<a>, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int, hash-set<a>) -> std/num/random/random hash-set<a> */ 

kk_std_data_hashset__hash_set kk_std_data_hashset_random_fs_list_fs_hash_set(kk_std_core_types__list xs, kk_function_t _implicit_fs_hash, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx); /* forall<a> (xs : list<a>, ?hash : (a, int64) -> int, ?(==) : (a, a) -> bool) -> std/num/random/random hash-set<a> */ 

kk_std_data_hashset__hash_set kk_std_data_hashset_thread_fs_list_fs_hash_set(kk_std_core_types__list xs, kk_function_t _implicit_fs_hash, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx); /* forall<a> (xs : list<a>, ?hash : (a, int64) -> int, ?(==) : (a, a) -> bool) -> hash-set<a> */ 

kk_std_data_hashset__hash_set kk_std_data_hashset_list_fs_hash_set_seeded(kk_std_core_types__list xs, int64_t seed, kk_function_t _implicit_fs_hash, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx); /* forall<a> (xs : list<a>, seed : int64, ?hash : (a, int64) -> int, ?(==) : (a, a) -> bool) -> hash-set<a> */ 

kk_std_data_hashset__hash_set kk_std_data_hashset_remove(kk_std_data_hashset__hash_set hs, kk_box_t value, kk_function_t _implicit_fs_hash, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx); /* forall<a> (hs : hash-set<a>, value : a, ?hash : (a, int64) -> int, ?(==) : (a, a) -> bool) -> hash-set<a> */ 

kk_std_data_hashset__hash_set kk_std_data_hashset_effect_fs__mlift_map_10231(kk_std_data_hashset__hash_set hs, kk_vector_t new_data, kk_context_t* _ctx); /* forall<a,b,e> (hs : hash-set<a>, new-data : vector<list<b>>) -> e hash-set<b> */ 

kk_std_data_hashset__hash_set kk_std_data_hashset_effect_fs_map(kk_std_data_hashset__hash_set hs, kk_function_t f, kk_context_t* _ctx); /* forall<a,b,e> (hs : hash-set<a>, f : (a) -> e b) -> e hash-set<b> */ 

kk_std_data_hashset__hash_set kk_std_data_hashset_unique_fs_map(kk_std_data_hashset__hash_set hs, kk_function_t f, kk_context_t* _ctx); /* forall<a,b> (hs : hash-set<a>, f : (a) -> b) -> hash-set<b> */ 

kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10232(kk_std_data_hashset__hash_set _y_x10136, kk_context_t* _ctx); /* forall<h> (hash-set<int>) -> <local<h>,exn,std/test/test/test,console/console,div,exn,std/test/test/test-scope> int */ 

kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10233(kk_ref_t hs_3_0, kk_integer_t i_2, kk_std_data_hashset__hash_set _y_x10133, kk_context_t* _ctx); /* forall<h> (hs@3@0 : local-var<h,hash-set<int>>, i@2 : int, hash-set<int>) -> <local<h>,exn,std/test/test/test,console/console,div,exn,std/test/test/test-scope> () */ 

kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10234(kk_ref_t hs_3_0, kk_unit_t wild___8, kk_context_t* _ctx); /* forall<h> (hs@3@0 : local-var<h,hash-set<int>>, wild_@8 : ()) -> <local<h>,exn,std/test/test/test,console/console,div,exn,std/test/test/test-scope> int */ 

kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10235(kk_ref_t hs_3_0, kk_unit_t wild___7, kk_context_t* _ctx); /* forall<h> (hs@3@0 : local-var<h,hash-set<int>>, wild_@7 : ()) -> <local<h>,exn,std/test/test/test,console/console,div,exn,std/test/test/test-scope> int */ 

kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10236(kk_ref_t hs_3_0, kk_std_data_hashset__hash_set _y_x10131, kk_context_t* _ctx); /* forall<h> (hs@3@0 : local-var<h,hash-set<int>>, hash-set<int>) -> <local<h>,exn,std/test/test/test,console/console,div,exn,std/test/test/test-scope> int */ 

kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10237(kk_ref_t hs_3_0, kk_integer_t i_1, kk_std_data_hashset__hash_set _y_x10128, kk_context_t* _ctx); /* forall<h> (hs@3@0 : local-var<h,hash-set<int>>, i@1 : int, hash-set<int>) -> <local<h>,std/test/test/test,console/console,div,exn,std/test/test/test-scope> () */ 

kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10238(kk_ref_t hs_3_0, kk_unit_t wild___6, kk_context_t* _ctx); /* forall<h> (hs@3@0 : local-var<h,hash-set<int>>, wild_@6 : ()) -> <local<h>,std/test/test/test,console/console,div,exn,std/test/test/test-scope> () */ 

kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10239(kk_std_data_hashset__hash_set _y_x10122, kk_context_t* _ctx); /* forall<h> (hash-set<int>) -> <local<h>,exn,std/test/test/test,console/console,div,exn,std/test/test/test-scope> int */ 

kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10240(kk_ref_t hs_2, kk_unit_t wild___4, kk_context_t* _ctx); /* forall<h> (hs@2 : local-var<h,hash-set<int>>, wild_@4 : ()) -> <local<h>,exn,std/test/test/test,console/console,div,exn,std/test/test/test-scope> int */ 

kk_integer_t kk_std_data_hashset__mlift_test_hash_set_10241(kk_ref_t hs_2, kk_std_data_hashset__hash_set _y_x10120, kk_context_t* _ctx); /* forall<h> (hs@2 : local-var<h,hash-set<int>>, hash-set<int>) -> <local<h>,exn,std/test/test/test,console/console,div,exn,std/test/test/test-scope> int */ 

kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10242(kk_ref_t hs_2, kk_integer_t i_0, kk_std_data_hashset__hash_set _y_x10117, kk_context_t* _ctx); /* forall<h> (hs@2 : local-var<h,hash-set<int>>, i@0 : int, hash-set<int>) -> <local<h>,std/test/test/test,console/console,div,exn,std/test/test/test-scope> () */ 

kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10243(kk_ref_t hs_2, kk_unit_t wild___3, kk_context_t* _ctx); /* forall<h> (hs@2 : local-var<h,hash-set<int>>, wild_@3 : ()) -> <local<h>,std/test/test/test,console/console,div,exn,std/test/test/test-scope> () */ 

kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10244(kk_unit_t wild___5, kk_context_t* _ctx); /* (wild_@5 : ()) -> <std/test/test/test-scope,console/console,div,exn> () */ 

kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10245(kk_ref_t hs_1_0, kk_integer_t i, kk_std_data_hashset__hash_set _y_x10109, kk_context_t* _ctx); /* forall<h> (hs@1@0 : local-var<h,hash-set<int>>, i : int, hash-set<int>) -> <local<h>,exn,std/test/test/test,console/console,div,exn,std/test/test/test-scope> () */ 
 
// monadic lift

static inline bool kk_std_data_hashset__mlift_test_hash_set_10246(kk_unit_t wild___1, kk_context_t* _ctx) { /* forall<h> (wild_@1 : ()) -> <local<h>,exn,std/test/test/test,console/console,div,exn,std/test/test/test-scope> bool */ 
  return true;
}

kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10247(kk_unit_t wild___2, kk_context_t* _ctx); /* (wild_@2 : ()) -> <std/test/test/test-scope,console/console,div,exn> () */ 

kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10248(kk_unit_t wild___0, kk_context_t* _ctx); /* (wild_@0 : ()) -> <std/test/test/test-scope,console/console,div,exn> () */ 

kk_unit_t kk_std_data_hashset__mlift_test_hash_set_10249(kk_unit_t wild__, kk_context_t* _ctx); /* (wild_ : ()) -> <std/test/test/test-scope,console/console,div,exn> () */ 

kk_unit_t kk_std_data_hashset_test_hash_set(kk_context_t* _ctx); /* () -> <pure,console/console> () */ 

void kk_std_data_hashset__init(kk_context_t* _ctx);


void kk_std_data_hashset__done(kk_context_t* _ctx);

#endif // header
