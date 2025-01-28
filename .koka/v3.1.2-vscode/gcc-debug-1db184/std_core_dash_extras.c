// Koka generated module: std/core-extras, koka version: 3.1.2, platform: 64-bit
#include "std_core_dash_extras.h"
kk_unit_t kk_vector_clear(kk_vector_t v, kk_ssize_t stop, kk_context_t* ctx) {
    kk_ssize_t length;
    kk_box_t* vec = kk_vector_buf_borrow(v, &length, ctx);
    const kk_ssize_t true_stop = (stop > length ? length : stop);
    for (kk_ssize_t i = 0; i < true_stop; i++) {
        kk_box_drop(vec[i], ctx);
        vec[i] = kk_box_null();
    }
    return kk_Unit;
}

kk_unit_t kk_vector_clear_at(kk_vector_t v, kk_ssize_t pos, kk_context_t* ctx) {
    kk_ssize_t length;
    kk_box_t* vec = kk_vector_buf_borrow(v, &length, ctx);
    kk_box_drop(vec[pos], ctx);
    vec[pos] = kk_box_null();
    return kk_Unit;
}

kk_vector_t kk_vector_from_cint32array(int32_t* carray, ssize_t len, kk_context_t* ctx) {
    kk_box_t* array;
    kk_vector_t vec = kk_vector_alloc_uninit(len, &array, ctx);
    for (ssize_t i = 0; i < len; i++){
        array[i] = kk_integer_box(kk_integer_from_int32(carray[i], ctx), ctx);
    }
    return vec;
}

kk_vector_t kk_vector_from_cint64array(int64_t* carray, ssize_t len, kk_context_t* ctx) {
    kk_box_t* array;
    kk_vector_t vec = kk_vector_alloc_uninit(len, &array, ctx);
    for (ssize_t i = 0; i < len; i++){
        array[i] = kk_integer_box(kk_integer_from_int64(carray[i], ctx), ctx);
    }
    return vec;
}

kk_vector_t kk_vector_from_cintarray(kk_intx_t* carray, ssize_t len, kk_context_t* ctx) {
    kk_box_t* array;
    kk_vector_t vec = kk_vector_alloc_uninit(len, &array, ctx);
    for (ssize_t i = 0; i < len; i++){
        array[i] = kk_integer_box(kk_integer_from_int(carray[i], ctx), ctx);
    }
    return vec;
}
 
// monadic lift

bool kk_std_core_dash_extras_eql_fs__lp__at_mlift_x_10078_eq__eq__rp_(kk_std_core_types__list l1_sq_, kk_std_core_types__list l2_sq_, kk_function_t _implicit_fs__lp__eq__eq__rp_, bool _y_x10035, kk_context_t* _ctx) { /* forall<a,e> (l1' : list<a>, l2' : list<a>, ?(==) : (a, a) -> e bool, bool) -> e bool */ 
  if (_y_x10035) {
    return kk_std_core_dash_extras_eql_fs__lp__eq__eq__rp_(l1_sq_, l2_sq_, _implicit_fs__lp__eq__eq__rp_, _ctx);
  }
  {
    kk_function_drop(_implicit_fs__lp__eq__eq__rp_, _ctx);
    kk_std_core_types__list_drop(l2_sq_, _ctx);
    kk_std_core_types__list_drop(l1_sq_, _ctx);
    return false;
  }
}
 
// List Utilities


// lift anonymous function
struct kk_std_core_dash_extras_eql_fs__lp__at_x_fun263__t_eq__eq__rp_ {
  struct kk_function_s _base;
  kk_std_core_types__list l1_0_sq_;
  kk_std_core_types__list l2_0_sq_;
  kk_function_t _implicit_fs__lp__at_x_0_eq__eq__rp_;
};
static kk_box_t kk_std_core_dash_extras_eql_fs__lp__at_x_fun263_eq__eq__rp_(kk_function_t _fself, kk_box_t _b_x1, kk_context_t* _ctx);
static kk_function_t kk_std_core_dash_extras_eql_fs__lp__at_new_x_fun263_eq__eq__rp_(kk_std_core_types__list l1_0_sq_, kk_std_core_types__list l2_0_sq_, kk_function_t _implicit_fs__lp__at_x_0_eq__eq__rp_, kk_context_t* _ctx) {
  struct kk_std_core_dash_extras_eql_fs__lp__at_x_fun263__t_eq__eq__rp_* _self = kk_function_alloc_as(struct kk_std_core_dash_extras_eql_fs__lp__at_x_fun263__t_eq__eq__rp_, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_dash_extras_eql_fs__lp__at_x_fun263_eq__eq__rp_, kk_context());
  _self->l1_0_sq_ = l1_0_sq_;
  _self->l2_0_sq_ = l2_0_sq_;
  _self->_implicit_fs__lp__at_x_0_eq__eq__rp_ = _implicit_fs__lp__at_x_0_eq__eq__rp_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_dash_extras_eql_fs__lp__at_x_fun263_eq__eq__rp_(kk_function_t _fself, kk_box_t _b_x1, kk_context_t* _ctx) {
  struct kk_std_core_dash_extras_eql_fs__lp__at_x_fun263__t_eq__eq__rp_* _self = kk_function_as(struct kk_std_core_dash_extras_eql_fs__lp__at_x_fun263__t_eq__eq__rp_*, _fself, _ctx);
  kk_std_core_types__list l1_0_sq_ = _self->l1_0_sq_; /* list<501> */
  kk_std_core_types__list l2_0_sq_ = _self->l2_0_sq_; /* list<501> */
  kk_function_t _implicit_fs__lp__at_x_0_eq__eq__rp_ = _self->_implicit_fs__lp__at_x_0_eq__eq__rp_; /* (501, 501) -> 502 bool */
  kk_drop_match(_self, {kk_std_core_types__list_dup(l1_0_sq_, _ctx);kk_std_core_types__list_dup(l2_0_sq_, _ctx);kk_function_dup(_implicit_fs__lp__at_x_0_eq__eq__rp_, _ctx);}, {}, _ctx)
  bool _y_x10035_0_3 = kk_bool_unbox(_b_x1); /*bool*/;
  bool _x_x264 = kk_std_core_dash_extras_eql_fs__lp__at_mlift_x_10078_eq__eq__rp_(l1_0_sq_, l2_0_sq_, _implicit_fs__lp__at_x_0_eq__eq__rp_, _y_x10035_0_3, _ctx); /*bool*/
  return kk_bool_box(_x_x264);
}

bool kk_std_core_dash_extras_eql_fs__lp__eq__eq__rp_(kk_std_core_types__list l1, kk_std_core_types__list l2, kk_function_t _implicit_fs__lp__at_x_0_eq__eq__rp_, kk_context_t* _ctx) { /* forall<a,e> (l1 : list<a>, l2 : list<a>, ?(==) : (a, a) -> e bool) -> e bool */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Nil(l1, _ctx) && kk_std_core_types__is_Nil(l2, _ctx)) {
    kk_function_drop(_implicit_fs__lp__at_x_0_eq__eq__rp_, _ctx);
    return true;
  }
  if (kk_std_core_types__is_Cons(l1, _ctx) && kk_std_core_types__is_Cons(l2, _ctx)) {
    struct kk_std_core_types_Cons* _con_x259 = kk_std_core_types__as_Cons(l1, _ctx);
    struct kk_std_core_types_Cons* _con_x260 = kk_std_core_types__as_Cons(l2, _ctx);
    kk_box_t s1 = _con_x259->head;
    kk_std_core_types__list l1_0_sq_ = _con_x259->tail;
    kk_box_t s2 = _con_x260->head;
    kk_std_core_types__list l2_0_sq_ = _con_x260->tail;
    if kk_likely(kk_datatype_ptr_is_unique(l2, _ctx)) {
      kk_datatype_ptr_free(l2, _ctx);
    }
    else {
      kk_std_core_types__list_dup(l2_0_sq_, _ctx);
      kk_box_dup(s2, _ctx);
      kk_datatype_ptr_decref(l2, _ctx);
    }
    if kk_likely(kk_datatype_ptr_is_unique(l1, _ctx)) {
      kk_datatype_ptr_free(l1, _ctx);
    }
    else {
      kk_std_core_types__list_dup(l1_0_sq_, _ctx);
      kk_box_dup(s1, _ctx);
      kk_datatype_ptr_decref(l1, _ctx);
    }
    bool x_10087;
    kk_function_t _x_x261 = kk_function_dup(_implicit_fs__lp__at_x_0_eq__eq__rp_, _ctx); /*(501, 501) -> 502 bool*/
    x_10087 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x261, (_x_x261, s1, s2, _ctx), _ctx); /*bool*/
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x262 = kk_std_core_hnd_yield_extend(kk_std_core_dash_extras_eql_fs__lp__at_new_x_fun263_eq__eq__rp_(l1_0_sq_, l2_0_sq_, _implicit_fs__lp__at_x_0_eq__eq__rp_, _ctx), _ctx); /*2978*/
      return kk_bool_unbox(_x_x262);
    }
    if (x_10087) { // tailcall
                   l1 = l1_0_sq_;
                   l2 = l2_0_sq_;
                   goto kk__tailcall;
    }
    {
      kk_function_drop(_implicit_fs__lp__at_x_0_eq__eq__rp_, _ctx);
      kk_std_core_types__list_drop(l2_0_sq_, _ctx);
      kk_std_core_types__list_drop(l1_0_sq_, _ctx);
      return false;
    }
  }
  {
    kk_function_drop(_implicit_fs__lp__at_x_0_eq__eq__rp_, _ctx);
    kk_std_core_types__list_drop(l2, _ctx);
    kk_std_core_types__list_drop(l1, _ctx);
    return false;
  }
}

bool kk_std_core_dash_extras_maybe_fs__lp__eq__eq__rp_(kk_std_core_types__maybe m1, kk_std_core_types__maybe m2, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) { /* forall<a,e> (m1 : maybe<a>, m2 : maybe<a>, ?(==) : (a, a) -> e bool) -> e bool */ 
  if (kk_std_core_types__is_Just(m1, _ctx) && kk_std_core_types__is_Just(m2, _ctx)) {
    kk_box_t m1_sq_ = m1._cons.Just.value;
    kk_box_t m2_sq_ = m2._cons.Just.value;
    return kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs__lp__eq__eq__rp_, (_implicit_fs__lp__eq__eq__rp_, m1_sq_, m2_sq_, _ctx), _ctx);
  }
  if (kk_std_core_types__is_Nothing(m1, _ctx) && kk_std_core_types__is_Nothing(m2, _ctx)) {
    kk_function_drop(_implicit_fs__lp__eq__eq__rp_, _ctx);
    return true;
  }
  {
    kk_function_drop(_implicit_fs__lp__eq__eq__rp_, _ctx);
    kk_std_core_types__maybe_drop(m2, _ctx);
    kk_std_core_types__maybe_drop(m1, _ctx);
    return false;
  }
}
 
// monadic lift

kk_std_core_types__order2 kk_std_core_dash_extras_eff_fs__mlift_order2_10079(kk_std_core_types__order2 _y_x10041, kk_context_t* _ctx) { /* forall<a,e> (order2<a>) -> e order2<maybe<a>> */ 
  if (kk_std_core_types__is_Eq2(_y_x10041, _ctx)) {
    kk_box_t z = _y_x10041._cons.Eq2.eq;
    kk_box_t _x_x278;
    kk_std_core_types__maybe _x_x279 = kk_std_core_types__new_Just(z, _ctx); /*maybe<91>*/
    _x_x278 = kk_std_core_types__maybe_box(_x_x279, _ctx); /*102*/
    return kk_std_core_types__new_Eq2(_x_x278, _ctx);
  }
  if (kk_std_core_types__is_Lt2(_y_x10041, _ctx)) {
    kk_box_t l = _y_x10041._cons.Lt2.lt;
    kk_box_t g = _y_x10041._cons.Lt2.gt;
    kk_box_t _x_x280;
    kk_std_core_types__maybe _x_x281 = kk_std_core_types__new_Just(l, _ctx); /*maybe<91>*/
    _x_x280 = kk_std_core_types__maybe_box(_x_x281, _ctx); /*102*/
    kk_box_t _x_x282;
    kk_std_core_types__maybe _x_x283 = kk_std_core_types__new_Just(g, _ctx); /*maybe<91>*/
    _x_x282 = kk_std_core_types__maybe_box(_x_x283, _ctx); /*102*/
    return kk_std_core_types__new_Lt2(_x_x280, _x_x282, _ctx);
  }
  {
    kk_box_t l_0 = _y_x10041._cons.Gt2.lt;
    kk_box_t g_0 = _y_x10041._cons.Gt2.gt;
    kk_box_t _x_x284;
    kk_std_core_types__maybe _x_x285 = kk_std_core_types__new_Just(l_0, _ctx); /*maybe<91>*/
    _x_x284 = kk_std_core_types__maybe_box(_x_x285, _ctx); /*102*/
    kk_box_t _x_x286;
    kk_std_core_types__maybe _x_x287 = kk_std_core_types__new_Just(g_0, _ctx); /*maybe<91>*/
    _x_x286 = kk_std_core_types__maybe_box(_x_x287, _ctx); /*102*/
    return kk_std_core_types__new_Gt2(_x_x284, _x_x286, _ctx);
  }
}
 
// Order two `:maybe` values in ascending order


// lift anonymous function
struct kk_std_core_dash_extras_eff_fs_order2_fun290__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_core_dash_extras_eff_fs_order2_fun290(kk_function_t _fself, kk_box_t _b_x25, kk_context_t* _ctx);
static kk_function_t kk_std_core_dash_extras_eff_fs_new_order2_fun290(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_core_dash_extras_eff_fs_order2_fun290, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_core_dash_extras_eff_fs_order2_fun290(kk_function_t _fself, kk_box_t _b_x25, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__order2 _y_x10041_45 = kk_std_core_types__order2_unbox(_b_x25, KK_OWNED, _ctx); /*order2<815>*/;
  kk_std_core_types__order2 _x_x291 = kk_std_core_dash_extras_eff_fs__mlift_order2_10079(_y_x10041_45, _ctx); /*order2<maybe<815>>*/
  return kk_std_core_types__order2_box(_x_x291, _ctx);
}

kk_std_core_types__order2 kk_std_core_dash_extras_eff_fs_order2(kk_std_core_types__maybe mb1, kk_std_core_types__maybe mb2, kk_function_t _implicit_fs_order2, kk_context_t* _ctx) { /* forall<a,e> (mb1 : maybe<a>, mb2 : maybe<a>, ?order2 : (a, a) -> e order2<a>) -> e order2<maybe<a>> */ 
  if (kk_std_core_types__is_Just(mb1, _ctx)) {
    kk_box_t x = mb1._cons.Just.value;
    if (kk_std_core_types__is_Just(mb2, _ctx)) {
      kk_box_t y = mb2._cons.Just.value;
      kk_std_core_types__order2 x_0_10090;
      kk_function_t _x_x288 = kk_function_dup(_implicit_fs_order2, _ctx); /*(815, 815) -> 816 order2<815>*/
      x_0_10090 = kk_function_call(kk_std_core_types__order2, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x288, (_x_x288, x, y, _ctx), _ctx); /*order2<815>*/
      if (kk_yielding(kk_context())) {
        kk_std_core_types__order2_drop(x_0_10090, _ctx);
        kk_box_t _x_x289 = kk_std_core_hnd_yield_extend(kk_std_core_dash_extras_eff_fs_new_order2_fun290(_ctx), _ctx); /*2978*/
        return kk_std_core_types__order2_unbox(_x_x289, KK_OWNED, _ctx);
      }
      if (kk_std_core_types__is_Eq2(x_0_10090, _ctx)) {
        kk_box_t z = x_0_10090._cons.Eq2.eq;
        kk_box_t _x_x292;
        kk_std_core_types__maybe _x_x293 = kk_std_core_types__new_Just(z, _ctx); /*maybe<91>*/
        _x_x292 = kk_std_core_types__maybe_box(_x_x293, _ctx); /*102*/
        return kk_std_core_types__new_Eq2(_x_x292, _ctx);
      }
      if (kk_std_core_types__is_Lt2(x_0_10090, _ctx)) {
        kk_box_t l = x_0_10090._cons.Lt2.lt;
        kk_box_t g = x_0_10090._cons.Lt2.gt;
        kk_box_t _x_x294;
        kk_std_core_types__maybe _x_x295 = kk_std_core_types__new_Just(l, _ctx); /*maybe<91>*/
        _x_x294 = kk_std_core_types__maybe_box(_x_x295, _ctx); /*102*/
        kk_box_t _x_x296;
        kk_std_core_types__maybe _x_x297 = kk_std_core_types__new_Just(g, _ctx); /*maybe<91>*/
        _x_x296 = kk_std_core_types__maybe_box(_x_x297, _ctx); /*102*/
        return kk_std_core_types__new_Lt2(_x_x294, _x_x296, _ctx);
      }
      {
        kk_box_t l_0 = x_0_10090._cons.Gt2.lt;
        kk_box_t g_0 = x_0_10090._cons.Gt2.gt;
        kk_box_t _x_x298;
        kk_std_core_types__maybe _x_x299 = kk_std_core_types__new_Just(l_0, _ctx); /*maybe<91>*/
        _x_x298 = kk_std_core_types__maybe_box(_x_x299, _ctx); /*102*/
        kk_box_t _x_x300;
        kk_std_core_types__maybe _x_x301 = kk_std_core_types__new_Just(g_0, _ctx); /*maybe<91>*/
        _x_x300 = kk_std_core_types__maybe_box(_x_x301, _ctx); /*102*/
        return kk_std_core_types__new_Gt2(_x_x298, _x_x300, _ctx);
      }
    }
    {
      kk_box_t _x_x302;
      kk_std_core_types__maybe _x_x303 = kk_std_core_types__new_Just(x, _ctx); /*maybe<91>*/
      _x_x302 = kk_std_core_types__maybe_box(_x_x303, _ctx); /*102*/
      return kk_std_core_types__new_Gt2(kk_std_core_types__maybe_box(kk_std_core_types__new_Nothing(_ctx), _ctx), _x_x302, _ctx);
    }
  }
  {
    return kk_std_core_types__new_Lt2(kk_std_core_types__maybe_box(kk_std_core_types__new_Nothing(_ctx), _ctx), kk_std_core_types__maybe_box(mb2, _ctx), _ctx);
  }
}
 
// monadic lift

kk_std_core_types__order2 kk_std_core_dash_extras_list_fs__mlift_order2_10080(kk_box_t h1_1_sq_, kk_std_core_types__order2 _y_x10045, kk_context_t* _ctx) { /* forall<a,e> (h1@1' : a, order2<list<a>>) -> e order2<list<a>> */ 
  if (kk_std_core_types__is_Lt2(_y_x10045, _ctx)) {
    kk_box_t _box_x46 = _y_x10045._cons.Lt2.lt;
    kk_box_t _box_x47 = _y_x10045._cons.Lt2.gt;
    kk_std_core_types__list t1_sq_ = kk_std_core_types__list_unbox(_box_x46, KK_BORROWED, _ctx);
    kk_std_core_types__list t2_sq_ = kk_std_core_types__list_unbox(_box_x47, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(t1_sq_, _ctx);
    kk_std_core_types__list_dup(t2_sq_, _ctx);
    kk_std_core_types__order2_drop(_y_x10045, _ctx);
    kk_box_t _x_x304;
    kk_std_core_types__list _x_x305;
    kk_box_t _x_x306 = kk_box_dup(h1_1_sq_, _ctx); /*1103*/
    _x_x305 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x306, t1_sq_, _ctx); /*list<82>*/
    _x_x304 = kk_std_core_types__list_box(_x_x305, _ctx); /*102*/
    kk_box_t _x_x307;
    kk_std_core_types__list _x_x308 = kk_std_core_types__new_Cons(kk_reuse_null, 0, h1_1_sq_, t2_sq_, _ctx); /*list<82>*/
    _x_x307 = kk_std_core_types__list_box(_x_x308, _ctx); /*102*/
    return kk_std_core_types__new_Lt2(_x_x304, _x_x307, _ctx);
  }
  if (kk_std_core_types__is_Gt2(_y_x10045, _ctx)) {
    kk_box_t _box_x50 = _y_x10045._cons.Gt2.lt;
    kk_box_t _box_x51 = _y_x10045._cons.Gt2.gt;
    kk_std_core_types__list t2_0_sq_ = kk_std_core_types__list_unbox(_box_x50, KK_BORROWED, _ctx);
    kk_std_core_types__list t1_0_sq_ = kk_std_core_types__list_unbox(_box_x51, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(t1_0_sq_, _ctx);
    kk_std_core_types__list_dup(t2_0_sq_, _ctx);
    kk_std_core_types__order2_drop(_y_x10045, _ctx);
    kk_box_t _x_x309;
    kk_std_core_types__list _x_x310;
    kk_box_t _x_x311 = kk_box_dup(h1_1_sq_, _ctx); /*1103*/
    _x_x310 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x311, t2_0_sq_, _ctx); /*list<82>*/
    _x_x309 = kk_std_core_types__list_box(_x_x310, _ctx); /*102*/
    kk_box_t _x_x312;
    kk_std_core_types__list _x_x313 = kk_std_core_types__new_Cons(kk_reuse_null, 0, h1_1_sq_, t1_0_sq_, _ctx); /*list<82>*/
    _x_x312 = kk_std_core_types__list_box(_x_x313, _ctx); /*102*/
    return kk_std_core_types__new_Gt2(_x_x309, _x_x312, _ctx);
  }
  {
    kk_box_t _box_x54 = _y_x10045._cons.Eq2.eq;
    kk_std_core_types__list t1_1_sq_ = kk_std_core_types__list_unbox(_box_x54, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(t1_1_sq_, _ctx);
    kk_std_core_types__order2_drop(_y_x10045, _ctx);
    kk_box_t _x_x314;
    kk_std_core_types__list _x_x315 = kk_std_core_types__new_Cons(kk_reuse_null, 0, h1_1_sq_, t1_1_sq_, _ctx); /*list<82>*/
    _x_x314 = kk_std_core_types__list_box(_x_x315, _ctx); /*102*/
    return kk_std_core_types__new_Eq2(_x_x314, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_core_dash_extras_list_fs__mlift_order2_10081_fun325__t {
  struct kk_function_s _base;
  kk_box_t h1_1_0_sq_;
};
static kk_box_t kk_std_core_dash_extras_list_fs__mlift_order2_10081_fun325(kk_function_t _fself, kk_box_t _b_x66, kk_context_t* _ctx);
static kk_function_t kk_std_core_dash_extras_list_fs__new_mlift_order2_10081_fun325(kk_box_t h1_1_0_sq_, kk_context_t* _ctx) {
  struct kk_std_core_dash_extras_list_fs__mlift_order2_10081_fun325__t* _self = kk_function_alloc_as(struct kk_std_core_dash_extras_list_fs__mlift_order2_10081_fun325__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_dash_extras_list_fs__mlift_order2_10081_fun325, kk_context());
  _self->h1_1_0_sq_ = h1_1_0_sq_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_dash_extras_list_fs__mlift_order2_10081_fun325(kk_function_t _fself, kk_box_t _b_x66, kk_context_t* _ctx) {
  struct kk_std_core_dash_extras_list_fs__mlift_order2_10081_fun325__t* _self = kk_function_as(struct kk_std_core_dash_extras_list_fs__mlift_order2_10081_fun325__t*, _fself, _ctx);
  kk_box_t h1_1_0_sq_ = _self->h1_1_0_sq_; /* 1103 */
  kk_drop_match(_self, {kk_box_dup(h1_1_0_sq_, _ctx);}, {}, _ctx)
  kk_std_core_types__order2 _y_x10045_0_72 = kk_std_core_types__order2_unbox(_b_x66, KK_OWNED, _ctx); /*order2<list<1103>>*/;
  kk_std_core_types__order2 _x_x326 = kk_std_core_dash_extras_list_fs__mlift_order2_10080(h1_1_0_sq_, _y_x10045_0_72, _ctx); /*order2<list<1103>>*/
  return kk_std_core_types__order2_box(_x_x326, _ctx);
}

kk_std_core_types__order2 kk_std_core_dash_extras_list_fs__mlift_order2_10081(kk_std_core_types__list t1, kk_std_core_types__list t2, kk_function_t _implicit_fs_order2, kk_std_core_types__order2 _y_x10044, kk_context_t* _ctx) { /* forall<a,e> (t1 : list<a>, t2 : list<a>, ?order2 : (a, a) -> e order2<a>, order2<a>) -> e order2<list<a>> */ 
  if (kk_std_core_types__is_Lt2(_y_x10044, _ctx)) {
    kk_box_t h1_sq_ = _y_x10044._cons.Lt2.lt;
    kk_box_t h2_sq_ = _y_x10044._cons.Lt2.gt;
    kk_function_drop(_implicit_fs_order2, _ctx);
    kk_box_t _x_x316;
    kk_std_core_types__list _x_x317 = kk_std_core_types__new_Cons(kk_reuse_null, 0, h1_sq_, t1, _ctx); /*list<82>*/
    _x_x316 = kk_std_core_types__list_box(_x_x317, _ctx); /*102*/
    kk_box_t _x_x318;
    kk_std_core_types__list _x_x319 = kk_std_core_types__new_Cons(kk_reuse_null, 0, h2_sq_, t2, _ctx); /*list<82>*/
    _x_x318 = kk_std_core_types__list_box(_x_x319, _ctx); /*102*/
    return kk_std_core_types__new_Lt2(_x_x316, _x_x318, _ctx);
  }
  if (kk_std_core_types__is_Gt2(_y_x10044, _ctx)) {
    kk_box_t h2_0_sq_ = _y_x10044._cons.Gt2.lt;
    kk_box_t h1_0_sq_ = _y_x10044._cons.Gt2.gt;
    kk_function_drop(_implicit_fs_order2, _ctx);
    kk_box_t _x_x320;
    kk_std_core_types__list _x_x321 = kk_std_core_types__new_Cons(kk_reuse_null, 0, h2_0_sq_, t2, _ctx); /*list<82>*/
    _x_x320 = kk_std_core_types__list_box(_x_x321, _ctx); /*102*/
    kk_box_t _x_x322;
    kk_std_core_types__list _x_x323 = kk_std_core_types__new_Cons(kk_reuse_null, 0, h1_0_sq_, t1, _ctx); /*list<82>*/
    _x_x322 = kk_std_core_types__list_box(_x_x323, _ctx); /*102*/
    return kk_std_core_types__new_Gt2(_x_x320, _x_x322, _ctx);
  }
  {
    kk_box_t h1_1_0_sq_ = _y_x10044._cons.Eq2.eq;
    kk_std_core_types__order2 x_10093 = kk_std_core_dash_extras_list_fs_order2(t1, t2, _implicit_fs_order2, _ctx); /*order2<list<1103>>*/;
    if (kk_yielding(kk_context())) {
      kk_std_core_types__order2_drop(x_10093, _ctx);
      kk_box_t _x_x324 = kk_std_core_hnd_yield_extend(kk_std_core_dash_extras_list_fs__new_mlift_order2_10081_fun325(h1_1_0_sq_, _ctx), _ctx); /*2978*/
      return kk_std_core_types__order2_unbox(_x_x324, KK_OWNED, _ctx);
    }
    {
      return kk_std_core_dash_extras_list_fs__mlift_order2_10080(h1_1_0_sq_, x_10093, _ctx);
    }
  }
}


// lift anonymous function
struct kk_std_core_dash_extras_list_fs_order2_fun331__t {
  struct kk_function_s _base;
  kk_std_core_types__list t1_0;
  kk_std_core_types__list t2_0;
  kk_function_t _implicit_fs_order2_0;
};
static kk_box_t kk_std_core_dash_extras_list_fs_order2_fun331(kk_function_t _fself, kk_box_t _b_x79, kk_context_t* _ctx);
static kk_function_t kk_std_core_dash_extras_list_fs_new_order2_fun331(kk_std_core_types__list t1_0, kk_std_core_types__list t2_0, kk_function_t _implicit_fs_order2_0, kk_context_t* _ctx) {
  struct kk_std_core_dash_extras_list_fs_order2_fun331__t* _self = kk_function_alloc_as(struct kk_std_core_dash_extras_list_fs_order2_fun331__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_dash_extras_list_fs_order2_fun331, kk_context());
  _self->t1_0 = t1_0;
  _self->t2_0 = t2_0;
  _self->_implicit_fs_order2_0 = _implicit_fs_order2_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_dash_extras_list_fs_order2_fun331(kk_function_t _fself, kk_box_t _b_x79, kk_context_t* _ctx) {
  struct kk_std_core_dash_extras_list_fs_order2_fun331__t* _self = kk_function_as(struct kk_std_core_dash_extras_list_fs_order2_fun331__t*, _fself, _ctx);
  kk_std_core_types__list t1_0 = _self->t1_0; /* list<1103> */
  kk_std_core_types__list t2_0 = _self->t2_0; /* list<1103> */
  kk_function_t _implicit_fs_order2_0 = _self->_implicit_fs_order2_0; /* (1103, 1103) -> 1104 order2<1103> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(t1_0, _ctx);kk_std_core_types__list_dup(t2_0, _ctx);kk_function_dup(_implicit_fs_order2_0, _ctx);}, {}, _ctx)
  kk_std_core_types__order2 _y_x10044_0_112 = kk_std_core_types__order2_unbox(_b_x79, KK_OWNED, _ctx); /*order2<1103>*/;
  kk_std_core_types__order2 _x_x332 = kk_std_core_dash_extras_list_fs__mlift_order2_10081(t1_0, t2_0, _implicit_fs_order2_0, _y_x10044_0_112, _ctx); /*order2<list<1103>>*/
  return kk_std_core_types__order2_box(_x_x332, _ctx);
}


// lift anonymous function
struct kk_std_core_dash_extras_list_fs_order2_fun342__t {
  struct kk_function_s _base;
  kk_box_t h1_1_1_sq_;
};
static kk_box_t kk_std_core_dash_extras_list_fs_order2_fun342(kk_function_t _fself, kk_box_t _b_x85, kk_context_t* _ctx);
static kk_function_t kk_std_core_dash_extras_list_fs_new_order2_fun342(kk_box_t h1_1_1_sq_, kk_context_t* _ctx) {
  struct kk_std_core_dash_extras_list_fs_order2_fun342__t* _self = kk_function_alloc_as(struct kk_std_core_dash_extras_list_fs_order2_fun342__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_dash_extras_list_fs_order2_fun342, kk_context());
  _self->h1_1_1_sq_ = h1_1_1_sq_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_dash_extras_list_fs_order2_fun342(kk_function_t _fself, kk_box_t _b_x85, kk_context_t* _ctx) {
  struct kk_std_core_dash_extras_list_fs_order2_fun342__t* _self = kk_function_as(struct kk_std_core_dash_extras_list_fs_order2_fun342__t*, _fself, _ctx);
  kk_box_t h1_1_1_sq_ = _self->h1_1_1_sq_; /* 1103 */
  kk_drop_match(_self, {kk_box_dup(h1_1_1_sq_, _ctx);}, {}, _ctx)
  kk_std_core_types__order2 _y_x10045_1_113 = kk_std_core_types__order2_unbox(_b_x85, KK_OWNED, _ctx); /*order2<list<1103>>*/;
  kk_std_core_types__order2 _x_x343 = kk_std_core_dash_extras_list_fs__mlift_order2_10080(h1_1_1_sq_, _y_x10045_1_113, _ctx); /*order2<list<1103>>*/
  return kk_std_core_types__order2_box(_x_x343, _ctx);
}

kk_std_core_types__order2 kk_std_core_dash_extras_list_fs_order2(kk_std_core_types__list l1, kk_std_core_types__list l2, kk_function_t _implicit_fs_order2_0, kk_context_t* _ctx) { /* forall<a,e> (l1 : list<a>, l2 : list<a>, ?order2 : (a, a) -> e order2<a>) -> e order2<list<a>> */ 
  if (kk_std_core_types__is_Nil(l1, _ctx) && kk_std_core_types__is_Nil(l2, _ctx)) {
    kk_function_drop(_implicit_fs_order2_0, _ctx);
    return kk_std_core_types__new_Eq2(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx), _ctx);
  }
  if (kk_std_core_types__is_Nil(l1, _ctx)) {
    kk_function_drop(_implicit_fs_order2_0, _ctx);
    return kk_std_core_types__new_Lt2(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx), kk_std_core_types__list_box(l2, _ctx), _ctx);
  }
  if (kk_std_core_types__is_Nil(l2, _ctx)) {
    kk_function_drop(_implicit_fs_order2_0, _ctx);
    return kk_std_core_types__new_Gt2(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx), kk_std_core_types__list_box(l1, _ctx), _ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x327 = kk_std_core_types__as_Cons(l1, _ctx);
    struct kk_std_core_types_Cons* _con_x328 = kk_std_core_types__as_Cons(l2, _ctx);
    kk_box_t h1 = _con_x327->head;
    kk_std_core_types__list t1_0 = _con_x327->tail;
    kk_box_t h2 = _con_x328->head;
    kk_std_core_types__list t2_0 = _con_x328->tail;
    kk_reuse_t _ru_x248 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(l2, _ctx)) {
      _ru_x248 = (kk_datatype_ptr_reuse(l2, _ctx));
    }
    else {
      kk_box_dup(h2, _ctx);
      kk_std_core_types__list_dup(t2_0, _ctx);
      kk_datatype_ptr_decref(l2, _ctx);
    }
    kk_reuse_t _ru_x249 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(l1, _ctx)) {
      _ru_x249 = (kk_datatype_ptr_reuse(l1, _ctx));
    }
    else {
      kk_box_dup(h1, _ctx);
      kk_std_core_types__list_dup(t1_0, _ctx);
      kk_datatype_ptr_decref(l1, _ctx);
    }
    kk_std_core_types__order2 x_0_10095;
    kk_function_t _x_x329 = kk_function_dup(_implicit_fs_order2_0, _ctx); /*(1103, 1103) -> 1104 order2<1103>*/
    x_0_10095 = kk_function_call(kk_std_core_types__order2, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x329, (_x_x329, h1, h2, _ctx), _ctx); /*order2<1103>*/
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_x248,kk_context());
      kk_reuse_drop(_ru_x249,kk_context());
      kk_std_core_types__order2_drop(x_0_10095, _ctx);
      kk_box_t _x_x330 = kk_std_core_hnd_yield_extend(kk_std_core_dash_extras_list_fs_new_order2_fun331(t1_0, t2_0, _implicit_fs_order2_0, _ctx), _ctx); /*2978*/
      return kk_std_core_types__order2_unbox(_x_x330, KK_OWNED, _ctx);
    }
    if (kk_std_core_types__is_Lt2(x_0_10095, _ctx)) {
      kk_box_t h1_2_sq_ = x_0_10095._cons.Lt2.lt;
      kk_box_t h2_1_sq_ = x_0_10095._cons.Lt2.gt;
      kk_function_drop(_implicit_fs_order2_0, _ctx);
      kk_box_t _x_x333;
      kk_std_core_types__list _x_x334 = kk_std_core_types__new_Cons(_ru_x249, 0, h1_2_sq_, t1_0, _ctx); /*list<82>*/
      _x_x333 = kk_std_core_types__list_box(_x_x334, _ctx); /*102*/
      kk_box_t _x_x335;
      kk_std_core_types__list _x_x336 = kk_std_core_types__new_Cons(_ru_x248, 0, h2_1_sq_, t2_0, _ctx); /*list<82>*/
      _x_x335 = kk_std_core_types__list_box(_x_x336, _ctx); /*102*/
      return kk_std_core_types__new_Lt2(_x_x333, _x_x335, _ctx);
    }
    if (kk_std_core_types__is_Gt2(x_0_10095, _ctx)) {
      kk_box_t h2_0_0_sq_ = x_0_10095._cons.Gt2.lt;
      kk_box_t h1_0_0_sq_ = x_0_10095._cons.Gt2.gt;
      kk_function_drop(_implicit_fs_order2_0, _ctx);
      kk_box_t _x_x337;
      kk_std_core_types__list _x_x338 = kk_std_core_types__new_Cons(_ru_x249, 0, h2_0_0_sq_, t2_0, _ctx); /*list<82>*/
      _x_x337 = kk_std_core_types__list_box(_x_x338, _ctx); /*102*/
      kk_box_t _x_x339;
      kk_std_core_types__list _x_x340 = kk_std_core_types__new_Cons(_ru_x248, 0, h1_0_0_sq_, t1_0, _ctx); /*list<82>*/
      _x_x339 = kk_std_core_types__list_box(_x_x340, _ctx); /*102*/
      return kk_std_core_types__new_Gt2(_x_x337, _x_x339, _ctx);
    }
    {
      kk_box_t h1_1_1_sq_ = x_0_10095._cons.Eq2.eq;
      kk_std_core_types__order2 x_1_10098 = kk_std_core_dash_extras_list_fs_order2(t1_0, t2_0, _implicit_fs_order2_0, _ctx); /*order2<list<1103>>*/;
      if (kk_yielding(kk_context())) {
        kk_reuse_drop(_ru_x248,kk_context());
        kk_reuse_drop(_ru_x249,kk_context());
        kk_std_core_types__order2_drop(x_1_10098, _ctx);
        kk_box_t _x_x341 = kk_std_core_hnd_yield_extend(kk_std_core_dash_extras_list_fs_new_order2_fun342(h1_1_1_sq_, _ctx), _ctx); /*2978*/
        return kk_std_core_types__order2_unbox(_x_x341, KK_OWNED, _ctx);
      }
      if (kk_std_core_types__is_Lt2(x_1_10098, _ctx)) {
        kk_box_t _box_x86 = x_1_10098._cons.Lt2.lt;
        kk_box_t _box_x87 = x_1_10098._cons.Lt2.gt;
        kk_std_core_types__list t1_2_sq_ = kk_std_core_types__list_unbox(_box_x86, KK_BORROWED, _ctx);
        kk_std_core_types__list t2_1_sq_ = kk_std_core_types__list_unbox(_box_x87, KK_BORROWED, _ctx);
        kk_std_core_types__list_dup(t1_2_sq_, _ctx);
        kk_std_core_types__list_dup(t2_1_sq_, _ctx);
        kk_std_core_types__order2_drop(x_1_10098, _ctx);
        kk_box_t _x_x344;
        kk_std_core_types__list _x_x345;
        kk_box_t _x_x346 = kk_box_dup(h1_1_1_sq_, _ctx); /*1103*/
        _x_x345 = kk_std_core_types__new_Cons(_ru_x249, 0, _x_x346, t1_2_sq_, _ctx); /*list<82>*/
        _x_x344 = kk_std_core_types__list_box(_x_x345, _ctx); /*102*/
        kk_box_t _x_x347;
        kk_std_core_types__list _x_x348 = kk_std_core_types__new_Cons(_ru_x248, 0, h1_1_1_sq_, t2_1_sq_, _ctx); /*list<82>*/
        _x_x347 = kk_std_core_types__list_box(_x_x348, _ctx); /*102*/
        return kk_std_core_types__new_Lt2(_x_x344, _x_x347, _ctx);
      }
      if (kk_std_core_types__is_Gt2(x_1_10098, _ctx)) {
        kk_box_t _box_x90 = x_1_10098._cons.Gt2.lt;
        kk_box_t _box_x91 = x_1_10098._cons.Gt2.gt;
        kk_std_core_types__list t2_0_0_sq_ = kk_std_core_types__list_unbox(_box_x90, KK_BORROWED, _ctx);
        kk_std_core_types__list t1_0_0_sq_ = kk_std_core_types__list_unbox(_box_x91, KK_BORROWED, _ctx);
        kk_std_core_types__list_dup(t1_0_0_sq_, _ctx);
        kk_std_core_types__list_dup(t2_0_0_sq_, _ctx);
        kk_std_core_types__order2_drop(x_1_10098, _ctx);
        kk_box_t _x_x349;
        kk_std_core_types__list _x_x350;
        kk_box_t _x_x351 = kk_box_dup(h1_1_1_sq_, _ctx); /*1103*/
        _x_x350 = kk_std_core_types__new_Cons(_ru_x249, 0, _x_x351, t2_0_0_sq_, _ctx); /*list<82>*/
        _x_x349 = kk_std_core_types__list_box(_x_x350, _ctx); /*102*/
        kk_box_t _x_x352;
        kk_std_core_types__list _x_x353 = kk_std_core_types__new_Cons(_ru_x248, 0, h1_1_1_sq_, t1_0_0_sq_, _ctx); /*list<82>*/
        _x_x352 = kk_std_core_types__list_box(_x_x353, _ctx); /*102*/
        return kk_std_core_types__new_Gt2(_x_x349, _x_x352, _ctx);
      }
      {
        kk_box_t _box_x94 = x_1_10098._cons.Eq2.eq;
        kk_std_core_types__list t1_1_0_sq_ = kk_std_core_types__list_unbox(_box_x94, KK_BORROWED, _ctx);
        kk_reuse_drop(_ru_x248,kk_context());
        kk_std_core_types__list_dup(t1_1_0_sq_, _ctx);
        kk_std_core_types__order2_drop(x_1_10098, _ctx);
        kk_box_t _x_x354;
        kk_std_core_types__list _x_x355 = kk_std_core_types__new_Cons(_ru_x249, 0, h1_1_1_sq_, t1_1_0_sq_, _ctx); /*list<82>*/
        _x_x354 = kk_std_core_types__list_box(_x_x355, _ctx); /*102*/
        return kk_std_core_types__new_Eq2(_x_x354, _ctx);
      }
    }
  }
}
 
// monadic lift

kk_std_core_types__order2 kk_std_core_dash_extras_tuple2_fs__mlift_order2_10082(kk_box_t a1_1_sq_, kk_std_core_types__order2 _y_x10049, kk_context_t* _ctx) { /* forall<a,b,e> (a1@1' : a, order2<b>) -> e order2<(a, b)> */ 
  if (kk_std_core_types__is_Lt2(_y_x10049, _ctx)) {
    kk_box_t b1_sq_ = _y_x10049._cons.Lt2.lt;
    kk_box_t b2_sq_ = _y_x10049._cons.Lt2.gt;
    kk_box_t _x_x356;
    kk_std_core_types__tuple2 _x_x357;
    kk_box_t _x_x358 = kk_box_dup(a1_1_sq_, _ctx); /*1334*/
    _x_x357 = kk_std_core_types__new_Tuple2(_x_x358, b1_sq_, _ctx); /*(129, 130)*/
    _x_x356 = kk_std_core_types__tuple2_box(_x_x357, _ctx); /*102*/
    kk_box_t _x_x359;
    kk_std_core_types__tuple2 _x_x360 = kk_std_core_types__new_Tuple2(a1_1_sq_, b2_sq_, _ctx); /*(129, 130)*/
    _x_x359 = kk_std_core_types__tuple2_box(_x_x360, _ctx); /*102*/
    return kk_std_core_types__new_Lt2(_x_x356, _x_x359, _ctx);
  }
  if (kk_std_core_types__is_Gt2(_y_x10049, _ctx)) {
    kk_box_t b2_0_sq_ = _y_x10049._cons.Gt2.lt;
    kk_box_t b1_0_sq_ = _y_x10049._cons.Gt2.gt;
    kk_box_t _x_x361;
    kk_std_core_types__tuple2 _x_x362;
    kk_box_t _x_x363 = kk_box_dup(a1_1_sq_, _ctx); /*1334*/
    _x_x362 = kk_std_core_types__new_Tuple2(_x_x363, b2_0_sq_, _ctx); /*(129, 130)*/
    _x_x361 = kk_std_core_types__tuple2_box(_x_x362, _ctx); /*102*/
    kk_box_t _x_x364;
    kk_std_core_types__tuple2 _x_x365 = kk_std_core_types__new_Tuple2(a1_1_sq_, b1_0_sq_, _ctx); /*(129, 130)*/
    _x_x364 = kk_std_core_types__tuple2_box(_x_x365, _ctx); /*102*/
    return kk_std_core_types__new_Gt2(_x_x361, _x_x364, _ctx);
  }
  {
    kk_box_t b1_1_sq_ = _y_x10049._cons.Eq2.eq;
    kk_box_t _x_x366;
    kk_std_core_types__tuple2 _x_x367 = kk_std_core_types__new_Tuple2(a1_1_sq_, b1_1_sq_, _ctx); /*(129, 130)*/
    _x_x366 = kk_std_core_types__tuple2_box(_x_x367, _ctx); /*102*/
    return kk_std_core_types__new_Eq2(_x_x366, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_core_dash_extras_tuple2_fs__mlift_order2_10083_fun377__t {
  struct kk_function_s _base;
  kk_box_t a1_1_sq_;
};
static kk_box_t kk_std_core_dash_extras_tuple2_fs__mlift_order2_10083_fun377(kk_function_t _fself, kk_box_t _b_x129, kk_context_t* _ctx);
static kk_function_t kk_std_core_dash_extras_tuple2_fs__new_mlift_order2_10083_fun377(kk_box_t a1_1_sq_, kk_context_t* _ctx) {
  struct kk_std_core_dash_extras_tuple2_fs__mlift_order2_10083_fun377__t* _self = kk_function_alloc_as(struct kk_std_core_dash_extras_tuple2_fs__mlift_order2_10083_fun377__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_dash_extras_tuple2_fs__mlift_order2_10083_fun377, kk_context());
  _self->a1_1_sq_ = a1_1_sq_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_dash_extras_tuple2_fs__mlift_order2_10083_fun377(kk_function_t _fself, kk_box_t _b_x129, kk_context_t* _ctx) {
  struct kk_std_core_dash_extras_tuple2_fs__mlift_order2_10083_fun377__t* _self = kk_function_as(struct kk_std_core_dash_extras_tuple2_fs__mlift_order2_10083_fun377__t*, _fself, _ctx);
  kk_box_t a1_1_sq_ = _self->a1_1_sq_; /* 1334 */
  kk_drop_match(_self, {kk_box_dup(a1_1_sq_, _ctx);}, {}, _ctx)
  kk_std_core_types__order2 _y_x10049_135 = kk_std_core_types__order2_unbox(_b_x129, KK_OWNED, _ctx); /*order2<1335>*/;
  kk_std_core_types__order2 _x_x378 = kk_std_core_dash_extras_tuple2_fs__mlift_order2_10082(a1_1_sq_, _y_x10049_135, _ctx); /*order2<(1334, 1335)>*/
  return kk_std_core_types__order2_box(_x_x378, _ctx);
}

kk_std_core_types__order2 kk_std_core_dash_extras_tuple2_fs__mlift_order2_10083(kk_box_t b1, kk_box_t b2, kk_function_t _implicit_fs_b_fs_order2, kk_std_core_types__order2 _y_x10048, kk_context_t* _ctx) { /* forall<a,b,e> (b1 : b, b2 : b, ?b/order2 : (b, b) -> e order2<b>, order2<a>) -> e order2<(a, b)> */ 
  if (kk_std_core_types__is_Lt2(_y_x10048, _ctx)) {
    kk_box_t a1_sq_ = _y_x10048._cons.Lt2.lt;
    kk_box_t a2_sq_ = _y_x10048._cons.Lt2.gt;
    kk_function_drop(_implicit_fs_b_fs_order2, _ctx);
    kk_box_t _x_x368;
    kk_std_core_types__tuple2 _x_x369 = kk_std_core_types__new_Tuple2(a1_sq_, b1, _ctx); /*(129, 130)*/
    _x_x368 = kk_std_core_types__tuple2_box(_x_x369, _ctx); /*102*/
    kk_box_t _x_x370;
    kk_std_core_types__tuple2 _x_x371 = kk_std_core_types__new_Tuple2(a2_sq_, b2, _ctx); /*(129, 130)*/
    _x_x370 = kk_std_core_types__tuple2_box(_x_x371, _ctx); /*102*/
    return kk_std_core_types__new_Lt2(_x_x368, _x_x370, _ctx);
  }
  if (kk_std_core_types__is_Gt2(_y_x10048, _ctx)) {
    kk_box_t a2_0_sq_ = _y_x10048._cons.Gt2.lt;
    kk_box_t a1_0_sq_ = _y_x10048._cons.Gt2.gt;
    kk_function_drop(_implicit_fs_b_fs_order2, _ctx);
    kk_box_t _x_x372;
    kk_std_core_types__tuple2 _x_x373 = kk_std_core_types__new_Tuple2(a2_0_sq_, b2, _ctx); /*(129, 130)*/
    _x_x372 = kk_std_core_types__tuple2_box(_x_x373, _ctx); /*102*/
    kk_box_t _x_x374;
    kk_std_core_types__tuple2 _x_x375 = kk_std_core_types__new_Tuple2(a1_0_sq_, b1, _ctx); /*(129, 130)*/
    _x_x374 = kk_std_core_types__tuple2_box(_x_x375, _ctx); /*102*/
    return kk_std_core_types__new_Gt2(_x_x372, _x_x374, _ctx);
  }
  {
    kk_box_t a1_1_sq_ = _y_x10048._cons.Eq2.eq;
    kk_std_core_types__order2 x_10101 = kk_function_call(kk_std_core_types__order2, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs_b_fs_order2, (_implicit_fs_b_fs_order2, b1, b2, _ctx), _ctx); /*order2<1335>*/;
    if (kk_yielding(kk_context())) {
      kk_std_core_types__order2_drop(x_10101, _ctx);
      kk_box_t _x_x376 = kk_std_core_hnd_yield_extend(kk_std_core_dash_extras_tuple2_fs__new_mlift_order2_10083_fun377(a1_1_sq_, _ctx), _ctx); /*2978*/
      return kk_std_core_types__order2_unbox(_x_x376, KK_OWNED, _ctx);
    }
    {
      return kk_std_core_dash_extras_tuple2_fs__mlift_order2_10082(a1_1_sq_, x_10101, _ctx);
    }
  }
}
 
// Order two integers in ascending order.


// lift anonymous function
struct kk_std_core_dash_extras_tuple2_fs_order2_fun382__t {
  struct kk_function_s _base;
  kk_box_t b1;
  kk_box_t b2;
  kk_function_t _implicit_fs_b_fs_order2;
};
static kk_box_t kk_std_core_dash_extras_tuple2_fs_order2_fun382(kk_function_t _fself, kk_box_t _b_x137, kk_context_t* _ctx);
static kk_function_t kk_std_core_dash_extras_tuple2_fs_new_order2_fun382(kk_box_t b1, kk_box_t b2, kk_function_t _implicit_fs_b_fs_order2, kk_context_t* _ctx) {
  struct kk_std_core_dash_extras_tuple2_fs_order2_fun382__t* _self = kk_function_alloc_as(struct kk_std_core_dash_extras_tuple2_fs_order2_fun382__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_dash_extras_tuple2_fs_order2_fun382, kk_context());
  _self->b1 = b1;
  _self->b2 = b2;
  _self->_implicit_fs_b_fs_order2 = _implicit_fs_b_fs_order2;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_dash_extras_tuple2_fs_order2_fun382(kk_function_t _fself, kk_box_t _b_x137, kk_context_t* _ctx) {
  struct kk_std_core_dash_extras_tuple2_fs_order2_fun382__t* _self = kk_function_as(struct kk_std_core_dash_extras_tuple2_fs_order2_fun382__t*, _fself, _ctx);
  kk_box_t b1 = _self->b1; /* 1335 */
  kk_box_t b2 = _self->b2; /* 1335 */
  kk_function_t _implicit_fs_b_fs_order2 = _self->_implicit_fs_b_fs_order2; /* (1335, 1335) -> 1336 order2<1335> */
  kk_drop_match(_self, {kk_box_dup(b1, _ctx);kk_box_dup(b2, _ctx);kk_function_dup(_implicit_fs_b_fs_order2, _ctx);}, {}, _ctx)
  kk_std_core_types__order2 _y_x10048_160 = kk_std_core_types__order2_unbox(_b_x137, KK_OWNED, _ctx); /*order2<1334>*/;
  kk_std_core_types__order2 _x_x383 = kk_std_core_dash_extras_tuple2_fs__mlift_order2_10083(b1, b2, _implicit_fs_b_fs_order2, _y_x10048_160, _ctx); /*order2<(1334, 1335)>*/
  return kk_std_core_types__order2_box(_x_x383, _ctx);
}


// lift anonymous function
struct kk_std_core_dash_extras_tuple2_fs_order2_fun394__t {
  struct kk_function_s _base;
  kk_box_t a1_1_sq_;
};
static kk_box_t kk_std_core_dash_extras_tuple2_fs_order2_fun394(kk_function_t _fself, kk_box_t _b_x143, kk_context_t* _ctx);
static kk_function_t kk_std_core_dash_extras_tuple2_fs_new_order2_fun394(kk_box_t a1_1_sq_, kk_context_t* _ctx) {
  struct kk_std_core_dash_extras_tuple2_fs_order2_fun394__t* _self = kk_function_alloc_as(struct kk_std_core_dash_extras_tuple2_fs_order2_fun394__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_dash_extras_tuple2_fs_order2_fun394, kk_context());
  _self->a1_1_sq_ = a1_1_sq_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_dash_extras_tuple2_fs_order2_fun394(kk_function_t _fself, kk_box_t _b_x143, kk_context_t* _ctx) {
  struct kk_std_core_dash_extras_tuple2_fs_order2_fun394__t* _self = kk_function_as(struct kk_std_core_dash_extras_tuple2_fs_order2_fun394__t*, _fself, _ctx);
  kk_box_t a1_1_sq_ = _self->a1_1_sq_; /* 1334 */
  kk_drop_match(_self, {kk_box_dup(a1_1_sq_, _ctx);}, {}, _ctx)
  kk_std_core_types__order2 _y_x10049_161 = kk_std_core_types__order2_unbox(_b_x143, KK_OWNED, _ctx); /*order2<1335>*/;
  kk_std_core_types__order2 _x_x395 = kk_std_core_dash_extras_tuple2_fs__mlift_order2_10082(a1_1_sq_, _y_x10049_161, _ctx); /*order2<(1334, 1335)>*/
  return kk_std_core_types__order2_box(_x_x395, _ctx);
}

kk_std_core_types__order2 kk_std_core_dash_extras_tuple2_fs_order2(kk_std_core_types__tuple2 t1, kk_std_core_types__tuple2 t2, kk_function_t _implicit_fs_a_fs_order2, kk_function_t _implicit_fs_b_fs_order2, kk_context_t* _ctx) { /* forall<a,b,e> (t1 : (a, b), t2 : (a, b), ?a/order2 : (a, a) -> e order2<a>, ?b/order2 : (b, b) -> e order2<b>) -> e order2<(a, b)> */ 
  {
    kk_box_t a1 = t1.fst;
    kk_box_t b1 = t1.snd;
    {
      kk_box_t a2 = t2.fst;
      kk_box_t b2 = t2.snd;
      kk_std_core_types__order2 x_10103;
      kk_function_t _x_x379 = kk_function_dup(_implicit_fs_a_fs_order2, _ctx); /*(1334, 1334) -> 1336 order2<1334>*/
      x_10103 = kk_function_call(kk_std_core_types__order2, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x379, (_x_x379, a1, a2, _ctx), _ctx); /*order2<1334>*/
      if (kk_yielding(kk_context())) {
        kk_std_core_types__order2_drop(x_10103, _ctx);
        kk_box_t _x_x380;
        kk_function_t _x_x381;
        kk_function_dup(_implicit_fs_b_fs_order2, _ctx);
        _x_x381 = kk_std_core_dash_extras_tuple2_fs_new_order2_fun382(b1, b2, _implicit_fs_b_fs_order2, _ctx); /*(2977) -> 2979 2978*/
        _x_x380 = kk_std_core_hnd_yield_extend(_x_x381, _ctx); /*2978*/
        return kk_std_core_types__order2_unbox(_x_x380, KK_OWNED, _ctx);
      }
      if (kk_std_core_types__is_Lt2(x_10103, _ctx)) {
        kk_box_t a1_sq_ = x_10103._cons.Lt2.lt;
        kk_box_t a2_sq_ = x_10103._cons.Lt2.gt;
        kk_box_t _x_x384;
        kk_std_core_types__tuple2 _x_x385 = kk_std_core_types__new_Tuple2(a1_sq_, b1, _ctx); /*(129, 130)*/
        _x_x384 = kk_std_core_types__tuple2_box(_x_x385, _ctx); /*102*/
        kk_box_t _x_x386;
        kk_std_core_types__tuple2 _x_x387 = kk_std_core_types__new_Tuple2(a2_sq_, b2, _ctx); /*(129, 130)*/
        _x_x386 = kk_std_core_types__tuple2_box(_x_x387, _ctx); /*102*/
        return kk_std_core_types__new_Lt2(_x_x384, _x_x386, _ctx);
      }
      if (kk_std_core_types__is_Gt2(x_10103, _ctx)) {
        kk_box_t a2_0_sq_ = x_10103._cons.Gt2.lt;
        kk_box_t a1_0_sq_ = x_10103._cons.Gt2.gt;
        kk_box_t _x_x388;
        kk_std_core_types__tuple2 _x_x389 = kk_std_core_types__new_Tuple2(a2_0_sq_, b2, _ctx); /*(129, 130)*/
        _x_x388 = kk_std_core_types__tuple2_box(_x_x389, _ctx); /*102*/
        kk_box_t _x_x390;
        kk_std_core_types__tuple2 _x_x391 = kk_std_core_types__new_Tuple2(a1_0_sq_, b1, _ctx); /*(129, 130)*/
        _x_x390 = kk_std_core_types__tuple2_box(_x_x391, _ctx); /*102*/
        return kk_std_core_types__new_Gt2(_x_x388, _x_x390, _ctx);
      }
      {
        kk_box_t a1_1_sq_ = x_10103._cons.Eq2.eq;
        kk_std_core_types__order2 x_0_10106;
        kk_function_t _x_x392 = kk_function_dup(_implicit_fs_b_fs_order2, _ctx); /*(1335, 1335) -> 1336 order2<1335>*/
        x_0_10106 = kk_function_call(kk_std_core_types__order2, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x392, (_x_x392, b1, b2, _ctx), _ctx); /*order2<1335>*/
        if (kk_yielding(kk_context())) {
          kk_std_core_types__order2_drop(x_0_10106, _ctx);
          kk_box_t _x_x393 = kk_std_core_hnd_yield_extend(kk_std_core_dash_extras_tuple2_fs_new_order2_fun394(a1_1_sq_, _ctx), _ctx); /*2978*/
          return kk_std_core_types__order2_unbox(_x_x393, KK_OWNED, _ctx);
        }
        if (kk_std_core_types__is_Lt2(x_0_10106, _ctx)) {
          kk_box_t b1_sq_ = x_0_10106._cons.Lt2.lt;
          kk_box_t b2_sq_ = x_0_10106._cons.Lt2.gt;
          kk_box_t _x_x396;
          kk_std_core_types__tuple2 _x_x397;
          kk_box_t _x_x398 = kk_box_dup(a1_1_sq_, _ctx); /*1334*/
          _x_x397 = kk_std_core_types__new_Tuple2(_x_x398, b1_sq_, _ctx); /*(129, 130)*/
          _x_x396 = kk_std_core_types__tuple2_box(_x_x397, _ctx); /*102*/
          kk_box_t _x_x399;
          kk_std_core_types__tuple2 _x_x400 = kk_std_core_types__new_Tuple2(a1_1_sq_, b2_sq_, _ctx); /*(129, 130)*/
          _x_x399 = kk_std_core_types__tuple2_box(_x_x400, _ctx); /*102*/
          return kk_std_core_types__new_Lt2(_x_x396, _x_x399, _ctx);
        }
        if (kk_std_core_types__is_Gt2(x_0_10106, _ctx)) {
          kk_box_t b2_0_sq_ = x_0_10106._cons.Gt2.lt;
          kk_box_t b1_0_sq_ = x_0_10106._cons.Gt2.gt;
          kk_box_t _x_x401;
          kk_std_core_types__tuple2 _x_x402;
          kk_box_t _x_x403 = kk_box_dup(a1_1_sq_, _ctx); /*1334*/
          _x_x402 = kk_std_core_types__new_Tuple2(_x_x403, b2_0_sq_, _ctx); /*(129, 130)*/
          _x_x401 = kk_std_core_types__tuple2_box(_x_x402, _ctx); /*102*/
          kk_box_t _x_x404;
          kk_std_core_types__tuple2 _x_x405 = kk_std_core_types__new_Tuple2(a1_1_sq_, b1_0_sq_, _ctx); /*(129, 130)*/
          _x_x404 = kk_std_core_types__tuple2_box(_x_x405, _ctx); /*102*/
          return kk_std_core_types__new_Gt2(_x_x401, _x_x404, _ctx);
        }
        {
          kk_box_t b1_1_sq_ = x_0_10106._cons.Eq2.eq;
          kk_box_t _x_x406;
          kk_std_core_types__tuple2 _x_x407 = kk_std_core_types__new_Tuple2(a1_1_sq_, b1_1_sq_, _ctx); /*(129, 130)*/
          _x_x406 = kk_std_core_types__tuple2_box(_x_x407, _ctx); /*102*/
          return kk_std_core_types__new_Eq2(_x_x406, _ctx);
        }
      }
    }
  }
}

bool kk_std_core_dash_extras_list_fs_and(kk_std_core_types__list l, kk_context_t* _ctx) { /* (l : list<bool>) -> bool */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Nil(l, _ctx)) {
    return true;
  }
  {
    struct kk_std_core_types_Cons* _con_x408 = kk_std_core_types__as_Cons(l, _ctx);
    kk_box_t _box_x162 = _con_x408->head;
    bool _pat_1 = kk_bool_unbox(_box_x162);
    if (_pat_1) {
      kk_std_core_types__list l_sq_ = _con_x408->tail;
      if kk_likely(kk_datatype_ptr_is_unique(l, _ctx)) {
        kk_box_drop(_box_x162, _ctx);
        kk_datatype_ptr_free(l, _ctx);
      }
      else {
        kk_std_core_types__list_dup(l_sq_, _ctx);
        kk_datatype_ptr_decref(l, _ctx);
      }
      { // tailcall
        l = l_sq_;
        goto kk__tailcall;
      }
    }
  }
  {
    struct kk_std_core_types_Cons* _con_x409 = kk_std_core_types__as_Cons(l, _ctx);
    kk_box_t _box_x163 = _con_x409->head;
    bool _pat_3 = kk_bool_unbox(_box_x163);
    kk_std_core_types__list _pat_4 = _con_x409->tail;
    if kk_likely(kk_datatype_ptr_is_unique(l, _ctx)) {
      kk_std_core_types__list_drop(_pat_4, _ctx);
      kk_box_drop(_box_x163, _ctx);
      kk_datatype_ptr_free(l, _ctx);
    }
    else {
      kk_datatype_ptr_decref(l, _ctx);
    }
    return false;
  }
}
 
// monadic lift

bool kk_std_core_dash_extras_list_fs__mlift_is_prefix_of_10084(kk_std_core_types__list t1, kk_std_core_types__list t2, kk_function_t _implicit_fs__lp__eq__eq__rp_, bool _y_x10053, kk_context_t* _ctx) { /* forall<a,e> (t1 : list<a>, t2 : list<a>, ?(==) : (a, a) -> e bool, bool) -> e bool */ 
  if (_y_x10053) {
    return kk_std_core_dash_extras_list_fs_is_prefix_of(t1, t2, _implicit_fs__lp__eq__eq__rp_, _ctx);
  }
  {
    kk_function_drop(_implicit_fs__lp__eq__eq__rp_, _ctx);
    kk_std_core_types__list_drop(t2, _ctx);
    kk_std_core_types__list_drop(t1, _ctx);
    return false;
  }
}


// lift anonymous function
struct kk_std_core_dash_extras_list_fs_is_prefix_of_fun414__t {
  struct kk_function_s _base;
  kk_std_core_types__list t1_0;
  kk_std_core_types__list t2_0;
  kk_function_t _implicit_fs__lp__at_x_0_eq__eq__rp_;
};
static kk_box_t kk_std_core_dash_extras_list_fs_is_prefix_of_fun414(kk_function_t _fself, kk_box_t _b_x166, kk_context_t* _ctx);
static kk_function_t kk_std_core_dash_extras_list_fs_new_is_prefix_of_fun414(kk_std_core_types__list t1_0, kk_std_core_types__list t2_0, kk_function_t _implicit_fs__lp__at_x_0_eq__eq__rp_, kk_context_t* _ctx) {
  struct kk_std_core_dash_extras_list_fs_is_prefix_of_fun414__t* _self = kk_function_alloc_as(struct kk_std_core_dash_extras_list_fs_is_prefix_of_fun414__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_dash_extras_list_fs_is_prefix_of_fun414, kk_context());
  _self->t1_0 = t1_0;
  _self->t2_0 = t2_0;
  _self->_implicit_fs__lp__at_x_0_eq__eq__rp_ = _implicit_fs__lp__at_x_0_eq__eq__rp_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_dash_extras_list_fs_is_prefix_of_fun414(kk_function_t _fself, kk_box_t _b_x166, kk_context_t* _ctx) {
  struct kk_std_core_dash_extras_list_fs_is_prefix_of_fun414__t* _self = kk_function_as(struct kk_std_core_dash_extras_list_fs_is_prefix_of_fun414__t*, _fself, _ctx);
  kk_std_core_types__list t1_0 = _self->t1_0; /* list<1523> */
  kk_std_core_types__list t2_0 = _self->t2_0; /* list<1523> */
  kk_function_t _implicit_fs__lp__at_x_0_eq__eq__rp_ = _self->_implicit_fs__lp__at_x_0_eq__eq__rp_; /* (1523, 1523) -> 1524 bool */
  kk_drop_match(_self, {kk_std_core_types__list_dup(t1_0, _ctx);kk_std_core_types__list_dup(t2_0, _ctx);kk_function_dup(_implicit_fs__lp__at_x_0_eq__eq__rp_, _ctx);}, {}, _ctx)
  bool _y_x10053_0_168 = kk_bool_unbox(_b_x166); /*bool*/;
  bool _x_x415 = kk_std_core_dash_extras_list_fs__mlift_is_prefix_of_10084(t1_0, t2_0, _implicit_fs__lp__at_x_0_eq__eq__rp_, _y_x10053_0_168, _ctx); /*bool*/
  return kk_bool_box(_x_x415);
}

bool kk_std_core_dash_extras_list_fs_is_prefix_of(kk_std_core_types__list l1, kk_std_core_types__list l2, kk_function_t _implicit_fs__lp__at_x_0_eq__eq__rp_, kk_context_t* _ctx) { /* forall<a,e> (l1 : list<a>, l2 : list<a>, ?(==) : (a, a) -> e bool) -> e bool */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Nil(l1, _ctx)) {
    kk_function_drop(_implicit_fs__lp__at_x_0_eq__eq__rp_, _ctx);
    kk_std_core_types__list_drop(l2, _ctx);
    return true;
  }
  if (kk_std_core_types__is_Nil(l2, _ctx)) {
    kk_function_drop(_implicit_fs__lp__at_x_0_eq__eq__rp_, _ctx);
    kk_std_core_types__list_drop(l1, _ctx);
    return false;
  }
  {
    struct kk_std_core_types_Cons* _con_x410 = kk_std_core_types__as_Cons(l1, _ctx);
    struct kk_std_core_types_Cons* _con_x411 = kk_std_core_types__as_Cons(l2, _ctx);
    kk_box_t h1 = _con_x410->head;
    kk_std_core_types__list t1_0 = _con_x410->tail;
    kk_box_t h2 = _con_x411->head;
    kk_std_core_types__list t2_0 = _con_x411->tail;
    if kk_likely(kk_datatype_ptr_is_unique(l2, _ctx)) {
      kk_datatype_ptr_free(l2, _ctx);
    }
    else {
      kk_box_dup(h2, _ctx);
      kk_std_core_types__list_dup(t2_0, _ctx);
      kk_datatype_ptr_decref(l2, _ctx);
    }
    if kk_likely(kk_datatype_ptr_is_unique(l1, _ctx)) {
      kk_datatype_ptr_free(l1, _ctx);
    }
    else {
      kk_box_dup(h1, _ctx);
      kk_std_core_types__list_dup(t1_0, _ctx);
      kk_datatype_ptr_decref(l1, _ctx);
    }
    bool x_10109;
    kk_function_t _x_x412 = kk_function_dup(_implicit_fs__lp__at_x_0_eq__eq__rp_, _ctx); /*(1523, 1523) -> 1524 bool*/
    x_10109 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x412, (_x_x412, h1, h2, _ctx), _ctx); /*bool*/
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x413 = kk_std_core_hnd_yield_extend(kk_std_core_dash_extras_list_fs_new_is_prefix_of_fun414(t1_0, t2_0, _implicit_fs__lp__at_x_0_eq__eq__rp_, _ctx), _ctx); /*2978*/
      return kk_bool_unbox(_x_x413);
    }
    if (x_10109) { // tailcall
                   l1 = t1_0;
                   l2 = t2_0;
                   goto kk__tailcall;
    }
    {
      kk_function_drop(_implicit_fs__lp__at_x_0_eq__eq__rp_, _ctx);
      kk_std_core_types__list_drop(t2_0, _ctx);
      kk_std_core_types__list_drop(t1_0, _ctx);
      return false;
    }
  }
}
 
// monadic lift

kk_std_core_types__maybe kk_std_core_dash_extras_list_fs__mlift_lift_maximum_by_2803_10085(kk_std_core_types__maybe acc, kk_function_t cmp, kk_box_t h, kk_std_core_types__list t, kk_std_core_types__order _y_x10058, kk_context_t* _ctx) { /* forall<a,e> (acc : maybe<a>, cmp : (a, a) -> e order, h : a, t : list<a>, order) -> e maybe<a> */ 
  if (kk_std_core_types__is_Gt(_y_x10058, _ctx)) {
    kk_std_core_types__maybe_drop(acc, _ctx);
    kk_std_core_types__maybe _x_x416 = kk_std_core_types__new_Just(h, _ctx); /*maybe<91>*/
    return kk_std_core_dash_extras_list_fs__lift_maximum_by_2803(t, _x_x416, cmp, _ctx);
  }
  {
    kk_box_drop(h, _ctx);
    return kk_std_core_dash_extras_list_fs__lift_maximum_by_2803(t, acc, cmp, _ctx);
  }
}
 
// lifted local: list/maximum-by, loop


// lift anonymous function
struct kk_std_core_dash_extras_list_fs__lift_maximum_by_2803_fun422__t {
  struct kk_function_s _base;
  kk_std_core_types__maybe acc_0;
  kk_function_t cmp_0;
  kk_box_t h_0;
  kk_std_core_types__list t_0;
};
static kk_box_t kk_std_core_dash_extras_list_fs__lift_maximum_by_2803_fun422(kk_function_t _fself, kk_box_t _b_x170, kk_context_t* _ctx);
static kk_function_t kk_std_core_dash_extras_list_fs__new_lift_maximum_by_2803_fun422(kk_std_core_types__maybe acc_0, kk_function_t cmp_0, kk_box_t h_0, kk_std_core_types__list t_0, kk_context_t* _ctx) {
  struct kk_std_core_dash_extras_list_fs__lift_maximum_by_2803_fun422__t* _self = kk_function_alloc_as(struct kk_std_core_dash_extras_list_fs__lift_maximum_by_2803_fun422__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_dash_extras_list_fs__lift_maximum_by_2803_fun422, kk_context());
  _self->acc_0 = acc_0;
  _self->cmp_0 = cmp_0;
  _self->h_0 = h_0;
  _self->t_0 = t_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_dash_extras_list_fs__lift_maximum_by_2803_fun422(kk_function_t _fself, kk_box_t _b_x170, kk_context_t* _ctx) {
  struct kk_std_core_dash_extras_list_fs__lift_maximum_by_2803_fun422__t* _self = kk_function_as(struct kk_std_core_dash_extras_list_fs__lift_maximum_by_2803_fun422__t*, _fself, _ctx);
  kk_std_core_types__maybe acc_0 = _self->acc_0; /* maybe<1609> */
  kk_function_t cmp_0 = _self->cmp_0; /* (1609, 1609) -> 1610 order */
  kk_box_t h_0 = _self->h_0; /* 1609 */
  kk_std_core_types__list t_0 = _self->t_0; /* list<1609> */
  kk_drop_match(_self, {kk_std_core_types__maybe_dup(acc_0, _ctx);kk_function_dup(cmp_0, _ctx);kk_box_dup(h_0, _ctx);kk_std_core_types__list_dup(t_0, _ctx);}, {}, _ctx)
  kk_std_core_types__order _y_x10058_0_172 = kk_std_core_types__order_unbox(_b_x170, KK_OWNED, _ctx); /*order*/;
  kk_std_core_types__maybe _x_x423 = kk_std_core_dash_extras_list_fs__mlift_lift_maximum_by_2803_10085(acc_0, cmp_0, h_0, t_0, _y_x10058_0_172, _ctx); /*maybe<1609>*/
  return kk_std_core_types__maybe_box(_x_x423, _ctx);
}

kk_std_core_types__maybe kk_std_core_dash_extras_list_fs__lift_maximum_by_2803(kk_std_core_types__list l, kk_std_core_types__maybe acc_0, kk_function_t cmp_0, kk_context_t* _ctx) { /* forall<a,e> (l : list<a>, acc : maybe<a>, cmp : (a, a) -> e order) -> e maybe<a> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Nil(l, _ctx)) {
    kk_function_drop(cmp_0, _ctx);
    return acc_0;
  }
  {
    struct kk_std_core_types_Cons* _con_x417 = kk_std_core_types__as_Cons(l, _ctx);
    kk_box_t h_0 = _con_x417->head;
    kk_std_core_types__list t_0 = _con_x417->tail;
    if kk_likely(kk_datatype_ptr_is_unique(l, _ctx)) {
      kk_datatype_ptr_free(l, _ctx);
    }
    else {
      kk_box_dup(h_0, _ctx);
      kk_std_core_types__list_dup(t_0, _ctx);
      kk_datatype_ptr_decref(l, _ctx);
    }
    if (kk_std_core_types__is_Nothing(acc_0, _ctx)) { // tailcall
                                                      kk_std_core_types__maybe _x_x418 = kk_std_core_types__new_Just(h_0, _ctx); /*maybe<91>*/
                                                      l = t_0;
                                                      acc_0 = _x_x418;
                                                      goto kk__tailcall;
    }
    {
      kk_box_t max = acc_0._cons.Just.value;
      kk_box_dup(max, _ctx);
      kk_std_core_types__order x_10112;
      kk_function_t _x_x420 = kk_function_dup(cmp_0, _ctx); /*(1609, 1609) -> 1610 order*/
      kk_box_t _x_x419 = kk_box_dup(h_0, _ctx); /*1609*/
      x_10112 = kk_function_call(kk_std_core_types__order, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x420, (_x_x420, _x_x419, max, _ctx), _ctx); /*order*/
      if (kk_yielding(kk_context())) {
        kk_box_t _x_x421 = kk_std_core_hnd_yield_extend(kk_std_core_dash_extras_list_fs__new_lift_maximum_by_2803_fun422(acc_0, cmp_0, h_0, t_0, _ctx), _ctx); /*2978*/
        return kk_std_core_types__maybe_unbox(_x_x421, KK_OWNED, _ctx);
      }
      if (kk_std_core_types__is_Gt(x_10112, _ctx)) {
        kk_std_core_types__maybe_drop(acc_0, _ctx);
        { // tailcall
          kk_std_core_types__maybe _x_x424 = kk_std_core_types__new_Just(h_0, _ctx); /*maybe<91>*/
          l = t_0;
          acc_0 = _x_x424;
          goto kk__tailcall;
        }
      }
      {
        kk_box_drop(h_0, _ctx);
        { // tailcall
          l = t_0;
          goto kk__tailcall;
        }
      }
    }
  }
}


// lift anonymous function
struct kk_std_core_dash_extras_to_upper_fun429__t {
  struct kk_function_s _base;
};
static kk_std_core_types__maybe kk_std_core_dash_extras_to_upper_fun429(kk_function_t _fself, kk_char_t _b_x173, kk_context_t* _ctx);
static kk_function_t kk_std_core_dash_extras_new_to_upper_fun429(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_core_dash_extras_to_upper_fun429, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_std_core_types__maybe kk_std_core_dash_extras_to_upper_fun429(kk_function_t _fself, kk_char_t _b_x173, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_core_types__new_Just(kk_char_box(_b_x173, _ctx), _ctx);
}

kk_char_t kk_std_core_dash_extras_to_upper(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> char */ 
  kk_string_t s_10005;
  kk_string_t _x_x425 = kk_std_core_string_char_fs_string(c, _ctx); /*string*/
  s_10005 = kk_std_core_string_to_upper(_x_x425, _ctx); /*string*/
  kk_std_core_types__maybe m_10003;
  kk_std_core_sslice__sslice _x_x426;
  kk_string_t _x_x427 = kk_string_dup(s_10005, _ctx); /*string*/
  kk_integer_t _x_x428 = kk_string_len_int(s_10005,kk_context()); /*int*/
  _x_x426 = kk_std_core_sslice__new_Sslice(_x_x427, kk_integer_from_small(0), _x_x428, _ctx); /*sslice/sslice*/
  m_10003 = kk_std_core_sslice_foreach_while(_x_x426, kk_std_core_dash_extras_new_to_upper_fun429(_ctx), _ctx); /*maybe<char>*/
  if (kk_std_core_types__is_Nothing(m_10003, _ctx)) {
    return c;
  }
  {
    kk_box_t _box_x174 = m_10003._cons.Just.value;
    kk_char_t x = kk_char_unbox(_box_x174, KK_BORROWED, _ctx);
    kk_std_core_types__maybe_drop(m_10003, _ctx);
    return x;
  }
}


// lift anonymous function
struct kk_std_core_dash_extras_to_lower_fun434__t {
  struct kk_function_s _base;
};
static kk_std_core_types__maybe kk_std_core_dash_extras_to_lower_fun434(kk_function_t _fself, kk_char_t _b_x175, kk_context_t* _ctx);
static kk_function_t kk_std_core_dash_extras_new_to_lower_fun434(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_core_dash_extras_to_lower_fun434, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_std_core_types__maybe kk_std_core_dash_extras_to_lower_fun434(kk_function_t _fself, kk_char_t _b_x175, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_core_types__new_Just(kk_char_box(_b_x175, _ctx), _ctx);
}

kk_char_t kk_std_core_dash_extras_to_lower(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> char */ 
  kk_string_t s_10008;
  kk_string_t _x_x430 = kk_std_core_string_char_fs_string(c, _ctx); /*string*/
  s_10008 = kk_std_core_string_to_lower(_x_x430, _ctx); /*string*/
  kk_std_core_types__maybe m_10006;
  kk_std_core_sslice__sslice _x_x431;
  kk_string_t _x_x432 = kk_string_dup(s_10008, _ctx); /*string*/
  kk_integer_t _x_x433 = kk_string_len_int(s_10008,kk_context()); /*int*/
  _x_x431 = kk_std_core_sslice__new_Sslice(_x_x432, kk_integer_from_small(0), _x_x433, _ctx); /*sslice/sslice*/
  m_10006 = kk_std_core_sslice_foreach_while(_x_x431, kk_std_core_dash_extras_new_to_lower_fun434(_ctx), _ctx); /*maybe<char>*/
  if (kk_std_core_types__is_Nothing(m_10006, _ctx)) {
    return c;
  }
  {
    kk_box_t _box_x176 = m_10006._cons.Just.value;
    kk_char_t x = kk_char_unbox(_box_x176, KK_BORROWED, _ctx);
    kk_std_core_types__maybe_drop(m_10006, _ctx);
    return x;
  }
}
 
// lifted local: split-by, loop

kk_std_core_types__list kk_std_core_dash_extras__lift_split_by_2804(kk_function_t pred, kk_std_core_sslice__sslice sl, kk_integer_t numchars, kk_std_core_types__cctx acc, kk_context_t* _ctx) { /* (pred : (char) -> bool, sl : sslice/sslice, numchars : int, acc : ctx<list<string>>) -> list<string> */ 
  kk__tailcall: ;
  kk_std_core_types__maybe _match_x229 = kk_std_core_sslice_next(sl, _ctx); /*maybe<(char, sslice/sslice)>*/;
  if (kk_std_core_types__is_Nothing(_match_x229, _ctx)) {
    kk_function_drop(pred, _ctx);
    kk_integer_drop(numchars, _ctx);
    kk_box_t _x_x435 = kk_cctx_apply(acc,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*359*/
    return kk_std_core_types__list_unbox(_x_x435, KK_OWNED, _ctx);
  }
  {
    kk_box_t _box_x179 = _match_x229._cons.Just.value;
    kk_std_core_types__tuple2 _pat_1 = kk_std_core_types__tuple2_unbox(_box_x179, KK_BORROWED, _ctx);
    kk_box_t _box_x180 = _pat_1.fst;
    kk_box_t _box_x181 = _pat_1.snd;
    kk_std_core_sslice__sslice sl_sq_ = kk_std_core_sslice__sslice_unbox(_box_x181, KK_BORROWED, _ctx);
    kk_char_t c = kk_char_unbox(_box_x180, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(sl_sq_, _ctx);
    kk_std_core_types__maybe_drop(_match_x229, _ctx);
    bool _match_x230;
    kk_function_t _x_x436 = kk_function_dup(pred, _ctx); /*(char) -> bool*/
    _match_x230 = kk_function_call(bool, (kk_function_t, kk_char_t, kk_context_t*), _x_x436, (_x_x436, c, _ctx), _ctx); /*bool*/
    if (_match_x230) {
      kk_std_core_sslice__sslice slice_0_10009;
      kk_integer_t _brw_x232;
      kk_integer_t _x_x437 = kk_integer_dup(numchars, _ctx); /*int*/
      _brw_x232 = kk_integer_sub((kk_integer_from_small(0)),_x_x437,kk_context()); /*int*/
      kk_std_core_sslice__sslice _brw_x233;
      kk_std_core_sslice__sslice _x_x438 = kk_std_core_sslice__sslice_dup(sl_sq_, _ctx); /*sslice/sslice*/
      _brw_x233 = kk_std_core_sslice_advance(_x_x438, _brw_x232, _ctx); /*sslice/sslice*/
      kk_integer_drop(_brw_x232, _ctx);
      slice_0_10009 = _brw_x233; /*sslice/sslice*/
      kk_string_t _b_x182_184;
      kk_std_core_sslice__sslice _x_x439;
      kk_std_core_sslice__sslice _brw_x231;
      kk_std_core_sslice__sslice _x_x440;
      kk_string_t _x_x441;
      {
        kk_string_t _x = slice_0_10009.str;
        kk_string_dup(_x, _ctx);
        _x_x441 = _x; /*string*/
      }
      kk_integer_t _x_x442;
      {
        kk_integer_t _x_0 = slice_0_10009.start;
        kk_integer_dup(_x_0, _ctx);
        kk_std_core_sslice__sslice_drop(slice_0_10009, _ctx);
        _x_x442 = _x_0; /*int*/
      }
      _x_x440 = kk_std_core_sslice__new_Sslice(_x_x441, _x_x442, kk_integer_from_small(0), _ctx); /*sslice/sslice*/
      _brw_x231 = kk_std_core_sslice_extend(_x_x440, numchars, _ctx); /*sslice/sslice*/
      kk_integer_drop(numchars, _ctx);
      _x_x439 = _brw_x231; /*sslice/sslice*/
      _b_x182_184 = kk_std_core_sslice_string(_x_x439, _ctx); /*string*/
      kk_std_core_types__list _b_x183_185 = kk_datatype_null(); /*list<string>*/;
      kk_std_core_types__list _cctx_x1775 = kk_std_core_types__new_Cons(kk_reuse_null, kk_field_index_of(struct kk_std_core_types_Cons, tail), kk_string_box(_b_x182_184), _b_x183_185, _ctx); /*list<string>*/;
      kk_field_addr_t _cctx_x1776 = kk_field_addr_create(&kk_std_core_types__as_Cons(_cctx_x1775, _ctx)->tail, _ctx); /*@field-addr<list<string>>*/;
      kk_std_core_types__cctx acc_0_10014;
      kk_std_core_types__cctx _x_x443 = kk_cctx_create((kk_std_core_types__list_box(_cctx_x1775, _ctx)),_cctx_x1776,kk_context()); /*cctx<0,1>*/
      acc_0_10014 = kk_cctx_compose(acc,_x_x443,kk_context()); /*ctx<list<string>>*/
      { // tailcall
        kk_integer_t _x_x444 = kk_integer_from_small(0); /*int*/
        sl = sl_sq_;
        numchars = _x_x444;
        acc = acc_0_10014;
        goto kk__tailcall;
      }
    }
    {
      kk_integer_t numchars_1_10016 = kk_integer_add_small_const(numchars, 1, _ctx); /*int*/;
      { // tailcall
        sl = sl_sq_;
        numchars = numchars_1_10016;
        goto kk__tailcall;
      }
    }
  }
}
 
// runtime tag for the effect `:find`

kk_std_core_hnd__htag kk_std_core_dash_extras__tag_find;
 
// handler for the effect `:find`

kk_box_t kk_std_core_dash_extras__handle_find(kk_std_core_dash_extras__find hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,b,e,c> (hnd : find<a,e,c>, ret : (res : b) -> e c, action : () -> <find<a>|e> b) -> e c */ 
  kk_std_core_hnd__htag _x_x449 = kk_std_core_hnd__htag_dup(kk_std_core_dash_extras__tag_find, _ctx); /*forall<a> hnd/htag<std/core-extras/find<a>>*/
  return kk_std_core_hnd__hhandle(_x_x449, kk_std_core_dash_extras__find_box(hnd, _ctx), ret, action, _ctx);
}


// lift anonymous function
struct kk_std_core_dash_extras_find_fun455__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_core_dash_extras_find_fun455(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ___wildcard_x638__16, kk_box_t x, kk_context_t* _ctx);
static kk_function_t kk_std_core_dash_extras_new_find_fun455(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_core_dash_extras_find_fun455, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_core_dash_extras_find_fun456__t {
  struct kk_function_s _base;
  kk_box_t x;
};
static kk_box_t kk_std_core_dash_extras_find_fun456(kk_function_t _fself, kk_function_t ___wildcard_x638__45, kk_context_t* _ctx);
static kk_function_t kk_std_core_dash_extras_new_find_fun456(kk_box_t x, kk_context_t* _ctx) {
  struct kk_std_core_dash_extras_find_fun456__t* _self = kk_function_alloc_as(struct kk_std_core_dash_extras_find_fun456__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_dash_extras_find_fun456, kk_context());
  _self->x = x;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_dash_extras_find_fun456(kk_function_t _fself, kk_function_t ___wildcard_x638__45, kk_context_t* _ctx) {
  struct kk_std_core_dash_extras_find_fun456__t* _self = kk_function_as(struct kk_std_core_dash_extras_find_fun456__t*, _fself, _ctx);
  kk_box_t x = _self->x; /* 2075 */
  kk_drop_match(_self, {kk_box_dup(x, _ctx);}, {}, _ctx)
  kk_function_drop(___wildcard_x638__45, _ctx);
  return x;
}
static kk_box_t kk_std_core_dash_extras_find_fun455(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ___wildcard_x638__16, kk_box_t x, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_datatype_ptr_dropn(___wildcard_x638__16, (KK_I32(3)), _ctx);
  return kk_std_core_hnd_yield_to_final(m, kk_std_core_dash_extras_new_find_fun456(x, _ctx), _ctx);
}


// lift anonymous function
struct kk_std_core_dash_extras_find_fun457__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_core_dash_extras_find_fun457(kk_function_t _fself, kk_box_t _x, kk_context_t* _ctx);
static kk_function_t kk_std_core_dash_extras_new_find_fun457(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_core_dash_extras_find_fun457, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_core_dash_extras_find_fun457(kk_function_t _fself, kk_box_t _x, kk_context_t* _ctx) {
  kk_unused(_fself);
  return _x;
}

kk_box_t kk_std_core_dash_extras_find(kk_function_t f, kk_context_t* _ctx) { /* forall<a,e> (f : () -> <find<a>|e> a) -> e a */ 
  kk_std_core_dash_extras__find _x_x453;
  kk_std_core_hnd__clause1 _x_x454 = kk_std_core_hnd__new_Clause1(kk_std_core_dash_extras_new_find_fun455(_ctx), _ctx); /*hnd/clause1<45,46,47,48,49>*/
  _x_x453 = kk_std_core_dash_extras__new_Hnd_find(kk_reuse_null, 0, kk_integer_from_small(0), _x_x454, _ctx); /*std/core-extras/find<10,11,12>*/
  return kk_std_core_dash_extras__handle_find(_x_x453, kk_std_core_dash_extras_new_find_fun457(_ctx), f, _ctx);
}

kk_box_t kk_std_core_dash_extras_expect(kk_std_core_types__maybe m, kk_std_core_types__optional msg, kk_string_t _implicit_fs_kk_file_line, kk_context_t* _ctx) { /* forall<a> (m : maybe<a>, msg : ? string, ?kk-file-line : string) -> exn a */ 
  if (kk_std_core_types__is_Just(m, _ctx)) {
    kk_box_t a = m._cons.Just.value;
    kk_string_drop(_implicit_fs_kk_file_line, _ctx);
    kk_std_core_types__optional_drop(msg, _ctx);
    return a;
  }
  {
    kk_string_t _x_x458;
    kk_string_t _x_x459;
    kk_string_t _x_x460;
    kk_define_string_literal(, _s_x461, 15, " expected Just ", _ctx)
    _x_x460 = kk_string_dup(_s_x461, _ctx); /*string*/
    kk_string_t _x_x462;
    if (kk_std_core_types__is_Optional(msg, _ctx)) {
      kk_box_t _box_x208 = msg._cons._Optional.value;
      kk_string_t _uniq_msg_2108 = kk_string_unbox(_box_x208);
      kk_string_dup(_uniq_msg_2108, _ctx);
      kk_std_core_types__optional_drop(msg, _ctx);
      _x_x462 = _uniq_msg_2108; /*string*/
    }
    else {
      kk_std_core_types__optional_drop(msg, _ctx);
      _x_x462 = kk_string_empty(); /*string*/
    }
    _x_x459 = kk_std_core_types__lp__plus__plus__rp_(_x_x460, _x_x462, _ctx); /*string*/
    _x_x458 = kk_std_core_types__lp__plus__plus__rp_(_implicit_fs_kk_file_line, _x_x459, _ctx); /*string*/
    return kk_std_core_exn_throw(_x_x458, kk_std_core_types__new_None(_ctx), _ctx);
  }
}
 
// lifted local: vector-init-list, assigns

kk_unit_t kk_std_core_dash_extras__lift_vector_init_list_2805(kk_vector_t v, kk_std_core_types__list xs_sq_, kk_context_t* _ctx) { /* forall<a> (v : vector<a>, xs' : list<(int, a)>) -> () */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(xs_sq_, _ctx)) {
    struct kk_std_core_types_Cons* _con_x467 = kk_std_core_types__as_Cons(xs_sq_, _ctx);
    kk_box_t _box_x209 = _con_x467->head;
    kk_std_core_types__tuple2 _pat_0 = kk_std_core_types__tuple2_unbox(_box_x209, KK_BORROWED, _ctx);
    kk_box_t _box_x210 = _pat_0.fst;
    kk_std_core_types__list xss = _con_x467->tail;
    kk_box_t x = _pat_0.snd;
    kk_integer_t i = kk_integer_unbox(_box_x210, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(xs_sq_, _ctx)) {
      kk_integer_dup(i, _ctx);
      kk_box_dup(x, _ctx);
      kk_box_drop(_box_x209, _ctx);
      kk_datatype_ptr_free(xs_sq_, _ctx);
    }
    else {
      kk_integer_dup(i, _ctx);
      kk_box_dup(x, _ctx);
      kk_std_core_types__list_dup(xss, _ctx);
      kk_datatype_ptr_decref(xs_sq_, _ctx);
    }
    kk_unit_t __ = kk_Unit;
    kk_vector_t _x_x468 = kk_vector_dup(v, _ctx); /*vector<2251>*/
    kk_vector_unsafe_assign(_x_x468,(kk_std_core_int_ssize__t(i, _ctx)),x,kk_context());
    { // tailcall
      xs_sq_ = xss;
      goto kk__tailcall;
    }
  }
  {
    kk_vector_drop(v, _ctx);
    kk_Unit; return kk_Unit;
  }
}
 
// This function takes a vector `v` and a position to stop at `stop`
// If you supply a `stop` larger than the length, then the length of the vector is used instead.
// This function shouldn't be called directly unless you know exactly what you are doing.

kk_unit_t kk_std_core_dash_extras_unsafe_vector_clear(kk_vector_t v, kk_ssize_t stop, kk_context_t* _ctx) { /* forall<a> (v : vector<a>, stop : ssize_t) -> () */ 
  kk_vector_clear(v,stop,kk_context()); return kk_Unit;
}
 
// This function takes a vector `v` and a `position` to clear at.
// This is all done without a bounds check, so make sure to get it right.
// This function shouldn't be called directly unless you know exactly what you are doing.

kk_unit_t kk_std_core_dash_extras_unsafe_vector_clear_at(kk_vector_t v, kk_ssize_t position, kk_context_t* _ctx) { /* forall<a> (v : vector<a>, position : ssize_t) -> () */ 
  kk_vector_clear_at(v,position,kk_context()); return kk_Unit;
}
 
// Set the element at position `index` in vector `v` without bounds check!

kk_vector_t kk_std_core_dash_extras_unsafe_set(kk_vector_t v, kk_integer_t index, kk_box_t value, kk_context_t* _ctx) { /* forall<a> (v : vector<a>, index : int, value : a) -> vector<a> */ 
  bool _match_x227 = kk_datatype_is_unique(v, kk_context()); /*bool*/;
  if (_match_x227) {
    kk_unit_t __ = kk_Unit;
    kk_vector_t _x_x472 = kk_vector_dup(v, _ctx); /*vector<2425>*/
    kk_ssize_t _x_x473;
    kk_integer_t _x_x474 = kk_integer_dup(index, _ctx); /*int*/
    _x_x473 = kk_std_core_int_ssize__t(_x_x474, _ctx); /*ssize_t*/
    kk_vector_unsafe_assign(_x_x472,_x_x473,value,kk_context());
    return v;
  }
  {
    kk_vector_t v_sq_ = kk_vector_copy(v,kk_context()); /*vector<2425>*/;
    kk_unit_t ___0 = kk_Unit;
    kk_vector_t _x_x475 = kk_vector_dup(v_sq_, _ctx); /*vector<2425>*/
    kk_ssize_t _x_x476;
    kk_integer_t _x_x477 = kk_integer_dup(index, _ctx); /*int*/
    _x_x476 = kk_std_core_int_ssize__t(_x_x477, _ctx); /*ssize_t*/
    kk_vector_unsafe_assign(_x_x475,_x_x476,value,kk_context());
    return v_sq_;
  }
}

kk_vector_t kk_std_core_dash_extras_a_fs_unsafe_swap(kk_vector_t v, kk_integer_t idx1, kk_integer_t idx2, kk_context_t* _ctx) { /* forall<a> (v : vector<a>, idx1 : int, idx2 : int) -> vector<a> */ 
  bool _match_x222 = kk_datatype_is_unique(v, kk_context()); /*bool*/;
  if (_match_x222) {
    kk_box_t item1;
    kk_ssize_t _own_x226;
    kk_integer_t _x_x478 = kk_integer_dup(idx1, _ctx); /*int*/
    _own_x226 = kk_std_core_int_ssize__t(_x_x478, _ctx); /*ssize_t*/
    item1 = kk_vector_at_borrow(v,_own_x226,kk_context()); /*2544*/
    kk_unit_t __ = kk_Unit;
    kk_vector_t _x_x479 = kk_vector_dup(v, _ctx); /*vector<2544>*/
    kk_ssize_t _x_x480;
    kk_integer_t _x_x481 = kk_integer_dup(idx1, _ctx); /*int*/
    _x_x480 = kk_std_core_int_ssize__t(_x_x481, _ctx); /*ssize_t*/
    kk_box_t _x_x482;
    kk_ssize_t _own_x225;
    kk_integer_t _x_x483 = kk_integer_dup(idx2, _ctx); /*int*/
    _own_x225 = kk_std_core_int_ssize__t(_x_x483, _ctx); /*ssize_t*/
    _x_x482 = kk_vector_at_borrow(v,_own_x225,kk_context()); /*62*/
    kk_vector_unsafe_assign(_x_x479,_x_x480,_x_x482,kk_context());
    kk_unit_t ___0 = kk_Unit;
    kk_vector_t _x_x484 = kk_vector_dup(v, _ctx); /*vector<2544>*/
    kk_ssize_t _x_x485;
    kk_integer_t _x_x486 = kk_integer_dup(idx2, _ctx); /*int*/
    _x_x485 = kk_std_core_int_ssize__t(_x_x486, _ctx); /*ssize_t*/
    kk_vector_unsafe_assign(_x_x484,_x_x485,item1,kk_context());
    return v;
  }
  {
    kk_vector_t v_sq_ = kk_vector_copy(v,kk_context()); /*vector<2544>*/;
    kk_box_t item1_0;
    kk_ssize_t _own_x224;
    kk_integer_t _x_x487 = kk_integer_dup(idx1, _ctx); /*int*/
    _own_x224 = kk_std_core_int_ssize__t(_x_x487, _ctx); /*ssize_t*/
    item1_0 = kk_vector_at_borrow(v_sq_,_own_x224,kk_context()); /*2544*/
    kk_unit_t ___1 = kk_Unit;
    kk_vector_t _x_x488 = kk_vector_dup(v_sq_, _ctx); /*vector<2544>*/
    kk_ssize_t _x_x489;
    kk_integer_t _x_x490 = kk_integer_dup(idx1, _ctx); /*int*/
    _x_x489 = kk_std_core_int_ssize__t(_x_x490, _ctx); /*ssize_t*/
    kk_box_t _x_x491;
    kk_ssize_t _own_x223;
    kk_integer_t _x_x492 = kk_integer_dup(idx2, _ctx); /*int*/
    _own_x223 = kk_std_core_int_ssize__t(_x_x492, _ctx); /*ssize_t*/
    _x_x491 = kk_vector_at_borrow(v_sq_,_own_x223,kk_context()); /*62*/
    kk_vector_unsafe_assign(_x_x488,_x_x489,_x_x491,kk_context());
    kk_unit_t ___2 = kk_Unit;
    kk_vector_t _x_x493 = kk_vector_dup(v_sq_, _ctx); /*vector<2544>*/
    kk_ssize_t _x_x494;
    kk_integer_t _x_x495 = kk_integer_dup(idx2, _ctx); /*int*/
    _x_x494 = kk_std_core_int_ssize__t(_x_x495, _ctx); /*ssize_t*/
    kk_vector_unsafe_assign(_x_x493,_x_x494,item1_0,kk_context());
    return v_sq_;
  }
}

kk_ssize_t kk_std_core_dash_extras_ssize__t_fs_incr(kk_ssize_t i, kk_context_t* _ctx) { /* (i : ssize_t) -> ssize_t */ 
  return (i + 1);
}
 
// monadic lift

kk_unit_t kk_std_core_dash_extras__mlift_lift_forz_2806_10086(kk_function_t action, kk_ssize_t i, kk_ssize_t n, kk_unit_t wild__, kk_context_t* _ctx) { /* forall<e> (action : (ssize_t) -> e (), i : ssize_t, n : ssize_t, wild_ : ()) -> e () */ 
  kk_ssize_t i_0_10023 = kk_std_core_dash_extras_ssize__t_fs_incr(i, _ctx); /*ssize_t*/;
  kk_std_core_dash_extras__lift_forz_2806(action, n, i_0_10023, _ctx); return kk_Unit;
}
 
// lifted local: forz, rep


// lift anonymous function
struct kk_std_core_dash_extras__lift_forz_2806_fun498__t {
  struct kk_function_s _base;
  kk_function_t action_0;
  kk_ssize_t i_0;
  kk_ssize_t n_0;
};
static kk_box_t kk_std_core_dash_extras__lift_forz_2806_fun498(kk_function_t _fself, kk_box_t _b_x212, kk_context_t* _ctx);
static kk_function_t kk_std_core_dash_extras__new_lift_forz_2806_fun498(kk_function_t action_0, kk_ssize_t i_0, kk_ssize_t n_0, kk_context_t* _ctx) {
  struct kk_std_core_dash_extras__lift_forz_2806_fun498__t* _self = kk_function_alloc_as(struct kk_std_core_dash_extras__lift_forz_2806_fun498__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_dash_extras__lift_forz_2806_fun498, kk_context());
  _self->action_0 = action_0;
  _self->i_0 = i_0;
  _self->n_0 = n_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_dash_extras__lift_forz_2806_fun498(kk_function_t _fself, kk_box_t _b_x212, kk_context_t* _ctx) {
  struct kk_std_core_dash_extras__lift_forz_2806_fun498__t* _self = kk_function_as(struct kk_std_core_dash_extras__lift_forz_2806_fun498__t*, _fself, _ctx);
  kk_function_t action_0 = _self->action_0; /* (ssize_t) -> 2598 () */
  kk_ssize_t i_0 = _self->i_0; /* ssize_t */
  kk_ssize_t n_0 = _self->n_0; /* ssize_t */
  kk_drop_match(_self, {kk_function_dup(action_0, _ctx);kk_skip_dup(i_0, _ctx);kk_skip_dup(n_0, _ctx);}, {}, _ctx)
  kk_unit_t wild___0_214 = kk_Unit;
  kk_unit_unbox(_b_x212);
  kk_unit_t _x_x499 = kk_Unit;
  kk_std_core_dash_extras__mlift_lift_forz_2806_10086(action_0, i_0, n_0, wild___0_214, _ctx);
  return kk_unit_box(_x_x499);
}

kk_unit_t kk_std_core_dash_extras__lift_forz_2806(kk_function_t action_0, kk_ssize_t n_0, kk_ssize_t i_0, kk_context_t* _ctx) { /* forall<e> (action : (ssize_t) -> e (), n : ssize_t, i : ssize_t) -> e () */ 
  kk__tailcall: ;
  bool _match_x220 = (i_0 < n_0); /*bool*/;
  if (_match_x220) {
    kk_unit_t x_10120 = kk_Unit;
    kk_function_t _x_x496 = kk_function_dup(action_0, _ctx); /*(ssize_t) -> 2598 ()*/
    kk_function_call(kk_unit_t, (kk_function_t, kk_ssize_t, kk_context_t*), _x_x496, (_x_x496, i_0, _ctx), _ctx);
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x497 = kk_std_core_hnd_yield_extend(kk_std_core_dash_extras__new_lift_forz_2806_fun498(action_0, i_0, n_0, _ctx), _ctx); /*2978*/
      kk_unit_unbox(_x_x497); return kk_Unit;
    }
    {
      kk_ssize_t i_0_10023_0 = kk_std_core_dash_extras_ssize__t_fs_incr(i_0, _ctx); /*ssize_t*/;
      { // tailcall
        i_0 = i_0_10023_0;
        goto kk__tailcall;
      }
    }
  }
  {
    kk_function_drop(action_0, _ctx);
    kk_Unit; return kk_Unit;
  }
}


// lift anonymous function
struct kk_std_core_dash_extras_foreach_indexedz_fun500__t {
  struct kk_function_s _base;
  kk_function_t f;
  kk_vector_t v;
};
static kk_unit_t kk_std_core_dash_extras_foreach_indexedz_fun500(kk_function_t _fself, kk_ssize_t i_0, kk_context_t* _ctx);
static kk_function_t kk_std_core_dash_extras_new_foreach_indexedz_fun500(kk_function_t f, kk_vector_t v, kk_context_t* _ctx) {
  struct kk_std_core_dash_extras_foreach_indexedz_fun500__t* _self = kk_function_alloc_as(struct kk_std_core_dash_extras_foreach_indexedz_fun500__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_dash_extras_foreach_indexedz_fun500, kk_context());
  _self->f = f;
  _self->v = v;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_std_core_dash_extras_foreach_indexedz_fun500(kk_function_t _fself, kk_ssize_t i_0, kk_context_t* _ctx) {
  struct kk_std_core_dash_extras_foreach_indexedz_fun500__t* _self = kk_function_as(struct kk_std_core_dash_extras_foreach_indexedz_fun500__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (ssize_t, 2631) -> 2632 () */
  kk_vector_t v = _self->v; /* vector<2631> */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);kk_vector_dup(v, _ctx);}, {}, _ctx)
  kk_box_t _x_x501;
  kk_box_t _brw_x219 = kk_vector_at_borrow(v,i_0,kk_context()); /*62*/;
  kk_vector_drop(v, _ctx);
  _x_x501 = _brw_x219; /*62*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_ssize_t, kk_box_t, kk_context_t*), f, (f, i_0, _x_x501, _ctx), _ctx); return kk_Unit;
}

kk_unit_t kk_std_core_dash_extras_foreach_indexedz(kk_vector_t v, kk_function_t f, kk_context_t* _ctx) { /* forall<a,e> (v : vector<a>, f : (ssize_t, a) -> e ()) -> e () */ 
  kk_ssize_t n_10024 = kk_vector_len_borrow(v,kk_context()); /*ssize_t*/;
  kk_ssize_t i = (KK_IZ(0)); /*ssize_t*/;
  kk_std_core_dash_extras__lift_forz_2806(kk_std_core_dash_extras_new_foreach_indexedz_fun500(f, v, _ctx), n_10024, i, _ctx); return kk_Unit;
}
 
// Apply a total function `f` to each element in a vector `v`
// Since the vector consists of boxed values we can ignore type incompatibilities
// However, we also cannot allow exception effects in f, because then the vector would be left in an inconsistent state which would be observable and unreversable
// We could allow div, but then this is always div even when f is not div


// lift anonymous function
struct kk_std_core_dash_extras_unique_fs_map_fun503__t {
  struct kk_function_s _base;
  kk_function_t f;
  kk_vector_t v;
};
static kk_unit_t kk_std_core_dash_extras_unique_fs_map_fun503(kk_function_t _fself, kk_ssize_t i_0, kk_context_t* _ctx);
static kk_function_t kk_std_core_dash_extras_unique_fs_new_map_fun503(kk_function_t f, kk_vector_t v, kk_context_t* _ctx) {
  struct kk_std_core_dash_extras_unique_fs_map_fun503__t* _self = kk_function_alloc_as(struct kk_std_core_dash_extras_unique_fs_map_fun503__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_dash_extras_unique_fs_map_fun503, kk_context());
  _self->f = f;
  _self->v = v;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_std_core_dash_extras_unique_fs_map_fun503(kk_function_t _fself, kk_ssize_t i_0, kk_context_t* _ctx) {
  struct kk_std_core_dash_extras_unique_fs_map_fun503__t* _self = kk_function_as(struct kk_std_core_dash_extras_unique_fs_map_fun503__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (2738) -> 2739 */
  kk_vector_t v = _self->v; /* vector<2738> */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);kk_vector_dup(v, _ctx);}, {}, _ctx)
  kk_box_t x_10032 = kk_vector_at_borrow(v,i_0,kk_context()); /*2738*/;
  kk_box_t _x_x504 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), f, (f, x_10032, _ctx), _ctx); /*2739*/
  kk_vector_unsafe_assign(v,i_0,_x_x504,kk_context()); return kk_Unit;
}


// lift anonymous function
struct kk_std_core_dash_extras_unique_fs_map_fun509__t {
  struct kk_function_s _base;
  kk_function_t f;
  kk_vector_t v;
  kk_vector_t w;
};
static kk_unit_t kk_std_core_dash_extras_unique_fs_map_fun509(kk_function_t _fself, kk_ssize_t i_0_0, kk_context_t* _ctx);
static kk_function_t kk_std_core_dash_extras_unique_fs_new_map_fun509(kk_function_t f, kk_vector_t v, kk_vector_t w, kk_context_t* _ctx) {
  struct kk_std_core_dash_extras_unique_fs_map_fun509__t* _self = kk_function_alloc_as(struct kk_std_core_dash_extras_unique_fs_map_fun509__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_dash_extras_unique_fs_map_fun509, kk_context());
  _self->f = f;
  _self->v = v;
  _self->w = w;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_std_core_dash_extras_unique_fs_map_fun509(kk_function_t _fself, kk_ssize_t i_0_0, kk_context_t* _ctx) {
  struct kk_std_core_dash_extras_unique_fs_map_fun509__t* _self = kk_function_as(struct kk_std_core_dash_extras_unique_fs_map_fun509__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (2738) -> 2739 */
  kk_vector_t v = _self->v; /* vector<2738> */
  kk_vector_t w = _self->w; /* vector<2739> */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);kk_vector_dup(v, _ctx);kk_vector_dup(w, _ctx);}, {}, _ctx)
  kk_box_t x_0_10034;
  kk_box_t _brw_x218 = kk_vector_at_borrow(v,i_0_0,kk_context()); /*62*/;
  kk_vector_drop(v, _ctx);
  x_0_10034 = _brw_x218; /*2738*/
  kk_box_t _x_x510 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), f, (f, x_0_10034, _ctx), _ctx); /*2739*/
  kk_vector_unsafe_assign(w,i_0_0,_x_x510,kk_context()); return kk_Unit;
}

kk_vector_t kk_std_core_dash_extras_unique_fs_map(kk_vector_t v, kk_function_t f, kk_context_t* _ctx) { /* forall<a,b> (v : vector<a>, f : (a) -> b) -> vector<b> */ 
  bool _match_x217 = kk_datatype_is_unique(v, kk_context()); /*bool*/;
  if (_match_x217) {
    kk_ssize_t n_10024 = kk_vector_len_borrow(v,kk_context()); /*ssize_t*/;
    kk_ssize_t i = (KK_IZ(0)); /*ssize_t*/;
    kk_unit_t __ = kk_Unit;
    kk_function_t _x_x502;
    kk_vector_dup(v, _ctx);
    _x_x502 = kk_std_core_dash_extras_unique_fs_new_map_fun503(f, v, _ctx); /*(i@0 : ssize_t) -> ()*/
    kk_std_core_dash_extras__lift_forz_2806(_x_x502, n_10024, i, _ctx);
    return v;
  }
  {
    kk_vector_t w;
    kk_ssize_t _x_x505;
    kk_integer_t _x_x506;
    kk_ssize_t _x_x507 = kk_vector_len_borrow(v,kk_context()); /*ssize_t*/
    _x_x506 = kk_integer_from_ssize_t(_x_x507,kk_context()); /*int*/
    _x_x505 = kk_std_core_int_ssize__t(_x_x506, _ctx); /*ssize_t*/
    w = kk_vector_alloc(_x_x505,kk_box_null(),kk_context()); /*vector<2739>*/
    kk_ssize_t n_10024_0 = kk_vector_len_borrow(v,kk_context()); /*ssize_t*/;
    kk_ssize_t i_2 = (KK_IZ(0)); /*ssize_t*/;
    kk_unit_t ___0 = kk_Unit;
    kk_function_t _x_x508;
    kk_vector_dup(w, _ctx);
    _x_x508 = kk_std_core_dash_extras_unique_fs_new_map_fun509(f, v, w, _ctx); /*(i@0@0 : ssize_t) -> ()*/
    kk_std_core_dash_extras__lift_forz_2806(_x_x508, n_10024_0, i_2, _ctx);
    return w;
  }
}
 
// This variant mutates in-place

kk_unit_t kk_std_core_dash_extras_unit_fs_unsafe_swap(kk_vector_t v, kk_integer_t idx1, kk_integer_t idx2, kk_context_t* _ctx) { /* forall<a> (v : vector<a>, idx1 : int, idx2 : int) -> () */ 
  kk_box_t item1;
  kk_ssize_t _own_x216;
  kk_integer_t _x_x511 = kk_integer_dup(idx1, _ctx); /*int*/
  _own_x216 = kk_std_core_int_ssize__t(_x_x511, _ctx); /*ssize_t*/
  item1 = kk_vector_at_borrow(v,_own_x216,kk_context()); /*2797*/
  kk_unit_t __ = kk_Unit;
  kk_vector_t _x_x512 = kk_vector_dup(v, _ctx); /*vector<2797>*/
  kk_ssize_t _x_x513;
  kk_integer_t _x_x514 = kk_integer_dup(idx1, _ctx); /*int*/
  _x_x513 = kk_std_core_int_ssize__t(_x_x514, _ctx); /*ssize_t*/
  kk_box_t _x_x515;
  kk_ssize_t _own_x215;
  kk_integer_t _x_x516 = kk_integer_dup(idx2, _ctx); /*int*/
  _own_x215 = kk_std_core_int_ssize__t(_x_x516, _ctx); /*ssize_t*/
  _x_x515 = kk_vector_at_borrow(v,_own_x215,kk_context()); /*62*/
  kk_vector_unsafe_assign(_x_x512,_x_x513,_x_x515,kk_context());
  kk_ssize_t _x_x517;
  kk_integer_t _x_x518 = kk_integer_dup(idx2, _ctx); /*int*/
  _x_x517 = kk_std_core_int_ssize__t(_x_x518, _ctx); /*ssize_t*/
  kk_vector_unsafe_assign(v,_x_x517,item1,kk_context()); return kk_Unit;
}

// initialization
void kk_std_core_dash_extras__init(kk_context_t* _ctx){
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
  kk_std_core_undiv__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
  {
    kk_string_t _x_x447;
    kk_define_string_literal(, _s_x448, 16, "find@core-extras", _ctx)
    _x_x447 = kk_string_dup(_s_x448, _ctx); /*string*/
    kk_std_core_dash_extras__tag_find = kk_std_core_hnd__new_Htag(_x_x447, _ctx); /*forall<a> hnd/htag<std/core-extras/find<a>>*/
  }
}

// termination
void kk_std_core_dash_extras__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_core_hnd__htag_drop(kk_std_core_dash_extras__tag_find, _ctx);
  kk_std_core_undiv__done(_ctx);
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
