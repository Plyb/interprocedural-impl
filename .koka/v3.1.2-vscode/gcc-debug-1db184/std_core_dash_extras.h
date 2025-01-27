#pragma once
#ifndef kk_std_core_dash_extras_H
#define kk_std_core_dash_extras_H
// Koka generated module: std/core-extras, koka version: 3.1.2, platform: 64-bit
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
#include "std_core.h"
#include "std_core_undiv.h"
kk_unit_t kk_vector_clear(kk_vector_t v, kk_ssize_t stop, kk_context_t* ctx);

kk_unit_t kk_vector_clear_at(kk_vector_t v, kk_ssize_t pos, kk_context_t* ctx);

kk_vector_t kk_vector_from_cint32array(int32_t* array, ssize_t len, kk_context_t* ctx); 
kk_vector_t kk_vector_from_cint64array(int64_t* array, ssize_t len, kk_context_t* ctx); 
kk_vector_t kk_vector_from_cintarray(kk_intx_t* carray, ssize_t len, kk_context_t* ctx);


// type declarations

// type std/core-extras/find
struct kk_std_core_dash_extras__find_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_std_core_dash_extras__find;
struct kk_std_core_dash_extras__Hnd_find {
  struct kk_std_core_dash_extras__find_s _base;
  kk_integer_t _cfc;
  kk_std_core_hnd__clause1 _brk_found;
};
static inline kk_std_core_dash_extras__find kk_std_core_dash_extras__base_Hnd_find(struct kk_std_core_dash_extras__Hnd_find* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_std_core_dash_extras__find kk_std_core_dash_extras__new_Hnd_find(kk_reuse_t _at, int32_t _cpath, kk_integer_t _cfc, kk_std_core_hnd__clause1 _brk_found, kk_context_t* _ctx) {
  struct kk_std_core_dash_extras__Hnd_find* _con = kk_block_alloc_at_as(struct kk_std_core_dash_extras__Hnd_find, _at, 2 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->_cfc = _cfc;
  _con->_brk_found = _brk_found;
  return kk_std_core_dash_extras__base_Hnd_find(_con, _ctx);
}
static inline struct kk_std_core_dash_extras__Hnd_find* kk_std_core_dash_extras__as_Hnd_find(kk_std_core_dash_extras__find x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_std_core_dash_extras__Hnd_find*, x, (kk_tag_t)(1), _ctx);
}
static inline bool kk_std_core_dash_extras__is_Hnd_find(kk_std_core_dash_extras__find x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_std_core_dash_extras__find kk_std_core_dash_extras__find_dup(kk_std_core_dash_extras__find _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_std_core_dash_extras__find_drop(kk_std_core_dash_extras__find _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_std_core_dash_extras__find_box(kk_std_core_dash_extras__find _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_std_core_dash_extras__find kk_std_core_dash_extras__find_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// value declarations
 
// Automatically generated. Retrieves the `@cfc` constructor field of the `:find` type.

static inline kk_integer_t kk_std_core_dash_extras_find_fs__cfc(kk_std_core_dash_extras__find find_0, kk_context_t* _ctx) { /* forall<a,e,b> (find : find<a,e,b>) -> int */ 
  {
    struct kk_std_core_dash_extras__Hnd_find* _con_x257 = kk_std_core_dash_extras__as_Hnd_find(find_0, _ctx);
    kk_integer_t _x = _con_x257->_cfc;
    return kk_integer_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@brk-found` constructor field of the `:find` type.

static inline kk_std_core_hnd__clause1 kk_std_core_dash_extras_find_fs__brk_found(kk_std_core_dash_extras__find find_0, kk_context_t* _ctx) { /* forall<a,e,b,c> (find : find<a,e,b>) -> hnd/clause1<a,c,find<a>,e,b> */ 
  {
    struct kk_std_core_dash_extras__Hnd_find* _con_x258 = kk_std_core_dash_extras__as_Hnd_find(find_0, _ctx);
    kk_std_core_hnd__clause1 _x = _con_x258->_brk_found;
    return kk_std_core_hnd__clause1_dup(_x, _ctx);
  }
}

bool kk_std_core_dash_extras_eql_fs__lp__at_mlift_x_10078_eq__eq__rp_(kk_std_core_types__list l1_sq_, kk_std_core_types__list l2_sq_, kk_function_t _implicit_fs__lp__eq__eq__rp_, bool _y_x10035, kk_context_t* _ctx); /* forall<a,e> (l1' : list<a>, l2' : list<a>, ?(==) : (a, a) -> e bool, bool) -> e bool */ 

bool kk_std_core_dash_extras_eql_fs__lp__eq__eq__rp_(kk_std_core_types__list l1, kk_std_core_types__list l2, kk_function_t _implicit_fs__lp__at_x_0_eq__eq__rp_, kk_context_t* _ctx); /* forall<a,e> (l1 : list<a>, l2 : list<a>, ?(==) : (a, a) -> e bool) -> e bool */ 

bool kk_std_core_dash_extras_maybe_fs__lp__eq__eq__rp_(kk_std_core_types__maybe m1, kk_std_core_types__maybe m2, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx); /* forall<a,e> (m1 : maybe<a>, m2 : maybe<a>, ?(==) : (a, a) -> e bool) -> e bool */ 
 
// String ordering

static inline kk_std_core_types__order2 kk_std_core_dash_extras_str_fs_order2(kk_string_t x, kk_string_t y, kk_context_t* _ctx) { /* (x : string, y : string) -> order2<string> */ 
  bool _match_x243;
  kk_std_core_types__order _x_x265 = kk_std_core_string_cmp(x, y, _ctx); /*order*/
  _match_x243 = kk_std_core_order__lp__eq__eq__rp_(_x_x265, kk_std_core_types__new_Lt(_ctx), _ctx); /*bool*/
  if (_match_x243) {
    kk_box_t _x_x266;
    kk_string_t _x_x267 = kk_string_dup(x, _ctx); /*string*/
    _x_x266 = kk_string_box(_x_x267); /*1031*/
    kk_box_t _x_x268;
    kk_string_t _x_x269 = kk_string_dup(y, _ctx); /*string*/
    _x_x268 = kk_string_box(_x_x269); /*1031*/
    return kk_std_core_types__new_Lt2(_x_x266, _x_x268, _ctx);
  }
  {
    bool _match_x244;
    kk_string_t _x_x270 = kk_string_dup(x, _ctx); /*string*/
    kk_string_t _x_x271 = kk_string_dup(y, _ctx); /*string*/
    _match_x244 = kk_string_is_eq(_x_x270,_x_x271,kk_context()); /*bool*/
    if (_match_x244) {
      kk_box_t _x_x272;
      kk_string_t _x_x273 = kk_string_dup(x, _ctx); /*string*/
      _x_x272 = kk_string_box(_x_x273); /*1030*/
      return kk_std_core_types__new_Eq2(_x_x272, _ctx);
    }
    {
      kk_box_t _x_x274;
      kk_string_t _x_x275 = kk_string_dup(y, _ctx); /*string*/
      _x_x274 = kk_string_box(_x_x275); /*1031*/
      kk_box_t _x_x276;
      kk_string_t _x_x277 = kk_string_dup(x, _ctx); /*string*/
      _x_x276 = kk_string_box(_x_x277); /*1031*/
      return kk_std_core_types__new_Gt2(_x_x274, _x_x276, _ctx);
    }
  }
}

kk_std_core_types__order2 kk_std_core_dash_extras_eff_fs__mlift_order2_10079(kk_std_core_types__order2 _y_x10041, kk_context_t* _ctx); /* forall<a,e> (order2<a>) -> e order2<maybe<a>> */ 

kk_std_core_types__order2 kk_std_core_dash_extras_eff_fs_order2(kk_std_core_types__maybe mb1, kk_std_core_types__maybe mb2, kk_function_t _implicit_fs_order2, kk_context_t* _ctx); /* forall<a,e> (mb1 : maybe<a>, mb2 : maybe<a>, ?order2 : (a, a) -> e order2<a>) -> e order2<maybe<a>> */ 

kk_std_core_types__order2 kk_std_core_dash_extras_list_fs__mlift_order2_10080(kk_box_t h1_1_sq_, kk_std_core_types__order2 _y_x10045, kk_context_t* _ctx); /* forall<a,e> (h1@1' : a, order2<list<a>>) -> e order2<list<a>> */ 

kk_std_core_types__order2 kk_std_core_dash_extras_list_fs__mlift_order2_10081(kk_std_core_types__list t1, kk_std_core_types__list t2, kk_function_t _implicit_fs_order2, kk_std_core_types__order2 _y_x10044, kk_context_t* _ctx); /* forall<a,e> (t1 : list<a>, t2 : list<a>, ?order2 : (a, a) -> e order2<a>, order2<a>) -> e order2<list<a>> */ 

kk_std_core_types__order2 kk_std_core_dash_extras_list_fs_order2(kk_std_core_types__list l1, kk_std_core_types__list l2, kk_function_t _implicit_fs_order2_0, kk_context_t* _ctx); /* forall<a,e> (l1 : list<a>, l2 : list<a>, ?order2 : (a, a) -> e order2<a>) -> e order2<list<a>> */ 

kk_std_core_types__order2 kk_std_core_dash_extras_tuple2_fs__mlift_order2_10082(kk_box_t a1_1_sq_, kk_std_core_types__order2 _y_x10049, kk_context_t* _ctx); /* forall<a,b,e> (a1@1' : a, order2<b>) -> e order2<(a, b)> */ 

kk_std_core_types__order2 kk_std_core_dash_extras_tuple2_fs__mlift_order2_10083(kk_box_t b1, kk_box_t b2, kk_function_t _implicit_fs_b_fs_order2, kk_std_core_types__order2 _y_x10048, kk_context_t* _ctx); /* forall<a,b,e> (b1 : b, b2 : b, ?b/order2 : (b, b) -> e order2<b>, order2<a>) -> e order2<(a, b)> */ 

kk_std_core_types__order2 kk_std_core_dash_extras_tuple2_fs_order2(kk_std_core_types__tuple2 t1, kk_std_core_types__tuple2 t2, kk_function_t _implicit_fs_a_fs_order2, kk_function_t _implicit_fs_b_fs_order2, kk_context_t* _ctx); /* forall<a,b,e> (t1 : (a, b), t2 : (a, b), ?a/order2 : (a, a) -> e order2<a>, ?b/order2 : (b, b) -> e order2<b>) -> e order2<(a, b)> */ 

bool kk_std_core_dash_extras_list_fs_and(kk_std_core_types__list l, kk_context_t* _ctx); /* (l : list<bool>) -> bool */ 
 
// String and char utilities

static inline bool kk_std_core_dash_extras_string_fs_is_prefix_of(kk_string_t s1, kk_string_t s2, kk_context_t* _ctx) { /* (s1 : string, s2 : string) -> bool */ 
  kk_std_core_types__maybe mb_10002 = kk_std_core_sslice_starts_with(s2, s1, _ctx); /*maybe<sslice/sslice>*/;
  if (kk_std_core_types__is_Just(mb_10002, _ctx)) {
    kk_box_t _box_x164 = mb_10002._cons.Just.value;
    kk_std_core_types__maybe_drop(mb_10002, _ctx);
    return true;
  }
  {
    return false;
  }
}

bool kk_std_core_dash_extras_list_fs__mlift_is_prefix_of_10084(kk_std_core_types__list t1, kk_std_core_types__list t2, kk_function_t _implicit_fs__lp__eq__eq__rp_, bool _y_x10053, kk_context_t* _ctx); /* forall<a,e> (t1 : list<a>, t2 : list<a>, ?(==) : (a, a) -> e bool, bool) -> e bool */ 

bool kk_std_core_dash_extras_list_fs_is_prefix_of(kk_std_core_types__list l1, kk_std_core_types__list l2, kk_function_t _implicit_fs__lp__at_x_0_eq__eq__rp_, kk_context_t* _ctx); /* forall<a,e> (l1 : list<a>, l2 : list<a>, ?(==) : (a, a) -> e bool) -> e bool */ 

kk_std_core_types__maybe kk_std_core_dash_extras_list_fs__mlift_lift_maximum_by_2803_10085(kk_std_core_types__maybe acc, kk_function_t cmp, kk_box_t h, kk_std_core_types__list t, kk_std_core_types__order _y_x10058, kk_context_t* _ctx); /* forall<a,e> (acc : maybe<a>, cmp : (a, a) -> e order, h : a, t : list<a>, order) -> e maybe<a> */ 

kk_std_core_types__maybe kk_std_core_dash_extras_list_fs__lift_maximum_by_2803(kk_std_core_types__list l, kk_std_core_types__maybe acc_0, kk_function_t cmp_0, kk_context_t* _ctx); /* forall<a,e> (l : list<a>, acc : maybe<a>, cmp : (a, a) -> e order) -> e maybe<a> */ 

static inline kk_std_core_types__maybe kk_std_core_dash_extras_list_fs_maximum_by(kk_std_core_types__list l0, kk_function_t cmp0, kk_context_t* _ctx) { /* forall<a,e> (l0 : list<a>, cmp0 : (a, a) -> e order) -> e maybe<a> */ 
  return kk_std_core_dash_extras_list_fs__lift_maximum_by_2803(l0, kk_std_core_types__new_Nothing(_ctx), cmp0, _ctx);
}

kk_char_t kk_std_core_dash_extras_to_upper(kk_char_t c, kk_context_t* _ctx); /* (c : char) -> char */ 

kk_char_t kk_std_core_dash_extras_to_lower(kk_char_t c, kk_context_t* _ctx); /* (c : char) -> char */ 

kk_std_core_types__list kk_std_core_dash_extras__lift_split_by_2804(kk_function_t pred, kk_std_core_sslice__sslice sl, kk_integer_t numchars, kk_std_core_types__cctx acc, kk_context_t* _ctx); /* (pred : (char) -> bool, sl : sslice/sslice, numchars : int, acc : ctx<list<string>>) -> list<string> */ 

static inline kk_std_core_types__list kk_std_core_dash_extras_split_by(kk_string_t s, kk_function_t pred, kk_context_t* _ctx) { /* (s : string, pred : (char) -> bool) -> list<string> */ 
  kk_std_core_sslice__sslice sl;
  kk_string_t _x_x445 = kk_string_dup(s, _ctx); /*string*/
  kk_integer_t _x_x446 = kk_string_len_int(s,kk_context()); /*int*/
  sl = kk_std_core_sslice__new_Sslice(_x_x445, kk_integer_from_small(0), _x_x446, _ctx); /*sslice/sslice*/
  kk_std_core_types__cctx acc = kk_cctx_empty(kk_context()); /*ctx<list<string>>*/;
  return kk_std_core_dash_extras__lift_split_by_2804(pred, sl, kk_integer_from_small(0), acc, _ctx);
}

extern kk_std_core_hnd__htag kk_std_core_dash_extras__tag_find;

kk_box_t kk_std_core_dash_extras__handle_find(kk_std_core_dash_extras__find hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,b,e,c> (hnd : find<a,e,c>, ret : (res : b) -> e c, action : () -> <find<a>|e> b) -> e c */ 
 
// select `found` operation out of effect `:find`

static inline kk_std_core_hnd__clause1 kk_std_core_dash_extras__select_found(kk_std_core_dash_extras__find hnd, kk_context_t* _ctx) { /* forall<a,b,e,c> (hnd : find<a,e,c>) -> hnd/clause1<a,b,find<a>,e,c> */ 
  {
    struct kk_std_core_dash_extras__Hnd_find* _con_x450 = kk_std_core_dash_extras__as_Hnd_find(hnd, _ctx);
    kk_std_core_hnd__clause1 _brk_found = _con_x450->_brk_found;
    return kk_std_core_hnd__clause1_dup(_brk_found, _ctx);
  }
}
 
// Call the `final ctl found` operation of the effect `:find`

static inline kk_box_t kk_std_core_dash_extras_found(kk_box_t a, kk_context_t* _ctx) { /* forall<a,b> (a : a) -> (find<a>) b */ 
  kk_std_core_hnd__ev ev_10116 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/core-extras/find<1979>>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x451 = kk_std_core_hnd__as_Ev(ev_10116, _ctx);
    kk_box_t _box_x206 = _con_x451->hnd;
    int32_t m = _con_x451->marker;
    kk_std_core_dash_extras__find h = kk_std_core_dash_extras__find_unbox(_box_x206, KK_BORROWED, _ctx);
    kk_std_core_dash_extras__find_dup(h, _ctx);
    {
      struct kk_std_core_dash_extras__Hnd_find* _con_x452 = kk_std_core_dash_extras__as_Hnd_find(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x452->_cfc;
      kk_std_core_hnd__clause1 _brk_found = _con_x452->_brk_found;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_brk_found, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t f = _brk_found.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), f, (f, m, ev_10116, a, _ctx), _ctx);
      }
    }
  }
}

kk_box_t kk_std_core_dash_extras_find(kk_function_t f, kk_context_t* _ctx); /* forall<a,e> (f : () -> <find<a>|e> a) -> e a */ 
 
// Maybe utilities

static inline kk_std_core_types__maybe kk_std_core_dash_extras_flatten(kk_std_core_types__maybe item, kk_context_t* _ctx) { /* forall<a> (item : maybe<maybe<a>>) -> maybe<a> */ 
  if (kk_std_core_types__is_Just(item, _ctx)) {
    kk_box_t _box_x207 = item._cons.Just.value;
    kk_std_core_types__maybe x = kk_std_core_types__maybe_unbox(_box_x207, KK_BORROWED, _ctx);
    kk_std_core_types__maybe_dup(x, _ctx);
    kk_std_core_types__maybe_drop(item, _ctx);
    return x;
  }
  {
    return kk_std_core_types__new_Nothing(_ctx);
  }
}

kk_box_t kk_std_core_dash_extras_expect(kk_std_core_types__maybe m, kk_std_core_types__optional msg, kk_string_t _implicit_fs_kk_file_line, kk_context_t* _ctx); /* forall<a> (m : maybe<a>, msg : ? string, ?kk-file-line : string) -> exn a */ 

static inline kk_box_t kk_std_core_dash_extras_expect_unjust(kk_std_core_types__maybe m, kk_string_t msg, kk_context_t* _ctx) { /* forall<a> (m : maybe<a>, msg : string) -> exn a */ 
  if (kk_std_core_types__is_Just(m, _ctx)) {
    kk_box_t a = m._cons.Just.value;
    kk_string_drop(msg, _ctx);
    return a;
  }
  {
    kk_string_t _x_x464;
    kk_string_t _x_x465;
    kk_define_string_literal(, _s_x466, 15, "expect-unjust: ", _ctx)
    _x_x465 = kk_string_dup(_s_x466, _ctx); /*string*/
    _x_x464 = kk_std_core_types__lp__plus__plus__rp_(_x_x465, msg, _ctx); /*string*/
    return kk_std_core_exn_throw(_x_x464, kk_std_core_types__new_None(_ctx), _ctx);
  }
}

kk_unit_t kk_std_core_dash_extras__lift_vector_init_list_2805(kk_vector_t v, kk_std_core_types__list xs_sq_, kk_context_t* _ctx); /* forall<a> (v : vector<a>, xs' : list<(int, a)>) -> () */ 
 
// Vector utilities

static inline kk_vector_t kk_std_core_dash_extras_vector_init_list(kk_integer_t n, kk_std_core_types__list xs, kk_context_t* _ctx) { /* forall<a> (n : int, xs : list<(int, a)>) -> vector<a> */ 
  kk_vector_t v;
  kk_ssize_t _x_x469;
  kk_integer_t _x_x470 = kk_integer_dup(n, _ctx); /*int*/
  _x_x469 = kk_std_core_int_ssize__t(_x_x470, _ctx); /*ssize_t*/
  v = kk_vector_alloc(_x_x469,kk_box_null(),kk_context()); /*vector<2251>*/
  kk_unit_t ___0 = kk_Unit;
  kk_vector_t _x_x471 = kk_vector_dup(v, _ctx); /*vector<2251>*/
  kk_std_core_dash_extras__lift_vector_init_list_2805(_x_x471, xs, _ctx);
  return v;
}

static inline bool kk_std_core_dash_extras_is_space(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> bool */ 
  bool _match_x228 = (c == (' ')); /*bool*/;
  if (_match_x228) {
    return true;
  }
  {
    return (c == 0x0009);
  }
}

kk_unit_t kk_std_core_dash_extras_unsafe_vector_clear(kk_vector_t v, kk_ssize_t stop, kk_context_t* _ctx); /* forall<a> (v : vector<a>, stop : ssize_t) -> () */ 

kk_unit_t kk_std_core_dash_extras_unsafe_vector_clear_at(kk_vector_t v, kk_ssize_t position, kk_context_t* _ctx); /* forall<a> (v : vector<a>, position : ssize_t) -> () */ 

kk_vector_t kk_std_core_dash_extras_unsafe_set(kk_vector_t v, kk_integer_t index, kk_box_t value, kk_context_t* _ctx); /* forall<a> (v : vector<a>, index : int, value : a) -> vector<a> */ 

kk_vector_t kk_std_core_dash_extras_a_fs_unsafe_swap(kk_vector_t v, kk_integer_t idx1, kk_integer_t idx2, kk_context_t* _ctx); /* forall<a> (v : vector<a>, idx1 : int, idx2 : int) -> vector<a> */ 

kk_ssize_t kk_std_core_dash_extras_ssize__t_fs_incr(kk_ssize_t i, kk_context_t* _ctx); /* (i : ssize_t) -> ssize_t */ 

kk_unit_t kk_std_core_dash_extras__mlift_lift_forz_2806_10086(kk_function_t action, kk_ssize_t i, kk_ssize_t n, kk_unit_t wild__, kk_context_t* _ctx); /* forall<e> (action : (ssize_t) -> e (), i : ssize_t, n : ssize_t, wild_ : ()) -> e () */ 

kk_unit_t kk_std_core_dash_extras__lift_forz_2806(kk_function_t action_0, kk_ssize_t n_0, kk_ssize_t i_0, kk_context_t* _ctx); /* forall<e> (action : (ssize_t) -> e (), n : ssize_t, i : ssize_t) -> e () */ 
 
// Executes `action` `n` times for each integer between [`0`,`n`)  (excluding `n` ).
// If `n <= 0`  the function returns without any call to `action` .

static inline kk_unit_t kk_std_core_dash_extras_forz(kk_ssize_t n, kk_function_t action, kk_context_t* _ctx) { /* forall<e> (n : ssize_t, action : (ssize_t) -> e ()) -> e () */ 
  kk_ssize_t i = (KK_IZ(0)); /*ssize_t*/;
  kk_std_core_dash_extras__lift_forz_2806(action, n, i, _ctx); return kk_Unit;
}

kk_unit_t kk_std_core_dash_extras_foreach_indexedz(kk_vector_t v, kk_function_t f, kk_context_t* _ctx); /* forall<a,e> (v : vector<a>, f : (ssize_t, a) -> e ()) -> e () */ 

kk_vector_t kk_std_core_dash_extras_unique_fs_map(kk_vector_t v, kk_function_t f, kk_context_t* _ctx); /* forall<a,b> (v : vector<a>, f : (a) -> b) -> vector<b> */ 

kk_unit_t kk_std_core_dash_extras_unit_fs_unsafe_swap(kk_vector_t v, kk_integer_t idx1, kk_integer_t idx2, kk_context_t* _ctx); /* forall<a> (v : vector<a>, idx1 : int, idx2 : int) -> () */ 

void kk_std_core_dash_extras__init(kk_context_t* _ctx);


void kk_std_core_dash_extras__done(kk_context_t* _ctx);

#endif // header
