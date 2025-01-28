// Koka generated module: std/test/bench, koka version: 3.1.2, platform: 64-bit
#include "std_test_bench.h"
 
// monadic lift


// lift anonymous function
struct kk_std_test_bench__mlift_time_10019_fun106__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_bench__mlift_time_10019_fun106(kk_function_t _fself, kk_box_t _b_x3, kk_box_t _b_x4, kk_context_t* _ctx);
static kk_function_t kk_std_test_bench__new_mlift_time_10019_fun106(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_bench__mlift_time_10019_fun106, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_bench__mlift_time_10019_fun106(kk_function_t _fself, kk_box_t _b_x3, kk_box_t _b_x4, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_time_duration__duration _x_x107;
  kk_std_time_instant__instant _x_x108 = kk_std_time_instant__instant_unbox(_b_x3, KK_OWNED, _ctx); /*std/time/instant/instant*/
  kk_std_time_instant__instant _x_x109 = kk_std_time_instant__instant_unbox(_b_x4, KK_OWNED, _ctx); /*std/time/instant/instant*/
  _x_x107 = kk_std_time_instant__lp__dash__rp_(_x_x108, _x_x109, _ctx); /*std/time/duration/duration*/
  return kk_std_time_duration__duration_box(_x_x107, _ctx);
}


// lift anonymous function
struct kk_std_test_bench__mlift_time_10019_fun117__t {
  struct kk_function_s _base;
};
static kk_string_t kk_std_test_bench__mlift_time_10019_fun117(kk_function_t _fself, kk_std_time_instant__instant _x1_x114, kk_std_core_types__optional _x2_x115, kk_std_core_types__optional _x3_x116, kk_context_t* _ctx);
static kk_function_t kk_std_test_bench__new_mlift_time_10019_fun117(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_bench__mlift_time_10019_fun117, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_std_test_bench__mlift_time_10019_fun117(kk_function_t _fself, kk_std_time_instant__instant _x1_x114, kk_std_core_types__optional _x2_x115, kk_std_core_types__optional _x3_x116, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_time_instant_instant_fs_show(_x1_x114, _x2_x115, _x3_x116, _ctx);
}


// lift anonymous function
struct kk_std_test_bench__mlift_time_10019_fun121__t {
  struct kk_function_s _base;
};
static kk_string_t kk_std_test_bench__mlift_time_10019_fun121(kk_function_t _fself, kk_std_time_duration__duration _x1_x119, kk_std_core_types__optional _x2_x120, kk_context_t* _ctx);
static kk_function_t kk_std_test_bench__new_mlift_time_10019_fun121(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_bench__mlift_time_10019_fun121, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_std_test_bench__mlift_time_10019_fun121(kk_function_t _fself, kk_std_time_duration__duration _x1_x119, kk_std_core_types__optional _x2_x120, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_time_duration_show(_x1_x119, _x2_x120, _ctx);
}


// lift anonymous function
struct kk_std_test_bench__mlift_time_10019_fun127__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_bench__mlift_time_10019_fun127(kk_function_t _fself, kk_box_t _b_x12, kk_box_t _b_x13, kk_box_t _b_x14, kk_context_t* _ctx);
static kk_function_t kk_std_test_bench__new_mlift_time_10019_fun127(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_bench__mlift_time_10019_fun127, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_bench__mlift_time_10019_fun127(kk_function_t _fself, kk_box_t _b_x12, kk_box_t _b_x13, kk_box_t _b_x14, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x128;
  kk_std_time_instant__instant _x_x129 = kk_std_time_instant__instant_unbox(_b_x12, KK_OWNED, _ctx); /*std/time/instant/instant*/
  kk_std_core_types__optional _x_x130 = kk_std_core_types__optional_unbox(_b_x13, KK_OWNED, _ctx); /*? int*/
  kk_std_core_types__optional _x_x131 = kk_std_core_types__optional_unbox(_b_x14, KK_OWNED, _ctx); /*? int*/
  _x_x128 = kk_std_time_instant_instant_fs_show(_x_x129, _x_x130, _x_x131, _ctx); /*string*/
  return kk_string_box(_x_x128);
}


// lift anonymous function
struct kk_std_test_bench__mlift_time_10019_fun138__t {
  struct kk_function_s _base;
  kk_function_t _b_x15_31;
};
static kk_box_t kk_std_test_bench__mlift_time_10019_fun138(kk_function_t _fself, kk_box_t _b_x19, kk_box_t _b_x20, kk_box_t _b_x21, kk_context_t* _ctx);
static kk_function_t kk_std_test_bench__new_mlift_time_10019_fun138(kk_function_t _b_x15_31, kk_context_t* _ctx) {
  struct kk_std_test_bench__mlift_time_10019_fun138__t* _self = kk_function_alloc_as(struct kk_std_test_bench__mlift_time_10019_fun138__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_bench__mlift_time_10019_fun138, kk_context());
  _self->_b_x15_31 = _b_x15_31;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_bench__mlift_time_10019_fun138(kk_function_t _fself, kk_box_t _b_x19, kk_box_t _b_x20, kk_box_t _b_x21, kk_context_t* _ctx) {
  struct kk_std_test_bench__mlift_time_10019_fun138__t* _self = kk_function_as(struct kk_std_test_bench__mlift_time_10019_fun138__t*, _fself, _ctx);
  kk_function_t _b_x15_31 = _self->_b_x15_31; /* (i : std/time/instant/instant, max-prec : ? int, secs-width : ? int) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x15_31, _ctx);}, {}, _ctx)
  kk_string_t _x_x139;
  kk_std_time_instant__instant _x_x140 = kk_std_time_instant__instant_unbox(_b_x19, KK_OWNED, _ctx); /*std/time/instant/instant*/
  kk_std_core_types__optional _x_x141 = kk_std_core_types__optional_unbox(_b_x20, KK_OWNED, _ctx); /*? int*/
  kk_std_core_types__optional _x_x142 = kk_std_core_types__optional_unbox(_b_x21, KK_OWNED, _ctx); /*? int*/
  _x_x139 = kk_function_call(kk_string_t, (kk_function_t, kk_std_time_instant__instant, kk_std_core_types__optional, kk_std_core_types__optional, kk_context_t*), _b_x15_31, (_b_x15_31, _x_x140, _x_x141, _x_x142, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x139);
}


// lift anonymous function
struct kk_std_test_bench__mlift_time_10019_fun148__t {
  struct kk_function_s _base;
  kk_function_t _b_x22_35;
};
static kk_box_t kk_std_test_bench__mlift_time_10019_fun148(kk_function_t _fself, kk_box_t _b_x25, kk_box_t _b_x26, kk_context_t* _ctx);
static kk_function_t kk_std_test_bench__new_mlift_time_10019_fun148(kk_function_t _b_x22_35, kk_context_t* _ctx) {
  struct kk_std_test_bench__mlift_time_10019_fun148__t* _self = kk_function_alloc_as(struct kk_std_test_bench__mlift_time_10019_fun148__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_bench__mlift_time_10019_fun148, kk_context());
  _self->_b_x22_35 = _b_x22_35;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_bench__mlift_time_10019_fun148(kk_function_t _fself, kk_box_t _b_x25, kk_box_t _b_x26, kk_context_t* _ctx) {
  struct kk_std_test_bench__mlift_time_10019_fun148__t* _self = kk_function_as(struct kk_std_test_bench__mlift_time_10019_fun148__t*, _fself, _ctx);
  kk_function_t _b_x22_35 = _self->_b_x22_35; /* (d : std/time/duration/duration, max-prec : ? int) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x22_35, _ctx);}, {}, _ctx)
  kk_string_t _x_x149;
  kk_std_time_duration__duration _x_x150 = kk_std_time_duration__duration_unbox(_b_x25, KK_OWNED, _ctx); /*std/time/duration/duration*/
  kk_std_core_types__optional _x_x151 = kk_std_core_types__optional_unbox(_b_x26, KK_OWNED, _ctx); /*? int*/
  _x_x149 = kk_function_call(kk_string_t, (kk_function_t, kk_std_time_duration__duration, kk_std_core_types__optional, kk_context_t*), _b_x22_35, (_b_x22_35, _x_x150, _x_x151, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x149);
}

kk_box_t kk_std_test_bench__mlift_time_10019(kk_box_t res, kk_std_time_instant__instant start, kk_std_time_instant__instant end, kk_context_t* _ctx) { /* forall<a,e> (res : a, start : std/time/instant/instant, end : std/time/instant/instant) -> <ndet,std/time/utc/utc|e> a */ 
  kk_std_time_duration__duration _x_x1_1_10015;
  kk_box_t _x_x105;
  kk_box_t _x_x110;
  kk_std_time_instant__instant _x_x111 = kk_std_time_instant__instant_dup(end, _ctx); /*std/time/instant/instant*/
  _x_x110 = kk_std_time_instant__instant_box(_x_x111, _ctx); /*1000*/
  kk_box_t _x_x112;
  kk_std_time_instant__instant _x_x113 = kk_std_time_instant__instant_dup(start, _ctx); /*std/time/instant/instant*/
  _x_x112 = kk_std_time_instant__instant_box(_x_x113, _ctx); /*1001*/
  _x_x105 = kk_std_core_hnd__open_none2(kk_std_test_bench__new_mlift_time_10019_fun106(_ctx), _x_x110, _x_x112, _ctx); /*1002*/
  _x_x1_1_10015 = kk_std_time_duration__duration_unbox(_x_x105, KK_OWNED, _ctx); /*std/time/duration/duration*/
  kk_unit_t __ = kk_Unit;
  kk_function_t _b_x15_31 = kk_std_test_bench__new_mlift_time_10019_fun117(_ctx); /*(i : std/time/instant/instant, max-prec : ? int, secs-width : ? int) -> string*/;
  kk_std_time_instant__instant _b_x16_32 = end; /*std/time/instant/instant*/;
  kk_std_core_types__optional _b_x17_33 = kk_std_core_types__new_None(_ctx); /*? int*/;
  kk_std_core_types__optional _b_x18_34 = kk_std_core_types__new_None(_ctx); /*? int*/;
  kk_string_t _x_x118;
  kk_function_t _b_x22_35 = kk_std_test_bench__new_mlift_time_10019_fun121(_ctx); /*(d : std/time/duration/duration, max-prec : ? int) -> string*/;
  kk_std_time_duration__duration _b_x23_36 = _x_x1_1_10015; /*std/time/duration/duration*/;
  kk_std_core_types__optional _b_x24_37 = kk_std_core_types__new_None(_ctx); /*? int*/;
  kk_string_t _x_x122;
  kk_define_string_literal(, _s_x123, 12, "Time: start:", _ctx)
  _x_x122 = kk_string_dup(_s_x123, _ctx); /*string*/
  kk_string_t _x_x124;
  kk_string_t _x_x125;
  kk_box_t _x_x126 = kk_std_core_hnd__open_none3(kk_std_test_bench__new_mlift_time_10019_fun127(_ctx), kk_std_time_instant__instant_box(start, _ctx), kk_std_core_types__optional_box(kk_std_core_types__new_None(_ctx), _ctx), kk_std_core_types__optional_box(kk_std_core_types__new_None(_ctx), _ctx), _ctx); /*1003*/
  _x_x125 = kk_string_unbox(_x_x126); /*string*/
  kk_string_t _x_x132;
  kk_string_t _x_x133;
  kk_define_string_literal(, _s_x134, 5, " end:", _ctx)
  _x_x133 = kk_string_dup(_s_x134, _ctx); /*string*/
  kk_string_t _x_x135;
  kk_string_t _x_x136;
  kk_box_t _x_x137 = kk_std_core_hnd__open_none3(kk_std_test_bench__new_mlift_time_10019_fun138(_b_x15_31, _ctx), kk_std_time_instant__instant_box(_b_x16_32, _ctx), kk_std_core_types__optional_box(_b_x17_33, _ctx), kk_std_core_types__optional_box(_b_x18_34, _ctx), _ctx); /*1003*/
  _x_x136 = kk_string_unbox(_x_x137); /*string*/
  kk_string_t _x_x143;
  kk_string_t _x_x144;
  kk_define_string_literal(, _s_x145, 6, " diff:", _ctx)
  _x_x144 = kk_string_dup(_s_x145, _ctx); /*string*/
  kk_string_t _x_x146;
  kk_box_t _x_x147 = kk_std_core_hnd__open_none2(kk_std_test_bench__new_mlift_time_10019_fun148(_b_x22_35, _ctx), kk_std_time_duration__duration_box(_b_x23_36, _ctx), kk_std_core_types__optional_box(_b_x24_37, _ctx), _ctx); /*1002*/
  _x_x146 = kk_string_unbox(_x_x147); /*string*/
  _x_x143 = kk_std_core_types__lp__plus__plus__rp_(_x_x144, _x_x146, _ctx); /*string*/
  _x_x135 = kk_std_core_types__lp__plus__plus__rp_(_x_x136, _x_x143, _ctx); /*string*/
  _x_x132 = kk_std_core_types__lp__plus__plus__rp_(_x_x133, _x_x135, _ctx); /*string*/
  _x_x124 = kk_std_core_types__lp__plus__plus__rp_(_x_x125, _x_x132, _ctx); /*string*/
  _x_x118 = kk_std_core_types__lp__plus__plus__rp_(_x_x122, _x_x124, _ctx); /*string*/
  kk_std_core_debug_trace(_x_x118, _ctx);
  return res;
}
 
// monadic lift


// lift anonymous function
struct kk_std_test_bench__mlift_time_10020_fun154__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_bench__mlift_time_10020_fun154(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_bench__new_mlift_time_10020_fun154(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_bench__mlift_time_10020_fun154, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_bench__mlift_time_10020_fun154(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_time_instant__instant _x_x155 = kk_std_time_chrono_now(_ctx); /*std/time/instant/instant*/
  return kk_std_time_instant__instant_box(_x_x155, _ctx);
}


// lift anonymous function
struct kk_std_test_bench__mlift_time_10020_fun156__t {
  struct kk_function_s _base;
  kk_box_t res;
  kk_std_time_instant__instant start;
};
static kk_box_t kk_std_test_bench__mlift_time_10020_fun156(kk_function_t _fself, kk_box_t _b_x43, kk_context_t* _ctx);
static kk_function_t kk_std_test_bench__new_mlift_time_10020_fun156(kk_box_t res, kk_std_time_instant__instant start, kk_context_t* _ctx) {
  struct kk_std_test_bench__mlift_time_10020_fun156__t* _self = kk_function_alloc_as(struct kk_std_test_bench__mlift_time_10020_fun156__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_bench__mlift_time_10020_fun156, kk_context());
  _self->res = res;
  _self->start = start;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_bench__mlift_time_10020_fun156(kk_function_t _fself, kk_box_t _b_x43, kk_context_t* _ctx) {
  struct kk_std_test_bench__mlift_time_10020_fun156__t* _self = kk_function_as(struct kk_std_test_bench__mlift_time_10020_fun156__t*, _fself, _ctx);
  kk_box_t res = _self->res; /* 219 */
  kk_std_time_instant__instant start = _self->start; /* std/time/instant/instant */
  kk_drop_match(_self, {kk_box_dup(res, _ctx);kk_std_time_instant__instant_dup(start, _ctx);}, {}, _ctx)
  kk_std_time_instant__instant _x_x157 = kk_std_time_instant__instant_unbox(_b_x43, KK_OWNED, _ctx); /*std/time/instant/instant*/
  return kk_std_test_bench__mlift_time_10019(res, start, _x_x157, _ctx);
}

kk_box_t kk_std_test_bench__mlift_time_10020(kk_std_time_instant__instant start, kk_box_t res, kk_context_t* _ctx) { /* forall<a,e> (start : std/time/instant/instant, res : a) -> <ndet,std/time/utc/utc|e> a */ 
  kk_ssize_t _b_x38_40;
  kk_std_core_hnd__htag _x_x152 = kk_std_core_hnd__htag_dup(kk_std_time_utc__tag_utc, _ctx); /*hnd/htag<std/time/utc/utc>*/
  _b_x38_40 = kk_std_core_hnd__evv_index(_x_x152, _ctx); /*hnd/ev-index*/
  kk_std_time_instant__instant x_10022;
  kk_box_t _x_x153 = kk_std_core_hnd__open_at0(_b_x38_40, kk_std_test_bench__new_mlift_time_10020_fun154(_ctx), _ctx); /*1000*/
  x_10022 = kk_std_time_instant__instant_unbox(_x_x153, KK_OWNED, _ctx); /*std/time/instant/instant*/
  if (kk_yielding(kk_context())) {
    kk_std_time_instant__instant_drop(x_10022, _ctx);
    return kk_std_core_hnd_yield_extend(kk_std_test_bench__new_mlift_time_10020_fun156(res, start, _ctx), _ctx);
  }
  {
    return kk_std_test_bench__mlift_time_10019(res, start, x_10022, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_test_bench__mlift_time_10021_fun158__t {
  struct kk_function_s _base;
  kk_std_time_instant__instant start;
};
static kk_box_t kk_std_test_bench__mlift_time_10021_fun158(kk_function_t _fself, kk_box_t res, kk_context_t* _ctx);
static kk_function_t kk_std_test_bench__new_mlift_time_10021_fun158(kk_std_time_instant__instant start, kk_context_t* _ctx) {
  struct kk_std_test_bench__mlift_time_10021_fun158__t* _self = kk_function_alloc_as(struct kk_std_test_bench__mlift_time_10021_fun158__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_bench__mlift_time_10021_fun158, kk_context());
  _self->start = start;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_bench__mlift_time_10021_fun158(kk_function_t _fself, kk_box_t res, kk_context_t* _ctx) {
  struct kk_std_test_bench__mlift_time_10021_fun158__t* _self = kk_function_as(struct kk_std_test_bench__mlift_time_10021_fun158__t*, _fself, _ctx);
  kk_std_time_instant__instant start = _self->start; /* std/time/instant/instant */
  kk_drop_match(_self, {kk_std_time_instant__instant_dup(start, _ctx);}, {}, _ctx)
  return kk_std_test_bench__mlift_time_10020(start, res, _ctx);
}

kk_box_t kk_std_test_bench__mlift_time_10021(kk_function_t f, kk_std_time_instant__instant start, kk_context_t* _ctx) { /* forall<a,e> (f : () -> <ndet,std/time/utc/utc|e> a, start : std/time/instant/instant) -> <ndet,std/time/utc/utc|e> a */ 
  kk_box_t x_10024 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), f, (f, _ctx), _ctx); /*219*/;
  if (kk_yielding(kk_context())) {
    kk_box_drop(x_10024, _ctx);
    return kk_std_core_hnd_yield_extend(kk_std_test_bench__new_mlift_time_10021_fun158(start, _ctx), _ctx);
  }
  {
    return kk_std_test_bench__mlift_time_10020(start, x_10024, _ctx);
  }
}


// lift anonymous function
struct kk_std_test_bench_time_fun161__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_bench_time_fun161(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_bench_new_time_fun161(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_bench_time_fun161, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_bench_time_fun161(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_time_instant__instant _x_x162 = kk_std_time_chrono_now(_ctx); /*std/time/instant/instant*/
  return kk_std_time_instant__instant_box(_x_x162, _ctx);
}


// lift anonymous function
struct kk_std_test_bench_time_fun163__t {
  struct kk_function_s _base;
  kk_function_t f;
};
static kk_box_t kk_std_test_bench_time_fun163(kk_function_t _fself, kk_box_t _b_x51, kk_context_t* _ctx);
static kk_function_t kk_std_test_bench_new_time_fun163(kk_function_t f, kk_context_t* _ctx) {
  struct kk_std_test_bench_time_fun163__t* _self = kk_function_alloc_as(struct kk_std_test_bench_time_fun163__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_bench_time_fun163, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_bench_time_fun163(kk_function_t _fself, kk_box_t _b_x51, kk_context_t* _ctx) {
  struct kk_std_test_bench_time_fun163__t* _self = kk_function_as(struct kk_std_test_bench_time_fun163__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* () -> <ndet,std/time/utc/utc|220> 219 */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_std_time_instant__instant _x_x164 = kk_std_time_instant__instant_unbox(_b_x51, KK_OWNED, _ctx); /*std/time/instant/instant*/
  return kk_std_test_bench__mlift_time_10021(f, _x_x164, _ctx);
}


// lift anonymous function
struct kk_std_test_bench_time_fun165__t {
  struct kk_function_s _base;
  kk_std_time_instant__instant x_10026;
};
static kk_box_t kk_std_test_bench_time_fun165(kk_function_t _fself, kk_box_t res, kk_context_t* _ctx);
static kk_function_t kk_std_test_bench_new_time_fun165(kk_std_time_instant__instant x_10026, kk_context_t* _ctx) {
  struct kk_std_test_bench_time_fun165__t* _self = kk_function_alloc_as(struct kk_std_test_bench_time_fun165__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_bench_time_fun165, kk_context());
  _self->x_10026 = x_10026;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_bench_time_fun165(kk_function_t _fself, kk_box_t res, kk_context_t* _ctx) {
  struct kk_std_test_bench_time_fun165__t* _self = kk_function_as(struct kk_std_test_bench_time_fun165__t*, _fself, _ctx);
  kk_std_time_instant__instant x_10026 = _self->x_10026; /* std/time/instant/instant */
  kk_drop_match(_self, {kk_std_time_instant__instant_dup(x_10026, _ctx);}, {}, _ctx)
  return kk_std_test_bench__mlift_time_10020(x_10026, res, _ctx);
}


// lift anonymous function
struct kk_std_test_bench_time_fun168__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_bench_time_fun168(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_bench_new_time_fun168(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_bench_time_fun168, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_bench_time_fun168(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_time_instant__instant _x_x169 = kk_std_time_chrono_now(_ctx); /*std/time/instant/instant*/
  return kk_std_time_instant__instant_box(_x_x169, _ctx);
}


// lift anonymous function
struct kk_std_test_bench_time_fun170__t {
  struct kk_function_s _base;
  kk_box_t x_0_10029;
  kk_std_time_instant__instant x_10026;
};
static kk_box_t kk_std_test_bench_time_fun170(kk_function_t _fself, kk_box_t _b_x57, kk_context_t* _ctx);
static kk_function_t kk_std_test_bench_new_time_fun170(kk_box_t x_0_10029, kk_std_time_instant__instant x_10026, kk_context_t* _ctx) {
  struct kk_std_test_bench_time_fun170__t* _self = kk_function_alloc_as(struct kk_std_test_bench_time_fun170__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_bench_time_fun170, kk_context());
  _self->x_0_10029 = x_0_10029;
  _self->x_10026 = x_10026;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_bench_time_fun170(kk_function_t _fself, kk_box_t _b_x57, kk_context_t* _ctx) {
  struct kk_std_test_bench_time_fun170__t* _self = kk_function_as(struct kk_std_test_bench_time_fun170__t*, _fself, _ctx);
  kk_box_t x_0_10029 = _self->x_0_10029; /* 219 */
  kk_std_time_instant__instant x_10026 = _self->x_10026; /* std/time/instant/instant */
  kk_drop_match(_self, {kk_box_dup(x_0_10029, _ctx);kk_std_time_instant__instant_dup(x_10026, _ctx);}, {}, _ctx)
  kk_std_time_instant__instant _x_x171 = kk_std_time_instant__instant_unbox(_b_x57, KK_OWNED, _ctx); /*std/time/instant/instant*/
  return kk_std_test_bench__mlift_time_10019(x_0_10029, x_10026, _x_x171, _ctx);
}


// lift anonymous function
struct kk_std_test_bench_time_fun173__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_bench_time_fun173(kk_function_t _fself, kk_box_t _b_x61, kk_box_t _b_x62, kk_context_t* _ctx);
static kk_function_t kk_std_test_bench_new_time_fun173(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_bench_time_fun173, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_bench_time_fun173(kk_function_t _fself, kk_box_t _b_x61, kk_box_t _b_x62, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_time_duration__duration _x_x174;
  kk_std_time_instant__instant _x_x175 = kk_std_time_instant__instant_unbox(_b_x61, KK_OWNED, _ctx); /*std/time/instant/instant*/
  kk_std_time_instant__instant _x_x176 = kk_std_time_instant__instant_unbox(_b_x62, KK_OWNED, _ctx); /*std/time/instant/instant*/
  _x_x174 = kk_std_time_instant__lp__dash__rp_(_x_x175, _x_x176, _ctx); /*std/time/duration/duration*/
  return kk_std_time_duration__duration_box(_x_x174, _ctx);
}


// lift anonymous function
struct kk_std_test_bench_time_fun184__t {
  struct kk_function_s _base;
};
static kk_string_t kk_std_test_bench_time_fun184(kk_function_t _fself, kk_std_time_instant__instant _x1_x181, kk_std_core_types__optional _x2_x182, kk_std_core_types__optional _x3_x183, kk_context_t* _ctx);
static kk_function_t kk_std_test_bench_new_time_fun184(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_bench_time_fun184, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_std_test_bench_time_fun184(kk_function_t _fself, kk_std_time_instant__instant _x1_x181, kk_std_core_types__optional _x2_x182, kk_std_core_types__optional _x3_x183, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_time_instant_instant_fs_show(_x1_x181, _x2_x182, _x3_x183, _ctx);
}


// lift anonymous function
struct kk_std_test_bench_time_fun188__t {
  struct kk_function_s _base;
};
static kk_string_t kk_std_test_bench_time_fun188(kk_function_t _fself, kk_std_time_duration__duration _x1_x186, kk_std_core_types__optional _x2_x187, kk_context_t* _ctx);
static kk_function_t kk_std_test_bench_new_time_fun188(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_bench_time_fun188, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_std_test_bench_time_fun188(kk_function_t _fself, kk_std_time_duration__duration _x1_x186, kk_std_core_types__optional _x2_x187, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_time_duration_show(_x1_x186, _x2_x187, _ctx);
}


// lift anonymous function
struct kk_std_test_bench_time_fun194__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_bench_time_fun194(kk_function_t _fself, kk_box_t _b_x70, kk_box_t _b_x71, kk_box_t _b_x72, kk_context_t* _ctx);
static kk_function_t kk_std_test_bench_new_time_fun194(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_bench_time_fun194, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_bench_time_fun194(kk_function_t _fself, kk_box_t _b_x70, kk_box_t _b_x71, kk_box_t _b_x72, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x195;
  kk_std_time_instant__instant _x_x196 = kk_std_time_instant__instant_unbox(_b_x70, KK_OWNED, _ctx); /*std/time/instant/instant*/
  kk_std_core_types__optional _x_x197 = kk_std_core_types__optional_unbox(_b_x71, KK_OWNED, _ctx); /*? int*/
  kk_std_core_types__optional _x_x198 = kk_std_core_types__optional_unbox(_b_x72, KK_OWNED, _ctx); /*? int*/
  _x_x195 = kk_std_time_instant_instant_fs_show(_x_x196, _x_x197, _x_x198, _ctx); /*string*/
  return kk_string_box(_x_x195);
}


// lift anonymous function
struct kk_std_test_bench_time_fun205__t {
  struct kk_function_s _base;
  kk_function_t _b_x73_89;
};
static kk_box_t kk_std_test_bench_time_fun205(kk_function_t _fself, kk_box_t _b_x77, kk_box_t _b_x78, kk_box_t _b_x79, kk_context_t* _ctx);
static kk_function_t kk_std_test_bench_new_time_fun205(kk_function_t _b_x73_89, kk_context_t* _ctx) {
  struct kk_std_test_bench_time_fun205__t* _self = kk_function_alloc_as(struct kk_std_test_bench_time_fun205__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_bench_time_fun205, kk_context());
  _self->_b_x73_89 = _b_x73_89;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_bench_time_fun205(kk_function_t _fself, kk_box_t _b_x77, kk_box_t _b_x78, kk_box_t _b_x79, kk_context_t* _ctx) {
  struct kk_std_test_bench_time_fun205__t* _self = kk_function_as(struct kk_std_test_bench_time_fun205__t*, _fself, _ctx);
  kk_function_t _b_x73_89 = _self->_b_x73_89; /* (i : std/time/instant/instant, max-prec : ? int, secs-width : ? int) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x73_89, _ctx);}, {}, _ctx)
  kk_string_t _x_x206;
  kk_std_time_instant__instant _x_x207 = kk_std_time_instant__instant_unbox(_b_x77, KK_OWNED, _ctx); /*std/time/instant/instant*/
  kk_std_core_types__optional _x_x208 = kk_std_core_types__optional_unbox(_b_x78, KK_OWNED, _ctx); /*? int*/
  kk_std_core_types__optional _x_x209 = kk_std_core_types__optional_unbox(_b_x79, KK_OWNED, _ctx); /*? int*/
  _x_x206 = kk_function_call(kk_string_t, (kk_function_t, kk_std_time_instant__instant, kk_std_core_types__optional, kk_std_core_types__optional, kk_context_t*), _b_x73_89, (_b_x73_89, _x_x207, _x_x208, _x_x209, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x206);
}


// lift anonymous function
struct kk_std_test_bench_time_fun215__t {
  struct kk_function_s _base;
  kk_function_t _b_x80_93;
};
static kk_box_t kk_std_test_bench_time_fun215(kk_function_t _fself, kk_box_t _b_x83, kk_box_t _b_x84, kk_context_t* _ctx);
static kk_function_t kk_std_test_bench_new_time_fun215(kk_function_t _b_x80_93, kk_context_t* _ctx) {
  struct kk_std_test_bench_time_fun215__t* _self = kk_function_alloc_as(struct kk_std_test_bench_time_fun215__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_bench_time_fun215, kk_context());
  _self->_b_x80_93 = _b_x80_93;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_bench_time_fun215(kk_function_t _fself, kk_box_t _b_x83, kk_box_t _b_x84, kk_context_t* _ctx) {
  struct kk_std_test_bench_time_fun215__t* _self = kk_function_as(struct kk_std_test_bench_time_fun215__t*, _fself, _ctx);
  kk_function_t _b_x80_93 = _self->_b_x80_93; /* (d : std/time/duration/duration, max-prec : ? int) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x80_93, _ctx);}, {}, _ctx)
  kk_string_t _x_x216;
  kk_std_time_duration__duration _x_x217 = kk_std_time_duration__duration_unbox(_b_x83, KK_OWNED, _ctx); /*std/time/duration/duration*/
  kk_std_core_types__optional _x_x218 = kk_std_core_types__optional_unbox(_b_x84, KK_OWNED, _ctx); /*? int*/
  _x_x216 = kk_function_call(kk_string_t, (kk_function_t, kk_std_time_duration__duration, kk_std_core_types__optional, kk_context_t*), _b_x80_93, (_b_x80_93, _x_x217, _x_x218, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x216);
}

kk_box_t kk_std_test_bench_time(kk_function_t f, kk_context_t* _ctx) { /* forall<a,e> (f : () -> <ndet,std/time/utc/utc|e> a) -> <ndet,std/time/utc/utc|e> a */ 
  kk_ssize_t _b_x46_48;
  kk_std_core_hnd__htag _x_x159 = kk_std_core_hnd__htag_dup(kk_std_time_utc__tag_utc, _ctx); /*hnd/htag<std/time/utc/utc>*/
  _b_x46_48 = kk_std_core_hnd__evv_index(_x_x159, _ctx); /*hnd/ev-index*/
  kk_std_time_instant__instant x_10026;
  kk_box_t _x_x160 = kk_std_core_hnd__open_at0(_b_x46_48, kk_std_test_bench_new_time_fun161(_ctx), _ctx); /*1000*/
  x_10026 = kk_std_time_instant__instant_unbox(_x_x160, KK_OWNED, _ctx); /*std/time/instant/instant*/
  if (kk_yielding(kk_context())) {
    kk_std_time_instant__instant_drop(x_10026, _ctx);
    return kk_std_core_hnd_yield_extend(kk_std_test_bench_new_time_fun163(f, _ctx), _ctx);
  }
  {
    kk_box_t x_0_10029 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), f, (f, _ctx), _ctx); /*219*/;
    if (kk_yielding(kk_context())) {
      kk_box_drop(x_0_10029, _ctx);
      return kk_std_core_hnd_yield_extend(kk_std_test_bench_new_time_fun165(x_10026, _ctx), _ctx);
    }
    {
      kk_ssize_t _b_x52_54;
      kk_std_core_hnd__htag _x_x166 = kk_std_core_hnd__htag_dup(kk_std_time_utc__tag_utc, _ctx); /*hnd/htag<std/time/utc/utc>*/
      _b_x52_54 = kk_std_core_hnd__evv_index(_x_x166, _ctx); /*hnd/ev-index*/
      kk_std_time_instant__instant x_1_10032;
      kk_box_t _x_x167 = kk_std_core_hnd__open_at0(_b_x52_54, kk_std_test_bench_new_time_fun168(_ctx), _ctx); /*1000*/
      x_1_10032 = kk_std_time_instant__instant_unbox(_x_x167, KK_OWNED, _ctx); /*std/time/instant/instant*/
      if (kk_yielding(kk_context())) {
        kk_std_time_instant__instant_drop(x_1_10032, _ctx);
        return kk_std_core_hnd_yield_extend(kk_std_test_bench_new_time_fun170(x_0_10029, x_10026, _ctx), _ctx);
      }
      {
        kk_std_time_duration__duration _x_x1_1_10015;
        kk_box_t _x_x172;
        kk_box_t _x_x177;
        kk_std_time_instant__instant _x_x178 = kk_std_time_instant__instant_dup(x_1_10032, _ctx); /*std/time/instant/instant*/
        _x_x177 = kk_std_time_instant__instant_box(_x_x178, _ctx); /*1000*/
        kk_box_t _x_x179;
        kk_std_time_instant__instant _x_x180 = kk_std_time_instant__instant_dup(x_10026, _ctx); /*std/time/instant/instant*/
        _x_x179 = kk_std_time_instant__instant_box(_x_x180, _ctx); /*1001*/
        _x_x172 = kk_std_core_hnd__open_none2(kk_std_test_bench_new_time_fun173(_ctx), _x_x177, _x_x179, _ctx); /*1002*/
        _x_x1_1_10015 = kk_std_time_duration__duration_unbox(_x_x172, KK_OWNED, _ctx); /*std/time/duration/duration*/
        kk_unit_t __ = kk_Unit;
        kk_function_t _b_x73_89 = kk_std_test_bench_new_time_fun184(_ctx); /*(i : std/time/instant/instant, max-prec : ? int, secs-width : ? int) -> string*/;
        kk_std_time_instant__instant _b_x74_90 = x_1_10032; /*std/time/instant/instant*/;
        kk_std_core_types__optional _b_x75_91 = kk_std_core_types__new_None(_ctx); /*? int*/;
        kk_std_core_types__optional _b_x76_92 = kk_std_core_types__new_None(_ctx); /*? int*/;
        kk_string_t _x_x185;
        kk_function_t _b_x80_93 = kk_std_test_bench_new_time_fun188(_ctx); /*(d : std/time/duration/duration, max-prec : ? int) -> string*/;
        kk_std_time_duration__duration _b_x81_94 = _x_x1_1_10015; /*std/time/duration/duration*/;
        kk_std_core_types__optional _b_x82_95 = kk_std_core_types__new_None(_ctx); /*? int*/;
        kk_string_t _x_x189;
        kk_define_string_literal(, _s_x190, 12, "Time: start:", _ctx)
        _x_x189 = kk_string_dup(_s_x190, _ctx); /*string*/
        kk_string_t _x_x191;
        kk_string_t _x_x192;
        kk_box_t _x_x193 = kk_std_core_hnd__open_none3(kk_std_test_bench_new_time_fun194(_ctx), kk_std_time_instant__instant_box(x_10026, _ctx), kk_std_core_types__optional_box(kk_std_core_types__new_None(_ctx), _ctx), kk_std_core_types__optional_box(kk_std_core_types__new_None(_ctx), _ctx), _ctx); /*1003*/
        _x_x192 = kk_string_unbox(_x_x193); /*string*/
        kk_string_t _x_x199;
        kk_string_t _x_x200;
        kk_define_string_literal(, _s_x201, 5, " end:", _ctx)
        _x_x200 = kk_string_dup(_s_x201, _ctx); /*string*/
        kk_string_t _x_x202;
        kk_string_t _x_x203;
        kk_box_t _x_x204 = kk_std_core_hnd__open_none3(kk_std_test_bench_new_time_fun205(_b_x73_89, _ctx), kk_std_time_instant__instant_box(_b_x74_90, _ctx), kk_std_core_types__optional_box(_b_x75_91, _ctx), kk_std_core_types__optional_box(_b_x76_92, _ctx), _ctx); /*1003*/
        _x_x203 = kk_string_unbox(_x_x204); /*string*/
        kk_string_t _x_x210;
        kk_string_t _x_x211;
        kk_define_string_literal(, _s_x212, 6, " diff:", _ctx)
        _x_x211 = kk_string_dup(_s_x212, _ctx); /*string*/
        kk_string_t _x_x213;
        kk_box_t _x_x214 = kk_std_core_hnd__open_none2(kk_std_test_bench_new_time_fun215(_b_x80_93, _ctx), kk_std_time_duration__duration_box(_b_x81_94, _ctx), kk_std_core_types__optional_box(_b_x82_95, _ctx), _ctx); /*1002*/
        _x_x213 = kk_string_unbox(_x_x214); /*string*/
        _x_x210 = kk_std_core_types__lp__plus__plus__rp_(_x_x211, _x_x213, _ctx); /*string*/
        _x_x202 = kk_std_core_types__lp__plus__plus__rp_(_x_x203, _x_x210, _ctx); /*string*/
        _x_x199 = kk_std_core_types__lp__plus__plus__rp_(_x_x200, _x_x202, _ctx); /*string*/
        _x_x191 = kk_std_core_types__lp__plus__plus__rp_(_x_x192, _x_x199, _ctx); /*string*/
        _x_x185 = kk_std_core_types__lp__plus__plus__rp_(_x_x189, _x_x191, _ctx); /*string*/
        kk_std_core_debug_trace(_x_x185, _ctx);
        return x_0_10029;
      }
    }
  }
}

// initialization
void kk_std_test_bench__init(kk_context_t* _ctx){
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
  kk_std_time_duration__init(_ctx);
  kk_std_time_instant__init(_ctx);
  kk_std_time_utc__init(_ctx);
  kk_std_time_chrono__init(_ctx);
  kk_std_num_ddouble__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
}

// termination
void kk_std_test_bench__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_num_ddouble__done(_ctx);
  kk_std_time_chrono__done(_ctx);
  kk_std_time_utc__done(_ctx);
  kk_std_time_instant__done(_ctx);
  kk_std_time_duration__done(_ctx);
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
