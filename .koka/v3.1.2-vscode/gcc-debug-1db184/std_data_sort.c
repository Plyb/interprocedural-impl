// Koka generated module: std/data/sort, koka version: 3.1.2, platform: 64-bit
#include "std_data_sort.h"
 
// monadic lift

kk_std_core_types__list kk_std_data_sort__mlift_sort_10017(kk_std_core_types__list _y_x10004, kk_box_t pivot, kk_std_core_types__list _y_x10005, kk_context_t* _ctx) { /* forall<a,e> (list<a>, pivot : a, list<a>) -> e list<a> */ 
  kk_std_core_types__list _x_x116 = kk_std_core_types__new_Cons(kk_reuse_null, 0, pivot, _y_x10005, _ctx); /*list<1024>*/
  return kk_std_core_list_append(_y_x10004, _x_x116, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_sort__mlift_sort_10018_fun118__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10004_0;
  kk_box_t pivot_0;
};
static kk_box_t kk_std_data_sort__mlift_sort_10018_fun118(kk_function_t _fself, kk_box_t _b_x1, kk_context_t* _ctx);
static kk_function_t kk_std_data_sort__new_mlift_sort_10018_fun118(kk_std_core_types__list _y_x10004_0, kk_box_t pivot_0, kk_context_t* _ctx) {
  struct kk_std_data_sort__mlift_sort_10018_fun118__t* _self = kk_function_alloc_as(struct kk_std_data_sort__mlift_sort_10018_fun118__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_sort__mlift_sort_10018_fun118, kk_context());
  _self->_y_x10004_0 = _y_x10004_0;
  _self->pivot_0 = pivot_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_sort__mlift_sort_10018_fun118(kk_function_t _fself, kk_box_t _b_x1, kk_context_t* _ctx) {
  struct kk_std_data_sort__mlift_sort_10018_fun118__t* _self = kk_function_as(struct kk_std_data_sort__mlift_sort_10018_fun118__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10004_0 = _self->_y_x10004_0; /* list<172> */
  kk_box_t pivot_0 = _self->pivot_0; /* 172 */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10004_0, _ctx);kk_box_dup(pivot_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10005_0_3 = kk_std_core_types__list_unbox(_b_x1, KK_OWNED, _ctx); /*list<172>*/;
  kk_std_core_types__list _x_x119 = kk_std_data_sort__mlift_sort_10017(_y_x10004_0, pivot_0, _y_x10005_0_3, _ctx); /*list<172>*/
  return kk_std_core_types__list_box(_x_x119, _ctx);
}

kk_std_core_types__list kk_std_data_sort__mlift_sort_10018(kk_std_core_types__list greater, kk_box_t pivot_0, kk_function_t _implicit_fs__lp__lt__rp_, kk_std_core_types__list _y_x10004_0, kk_context_t* _ctx) { /* forall<a,e> (greater : list<a>, pivot : a, ?(<) : (a, a) -> e bool, list<a>) -> e list<a> */ 
  kk_std_core_types__list x_10021;
  kk_std_core_types__list _brw_x109 = kk_std_data_sort_sort(greater, _implicit_fs__lp__lt__rp_, _ctx); /*list<6>*/;
  kk_function_drop(_implicit_fs__lp__lt__rp_, _ctx);
  x_10021 = _brw_x109; /*list<172>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_10021, _ctx);
    kk_box_t _x_x117 = kk_std_core_hnd_yield_extend(kk_std_data_sort__new_mlift_sort_10018_fun118(_y_x10004_0, pivot_0, _ctx), _ctx); /*3003*/
    return kk_std_core_types__list_unbox(_x_x117, KK_OWNED, _ctx);
  }
  {
    return kk_std_data_sort__mlift_sort_10017(_y_x10004_0, pivot_0, x_10021, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_data_sort__mlift_sort_10019_fun121__t {
  struct kk_function_s _base;
  kk_std_core_types__list greater_0;
  kk_box_t pivot_1;
  kk_function_t _implicit_fs__lp__at_x_0_lt__rp_;
};
static kk_box_t kk_std_data_sort__mlift_sort_10019_fun121(kk_function_t _fself, kk_box_t _b_x7, kk_context_t* _ctx);
static kk_function_t kk_std_data_sort__new_mlift_sort_10019_fun121(kk_std_core_types__list greater_0, kk_box_t pivot_1, kk_function_t _implicit_fs__lp__at_x_0_lt__rp_, kk_context_t* _ctx) {
  struct kk_std_data_sort__mlift_sort_10019_fun121__t* _self = kk_function_alloc_as(struct kk_std_data_sort__mlift_sort_10019_fun121__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_sort__mlift_sort_10019_fun121, kk_context());
  _self->greater_0 = greater_0;
  _self->pivot_1 = pivot_1;
  _self->_implicit_fs__lp__at_x_0_lt__rp_ = _implicit_fs__lp__at_x_0_lt__rp_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_sort__mlift_sort_10019_fun121(kk_function_t _fself, kk_box_t _b_x7, kk_context_t* _ctx) {
  struct kk_std_data_sort__mlift_sort_10019_fun121__t* _self = kk_function_as(struct kk_std_data_sort__mlift_sort_10019_fun121__t*, _fself, _ctx);
  kk_std_core_types__list greater_0 = _self->greater_0; /* list<172> */
  kk_box_t pivot_1 = _self->pivot_1; /* 172 */
  kk_function_t _implicit_fs__lp__at_x_0_lt__rp_ = _self->_implicit_fs__lp__at_x_0_lt__rp_; /* (172, 172) -> 173 bool */
  kk_drop_match(_self, {kk_std_core_types__list_dup(greater_0, _ctx);kk_box_dup(pivot_1, _ctx);kk_function_dup(_implicit_fs__lp__at_x_0_lt__rp_, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10004_1_9 = kk_std_core_types__list_unbox(_b_x7, KK_OWNED, _ctx); /*list<172>*/;
  kk_std_core_types__list _x_x122 = kk_std_data_sort__mlift_sort_10018(greater_0, pivot_1, _implicit_fs__lp__at_x_0_lt__rp_, _y_x10004_1_9, _ctx); /*list<172>*/
  return kk_std_core_types__list_box(_x_x122, _ctx);
}

kk_std_core_types__list kk_std_data_sort__mlift_sort_10019(kk_box_t pivot_1, kk_function_t _implicit_fs__lp__at_x_0_lt__rp_, kk_std_core_types__tuple2 _y_x10003, kk_context_t* _ctx) { /* forall<a,e> (pivot : a, ?(<) : (a, a) -> e bool, (list<a>, list<a>)) -> e list<a> */ 
  {
    kk_box_t _box_x4 = _y_x10003.fst;
    kk_box_t _box_x5 = _y_x10003.snd;
    kk_std_core_types__list smaller = kk_std_core_types__list_unbox(_box_x4, KK_BORROWED, _ctx);
    kk_std_core_types__list greater_0 = kk_std_core_types__list_unbox(_box_x5, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(greater_0, _ctx);
    kk_std_core_types__list_dup(smaller, _ctx);
    kk_std_core_types__tuple2_drop(_y_x10003, _ctx);
    kk_std_core_types__list x_0_10023 = kk_std_data_sort_sort(smaller, _implicit_fs__lp__at_x_0_lt__rp_, _ctx); /*list<172>*/;
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_0_10023, _ctx);
      kk_box_t _x_x120 = kk_std_core_hnd_yield_extend(kk_std_data_sort__new_mlift_sort_10019_fun121(greater_0, pivot_1, _implicit_fs__lp__at_x_0_lt__rp_, _ctx), _ctx); /*3003*/
      return kk_std_core_types__list_unbox(_x_x120, KK_OWNED, _ctx);
    }
    {
      return kk_std_data_sort__mlift_sort_10018(greater_0, pivot_1, _implicit_fs__lp__at_x_0_lt__rp_, x_0_10023, _ctx);
    }
  }
}


// lift anonymous function
struct kk_std_data_sort_sort_fun125__t {
  struct kk_function_s _base;
  kk_box_t pivot_2;
  kk_function_t _implicit_fs__lp__at_x_1_lt__rp_;
};
static bool kk_std_data_sort_sort_fun125(kk_function_t _fself, kk_box_t it, kk_context_t* _ctx);
static kk_function_t kk_std_data_sort_new_sort_fun125(kk_box_t pivot_2, kk_function_t _implicit_fs__lp__at_x_1_lt__rp_, kk_context_t* _ctx) {
  struct kk_std_data_sort_sort_fun125__t* _self = kk_function_alloc_as(struct kk_std_data_sort_sort_fun125__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_sort_sort_fun125, kk_context());
  _self->pivot_2 = pivot_2;
  _self->_implicit_fs__lp__at_x_1_lt__rp_ = _implicit_fs__lp__at_x_1_lt__rp_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_std_data_sort_sort_fun125(kk_function_t _fself, kk_box_t it, kk_context_t* _ctx) {
  struct kk_std_data_sort_sort_fun125__t* _self = kk_function_as(struct kk_std_data_sort_sort_fun125__t*, _fself, _ctx);
  kk_box_t pivot_2 = _self->pivot_2; /* 172 */
  kk_function_t _implicit_fs__lp__at_x_1_lt__rp_ = _self->_implicit_fs__lp__at_x_1_lt__rp_; /* (172, 172) -> 173 bool */
  kk_drop_match(_self, {kk_box_dup(pivot_2, _ctx);kk_function_dup(_implicit_fs__lp__at_x_1_lt__rp_, _ctx);}, {}, _ctx)
  return kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs__lp__at_x_1_lt__rp_, (_implicit_fs__lp__at_x_1_lt__rp_, it, pivot_2, _ctx), _ctx);
}


// lift anonymous function
struct kk_std_data_sort_sort_fun128__t {
  struct kk_function_s _base;
  kk_box_t pivot_2;
  kk_function_t _implicit_fs__lp__at_x_1_lt__rp_;
};
static kk_box_t kk_std_data_sort_sort_fun128(kk_function_t _fself, kk_box_t _b_x11, kk_context_t* _ctx);
static kk_function_t kk_std_data_sort_new_sort_fun128(kk_box_t pivot_2, kk_function_t _implicit_fs__lp__at_x_1_lt__rp_, kk_context_t* _ctx) {
  struct kk_std_data_sort_sort_fun128__t* _self = kk_function_alloc_as(struct kk_std_data_sort_sort_fun128__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_sort_sort_fun128, kk_context());
  _self->pivot_2 = pivot_2;
  _self->_implicit_fs__lp__at_x_1_lt__rp_ = _implicit_fs__lp__at_x_1_lt__rp_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_sort_sort_fun128(kk_function_t _fself, kk_box_t _b_x11, kk_context_t* _ctx) {
  struct kk_std_data_sort_sort_fun128__t* _self = kk_function_as(struct kk_std_data_sort_sort_fun128__t*, _fself, _ctx);
  kk_box_t pivot_2 = _self->pivot_2; /* 172 */
  kk_function_t _implicit_fs__lp__at_x_1_lt__rp_ = _self->_implicit_fs__lp__at_x_1_lt__rp_; /* (172, 172) -> 173 bool */
  kk_drop_match(_self, {kk_box_dup(pivot_2, _ctx);kk_function_dup(_implicit_fs__lp__at_x_1_lt__rp_, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _y_x10003_0_21 = kk_std_core_types__tuple2_unbox(_b_x11, KK_OWNED, _ctx); /*(list<172>, list<172>)*/;
  kk_std_core_types__list _x_x129 = kk_std_data_sort__mlift_sort_10019(pivot_2, _implicit_fs__lp__at_x_1_lt__rp_, _y_x10003_0_21, _ctx); /*list<172>*/
  return kk_std_core_types__list_box(_x_x129, _ctx);
}


// lift anonymous function
struct kk_std_data_sort_sort_fun132__t {
  struct kk_function_s _base;
  kk_std_core_types__list greater_1;
  kk_box_t pivot_2;
  kk_function_t _implicit_fs__lp__at_x_1_lt__rp_;
};
static kk_box_t kk_std_data_sort_sort_fun132(kk_function_t _fself, kk_box_t _b_x15, kk_context_t* _ctx);
static kk_function_t kk_std_data_sort_new_sort_fun132(kk_std_core_types__list greater_1, kk_box_t pivot_2, kk_function_t _implicit_fs__lp__at_x_1_lt__rp_, kk_context_t* _ctx) {
  struct kk_std_data_sort_sort_fun132__t* _self = kk_function_alloc_as(struct kk_std_data_sort_sort_fun132__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_sort_sort_fun132, kk_context());
  _self->greater_1 = greater_1;
  _self->pivot_2 = pivot_2;
  _self->_implicit_fs__lp__at_x_1_lt__rp_ = _implicit_fs__lp__at_x_1_lt__rp_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_sort_sort_fun132(kk_function_t _fself, kk_box_t _b_x15, kk_context_t* _ctx) {
  struct kk_std_data_sort_sort_fun132__t* _self = kk_function_as(struct kk_std_data_sort_sort_fun132__t*, _fself, _ctx);
  kk_std_core_types__list greater_1 = _self->greater_1; /* list<172> */
  kk_box_t pivot_2 = _self->pivot_2; /* 172 */
  kk_function_t _implicit_fs__lp__at_x_1_lt__rp_ = _self->_implicit_fs__lp__at_x_1_lt__rp_; /* (172, 172) -> 173 bool */
  kk_drop_match(_self, {kk_std_core_types__list_dup(greater_1, _ctx);kk_box_dup(pivot_2, _ctx);kk_function_dup(_implicit_fs__lp__at_x_1_lt__rp_, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10004_2_22 = kk_std_core_types__list_unbox(_b_x15, KK_OWNED, _ctx); /*list<172>*/;
  kk_std_core_types__list _x_x133 = kk_std_data_sort__mlift_sort_10018(greater_1, pivot_2, _implicit_fs__lp__at_x_1_lt__rp_, _y_x10004_2_22, _ctx); /*list<172>*/
  return kk_std_core_types__list_box(_x_x133, _ctx);
}


// lift anonymous function
struct kk_std_data_sort_sort_fun135__t {
  struct kk_function_s _base;
  kk_box_t pivot_2;
  kk_std_core_types__list x_2_10028;
};
static kk_box_t kk_std_data_sort_sort_fun135(kk_function_t _fself, kk_box_t _b_x17, kk_context_t* _ctx);
static kk_function_t kk_std_data_sort_new_sort_fun135(kk_box_t pivot_2, kk_std_core_types__list x_2_10028, kk_context_t* _ctx) {
  struct kk_std_data_sort_sort_fun135__t* _self = kk_function_alloc_as(struct kk_std_data_sort_sort_fun135__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_sort_sort_fun135, kk_context());
  _self->pivot_2 = pivot_2;
  _self->x_2_10028 = x_2_10028;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_sort_sort_fun135(kk_function_t _fself, kk_box_t _b_x17, kk_context_t* _ctx) {
  struct kk_std_data_sort_sort_fun135__t* _self = kk_function_as(struct kk_std_data_sort_sort_fun135__t*, _fself, _ctx);
  kk_box_t pivot_2 = _self->pivot_2; /* 172 */
  kk_std_core_types__list x_2_10028 = _self->x_2_10028; /* list<172> */
  kk_drop_match(_self, {kk_box_dup(pivot_2, _ctx);kk_std_core_types__list_dup(x_2_10028, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10005_1_23 = kk_std_core_types__list_unbox(_b_x17, KK_OWNED, _ctx); /*list<172>*/;
  kk_std_core_types__list _x_x136 = kk_std_data_sort__mlift_sort_10017(x_2_10028, pivot_2, _y_x10005_1_23, _ctx); /*list<172>*/
  return kk_std_core_types__list_box(_x_x136, _ctx);
}

kk_std_core_types__list kk_std_data_sort_sort(kk_std_core_types__list l, kk_function_t _implicit_fs__lp__at_x_1_lt__rp_, kk_context_t* _ctx) { /* forall<a,e> (l : list<a>, ?(<) : (a, a) -> e bool) -> e list<a> */ 
  if (kk_std_core_types__is_Nil(l, _ctx)) {
    return kk_std_core_types__new_Nil(_ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x123 = kk_std_core_types__as_Cons(l, _ctx);
    kk_std_core_types__list _pat_1_0 = _con_x123->tail;
    if (kk_std_core_types__is_Nil(_pat_1_0, _ctx)) {
      kk_box_t h = _con_x123->head;
      kk_reuse_t _ru_x110 = kk_reuse_null; /*@reuse*/;
      if kk_likely(kk_datatype_ptr_is_unique(l, _ctx)) {
        _ru_x110 = (kk_datatype_ptr_reuse(l, _ctx));
      }
      else {
        kk_box_dup(h, _ctx);
        kk_datatype_ptr_decref(l, _ctx);
      }
      return kk_std_core_types__new_Cons(_ru_x110, 0, h, kk_std_core_types__new_Nil(_ctx), _ctx);
    }
  }
  {
    struct kk_std_core_types_Cons* _con_x124 = kk_std_core_types__as_Cons(l, _ctx);
    kk_box_t pivot_2 = _con_x124->head;
    kk_std_core_types__list rst = _con_x124->tail;
    kk_reuse_t _ru_x111 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(l, _ctx)) {
      _ru_x111 = (kk_datatype_ptr_reuse(l, _ctx));
    }
    else {
      kk_box_dup(pivot_2, _ctx);
      kk_std_core_types__list_dup(rst, _ctx);
      kk_datatype_ptr_decref(l, _ctx);
    }
    kk_std_core_types__tuple2 x_1_10025;
    kk_function_t _brw_x105;
    kk_box_dup(pivot_2, _ctx);
    kk_function_dup(_implicit_fs__lp__at_x_1_lt__rp_, _ctx);
    _brw_x105 = kk_std_data_sort_new_sort_fun125(pivot_2, _implicit_fs__lp__at_x_1_lt__rp_, _ctx); /*(it : 172) -> 173 bool*/
    kk_std_core_types__tuple2 _brw_x106 = kk_std_core_list_partition(rst, _brw_x105, _ctx); /*(list<1001>, list<1001>)*/;
    kk_function_drop(_brw_x105, _ctx);
    x_1_10025 = _brw_x106; /*(list<172>, list<172>)*/
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_x111,kk_context());
      kk_std_core_types__tuple2_drop(x_1_10025, _ctx);
      kk_box_t _x_x126;
      kk_function_t _x_x127;
      kk_function_dup(_implicit_fs__lp__at_x_1_lt__rp_, _ctx);
      _x_x127 = kk_std_data_sort_new_sort_fun128(pivot_2, _implicit_fs__lp__at_x_1_lt__rp_, _ctx); /*(3002) -> 3004 3003*/
      _x_x126 = kk_std_core_hnd_yield_extend(_x_x127, _ctx); /*3003*/
      return kk_std_core_types__list_unbox(_x_x126, KK_OWNED, _ctx);
    }
    {
      kk_box_t _box_x12 = x_1_10025.fst;
      kk_box_t _box_x13 = x_1_10025.snd;
      kk_std_core_types__list smaller_0 = kk_std_core_types__list_unbox(_box_x12, KK_BORROWED, _ctx);
      kk_std_core_types__list greater_1 = kk_std_core_types__list_unbox(_box_x13, KK_BORROWED, _ctx);
      kk_std_core_types__list_dup(greater_1, _ctx);
      kk_std_core_types__list_dup(smaller_0, _ctx);
      kk_std_core_types__tuple2_drop(x_1_10025, _ctx);
      kk_std_core_types__list x_2_10028 = kk_std_data_sort_sort(smaller_0, _implicit_fs__lp__at_x_1_lt__rp_, _ctx); /*list<172>*/;
      if (kk_yielding(kk_context())) {
        kk_reuse_drop(_ru_x111,kk_context());
        kk_std_core_types__list_drop(x_2_10028, _ctx);
        kk_box_t _x_x130;
        kk_function_t _x_x131;
        kk_function_dup(_implicit_fs__lp__at_x_1_lt__rp_, _ctx);
        _x_x131 = kk_std_data_sort_new_sort_fun132(greater_1, pivot_2, _implicit_fs__lp__at_x_1_lt__rp_, _ctx); /*(3002) -> 3004 3003*/
        _x_x130 = kk_std_core_hnd_yield_extend(_x_x131, _ctx); /*3003*/
        return kk_std_core_types__list_unbox(_x_x130, KK_OWNED, _ctx);
      }
      {
        kk_std_core_types__list x_3_10031 = kk_std_data_sort_sort(greater_1, _implicit_fs__lp__at_x_1_lt__rp_, _ctx); /*list<172>*/;
        if (kk_yielding(kk_context())) {
          kk_reuse_drop(_ru_x111,kk_context());
          kk_std_core_types__list_drop(x_3_10031, _ctx);
          kk_box_t _x_x134 = kk_std_core_hnd_yield_extend(kk_std_data_sort_new_sort_fun135(pivot_2, x_2_10028, _ctx), _ctx); /*3003*/
          return kk_std_core_types__list_unbox(_x_x134, KK_OWNED, _ctx);
        }
        {
          kk_std_core_types__list _x_x137 = kk_std_core_types__new_Cons(_ru_x111, 0, pivot_2, x_3_10031, _ctx); /*list<1024>*/
          return kk_std_core_list_append(x_2_10028, _x_x137, _ctx);
        }
      }
    }
  }
}
 
// monadic lift

kk_std_core_types__list kk_std_data_sort__mlift_trmc_group_10020(kk_std_core_types__cctx _acc, kk_box_t pivot, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_std_core_types__tuple2 _y_x10009, kk_context_t* _ctx) { /* forall<a,e> (ctx<list<list<a>>>, pivot : a, ?(==) : (a, a) -> e bool, (list<a>, list<a>)) -> e list<list<a>> */ 
  {
    kk_box_t _box_x24 = _y_x10009.fst;
    kk_box_t _box_x25 = _y_x10009.snd;
    kk_std_core_types__list equal = kk_std_core_types__list_unbox(_box_x24, KK_BORROWED, _ctx);
    kk_std_core_types__list other = kk_std_core_types__list_unbox(_box_x25, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(equal, _ctx);
    kk_std_core_types__list_dup(other, _ctx);
    kk_std_core_types__tuple2_drop(_y_x10009, _ctx);
    kk_std_core_types__list _trmc_x10000 = kk_datatype_null(); /*list<list<308>>*/;
    kk_std_core_types__list _trmc_x10001;
    kk_box_t _x_x138;
    kk_std_core_types__list _x_x139 = kk_std_core_types__new_Cons(kk_reuse_null, 0, pivot, equal, _ctx); /*list<1024>*/
    _x_x138 = kk_std_core_types__list_box(_x_x139, _ctx); /*1024*/
    _trmc_x10001 = kk_std_core_types__new_Cons(kk_reuse_null, kk_field_index_of(struct kk_std_core_types_Cons, tail), _x_x138, _trmc_x10000, _ctx); /*list<list<308>>*/
    kk_field_addr_t _b_x35_38 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10001, _ctx)->tail, _ctx); /*@field-addr<list<list<308>>>*/;
    kk_std_core_types__cctx _x_x140 = kk_cctx_extend(_acc,(kk_std_core_types__list_box(_trmc_x10001, _ctx)),_b_x35_38,kk_context()); /*ctx<0>*/
    return kk_std_data_sort__trmc_group(other, _implicit_fs__lp__eq__eq__rp_, _x_x140, _ctx);
  }
}


// lift anonymous function
struct kk_std_data_sort__trmc_group_fun149__t {
  struct kk_function_s _base;
  kk_box_t pivot_0;
  kk_function_t _implicit_fs__lp__at_x_0_eq__eq__rp_;
};
static bool kk_std_data_sort__trmc_group_fun149(kk_function_t _fself, kk_box_t it, kk_context_t* _ctx);
static kk_function_t kk_std_data_sort__new_trmc_group_fun149(kk_box_t pivot_0, kk_function_t _implicit_fs__lp__at_x_0_eq__eq__rp_, kk_context_t* _ctx) {
  struct kk_std_data_sort__trmc_group_fun149__t* _self = kk_function_alloc_as(struct kk_std_data_sort__trmc_group_fun149__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_sort__trmc_group_fun149, kk_context());
  _self->pivot_0 = pivot_0;
  _self->_implicit_fs__lp__at_x_0_eq__eq__rp_ = _implicit_fs__lp__at_x_0_eq__eq__rp_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_std_data_sort__trmc_group_fun149(kk_function_t _fself, kk_box_t it, kk_context_t* _ctx) {
  struct kk_std_data_sort__trmc_group_fun149__t* _self = kk_function_as(struct kk_std_data_sort__trmc_group_fun149__t*, _fself, _ctx);
  kk_box_t pivot_0 = _self->pivot_0; /* 308 */
  kk_function_t _implicit_fs__lp__at_x_0_eq__eq__rp_ = _self->_implicit_fs__lp__at_x_0_eq__eq__rp_; /* (308, 308) -> 309 bool */
  kk_drop_match(_self, {kk_box_dup(pivot_0, _ctx);kk_function_dup(_implicit_fs__lp__at_x_0_eq__eq__rp_, _ctx);}, {}, _ctx)
  return kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs__lp__at_x_0_eq__eq__rp_, (_implicit_fs__lp__at_x_0_eq__eq__rp_, it, pivot_0, _ctx), _ctx);
}


// lift anonymous function
struct kk_std_data_sort__trmc_group_fun151__t {
  struct kk_function_s _base;
  kk_std_core_types__cctx _acc_0;
  kk_box_t pivot_0;
  kk_function_t _implicit_fs__lp__at_x_0_eq__eq__rp_;
};
static kk_box_t kk_std_data_sort__trmc_group_fun151(kk_function_t _fself, kk_box_t _b_x49, kk_context_t* _ctx);
static kk_function_t kk_std_data_sort__new_trmc_group_fun151(kk_std_core_types__cctx _acc_0, kk_box_t pivot_0, kk_function_t _implicit_fs__lp__at_x_0_eq__eq__rp_, kk_context_t* _ctx) {
  struct kk_std_data_sort__trmc_group_fun151__t* _self = kk_function_alloc_as(struct kk_std_data_sort__trmc_group_fun151__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_data_sort__trmc_group_fun151, kk_context());
  _self->_acc_0 = _acc_0;
  _self->pivot_0 = pivot_0;
  _self->_implicit_fs__lp__at_x_0_eq__eq__rp_ = _implicit_fs__lp__at_x_0_eq__eq__rp_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_data_sort__trmc_group_fun151(kk_function_t _fself, kk_box_t _b_x49, kk_context_t* _ctx) {
  struct kk_std_data_sort__trmc_group_fun151__t* _self = kk_function_as(struct kk_std_data_sort__trmc_group_fun151__t*, _fself, _ctx);
  kk_std_core_types__cctx _acc_0 = _self->_acc_0; /* ctx<list<list<308>>> */
  kk_box_t pivot_0 = _self->pivot_0; /* 308 */
  kk_function_t _implicit_fs__lp__at_x_0_eq__eq__rp_ = _self->_implicit_fs__lp__at_x_0_eq__eq__rp_; /* (308, 308) -> 309 bool */
  kk_drop_match(_self, {kk_std_core_types__cctx_dup(_acc_0, _ctx);kk_box_dup(pivot_0, _ctx);kk_function_dup(_implicit_fs__lp__at_x_0_eq__eq__rp_, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _y_x10009_0_75 = kk_std_core_types__tuple2_unbox(_b_x49, KK_OWNED, _ctx); /*(list<308>, list<308>)*/;
  kk_std_core_types__list _x_x152 = kk_std_data_sort__mlift_trmc_group_10020(_acc_0, pivot_0, _implicit_fs__lp__at_x_0_eq__eq__rp_, _y_x10009_0_75, _ctx); /*list<list<308>>*/
  return kk_std_core_types__list_box(_x_x152, _ctx);
}

kk_std_core_types__list kk_std_data_sort__trmc_group(kk_std_core_types__list l, kk_function_t _implicit_fs__lp__at_x_0_eq__eq__rp_, kk_std_core_types__cctx _acc_0, kk_context_t* _ctx) { /* forall<a,e> (l : list<a>, ?(==) : (a, a) -> e bool, ctx<list<list<a>>>) -> e list<list<a>> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Nil(l, _ctx)) {
    kk_function_drop(_implicit_fs__lp__at_x_0_eq__eq__rp_, _ctx);
    kk_box_t _x_x141 = kk_cctx_apply(_acc_0,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
    return kk_std_core_types__list_unbox(_x_x141, KK_OWNED, _ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x142 = kk_std_core_types__as_Cons(l, _ctx);
    kk_std_core_types__list _pat_1 = _con_x142->tail;
    if (kk_std_core_types__is_Nil(_pat_1, _ctx)) {
      kk_box_t h = _con_x142->head;
      kk_function_drop(_implicit_fs__lp__at_x_0_eq__eq__rp_, _ctx);
      kk_reuse_t _ru_x112 = kk_reuse_null; /*@reuse*/;
      if kk_likely(kk_datatype_ptr_is_unique(l, _ctx)) {
        _ru_x112 = (kk_datatype_ptr_reuse(l, _ctx));
      }
      else {
        kk_box_dup(h, _ctx);
        kk_datatype_ptr_decref(l, _ctx);
      }
      kk_box_t _x_x143;
      kk_box_t _x_x144;
      kk_std_core_types__list _x_x145;
      kk_box_t _x_x146;
      kk_std_core_types__list _x_x147 = kk_std_core_types__new_Cons(_ru_x112, 0, h, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<1024>*/
      _x_x146 = kk_std_core_types__list_box(_x_x147, _ctx); /*1024*/
      _x_x145 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x146, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<1024>*/
      _x_x144 = kk_std_core_types__list_box(_x_x145, _ctx); /*-1*/
      _x_x143 = kk_cctx_apply(_acc_0,_x_x144,kk_context()); /*-1*/
      return kk_std_core_types__list_unbox(_x_x143, KK_OWNED, _ctx);
    }
  }
  {
    struct kk_std_core_types_Cons* _con_x148 = kk_std_core_types__as_Cons(l, _ctx);
    kk_box_t pivot_0 = _con_x148->head;
    kk_std_core_types__list rst = _con_x148->tail;
    kk_reuse_t _ru_x113 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(l, _ctx)) {
      _ru_x113 = (kk_datatype_ptr_reuse(l, _ctx));
    }
    else {
      kk_box_dup(pivot_0, _ctx);
      kk_std_core_types__list_dup(rst, _ctx);
      kk_datatype_ptr_decref(l, _ctx);
    }
    kk_std_core_types__tuple2 x_10034;
    kk_function_t _brw_x100;
    kk_box_dup(pivot_0, _ctx);
    kk_function_dup(_implicit_fs__lp__at_x_0_eq__eq__rp_, _ctx);
    _brw_x100 = kk_std_data_sort__new_trmc_group_fun149(pivot_0, _implicit_fs__lp__at_x_0_eq__eq__rp_, _ctx); /*(it : 308) -> 309 bool*/
    kk_std_core_types__tuple2 _brw_x101 = kk_std_core_list_partition(rst, _brw_x100, _ctx); /*(list<1001>, list<1001>)*/;
    kk_function_drop(_brw_x100, _ctx);
    x_10034 = _brw_x101; /*(list<308>, list<308>)*/
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_x113,kk_context());
      kk_std_core_types__tuple2_drop(x_10034, _ctx);
      kk_box_t _x_x150 = kk_std_core_hnd_yield_extend(kk_std_data_sort__new_trmc_group_fun151(_acc_0, pivot_0, _implicit_fs__lp__at_x_0_eq__eq__rp_, _ctx), _ctx); /*3003*/
      return kk_std_core_types__list_unbox(_x_x150, KK_OWNED, _ctx);
    }
    {
      kk_box_t _box_x50 = x_10034.fst;
      kk_box_t _box_x51 = x_10034.snd;
      kk_std_core_types__list equal_0 = kk_std_core_types__list_unbox(_box_x50, KK_BORROWED, _ctx);
      kk_std_core_types__list other_0 = kk_std_core_types__list_unbox(_box_x51, KK_BORROWED, _ctx);
      kk_std_core_types__list_dup(equal_0, _ctx);
      kk_std_core_types__list_dup(other_0, _ctx);
      kk_std_core_types__tuple2_drop(x_10034, _ctx);
      kk_std_core_types__list _trmc_x10000_0 = kk_datatype_null(); /*list<list<308>>*/;
      kk_std_core_types__list _trmc_x10001_0;
      kk_box_t _x_x153;
      kk_std_core_types__list _x_x154 = kk_std_core_types__new_Cons(_ru_x113, 0, pivot_0, equal_0, _ctx); /*list<1024>*/
      _x_x153 = kk_std_core_types__list_box(_x_x154, _ctx); /*1024*/
      _trmc_x10001_0 = kk_std_core_types__new_Cons(kk_reuse_null, kk_field_index_of(struct kk_std_core_types_Cons, tail), _x_x153, _trmc_x10000_0, _ctx); /*list<list<308>>*/
      kk_field_addr_t _b_x61_71 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10001_0, _ctx)->tail, _ctx); /*@field-addr<list<list<308>>>*/;
      { // tailcall
        kk_std_core_types__cctx _x_x155 = kk_cctx_extend(_acc_0,(kk_std_core_types__list_box(_trmc_x10001_0, _ctx)),_b_x61_71,kk_context()); /*ctx<0>*/
        l = other_0;
        _acc_0 = _x_x155;
        goto kk__tailcall;
      }
    }
  }
}

kk_std_core_types__list kk_std_data_sort_group(kk_std_core_types__list l_0, kk_function_t _implicit_fs__lp__at_x_1_eq__eq__rp_, kk_context_t* _ctx) { /* forall<a,e> (l : list<a>, ?(==) : (a, a) -> e bool) -> e list<list<a>> */ 
  kk_std_core_types__cctx _x_x156 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_data_sort__trmc_group(l_0, _implicit_fs__lp__at_x_1_eq__eq__rp_, _x_x156, _ctx);
}

kk_std_core_types__tuple2 kk_std_data_sort_qpartition(kk_box_t x, kk_std_core_types__list ys, kk_function_t _implicit_fs__lp__lt__rp_, kk_context_t* _ctx) { /* forall<a> (x : a, ys : list<a>, ?(<) : (a, a) -> bool) -> (list<a>, list<a>) */ 
  if (kk_std_core_types__is_Cons(ys, _ctx)) {
    struct kk_std_core_types_Cons* _con_x157 = kk_std_core_types__as_Cons(ys, _ctx);
    kk_box_t y = _con_x157->head;
    kk_std_core_types__list yy = _con_x157->tail;
    kk_reuse_t _ru_x114 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(ys, _ctx)) {
      _ru_x114 = (kk_datatype_ptr_reuse(ys, _ctx));
    }
    else {
      kk_box_dup(y, _ctx);
      kk_std_core_types__list_dup(yy, _ctx);
      kk_datatype_ptr_decref(ys, _ctx);
    }
    bool _match_x96;
    kk_function_t _x_x160 = kk_function_dup(_implicit_fs__lp__lt__rp_, _ctx); /*(475, 475) -> bool*/
    kk_box_t _x_x158 = kk_box_dup(y, _ctx); /*475*/
    kk_box_t _x_x159 = kk_box_dup(x, _ctx); /*475*/
    _match_x96 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x160, (_x_x160, _x_x158, _x_x159, _ctx), _ctx); /*bool*/
    if (_match_x96) {
      kk_std_core_types__tuple2 _match_x98 = kk_std_data_sort_qpartition(x, yy, _implicit_fs__lp__lt__rp_, _ctx); /*(list<34>, list<34>)*/;
      {
        kk_box_t _box_x76 = _match_x98.fst;
        kk_box_t _box_x77 = _match_x98.snd;
        kk_std_core_types__list lo = kk_std_core_types__list_unbox(_box_x76, KK_BORROWED, _ctx);
        kk_std_core_types__list hi = kk_std_core_types__list_unbox(_box_x77, KK_BORROWED, _ctx);
        kk_std_core_types__list_dup(hi, _ctx);
        kk_std_core_types__list_dup(lo, _ctx);
        kk_std_core_types__tuple2_drop(_match_x98, _ctx);
        kk_box_t _x_x161;
        kk_std_core_types__list _x_x162 = kk_std_core_types__new_Cons(_ru_x114, 0, y, lo, _ctx); /*list<1024>*/
        _x_x161 = kk_std_core_types__list_box(_x_x162, _ctx); /*1038*/
        return kk_std_core_types__new_Tuple2(_x_x161, kk_std_core_types__list_box(hi, _ctx), _ctx);
      }
    }
    {
      kk_std_core_types__tuple2 _match_x97 = kk_std_data_sort_qpartition(x, yy, _implicit_fs__lp__lt__rp_, _ctx); /*(list<34>, list<34>)*/;
      {
        kk_box_t _box_x80 = _match_x97.fst;
        kk_box_t _box_x81 = _match_x97.snd;
        kk_std_core_types__list lo_0 = kk_std_core_types__list_unbox(_box_x80, KK_BORROWED, _ctx);
        kk_std_core_types__list hi_0 = kk_std_core_types__list_unbox(_box_x81, KK_BORROWED, _ctx);
        kk_std_core_types__list_dup(hi_0, _ctx);
        kk_std_core_types__list_dup(lo_0, _ctx);
        kk_std_core_types__tuple2_drop(_match_x97, _ctx);
        kk_box_t _x_x163;
        kk_std_core_types__list _x_x164 = kk_std_core_types__new_Cons(_ru_x114, 0, y, hi_0, _ctx); /*list<1024>*/
        _x_x163 = kk_std_core_types__list_box(_x_x164, _ctx); /*1039*/
        return kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(lo_0, _ctx), _x_x163, _ctx);
      }
    }
  }
  {
    return kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx), kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx), _ctx);
  }
}

kk_std_core_types__list kk_std_data_sort_quicksort(kk_std_core_types__list xs, kk_std_core_types__list res, kk_function_t _implicit_fs__lp__lt__rp_, kk_context_t* _ctx) { /* forall<a> (xs : list<a>, res : list<a>, ?(<) : (a, a) -> bool) -> list<a> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(xs, _ctx)) {
    struct kk_std_core_types_Cons* _con_x165 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x = _con_x165->head;
    kk_std_core_types__list xx = _con_x165->tail;
    kk_reuse_t _ru_x115 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      _ru_x115 = (kk_datatype_ptr_reuse(xs, _ctx));
    }
    else {
      kk_box_dup(x, _ctx);
      kk_std_core_types__list_dup(xx, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    kk_std_core_types__tuple2 _match_x94 = kk_std_data_sort_qpartition(x, xx, _implicit_fs__lp__lt__rp_, _ctx); /*(list<475>, list<475>)*/;
    {
      kk_box_t _box_x92 = _match_x94.fst;
      kk_box_t _box_x93 = _match_x94.snd;
      kk_std_core_types__list lo = kk_std_core_types__list_unbox(_box_x92, KK_BORROWED, _ctx);
      kk_std_core_types__list hi = kk_std_core_types__list_unbox(_box_x93, KK_BORROWED, _ctx);
      kk_std_core_types__list_dup(hi, _ctx);
      kk_std_core_types__list_dup(lo, _ctx);
      kk_std_core_types__tuple2_drop(_match_x94, _ctx);
      kk_std_core_types__list _own_x95;
      kk_std_core_types__list _x_x166 = kk_std_data_sort_quicksort(hi, res, _implicit_fs__lp__lt__rp_, _ctx); /*list<41>*/
      _own_x95 = kk_std_core_types__new_Cons(_ru_x115, 0, x, _x_x166, _ctx); /*list<1024>*/
      { // tailcall
        xs = lo;
        res = _own_x95;
        goto kk__tailcall;
      }
    }
  }
  {
    return res;
  }
}

// initialization
void kk_std_data_sort__init(kk_context_t* _ctx){
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
}

// termination
void kk_std_data_sort__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
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
