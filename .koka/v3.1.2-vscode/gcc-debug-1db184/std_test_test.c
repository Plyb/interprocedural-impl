// Koka generated module: std/test/test, koka version: 3.1.2, platform: 64-bit
#include "std_test_test.h"
 
// monadic lift

kk_std_test_test__expect_value kk_std_test_test_expect_value_fs__mlift_copy_10220(kk_function_t _c_x10088, kk_std_test_test__expect_value _this, kk_std_core_types__optional continue_on_error, kk_std_core_types__optional details, kk_std_core_types__optional expectation, kk_std_core_types__optional location, kk_std_core_types__optional run_value, kk_function_t _c_x10090, kk_context_t* _ctx) { /* forall<a> ((a, a) -> pure bool, expect-value<a>, continue-on-error : ? bool, details : ? (maybe<string>), expectation : ? (expectation<a>), location : ? string, run-value : ? (error<a>), (a) -> pure string) -> expect-value<a> */ 
  kk_std_core_exn__error _x_x943;
  if (kk_std_core_types__is_Optional(run_value, _ctx)) {
    kk_box_t _box_x0 = run_value._cons._Optional.value;
    kk_std_core_exn__error _uniq_run_value_418 = kk_std_core_exn__error_unbox(_box_x0, KK_BORROWED, _ctx);
    kk_std_core_exn__error_dup(_uniq_run_value_418, _ctx);
    kk_std_core_types__optional_drop(run_value, _ctx);
    _x_x943 = _uniq_run_value_418; /*error<521>*/
  }
  else {
    kk_std_core_types__optional_drop(run_value, _ctx);
    {
      struct kk_std_test_test_Expect_value* _con_x944 = kk_std_test_test__as_Expect_value(_this, _ctx);
      kk_std_core_exn__error _x = _con_x944->run_value;
      kk_std_core_exn__error_dup(_x, _ctx);
      _x_x943 = _x; /*error<521>*/
    }
  }
  kk_std_test_test__expectation _x_x945;
  if (kk_std_core_types__is_Optional(expectation, _ctx)) {
    kk_box_t _box_x1 = expectation._cons._Optional.value;
    kk_std_test_test__expectation _uniq_expectation_428 = kk_std_test_test__expectation_unbox(_box_x1, KK_BORROWED, _ctx);
    kk_std_test_test__expectation_dup(_uniq_expectation_428, _ctx);
    kk_std_core_types__optional_drop(expectation, _ctx);
    _x_x945 = _uniq_expectation_428; /*std/test/test/expectation<521>*/
  }
  else {
    kk_std_core_types__optional_drop(expectation, _ctx);
    {
      struct kk_std_test_test_Expect_value* _con_x946 = kk_std_test_test__as_Expect_value(_this, _ctx);
      kk_std_test_test__expectation _x_0 = _con_x946->expectation;
      kk_std_test_test__expectation_dup(_x_0, _ctx);
      _x_x945 = _x_0; /*std/test/test/expectation<521>*/
    }
  }
  kk_std_core_types__maybe _x_x947;
  if (kk_std_core_types__is_Optional(details, _ctx)) {
    kk_box_t _box_x2 = details._cons._Optional.value;
    kk_std_core_types__maybe _uniq_details_438 = kk_std_core_types__maybe_unbox(_box_x2, KK_BORROWED, _ctx);
    kk_std_core_types__maybe_dup(_uniq_details_438, _ctx);
    kk_std_core_types__optional_drop(details, _ctx);
    _x_x947 = _uniq_details_438; /*maybe<string>*/
  }
  else {
    kk_std_core_types__optional_drop(details, _ctx);
    {
      struct kk_std_test_test_Expect_value* _con_x948 = kk_std_test_test__as_Expect_value(_this, _ctx);
      kk_std_core_types__maybe _x_1 = _con_x948->details;
      kk_std_core_types__maybe_dup(_x_1, _ctx);
      _x_x947 = _x_1; /*maybe<string>*/
    }
  }
  bool _x_x949;
  if (kk_std_core_types__is_Optional(continue_on_error, _ctx)) {
    kk_box_t _box_x3 = continue_on_error._cons._Optional.value;
    bool _uniq_continue_on_error_448 = kk_bool_unbox(_box_x3);
    kk_std_core_types__optional_drop(continue_on_error, _ctx);
    _x_x949 = _uniq_continue_on_error_448; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(continue_on_error, _ctx);
    {
      struct kk_std_test_test_Expect_value* _con_x950 = kk_std_test_test__as_Expect_value(_this, _ctx);
      bool _x_2 = _con_x950->continue_on_error;
      _x_x949 = _x_2; /*bool*/
    }
  }
  kk_string_t _x_x951;
  if (kk_std_core_types__is_Optional(location, _ctx)) {
    kk_box_t _box_x4 = location._cons._Optional.value;
    kk_string_t _uniq_location_458 = kk_string_unbox(_box_x4);
    kk_string_dup(_uniq_location_458, _ctx);
    kk_std_core_types__optional_drop(location, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(9)), _ctx);
    _x_x951 = _uniq_location_458; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(location, _ctx);
    {
      struct kk_std_test_test_Expect_value* _con_x952 = kk_std_test_test__as_Expect_value(_this, _ctx);
      kk_std_core_exn__error _pat_0_4 = _con_x952->run_value;
      kk_std_test_test__expectation _pat_1_5 = _con_x952->expectation;
      kk_std_core_types__maybe _pat_2_4 = _con_x952->details;
      kk_string_t _x_3 = _con_x952->location;
      kk_function_t _pat_4_4 = _con_x952->eq;
      kk_function_t _pat_5_4 = _con_x952->show;
      if kk_likely(kk_datatype_ptr_is_unique(_this, _ctx)) {
        kk_function_drop(_pat_5_4, _ctx);
        kk_function_drop(_pat_4_4, _ctx);
        kk_std_core_types__maybe_drop(_pat_2_4, _ctx);
        kk_std_test_test__expectation_drop(_pat_1_5, _ctx);
        kk_std_core_exn__error_drop(_pat_0_4, _ctx);
        kk_datatype_ptr_free(_this, _ctx);
      }
      else {
        kk_string_dup(_x_3, _ctx);
        kk_datatype_ptr_decref(_this, _ctx);
      }
      _x_x951 = _x_3; /*string*/
    }
  }
  return kk_std_test_test__new_Expect_value(kk_reuse_null, 0, _x_x943, _x_x945, _x_x947, _x_x949, _x_x951, _c_x10088, _c_x10090, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_std_test_test_expect_value_fs__mlift_copy_10221_fun954__t {
  struct kk_function_s _base;
  kk_function_t _c_x10088;
  kk_std_test_test__expect_value _this;
  kk_std_core_types__optional continue_on_error;
  kk_std_core_types__optional details;
  kk_std_core_types__optional expectation;
  kk_std_core_types__optional location;
  kk_std_core_types__optional run_value;
};
static kk_box_t kk_std_test_test_expect_value_fs__mlift_copy_10221_fun954(kk_function_t _fself, kk_box_t _b_x6, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_expect_value_fs__new_mlift_copy_10221_fun954(kk_function_t _c_x10088, kk_std_test_test__expect_value _this, kk_std_core_types__optional continue_on_error, kk_std_core_types__optional details, kk_std_core_types__optional expectation, kk_std_core_types__optional location, kk_std_core_types__optional run_value, kk_context_t* _ctx) {
  struct kk_std_test_test_expect_value_fs__mlift_copy_10221_fun954__t* _self = kk_function_alloc_as(struct kk_std_test_test_expect_value_fs__mlift_copy_10221_fun954__t, 13, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_expect_value_fs__mlift_copy_10221_fun954, kk_context());
  _self->_c_x10088 = _c_x10088;
  _self->_this = _this;
  _self->continue_on_error = continue_on_error;
  _self->details = details;
  _self->expectation = expectation;
  _self->location = location;
  _self->run_value = run_value;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_test_test_expect_value_fs__mlift_copy_10221_fun955__t {
  struct kk_function_s _base;
  kk_box_t _b_x6;
};
static kk_string_t kk_std_test_test_expect_value_fs__mlift_copy_10221_fun955(kk_function_t _fself, kk_box_t _b_x9, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_expect_value_fs__new_mlift_copy_10221_fun955(kk_box_t _b_x6, kk_context_t* _ctx) {
  struct kk_std_test_test_expect_value_fs__mlift_copy_10221_fun955__t* _self = kk_function_alloc_as(struct kk_std_test_test_expect_value_fs__mlift_copy_10221_fun955__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_expect_value_fs__mlift_copy_10221_fun955, kk_context());
  _self->_b_x6 = _b_x6;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_std_test_test_expect_value_fs__mlift_copy_10221_fun955(kk_function_t _fself, kk_box_t _b_x9, kk_context_t* _ctx) {
  struct kk_std_test_test_expect_value_fs__mlift_copy_10221_fun955__t* _self = kk_function_as(struct kk_std_test_test_expect_value_fs__mlift_copy_10221_fun955__t*, _fself, _ctx);
  kk_box_t _b_x6 = _self->_b_x6; /* 2977 */
  kk_drop_match(_self, {kk_box_dup(_b_x6, _ctx);}, {}, _ctx)
  kk_box_t _x_x956;
  kk_function_t _x_x957 = kk_function_unbox(_b_x6, _ctx); /*(7) -> pure 8*/
  _x_x956 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _x_x957, (_x_x957, _b_x9, _ctx), _ctx); /*8*/
  return kk_string_unbox(_x_x956);
}
static kk_box_t kk_std_test_test_expect_value_fs__mlift_copy_10221_fun954(kk_function_t _fself, kk_box_t _b_x6, kk_context_t* _ctx) {
  struct kk_std_test_test_expect_value_fs__mlift_copy_10221_fun954__t* _self = kk_function_as(struct kk_std_test_test_expect_value_fs__mlift_copy_10221_fun954__t*, _fself, _ctx);
  kk_function_t _c_x10088 = _self->_c_x10088; /* (521, 521) -> pure bool */
  kk_std_test_test__expect_value _this = _self->_this; /* std/test/test/expect-value<521> */
  kk_std_core_types__optional continue_on_error = _self->continue_on_error; /* ? bool */
  kk_std_core_types__optional details = _self->details; /* ? (maybe<string>) */
  kk_std_core_types__optional expectation = _self->expectation; /* ? (std/test/test/expectation<521>) */
  kk_std_core_types__optional location = _self->location; /* ? string */
  kk_std_core_types__optional run_value = _self->run_value; /* ? (error<521>) */
  kk_drop_match(_self, {kk_function_dup(_c_x10088, _ctx);kk_std_test_test__expect_value_dup(_this, _ctx);kk_std_core_types__optional_dup(continue_on_error, _ctx);kk_std_core_types__optional_dup(details, _ctx);kk_std_core_types__optional_dup(expectation, _ctx);kk_std_core_types__optional_dup(location, _ctx);kk_std_core_types__optional_dup(run_value, _ctx);}, {}, _ctx)
  kk_function_t _c_x10090_18 = kk_std_test_test_expect_value_fs__new_mlift_copy_10221_fun955(_b_x6, _ctx); /*(521) -> pure string*/;
  kk_std_test_test__expect_value _x_x958 = kk_std_test_test_expect_value_fs__mlift_copy_10220(_c_x10088, _this, continue_on_error, details, expectation, location, run_value, _c_x10090_18, _ctx); /*std/test/test/expect-value<521>*/
  return kk_std_test_test__expect_value_box(_x_x958, _ctx);
}


// lift anonymous function
struct kk_std_test_test_expect_value_fs__mlift_copy_10221_fun961__t {
  struct kk_function_s _base;
  kk_box_t _fun_unbox_x13;
};
static kk_string_t kk_std_test_test_expect_value_fs__mlift_copy_10221_fun961(kk_function_t _fself, kk_box_t _b_x16, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_expect_value_fs__new_mlift_copy_10221_fun961(kk_box_t _fun_unbox_x13, kk_context_t* _ctx) {
  struct kk_std_test_test_expect_value_fs__mlift_copy_10221_fun961__t* _self = kk_function_alloc_as(struct kk_std_test_test_expect_value_fs__mlift_copy_10221_fun961__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_expect_value_fs__mlift_copy_10221_fun961, kk_context());
  _self->_fun_unbox_x13 = _fun_unbox_x13;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_std_test_test_expect_value_fs__mlift_copy_10221_fun961(kk_function_t _fself, kk_box_t _b_x16, kk_context_t* _ctx) {
  struct kk_std_test_test_expect_value_fs__mlift_copy_10221_fun961__t* _self = kk_function_as(struct kk_std_test_test_expect_value_fs__mlift_copy_10221_fun961__t*, _fself, _ctx);
  kk_box_t _fun_unbox_x13 = _self->_fun_unbox_x13; /* 7 */
  kk_drop_match(_self, {kk_box_dup(_fun_unbox_x13, _ctx);}, {}, _ctx)
  kk_box_t _x_x962;
  kk_function_t _x_x963 = kk_function_unbox(_fun_unbox_x13, _ctx); /*(14) -> pure 15*/
  _x_x962 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _x_x963, (_x_x963, _b_x16, _ctx), _ctx); /*15*/
  return kk_string_unbox(_x_x962);
}

kk_std_test_test__expect_value kk_std_test_test_expect_value_fs__mlift_copy_10221(kk_std_test_test__expect_value _this, kk_std_core_types__optional continue_on_error, kk_std_core_types__optional details, kk_std_core_types__optional expectation, kk_std_core_types__optional location, kk_std_core_types__optional run_value, kk_std_core_types__optional show_0, kk_function_t _c_x10088, kk_context_t* _ctx) { /* forall<a> (expect-value<a>, continue-on-error : ? bool, details : ? (maybe<string>), expectation : ? (expectation<a>), location : ? string, run-value : ? (error<a>), show@0 : ? ((a) -> pure string), (a, a) -> pure bool) -> expect-value<a> */ 
  if (kk_yielding(kk_context())) {
    kk_std_core_types__optional_drop(show_0, _ctx);
    kk_box_t _x_x953 = kk_std_core_hnd_yield_extend(kk_std_test_test_expect_value_fs__new_mlift_copy_10221_fun954(_c_x10088, _this, continue_on_error, details, expectation, location, run_value, _ctx), _ctx); /*2978*/
    return kk_std_test_test__expect_value_unbox(_x_x953, KK_OWNED, _ctx);
  }
  {
    kk_std_test_test__expect_value _x_x959 = kk_std_test_test__expect_value_dup(_this, _ctx); /*std/test/test/expect-value<521>*/
    kk_function_t _x_x960;
    if (kk_std_core_types__is_Optional(show_0, _ctx)) {
      kk_box_t _fun_unbox_x13 = show_0._cons._Optional.value;
      kk_box_dup(_fun_unbox_x13, _ctx);
      kk_std_core_types__optional_drop(show_0, _ctx);
      kk_datatype_ptr_dropn(_this, (KK_I32(9)), _ctx);
      _x_x960 = kk_std_test_test_expect_value_fs__new_mlift_copy_10221_fun961(_fun_unbox_x13, _ctx); /*(521) -> pure string*/
    }
    else {
      kk_std_core_types__optional_drop(show_0, _ctx);
      {
        struct kk_std_test_test_Expect_value* _con_x964 = kk_std_test_test__as_Expect_value(_this, _ctx);
        kk_std_core_exn__error _pat_0_6 = _con_x964->run_value;
        kk_std_test_test__expectation _pat_1_7 = _con_x964->expectation;
        kk_std_core_types__maybe _pat_2_6 = _con_x964->details;
        kk_string_t _pat_4_6 = _con_x964->location;
        kk_function_t _pat_5_6 = _con_x964->eq;
        kk_function_t _x_5 = _con_x964->show;
        if kk_likely(kk_datatype_ptr_is_unique(_this, _ctx)) {
          kk_function_drop(_pat_5_6, _ctx);
          kk_string_drop(_pat_4_6, _ctx);
          kk_std_core_types__maybe_drop(_pat_2_6, _ctx);
          kk_std_test_test__expectation_drop(_pat_1_7, _ctx);
          kk_std_core_exn__error_drop(_pat_0_6, _ctx);
          kk_datatype_ptr_free(_this, _ctx);
        }
        else {
          kk_function_dup(_x_5, _ctx);
          kk_datatype_ptr_decref(_this, _ctx);
        }
        _x_x960 = _x_5; /*(521) -> pure string*/
      }
    }
    return kk_std_test_test_expect_value_fs__mlift_copy_10220(_c_x10088, _x_x959, continue_on_error, details, expectation, location, run_value, _x_x960, _ctx);
  }
}


// lift anonymous function
struct kk_std_test_test_expect_value_fs__copy_fun966__t {
  struct kk_function_s _base;
  kk_std_test_test__expect_value _this;
  kk_std_core_types__optional continue_on_error;
  kk_std_core_types__optional details;
  kk_std_core_types__optional expectation;
  kk_std_core_types__optional location;
  kk_std_core_types__optional run_value;
  kk_std_core_types__optional show_0;
};
static kk_box_t kk_std_test_test_expect_value_fs__copy_fun966(kk_function_t _fself, kk_box_t _b_x20, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_expect_value_fs__new_copy_fun966(kk_std_test_test__expect_value _this, kk_std_core_types__optional continue_on_error, kk_std_core_types__optional details, kk_std_core_types__optional expectation, kk_std_core_types__optional location, kk_std_core_types__optional run_value, kk_std_core_types__optional show_0, kk_context_t* _ctx) {
  struct kk_std_test_test_expect_value_fs__copy_fun966__t* _self = kk_function_alloc_as(struct kk_std_test_test_expect_value_fs__copy_fun966__t, 14, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_expect_value_fs__copy_fun966, kk_context());
  _self->_this = _this;
  _self->continue_on_error = continue_on_error;
  _self->details = details;
  _self->expectation = expectation;
  _self->location = location;
  _self->run_value = run_value;
  _self->show_0 = show_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_test_test_expect_value_fs__copy_fun967__t {
  struct kk_function_s _base;
  kk_box_t _b_x20;
};
static bool kk_std_test_test_expect_value_fs__copy_fun967(kk_function_t _fself, kk_box_t _b_x24, kk_box_t _b_x25, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_expect_value_fs__new_copy_fun967(kk_box_t _b_x20, kk_context_t* _ctx) {
  struct kk_std_test_test_expect_value_fs__copy_fun967__t* _self = kk_function_alloc_as(struct kk_std_test_test_expect_value_fs__copy_fun967__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_expect_value_fs__copy_fun967, kk_context());
  _self->_b_x20 = _b_x20;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_std_test_test_expect_value_fs__copy_fun967(kk_function_t _fself, kk_box_t _b_x24, kk_box_t _b_x25, kk_context_t* _ctx) {
  struct kk_std_test_test_expect_value_fs__copy_fun967__t* _self = kk_function_as(struct kk_std_test_test_expect_value_fs__copy_fun967__t*, _fself, _ctx);
  kk_box_t _b_x20 = _self->_b_x20; /* 2977 */
  kk_drop_match(_self, {kk_box_dup(_b_x20, _ctx);}, {}, _ctx)
  kk_box_t _x_x968;
  kk_function_t _x_x969 = kk_function_unbox(_b_x20, _ctx); /*(21, 22) -> pure 23*/
  _x_x968 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x969, (_x_x969, _b_x24, _b_x25, _ctx), _ctx); /*23*/
  return kk_bool_unbox(_x_x968);
}
static kk_box_t kk_std_test_test_expect_value_fs__copy_fun966(kk_function_t _fself, kk_box_t _b_x20, kk_context_t* _ctx) {
  struct kk_std_test_test_expect_value_fs__copy_fun966__t* _self = kk_function_as(struct kk_std_test_test_expect_value_fs__copy_fun966__t*, _fself, _ctx);
  kk_std_test_test__expect_value _this = _self->_this; /* std/test/test/expect-value<521> */
  kk_std_core_types__optional continue_on_error = _self->continue_on_error; /* ? bool */
  kk_std_core_types__optional details = _self->details; /* ? (maybe<string>) */
  kk_std_core_types__optional expectation = _self->expectation; /* ? (std/test/test/expectation<521>) */
  kk_std_core_types__optional location = _self->location; /* ? string */
  kk_std_core_types__optional run_value = _self->run_value; /* ? (error<521>) */
  kk_std_core_types__optional show_0 = _self->show_0; /* ? ((521) -> pure string) */
  kk_drop_match(_self, {kk_std_test_test__expect_value_dup(_this, _ctx);kk_std_core_types__optional_dup(continue_on_error, _ctx);kk_std_core_types__optional_dup(details, _ctx);kk_std_core_types__optional_dup(expectation, _ctx);kk_std_core_types__optional_dup(location, _ctx);kk_std_core_types__optional_dup(run_value, _ctx);kk_std_core_types__optional_dup(show_0, _ctx);}, {}, _ctx)
  kk_function_t _c_x10088_67 = kk_std_test_test_expect_value_fs__new_copy_fun967(_b_x20, _ctx); /*(521, 521) -> pure bool*/;
  kk_std_test_test__expect_value _x_x970 = kk_std_test_test_expect_value_fs__mlift_copy_10221(_this, continue_on_error, details, expectation, location, run_value, show_0, _c_x10088_67, _ctx); /*std/test/test/expect-value<521>*/
  return kk_std_test_test__expect_value_box(_x_x970, _ctx);
}


// lift anonymous function
struct kk_std_test_test_expect_value_fs__copy_fun972__t {
  struct kk_function_s _base;
  kk_std_test_test__expect_value _this;
  kk_std_core_types__optional continue_on_error;
  kk_std_core_types__optional details;
  kk_std_core_types__optional eq;
  kk_std_core_types__optional expectation;
  kk_std_core_types__optional location;
  kk_std_core_types__optional run_value;
};
static kk_box_t kk_std_test_test_expect_value_fs__copy_fun972(kk_function_t _fself, kk_box_t _b_x38, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_expect_value_fs__new_copy_fun972(kk_std_test_test__expect_value _this, kk_std_core_types__optional continue_on_error, kk_std_core_types__optional details, kk_std_core_types__optional eq, kk_std_core_types__optional expectation, kk_std_core_types__optional location, kk_std_core_types__optional run_value, kk_context_t* _ctx) {
  struct kk_std_test_test_expect_value_fs__copy_fun972__t* _self = kk_function_alloc_as(struct kk_std_test_test_expect_value_fs__copy_fun972__t, 14, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_expect_value_fs__copy_fun972, kk_context());
  _self->_this = _this;
  _self->continue_on_error = continue_on_error;
  _self->details = details;
  _self->eq = eq;
  _self->expectation = expectation;
  _self->location = location;
  _self->run_value = run_value;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_test_test_expect_value_fs__copy_fun973__t {
  struct kk_function_s _base;
  kk_box_t _b_x38;
};
static kk_string_t kk_std_test_test_expect_value_fs__copy_fun973(kk_function_t _fself, kk_box_t _b_x41, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_expect_value_fs__new_copy_fun973(kk_box_t _b_x38, kk_context_t* _ctx) {
  struct kk_std_test_test_expect_value_fs__copy_fun973__t* _self = kk_function_alloc_as(struct kk_std_test_test_expect_value_fs__copy_fun973__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_expect_value_fs__copy_fun973, kk_context());
  _self->_b_x38 = _b_x38;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_std_test_test_expect_value_fs__copy_fun973(kk_function_t _fself, kk_box_t _b_x41, kk_context_t* _ctx) {
  struct kk_std_test_test_expect_value_fs__copy_fun973__t* _self = kk_function_as(struct kk_std_test_test_expect_value_fs__copy_fun973__t*, _fself, _ctx);
  kk_box_t _b_x38 = _self->_b_x38; /* 2977 */
  kk_drop_match(_self, {kk_box_dup(_b_x38, _ctx);}, {}, _ctx)
  kk_box_t _x_x974;
  kk_function_t _x_x975 = kk_function_unbox(_b_x38, _ctx); /*(39) -> pure 40*/
  _x_x974 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _x_x975, (_x_x975, _b_x41, _ctx), _ctx); /*40*/
  return kk_string_unbox(_x_x974);
}


// lift anonymous function
struct kk_std_test_test_expect_value_fs__copy_fun978__t {
  struct kk_function_s _base;
  kk_box_t _fun_unbox_x31;
};
static bool kk_std_test_test_expect_value_fs__copy_fun978(kk_function_t _fself, kk_box_t _b_x35, kk_box_t _b_x36, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_expect_value_fs__new_copy_fun978(kk_box_t _fun_unbox_x31, kk_context_t* _ctx) {
  struct kk_std_test_test_expect_value_fs__copy_fun978__t* _self = kk_function_alloc_as(struct kk_std_test_test_expect_value_fs__copy_fun978__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_expect_value_fs__copy_fun978, kk_context());
  _self->_fun_unbox_x31 = _fun_unbox_x31;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_std_test_test_expect_value_fs__copy_fun978(kk_function_t _fself, kk_box_t _b_x35, kk_box_t _b_x36, kk_context_t* _ctx) {
  struct kk_std_test_test_expect_value_fs__copy_fun978__t* _self = kk_function_as(struct kk_std_test_test_expect_value_fs__copy_fun978__t*, _fself, _ctx);
  kk_box_t _fun_unbox_x31 = _self->_fun_unbox_x31; /* 7 */
  kk_drop_match(_self, {kk_box_dup(_fun_unbox_x31, _ctx);}, {}, _ctx)
  kk_box_t _x_x979;
  kk_function_t _x_x980 = kk_function_unbox(_fun_unbox_x31, _ctx); /*(32, 33) -> pure 34*/
  _x_x979 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x980, (_x_x980, _b_x35, _b_x36, _ctx), _ctx); /*34*/
  return kk_bool_unbox(_x_x979);
}
static kk_box_t kk_std_test_test_expect_value_fs__copy_fun972(kk_function_t _fself, kk_box_t _b_x38, kk_context_t* _ctx) {
  struct kk_std_test_test_expect_value_fs__copy_fun972__t* _self = kk_function_as(struct kk_std_test_test_expect_value_fs__copy_fun972__t*, _fself, _ctx);
  kk_std_test_test__expect_value _this = _self->_this; /* std/test/test/expect-value<521> */
  kk_std_core_types__optional continue_on_error = _self->continue_on_error; /* ? bool */
  kk_std_core_types__optional details = _self->details; /* ? (maybe<string>) */
  kk_std_core_types__optional eq = _self->eq; /* ? ((521, 521) -> pure bool) */
  kk_std_core_types__optional expectation = _self->expectation; /* ? (std/test/test/expectation<521>) */
  kk_std_core_types__optional location = _self->location; /* ? string */
  kk_std_core_types__optional run_value = _self->run_value; /* ? (error<521>) */
  kk_drop_match(_self, {kk_std_test_test__expect_value_dup(_this, _ctx);kk_std_core_types__optional_dup(continue_on_error, _ctx);kk_std_core_types__optional_dup(details, _ctx);kk_std_core_types__optional_dup(eq, _ctx);kk_std_core_types__optional_dup(expectation, _ctx);kk_std_core_types__optional_dup(location, _ctx);kk_std_core_types__optional_dup(run_value, _ctx);}, {}, _ctx)
  kk_function_t _c_x10090_68 = kk_std_test_test_expect_value_fs__new_copy_fun973(_b_x38, _ctx); /*(521) -> pure string*/;
  kk_std_test_test__expect_value _x_x976;
  kk_function_t _x_x977;
  if (kk_std_core_types__is_Optional(eq, _ctx)) {
    kk_box_t _fun_unbox_x31 = eq._cons._Optional.value;
    kk_box_dup(_fun_unbox_x31, _ctx);
    kk_std_core_types__optional_drop(eq, _ctx);
    _x_x977 = kk_std_test_test_expect_value_fs__new_copy_fun978(_fun_unbox_x31, _ctx); /*(521, 521) -> pure bool*/
  }
  else {
    kk_std_core_types__optional_drop(eq, _ctx);
    {
      struct kk_std_test_test_Expect_value* _con_x981 = kk_std_test_test__as_Expect_value(_this, _ctx);
      kk_function_t _x_4 = _con_x981->eq;
      kk_function_dup(_x_4, _ctx);
      _x_x977 = _x_4; /*(521, 521) -> pure bool*/
    }
  }
  _x_x976 = kk_std_test_test_expect_value_fs__mlift_copy_10220(_x_x977, _this, continue_on_error, details, expectation, location, run_value, _c_x10090_68, _ctx); /*std/test/test/expect-value<521>*/
  return kk_std_test_test__expect_value_box(_x_x976, _ctx);
}


// lift anonymous function
struct kk_std_test_test_expect_value_fs__copy_fun993__t {
  struct kk_function_s _base;
  kk_box_t _fun_unbox_x52;
};
static bool kk_std_test_test_expect_value_fs__copy_fun993(kk_function_t _fself, kk_box_t _b_x56, kk_box_t _b_x57, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_expect_value_fs__new_copy_fun993(kk_box_t _fun_unbox_x52, kk_context_t* _ctx) {
  struct kk_std_test_test_expect_value_fs__copy_fun993__t* _self = kk_function_alloc_as(struct kk_std_test_test_expect_value_fs__copy_fun993__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_expect_value_fs__copy_fun993, kk_context());
  _self->_fun_unbox_x52 = _fun_unbox_x52;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_std_test_test_expect_value_fs__copy_fun993(kk_function_t _fself, kk_box_t _b_x56, kk_box_t _b_x57, kk_context_t* _ctx) {
  struct kk_std_test_test_expect_value_fs__copy_fun993__t* _self = kk_function_as(struct kk_std_test_test_expect_value_fs__copy_fun993__t*, _fself, _ctx);
  kk_box_t _fun_unbox_x52 = _self->_fun_unbox_x52; /* 7 */
  kk_drop_match(_self, {kk_box_dup(_fun_unbox_x52, _ctx);}, {}, _ctx)
  kk_box_t _x_x994;
  kk_function_t _x_x995 = kk_function_unbox(_fun_unbox_x52, _ctx); /*(53, 54) -> pure 55*/
  _x_x994 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x995, (_x_x995, _b_x56, _b_x57, _ctx), _ctx); /*55*/
  return kk_bool_unbox(_x_x994);
}


// lift anonymous function
struct kk_std_test_test_expect_value_fs__copy_fun998__t {
  struct kk_function_s _base;
  kk_box_t _fun_unbox_x61;
};
static kk_string_t kk_std_test_test_expect_value_fs__copy_fun998(kk_function_t _fself, kk_box_t _b_x64, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_expect_value_fs__new_copy_fun998(kk_box_t _fun_unbox_x61, kk_context_t* _ctx) {
  struct kk_std_test_test_expect_value_fs__copy_fun998__t* _self = kk_function_alloc_as(struct kk_std_test_test_expect_value_fs__copy_fun998__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_expect_value_fs__copy_fun998, kk_context());
  _self->_fun_unbox_x61 = _fun_unbox_x61;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_std_test_test_expect_value_fs__copy_fun998(kk_function_t _fself, kk_box_t _b_x64, kk_context_t* _ctx) {
  struct kk_std_test_test_expect_value_fs__copy_fun998__t* _self = kk_function_as(struct kk_std_test_test_expect_value_fs__copy_fun998__t*, _fself, _ctx);
  kk_box_t _fun_unbox_x61 = _self->_fun_unbox_x61; /* 7 */
  kk_drop_match(_self, {kk_box_dup(_fun_unbox_x61, _ctx);}, {}, _ctx)
  kk_box_t _x_x999;
  kk_function_t _x_x1000 = kk_function_unbox(_fun_unbox_x61, _ctx); /*(62) -> pure 63*/
  _x_x999 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _x_x1000, (_x_x1000, _b_x64, _ctx), _ctx); /*63*/
  return kk_string_unbox(_x_x999);
}

kk_std_test_test__expect_value kk_std_test_test_expect_value_fs__copy(kk_std_test_test__expect_value _this, kk_std_core_types__optional run_value, kk_std_core_types__optional expectation, kk_std_core_types__optional details, kk_std_core_types__optional continue_on_error, kk_std_core_types__optional location, kk_std_core_types__optional eq, kk_std_core_types__optional show_0, kk_context_t* _ctx) { /* forall<a> (expect-value<a>, run-value : ? (error<a>), expectation : ? (expectation<a>), details : ? (maybe<string>), continue-on-error : ? bool, location : ? string, eq : ? ((a, a) -> pure bool), show : ? ((a) -> pure string)) -> expect-value<a> */ 
  if (kk_yielding(kk_context())) {
    kk_std_core_types__optional_drop(eq, _ctx);
    kk_box_t _x_x965 = kk_std_core_hnd_yield_extend(kk_std_test_test_expect_value_fs__new_copy_fun966(_this, continue_on_error, details, expectation, location, run_value, show_0, _ctx), _ctx); /*2978*/
    return kk_std_test_test__expect_value_unbox(_x_x965, KK_OWNED, _ctx);
  }
  if (kk_yielding(kk_context())) {
    kk_std_core_types__optional_drop(show_0, _ctx);
    kk_box_t _x_x971 = kk_std_core_hnd_yield_extend(kk_std_test_test_expect_value_fs__new_copy_fun972(_this, continue_on_error, details, eq, expectation, location, run_value, _ctx), _ctx); /*2978*/
    return kk_std_test_test__expect_value_unbox(_x_x971, KK_OWNED, _ctx);
  }
  {
    kk_std_core_exn__error _x_x982;
    if (kk_std_core_types__is_Optional(run_value, _ctx)) {
      kk_box_t _box_x42 = run_value._cons._Optional.value;
      kk_std_core_exn__error _uniq_run_value_418 = kk_std_core_exn__error_unbox(_box_x42, KK_BORROWED, _ctx);
      kk_std_core_exn__error_dup(_uniq_run_value_418, _ctx);
      kk_std_core_types__optional_drop(run_value, _ctx);
      _x_x982 = _uniq_run_value_418; /*error<521>*/
    }
    else {
      kk_std_core_types__optional_drop(run_value, _ctx);
      {
        struct kk_std_test_test_Expect_value* _con_x983 = kk_std_test_test__as_Expect_value(_this, _ctx);
        kk_std_core_exn__error _x = _con_x983->run_value;
        kk_std_core_exn__error_dup(_x, _ctx);
        _x_x982 = _x; /*error<521>*/
      }
    }
    kk_std_test_test__expectation _x_x984;
    if (kk_std_core_types__is_Optional(expectation, _ctx)) {
      kk_box_t _box_x43 = expectation._cons._Optional.value;
      kk_std_test_test__expectation _uniq_expectation_428 = kk_std_test_test__expectation_unbox(_box_x43, KK_BORROWED, _ctx);
      kk_std_test_test__expectation_dup(_uniq_expectation_428, _ctx);
      kk_std_core_types__optional_drop(expectation, _ctx);
      _x_x984 = _uniq_expectation_428; /*std/test/test/expectation<521>*/
    }
    else {
      kk_std_core_types__optional_drop(expectation, _ctx);
      {
        struct kk_std_test_test_Expect_value* _con_x985 = kk_std_test_test__as_Expect_value(_this, _ctx);
        kk_std_test_test__expectation _x_0 = _con_x985->expectation;
        kk_std_test_test__expectation_dup(_x_0, _ctx);
        _x_x984 = _x_0; /*std/test/test/expectation<521>*/
      }
    }
    kk_std_core_types__maybe _x_x986;
    if (kk_std_core_types__is_Optional(details, _ctx)) {
      kk_box_t _box_x44 = details._cons._Optional.value;
      kk_std_core_types__maybe _uniq_details_438 = kk_std_core_types__maybe_unbox(_box_x44, KK_BORROWED, _ctx);
      kk_std_core_types__maybe_dup(_uniq_details_438, _ctx);
      kk_std_core_types__optional_drop(details, _ctx);
      _x_x986 = _uniq_details_438; /*maybe<string>*/
    }
    else {
      kk_std_core_types__optional_drop(details, _ctx);
      {
        struct kk_std_test_test_Expect_value* _con_x987 = kk_std_test_test__as_Expect_value(_this, _ctx);
        kk_std_core_types__maybe _x_1 = _con_x987->details;
        kk_std_core_types__maybe_dup(_x_1, _ctx);
        _x_x986 = _x_1; /*maybe<string>*/
      }
    }
    bool _x_x988;
    if (kk_std_core_types__is_Optional(continue_on_error, _ctx)) {
      kk_box_t _box_x45 = continue_on_error._cons._Optional.value;
      bool _uniq_continue_on_error_448 = kk_bool_unbox(_box_x45);
      kk_std_core_types__optional_drop(continue_on_error, _ctx);
      _x_x988 = _uniq_continue_on_error_448; /*bool*/
    }
    else {
      kk_std_core_types__optional_drop(continue_on_error, _ctx);
      {
        struct kk_std_test_test_Expect_value* _con_x989 = kk_std_test_test__as_Expect_value(_this, _ctx);
        bool _x_2 = _con_x989->continue_on_error;
        _x_x988 = _x_2; /*bool*/
      }
    }
    kk_string_t _x_x990;
    if (kk_std_core_types__is_Optional(location, _ctx)) {
      kk_box_t _box_x46 = location._cons._Optional.value;
      kk_string_t _uniq_location_458 = kk_string_unbox(_box_x46);
      kk_string_dup(_uniq_location_458, _ctx);
      kk_std_core_types__optional_drop(location, _ctx);
      _x_x990 = _uniq_location_458; /*string*/
    }
    else {
      kk_std_core_types__optional_drop(location, _ctx);
      {
        struct kk_std_test_test_Expect_value* _con_x991 = kk_std_test_test__as_Expect_value(_this, _ctx);
        kk_string_t _x_3 = _con_x991->location;
        kk_string_dup(_x_3, _ctx);
        _x_x990 = _x_3; /*string*/
      }
    }
    kk_function_t _x_x992;
    if (kk_std_core_types__is_Optional(eq, _ctx)) {
      kk_box_t _fun_unbox_x52 = eq._cons._Optional.value;
      kk_box_dup(_fun_unbox_x52, _ctx);
      kk_std_core_types__optional_drop(eq, _ctx);
      _x_x992 = kk_std_test_test_expect_value_fs__new_copy_fun993(_fun_unbox_x52, _ctx); /*(521, 521) -> pure bool*/
    }
    else {
      kk_std_core_types__optional_drop(eq, _ctx);
      {
        struct kk_std_test_test_Expect_value* _con_x996 = kk_std_test_test__as_Expect_value(_this, _ctx);
        kk_function_t _x_4_0 = _con_x996->eq;
        kk_function_dup(_x_4_0, _ctx);
        _x_x992 = _x_4_0; /*(521, 521) -> pure bool*/
      }
    }
    kk_function_t _x_x997;
    if (kk_std_core_types__is_Optional(show_0, _ctx)) {
      kk_box_t _fun_unbox_x61 = show_0._cons._Optional.value;
      kk_box_dup(_fun_unbox_x61, _ctx);
      kk_std_core_types__optional_drop(show_0, _ctx);
      kk_datatype_ptr_dropn(_this, (KK_I32(9)), _ctx);
      _x_x997 = kk_std_test_test_expect_value_fs__new_copy_fun998(_fun_unbox_x61, _ctx); /*(521) -> pure string*/
    }
    else {
      kk_std_core_types__optional_drop(show_0, _ctx);
      {
        struct kk_std_test_test_Expect_value* _con_x1001 = kk_std_test_test__as_Expect_value(_this, _ctx);
        kk_std_core_exn__error _pat_0_6 = _con_x1001->run_value;
        kk_std_test_test__expectation _pat_1_7 = _con_x1001->expectation;
        kk_std_core_types__maybe _pat_2_6 = _con_x1001->details;
        kk_string_t _pat_4_6 = _con_x1001->location;
        kk_function_t _pat_5_6 = _con_x1001->eq;
        kk_function_t _x_5 = _con_x1001->show;
        if kk_likely(kk_datatype_ptr_is_unique(_this, _ctx)) {
          kk_function_drop(_pat_5_6, _ctx);
          kk_string_drop(_pat_4_6, _ctx);
          kk_std_core_types__maybe_drop(_pat_2_6, _ctx);
          kk_std_test_test__expectation_drop(_pat_1_7, _ctx);
          kk_std_core_exn__error_drop(_pat_0_6, _ctx);
          kk_datatype_ptr_free(_this, _ctx);
        }
        else {
          kk_function_dup(_x_5, _ctx);
          kk_datatype_ptr_decref(_this, _ctx);
        }
        _x_x997 = _x_5; /*(521) -> pure string*/
      }
    }
    return kk_std_test_test__new_Expect_value(kk_reuse_null, 0, _x_x982, _x_x984, _x_x986, _x_x988, _x_x990, _x_x992, _x_x997, _ctx);
  }
}
 
// runtime tag for the effect `:test`

kk_std_core_hnd__htag kk_std_test_test__tag_test;
 
// handler for the effect `:test`

kk_box_t kk_std_test_test__handle_test(kk_std_test_test__test hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : test<e,b>, ret : (res : a) -> e b, action : () -> <test|e> a) -> e b */ 
  kk_std_core_hnd__htag _x_x1010 = kk_std_core_hnd__htag_dup(kk_std_test_test__tag_test, _ctx); /*hnd/htag<std/test/test/test>*/
  return kk_std_core_hnd__hhandle(_x_x1010, kk_std_test_test__test_box(hnd, _ctx), ret, action, _ctx);
}
 
// runtime tag for the effect `:test-scope`

kk_std_core_hnd__htag kk_std_test_test__tag_test_scope;
 
// handler for the effect `:test-scope`

kk_box_t kk_std_test_test__handle_test_scope(kk_std_test_test__test_scope hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : test-scope<e,b>, ret : (res : a) -> e b, action : () -> <test-scope|e> a) -> e b */ 
  kk_std_core_hnd__htag _x_x1016 = kk_std_core_hnd__htag_dup(kk_std_test_test__tag_test_scope, _ctx); /*hnd/htag<std/test/test/test-scope>*/
  return kk_std_core_hnd__hhandle(_x_x1016, kk_std_test_test__test_scope_box(hnd, _ctx), ret, action, _ctx);
}
 
// Call the `val scope-name` operation of the effect `:test-scope`
 
// Call the `val indentation` operation of the effect `:test-scope`

kk_string_t kk_std_test_test_show(kk_std_test_test__expectation a, kk_function_t _implicit_fs_show, kk_context_t* _ctx) { /* forall<a> (a : expectation<a>, ?show : (a) -> pure string) -> pure string */ 
  if (kk_std_test_test__is_ExpectedValue(a, _ctx)) {
    struct kk_std_test_test_ExpectedValue* _con_x1029 = kk_std_test_test__as_ExpectedValue(a, _ctx);
    kk_box_t a_0 = _con_x1029->a;
    if kk_likely(kk_datatype_ptr_is_unique(a, _ctx)) {
      kk_datatype_ptr_free(a, _ctx);
    }
    else {
      kk_box_dup(a_0, _ctx);
      kk_datatype_ptr_decref(a, _ctx);
    }
    return kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), _implicit_fs_show, (_implicit_fs_show, a_0, _ctx), _ctx);
  }
  if (kk_std_test_test__is_ExpectedError(a, _ctx)) {
    struct kk_std_test_test_ExpectedError* _con_x1030 = kk_std_test_test__as_ExpectedError(a, _ctx);
    kk_string_t a_1 = _con_x1030->str;
    kk_function_drop(_implicit_fs_show, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(a, _ctx)) {
      kk_datatype_ptr_free(a, _ctx);
    }
    else {
      kk_string_dup(a_1, _ctx);
      kk_datatype_ptr_decref(a, _ctx);
    }
    kk_string_t _x_x1031;
    kk_define_string_literal(, _s_x1032, 7, "error: ", _ctx)
    _x_x1031 = kk_string_dup(_s_x1032, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x1031, a_1, _ctx);
  }
  {
    struct kk_std_test_test_ExpectedAssertion* _con_x1033 = kk_std_test_test__as_ExpectedAssertion(a, _ctx);
    kk_string_t a_2 = _con_x1033->str;
    kk_function_drop(_implicit_fs_show, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(a, _ctx)) {
      kk_datatype_ptr_free(a, _ctx);
    }
    else {
      kk_string_dup(a_2, _ctx);
      kk_datatype_ptr_decref(a, _ctx);
    }
    kk_string_t _x_x1034;
    kk_define_string_literal(, _s_x1035, 11, "assertion: ", _ctx)
    _x_x1034 = kk_string_dup(_s_x1035, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x1034, a_2, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_test_test__mlift_expect_result_10222_fun1051__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_test__mlift_expect_result_10222_fun1051(kk_function_t _fself, kk_box_t _b_x127, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_expect_result_10222_fun1051(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test__mlift_expect_result_10222_fun1051, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_test__mlift_expect_result_10222_fun1051(kk_function_t _fself, kk_box_t _b_x127, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_hnd__ev ev_10270 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/test/test/test>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x1052 = kk_std_core_hnd__as_Ev(ev_10270, _ctx);
    kk_box_t _box_x116 = _con_x1052->hnd;
    int32_t m = _con_x1052->marker;
    kk_std_test_test__test h = kk_std_test_test__test_unbox(_box_x116, KK_BORROWED, _ctx);
    kk_std_test_test__test_dup(h, _ctx);
    {
      struct kk_std_test_test__Hnd_test* _con_x1053 = kk_std_test_test__as_Hnd_test(h, _ctx);
      kk_integer_t _pat_0_2 = _con_x1053->_cfc;
      kk_std_core_hnd__clause1 _ctl_test_expect = _con_x1053->_ctl_test_expect;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0_2, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_ctl_test_expect, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x120 = _ctl_test_expect.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x120, (_fun_unbox_x120, m, ev_10270, _b_x127, _ctx), _ctx);
      }
    }
  }
}

kk_box_t kk_std_test_test__mlift_expect_result_10222(kk_std_core_types__optional continue_on_error, kk_std_core_types__optional details, kk_box_t expected, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_string_t _implicit_fs_kk_line, kk_string_t _implicit_fs_kk_module, kk_function_t _implicit_fs_show, kk_std_core_exn__error res, kk_context_t* _ctx) { /* forall<a,e> (continue-on-error : ? bool, details : ? string, expected : a, ?(==) : (a, a) -> pure bool, ?kk-line : string, ?kk-module : string, ?show : (a) -> pure string, res : error<a>) -> <test|e> a */ 
  kk_std_test_test__expect_value _x_x1_10202;
  kk_std_test_test__expectation _x_x1036 = kk_std_test_test__new_ExpectedValue(kk_reuse_null, 0, expected, _ctx); /*std/test/test/expectation<3>*/
  kk_std_core_types__maybe _x_x1037;
  bool _match_x901;
  kk_string_t _x_x1038;
  if (kk_std_core_types__is_Optional(details, _ctx)) {
    kk_box_t _box_x111 = details._cons._Optional.value;
    kk_string_t _uniq_details_1201 = kk_string_unbox(_box_x111);
    kk_string_dup(_uniq_details_1201, _ctx);
    _x_x1038 = _uniq_details_1201; /*string*/
  }
  else {
    _x_x1038 = kk_string_empty(); /*string*/
  }
  kk_string_t _x_x1040 = kk_string_empty(); /*string*/
  _match_x901 = kk_string_is_eq(_x_x1038,_x_x1040,kk_context()); /*bool*/
  if (_match_x901) {
    kk_std_core_types__optional_drop(details, _ctx);
    _x_x1037 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/
  }
  else {
    kk_box_t _x_x1042;
    kk_string_t _x_x1043;
    if (kk_std_core_types__is_Optional(details, _ctx)) {
      kk_box_t _box_x112 = details._cons._Optional.value;
      kk_string_t _uniq_details_1201_0 = kk_string_unbox(_box_x112);
      kk_string_dup(_uniq_details_1201_0, _ctx);
      kk_std_core_types__optional_drop(details, _ctx);
      _x_x1043 = _uniq_details_1201_0; /*string*/
    }
    else {
      kk_std_core_types__optional_drop(details, _ctx);
      _x_x1043 = kk_string_empty(); /*string*/
    }
    _x_x1042 = kk_string_box(_x_x1043); /*91*/
    _x_x1037 = kk_std_core_types__new_Just(_x_x1042, _ctx); /*forall<a> maybe<a>*/
  }
  bool _x_x1045;
  if (kk_std_core_types__is_Optional(continue_on_error, _ctx)) {
    kk_box_t _box_x114 = continue_on_error._cons._Optional.value;
    bool _uniq_continue_on_error_1205 = kk_bool_unbox(_box_x114);
    kk_std_core_types__optional_drop(continue_on_error, _ctx);
    _x_x1045 = _uniq_continue_on_error_1205; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(continue_on_error, _ctx);
    _x_x1045 = true; /*bool*/
  }
  kk_string_t _x_x1046;
  kk_string_t _x_x1047;
  kk_string_t _x_x1048;
  kk_define_string_literal(, _s_x1049, 1, ":", _ctx)
  _x_x1048 = kk_string_dup(_s_x1049, _ctx); /*string*/
  _x_x1047 = kk_std_core_types__lp__plus__plus__rp_(_x_x1048, _implicit_fs_kk_line, _ctx); /*string*/
  _x_x1046 = kk_std_core_types__lp__plus__plus__rp_(_implicit_fs_kk_module, _x_x1047, _ctx); /*string*/
  _x_x1_10202 = kk_std_test_test__new_Expect_value(kk_reuse_null, 0, res, _x_x1036, _x_x1037, _x_x1045, _x_x1046, _implicit_fs__lp__eq__eq__rp_, _implicit_fs_show, _ctx); /*std/test/test/expect-value<1369>*/
  kk_ssize_t _b_x124_128;
  kk_std_core_hnd__htag _x_x1050 = kk_std_core_hnd__htag_dup(kk_std_test_test__tag_test, _ctx); /*hnd/htag<std/test/test/test>*/
  _b_x124_128 = kk_std_core_hnd__evv_index(_x_x1050, _ctx); /*hnd/ev-index*/
  return kk_std_core_hnd__open_at1(_b_x124_128, kk_std_test_test__new_mlift_expect_result_10222_fun1051(_ctx), kk_std_test_test__expect_value_box(_x_x1_10202, _ctx), _ctx);
}
 
// Expects a computation to return a value
//
// The expected type must have an `(==)` function as well as a `show` function defined for it


// lift anonymous function
struct kk_std_test_test_expect_result_fun1054__t {
  struct kk_function_s _base;
  kk_std_core_types__optional continue_on_error;
  kk_std_core_types__optional details;
  kk_box_t expected;
  kk_function_t _implicit_fs__lp__eq__eq__rp_;
  kk_string_t _implicit_fs_kk_line;
  kk_string_t _implicit_fs_kk_module;
  kk_function_t _implicit_fs_show;
};
static kk_box_t kk_std_test_test_expect_result_fun1054(kk_function_t _fself, kk_box_t _b_x133, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_expect_result_fun1054(kk_std_core_types__optional continue_on_error, kk_std_core_types__optional details, kk_box_t expected, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_string_t _implicit_fs_kk_line, kk_string_t _implicit_fs_kk_module, kk_function_t _implicit_fs_show, kk_context_t* _ctx) {
  struct kk_std_test_test_expect_result_fun1054__t* _self = kk_function_alloc_as(struct kk_std_test_test_expect_result_fun1054__t, 10, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_expect_result_fun1054, kk_context());
  _self->continue_on_error = continue_on_error;
  _self->details = details;
  _self->expected = expected;
  _self->_implicit_fs__lp__eq__eq__rp_ = _implicit_fs__lp__eq__eq__rp_;
  _self->_implicit_fs_kk_line = _implicit_fs_kk_line;
  _self->_implicit_fs_kk_module = _implicit_fs_kk_module;
  _self->_implicit_fs_show = _implicit_fs_show;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test_expect_result_fun1054(kk_function_t _fself, kk_box_t _b_x133, kk_context_t* _ctx) {
  struct kk_std_test_test_expect_result_fun1054__t* _self = kk_function_as(struct kk_std_test_test_expect_result_fun1054__t*, _fself, _ctx);
  kk_std_core_types__optional continue_on_error = _self->continue_on_error; /* ? bool */
  kk_std_core_types__optional details = _self->details; /* ? string */
  kk_box_t expected = _self->expected; /* 1369 */
  kk_function_t _implicit_fs__lp__eq__eq__rp_ = _self->_implicit_fs__lp__eq__eq__rp_; /* (1369, 1369) -> pure bool */
  kk_string_t _implicit_fs_kk_line = _self->_implicit_fs_kk_line; /* string */
  kk_string_t _implicit_fs_kk_module = _self->_implicit_fs_kk_module; /* string */
  kk_function_t _implicit_fs_show = _self->_implicit_fs_show; /* (1369) -> pure string */
  kk_drop_match(_self, {kk_std_core_types__optional_dup(continue_on_error, _ctx);kk_std_core_types__optional_dup(details, _ctx);kk_box_dup(expected, _ctx);kk_function_dup(_implicit_fs__lp__eq__eq__rp_, _ctx);kk_string_dup(_implicit_fs_kk_line, _ctx);kk_string_dup(_implicit_fs_kk_module, _ctx);kk_function_dup(_implicit_fs_show, _ctx);}, {}, _ctx)
  kk_std_core_exn__error _x_x1055 = kk_std_core_exn__error_unbox(_b_x133, KK_OWNED, _ctx); /*error<1369>*/
  return kk_std_test_test__mlift_expect_result_10222(continue_on_error, details, expected, _implicit_fs__lp__eq__eq__rp_, _implicit_fs_kk_line, _implicit_fs_kk_module, _implicit_fs_show, _x_x1055, _ctx);
}


// lift anonymous function
struct kk_std_test_test_expect_result_fun1071__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_test_expect_result_fun1071(kk_function_t _fself, kk_box_t _b_x150, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_expect_result_fun1071(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test_expect_result_fun1071, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_test_expect_result_fun1071(kk_function_t _fself, kk_box_t _b_x150, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_hnd__ev ev_10276 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/test/test/test>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x1072 = kk_std_core_hnd__as_Ev(ev_10276, _ctx);
    kk_box_t _box_x139 = _con_x1072->hnd;
    int32_t m = _con_x1072->marker;
    kk_std_test_test__test h = kk_std_test_test__test_unbox(_box_x139, KK_BORROWED, _ctx);
    kk_std_test_test__test_dup(h, _ctx);
    {
      struct kk_std_test_test__Hnd_test* _con_x1073 = kk_std_test_test__as_Hnd_test(h, _ctx);
      kk_integer_t _pat_0_2 = _con_x1073->_cfc;
      kk_std_core_hnd__clause1 _ctl_test_expect = _con_x1073->_ctl_test_expect;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0_2, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_ctl_test_expect, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x143 = _ctl_test_expect.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x143, (_fun_unbox_x143, m, ev_10276, _b_x150, _ctx), _ctx);
      }
    }
  }
}

kk_box_t kk_std_test_test_expect_result(kk_box_t expected, kk_function_t run, kk_std_core_types__optional details, kk_std_core_types__optional continue_on_error, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_show, kk_string_t _implicit_fs_kk_line, kk_string_t _implicit_fs_kk_module, kk_context_t* _ctx) { /* forall<a,e> (expected : a, run : () -> <exn,test|e> a, details : ? string, continue-on-error : ? bool, ?(==) : (a, a) -> pure bool, ?show : (a) -> pure string, ?kk-line : string, ?kk-module : string) -> <test|e> a */ 
  kk_std_core_exn__error x_10273 = kk_std_core_exn_try(run, _ctx); /*error<1369>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_exn__error_drop(x_10273, _ctx);
    return kk_std_core_hnd_yield_extend(kk_std_test_test_new_expect_result_fun1054(continue_on_error, details, expected, _implicit_fs__lp__eq__eq__rp_, _implicit_fs_kk_line, _implicit_fs_kk_module, _implicit_fs_show, _ctx), _ctx);
  }
  {
    kk_std_test_test__expect_value _x_x1_10202;
    kk_std_test_test__expectation _x_x1056 = kk_std_test_test__new_ExpectedValue(kk_reuse_null, 0, expected, _ctx); /*std/test/test/expectation<3>*/
    kk_std_core_types__maybe _x_x1057;
    bool _match_x900;
    kk_string_t _x_x1058;
    if (kk_std_core_types__is_Optional(details, _ctx)) {
      kk_box_t _box_x134 = details._cons._Optional.value;
      kk_string_t _uniq_details_1201 = kk_string_unbox(_box_x134);
      kk_string_dup(_uniq_details_1201, _ctx);
      _x_x1058 = _uniq_details_1201; /*string*/
    }
    else {
      _x_x1058 = kk_string_empty(); /*string*/
    }
    kk_string_t _x_x1060 = kk_string_empty(); /*string*/
    _match_x900 = kk_string_is_eq(_x_x1058,_x_x1060,kk_context()); /*bool*/
    if (_match_x900) {
      kk_std_core_types__optional_drop(details, _ctx);
      _x_x1057 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/
    }
    else {
      kk_box_t _x_x1062;
      kk_string_t _x_x1063;
      if (kk_std_core_types__is_Optional(details, _ctx)) {
        kk_box_t _box_x135 = details._cons._Optional.value;
        kk_string_t _uniq_details_1201_0 = kk_string_unbox(_box_x135);
        kk_string_dup(_uniq_details_1201_0, _ctx);
        kk_std_core_types__optional_drop(details, _ctx);
        _x_x1063 = _uniq_details_1201_0; /*string*/
      }
      else {
        kk_std_core_types__optional_drop(details, _ctx);
        _x_x1063 = kk_string_empty(); /*string*/
      }
      _x_x1062 = kk_string_box(_x_x1063); /*91*/
      _x_x1057 = kk_std_core_types__new_Just(_x_x1062, _ctx); /*forall<a> maybe<a>*/
    }
    bool _x_x1065;
    if (kk_std_core_types__is_Optional(continue_on_error, _ctx)) {
      kk_box_t _box_x137 = continue_on_error._cons._Optional.value;
      bool _uniq_continue_on_error_1205 = kk_bool_unbox(_box_x137);
      kk_std_core_types__optional_drop(continue_on_error, _ctx);
      _x_x1065 = _uniq_continue_on_error_1205; /*bool*/
    }
    else {
      kk_std_core_types__optional_drop(continue_on_error, _ctx);
      _x_x1065 = true; /*bool*/
    }
    kk_string_t _x_x1066;
    kk_string_t _x_x1067;
    kk_string_t _x_x1068;
    kk_define_string_literal(, _s_x1069, 1, ":", _ctx)
    _x_x1068 = kk_string_dup(_s_x1069, _ctx); /*string*/
    _x_x1067 = kk_std_core_types__lp__plus__plus__rp_(_x_x1068, _implicit_fs_kk_line, _ctx); /*string*/
    _x_x1066 = kk_std_core_types__lp__plus__plus__rp_(_implicit_fs_kk_module, _x_x1067, _ctx); /*string*/
    _x_x1_10202 = kk_std_test_test__new_Expect_value(kk_reuse_null, 0, x_10273, _x_x1056, _x_x1057, _x_x1065, _x_x1066, _implicit_fs__lp__eq__eq__rp_, _implicit_fs_show, _ctx); /*std/test/test/expect-value<1369>*/
    kk_ssize_t _b_x147_152;
    kk_std_core_hnd__htag _x_x1070 = kk_std_core_hnd__htag_dup(kk_std_test_test__tag_test, _ctx); /*hnd/htag<std/test/test/test>*/
    _b_x147_152 = kk_std_core_hnd__evv_index(_x_x1070, _ctx); /*hnd/ev-index*/
    return kk_std_core_hnd__open_at1(_b_x147_152, kk_std_test_test_new_expect_result_fun1071(_ctx), kk_std_test_test__expect_value_box(_x_x1_10202, _ctx), _ctx);
  }
}


// lift anonymous function
struct kk_std_test_test_assert_error_fun1087__t {
  struct kk_function_s _base;
};
static bool kk_std_test_test_assert_error_fun1087(kk_function_t _fself, kk_box_t _b_x167, kk_box_t _b_x168, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_assert_error_fun1087(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test_assert_error_fun1087, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_test_test_assert_error_fun1087(kk_function_t _fself, kk_box_t _b_x167, kk_box_t _b_x168, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x1088 = kk_bool_unbox(_b_x167); /*bool*/
  bool _x_x1089 = kk_bool_unbox(_b_x168); /*bool*/
  return kk_std_core_bool__lp__eq__eq__rp_(_x_x1088, _x_x1089, _ctx);
}


// lift anonymous function
struct kk_std_test_test_assert_error_fun1090__t {
  struct kk_function_s _base;
};
static kk_string_t kk_std_test_test_assert_error_fun1090(kk_function_t _fself, kk_box_t _b_x169, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_assert_error_fun1090(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test_assert_error_fun1090, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_std_test_test_assert_error_fun1090(kk_function_t _fself, kk_box_t _b_x169, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x1091 = kk_bool_unbox(_b_x169); /*bool*/
  return kk_std_core_bool_show(_x_x1091, _ctx);
}


// lift anonymous function
struct kk_std_test_test_assert_error_fun1093__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_test_assert_error_fun1093(kk_function_t _fself, kk_box_t _b_x189, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_assert_error_fun1093(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test_assert_error_fun1093, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_test_assert_error_fun1093(kk_function_t _fself, kk_box_t _b_x189, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x1094 = kk_Unit;
  bool _x_x1095 = kk_bool_unbox(_b_x189); /*bool*/
  kk_std_test_test__mlift_assert_error_10223(_x_x1095, _ctx);
  return kk_unit_box(_x_x1094);
}

kk_unit_t kk_std_test_test_assert_error(kk_string_t assertion, kk_string_t _implicit_fs_kk_line, kk_string_t _implicit_fs_kk_module, kk_context_t* _ctx) { /* (assertion : string, ?kk-line : string, ?kk-module : string) -> test () */ 
  kk_string_t _b_x159_179;
  kk_string_t _x_x1074;
  kk_define_string_literal(, _s_x1075, 18, "Assertion failed: ", _ctx)
  _x_x1074 = kk_string_dup(_s_x1075, _ctx); /*string*/
  _b_x159_179 = kk_std_core_types__lp__plus__plus__rp_(_x_x1074, assertion, _ctx); /*string*/
  kk_string_t _b_x164_174;
  kk_string_t _x_x1076;
  kk_string_t _x_x1077;
  kk_define_string_literal(, _s_x1078, 1, ":", _ctx)
  _x_x1077 = kk_string_dup(_s_x1078, _ctx); /*string*/
  _x_x1076 = kk_std_core_types__lp__plus__plus__rp_(_x_x1077, _implicit_fs_kk_line, _ctx); /*string*/
  _b_x164_174 = kk_std_core_types__lp__plus__plus__rp_(_implicit_fs_kk_module, _x_x1076, _ctx); /*string*/
  kk_std_core_hnd__ev ev_10282 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/test/test/test>*/;
  bool x_10279;
  kk_box_t _x_x1079;
  {
    struct kk_std_core_hnd_Ev* _con_x1080 = kk_std_core_hnd__as_Ev(ev_10282, _ctx);
    kk_box_t _box_x180 = _con_x1080->hnd;
    int32_t m = _con_x1080->marker;
    kk_std_test_test__test h = kk_std_test_test__test_unbox(_box_x180, KK_BORROWED, _ctx);
    kk_std_test_test__test_dup(h, _ctx);
    {
      struct kk_std_test_test__Hnd_test* _con_x1081 = kk_std_test_test__as_Hnd_test(h, _ctx);
      kk_integer_t _pat_0 = _con_x1081->_cfc;
      kk_std_core_hnd__clause1 _ctl_test_expect = _con_x1081->_ctl_test_expect;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_ctl_test_expect, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x184 = _ctl_test_expect.clause;
        kk_box_t _x_x1082;
        kk_std_test_test__expect_value _x_x1083;
        kk_std_core_exn__error _x_x1084 = kk_std_core_exn__new_Ok(kk_bool_box(false), _ctx); /*error<6>*/
        kk_std_test_test__expectation _x_x1085 = kk_std_test_test__new_ExpectedValue(kk_reuse_null, 0, kk_bool_box(true), _ctx); /*std/test/test/expectation<3>*/
        kk_std_core_types__maybe _x_x1086 = kk_std_core_types__new_Just(kk_string_box(_b_x159_179), _ctx); /*maybe<91>*/
        _x_x1083 = kk_std_test_test__new_Expect_value(kk_reuse_null, 0, _x_x1084, _x_x1085, _x_x1086, false, _b_x164_174, kk_std_test_test_new_assert_error_fun1087(_ctx), kk_std_test_test_new_assert_error_fun1090(_ctx), _ctx); /*std/test/test/expect-value<12>*/
        _x_x1082 = kk_std_test_test__expect_value_box(_x_x1083, _ctx); /*45*/
        _x_x1079 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x184, (_fun_unbox_x184, m, ev_10282, _x_x1082, _ctx), _ctx); /*46*/
      }
    }
  }
  x_10279 = kk_bool_unbox(_x_x1079); /*bool*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1092 = kk_std_core_hnd_yield_extend(kk_std_test_test_new_assert_error_fun1093(_ctx), _ctx); /*2978*/
    kk_unit_unbox(_x_x1092); return kk_Unit;
  }
  {
    kk_Unit; return kk_Unit;
  }
}
extern kk_box_t kk_std_test_test__mlift_expect_that_10224_fun1097(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_expect_that_10224_fun1097__t* _self = kk_function_as(struct kk_std_test_test__mlift_expect_that_10224_fun1097__t*, _fself, _ctx);
  kk_function_t predicate = _self->predicate; /* (1859) -> <exn|1860> bool */
  kk_box_t res_0 = _self->res_0; /* 1859 */
  kk_drop_match(_self, {kk_function_dup(predicate, _ctx);kk_box_dup(res_0, _ctx);}, {}, _ctx)
  bool _x_x1098 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_context_t*), predicate, (predicate, res_0, _ctx), _ctx); /*bool*/
  return kk_bool_box(_x_x1098);
}
 
// monadic lift


// lift anonymous function
struct kk_std_test_test__mlift_expect_that_10225_fun1114__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_test__mlift_expect_that_10225_fun1114(kk_function_t _fself, kk_box_t _b_x212, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_expect_that_10225_fun1114(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test__mlift_expect_that_10225_fun1114, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_test__mlift_expect_that_10225_fun1114(kk_function_t _fself, kk_box_t _b_x212, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_hnd__ev ev_10285 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/test/test/test>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x1115 = kk_std_core_hnd__as_Ev(ev_10285, _ctx);
    kk_box_t _box_x201 = _con_x1115->hnd;
    int32_t m = _con_x1115->marker;
    kk_std_test_test__test h = kk_std_test_test__test_unbox(_box_x201, KK_BORROWED, _ctx);
    kk_std_test_test__test_dup(h, _ctx);
    {
      struct kk_std_test_test__Hnd_test* _con_x1116 = kk_std_test_test__as_Hnd_test(h, _ctx);
      kk_integer_t _pat_0_2 = _con_x1116->_cfc;
      kk_std_core_hnd__clause1 _ctl_test_expect = _con_x1116->_ctl_test_expect;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0_2, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_ctl_test_expect, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x205 = _ctl_test_expect.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x205, (_fun_unbox_x205, m, ev_10285, _b_x212, _ctx), _ctx);
      }
    }
  }
}

kk_box_t kk_std_test_test__mlift_expect_that_10225(kk_string_t assertion, kk_std_core_types__optional details, kk_box_t res_0, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_string_t _implicit_fs_kk_line, kk_string_t _implicit_fs_kk_module, kk_function_t _implicit_fs_show, kk_std_core_exn__error good, kk_context_t* _ctx) { /* forall<a,e> (assertion : string, details : ? string, res@0 : a, ?(==) : (a, a) -> pure bool, ?kk-line : string, ?kk-module : string, ?show : (a) -> pure string, good : error<bool>) -> <test|e> a */ 
  kk_std_core_exn__error_drop(good, _ctx);
  kk_std_test_test__expect_value _x_x1_10203;
  kk_std_core_exn__error _x_x1099 = kk_std_core_exn__new_Ok(res_0, _ctx); /*error<6>*/
  kk_std_test_test__expectation _x_x1100 = kk_std_test_test__new_ExpectedAssertion(kk_reuse_null, 0, assertion, _ctx); /*std/test/test/expectation<3>*/
  kk_std_core_types__maybe _x_x1101;
  bool _match_x897;
  kk_string_t _x_x1102;
  if (kk_std_core_types__is_Optional(details, _ctx)) {
    kk_box_t _box_x197 = details._cons._Optional.value;
    kk_string_t _uniq_details_1508 = kk_string_unbox(_box_x197);
    kk_string_dup(_uniq_details_1508, _ctx);
    _x_x1102 = _uniq_details_1508; /*string*/
  }
  else {
    _x_x1102 = kk_string_empty(); /*string*/
  }
  kk_string_t _x_x1104 = kk_string_empty(); /*string*/
  _match_x897 = kk_string_is_eq(_x_x1102,_x_x1104,kk_context()); /*bool*/
  if (_match_x897) {
    kk_std_core_types__optional_drop(details, _ctx);
    _x_x1101 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/
  }
  else {
    kk_box_t _x_x1106;
    kk_string_t _x_x1107;
    if (kk_std_core_types__is_Optional(details, _ctx)) {
      kk_box_t _box_x198 = details._cons._Optional.value;
      kk_string_t _uniq_details_1508_0 = kk_string_unbox(_box_x198);
      kk_string_dup(_uniq_details_1508_0, _ctx);
      kk_std_core_types__optional_drop(details, _ctx);
      _x_x1107 = _uniq_details_1508_0; /*string*/
    }
    else {
      kk_std_core_types__optional_drop(details, _ctx);
      _x_x1107 = kk_string_empty(); /*string*/
    }
    _x_x1106 = kk_string_box(_x_x1107); /*91*/
    _x_x1101 = kk_std_core_types__new_Just(_x_x1106, _ctx); /*forall<a> maybe<a>*/
  }
  kk_string_t _x_x1109;
  kk_string_t _x_x1110;
  kk_string_t _x_x1111;
  kk_define_string_literal(, _s_x1112, 1, ":", _ctx)
  _x_x1111 = kk_string_dup(_s_x1112, _ctx); /*string*/
  _x_x1110 = kk_std_core_types__lp__plus__plus__rp_(_x_x1111, _implicit_fs_kk_line, _ctx); /*string*/
  _x_x1109 = kk_std_core_types__lp__plus__plus__rp_(_implicit_fs_kk_module, _x_x1110, _ctx); /*string*/
  _x_x1_10203 = kk_std_test_test__new_Expect_value(kk_reuse_null, 0, _x_x1099, _x_x1100, _x_x1101, false, _x_x1109, _implicit_fs__lp__eq__eq__rp_, _implicit_fs_show, _ctx); /*std/test/test/expect-value<1859>*/
  kk_ssize_t _b_x209_213;
  kk_std_core_hnd__htag _x_x1113 = kk_std_core_hnd__htag_dup(kk_std_test_test__tag_test, _ctx); /*hnd/htag<std/test/test/test>*/
  _b_x209_213 = kk_std_core_hnd__evv_index(_x_x1113, _ctx); /*hnd/ev-index*/
  return kk_std_core_hnd__open_at1(_b_x209_213, kk_std_test_test__new_mlift_expect_that_10225_fun1114(_ctx), kk_std_test_test__expect_value_box(_x_x1_10203, _ctx), _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_std_test_test__mlift_expect_that_10226_fun1118__t {
  struct kk_function_s _base;
  kk_function_t predicate;
  kk_box_t res_0;
};
static kk_box_t kk_std_test_test__mlift_expect_that_10226_fun1118(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_expect_that_10226_fun1118(kk_function_t predicate, kk_box_t res_0, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_expect_that_10226_fun1118__t* _self = kk_function_alloc_as(struct kk_std_test_test__mlift_expect_that_10226_fun1118__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test__mlift_expect_that_10226_fun1118, kk_context());
  _self->predicate = predicate;
  _self->res_0 = res_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_test_test__mlift_expect_that_10226_fun1120__t {
  struct kk_function_s _base;
  kk_function_t predicate;
  kk_box_t res_0;
};
static bool kk_std_test_test__mlift_expect_that_10226_fun1120(kk_function_t _fself, kk_ssize_t _y_x10104, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_expect_that_10226_fun1120(kk_function_t predicate, kk_box_t res_0, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_expect_that_10226_fun1120__t* _self = kk_function_alloc_as(struct kk_std_test_test__mlift_expect_that_10226_fun1120__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test__mlift_expect_that_10226_fun1120, kk_context());
  _self->predicate = predicate;
  _self->res_0 = res_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_test_test__mlift_expect_that_10226_fun1122__t {
  struct kk_function_s _base;
  kk_function_t predicate;
  kk_box_t res_0;
};
static kk_box_t kk_std_test_test__mlift_expect_that_10226_fun1122(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_expect_that_10226_fun1122(kk_function_t predicate, kk_box_t res_0, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_expect_that_10226_fun1122__t* _self = kk_function_alloc_as(struct kk_std_test_test__mlift_expect_that_10226_fun1122__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test__mlift_expect_that_10226_fun1122, kk_context());
  _self->predicate = predicate;
  _self->res_0 = res_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test__mlift_expect_that_10226_fun1122(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_expect_that_10226_fun1122__t* _self = kk_function_as(struct kk_std_test_test__mlift_expect_that_10226_fun1122__t*, _fself, _ctx);
  kk_function_t predicate = _self->predicate; /* (1859) -> <exn|1860> bool */
  kk_box_t res_0 = _self->res_0; /* 1859 */
  kk_drop_match(_self, {kk_function_dup(predicate, _ctx);kk_box_dup(res_0, _ctx);}, {}, _ctx)
  bool _x_x1123 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_context_t*), predicate, (predicate, res_0, _ctx), _ctx); /*bool*/
  return kk_bool_box(_x_x1123);
}
static bool kk_std_test_test__mlift_expect_that_10226_fun1120(kk_function_t _fself, kk_ssize_t _y_x10104, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_expect_that_10226_fun1120__t* _self = kk_function_as(struct kk_std_test_test__mlift_expect_that_10226_fun1120__t*, _fself, _ctx);
  kk_function_t predicate = _self->predicate; /* (1859) -> <exn|1860> bool */
  kk_box_t res_0 = _self->res_0; /* 1859 */
  kk_drop_match(_self, {kk_function_dup(predicate, _ctx);kk_box_dup(res_0, _ctx);}, {}, _ctx)
  kk_box_t _x_x1121 = kk_std_core_hnd__mask_at(_y_x10104, false, kk_std_test_test__new_mlift_expect_that_10226_fun1122(predicate, res_0, _ctx), _ctx); /*4118*/
  return kk_bool_unbox(_x_x1121);
}


// lift anonymous function
struct kk_std_test_test__mlift_expect_that_10226_fun1126__t {
  struct kk_function_s _base;
  kk_function_t next_0_10291;
};
static kk_box_t kk_std_test_test__mlift_expect_that_10226_fun1126(kk_function_t _fself, kk_box_t _b_x224, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_expect_that_10226_fun1126(kk_function_t next_0_10291, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_expect_that_10226_fun1126__t* _self = kk_function_alloc_as(struct kk_std_test_test__mlift_expect_that_10226_fun1126__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test__mlift_expect_that_10226_fun1126, kk_context());
  _self->next_0_10291 = next_0_10291;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test__mlift_expect_that_10226_fun1126(kk_function_t _fself, kk_box_t _b_x224, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_expect_that_10226_fun1126__t* _self = kk_function_as(struct kk_std_test_test__mlift_expect_that_10226_fun1126__t*, _fself, _ctx);
  kk_function_t next_0_10291 = _self->next_0_10291; /* (hnd/ev-index) -> <std/test/test/test,exn|1860> bool */
  kk_drop_match(_self, {kk_function_dup(next_0_10291, _ctx);}, {}, _ctx)
  bool _x_x1127;
  kk_ssize_t _x_x1128 = kk_ssize_unbox(_b_x224, KK_OWNED, _ctx); /*hnd/ev-index*/
  _x_x1127 = kk_function_call(bool, (kk_function_t, kk_ssize_t, kk_context_t*), next_0_10291, (next_0_10291, _x_x1128, _ctx), _ctx); /*bool*/
  return kk_bool_box(_x_x1127);
}
static kk_box_t kk_std_test_test__mlift_expect_that_10226_fun1118(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_expect_that_10226_fun1118__t* _self = kk_function_as(struct kk_std_test_test__mlift_expect_that_10226_fun1118__t*, _fself, _ctx);
  kk_function_t predicate = _self->predicate; /* (1859) -> <exn|1860> bool */
  kk_box_t res_0 = _self->res_0; /* 1859 */
  kk_drop_match(_self, {kk_function_dup(predicate, _ctx);kk_box_dup(res_0, _ctx);}, {}, _ctx)
  kk_ssize_t x_0_10290;
  kk_std_core_hnd__htag _x_x1119 = kk_std_core_hnd__htag_dup(kk_std_test_test__tag_test, _ctx); /*hnd/htag<std/test/test/test>*/
  x_0_10290 = kk_std_core_hnd__evv_index(_x_x1119, _ctx); /*hnd/ev-index*/
  kk_function_t next_0_10291 = kk_std_test_test__new_mlift_expect_that_10226_fun1120(predicate, res_0, _ctx); /*(hnd/ev-index) -> <std/test/test/test,exn|1860> bool*/;
  bool _x_x1124;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1125 = kk_std_core_hnd_yield_extend(kk_std_test_test__new_mlift_expect_that_10226_fun1126(next_0_10291, _ctx), _ctx); /*2978*/
    _x_x1124 = kk_bool_unbox(_x_x1125); /*bool*/
  }
  else {
    _x_x1124 = kk_function_call(bool, (kk_function_t, kk_ssize_t, kk_context_t*), next_0_10291, (next_0_10291, x_0_10290, _ctx), _ctx); /*bool*/
  }
  return kk_bool_box(_x_x1124);
}


// lift anonymous function
struct kk_std_test_test__mlift_expect_that_10226_fun1129__t {
  struct kk_function_s _base;
  kk_string_t assertion;
  kk_std_core_types__optional details;
  kk_box_t res_0;
  kk_function_t _implicit_fs__lp__eq__eq__rp_;
  kk_string_t _implicit_fs_kk_line;
  kk_string_t _implicit_fs_kk_module;
  kk_function_t _implicit_fs_show;
};
static kk_box_t kk_std_test_test__mlift_expect_that_10226_fun1129(kk_function_t _fself, kk_box_t _b_x229, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_expect_that_10226_fun1129(kk_string_t assertion, kk_std_core_types__optional details, kk_box_t res_0, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_string_t _implicit_fs_kk_line, kk_string_t _implicit_fs_kk_module, kk_function_t _implicit_fs_show, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_expect_that_10226_fun1129__t* _self = kk_function_alloc_as(struct kk_std_test_test__mlift_expect_that_10226_fun1129__t, 9, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test__mlift_expect_that_10226_fun1129, kk_context());
  _self->assertion = assertion;
  _self->details = details;
  _self->res_0 = res_0;
  _self->_implicit_fs__lp__eq__eq__rp_ = _implicit_fs__lp__eq__eq__rp_;
  _self->_implicit_fs_kk_line = _implicit_fs_kk_line;
  _self->_implicit_fs_kk_module = _implicit_fs_kk_module;
  _self->_implicit_fs_show = _implicit_fs_show;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test__mlift_expect_that_10226_fun1129(kk_function_t _fself, kk_box_t _b_x229, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_expect_that_10226_fun1129__t* _self = kk_function_as(struct kk_std_test_test__mlift_expect_that_10226_fun1129__t*, _fself, _ctx);
  kk_string_t assertion = _self->assertion; /* string */
  kk_std_core_types__optional details = _self->details; /* ? string */
  kk_box_t res_0 = _self->res_0; /* 1859 */
  kk_function_t _implicit_fs__lp__eq__eq__rp_ = _self->_implicit_fs__lp__eq__eq__rp_; /* (1859, 1859) -> pure bool */
  kk_string_t _implicit_fs_kk_line = _self->_implicit_fs_kk_line; /* string */
  kk_string_t _implicit_fs_kk_module = _self->_implicit_fs_kk_module; /* string */
  kk_function_t _implicit_fs_show = _self->_implicit_fs_show; /* (1859) -> pure string */
  kk_drop_match(_self, {kk_string_dup(assertion, _ctx);kk_std_core_types__optional_dup(details, _ctx);kk_box_dup(res_0, _ctx);kk_function_dup(_implicit_fs__lp__eq__eq__rp_, _ctx);kk_string_dup(_implicit_fs_kk_line, _ctx);kk_string_dup(_implicit_fs_kk_module, _ctx);kk_function_dup(_implicit_fs_show, _ctx);}, {}, _ctx)
  kk_std_core_exn__error _x_x1130 = kk_std_core_exn__error_unbox(_b_x229, KK_OWNED, _ctx); /*error<bool>*/
  return kk_std_test_test__mlift_expect_that_10225(assertion, details, res_0, _implicit_fs__lp__eq__eq__rp_, _implicit_fs_kk_line, _implicit_fs_kk_module, _implicit_fs_show, _x_x1130, _ctx);
}


// lift anonymous function
struct kk_std_test_test__mlift_expect_that_10226_fun1146__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_test__mlift_expect_that_10226_fun1146(kk_function_t _fself, kk_box_t _b_x245, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_expect_that_10226_fun1146(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test__mlift_expect_that_10226_fun1146, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_test__mlift_expect_that_10226_fun1146(kk_function_t _fself, kk_box_t _b_x245, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_hnd__ev ev_10295 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/test/test/test>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x1147 = kk_std_core_hnd__as_Ev(ev_10295, _ctx);
    kk_box_t _box_x234 = _con_x1147->hnd;
    int32_t m = _con_x1147->marker;
    kk_std_test_test__test h = kk_std_test_test__test_unbox(_box_x234, KK_BORROWED, _ctx);
    kk_std_test_test__test_dup(h, _ctx);
    {
      struct kk_std_test_test__Hnd_test* _con_x1148 = kk_std_test_test__as_Hnd_test(h, _ctx);
      kk_integer_t _pat_0_4 = _con_x1148->_cfc;
      kk_std_core_hnd__clause1 _ctl_test_expect = _con_x1148->_ctl_test_expect;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0_4, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_ctl_test_expect, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x238 = _ctl_test_expect.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x238, (_fun_unbox_x238, m, ev_10295, _b_x245, _ctx), _ctx);
      }
    }
  }
}

kk_box_t kk_std_test_test__mlift_expect_that_10226(kk_string_t assertion, kk_std_core_types__optional details, kk_function_t predicate, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_string_t _implicit_fs_kk_line, kk_string_t _implicit_fs_kk_module, kk_function_t _implicit_fs_show, kk_std_core_exn__error res, kk_context_t* _ctx) { /* forall<a,e> (assertion : string, details : ? string, predicate : (a) -> <exn|e> bool, ?(==) : (a, a) -> pure bool, ?kk-line : string, ?kk-module : string, ?show : (a) -> pure string, res : error<a>) -> <test|e> a */ 
  if (kk_std_core_exn__is_Ok(res, _ctx)) {
    kk_box_t res_0 = res._cons.Ok.result;
    kk_std_core_exn__error x_10288;
    kk_function_t _x_x1117;
    kk_box_dup(res_0, _ctx);
    _x_x1117 = kk_std_test_test__new_mlift_expect_that_10226_fun1118(predicate, res_0, _ctx); /*() -> <exn|678> 677*/
    x_10288 = kk_std_core_exn_try(_x_x1117, _ctx); /*error<bool>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_exn__error_drop(x_10288, _ctx);
      return kk_std_core_hnd_yield_extend(kk_std_test_test__new_mlift_expect_that_10226_fun1129(assertion, details, res_0, _implicit_fs__lp__eq__eq__rp_, _implicit_fs_kk_line, _implicit_fs_kk_module, _implicit_fs_show, _ctx), _ctx);
    }
    {
      return kk_std_test_test__mlift_expect_that_10225(assertion, details, res_0, _implicit_fs__lp__eq__eq__rp_, _implicit_fs_kk_line, _implicit_fs_kk_module, _implicit_fs_show, x_10288, _ctx);
    }
  }
  {
    kk_std_core_exn__exception e = res._cons.Error.exception;
    kk_std_core_exn__exception_dup(e, _ctx);
    kk_std_core_exn__error_drop(res, _ctx);
    kk_function_drop(predicate, _ctx);
    kk_std_test_test__expect_value _x_x1_0_10204;
    kk_std_core_exn__error _x_x1131 = kk_std_core_exn__new_Error(e, _ctx); /*error<6>*/
    kk_std_test_test__expectation _x_x1132 = kk_std_test_test__new_ExpectedAssertion(kk_reuse_null, 0, assertion, _ctx); /*std/test/test/expectation<3>*/
    kk_std_core_types__maybe _x_x1133;
    bool _match_x894;
    kk_string_t _x_x1134;
    if (kk_std_core_types__is_Optional(details, _ctx)) {
      kk_box_t _box_x230 = details._cons._Optional.value;
      kk_string_t _uniq_details_1508_1 = kk_string_unbox(_box_x230);
      kk_string_dup(_uniq_details_1508_1, _ctx);
      _x_x1134 = _uniq_details_1508_1; /*string*/
    }
    else {
      _x_x1134 = kk_string_empty(); /*string*/
    }
    kk_string_t _x_x1136 = kk_string_empty(); /*string*/
    _match_x894 = kk_string_is_eq(_x_x1134,_x_x1136,kk_context()); /*bool*/
    if (_match_x894) {
      kk_std_core_types__optional_drop(details, _ctx);
      _x_x1133 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/
    }
    else {
      kk_box_t _x_x1138;
      kk_string_t _x_x1139;
      if (kk_std_core_types__is_Optional(details, _ctx)) {
        kk_box_t _box_x231 = details._cons._Optional.value;
        kk_string_t _uniq_details_1508_2 = kk_string_unbox(_box_x231);
        kk_string_dup(_uniq_details_1508_2, _ctx);
        kk_std_core_types__optional_drop(details, _ctx);
        _x_x1139 = _uniq_details_1508_2; /*string*/
      }
      else {
        kk_std_core_types__optional_drop(details, _ctx);
        _x_x1139 = kk_string_empty(); /*string*/
      }
      _x_x1138 = kk_string_box(_x_x1139); /*91*/
      _x_x1133 = kk_std_core_types__new_Just(_x_x1138, _ctx); /*forall<a> maybe<a>*/
    }
    kk_string_t _x_x1141;
    kk_string_t _x_x1142;
    kk_string_t _x_x1143;
    kk_define_string_literal(, _s_x1144, 1, ":", _ctx)
    _x_x1143 = kk_string_dup(_s_x1144, _ctx); /*string*/
    _x_x1142 = kk_std_core_types__lp__plus__plus__rp_(_x_x1143, _implicit_fs_kk_line, _ctx); /*string*/
    _x_x1141 = kk_std_core_types__lp__plus__plus__rp_(_implicit_fs_kk_module, _x_x1142, _ctx); /*string*/
    _x_x1_0_10204 = kk_std_test_test__new_Expect_value(kk_reuse_null, 0, _x_x1131, _x_x1132, _x_x1133, false, _x_x1141, _implicit_fs__lp__eq__eq__rp_, _implicit_fs_show, _ctx); /*std/test/test/expect-value<1859>*/
    kk_ssize_t _b_x242_247;
    kk_std_core_hnd__htag _x_x1145 = kk_std_core_hnd__htag_dup(kk_std_test_test__tag_test, _ctx); /*hnd/htag<std/test/test/test>*/
    _b_x242_247 = kk_std_core_hnd__evv_index(_x_x1145, _ctx); /*hnd/ev-index*/
    return kk_std_core_hnd__open_at1(_b_x242_247, kk_std_test_test__new_mlift_expect_that_10226_fun1146(_ctx), kk_std_test_test__expect_value_box(_x_x1_0_10204, _ctx), _ctx);
  }
}


// lift anonymous function
struct kk_std_test_test_expect_that_fun1149__t {
  struct kk_function_s _base;
  kk_string_t assertion;
  kk_std_core_types__optional details;
  kk_function_t predicate;
  kk_function_t _implicit_fs__lp__eq__eq__rp_;
  kk_string_t _implicit_fs_kk_line;
  kk_string_t _implicit_fs_kk_module;
  kk_function_t _implicit_fs_show;
};
static kk_box_t kk_std_test_test_expect_that_fun1149(kk_function_t _fself, kk_box_t _b_x253, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_expect_that_fun1149(kk_string_t assertion, kk_std_core_types__optional details, kk_function_t predicate, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_string_t _implicit_fs_kk_line, kk_string_t _implicit_fs_kk_module, kk_function_t _implicit_fs_show, kk_context_t* _ctx) {
  struct kk_std_test_test_expect_that_fun1149__t* _self = kk_function_alloc_as(struct kk_std_test_test_expect_that_fun1149__t, 9, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_expect_that_fun1149, kk_context());
  _self->assertion = assertion;
  _self->details = details;
  _self->predicate = predicate;
  _self->_implicit_fs__lp__eq__eq__rp_ = _implicit_fs__lp__eq__eq__rp_;
  _self->_implicit_fs_kk_line = _implicit_fs_kk_line;
  _self->_implicit_fs_kk_module = _implicit_fs_kk_module;
  _self->_implicit_fs_show = _implicit_fs_show;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test_expect_that_fun1149(kk_function_t _fself, kk_box_t _b_x253, kk_context_t* _ctx) {
  struct kk_std_test_test_expect_that_fun1149__t* _self = kk_function_as(struct kk_std_test_test_expect_that_fun1149__t*, _fself, _ctx);
  kk_string_t assertion = _self->assertion; /* string */
  kk_std_core_types__optional details = _self->details; /* ? string */
  kk_function_t predicate = _self->predicate; /* (1859) -> <exn|1860> bool */
  kk_function_t _implicit_fs__lp__eq__eq__rp_ = _self->_implicit_fs__lp__eq__eq__rp_; /* (1859, 1859) -> pure bool */
  kk_string_t _implicit_fs_kk_line = _self->_implicit_fs_kk_line; /* string */
  kk_string_t _implicit_fs_kk_module = _self->_implicit_fs_kk_module; /* string */
  kk_function_t _implicit_fs_show = _self->_implicit_fs_show; /* (1859) -> pure string */
  kk_drop_match(_self, {kk_string_dup(assertion, _ctx);kk_std_core_types__optional_dup(details, _ctx);kk_function_dup(predicate, _ctx);kk_function_dup(_implicit_fs__lp__eq__eq__rp_, _ctx);kk_string_dup(_implicit_fs_kk_line, _ctx);kk_string_dup(_implicit_fs_kk_module, _ctx);kk_function_dup(_implicit_fs_show, _ctx);}, {}, _ctx)
  kk_std_core_exn__error _x_x1150 = kk_std_core_exn__error_unbox(_b_x253, KK_OWNED, _ctx); /*error<1859>*/
  return kk_std_test_test__mlift_expect_that_10226(assertion, details, predicate, _implicit_fs__lp__eq__eq__rp_, _implicit_fs_kk_line, _implicit_fs_kk_module, _implicit_fs_show, _x_x1150, _ctx);
}


// lift anonymous function
struct kk_std_test_test_expect_that_fun1152__t {
  struct kk_function_s _base;
  kk_function_t predicate;
  kk_box_t res_0_0;
};
static kk_box_t kk_std_test_test_expect_that_fun1152(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_expect_that_fun1152(kk_function_t predicate, kk_box_t res_0_0, kk_context_t* _ctx) {
  struct kk_std_test_test_expect_that_fun1152__t* _self = kk_function_alloc_as(struct kk_std_test_test_expect_that_fun1152__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_expect_that_fun1152, kk_context());
  _self->predicate = predicate;
  _self->res_0_0 = res_0_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_test_test_expect_that_fun1154__t {
  struct kk_function_s _base;
  kk_function_t predicate;
  kk_box_t res_0_0;
};
static bool kk_std_test_test_expect_that_fun1154(kk_function_t _fself, kk_ssize_t _y_x10104, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_expect_that_fun1154(kk_function_t predicate, kk_box_t res_0_0, kk_context_t* _ctx) {
  struct kk_std_test_test_expect_that_fun1154__t* _self = kk_function_alloc_as(struct kk_std_test_test_expect_that_fun1154__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_expect_that_fun1154, kk_context());
  _self->predicate = predicate;
  _self->res_0_0 = res_0_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_test_test_expect_that_fun1156__t {
  struct kk_function_s _base;
  kk_function_t predicate;
  kk_box_t res_0_0;
};
static kk_box_t kk_std_test_test_expect_that_fun1156(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_expect_that_fun1156(kk_function_t predicate, kk_box_t res_0_0, kk_context_t* _ctx) {
  struct kk_std_test_test_expect_that_fun1156__t* _self = kk_function_alloc_as(struct kk_std_test_test_expect_that_fun1156__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_expect_that_fun1156, kk_context());
  _self->predicate = predicate;
  _self->res_0_0 = res_0_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test_expect_that_fun1156(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_test_test_expect_that_fun1156__t* _self = kk_function_as(struct kk_std_test_test_expect_that_fun1156__t*, _fself, _ctx);
  kk_function_t predicate = _self->predicate; /* (1859) -> <exn|1860> bool */
  kk_box_t res_0_0 = _self->res_0_0; /* 1859 */
  kk_drop_match(_self, {kk_function_dup(predicate, _ctx);kk_box_dup(res_0_0, _ctx);}, {}, _ctx)
  bool _x_x1157 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_context_t*), predicate, (predicate, res_0_0, _ctx), _ctx); /*bool*/
  return kk_bool_box(_x_x1157);
}
static bool kk_std_test_test_expect_that_fun1154(kk_function_t _fself, kk_ssize_t _y_x10104, kk_context_t* _ctx) {
  struct kk_std_test_test_expect_that_fun1154__t* _self = kk_function_as(struct kk_std_test_test_expect_that_fun1154__t*, _fself, _ctx);
  kk_function_t predicate = _self->predicate; /* (1859) -> <exn|1860> bool */
  kk_box_t res_0_0 = _self->res_0_0; /* 1859 */
  kk_drop_match(_self, {kk_function_dup(predicate, _ctx);kk_box_dup(res_0_0, _ctx);}, {}, _ctx)
  kk_box_t _x_x1155 = kk_std_core_hnd__mask_at(_y_x10104, false, kk_std_test_test_new_expect_that_fun1156(predicate, res_0_0, _ctx), _ctx); /*4118*/
  return kk_bool_unbox(_x_x1155);
}


// lift anonymous function
struct kk_std_test_test_expect_that_fun1160__t {
  struct kk_function_s _base;
  kk_function_t next_1_10305;
};
static kk_box_t kk_std_test_test_expect_that_fun1160(kk_function_t _fself, kk_box_t _b_x261, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_expect_that_fun1160(kk_function_t next_1_10305, kk_context_t* _ctx) {
  struct kk_std_test_test_expect_that_fun1160__t* _self = kk_function_alloc_as(struct kk_std_test_test_expect_that_fun1160__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_expect_that_fun1160, kk_context());
  _self->next_1_10305 = next_1_10305;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test_expect_that_fun1160(kk_function_t _fself, kk_box_t _b_x261, kk_context_t* _ctx) {
  struct kk_std_test_test_expect_that_fun1160__t* _self = kk_function_as(struct kk_std_test_test_expect_that_fun1160__t*, _fself, _ctx);
  kk_function_t next_1_10305 = _self->next_1_10305; /* (hnd/ev-index) -> <std/test/test/test,exn|1860> bool */
  kk_drop_match(_self, {kk_function_dup(next_1_10305, _ctx);}, {}, _ctx)
  bool _x_x1161;
  kk_ssize_t _x_x1162 = kk_ssize_unbox(_b_x261, KK_OWNED, _ctx); /*hnd/ev-index*/
  _x_x1161 = kk_function_call(bool, (kk_function_t, kk_ssize_t, kk_context_t*), next_1_10305, (next_1_10305, _x_x1162, _ctx), _ctx); /*bool*/
  return kk_bool_box(_x_x1161);
}
static kk_box_t kk_std_test_test_expect_that_fun1152(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_test_test_expect_that_fun1152__t* _self = kk_function_as(struct kk_std_test_test_expect_that_fun1152__t*, _fself, _ctx);
  kk_function_t predicate = _self->predicate; /* (1859) -> <exn|1860> bool */
  kk_box_t res_0_0 = _self->res_0_0; /* 1859 */
  kk_drop_match(_self, {kk_function_dup(predicate, _ctx);kk_box_dup(res_0_0, _ctx);}, {}, _ctx)
  kk_ssize_t x_1_10304;
  kk_std_core_hnd__htag _x_x1153 = kk_std_core_hnd__htag_dup(kk_std_test_test__tag_test, _ctx); /*hnd/htag<std/test/test/test>*/
  x_1_10304 = kk_std_core_hnd__evv_index(_x_x1153, _ctx); /*hnd/ev-index*/
  kk_function_t next_1_10305 = kk_std_test_test_new_expect_that_fun1154(predicate, res_0_0, _ctx); /*(hnd/ev-index) -> <std/test/test/test,exn|1860> bool*/;
  bool _x_x1158;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1159 = kk_std_core_hnd_yield_extend(kk_std_test_test_new_expect_that_fun1160(next_1_10305, _ctx), _ctx); /*2978*/
    _x_x1158 = kk_bool_unbox(_x_x1159); /*bool*/
  }
  else {
    _x_x1158 = kk_function_call(bool, (kk_function_t, kk_ssize_t, kk_context_t*), next_1_10305, (next_1_10305, x_1_10304, _ctx), _ctx); /*bool*/
  }
  return kk_bool_box(_x_x1158);
}


// lift anonymous function
struct kk_std_test_test_expect_that_fun1163__t {
  struct kk_function_s _base;
  kk_string_t assertion;
  kk_std_core_types__optional details;
  kk_box_t res_0_0;
  kk_function_t _implicit_fs__lp__eq__eq__rp_;
  kk_string_t _implicit_fs_kk_line;
  kk_string_t _implicit_fs_kk_module;
  kk_function_t _implicit_fs_show;
};
static kk_box_t kk_std_test_test_expect_that_fun1163(kk_function_t _fself, kk_box_t _b_x266, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_expect_that_fun1163(kk_string_t assertion, kk_std_core_types__optional details, kk_box_t res_0_0, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_string_t _implicit_fs_kk_line, kk_string_t _implicit_fs_kk_module, kk_function_t _implicit_fs_show, kk_context_t* _ctx) {
  struct kk_std_test_test_expect_that_fun1163__t* _self = kk_function_alloc_as(struct kk_std_test_test_expect_that_fun1163__t, 9, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_expect_that_fun1163, kk_context());
  _self->assertion = assertion;
  _self->details = details;
  _self->res_0_0 = res_0_0;
  _self->_implicit_fs__lp__eq__eq__rp_ = _implicit_fs__lp__eq__eq__rp_;
  _self->_implicit_fs_kk_line = _implicit_fs_kk_line;
  _self->_implicit_fs_kk_module = _implicit_fs_kk_module;
  _self->_implicit_fs_show = _implicit_fs_show;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test_expect_that_fun1163(kk_function_t _fself, kk_box_t _b_x266, kk_context_t* _ctx) {
  struct kk_std_test_test_expect_that_fun1163__t* _self = kk_function_as(struct kk_std_test_test_expect_that_fun1163__t*, _fself, _ctx);
  kk_string_t assertion = _self->assertion; /* string */
  kk_std_core_types__optional details = _self->details; /* ? string */
  kk_box_t res_0_0 = _self->res_0_0; /* 1859 */
  kk_function_t _implicit_fs__lp__eq__eq__rp_ = _self->_implicit_fs__lp__eq__eq__rp_; /* (1859, 1859) -> pure bool */
  kk_string_t _implicit_fs_kk_line = _self->_implicit_fs_kk_line; /* string */
  kk_string_t _implicit_fs_kk_module = _self->_implicit_fs_kk_module; /* string */
  kk_function_t _implicit_fs_show = _self->_implicit_fs_show; /* (1859) -> pure string */
  kk_drop_match(_self, {kk_string_dup(assertion, _ctx);kk_std_core_types__optional_dup(details, _ctx);kk_box_dup(res_0_0, _ctx);kk_function_dup(_implicit_fs__lp__eq__eq__rp_, _ctx);kk_string_dup(_implicit_fs_kk_line, _ctx);kk_string_dup(_implicit_fs_kk_module, _ctx);kk_function_dup(_implicit_fs_show, _ctx);}, {}, _ctx)
  kk_std_core_exn__error _x_x1164 = kk_std_core_exn__error_unbox(_b_x266, KK_OWNED, _ctx); /*error<bool>*/
  return kk_std_test_test__mlift_expect_that_10225(assertion, details, res_0_0, _implicit_fs__lp__eq__eq__rp_, _implicit_fs_kk_line, _implicit_fs_kk_module, _implicit_fs_show, _x_x1164, _ctx);
}


// lift anonymous function
struct kk_std_test_test_expect_that_fun1180__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_test_expect_that_fun1180(kk_function_t _fself, kk_box_t _b_x282, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_expect_that_fun1180(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test_expect_that_fun1180, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_test_expect_that_fun1180(kk_function_t _fself, kk_box_t _b_x282, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_hnd__ev ev_10309 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/test/test/test>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x1181 = kk_std_core_hnd__as_Ev(ev_10309, _ctx);
    kk_box_t _box_x271 = _con_x1181->hnd;
    int32_t m = _con_x1181->marker;
    kk_std_test_test__test h = kk_std_test_test__test_unbox(_box_x271, KK_BORROWED, _ctx);
    kk_std_test_test__test_dup(h, _ctx);
    {
      struct kk_std_test_test__Hnd_test* _con_x1182 = kk_std_test_test__as_Hnd_test(h, _ctx);
      kk_integer_t _pat_0_4 = _con_x1182->_cfc;
      kk_std_core_hnd__clause1 _ctl_test_expect = _con_x1182->_ctl_test_expect;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0_4, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_ctl_test_expect, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x275 = _ctl_test_expect.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x275, (_fun_unbox_x275, m, ev_10309, _b_x282, _ctx), _ctx);
      }
    }
  }
}


// lift anonymous function
struct kk_std_test_test_expect_that_fun1198__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_test_expect_that_fun1198(kk_function_t _fself, kk_box_t _b_x298, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_expect_that_fun1198(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test_expect_that_fun1198, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_test_expect_that_fun1198(kk_function_t _fself, kk_box_t _b_x298, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_hnd__ev ev_0_10312 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/test/test/test>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x1199 = kk_std_core_hnd__as_Ev(ev_0_10312, _ctx);
    kk_box_t _box_x287 = _con_x1199->hnd;
    int32_t m_0 = _con_x1199->marker;
    kk_std_test_test__test h_0 = kk_std_test_test__test_unbox(_box_x287, KK_BORROWED, _ctx);
    kk_std_test_test__test_dup(h_0, _ctx);
    {
      struct kk_std_test_test__Hnd_test* _con_x1200 = kk_std_test_test__as_Hnd_test(h_0, _ctx);
      kk_integer_t _pat_0_5 = _con_x1200->_cfc;
      kk_std_core_hnd__clause1 _ctl_test_expect_0 = _con_x1200->_ctl_test_expect;
      if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
        kk_integer_drop(_pat_0_5, _ctx);
        kk_datatype_ptr_free(h_0, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_ctl_test_expect_0, _ctx);
        kk_datatype_ptr_decref(h_0, _ctx);
      }
      {
        kk_function_t _fun_unbox_x291 = _ctl_test_expect_0.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x291, (_fun_unbox_x291, m_0, ev_0_10312, _b_x298, _ctx), _ctx);
      }
    }
  }
}

kk_box_t kk_std_test_test_expect_that(kk_string_t assertion, kk_function_t predicate, kk_function_t run, kk_std_core_types__optional details, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_show, kk_string_t _implicit_fs_kk_line, kk_string_t _implicit_fs_kk_module, kk_context_t* _ctx) { /* forall<a,e> (assertion : string, predicate : (a) -> <exn|e> bool, run : () -> <exn,test|e> a, details : ? string, ?(==) : (a, a) -> pure bool, ?show : (a) -> pure string, ?kk-line : string, ?kk-module : string) -> <test|e> a */ 
  kk_std_core_exn__error x_10298 = kk_std_core_exn_try(run, _ctx); /*error<1859>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_exn__error_drop(x_10298, _ctx);
    return kk_std_core_hnd_yield_extend(kk_std_test_test_new_expect_that_fun1149(assertion, details, predicate, _implicit_fs__lp__eq__eq__rp_, _implicit_fs_kk_line, _implicit_fs_kk_module, _implicit_fs_show, _ctx), _ctx);
  }
  if (kk_std_core_exn__is_Ok(x_10298, _ctx)) {
    kk_box_t res_0_0 = x_10298._cons.Ok.result;
    kk_std_core_exn__error x_0_10301;
    kk_function_t _x_x1151;
    kk_box_dup(res_0_0, _ctx);
    _x_x1151 = kk_std_test_test_new_expect_that_fun1152(predicate, res_0_0, _ctx); /*() -> <exn|678> 677*/
    x_0_10301 = kk_std_core_exn_try(_x_x1151, _ctx); /*error<bool>*/
    kk_std_core_exn__error_drop(x_0_10301, _ctx);
    if (kk_yielding(kk_context())) {
      return kk_std_core_hnd_yield_extend(kk_std_test_test_new_expect_that_fun1163(assertion, details, res_0_0, _implicit_fs__lp__eq__eq__rp_, _implicit_fs_kk_line, _implicit_fs_kk_module, _implicit_fs_show, _ctx), _ctx);
    }
    {
      kk_std_test_test__expect_value _x_x1_10203;
      kk_std_core_exn__error _x_x1165 = kk_std_core_exn__new_Ok(res_0_0, _ctx); /*error<6>*/
      kk_std_test_test__expectation _x_x1166 = kk_std_test_test__new_ExpectedAssertion(kk_reuse_null, 0, assertion, _ctx); /*std/test/test/expectation<3>*/
      kk_std_core_types__maybe _x_x1167;
      bool _match_x892;
      kk_string_t _x_x1168;
      if (kk_std_core_types__is_Optional(details, _ctx)) {
        kk_box_t _box_x267 = details._cons._Optional.value;
        kk_string_t _uniq_details_1508 = kk_string_unbox(_box_x267);
        kk_string_dup(_uniq_details_1508, _ctx);
        _x_x1168 = _uniq_details_1508; /*string*/
      }
      else {
        _x_x1168 = kk_string_empty(); /*string*/
      }
      kk_string_t _x_x1170 = kk_string_empty(); /*string*/
      _match_x892 = kk_string_is_eq(_x_x1168,_x_x1170,kk_context()); /*bool*/
      if (_match_x892) {
        kk_std_core_types__optional_drop(details, _ctx);
        _x_x1167 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/
      }
      else {
        kk_box_t _x_x1172;
        kk_string_t _x_x1173;
        if (kk_std_core_types__is_Optional(details, _ctx)) {
          kk_box_t _box_x268 = details._cons._Optional.value;
          kk_string_t _uniq_details_1508_0 = kk_string_unbox(_box_x268);
          kk_string_dup(_uniq_details_1508_0, _ctx);
          kk_std_core_types__optional_drop(details, _ctx);
          _x_x1173 = _uniq_details_1508_0; /*string*/
        }
        else {
          kk_std_core_types__optional_drop(details, _ctx);
          _x_x1173 = kk_string_empty(); /*string*/
        }
        _x_x1172 = kk_string_box(_x_x1173); /*91*/
        _x_x1167 = kk_std_core_types__new_Just(_x_x1172, _ctx); /*forall<a> maybe<a>*/
      }
      kk_string_t _x_x1175;
      kk_string_t _x_x1176;
      kk_string_t _x_x1177;
      kk_define_string_literal(, _s_x1178, 1, ":", _ctx)
      _x_x1177 = kk_string_dup(_s_x1178, _ctx); /*string*/
      _x_x1176 = kk_std_core_types__lp__plus__plus__rp_(_x_x1177, _implicit_fs_kk_line, _ctx); /*string*/
      _x_x1175 = kk_std_core_types__lp__plus__plus__rp_(_implicit_fs_kk_module, _x_x1176, _ctx); /*string*/
      _x_x1_10203 = kk_std_test_test__new_Expect_value(kk_reuse_null, 0, _x_x1165, _x_x1166, _x_x1167, false, _x_x1175, _implicit_fs__lp__eq__eq__rp_, _implicit_fs_show, _ctx); /*std/test/test/expect-value<1859>*/
      kk_ssize_t _b_x279_301;
      kk_std_core_hnd__htag _x_x1179 = kk_std_core_hnd__htag_dup(kk_std_test_test__tag_test, _ctx); /*hnd/htag<std/test/test/test>*/
      _b_x279_301 = kk_std_core_hnd__evv_index(_x_x1179, _ctx); /*hnd/ev-index*/
      return kk_std_core_hnd__open_at1(_b_x279_301, kk_std_test_test_new_expect_that_fun1180(_ctx), kk_std_test_test__expect_value_box(_x_x1_10203, _ctx), _ctx);
    }
  }
  {
    kk_std_core_exn__exception e = x_10298._cons.Error.exception;
    kk_std_core_exn__exception_dup(e, _ctx);
    kk_std_core_exn__error_drop(x_10298, _ctx);
    kk_function_drop(predicate, _ctx);
    kk_std_test_test__expect_value _x_x1_0_10204;
    kk_std_core_exn__error _x_x1183 = kk_std_core_exn__new_Error(e, _ctx); /*error<6>*/
    kk_std_test_test__expectation _x_x1184 = kk_std_test_test__new_ExpectedAssertion(kk_reuse_null, 0, assertion, _ctx); /*std/test/test/expectation<3>*/
    kk_std_core_types__maybe _x_x1185;
    bool _match_x890;
    kk_string_t _x_x1186;
    if (kk_std_core_types__is_Optional(details, _ctx)) {
      kk_box_t _box_x283 = details._cons._Optional.value;
      kk_string_t _uniq_details_1508_1 = kk_string_unbox(_box_x283);
      kk_string_dup(_uniq_details_1508_1, _ctx);
      _x_x1186 = _uniq_details_1508_1; /*string*/
    }
    else {
      _x_x1186 = kk_string_empty(); /*string*/
    }
    kk_string_t _x_x1188 = kk_string_empty(); /*string*/
    _match_x890 = kk_string_is_eq(_x_x1186,_x_x1188,kk_context()); /*bool*/
    if (_match_x890) {
      kk_std_core_types__optional_drop(details, _ctx);
      _x_x1185 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/
    }
    else {
      kk_box_t _x_x1190;
      kk_string_t _x_x1191;
      if (kk_std_core_types__is_Optional(details, _ctx)) {
        kk_box_t _box_x284 = details._cons._Optional.value;
        kk_string_t _uniq_details_1508_2 = kk_string_unbox(_box_x284);
        kk_string_dup(_uniq_details_1508_2, _ctx);
        kk_std_core_types__optional_drop(details, _ctx);
        _x_x1191 = _uniq_details_1508_2; /*string*/
      }
      else {
        kk_std_core_types__optional_drop(details, _ctx);
        _x_x1191 = kk_string_empty(); /*string*/
      }
      _x_x1190 = kk_string_box(_x_x1191); /*91*/
      _x_x1185 = kk_std_core_types__new_Just(_x_x1190, _ctx); /*forall<a> maybe<a>*/
    }
    kk_string_t _x_x1193;
    kk_string_t _x_x1194;
    kk_string_t _x_x1195;
    kk_define_string_literal(, _s_x1196, 1, ":", _ctx)
    _x_x1195 = kk_string_dup(_s_x1196, _ctx); /*string*/
    _x_x1194 = kk_std_core_types__lp__plus__plus__rp_(_x_x1195, _implicit_fs_kk_line, _ctx); /*string*/
    _x_x1193 = kk_std_core_types__lp__plus__plus__rp_(_implicit_fs_kk_module, _x_x1194, _ctx); /*string*/
    _x_x1_0_10204 = kk_std_test_test__new_Expect_value(kk_reuse_null, 0, _x_x1183, _x_x1184, _x_x1185, false, _x_x1193, _implicit_fs__lp__eq__eq__rp_, _implicit_fs_show, _ctx); /*std/test/test/expect-value<1859>*/
    kk_ssize_t _b_x295_304;
    kk_std_core_hnd__htag _x_x1197 = kk_std_core_hnd__htag_dup(kk_std_test_test__tag_test, _ctx); /*hnd/htag<std/test/test/test>*/
    _b_x295_304 = kk_std_core_hnd__evv_index(_x_x1197, _ctx); /*hnd/ev-index*/
    return kk_std_core_hnd__open_at1(_b_x295_304, kk_std_test_test_new_expect_that_fun1198(_ctx), kk_std_test_test__expect_value_box(_x_x1_0_10204, _ctx), _ctx);
  }
}
 
// Same as expect-result but does not return the result of the computation, and defaults to not continue on error


// lift anonymous function
struct kk_std_test_test_expect_fun1209__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_test_expect_fun1209(kk_function_t _fself, kk_box_t _b_x318, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_expect_fun1209(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test_expect_fun1209, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_test_expect_fun1209(kk_function_t _fself, kk_box_t _b_x318, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_box_t wild___320 = _b_x318; /*2067*/;
  kk_box_drop(wild___320, _ctx);
  return kk_unit_box(kk_Unit);
}

kk_unit_t kk_std_test_test_expect(kk_box_t expected, kk_function_t run, kk_std_core_types__optional details, kk_std_core_types__optional continue_on_error, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_show, kk_string_t _implicit_fs_kk_line, kk_string_t _implicit_fs_kk_module, kk_context_t* _ctx) { /* forall<a,e> (expected : a, run : () -> <exn,test|e> a, details : ? string, continue-on-error : ? bool, ?(==) : (a, a) -> pure bool, ?show : (a) -> pure string, ?kk-line : string, ?kk-module : string) -> <test|e> () */ 
  kk_box_t x_10315;
  kk_std_core_types__optional _x_x1201;
  kk_box_t _x_x1202;
  kk_string_t _x_x1203;
  if (kk_std_core_types__is_Optional(details, _ctx)) {
    kk_box_t _box_x311 = details._cons._Optional.value;
    kk_string_t _uniq_details_1872 = kk_string_unbox(_box_x311);
    kk_string_dup(_uniq_details_1872, _ctx);
    kk_std_core_types__optional_drop(details, _ctx);
    _x_x1203 = _uniq_details_1872; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(details, _ctx);
    _x_x1203 = kk_string_empty(); /*string*/
  }
  _x_x1202 = kk_string_box(_x_x1203); /*0*/
  _x_x1201 = kk_std_core_types__new_Optional(_x_x1202, _ctx); /*? 0*/
  kk_std_core_types__optional _x_x1205;
  kk_box_t _x_x1206;
  bool _x_x1207;
  if (kk_std_core_types__is_Optional(continue_on_error, _ctx)) {
    kk_box_t _box_x313 = continue_on_error._cons._Optional.value;
    bool _uniq_continue_on_error_1876 = kk_bool_unbox(_box_x313);
    kk_std_core_types__optional_drop(continue_on_error, _ctx);
    _x_x1207 = _uniq_continue_on_error_1876; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(continue_on_error, _ctx);
    _x_x1207 = false; /*bool*/
  }
  _x_x1206 = kk_bool_box(_x_x1207); /*0*/
  _x_x1205 = kk_std_core_types__new_Optional(_x_x1206, _ctx); /*? 0*/
  x_10315 = kk_std_test_test_expect_result(expected, run, _x_x1201, _x_x1205, _implicit_fs__lp__eq__eq__rp_, _implicit_fs_show, _implicit_fs_kk_line, _implicit_fs_kk_module, _ctx); /*2067*/
  kk_box_drop(x_10315, _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1208 = kk_std_core_hnd_yield_extend(kk_std_test_test_new_expect_fun1209(_ctx), _ctx); /*2978*/
    kk_unit_unbox(_x_x1208); return kk_Unit;
  }
  {
    kk_Unit; return kk_Unit;
  }
}
 
// A top level group of tests


// lift anonymous function
struct kk_std_test_test_group_fun1239__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_test_group_fun1239(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_group_fun1239(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test_group_fun1239, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_test_group_fun1239(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x1240;
  kk_define_string_literal(, _s_x1241, 2, "  ", _ctx)
  _x_x1240 = kk_string_dup(_s_x1241, _ctx); /*string*/
  return kk_string_box(_x_x1240);
}


// lift anonymous function
struct kk_std_test_test_group_fun1243__t {
  struct kk_function_s _base;
  kk_string_t name;
};
static kk_box_t kk_std_test_test_group_fun1243(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_group_fun1243(kk_string_t name, kk_context_t* _ctx) {
  struct kk_std_test_test_group_fun1243__t* _self = kk_function_alloc_as(struct kk_std_test_test_group_fun1243__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_group_fun1243, kk_context());
  _self->name = name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test_group_fun1243(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_test_test_group_fun1243__t* _self = kk_function_as(struct kk_std_test_test_group_fun1243__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);}, {}, _ctx)
  return kk_string_box(name);
}


// lift anonymous function
struct kk_std_test_test_group_fun1246__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_std_test_test_group_fun1246(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_group_fun1246(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_test_test_group_fun1246__t* _self = kk_function_alloc_as(struct kk_std_test_test_group_fun1246__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_group_fun1246, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test_group_fun1246(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_test_test_group_fun1246__t* _self = kk_function_as(struct kk_std_test_test_group_fun1246__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<2679,bool> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_unit_t _x_x1247 = kk_Unit;
  kk_unit_t _brw_x887 = kk_Unit;
  kk_ref_set_borrow(loc,(kk_bool_box(true)),kk_context());
  kk_ref_drop(loc, _ctx);
  _brw_x887;
  return kk_unit_box(_x_x1247);
}


// lift anonymous function
struct kk_std_test_test_group_fun1250__t {
  struct kk_function_s _base;
  kk_string_t infomsg;
  kk_ref_t loc;
};
static kk_box_t kk_std_test_test_group_fun1250(kk_function_t _fself, kk_box_t _b_x336, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_group_fun1250(kk_string_t infomsg, kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_test_test_group_fun1250__t* _self = kk_function_alloc_as(struct kk_std_test_test_group_fun1250__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_group_fun1250, kk_context());
  _self->infomsg = infomsg;
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_test_test_group_fun1252__t {
  struct kk_function_s _base;
  kk_string_t infomsg;
};
static kk_unit_t kk_std_test_test_group_fun1252(kk_function_t _fself, bool _y_x10115, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_group_fun1252(kk_string_t infomsg, kk_context_t* _ctx) {
  struct kk_std_test_test_group_fun1252__t* _self = kk_function_alloc_as(struct kk_std_test_test_group_fun1252__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_group_fun1252, kk_context());
  _self->infomsg = infomsg;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_std_test_test_group_fun1252(kk_function_t _fself, bool _y_x10115, kk_context_t* _ctx) {
  struct kk_std_test_test_group_fun1252__t* _self = kk_function_as(struct kk_std_test_test_group_fun1252__t*, _fself, _ctx);
  kk_string_t infomsg = _self->infomsg; /* string */
  kk_drop_match(_self, {kk_string_dup(infomsg, _ctx);}, {}, _ctx)
  kk_string_t _x_x1253;
  if (_y_x10115) {
    kk_string_t _x_x1254;
    kk_define_string_literal(, _s_x1255, 8, " failed!", _ctx)
    _x_x1254 = kk_string_dup(_s_x1255, _ctx); /*string*/
    _x_x1253 = kk_std_core_types__lp__plus__plus__rp_(infomsg, _x_x1254, _ctx); /*string*/
  }
  else {
    kk_string_t _x_x1256;
    kk_define_string_literal(, _s_x1257, 8, " passed!", _ctx)
    _x_x1256 = kk_string_dup(_s_x1257, _ctx); /*string*/
    _x_x1253 = kk_std_core_types__lp__plus__plus__rp_(infomsg, _x_x1256, _ctx); /*string*/
  }
  kk_std_core_console_printsln(_x_x1253, _ctx); return kk_Unit;
}


// lift anonymous function
struct kk_std_test_test_group_fun1260__t {
  struct kk_function_s _base;
  kk_function_t next_10322;
};
static kk_box_t kk_std_test_test_group_fun1260(kk_function_t _fself, kk_box_t _b_x332, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_group_fun1260(kk_function_t next_10322, kk_context_t* _ctx) {
  struct kk_std_test_test_group_fun1260__t* _self = kk_function_alloc_as(struct kk_std_test_test_group_fun1260__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_group_fun1260, kk_context());
  _self->next_10322 = next_10322;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test_group_fun1260(kk_function_t _fself, kk_box_t _b_x332, kk_context_t* _ctx) {
  struct kk_std_test_test_group_fun1260__t* _self = kk_function_as(struct kk_std_test_test_group_fun1260__t*, _fself, _ctx);
  kk_function_t next_10322 = _self->next_10322; /* (bool) -> <local<2679>,console/console|2683> () */
  kk_drop_match(_self, {kk_function_dup(next_10322, _ctx);}, {}, _ctx)
  kk_unit_t _x_x1261 = kk_Unit;
  bool _x_x1262 = kk_bool_unbox(_b_x332); /*bool*/
  kk_function_call(kk_unit_t, (kk_function_t, bool, kk_context_t*), next_10322, (next_10322, _x_x1262, _ctx), _ctx);
  return kk_unit_box(_x_x1261);
}
static kk_box_t kk_std_test_test_group_fun1250(kk_function_t _fself, kk_box_t _b_x336, kk_context_t* _ctx) {
  struct kk_std_test_test_group_fun1250__t* _self = kk_function_as(struct kk_std_test_test_group_fun1250__t*, _fself, _ctx);
  kk_string_t infomsg = _self->infomsg; /* string */
  kk_ref_t loc = _self->loc; /* local-var<2679,bool> */
  kk_drop_match(_self, {kk_string_dup(infomsg, _ctx);kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_box_drop(_b_x336, _ctx);
  bool x_0_10321;
  kk_box_t _x_x1251 = kk_ref_get(loc,kk_context()); /*3951*/
  x_0_10321 = kk_bool_unbox(_x_x1251); /*bool*/
  kk_function_t next_10322 = kk_std_test_test_new_group_fun1252(infomsg, _ctx); /*(bool) -> <local<2679>,console/console|2683> ()*/;
  kk_unit_t _x_x1258 = kk_Unit;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1259 = kk_std_core_hnd_yield_extend(kk_std_test_test_new_group_fun1260(next_10322, _ctx), _ctx); /*2978*/
    kk_unit_unbox(_x_x1259);
  }
  else {
    kk_function_call(kk_unit_t, (kk_function_t, bool, kk_context_t*), next_10322, (next_10322, x_0_10321, _ctx), _ctx);
  }
  return kk_unit_box(_x_x1258);
}


// lift anonymous function
struct kk_std_test_test_group_fun1263__t {
  struct kk_function_s _base;
  kk_function_t f;
};
static kk_box_t kk_std_test_test_group_fun1263(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_group_fun1263(kk_function_t f, kk_context_t* _ctx) {
  struct kk_std_test_test_group_fun1263__t* _self = kk_function_alloc_as(struct kk_std_test_test_group_fun1263__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_group_fun1263, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test_group_fun1263(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_test_test_group_fun1263__t* _self = kk_function_as(struct kk_std_test_test_group_fun1263__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* () -> <std/test/test/test-scope,console/console|2683> () */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_unit_t _x_x1264 = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), f, (f, _ctx), _ctx);
  return kk_unit_box(_x_x1264);
}

kk_unit_t kk_std_test_test_group(kk_string_t name, kk_function_t f, kk_std_core_types__optional is_test, kk_string_t _implicit_fs_kk_module, kk_string_t _implicit_fs_kk_line, kk_context_t* _ctx) { /* forall<e> (name : string, f : () -> <test-scope,console/console|e> (), is-test : ? bool, ?kk-module : string, ?kk-line : string) -> <console/console|e> () */ 
  kk_string_t infomsg;
  kk_string_t _x_x1215;
  if (kk_std_core_types__is_Optional(is_test, _ctx)) {
    kk_box_t _box_x321 = is_test._cons._Optional.value;
    bool _uniq_is_test_2079 = kk_bool_unbox(_box_x321);
    kk_std_core_types__optional_drop(is_test, _ctx);
    if (_uniq_is_test_2079) {
      kk_define_string_literal(, _s_x1216, 4, "test", _ctx)
      _x_x1215 = kk_string_dup(_s_x1216, _ctx); /*string*/
    }
    else {
      kk_define_string_literal(, _s_x1217, 5, "group", _ctx)
      _x_x1215 = kk_string_dup(_s_x1217, _ctx); /*string*/
    }
  }
  else {
    kk_std_core_types__optional_drop(is_test, _ctx);
    kk_define_string_literal(, _s_x1218, 5, "group", _ctx)
    _x_x1215 = kk_string_dup(_s_x1218, _ctx); /*string*/
  }
  kk_string_t _x_x1219;
  kk_string_t _x_x1220;
  kk_define_string_literal(, _s_x1221, 1, "(", _ctx)
  _x_x1220 = kk_string_dup(_s_x1221, _ctx); /*string*/
  kk_string_t _x_x1222;
  kk_string_t _x_x1223 = kk_string_dup(name, _ctx); /*string*/
  kk_string_t _x_x1224;
  kk_string_t _x_x1225;
  kk_define_string_literal(, _s_x1226, 3, " : ", _ctx)
  _x_x1225 = kk_string_dup(_s_x1226, _ctx); /*string*/
  kk_string_t _x_x1227;
  kk_string_t _x_x1228;
  kk_string_t _x_x1229;
  kk_define_string_literal(, _s_x1230, 1, ":", _ctx)
  _x_x1229 = kk_string_dup(_s_x1230, _ctx); /*string*/
  kk_string_t _x_x1231;
  kk_string_t _x_x1232;
  kk_define_string_literal(, _s_x1233, 2, "):", _ctx)
  _x_x1232 = kk_string_dup(_s_x1233, _ctx); /*string*/
  _x_x1231 = kk_std_core_types__lp__plus__plus__rp_(_implicit_fs_kk_line, _x_x1232, _ctx); /*string*/
  _x_x1228 = kk_std_core_types__lp__plus__plus__rp_(_x_x1229, _x_x1231, _ctx); /*string*/
  _x_x1227 = kk_std_core_types__lp__plus__plus__rp_(_implicit_fs_kk_module, _x_x1228, _ctx); /*string*/
  _x_x1224 = kk_std_core_types__lp__plus__plus__rp_(_x_x1225, _x_x1227, _ctx); /*string*/
  _x_x1222 = kk_std_core_types__lp__plus__plus__rp_(_x_x1223, _x_x1224, _ctx); /*string*/
  _x_x1219 = kk_std_core_types__lp__plus__plus__rp_(_x_x1220, _x_x1222, _ctx); /*string*/
  infomsg = kk_std_core_types__lp__plus__plus__rp_(_x_x1215, _x_x1219, _ctx); /*string*/
  kk_unit_t __ = kk_Unit;
  kk_string_t _x_x1234;
  kk_string_t _x_x1235 = kk_string_dup(infomsg, _ctx); /*string*/
  kk_string_t _x_x1236;
  kk_define_string_literal(, _s_x1237, 4, "... ", _ctx)
  _x_x1236 = kk_string_dup(_s_x1237, _ctx); /*string*/
  _x_x1234 = kk_std_core_types__lp__plus__plus__rp_(_x_x1235, _x_x1236, _ctx); /*string*/
  kk_std_core_console_printsln(_x_x1234, _ctx);
  kk_ref_t loc = kk_ref_alloc((kk_bool_box(false)),kk_context()); /*local-var<2679,bool>*/;
  kk_std_test_test__test_scope _b_x333_337;
  kk_std_core_hnd__clause0 _x_x1238 = kk_std_core_hnd_clause_tail0(kk_std_test_test_new_group_fun1239(_ctx), _ctx); /*hnd/clause0<6234,6233,6231,6232>*/
  kk_std_core_hnd__clause0 _x_x1242 = kk_std_core_hnd_clause_tail0(kk_std_test_test_new_group_fun1243(name, _ctx), _ctx); /*hnd/clause0<6234,6233,6231,6232>*/
  kk_std_core_hnd__clause0 _x_x1244;
  kk_function_t _x_x1245;
  kk_ref_dup(loc, _ctx);
  _x_x1245 = kk_std_test_test_new_group_fun1246(loc, _ctx); /*() -> 6231 6234*/
  _x_x1244 = kk_std_core_hnd_clause_tail0(_x_x1245, _ctx); /*hnd/clause0<6234,6233,6231,6232>*/
  _b_x333_337 = kk_std_test_test__new_Hnd_test_scope(kk_reuse_null, 0, kk_integer_from_small(1), _x_x1238, _x_x1242, _x_x1244, _ctx); /*std/test/test/test-scope<<local<2679>,console/console|2683>,()>*/
  kk_unit_t res = kk_Unit;
  kk_box_t _x_x1248;
  kk_function_t _x_x1249;
  kk_ref_dup(loc, _ctx);
  _x_x1249 = kk_std_test_test_new_group_fun1250(infomsg, loc, _ctx); /*(851) -> 852 853*/
  _x_x1248 = kk_std_test_test__handle_test_scope(_b_x333_337, _x_x1249, kk_std_test_test_new_group_fun1263(f, _ctx), _ctx); /*853*/
  kk_unit_unbox(_x_x1248);
  kk_box_t _x_x1265 = kk_std_core_hnd_prompt_local_var(loc, kk_unit_box(res), _ctx); /*9564*/
  kk_unit_unbox(_x_x1265); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_std_test_test_istest_fs__mlift_scope_10229_fun1268__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_test_istest_fs__mlift_scope_10229_fun1268(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_istest_fs__new_mlift_scope_10229_fun1268(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test_istest_fs__mlift_scope_10229_fun1268, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_test_istest_fs__mlift_scope_10229_fun1268(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_hnd__ev ev_10326 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/test/test/test-scope>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x1269 = kk_std_core_hnd__as_Ev(ev_10326, _ctx);
    kk_box_t _box_x351 = _con_x1269->hnd;
    int32_t m = _con_x1269->marker;
    kk_std_test_test__test_scope h = kk_std_test_test__test_scope_unbox(_box_x351, KK_BORROWED, _ctx);
    kk_std_test_test__test_scope_dup(h, _ctx);
    {
      struct kk_std_test_test__Hnd_test_scope* _con_x1270 = kk_std_test_test__as_Hnd_test_scope(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x1270->_cfc;
      kk_std_core_hnd__clause0 _pat_1_0 = _con_x1270->_val_indentation;
      kk_std_core_hnd__clause0 _pat_2_0 = _con_x1270->_val_scope_name;
      kk_std_core_hnd__clause0 _fun_report_fail = _con_x1270->_fun_report_fail;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_0, _ctx);
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_fun_report_fail, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x354 = _fun_report_fail.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x354, (_fun_unbox_x354, m, ev_10326, _ctx), _ctx);
      }
    }
  }
}

kk_unit_t kk_std_test_test_istest_fs__mlift_scope_10229(kk_unit_t wild___0, kk_context_t* _ctx) { /* forall<h,e> (wild_@0 : ()) -> <local<h>,test-scope,console/console|e> () */ 
  kk_ssize_t _b_x357_359;
  kk_std_core_hnd__htag _x_x1266 = kk_std_core_hnd__htag_dup(kk_std_test_test__tag_test_scope, _ctx); /*hnd/htag<std/test/test/test-scope>*/
  _b_x357_359 = kk_std_core_hnd__evv_index(_x_x1266, _ctx); /*hnd/ev-index*/
  kk_box_t _x_x1267 = kk_std_core_hnd__open_at0(_b_x357_359, kk_std_test_test_istest_fs__new_mlift_scope_10229_fun1268(_ctx), _ctx); /*9025*/
  kk_unit_unbox(_x_x1267); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_std_test_test_istest_fs__mlift_scope_10230_fun1271__t {
  struct kk_function_s _base;
};
static bool kk_std_test_test_istest_fs__mlift_scope_10230_fun1271(kk_function_t _fself, bool b, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_istest_fs__new_mlift_scope_10230_fun1271(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test_istest_fs__mlift_scope_10230_fun1271, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_test_test_istest_fs__mlift_scope_10230_fun1271(kk_function_t _fself, bool b, kk_context_t* _ctx) {
  kk_unused(_fself);
  if (b) {
    return false;
  }
  {
    return true;
  }
}


// lift anonymous function
struct kk_std_test_test_istest_fs__mlift_scope_10230_fun1274__t {
  struct kk_function_s _base;
  kk_function_t _b_x361_364;
};
static kk_box_t kk_std_test_test_istest_fs__mlift_scope_10230_fun1274(kk_function_t _fself, kk_box_t _b_x363, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_istest_fs__new_mlift_scope_10230_fun1274(kk_function_t _b_x361_364, kk_context_t* _ctx) {
  struct kk_std_test_test_istest_fs__mlift_scope_10230_fun1274__t* _self = kk_function_alloc_as(struct kk_std_test_test_istest_fs__mlift_scope_10230_fun1274__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_istest_fs__mlift_scope_10230_fun1274, kk_context());
  _self->_b_x361_364 = _b_x361_364;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test_istest_fs__mlift_scope_10230_fun1274(kk_function_t _fself, kk_box_t _b_x363, kk_context_t* _ctx) {
  struct kk_std_test_test_istest_fs__mlift_scope_10230_fun1274__t* _self = kk_function_as(struct kk_std_test_test_istest_fs__mlift_scope_10230_fun1274__t*, _fself, _ctx);
  kk_function_t _b_x361_364 = _self->_b_x361_364; /* (b : bool) -> bool */
  kk_drop_match(_self, {kk_function_dup(_b_x361_364, _ctx);}, {}, _ctx)
  bool _x_x1275;
  bool _x_x1276 = kk_bool_unbox(_b_x363); /*bool*/
  _x_x1275 = kk_function_call(bool, (kk_function_t, bool, kk_context_t*), _b_x361_364, (_b_x361_364, _x_x1276, _ctx), _ctx); /*bool*/
  return kk_bool_box(_x_x1275);
}

kk_unit_t kk_std_test_test_istest_fs__mlift_scope_10230(kk_string_t infomsg, bool _y_x10128, kk_context_t* _ctx) { /* forall<h,e> (infomsg : string, bool) -> <local<h>,console/console,test-scope|e> () */ 
  kk_function_t _b_x361_364 = kk_std_test_test_istest_fs__new_mlift_scope_10230_fun1271(_ctx); /*(b : bool) -> bool*/;
  bool _b_x362_365 = _y_x10128; /*bool*/;
  kk_string_t _x_x1272;
  bool _match_x885;
  kk_box_t _x_x1273 = kk_std_core_hnd__open_none1(kk_std_test_test_istest_fs__new_mlift_scope_10230_fun1274(_b_x361_364, _ctx), kk_bool_box(_b_x362_365), _ctx); /*8580*/
  _match_x885 = kk_bool_unbox(_x_x1273); /*bool*/
  if (_match_x885) {
    kk_string_t _x_x1277;
    kk_define_string_literal(, _s_x1278, 8, " passed!", _ctx)
    _x_x1277 = kk_string_dup(_s_x1278, _ctx); /*string*/
    _x_x1272 = kk_std_core_types__lp__plus__plus__rp_(infomsg, _x_x1277, _ctx); /*string*/
  }
  else {
    kk_string_t _x_x1279;
    kk_define_string_literal(, _s_x1280, 8, " failed!", _ctx)
    _x_x1279 = kk_string_dup(_s_x1280, _ctx); /*string*/
    _x_x1272 = kk_std_core_types__lp__plus__plus__rp_(infomsg, _x_x1279, _ctx); /*string*/
  }
  kk_std_core_console_printsln(_x_x1272, _ctx); return kk_Unit;
}
extern kk_box_t kk_std_test_test_istest_fs__mlift_scope_10231_fun1282(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_test_test_istest_fs__mlift_scope_10231_fun1282__t* _self = kk_function_as(struct kk_std_test_test_istest_fs__mlift_scope_10231_fun1282__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* () -> <std/test/test/test-scope,console/console|3601> () */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_unit_t _x_x1283 = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), f, (f, _ctx), _ctx);
  return kk_unit_box(_x_x1283);
}
 
// monadic lift


// lift anonymous function
struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1287__t {
  struct kk_function_s _base;
  kk_string_t _value_indentation_l105_c9;
};
static kk_box_t kk_std_test_test_istest_fs__mlift_scope_10232_fun1287(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_istest_fs__new_mlift_scope_10232_fun1287(kk_string_t _value_indentation_l105_c9, kk_context_t* _ctx) {
  struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1287__t* _self = kk_function_alloc_as(struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1287__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_istest_fs__mlift_scope_10232_fun1287, kk_context());
  _self->_value_indentation_l105_c9 = _value_indentation_l105_c9;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test_istest_fs__mlift_scope_10232_fun1287(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1287__t* _self = kk_function_as(struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1287__t*, _fself, _ctx);
  kk_string_t _value_indentation_l105_c9 = _self->_value_indentation_l105_c9; /* string */
  kk_drop_match(_self, {kk_string_dup(_value_indentation_l105_c9, _ctx);}, {}, _ctx)
  return kk_string_box(_value_indentation_l105_c9);
}


// lift anonymous function
struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1289__t {
  struct kk_function_s _base;
  kk_string_t name;
};
static kk_box_t kk_std_test_test_istest_fs__mlift_scope_10232_fun1289(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_istest_fs__new_mlift_scope_10232_fun1289(kk_string_t name, kk_context_t* _ctx) {
  struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1289__t* _self = kk_function_alloc_as(struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1289__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_istest_fs__mlift_scope_10232_fun1289, kk_context());
  _self->name = name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test_istest_fs__mlift_scope_10232_fun1289(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1289__t* _self = kk_function_as(struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1289__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);}, {}, _ctx)
  return kk_string_box(name);
}


// lift anonymous function
struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1292__t {
  struct kk_function_s _base;
  kk_ref_t anyfail;
};
static kk_box_t kk_std_test_test_istest_fs__mlift_scope_10232_fun1292(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_istest_fs__new_mlift_scope_10232_fun1292(kk_ref_t anyfail, kk_context_t* _ctx) {
  struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1292__t* _self = kk_function_alloc_as(struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1292__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_istest_fs__mlift_scope_10232_fun1292, kk_context());
  _self->anyfail = anyfail;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1295__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_test_istest_fs__mlift_scope_10232_fun1295(kk_function_t _fself, kk_box_t _b_x379, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_istest_fs__new_mlift_scope_10232_fun1295(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test_istest_fs__mlift_scope_10232_fun1295, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_test_istest_fs__mlift_scope_10232_fun1295(kk_function_t _fself, kk_box_t _b_x379, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t wild___0_412 = kk_Unit;
  kk_unit_unbox(_b_x379);
  kk_unit_t _x_x1296 = kk_Unit;
  kk_std_test_test_istest_fs__mlift_scope_10229(wild___0_412, _ctx);
  return kk_unit_box(_x_x1296);
}
static kk_box_t kk_std_test_test_istest_fs__mlift_scope_10232_fun1292(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1292__t* _self = kk_function_as(struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1292__t*, _fself, _ctx);
  kk_ref_t anyfail = _self->anyfail; /* local-var<3597,bool> */
  kk_drop_match(_self, {kk_ref_dup(anyfail, _ctx);}, {}, _ctx)
  kk_unit_t _x_x1293 = kk_Unit;
  kk_unit_t x_10328 = kk_Unit;
  kk_unit_t _brw_x884 = kk_Unit;
  kk_ref_set_borrow(anyfail,(kk_bool_box(true)),kk_context());
  kk_ref_drop(anyfail, _ctx);
  _brw_x884;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1294 = kk_std_core_hnd_yield_extend(kk_std_test_test_istest_fs__new_mlift_scope_10232_fun1295(_ctx), _ctx); /*2978*/
    kk_unit_unbox(_x_x1294);
  }
  else {
    kk_std_test_test_istest_fs__mlift_scope_10229(x_10328, _ctx);
  }
  return kk_unit_box(_x_x1293);
}


// lift anonymous function
struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1298__t {
  struct kk_function_s _base;
  kk_ref_t anyfail;
  kk_string_t infomsg;
};
static kk_box_t kk_std_test_test_istest_fs__mlift_scope_10232_fun1298(kk_function_t _fself, kk_box_t _b_x396, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_istest_fs__new_mlift_scope_10232_fun1298(kk_ref_t anyfail, kk_string_t infomsg, kk_context_t* _ctx) {
  struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1298__t* _self = kk_function_alloc_as(struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1298__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_istest_fs__mlift_scope_10232_fun1298, kk_context());
  _self->anyfail = anyfail;
  _self->infomsg = infomsg;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1302__t {
  struct kk_function_s _base;
  kk_string_t infomsg;
};
static kk_box_t kk_std_test_test_istest_fs__mlift_scope_10232_fun1302(kk_function_t _fself, kk_box_t _b_x384, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_istest_fs__new_mlift_scope_10232_fun1302(kk_string_t infomsg, kk_context_t* _ctx) {
  struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1302__t* _self = kk_function_alloc_as(struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1302__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_istest_fs__mlift_scope_10232_fun1302, kk_context());
  _self->infomsg = infomsg;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test_istest_fs__mlift_scope_10232_fun1302(kk_function_t _fself, kk_box_t _b_x384, kk_context_t* _ctx) {
  struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1302__t* _self = kk_function_as(struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1302__t*, _fself, _ctx);
  kk_string_t infomsg = _self->infomsg; /* string */
  kk_drop_match(_self, {kk_string_dup(infomsg, _ctx);}, {}, _ctx)
  bool _y_x10128_414 = kk_bool_unbox(_b_x384); /*bool*/;
  kk_unit_t _x_x1303 = kk_Unit;
  kk_std_test_test_istest_fs__mlift_scope_10230(infomsg, _y_x10128_414, _ctx);
  return kk_unit_box(_x_x1303);
}
static kk_box_t kk_std_test_test_istest_fs__mlift_scope_10232_fun1298(kk_function_t _fself, kk_box_t _b_x396, kk_context_t* _ctx) {
  struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1298__t* _self = kk_function_as(struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1298__t*, _fself, _ctx);
  kk_ref_t anyfail = _self->anyfail; /* local-var<3597,bool> */
  kk_string_t infomsg = _self->infomsg; /* string */
  kk_drop_match(_self, {kk_ref_dup(anyfail, _ctx);kk_string_dup(infomsg, _ctx);}, {}, _ctx)
  kk_unit_t x_0_413 = kk_Unit;
  kk_unit_unbox(_b_x396);
  bool x_1_10330;
  kk_box_t _x_x1299 = kk_ref_get(anyfail,kk_context()); /*4857*/
  x_1_10330 = kk_bool_unbox(_x_x1299); /*bool*/
  kk_unit_t _x_x1300 = kk_Unit;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1301 = kk_std_core_hnd_yield_extend(kk_std_test_test_istest_fs__new_mlift_scope_10232_fun1302(infomsg, _ctx), _ctx); /*2978*/
    kk_unit_unbox(_x_x1301);
  }
  else {
    kk_std_test_test_istest_fs__mlift_scope_10230(infomsg, x_1_10330, _ctx);
  }
  return kk_unit_box(_x_x1300);
}


// lift anonymous function
struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1304__t {
  struct kk_function_s _base;
  kk_function_t f;
};
static kk_box_t kk_std_test_test_istest_fs__mlift_scope_10232_fun1304(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_istest_fs__new_mlift_scope_10232_fun1304(kk_function_t f, kk_context_t* _ctx) {
  struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1304__t* _self = kk_function_alloc_as(struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1304__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_istest_fs__mlift_scope_10232_fun1304, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1306__t {
  struct kk_function_s _base;
  kk_function_t f;
};
static kk_box_t kk_std_test_test_istest_fs__mlift_scope_10232_fun1306(kk_function_t _fself, kk_box_t _b_x389, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_istest_fs__new_mlift_scope_10232_fun1306(kk_function_t f, kk_context_t* _ctx) {
  struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1306__t* _self = kk_function_alloc_as(struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1306__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_istest_fs__mlift_scope_10232_fun1306, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1307__t {
  struct kk_function_s _base;
  kk_function_t _b_x387_408;
};
static kk_box_t kk_std_test_test_istest_fs__mlift_scope_10232_fun1307(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_istest_fs__new_mlift_scope_10232_fun1307(kk_function_t _b_x387_408, kk_context_t* _ctx) {
  struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1307__t* _self = kk_function_alloc_as(struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1307__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_istest_fs__mlift_scope_10232_fun1307, kk_context());
  _self->_b_x387_408 = _b_x387_408;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test_istest_fs__mlift_scope_10232_fun1307(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1307__t* _self = kk_function_as(struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1307__t*, _fself, _ctx);
  kk_function_t _b_x387_408 = _self->_b_x387_408; /* () -> <std/test/test/test-scope,console/console|3601> () */
  kk_drop_match(_self, {kk_function_dup(_b_x387_408, _ctx);}, {}, _ctx)
  kk_unit_t _x_x1308 = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), _b_x387_408, (_b_x387_408, _ctx), _ctx);
  return kk_unit_box(_x_x1308);
}
static kk_box_t kk_std_test_test_istest_fs__mlift_scope_10232_fun1306(kk_function_t _fself, kk_box_t _b_x389, kk_context_t* _ctx) {
  struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1306__t* _self = kk_function_as(struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1306__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* () -> <std/test/test/test-scope,console/console|3601> () */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_ssize_t _y_x10130_415 = kk_ssize_unbox(_b_x389, KK_OWNED, _ctx); /*hnd/ev-index*/;
  kk_ssize_t _b_x385_406 = _y_x10130_415; /*hnd/ev-index*/;
  bool _b_x386_407 = true; /*bool*/;
  kk_function_t _b_x387_408 = f; /*() -> <std/test/test/test-scope,console/console|3601> ()*/;
  return kk_std_core_hnd__mask_at(_b_x385_406, _b_x386_407, kk_std_test_test_istest_fs__new_mlift_scope_10232_fun1307(_b_x387_408, _ctx), _ctx);
}


// lift anonymous function
struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1309__t {
  struct kk_function_s _base;
  kk_function_t f;
};
static kk_box_t kk_std_test_test_istest_fs__mlift_scope_10232_fun1309(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_istest_fs__new_mlift_scope_10232_fun1309(kk_function_t f, kk_context_t* _ctx) {
  struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1309__t* _self = kk_function_alloc_as(struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1309__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_istest_fs__mlift_scope_10232_fun1309, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test_istest_fs__mlift_scope_10232_fun1309(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1309__t* _self = kk_function_as(struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1309__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* () -> <std/test/test/test-scope,console/console|3601> () */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_unit_t _x_x1310 = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), f, (f, _ctx), _ctx);
  return kk_unit_box(_x_x1310);
}
static kk_box_t kk_std_test_test_istest_fs__mlift_scope_10232_fun1304(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1304__t* _self = kk_function_as(struct kk_std_test_test_istest_fs__mlift_scope_10232_fun1304__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* () -> <std/test/test/test-scope,console/console|3601> () */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_ssize_t x_2_10333;
  kk_std_core_hnd__htag _x_x1305 = kk_std_core_hnd__htag_dup(kk_std_test_test__tag_test_scope, _ctx); /*hnd/htag<std/test/test/test-scope>*/
  x_2_10333 = kk_std_core_hnd__evv_index(_x_x1305, _ctx); /*hnd/ev-index*/
  if (kk_yielding(kk_context())) {
    return kk_std_core_hnd_yield_extend(kk_std_test_test_istest_fs__new_mlift_scope_10232_fun1306(f, _ctx), _ctx);
  }
  {
    return kk_std_core_hnd__mask_at(x_2_10333, true, kk_std_test_test_istest_fs__new_mlift_scope_10232_fun1309(f, _ctx), _ctx);
  }
}

kk_unit_t kk_std_test_test_istest_fs__mlift_scope_10232(kk_ref_t anyfail, kk_function_t f, kk_string_t infomsg, kk_string_t name, kk_string_t _y_x10124, kk_context_t* _ctx) { /* forall<h,e> (anyfail : local-var<h,bool>, f : () -> <test-scope,console/console|e> (), infomsg : string, name : string, string) -> <test-scope,console/console,local<h>|e> () */ 
  kk_string_t _value_indentation_l105_c9;
  kk_string_t _x_x1284;
  kk_define_string_literal(, _s_x1285, 2, "  ", _ctx)
  _x_x1284 = kk_string_dup(_s_x1285, _ctx); /*string*/
  _value_indentation_l105_c9 = kk_std_core_types__lp__plus__plus__rp_(_y_x10124, _x_x1284, _ctx); /*string*/
  kk_std_test_test__test_scope _b_x393_397;
  kk_std_core_hnd__clause0 _x_x1286 = kk_std_core_hnd_clause_tail0(kk_std_test_test_istest_fs__new_mlift_scope_10232_fun1287(_value_indentation_l105_c9, _ctx), _ctx); /*hnd/clause0<6234,6233,6231,6232>*/
  kk_std_core_hnd__clause0 _x_x1288 = kk_std_core_hnd_clause_tail0(kk_std_test_test_istest_fs__new_mlift_scope_10232_fun1289(name, _ctx), _ctx); /*hnd/clause0<6234,6233,6231,6232>*/
  kk_std_core_hnd__clause0 _x_x1290;
  kk_function_t _x_x1291;
  kk_ref_dup(anyfail, _ctx);
  _x_x1291 = kk_std_test_test_istest_fs__new_mlift_scope_10232_fun1292(anyfail, _ctx); /*() -> 6231 6234*/
  _x_x1290 = kk_std_core_hnd_clause_tail0(_x_x1291, _ctx); /*hnd/clause0<6234,6233,6231,6232>*/
  _b_x393_397 = kk_std_test_test__new_Hnd_test_scope(kk_reuse_null, 0, kk_integer_from_small(1), _x_x1286, _x_x1288, _x_x1290, _ctx); /*std/test/test/test-scope<<local<3597>,std/test/test/test-scope,console/console|3601>,()>*/
  kk_box_t _x_x1297 = kk_std_test_test__handle_test_scope(_b_x393_397, kk_std_test_test_istest_fs__new_mlift_scope_10232_fun1298(anyfail, infomsg, _ctx), kk_std_test_test_istest_fs__new_mlift_scope_10232_fun1304(f, _ctx), _ctx); /*853*/
  kk_unit_unbox(_x_x1297); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_std_test_test_istest_fs__mlift_scope_10233_fun1336__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_test_istest_fs__mlift_scope_10233_fun1336(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_istest_fs__new_mlift_scope_10233_fun1336(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test_istest_fs__mlift_scope_10233_fun1336, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_test_istest_fs__mlift_scope_10233_fun1336(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_hnd__ev ev_10341 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/test/test/test-scope>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x1337 = kk_std_core_hnd__as_Ev(ev_10341, _ctx);
    kk_box_t _box_x418 = _con_x1337->hnd;
    int32_t m = _con_x1337->marker;
    kk_std_test_test__test_scope h = kk_std_test_test__test_scope_unbox(_box_x418, KK_BORROWED, _ctx);
    kk_std_test_test__test_scope_dup(h, _ctx);
    {
      struct kk_std_test_test__Hnd_test_scope* _con_x1338 = kk_std_test_test__as_Hnd_test_scope(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x1338->_cfc;
      kk_std_core_hnd__clause0 _val_indentation_0 = _con_x1338->_val_indentation;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x1338->_val_scope_name;
      kk_std_core_hnd__clause0 _pat_2_0 = _con_x1338->_fun_report_fail;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_val_indentation_0, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x421 = _val_indentation_0.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x421, (_fun_unbox_x421, m, ev_10341, _ctx), _ctx);
      }
    }
  }
}


// lift anonymous function
struct kk_std_test_test_istest_fs__mlift_scope_10233_fun1341__t {
  struct kk_function_s _base;
  kk_function_t f;
  kk_string_t infomsg;
  kk_ref_t loc;
  kk_string_t name;
};
static kk_box_t kk_std_test_test_istest_fs__mlift_scope_10233_fun1341(kk_function_t _fself, kk_box_t _b_x429, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_istest_fs__new_mlift_scope_10233_fun1341(kk_function_t f, kk_string_t infomsg, kk_ref_t loc, kk_string_t name, kk_context_t* _ctx) {
  struct kk_std_test_test_istest_fs__mlift_scope_10233_fun1341__t* _self = kk_function_alloc_as(struct kk_std_test_test_istest_fs__mlift_scope_10233_fun1341__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_istest_fs__mlift_scope_10233_fun1341, kk_context());
  _self->f = f;
  _self->infomsg = infomsg;
  _self->loc = loc;
  _self->name = name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test_istest_fs__mlift_scope_10233_fun1341(kk_function_t _fself, kk_box_t _b_x429, kk_context_t* _ctx) {
  struct kk_std_test_test_istest_fs__mlift_scope_10233_fun1341__t* _self = kk_function_as(struct kk_std_test_test_istest_fs__mlift_scope_10233_fun1341__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* () -> <std/test/test/test-scope,console/console|3601> () */
  kk_string_t infomsg = _self->infomsg; /* string */
  kk_ref_t loc = _self->loc; /* local-var<3597,bool> */
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);kk_string_dup(infomsg, _ctx);kk_ref_dup(loc, _ctx);kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_unit_t _x_x1342 = kk_Unit;
  kk_string_t _x_x1343 = kk_string_unbox(_b_x429); /*string*/
  kk_std_test_test_istest_fs__mlift_scope_10232(loc, f, infomsg, name, _x_x1343, _ctx);
  return kk_unit_box(_x_x1342);
}

kk_unit_t kk_std_test_test_istest_fs__mlift_scope_10233(kk_function_t f, bool is_test, kk_string_t name, kk_string_t _implicit_fs_kk_line, kk_string_t _implicit_fs_kk_module, kk_string_t _y_x10122, kk_context_t* _ctx) { /* forall<h,e> (f : () -> <test-scope,console/console|e> (), is-test : bool, name : string, ?kk-line : string, ?kk-module : string, string) -> <test-scope,console/console,local<h>|e> () */ 
  kk_string_t infomsg;
  kk_string_t _x_x1311;
  kk_string_t _x_x1312;
  if (is_test) {
    kk_define_string_literal(, _s_x1313, 4, "test", _ctx)
    _x_x1312 = kk_string_dup(_s_x1313, _ctx); /*string*/
  }
  else {
    kk_define_string_literal(, _s_x1314, 5, "group", _ctx)
    _x_x1312 = kk_string_dup(_s_x1314, _ctx); /*string*/
  }
  kk_string_t _x_x1315;
  kk_string_t _x_x1316;
  kk_define_string_literal(, _s_x1317, 1, "(", _ctx)
  _x_x1316 = kk_string_dup(_s_x1317, _ctx); /*string*/
  kk_string_t _x_x1318;
  kk_string_t _x_x1319 = kk_string_dup(name, _ctx); /*string*/
  kk_string_t _x_x1320;
  kk_string_t _x_x1321;
  kk_define_string_literal(, _s_x1322, 3, " : ", _ctx)
  _x_x1321 = kk_string_dup(_s_x1322, _ctx); /*string*/
  kk_string_t _x_x1323;
  kk_string_t _x_x1324;
  kk_string_t _x_x1325;
  kk_define_string_literal(, _s_x1326, 1, ":", _ctx)
  _x_x1325 = kk_string_dup(_s_x1326, _ctx); /*string*/
  kk_string_t _x_x1327;
  kk_string_t _x_x1328;
  kk_define_string_literal(, _s_x1329, 2, "):", _ctx)
  _x_x1328 = kk_string_dup(_s_x1329, _ctx); /*string*/
  _x_x1327 = kk_std_core_types__lp__plus__plus__rp_(_implicit_fs_kk_line, _x_x1328, _ctx); /*string*/
  _x_x1324 = kk_std_core_types__lp__plus__plus__rp_(_x_x1325, _x_x1327, _ctx); /*string*/
  _x_x1323 = kk_std_core_types__lp__plus__plus__rp_(_implicit_fs_kk_module, _x_x1324, _ctx); /*string*/
  _x_x1320 = kk_std_core_types__lp__plus__plus__rp_(_x_x1321, _x_x1323, _ctx); /*string*/
  _x_x1318 = kk_std_core_types__lp__plus__plus__rp_(_x_x1319, _x_x1320, _ctx); /*string*/
  _x_x1315 = kk_std_core_types__lp__plus__plus__rp_(_x_x1316, _x_x1318, _ctx); /*string*/
  _x_x1311 = kk_std_core_types__lp__plus__plus__rp_(_x_x1312, _x_x1315, _ctx); /*string*/
  infomsg = kk_std_core_types__lp__plus__plus__rp_(_y_x10122, _x_x1311, _ctx); /*string*/
  kk_unit_t __ = kk_Unit;
  kk_string_t _x_x1330;
  kk_string_t _x_x1331 = kk_string_dup(infomsg, _ctx); /*string*/
  kk_string_t _x_x1332;
  kk_define_string_literal(, _s_x1333, 4, "... ", _ctx)
  _x_x1332 = kk_string_dup(_s_x1333, _ctx); /*string*/
  _x_x1330 = kk_std_core_types__lp__plus__plus__rp_(_x_x1331, _x_x1332, _ctx); /*string*/
  kk_std_core_console_printsln(_x_x1330, _ctx);
  kk_ref_t loc = kk_ref_alloc((kk_bool_box(false)),kk_context()); /*local-var<3597,bool>*/;
  kk_ssize_t _b_x424_426;
  kk_std_core_hnd__htag _x_x1334 = kk_std_core_hnd__htag_dup(kk_std_test_test__tag_test_scope, _ctx); /*hnd/htag<std/test/test/test-scope>*/
  _b_x424_426 = kk_std_core_hnd__evv_index(_x_x1334, _ctx); /*hnd/ev-index*/
  kk_string_t x_10339;
  kk_box_t _x_x1335 = kk_std_core_hnd__open_at0(_b_x424_426, kk_std_test_test_istest_fs__new_mlift_scope_10233_fun1336(_ctx), _ctx); /*9025*/
  x_10339 = kk_string_unbox(_x_x1335); /*string*/
  kk_unit_t res = kk_Unit;
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_10339, _ctx);
    kk_box_t _x_x1339;
    kk_function_t _x_x1340;
    kk_ref_dup(loc, _ctx);
    _x_x1340 = kk_std_test_test_istest_fs__new_mlift_scope_10233_fun1341(f, infomsg, loc, name, _ctx); /*(2977) -> 2979 2978*/
    _x_x1339 = kk_std_core_hnd_yield_extend(_x_x1340, _ctx); /*2978*/
    kk_unit_unbox(_x_x1339);
  }
  else {
    kk_ref_t _x_x1344 = kk_ref_dup(loc, _ctx); /*local-var<3597,bool>*/
    kk_std_test_test_istest_fs__mlift_scope_10232(_x_x1344, f, infomsg, name, x_10339, _ctx);
  }
  kk_box_t _x_x1345 = kk_std_core_hnd_prompt_local_var(loc, kk_unit_box(res), _ctx); /*9564*/
  kk_unit_unbox(_x_x1345); return kk_Unit;
}
 
// A scoped grouping of tests with some name (could be a single test, or a subgroup of tests)


// lift anonymous function
struct kk_std_test_test_istest_fs_scope_fun1348__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_test_istest_fs_scope_fun1348(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_istest_fs_new_scope_fun1348(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test_istest_fs_scope_fun1348, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_test_istest_fs_scope_fun1348(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_hnd__ev ev_10345 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/test/test/test-scope>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x1349 = kk_std_core_hnd__as_Ev(ev_10345, _ctx);
    kk_box_t _box_x436 = _con_x1349->hnd;
    int32_t m = _con_x1349->marker;
    kk_std_test_test__test_scope h = kk_std_test_test__test_scope_unbox(_box_x436, KK_BORROWED, _ctx);
    kk_std_test_test__test_scope_dup(h, _ctx);
    {
      struct kk_std_test_test__Hnd_test_scope* _con_x1350 = kk_std_test_test__as_Hnd_test_scope(h, _ctx);
      kk_integer_t _pat_0 = _con_x1350->_cfc;
      kk_std_core_hnd__clause0 _val_indentation_0 = _con_x1350->_val_indentation;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x1350->_val_scope_name;
      kk_std_core_hnd__clause0 _pat_2 = _con_x1350->_fun_report_fail;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_val_indentation_0, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x439 = _val_indentation_0.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x439, (_fun_unbox_x439, m, ev_10345, _ctx), _ctx);
      }
    }
  }
}


// lift anonymous function
struct kk_std_test_test_istest_fs_scope_fun1352__t {
  struct kk_function_s _base;
  kk_function_t f;
  kk_string_t name;
  kk_string_t _implicit_fs_kk_line;
  kk_string_t _implicit_fs_kk_module;
  bool is_test;
};
static kk_box_t kk_std_test_test_istest_fs_scope_fun1352(kk_function_t _fself, kk_box_t _b_x447, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_istest_fs_new_scope_fun1352(kk_function_t f, kk_string_t name, kk_string_t _implicit_fs_kk_line, kk_string_t _implicit_fs_kk_module, bool is_test, kk_context_t* _ctx) {
  struct kk_std_test_test_istest_fs_scope_fun1352__t* _self = kk_function_alloc_as(struct kk_std_test_test_istest_fs_scope_fun1352__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_istest_fs_scope_fun1352, kk_context());
  _self->f = f;
  _self->name = name;
  _self->_implicit_fs_kk_line = _implicit_fs_kk_line;
  _self->_implicit_fs_kk_module = _implicit_fs_kk_module;
  _self->is_test = is_test;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test_istest_fs_scope_fun1352(kk_function_t _fself, kk_box_t _b_x447, kk_context_t* _ctx) {
  struct kk_std_test_test_istest_fs_scope_fun1352__t* _self = kk_function_as(struct kk_std_test_test_istest_fs_scope_fun1352__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* () -> <std/test/test/test-scope,console/console|3601> () */
  kk_string_t name = _self->name; /* string */
  kk_string_t _implicit_fs_kk_line = _self->_implicit_fs_kk_line; /* string */
  kk_string_t _implicit_fs_kk_module = _self->_implicit_fs_kk_module; /* string */
  bool is_test = _self->is_test; /* bool */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);kk_string_dup(name, _ctx);kk_string_dup(_implicit_fs_kk_line, _ctx);kk_string_dup(_implicit_fs_kk_module, _ctx);kk_skip_dup(is_test, _ctx);}, {}, _ctx)
  kk_string_t _y_x10122_449 = kk_string_unbox(_b_x447); /*string*/;
  kk_unit_t _x_x1353 = kk_Unit;
  kk_std_test_test_istest_fs__mlift_scope_10233(f, is_test, name, _implicit_fs_kk_line, _implicit_fs_kk_module, _y_x10122_449, _ctx);
  return kk_unit_box(_x_x1353);
}

kk_unit_t kk_std_test_test_istest_fs_scope(kk_string_t name, bool is_test, kk_function_t f, kk_string_t _implicit_fs_kk_module, kk_string_t _implicit_fs_kk_line, kk_context_t* _ctx) { /* forall<e> (name : string, is-test : bool, f : () -> <test-scope,console/console|e> (), ?kk-module : string, ?kk-line : string) -> <test-scope,console/console|e> () */ 
  kk_ssize_t _b_x442_444;
  kk_std_core_hnd__htag _x_x1346 = kk_std_core_hnd__htag_dup(kk_std_test_test__tag_test_scope, _ctx); /*hnd/htag<std/test/test/test-scope>*/
  _b_x442_444 = kk_std_core_hnd__evv_index(_x_x1346, _ctx); /*hnd/ev-index*/
  kk_string_t x_10343;
  kk_box_t _x_x1347 = kk_std_core_hnd__open_at0(_b_x442_444, kk_std_test_test_istest_fs_new_scope_fun1348(_ctx), _ctx); /*9025*/
  x_10343 = kk_string_unbox(_x_x1347); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_10343, _ctx);
    kk_box_t _x_x1351 = kk_std_core_hnd_yield_extend(kk_std_test_test_istest_fs_new_scope_fun1352(f, name, _implicit_fs_kk_line, _implicit_fs_kk_module, is_test, _ctx), _ctx); /*2978*/
    kk_unit_unbox(_x_x1351); return kk_Unit;
  }
  {
    kk_std_test_test_istest_fs__mlift_scope_10233(f, is_test, name, _implicit_fs_kk_line, _implicit_fs_kk_module, x_10343, _ctx); return kk_Unit;
  }
}
 
// monadic lift

kk_unit_t kk_std_test_test__mlift_test___10234(kk_std_test_test__expectation b, bool cont, kk_function_t resume, kk_unit_t wild___0, kk_context_t* _ctx) { /* forall<a,e> (b : expectation<a>, cont : bool, resume : (a) -> <test-scope,console/console,div,exn|e> (), wild_@0 : ()) -> <test-scope,console/console,div,exn|e> () */ 
  if (cont) {
    if (kk_std_test_test__is_ExpectedValue(b, _ctx)) {
      struct kk_std_test_test_ExpectedValue* _con_x1355 = kk_std_test_test__as_ExpectedValue(b, _ctx);
      kk_box_t b_sq_ = _con_x1355->a;
      if kk_likely(kk_datatype_ptr_is_unique(b, _ctx)) {
        kk_datatype_ptr_free(b, _ctx);
      }
      else {
        kk_box_dup(b_sq_, _ctx);
        kk_datatype_ptr_decref(b, _ctx);
      }
      kk_function_call(kk_unit_t, (kk_function_t, kk_box_t, kk_context_t*), resume, (resume, b_sq_, _ctx), _ctx); return kk_Unit;
    }
    {
      kk_function_drop(resume, _ctx);
      kk_std_test_test__expectation_drop(b, _ctx);
      kk_Unit; return kk_Unit;
    }
  }
  {
    kk_function_drop(resume, _ctx);
    kk_std_test_test__expectation_drop(b, _ctx);
    kk_Unit; return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_test_test__mlift_test___10235_fun1361__t {
  struct kk_function_s _base;
};
static kk_string_t kk_std_test_test__mlift_test___10235_fun1361(kk_function_t _fself, kk_std_core_exn__exception exn_0, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test___10235_fun1361(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test__mlift_test___10235_fun1361, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_std_test_test__mlift_test___10235_fun1361(kk_function_t _fself, kk_std_core_exn__exception exn_0, kk_context_t* _ctx) {
  kk_unused(_fself);
  {
    kk_string_t _x = exn_0.message;
    kk_string_dup(_x, _ctx);
    kk_std_core_exn__exception_drop(exn_0, _ctx);
    return _x;
  }
}


// lift anonymous function
struct kk_std_test_test__mlift_test___10235_fun1362__t {
  struct kk_function_s _base;
};
static kk_string_t kk_std_test_test__mlift_test___10235_fun1362(kk_function_t _fself, kk_std_core_types__maybe m, kk_string_t nothing, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test___10235_fun1362(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test__mlift_test___10235_fun1362, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_std_test_test__mlift_test___10235_fun1362(kk_function_t _fself, kk_std_core_types__maybe m, kk_string_t nothing, kk_context_t* _ctx) {
  kk_unused(_fself);
  if (kk_std_core_types__is_Nothing(m, _ctx)) {
    return nothing;
  }
  {
    kk_box_t _box_x454 = m._cons.Just.value;
    kk_string_t x = kk_string_unbox(_box_x454);
    kk_string_drop(nothing, _ctx);
    kk_string_dup(x, _ctx);
    kk_std_core_types__maybe_drop(m, _ctx);
    return x;
  }
}


// lift anonymous function
struct kk_std_test_test__mlift_test___10235_fun1374__t {
  struct kk_function_s _base;
  kk_function_t _b_x451_460;
};
static kk_box_t kk_std_test_test__mlift_test___10235_fun1374(kk_function_t _fself, kk_box_t _b_x453, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test___10235_fun1374(kk_function_t _b_x451_460, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_test___10235_fun1374__t* _self = kk_function_alloc_as(struct kk_std_test_test__mlift_test___10235_fun1374__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test__mlift_test___10235_fun1374, kk_context());
  _self->_b_x451_460 = _b_x451_460;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test__mlift_test___10235_fun1374(kk_function_t _fself, kk_box_t _b_x453, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_test___10235_fun1374__t* _self = kk_function_as(struct kk_std_test_test__mlift_test___10235_fun1374__t*, _fself, _ctx);
  kk_function_t _b_x451_460 = _self->_b_x451_460; /* (exn@0 : exception) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x451_460, _ctx);}, {}, _ctx)
  kk_string_t _x_x1375;
  kk_std_core_exn__exception _x_x1376 = kk_std_core_exn__exception_unbox(_b_x453, KK_OWNED, _ctx); /*exception*/
  _x_x1375 = kk_function_call(kk_string_t, (kk_function_t, kk_std_core_exn__exception, kk_context_t*), _b_x451_460, (_b_x451_460, _x_x1376, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x1375);
}


// lift anonymous function
struct kk_std_test_test__mlift_test___10235_fun1379__t {
  struct kk_function_s _base;
  kk_function_t _b_x455_462;
};
static kk_box_t kk_std_test_test__mlift_test___10235_fun1379(kk_function_t _fself, kk_box_t _b_x458, kk_box_t _b_x459, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test___10235_fun1379(kk_function_t _b_x455_462, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_test___10235_fun1379__t* _self = kk_function_alloc_as(struct kk_std_test_test__mlift_test___10235_fun1379__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test__mlift_test___10235_fun1379, kk_context());
  _self->_b_x455_462 = _b_x455_462;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test__mlift_test___10235_fun1379(kk_function_t _fself, kk_box_t _b_x458, kk_box_t _b_x459, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_test___10235_fun1379__t* _self = kk_function_as(struct kk_std_test_test__mlift_test___10235_fun1379__t*, _fself, _ctx);
  kk_function_t _b_x455_462 = _self->_b_x455_462; /* (m : maybe<string>, nothing : string) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x455_462, _ctx);}, {}, _ctx)
  kk_string_t _x_x1380;
  kk_std_core_types__maybe _x_x1381 = kk_std_core_types__maybe_unbox(_b_x458, KK_OWNED, _ctx); /*maybe<string>*/
  kk_string_t _x_x1382 = kk_string_unbox(_b_x459); /*string*/
  _x_x1380 = kk_function_call(kk_string_t, (kk_function_t, kk_std_core_types__maybe, kk_string_t, kk_context_t*), _b_x455_462, (_b_x455_462, _x_x1381, _x_x1382, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x1380);
}


// lift anonymous function
struct kk_std_test_test__mlift_test___10235_fun1385__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_test__mlift_test___10235_fun1385(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test___10235_fun1385(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test__mlift_test___10235_fun1385, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_test__mlift_test___10235_fun1385(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_hnd__ev ev_10349 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/test/test/test-scope>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x1386 = kk_std_core_hnd__as_Ev(ev_10349, _ctx);
    kk_box_t _box_x465 = _con_x1386->hnd;
    int32_t m_0 = _con_x1386->marker;
    kk_std_test_test__test_scope h = kk_std_test_test__test_scope_unbox(_box_x465, KK_BORROWED, _ctx);
    kk_std_test_test__test_scope_dup(h, _ctx);
    {
      struct kk_std_test_test__Hnd_test_scope* _con_x1387 = kk_std_test_test__as_Hnd_test_scope(h, _ctx);
      kk_integer_t _pat_0 = _con_x1387->_cfc;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x1387->_val_indentation;
      kk_std_core_hnd__clause0 _pat_2 = _con_x1387->_val_scope_name;
      kk_std_core_hnd__clause0 _fun_report_fail = _con_x1387->_fun_report_fail;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_fun_report_fail, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x468 = _fun_report_fail.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x468, (_fun_unbox_x468, m_0, ev_10349, _ctx), _ctx);
      }
    }
  }
}


// lift anonymous function
struct kk_std_test_test__mlift_test___10235_fun1388__t {
  struct kk_function_s _base;
  kk_std_test_test__expectation b;
  kk_function_t resume;
  bool cont;
};
static kk_unit_t kk_std_test_test__mlift_test___10235_fun1388(kk_function_t _fself, kk_unit_t wild___0, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test___10235_fun1388(kk_std_test_test__expectation b, kk_function_t resume, bool cont, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_test___10235_fun1388__t* _self = kk_function_alloc_as(struct kk_std_test_test__mlift_test___10235_fun1388__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test__mlift_test___10235_fun1388, kk_context());
  _self->b = b;
  _self->resume = resume;
  _self->cont = cont;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_std_test_test__mlift_test___10235_fun1388(kk_function_t _fself, kk_unit_t wild___0, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_test___10235_fun1388__t* _self = kk_function_as(struct kk_std_test_test__mlift_test___10235_fun1388__t*, _fself, _ctx);
  kk_std_test_test__expectation b = _self->b; /* std/test/test/expectation<4311> */
  kk_function_t resume = _self->resume; /* (4311) -> <std/test/test/test-scope,console/console,div,exn|4323> () */
  bool cont = _self->cont; /* bool */
  kk_drop_match(_self, {kk_std_test_test__expectation_dup(b, _ctx);kk_function_dup(resume, _ctx);kk_skip_dup(cont, _ctx);}, {}, _ctx)
  if (cont) {
    if (kk_std_test_test__is_ExpectedValue(b, _ctx)) {
      struct kk_std_test_test_ExpectedValue* _con_x1389 = kk_std_test_test__as_ExpectedValue(b, _ctx);
      kk_box_t b_sq_ = _con_x1389->a;
      if kk_likely(kk_datatype_ptr_is_unique(b, _ctx)) {
        kk_datatype_ptr_free(b, _ctx);
      }
      else {
        kk_box_dup(b_sq_, _ctx);
        kk_datatype_ptr_decref(b, _ctx);
      }
      kk_function_call(kk_unit_t, (kk_function_t, kk_box_t, kk_context_t*), resume, (resume, b_sq_, _ctx), _ctx); return kk_Unit;
    }
    {
      kk_function_drop(resume, _ctx);
      kk_std_test_test__expectation_drop(b, _ctx);
      kk_Unit; return kk_Unit;
    }
  }
  {
    kk_function_drop(resume, _ctx);
    kk_std_test_test__expectation_drop(b, _ctx);
    kk_Unit; return kk_Unit;
  }
}


// lift anonymous function
struct kk_std_test_test__mlift_test___10235_fun1391__t {
  struct kk_function_s _base;
  kk_function_t next_10348;
};
static kk_box_t kk_std_test_test__mlift_test___10235_fun1391(kk_function_t _fself, kk_box_t _b_x476, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test___10235_fun1391(kk_function_t next_10348, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_test___10235_fun1391__t* _self = kk_function_alloc_as(struct kk_std_test_test__mlift_test___10235_fun1391__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test__mlift_test___10235_fun1391, kk_context());
  _self->next_10348 = next_10348;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test__mlift_test___10235_fun1391(kk_function_t _fself, kk_box_t _b_x476, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_test___10235_fun1391__t* _self = kk_function_as(struct kk_std_test_test__mlift_test___10235_fun1391__t*, _fself, _ctx);
  kk_function_t next_10348 = _self->next_10348; /* (()) -> <std/test/test/test-scope,console/console,div,exn|4323> () */
  kk_drop_match(_self, {kk_function_dup(next_10348, _ctx);}, {}, _ctx)
  kk_unit_t _x_x1392 = kk_Unit;
  kk_unit_t _x_x1393 = kk_Unit;
  kk_unit_unbox(_b_x476);
  kk_function_call(kk_unit_t, (kk_function_t, kk_unit_t, kk_context_t*), next_10348, (next_10348, _x_x1393, _ctx), _ctx);
  return kk_unit_box(_x_x1392);
}

kk_unit_t kk_std_test_test__mlift_test___10235(kk_string_t _y_x10138, kk_string_t _y_x10139, kk_std_test_test__expectation b, bool cont, kk_std_core_exn__exception e, kk_string_t location, kk_function_t resume, kk_std_core_types__maybe _c_x10140, kk_context_t* _ctx) { /* forall<a,e> (string, string, b : expectation<a>, cont : bool, e : exception, location : string, resume : (a) -> <test-scope,console/console,div,exn|e> (), maybe<string>) -> () */ 
  kk_unit_t __ = kk_Unit;
  kk_string_t _x_x1356;
  kk_string_t _x_x1357;
  kk_string_t _x_x1358;
  kk_define_string_literal(, _s_x1359, 9, "  Expect(", _ctx)
  _x_x1358 = kk_string_dup(_s_x1359, _ctx); /*string*/
  kk_string_t _x_x1360;
  kk_function_t _b_x451_460 = kk_std_test_test__new_mlift_test___10235_fun1361(_ctx); /*(exn@0 : exception) -> string*/;
  kk_std_core_exn__exception _b_x452_461 = e; /*exception*/;
  kk_function_t _b_x455_462 = kk_std_test_test__new_mlift_test___10235_fun1362(_ctx); /*(m : maybe<string>, nothing : string) -> string*/;
  kk_std_core_types__maybe _b_x456_463 = _c_x10140; /*maybe<string>*/;
  kk_string_t _b_x457_464 = kk_string_empty(); /*string*/;
  kk_string_t _x_x1364;
  kk_string_t _x_x1365;
  kk_define_string_literal(, _s_x1366, 5, ") == ", _ctx)
  _x_x1365 = kk_string_dup(_s_x1366, _ctx); /*string*/
  kk_string_t _x_x1367;
  kk_string_t _x_x1368;
  kk_string_t _x_x1369;
  kk_define_string_literal(, _s_x1370, 22, ": threw an exception: ", _ctx)
  _x_x1369 = kk_string_dup(_s_x1370, _ctx); /*string*/
  kk_string_t _x_x1371;
  kk_string_t _x_x1372;
  kk_box_t _x_x1373 = kk_std_core_hnd__open_none1(kk_std_test_test__new_mlift_test___10235_fun1374(_b_x451_460, _ctx), kk_std_core_exn__exception_box(_b_x452_461, _ctx), _ctx); /*8580*/
  _x_x1372 = kk_string_unbox(_x_x1373); /*string*/
  kk_string_t _x_x1377;
  kk_box_t _x_x1378 = kk_std_core_hnd__open_none2(kk_std_test_test__new_mlift_test___10235_fun1379(_b_x455_462, _ctx), kk_std_core_types__maybe_box(_b_x456_463, _ctx), kk_string_box(_b_x457_464), _ctx); /*8647*/
  _x_x1377 = kk_string_unbox(_x_x1378); /*string*/
  _x_x1371 = kk_std_core_types__lp__plus__plus__rp_(_x_x1372, _x_x1377, _ctx); /*string*/
  _x_x1368 = kk_std_core_types__lp__plus__plus__rp_(_x_x1369, _x_x1371, _ctx); /*string*/
  _x_x1367 = kk_std_core_types__lp__plus__plus__rp_(_y_x10139, _x_x1368, _ctx); /*string*/
  _x_x1364 = kk_std_core_types__lp__plus__plus__rp_(_x_x1365, _x_x1367, _ctx); /*string*/
  _x_x1360 = kk_std_core_types__lp__plus__plus__rp_(location, _x_x1364, _ctx); /*string*/
  _x_x1357 = kk_std_core_types__lp__plus__plus__rp_(_x_x1358, _x_x1360, _ctx); /*string*/
  _x_x1356 = kk_std_core_types__lp__plus__plus__rp_(_y_x10138, _x_x1357, _ctx); /*string*/
  kk_std_core_console_printsln(_x_x1356, _ctx);
  kk_ssize_t _b_x471_473;
  kk_std_core_hnd__htag _x_x1383 = kk_std_core_hnd__htag_dup(kk_std_test_test__tag_test_scope, _ctx); /*hnd/htag<std/test/test/test-scope>*/
  _b_x471_473 = kk_std_core_hnd__evv_index(_x_x1383, _ctx); /*hnd/ev-index*/
  kk_unit_t x_0_10347 = kk_Unit;
  kk_box_t _x_x1384 = kk_std_core_hnd__open_at0(_b_x471_473, kk_std_test_test__new_mlift_test___10235_fun1385(_ctx), _ctx); /*9025*/
  kk_unit_unbox(_x_x1384);
  kk_function_t next_10348 = kk_std_test_test__new_mlift_test___10235_fun1388(b, resume, cont, _ctx); /*(()) -> <std/test/test/test-scope,console/console,div,exn|4323> ()*/;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1390 = kk_std_core_hnd_yield_extend(kk_std_test_test__new_mlift_test___10235_fun1391(next_10348, _ctx), _ctx); /*2978*/
    kk_unit_unbox(_x_x1390); return kk_Unit;
  }
  {
    kk_function_call(kk_unit_t, (kk_function_t, kk_unit_t, kk_context_t*), next_10348, (next_10348, x_0_10347, _ctx), _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_test_test__mlift_test___10236_fun1397__t {
  struct kk_function_s _base;
  kk_string_t _y_x10138;
  kk_string_t _y_x10139;
  kk_std_test_test__expectation b;
  kk_std_core_exn__exception e;
  kk_string_t location;
  kk_function_t resume;
  bool cont;
};
static kk_box_t kk_std_test_test__mlift_test___10236_fun1397(kk_function_t _fself, kk_box_t _b_x482, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test___10236_fun1397(kk_string_t _y_x10138, kk_string_t _y_x10139, kk_std_test_test__expectation b, kk_std_core_exn__exception e, kk_string_t location, kk_function_t resume, bool cont, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_test___10236_fun1397__t* _self = kk_function_alloc_as(struct kk_std_test_test__mlift_test___10236_fun1397__t, 8, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test__mlift_test___10236_fun1397, kk_context());
  _self->_y_x10138 = _y_x10138;
  _self->_y_x10139 = _y_x10139;
  _self->b = b;
  _self->e = e;
  _self->location = location;
  _self->resume = resume;
  _self->cont = cont;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test__mlift_test___10236_fun1397(kk_function_t _fself, kk_box_t _b_x482, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_test___10236_fun1397__t* _self = kk_function_as(struct kk_std_test_test__mlift_test___10236_fun1397__t*, _fself, _ctx);
  kk_string_t _y_x10138 = _self->_y_x10138; /* string */
  kk_string_t _y_x10139 = _self->_y_x10139; /* string */
  kk_std_test_test__expectation b = _self->b; /* std/test/test/expectation<4311> */
  kk_std_core_exn__exception e = _self->e; /* exception */
  kk_string_t location = _self->location; /* string */
  kk_function_t resume = _self->resume; /* (4311) -> <std/test/test/test-scope,console/console,div,exn|4323> () */
  bool cont = _self->cont; /* bool */
  kk_drop_match(_self, {kk_string_dup(_y_x10138, _ctx);kk_string_dup(_y_x10139, _ctx);kk_std_test_test__expectation_dup(b, _ctx);kk_std_core_exn__exception_dup(e, _ctx);kk_string_dup(location, _ctx);kk_function_dup(resume, _ctx);kk_skip_dup(cont, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _c_x10140_484 = kk_std_core_types__maybe_unbox(_b_x482, KK_OWNED, _ctx); /*maybe<string>*/;
  kk_unit_t _x_x1398 = kk_Unit;
  kk_std_test_test__mlift_test___10235(_y_x10138, _y_x10139, b, cont, e, location, resume, _c_x10140_484, _ctx);
  return kk_unit_box(_x_x1398);
}

kk_unit_t kk_std_test_test__mlift_test___10236(kk_string_t _y_x10138, kk_std_test_test__expectation b, bool cont, kk_std_core_exn__exception e, kk_std_core_types__maybe err, kk_string_t location, kk_function_t resume, kk_string_t _y_x10139, kk_context_t* _ctx) { /* forall<a,e> (string, b : expectation<a>, cont : bool, e : exception, err : maybe<string>, location : string, resume : (a) -> <test-scope,console/console,div,exn|e> (), string) -> <div,exn,test-scope,console/console|e> () */ 
  kk_std_core_types__maybe x_10355;
  if (kk_std_core_types__is_Nothing(err, _ctx)) {
    x_10355 = kk_std_core_types__new_Nothing(_ctx); /*maybe<string>*/
  }
  else {
    kk_box_t _box_x478 = err._cons.Just.value;
    kk_string_t x_0 = kk_string_unbox(_box_x478);
    kk_string_dup(x_0, _ctx);
    kk_std_core_types__maybe_drop(err, _ctx);
    kk_string_t _b_x479_480;
    kk_string_t _x_x1394;
    kk_define_string_literal(, _s_x1395, 14, "\n    Details: ", _ctx)
    _x_x1394 = kk_string_dup(_s_x1395, _ctx); /*string*/
    _b_x479_480 = kk_std_core_types__lp__plus__plus__rp_(_x_x1394, x_0, _ctx); /*string*/
    x_10355 = kk_std_core_types__new_Just(kk_string_box(_b_x479_480), _ctx); /*maybe<string>*/
  }
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_10355, _ctx);
    kk_box_t _x_x1396 = kk_std_core_hnd_yield_extend(kk_std_test_test__new_mlift_test___10236_fun1397(_y_x10138, _y_x10139, b, e, location, resume, cont, _ctx), _ctx); /*2978*/
    kk_unit_unbox(_x_x1396); return kk_Unit;
  }
  {
    kk_std_test_test__mlift_test___10235(_y_x10138, _y_x10139, b, cont, e, location, resume, x_10355, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_test_test__mlift_test___10237_fun1401__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_test__mlift_test___10237_fun1401(kk_function_t _fself, kk_box_t _b_x489, kk_box_t _b_x490, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test___10237_fun1401(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test__mlift_test___10237_fun1401, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_test_test__mlift_test___10237_fun1404__t {
  struct kk_function_s _base;
  kk_box_t _b_x490;
};
static kk_string_t kk_std_test_test__mlift_test___10237_fun1404(kk_function_t _fself, kk_box_t _b_x493, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test___10237_fun1404(kk_box_t _b_x490, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_test___10237_fun1404__t* _self = kk_function_alloc_as(struct kk_std_test_test__mlift_test___10237_fun1404__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test__mlift_test___10237_fun1404, kk_context());
  _self->_b_x490 = _b_x490;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_std_test_test__mlift_test___10237_fun1404(kk_function_t _fself, kk_box_t _b_x493, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_test___10237_fun1404__t* _self = kk_function_as(struct kk_std_test_test__mlift_test___10237_fun1404__t*, _fself, _ctx);
  kk_box_t _b_x490 = _self->_b_x490; /* 9233 */
  kk_drop_match(_self, {kk_box_dup(_b_x490, _ctx);}, {}, _ctx)
  kk_box_t _x_x1405;
  kk_function_t _x_x1406 = kk_function_unbox(_b_x490, _ctx); /*(491) -> pure 492*/
  _x_x1405 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _x_x1406, (_x_x1406, _b_x493, _ctx), _ctx); /*492*/
  return kk_string_unbox(_x_x1405);
}
static kk_box_t kk_std_test_test__mlift_test___10237_fun1401(kk_function_t _fself, kk_box_t _b_x489, kk_box_t _b_x490, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x1402;
  kk_std_test_test__expectation _x_x1403 = kk_std_test_test__expectation_unbox(_b_x489, KK_OWNED, _ctx); /*std/test/test/expectation<4311>*/
  _x_x1402 = kk_std_test_test_show(_x_x1403, kk_std_test_test__new_mlift_test___10237_fun1404(_b_x490, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x1402);
}


// lift anonymous function
struct kk_std_test_test__mlift_test___10237_fun1409__t {
  struct kk_function_s _base;
  kk_function_t showa;
};
static kk_box_t kk_std_test_test__mlift_test___10237_fun1409(kk_function_t _fself, kk_box_t _b_x496, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test___10237_fun1409(kk_function_t showa, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_test___10237_fun1409__t* _self = kk_function_alloc_as(struct kk_std_test_test__mlift_test___10237_fun1409__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test__mlift_test___10237_fun1409, kk_context());
  _self->showa = showa;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test__mlift_test___10237_fun1409(kk_function_t _fself, kk_box_t _b_x496, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_test___10237_fun1409__t* _self = kk_function_as(struct kk_std_test_test__mlift_test___10237_fun1409__t*, _fself, _ctx);
  kk_function_t showa = _self->showa; /* (4311) -> pure string */
  kk_drop_match(_self, {kk_function_dup(showa, _ctx);}, {}, _ctx)
  kk_string_t _x_x1410 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), showa, (showa, _b_x496, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x1410);
}


// lift anonymous function
struct kk_std_test_test__mlift_test___10237_fun1412__t {
  struct kk_function_s _base;
  kk_string_t _y_x10138;
  kk_std_test_test__expectation b;
  kk_std_core_exn__exception e;
  kk_std_core_types__maybe err;
  kk_string_t location;
  kk_function_t resume;
  bool cont;
};
static kk_box_t kk_std_test_test__mlift_test___10237_fun1412(kk_function_t _fself, kk_box_t _b_x502, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test___10237_fun1412(kk_string_t _y_x10138, kk_std_test_test__expectation b, kk_std_core_exn__exception e, kk_std_core_types__maybe err, kk_string_t location, kk_function_t resume, bool cont, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_test___10237_fun1412__t* _self = kk_function_alloc_as(struct kk_std_test_test__mlift_test___10237_fun1412__t, 9, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test__mlift_test___10237_fun1412, kk_context());
  _self->_y_x10138 = _y_x10138;
  _self->b = b;
  _self->e = e;
  _self->err = err;
  _self->location = location;
  _self->resume = resume;
  _self->cont = cont;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test__mlift_test___10237_fun1412(kk_function_t _fself, kk_box_t _b_x502, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_test___10237_fun1412__t* _self = kk_function_as(struct kk_std_test_test__mlift_test___10237_fun1412__t*, _fself, _ctx);
  kk_string_t _y_x10138 = _self->_y_x10138; /* string */
  kk_std_test_test__expectation b = _self->b; /* std/test/test/expectation<4311> */
  kk_std_core_exn__exception e = _self->e; /* exception */
  kk_std_core_types__maybe err = _self->err; /* maybe<string> */
  kk_string_t location = _self->location; /* string */
  kk_function_t resume = _self->resume; /* (4311) -> <std/test/test/test-scope,console/console,div,exn|4323> () */
  bool cont = _self->cont; /* bool */
  kk_drop_match(_self, {kk_string_dup(_y_x10138, _ctx);kk_std_test_test__expectation_dup(b, _ctx);kk_std_core_exn__exception_dup(e, _ctx);kk_std_core_types__maybe_dup(err, _ctx);kk_string_dup(location, _ctx);kk_function_dup(resume, _ctx);kk_skip_dup(cont, _ctx);}, {}, _ctx)
  kk_string_t _y_x10139_504 = kk_string_unbox(_b_x502); /*string*/;
  kk_unit_t _x_x1413 = kk_Unit;
  kk_std_test_test__mlift_test___10236(_y_x10138, b, cont, e, err, location, resume, _y_x10139_504, _ctx);
  return kk_unit_box(_x_x1413);
}

kk_unit_t kk_std_test_test__mlift_test___10237(kk_std_test_test__expectation b, bool cont, kk_std_core_exn__exception e, kk_std_core_types__maybe err, kk_string_t location, kk_function_t resume, kk_function_t showa, kk_string_t _y_x10138, kk_context_t* _ctx) { /* forall<a,e> (b : expectation<a>, cont : bool, e : exception, err : maybe<string>, location : string, resume : (a) -> <test-scope,console/console,div,exn|e> (), showa : (a) -> pure string, string) -> <test-scope,div,exn,console/console|e> () */ 
  kk_ssize_t _b_x485_497;
  kk_std_core_hnd__htag _x_x1399 = kk_std_core_hnd__htag_dup(kk_std_core_exn__tag_exn, _ctx); /*hnd/htag<exn>*/
  _b_x485_497 = kk_std_core_hnd__evv_index(_x_x1399, _ctx); /*hnd/ev-index*/
  kk_string_t x_10357;
  kk_box_t _x_x1400;
  kk_box_t _x_x1407;
  kk_std_test_test__expectation _x_x1408 = kk_std_test_test__expectation_dup(b, _ctx); /*std/test/test/expectation<4311>*/
  _x_x1407 = kk_std_test_test__expectation_box(_x_x1408, _ctx); /*9232*/
  _x_x1400 = kk_std_core_hnd__open_at2(_b_x485_497, kk_std_test_test__new_mlift_test___10237_fun1401(_ctx), _x_x1407, kk_function_box(kk_std_test_test__new_mlift_test___10237_fun1409(showa, _ctx), _ctx), _ctx); /*9234*/
  x_10357 = kk_string_unbox(_x_x1400); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_10357, _ctx);
    kk_box_t _x_x1411 = kk_std_core_hnd_yield_extend(kk_std_test_test__new_mlift_test___10237_fun1412(_y_x10138, b, e, err, location, resume, cont, _ctx), _ctx); /*2978*/
    kk_unit_unbox(_x_x1411); return kk_Unit;
  }
  {
    kk_std_test_test__mlift_test___10236(_y_x10138, b, cont, e, err, location, resume, x_10357, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_test_test__mlift_test___10238_fun1419__t {
  struct kk_function_s _base;
};
static kk_string_t kk_std_test_test__mlift_test___10238_fun1419(kk_function_t _fself, kk_std_core_types__maybe m_1, kk_string_t nothing_0, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test___10238_fun1419(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test__mlift_test___10238_fun1419, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_std_test_test__mlift_test___10238_fun1419(kk_function_t _fself, kk_std_core_types__maybe m_1, kk_string_t nothing_0, kk_context_t* _ctx) {
  kk_unused(_fself);
  if (kk_std_core_types__is_Nothing(m_1, _ctx)) {
    return nothing_0;
  }
  {
    kk_box_t _box_x505 = m_1._cons.Just.value;
    kk_string_t x_1 = kk_string_unbox(_box_x505);
    kk_string_drop(nothing_0, _ctx);
    kk_string_dup(x_1, _ctx);
    kk_std_core_types__maybe_drop(m_1, _ctx);
    return x_1;
  }
}


// lift anonymous function
struct kk_std_test_test__mlift_test___10238_fun1431__t {
  struct kk_function_s _base;
  kk_function_t _b_x506_511;
};
static kk_box_t kk_std_test_test__mlift_test___10238_fun1431(kk_function_t _fself, kk_box_t _b_x509, kk_box_t _b_x510, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test___10238_fun1431(kk_function_t _b_x506_511, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_test___10238_fun1431__t* _self = kk_function_alloc_as(struct kk_std_test_test__mlift_test___10238_fun1431__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test__mlift_test___10238_fun1431, kk_context());
  _self->_b_x506_511 = _b_x506_511;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test__mlift_test___10238_fun1431(kk_function_t _fself, kk_box_t _b_x509, kk_box_t _b_x510, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_test___10238_fun1431__t* _self = kk_function_as(struct kk_std_test_test__mlift_test___10238_fun1431__t*, _fself, _ctx);
  kk_function_t _b_x506_511 = _self->_b_x506_511; /* (m@1 : maybe<string>, nothing@0 : string) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x506_511, _ctx);}, {}, _ctx)
  kk_string_t _x_x1432;
  kk_std_core_types__maybe _x_x1433 = kk_std_core_types__maybe_unbox(_b_x509, KK_OWNED, _ctx); /*maybe<string>*/
  kk_string_t _x_x1434 = kk_string_unbox(_b_x510); /*string*/
  _x_x1432 = kk_function_call(kk_string_t, (kk_function_t, kk_std_core_types__maybe, kk_string_t, kk_context_t*), _b_x506_511, (_b_x506_511, _x_x1433, _x_x1434, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x1432);
}

kk_unit_t kk_std_test_test__mlift_test___10238(kk_string_t _y_x10152, kk_string_t _y_x10153, kk_string_t _y_x10154, kk_std_test_test__expectation b, bool cont, kk_string_t location, kk_function_t resume, kk_std_core_types__maybe _c_x10155, kk_context_t* _ctx) { /* forall<a,e> (string, string, string, b : expectation<a>, cont : bool, location : string, resume : (a) -> <test-scope,console/console,div,exn|e> (), maybe<string>) -> () */ 
  kk_unit_t ___2 = kk_Unit;
  kk_string_t _x_x1414;
  kk_string_t _x_x1415;
  kk_string_t _x_x1416;
  kk_define_string_literal(, _s_x1417, 9, "  Expect(", _ctx)
  _x_x1416 = kk_string_dup(_s_x1417, _ctx); /*string*/
  kk_string_t _x_x1418;
  kk_function_t _b_x506_511 = kk_std_test_test__new_mlift_test___10238_fun1419(_ctx); /*(m@1 : maybe<string>, nothing@0 : string) -> string*/;
  kk_std_core_types__maybe _b_x507_512 = _c_x10155; /*maybe<string>*/;
  kk_string_t _b_x508_513 = kk_string_empty(); /*string*/;
  kk_string_t _x_x1421;
  kk_string_t _x_x1422;
  kk_define_string_literal(, _s_x1423, 5, ") == ", _ctx)
  _x_x1422 = kk_string_dup(_s_x1423, _ctx); /*string*/
  kk_string_t _x_x1424;
  kk_string_t _x_x1425;
  kk_string_t _x_x1426;
  kk_define_string_literal(, _s_x1427, 11, ": but got: ", _ctx)
  _x_x1426 = kk_string_dup(_s_x1427, _ctx); /*string*/
  kk_string_t _x_x1428;
  kk_string_t _x_x1429;
  kk_box_t _x_x1430 = kk_std_core_hnd__open_none2(kk_std_test_test__new_mlift_test___10238_fun1431(_b_x506_511, _ctx), kk_std_core_types__maybe_box(_b_x507_512, _ctx), kk_string_box(_b_x508_513), _ctx); /*8647*/
  _x_x1429 = kk_string_unbox(_x_x1430); /*string*/
  _x_x1428 = kk_std_core_types__lp__plus__plus__rp_(_y_x10154, _x_x1429, _ctx); /*string*/
  _x_x1425 = kk_std_core_types__lp__plus__plus__rp_(_x_x1426, _x_x1428, _ctx); /*string*/
  _x_x1424 = kk_std_core_types__lp__plus__plus__rp_(_y_x10153, _x_x1425, _ctx); /*string*/
  _x_x1421 = kk_std_core_types__lp__plus__plus__rp_(_x_x1422, _x_x1424, _ctx); /*string*/
  _x_x1418 = kk_std_core_types__lp__plus__plus__rp_(location, _x_x1421, _ctx); /*string*/
  _x_x1415 = kk_std_core_types__lp__plus__plus__rp_(_x_x1416, _x_x1418, _ctx); /*string*/
  _x_x1414 = kk_std_core_types__lp__plus__plus__rp_(_y_x10152, _x_x1415, _ctx); /*string*/
  kk_std_core_console_printsln(_x_x1414, _ctx);
  if (cont) {
    if (kk_std_test_test__is_ExpectedValue(b, _ctx)) {
      struct kk_std_test_test_ExpectedValue* _con_x1435 = kk_std_test_test__as_ExpectedValue(b, _ctx);
      kk_box_t b_1_sq_ = _con_x1435->a;
      if kk_likely(kk_datatype_ptr_is_unique(b, _ctx)) {
        kk_datatype_ptr_free(b, _ctx);
      }
      else {
        kk_box_dup(b_1_sq_, _ctx);
        kk_datatype_ptr_decref(b, _ctx);
      }
      kk_function_call(kk_unit_t, (kk_function_t, kk_box_t, kk_context_t*), resume, (resume, b_1_sq_, _ctx), _ctx); return kk_Unit;
    }
    {
      kk_function_drop(resume, _ctx);
      kk_std_test_test__expectation_drop(b, _ctx);
      kk_Unit; return kk_Unit;
    }
  }
  {
    kk_function_drop(resume, _ctx);
    kk_std_test_test__expectation_drop(b, _ctx);
    kk_Unit; return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_test_test__mlift_test___10239_fun1439__t {
  struct kk_function_s _base;
  kk_string_t _y_x10152;
  kk_string_t _y_x10153;
  kk_string_t _y_x10154;
  kk_std_test_test__expectation b;
  kk_string_t location;
  kk_function_t resume;
  bool cont;
};
static kk_box_t kk_std_test_test__mlift_test___10239_fun1439(kk_function_t _fself, kk_box_t _b_x518, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test___10239_fun1439(kk_string_t _y_x10152, kk_string_t _y_x10153, kk_string_t _y_x10154, kk_std_test_test__expectation b, kk_string_t location, kk_function_t resume, bool cont, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_test___10239_fun1439__t* _self = kk_function_alloc_as(struct kk_std_test_test__mlift_test___10239_fun1439__t, 7, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test__mlift_test___10239_fun1439, kk_context());
  _self->_y_x10152 = _y_x10152;
  _self->_y_x10153 = _y_x10153;
  _self->_y_x10154 = _y_x10154;
  _self->b = b;
  _self->location = location;
  _self->resume = resume;
  _self->cont = cont;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test__mlift_test___10239_fun1439(kk_function_t _fself, kk_box_t _b_x518, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_test___10239_fun1439__t* _self = kk_function_as(struct kk_std_test_test__mlift_test___10239_fun1439__t*, _fself, _ctx);
  kk_string_t _y_x10152 = _self->_y_x10152; /* string */
  kk_string_t _y_x10153 = _self->_y_x10153; /* string */
  kk_string_t _y_x10154 = _self->_y_x10154; /* string */
  kk_std_test_test__expectation b = _self->b; /* std/test/test/expectation<4311> */
  kk_string_t location = _self->location; /* string */
  kk_function_t resume = _self->resume; /* (4311) -> <std/test/test/test-scope,console/console,div,exn|4323> () */
  bool cont = _self->cont; /* bool */
  kk_drop_match(_self, {kk_string_dup(_y_x10152, _ctx);kk_string_dup(_y_x10153, _ctx);kk_string_dup(_y_x10154, _ctx);kk_std_test_test__expectation_dup(b, _ctx);kk_string_dup(location, _ctx);kk_function_dup(resume, _ctx);kk_skip_dup(cont, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _c_x10155_520 = kk_std_core_types__maybe_unbox(_b_x518, KK_OWNED, _ctx); /*maybe<string>*/;
  kk_unit_t _x_x1440 = kk_Unit;
  kk_std_test_test__mlift_test___10238(_y_x10152, _y_x10153, _y_x10154, b, cont, location, resume, _c_x10155_520, _ctx);
  return kk_unit_box(_x_x1440);
}

kk_unit_t kk_std_test_test__mlift_test___10239(kk_string_t _y_x10152, kk_string_t _y_x10153, kk_std_test_test__expectation b, bool cont, kk_std_core_types__maybe err, kk_string_t location, kk_function_t resume, kk_string_t _y_x10154, kk_context_t* _ctx) { /* forall<a,e> (string, string, b : expectation<a>, cont : bool, err : maybe<string>, location : string, resume : (a) -> <test-scope,console/console,div,exn|e> (), string) -> <div,exn,test-scope,console/console|e> () */ 
  kk_std_core_types__maybe x_10359;
  if (kk_std_core_types__is_Nothing(err, _ctx)) {
    x_10359 = kk_std_core_types__new_Nothing(_ctx); /*maybe<string>*/
  }
  else {
    kk_box_t _box_x514 = err._cons.Just.value;
    kk_string_t x_2 = kk_string_unbox(_box_x514);
    kk_string_dup(x_2, _ctx);
    kk_std_core_types__maybe_drop(err, _ctx);
    kk_string_t _b_x515_516;
    kk_string_t _x_x1436;
    kk_define_string_literal(, _s_x1437, 14, "\n    Details: ", _ctx)
    _x_x1436 = kk_string_dup(_s_x1437, _ctx); /*string*/
    _b_x515_516 = kk_std_core_types__lp__plus__plus__rp_(_x_x1436, x_2, _ctx); /*string*/
    x_10359 = kk_std_core_types__new_Just(kk_string_box(_b_x515_516), _ctx); /*maybe<string>*/
  }
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_10359, _ctx);
    kk_box_t _x_x1438 = kk_std_core_hnd_yield_extend(kk_std_test_test__new_mlift_test___10239_fun1439(_y_x10152, _y_x10153, _y_x10154, b, location, resume, cont, _ctx), _ctx); /*2978*/
    kk_unit_unbox(_x_x1438); return kk_Unit;
  }
  {
    kk_std_test_test__mlift_test___10238(_y_x10152, _y_x10153, _y_x10154, b, cont, location, resume, x_10359, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_test_test__mlift_test___10240_fun1443__t {
  struct kk_function_s _base;
  kk_function_t showa;
};
static kk_box_t kk_std_test_test__mlift_test___10240_fun1443(kk_function_t _fself, kk_box_t _b_x524, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test___10240_fun1443(kk_function_t showa, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_test___10240_fun1443__t* _self = kk_function_alloc_as(struct kk_std_test_test__mlift_test___10240_fun1443__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test__mlift_test___10240_fun1443, kk_context());
  _self->showa = showa;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test__mlift_test___10240_fun1443(kk_function_t _fself, kk_box_t _b_x524, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_test___10240_fun1443__t* _self = kk_function_as(struct kk_std_test_test__mlift_test___10240_fun1443__t*, _fself, _ctx);
  kk_function_t showa = _self->showa; /* (4311) -> pure string */
  kk_drop_match(_self, {kk_function_dup(showa, _ctx);}, {}, _ctx)
  kk_string_t _x_x1444 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), showa, (showa, _b_x524, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x1444);
}


// lift anonymous function
struct kk_std_test_test__mlift_test___10240_fun1446__t {
  struct kk_function_s _base;
  kk_string_t _y_x10152;
  kk_string_t _y_x10153;
  kk_std_test_test__expectation b;
  kk_std_core_types__maybe err;
  kk_string_t location;
  kk_function_t resume;
  bool cont;
};
static kk_box_t kk_std_test_test__mlift_test___10240_fun1446(kk_function_t _fself, kk_box_t _b_x529, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test___10240_fun1446(kk_string_t _y_x10152, kk_string_t _y_x10153, kk_std_test_test__expectation b, kk_std_core_types__maybe err, kk_string_t location, kk_function_t resume, bool cont, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_test___10240_fun1446__t* _self = kk_function_alloc_as(struct kk_std_test_test__mlift_test___10240_fun1446__t, 8, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test__mlift_test___10240_fun1446, kk_context());
  _self->_y_x10152 = _y_x10152;
  _self->_y_x10153 = _y_x10153;
  _self->b = b;
  _self->err = err;
  _self->location = location;
  _self->resume = resume;
  _self->cont = cont;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test__mlift_test___10240_fun1446(kk_function_t _fself, kk_box_t _b_x529, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_test___10240_fun1446__t* _self = kk_function_as(struct kk_std_test_test__mlift_test___10240_fun1446__t*, _fself, _ctx);
  kk_string_t _y_x10152 = _self->_y_x10152; /* string */
  kk_string_t _y_x10153 = _self->_y_x10153; /* string */
  kk_std_test_test__expectation b = _self->b; /* std/test/test/expectation<4311> */
  kk_std_core_types__maybe err = _self->err; /* maybe<string> */
  kk_string_t location = _self->location; /* string */
  kk_function_t resume = _self->resume; /* (4311) -> <std/test/test/test-scope,console/console,div,exn|4323> () */
  bool cont = _self->cont; /* bool */
  kk_drop_match(_self, {kk_string_dup(_y_x10152, _ctx);kk_string_dup(_y_x10153, _ctx);kk_std_test_test__expectation_dup(b, _ctx);kk_std_core_types__maybe_dup(err, _ctx);kk_string_dup(location, _ctx);kk_function_dup(resume, _ctx);kk_skip_dup(cont, _ctx);}, {}, _ctx)
  kk_string_t _y_x10154_531 = kk_string_unbox(_b_x529); /*string*/;
  kk_unit_t _x_x1447 = kk_Unit;
  kk_std_test_test__mlift_test___10239(_y_x10152, _y_x10153, b, cont, err, location, resume, _y_x10154_531, _ctx);
  return kk_unit_box(_x_x1447);
}

kk_unit_t kk_std_test_test__mlift_test___10240(kk_string_t _y_x10152, kk_box_t a_sq_, kk_std_test_test__expectation b, bool cont, kk_std_core_types__maybe err, kk_string_t location, kk_function_t resume, kk_function_t showa, kk_string_t _y_x10153, kk_context_t* _ctx) { /* forall<a,e> (string, a' : a, b : expectation<a>, cont : bool, err : maybe<string>, location : string, resume : (a) -> <test-scope,console/console,div,exn|e> (), showa : (a) -> pure string, string) -> <div,exn,test-scope,console/console|e> () */ 
  kk_ssize_t _b_x521_525;
  kk_std_core_hnd__htag _x_x1441 = kk_std_core_hnd__htag_dup(kk_std_core_exn__tag_exn, _ctx); /*hnd/htag<exn>*/
  _b_x521_525 = kk_std_core_hnd__evv_index(_x_x1441, _ctx); /*hnd/ev-index*/
  kk_string_t x_10361;
  kk_box_t _x_x1442 = kk_std_core_hnd__open_at1(_b_x521_525, kk_std_test_test__new_mlift_test___10240_fun1443(showa, _ctx), a_sq_, _ctx); /*9124*/
  x_10361 = kk_string_unbox(_x_x1442); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_10361, _ctx);
    kk_box_t _x_x1445 = kk_std_core_hnd_yield_extend(kk_std_test_test__new_mlift_test___10240_fun1446(_y_x10152, _y_x10153, b, err, location, resume, cont, _ctx), _ctx); /*2978*/
    kk_unit_unbox(_x_x1445); return kk_Unit;
  }
  {
    kk_std_test_test__mlift_test___10239(_y_x10152, _y_x10153, b, cont, err, location, resume, x_10361, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_test_test__mlift_test___10241_fun1450__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_test__mlift_test___10241_fun1450(kk_function_t _fself, kk_box_t _b_x536, kk_box_t _b_x537, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test___10241_fun1450(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test__mlift_test___10241_fun1450, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_test_test__mlift_test___10241_fun1453__t {
  struct kk_function_s _base;
  kk_box_t _b_x537;
};
static kk_string_t kk_std_test_test__mlift_test___10241_fun1453(kk_function_t _fself, kk_box_t _b_x540, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test___10241_fun1453(kk_box_t _b_x537, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_test___10241_fun1453__t* _self = kk_function_alloc_as(struct kk_std_test_test__mlift_test___10241_fun1453__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test__mlift_test___10241_fun1453, kk_context());
  _self->_b_x537 = _b_x537;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_std_test_test__mlift_test___10241_fun1453(kk_function_t _fself, kk_box_t _b_x540, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_test___10241_fun1453__t* _self = kk_function_as(struct kk_std_test_test__mlift_test___10241_fun1453__t*, _fself, _ctx);
  kk_box_t _b_x537 = _self->_b_x537; /* 9233 */
  kk_drop_match(_self, {kk_box_dup(_b_x537, _ctx);}, {}, _ctx)
  kk_box_t _x_x1454;
  kk_function_t _x_x1455 = kk_function_unbox(_b_x537, _ctx); /*(538) -> pure 539*/
  _x_x1454 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _x_x1455, (_x_x1455, _b_x540, _ctx), _ctx); /*539*/
  return kk_string_unbox(_x_x1454);
}
static kk_box_t kk_std_test_test__mlift_test___10241_fun1450(kk_function_t _fself, kk_box_t _b_x536, kk_box_t _b_x537, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x1451;
  kk_std_test_test__expectation _x_x1452 = kk_std_test_test__expectation_unbox(_b_x536, KK_OWNED, _ctx); /*std/test/test/expectation<4311>*/
  _x_x1451 = kk_std_test_test_show(_x_x1452, kk_std_test_test__new_mlift_test___10241_fun1453(_b_x537, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x1451);
}


// lift anonymous function
struct kk_std_test_test__mlift_test___10241_fun1460__t {
  struct kk_function_s _base;
  kk_function_t showa;
};
static kk_box_t kk_std_test_test__mlift_test___10241_fun1460(kk_function_t _fself, kk_box_t _b_x543, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test___10241_fun1460(kk_function_t showa, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_test___10241_fun1460__t* _self = kk_function_alloc_as(struct kk_std_test_test__mlift_test___10241_fun1460__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test__mlift_test___10241_fun1460, kk_context());
  _self->showa = showa;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test__mlift_test___10241_fun1460(kk_function_t _fself, kk_box_t _b_x543, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_test___10241_fun1460__t* _self = kk_function_as(struct kk_std_test_test__mlift_test___10241_fun1460__t*, _fself, _ctx);
  kk_function_t showa = _self->showa; /* (4311) -> pure string */
  kk_drop_match(_self, {kk_function_dup(showa, _ctx);}, {}, _ctx)
  kk_string_t _x_x1461 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), showa, (showa, _b_x543, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x1461);
}


// lift anonymous function
struct kk_std_test_test__mlift_test___10241_fun1463__t {
  struct kk_function_s _base;
  kk_string_t _y_x10152;
  kk_box_t a_sq_;
  kk_std_test_test__expectation b;
  kk_std_core_types__maybe err;
  kk_string_t location;
  kk_function_t resume;
  kk_function_t showa;
  bool cont;
};
static kk_box_t kk_std_test_test__mlift_test___10241_fun1463(kk_function_t _fself, kk_box_t _b_x549, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test___10241_fun1463(kk_string_t _y_x10152, kk_box_t a_sq_, kk_std_test_test__expectation b, kk_std_core_types__maybe err, kk_string_t location, kk_function_t resume, kk_function_t showa, bool cont, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_test___10241_fun1463__t* _self = kk_function_alloc_as(struct kk_std_test_test__mlift_test___10241_fun1463__t, 9, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test__mlift_test___10241_fun1463, kk_context());
  _self->_y_x10152 = _y_x10152;
  _self->a_sq_ = a_sq_;
  _self->b = b;
  _self->err = err;
  _self->location = location;
  _self->resume = resume;
  _self->showa = showa;
  _self->cont = cont;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test__mlift_test___10241_fun1463(kk_function_t _fself, kk_box_t _b_x549, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_test___10241_fun1463__t* _self = kk_function_as(struct kk_std_test_test__mlift_test___10241_fun1463__t*, _fself, _ctx);
  kk_string_t _y_x10152 = _self->_y_x10152; /* string */
  kk_box_t a_sq_ = _self->a_sq_; /* 4311 */
  kk_std_test_test__expectation b = _self->b; /* std/test/test/expectation<4311> */
  kk_std_core_types__maybe err = _self->err; /* maybe<string> */
  kk_string_t location = _self->location; /* string */
  kk_function_t resume = _self->resume; /* (4311) -> <std/test/test/test-scope,console/console,div,exn|4323> () */
  kk_function_t showa = _self->showa; /* (4311) -> pure string */
  bool cont = _self->cont; /* bool */
  kk_drop_match(_self, {kk_string_dup(_y_x10152, _ctx);kk_box_dup(a_sq_, _ctx);kk_std_test_test__expectation_dup(b, _ctx);kk_std_core_types__maybe_dup(err, _ctx);kk_string_dup(location, _ctx);kk_function_dup(resume, _ctx);kk_function_dup(showa, _ctx);kk_skip_dup(cont, _ctx);}, {}, _ctx)
  kk_string_t _y_x10153_551 = kk_string_unbox(_b_x549); /*string*/;
  kk_unit_t _x_x1464 = kk_Unit;
  kk_std_test_test__mlift_test___10240(_y_x10152, a_sq_, b, cont, err, location, resume, showa, _y_x10153_551, _ctx);
  return kk_unit_box(_x_x1464);
}

kk_unit_t kk_std_test_test__mlift_test___10241(kk_box_t a_sq_, kk_std_test_test__expectation b, bool cont, kk_std_core_types__maybe err, kk_string_t location, kk_function_t resume, kk_function_t showa, kk_string_t _y_x10152, kk_context_t* _ctx) { /* forall<a,e> (a' : a, b : expectation<a>, cont : bool, err : maybe<string>, location : string, resume : (a) -> <test-scope,console/console,div,exn|e> (), showa : (a) -> pure string, string) -> <test-scope,div,exn,console/console|e> () */ 
  kk_ssize_t _b_x532_544;
  kk_std_core_hnd__htag _x_x1448 = kk_std_core_hnd__htag_dup(kk_std_core_exn__tag_exn, _ctx); /*hnd/htag<exn>*/
  _b_x532_544 = kk_std_core_hnd__evv_index(_x_x1448, _ctx); /*hnd/ev-index*/
  kk_string_t x_10363;
  kk_box_t _x_x1449;
  kk_box_t _x_x1456;
  kk_std_test_test__expectation _x_x1457 = kk_std_test_test__expectation_dup(b, _ctx); /*std/test/test/expectation<4311>*/
  _x_x1456 = kk_std_test_test__expectation_box(_x_x1457, _ctx); /*9232*/
  kk_box_t _x_x1458;
  kk_function_t _x_x1459;
  kk_function_dup(showa, _ctx);
  _x_x1459 = kk_std_test_test__new_mlift_test___10241_fun1460(showa, _ctx); /*(541) -> pure 542*/
  _x_x1458 = kk_function_box(_x_x1459, _ctx); /*9233*/
  _x_x1449 = kk_std_core_hnd__open_at2(_b_x532_544, kk_std_test_test__new_mlift_test___10241_fun1450(_ctx), _x_x1456, _x_x1458, _ctx); /*9234*/
  x_10363 = kk_string_unbox(_x_x1449); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_10363, _ctx);
    kk_box_t _x_x1462 = kk_std_core_hnd_yield_extend(kk_std_test_test__new_mlift_test___10241_fun1463(_y_x10152, a_sq_, b, err, location, resume, showa, cont, _ctx), _ctx); /*2978*/
    kk_unit_unbox(_x_x1462); return kk_Unit;
  }
  {
    kk_std_test_test__mlift_test___10240(_y_x10152, a_sq_, b, cont, err, location, resume, showa, x_10363, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_test_test__mlift_test___10242_fun1467__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_test__mlift_test___10242_fun1467(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test___10242_fun1467(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test__mlift_test___10242_fun1467, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_test__mlift_test___10242_fun1467(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_hnd__ev ev_10367 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/test/test/test-scope>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x1468 = kk_std_core_hnd__as_Ev(ev_10367, _ctx);
    kk_box_t _box_x552 = _con_x1468->hnd;
    int32_t m = _con_x1468->marker;
    kk_std_test_test__test_scope h = kk_std_test_test__test_scope_unbox(_box_x552, KK_BORROWED, _ctx);
    kk_std_test_test__test_scope_dup(h, _ctx);
    {
      struct kk_std_test_test__Hnd_test_scope* _con_x1469 = kk_std_test_test__as_Hnd_test_scope(h, _ctx);
      kk_integer_t _pat_0 = _con_x1469->_cfc;
      kk_std_core_hnd__clause0 _val_indentation_0 = _con_x1469->_val_indentation;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x1469->_val_scope_name;
      kk_std_core_hnd__clause0 _pat_2 = _con_x1469->_fun_report_fail;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_val_indentation_0, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x555 = _val_indentation_0.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x555, (_fun_unbox_x555, m, ev_10367, _ctx), _ctx);
      }
    }
  }
}


// lift anonymous function
struct kk_std_test_test__mlift_test___10242_fun1471__t {
  struct kk_function_s _base;
  kk_box_t a_sq_;
  kk_std_test_test__expectation b;
  kk_std_core_types__maybe err;
  kk_string_t location;
  kk_function_t resume;
  kk_function_t showa;
  bool cont;
};
static kk_box_t kk_std_test_test__mlift_test___10242_fun1471(kk_function_t _fself, kk_box_t _b_x563, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test___10242_fun1471(kk_box_t a_sq_, kk_std_test_test__expectation b, kk_std_core_types__maybe err, kk_string_t location, kk_function_t resume, kk_function_t showa, bool cont, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_test___10242_fun1471__t* _self = kk_function_alloc_as(struct kk_std_test_test__mlift_test___10242_fun1471__t, 8, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test__mlift_test___10242_fun1471, kk_context());
  _self->a_sq_ = a_sq_;
  _self->b = b;
  _self->err = err;
  _self->location = location;
  _self->resume = resume;
  _self->showa = showa;
  _self->cont = cont;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test__mlift_test___10242_fun1471(kk_function_t _fself, kk_box_t _b_x563, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_test___10242_fun1471__t* _self = kk_function_as(struct kk_std_test_test__mlift_test___10242_fun1471__t*, _fself, _ctx);
  kk_box_t a_sq_ = _self->a_sq_; /* 4311 */
  kk_std_test_test__expectation b = _self->b; /* std/test/test/expectation<4311> */
  kk_std_core_types__maybe err = _self->err; /* maybe<string> */
  kk_string_t location = _self->location; /* string */
  kk_function_t resume = _self->resume; /* (4311) -> <std/test/test/test-scope,console/console,div,exn|4323> () */
  kk_function_t showa = _self->showa; /* (4311) -> pure string */
  bool cont = _self->cont; /* bool */
  kk_drop_match(_self, {kk_box_dup(a_sq_, _ctx);kk_std_test_test__expectation_dup(b, _ctx);kk_std_core_types__maybe_dup(err, _ctx);kk_string_dup(location, _ctx);kk_function_dup(resume, _ctx);kk_function_dup(showa, _ctx);kk_skip_dup(cont, _ctx);}, {}, _ctx)
  kk_string_t _y_x10152_565 = kk_string_unbox(_b_x563); /*string*/;
  kk_unit_t _x_x1472 = kk_Unit;
  kk_std_test_test__mlift_test___10241(a_sq_, b, cont, err, location, resume, showa, _y_x10152_565, _ctx);
  return kk_unit_box(_x_x1472);
}

kk_unit_t kk_std_test_test__mlift_test___10242(kk_box_t a_sq_, kk_std_test_test__expectation b, bool cont, kk_std_core_types__maybe err, kk_string_t location, kk_function_t resume, kk_function_t showa, kk_unit_t wild___1, kk_context_t* _ctx) { /* forall<a,e> (a' : a, b : expectation<a>, cont : bool, err : maybe<string>, location : string, resume : (a) -> <test-scope,console/console,div,exn|e> (), showa : (a) -> pure string, wild_@1 : ()) -> <test-scope,console/console,div,exn|e> () */ 
  kk_ssize_t _b_x558_560;
  kk_std_core_hnd__htag _x_x1465 = kk_std_core_hnd__htag_dup(kk_std_test_test__tag_test_scope, _ctx); /*hnd/htag<std/test/test/test-scope>*/
  _b_x558_560 = kk_std_core_hnd__evv_index(_x_x1465, _ctx); /*hnd/ev-index*/
  kk_string_t x_10365;
  kk_box_t _x_x1466 = kk_std_core_hnd__open_at0(_b_x558_560, kk_std_test_test__new_mlift_test___10242_fun1467(_ctx), _ctx); /*9025*/
  x_10365 = kk_string_unbox(_x_x1466); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_10365, _ctx);
    kk_box_t _x_x1470 = kk_std_core_hnd_yield_extend(kk_std_test_test__new_mlift_test___10242_fun1471(a_sq_, b, err, location, resume, showa, cont, _ctx), _ctx); /*2978*/
    kk_unit_unbox(_x_x1470); return kk_Unit;
  }
  {
    kk_std_test_test__mlift_test___10241(a_sq_, b, cont, err, location, resume, showa, x_10365, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_test_test__mlift_test___10243_fun1475__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_test__mlift_test___10243_fun1475(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test___10243_fun1475(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test__mlift_test___10243_fun1475, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_test__mlift_test___10243_fun1475(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_hnd__ev ev_10371 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/test/test/test-scope>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x1476 = kk_std_core_hnd__as_Ev(ev_10371, _ctx);
    kk_box_t _box_x566 = _con_x1476->hnd;
    int32_t m = _con_x1476->marker;
    kk_std_test_test__test_scope h = kk_std_test_test__test_scope_unbox(_box_x566, KK_BORROWED, _ctx);
    kk_std_test_test__test_scope_dup(h, _ctx);
    {
      struct kk_std_test_test__Hnd_test_scope* _con_x1477 = kk_std_test_test__as_Hnd_test_scope(h, _ctx);
      kk_integer_t _pat_0 = _con_x1477->_cfc;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x1477->_val_indentation;
      kk_std_core_hnd__clause0 _pat_2 = _con_x1477->_val_scope_name;
      kk_std_core_hnd__clause0 _fun_report_fail = _con_x1477->_fun_report_fail;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_fun_report_fail, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x569 = _fun_report_fail.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x569, (_fun_unbox_x569, m, ev_10371, _ctx), _ctx);
      }
    }
  }
}


// lift anonymous function
struct kk_std_test_test__mlift_test___10243_fun1479__t {
  struct kk_function_s _base;
  kk_box_t a_sq_;
  kk_std_test_test__expectation b;
  kk_std_core_types__maybe err;
  kk_string_t location;
  kk_function_t resume;
  kk_function_t showa;
  bool cont;
};
static kk_box_t kk_std_test_test__mlift_test___10243_fun1479(kk_function_t _fself, kk_box_t _b_x577, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test___10243_fun1479(kk_box_t a_sq_, kk_std_test_test__expectation b, kk_std_core_types__maybe err, kk_string_t location, kk_function_t resume, kk_function_t showa, bool cont, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_test___10243_fun1479__t* _self = kk_function_alloc_as(struct kk_std_test_test__mlift_test___10243_fun1479__t, 8, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test__mlift_test___10243_fun1479, kk_context());
  _self->a_sq_ = a_sq_;
  _self->b = b;
  _self->err = err;
  _self->location = location;
  _self->resume = resume;
  _self->showa = showa;
  _self->cont = cont;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test__mlift_test___10243_fun1479(kk_function_t _fself, kk_box_t _b_x577, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_test___10243_fun1479__t* _self = kk_function_as(struct kk_std_test_test__mlift_test___10243_fun1479__t*, _fself, _ctx);
  kk_box_t a_sq_ = _self->a_sq_; /* 4311 */
  kk_std_test_test__expectation b = _self->b; /* std/test/test/expectation<4311> */
  kk_std_core_types__maybe err = _self->err; /* maybe<string> */
  kk_string_t location = _self->location; /* string */
  kk_function_t resume = _self->resume; /* (4311) -> <std/test/test/test-scope,console/console,div,exn|4323> () */
  kk_function_t showa = _self->showa; /* (4311) -> pure string */
  bool cont = _self->cont; /* bool */
  kk_drop_match(_self, {kk_box_dup(a_sq_, _ctx);kk_std_test_test__expectation_dup(b, _ctx);kk_std_core_types__maybe_dup(err, _ctx);kk_string_dup(location, _ctx);kk_function_dup(resume, _ctx);kk_function_dup(showa, _ctx);kk_skip_dup(cont, _ctx);}, {}, _ctx)
  kk_unit_t wild___1_579 = kk_Unit;
  kk_unit_unbox(_b_x577);
  kk_unit_t _x_x1480 = kk_Unit;
  kk_std_test_test__mlift_test___10242(a_sq_, b, cont, err, location, resume, showa, wild___1_579, _ctx);
  return kk_unit_box(_x_x1480);
}

kk_unit_t kk_std_test_test__mlift_test___10243(kk_box_t a_sq_, kk_std_test_test__expectation b, bool cont, kk_std_core_types__maybe err, kk_string_t location, kk_function_t resume, kk_function_t showa, bool _c_x10147, kk_context_t* _ctx) { /* forall<a,e> (a' : a, b : expectation<a>, cont : bool, err : maybe<string>, location : string, resume : (a) -> <test-scope,console/console,div,exn|e> (), showa : (a) -> pure string, bool) -> () */ 
  if (_c_x10147) {
    kk_function_drop(showa, _ctx);
    kk_string_drop(location, _ctx);
    kk_std_core_types__maybe_drop(err, _ctx);
    kk_std_test_test__expectation_drop(b, _ctx);
    kk_function_call(kk_unit_t, (kk_function_t, kk_box_t, kk_context_t*), resume, (resume, a_sq_, _ctx), _ctx); return kk_Unit;
  }
  {
    kk_ssize_t _b_x572_574;
    kk_std_core_hnd__htag _x_x1473 = kk_std_core_hnd__htag_dup(kk_std_test_test__tag_test_scope, _ctx); /*hnd/htag<std/test/test/test-scope>*/
    _b_x572_574 = kk_std_core_hnd__evv_index(_x_x1473, _ctx); /*hnd/ev-index*/
    kk_unit_t x_10369 = kk_Unit;
    kk_box_t _x_x1474 = kk_std_core_hnd__open_at0(_b_x572_574, kk_std_test_test__new_mlift_test___10243_fun1475(_ctx), _ctx); /*9025*/
    kk_unit_unbox(_x_x1474);
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x1478 = kk_std_core_hnd_yield_extend(kk_std_test_test__new_mlift_test___10243_fun1479(a_sq_, b, err, location, resume, showa, cont, _ctx), _ctx); /*2978*/
      kk_unit_unbox(_x_x1478); return kk_Unit;
    }
    {
      kk_std_test_test__mlift_test___10242(a_sq_, b, cont, err, location, resume, showa, x_10369, _ctx); return kk_Unit;
    }
  }
}
 
// Runs a test function and prints the first failure including details or "Passed" if all expectations pass in the test


// lift anonymous function
struct kk_std_test_test_test___fun1482__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_test_test___fun1482(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ___wildcard_x623__16, kk_std_test_test__expect_value x, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_test___fun1482(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test_test___fun1482, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_test_test_test___fun1483__t {
  struct kk_function_s _base;
  kk_std_test_test__expect_value x;
};
static kk_box_t kk_std_test_test_test___fun1483(kk_function_t _fself, kk_function_t _b_x613, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_test___fun1483(kk_std_test_test__expect_value x, kk_context_t* _ctx) {
  struct kk_std_test_test_test___fun1483__t* _self = kk_function_alloc_as(struct kk_std_test_test_test___fun1483__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_test___fun1483, kk_context());
  _self->x = x;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_test_test_test___fun1484__t {
  struct kk_function_s _base;
  kk_function_t _b_x613;
};
static kk_unit_t kk_std_test_test_test___fun1484(kk_function_t _fself, kk_std_core_hnd__resume_result _b_x614, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_test___fun1484(kk_function_t _b_x613, kk_context_t* _ctx) {
  struct kk_std_test_test_test___fun1484__t* _self = kk_function_alloc_as(struct kk_std_test_test_test___fun1484__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_test___fun1484, kk_context());
  _self->_b_x613 = _b_x613;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_std_test_test_test___fun1484(kk_function_t _fself, kk_std_core_hnd__resume_result _b_x614, kk_context_t* _ctx) {
  struct kk_std_test_test_test___fun1484__t* _self = kk_function_as(struct kk_std_test_test_test___fun1484__t*, _fself, _ctx);
  kk_function_t _b_x613 = _self->_b_x613; /* (hnd/resume-result<3283,3285>) -> 3284 3285 */
  kk_drop_match(_self, {kk_function_dup(_b_x613, _ctx);}, {}, _ctx)
  kk_box_t _x_x1485 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__resume_result, kk_context_t*), _b_x613, (_b_x613, _b_x614, _ctx), _ctx); /*3285*/
  kk_unit_unbox(_x_x1485); return kk_Unit;
}


// lift anonymous function
struct kk_std_test_test_test___fun1486__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_test_test_test___fun1486(kk_function_t _fself, kk_std_test_test__expect_value v, kk_function_t resume, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_test___fun1486(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test_test___fun1486, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_test_test_test___fun1490__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_test_test___fun1490(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_test___fun1490(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test_test___fun1490, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_test_test___fun1490(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_hnd__ev ev_10376 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/test/test/test-scope>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x1491 = kk_std_core_hnd__as_Ev(ev_10376, _ctx);
    kk_box_t _box_x580 = _con_x1491->hnd;
    int32_t m_0 = _con_x1491->marker;
    kk_std_test_test__test_scope h = kk_std_test_test__test_scope_unbox(_box_x580, KK_BORROWED, _ctx);
    kk_std_test_test__test_scope_dup(h, _ctx);
    {
      struct kk_std_test_test__Hnd_test_scope* _con_x1492 = kk_std_test_test__as_Hnd_test_scope(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x1492->_cfc;
      kk_std_core_hnd__clause0 _val_indentation_0 = _con_x1492->_val_indentation;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x1492->_val_scope_name;
      kk_std_core_hnd__clause0 _pat_2_0 = _con_x1492->_fun_report_fail;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_val_indentation_0, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x583 = _val_indentation_0.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x583, (_fun_unbox_x583, m_0, ev_10376, _ctx), _ctx);
      }
    }
  }
}


// lift anonymous function
struct kk_std_test_test_test___fun1494__t {
  struct kk_function_s _base;
  kk_std_test_test__expectation b;
  kk_std_core_exn__exception e;
  kk_std_core_types__maybe err;
  kk_string_t location;
  kk_function_t resume;
  kk_function_t showa;
  bool cont;
};
static kk_box_t kk_std_test_test_test___fun1494(kk_function_t _fself, kk_box_t _b_x591, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_test___fun1494(kk_std_test_test__expectation b, kk_std_core_exn__exception e, kk_std_core_types__maybe err, kk_string_t location, kk_function_t resume, kk_function_t showa, bool cont, kk_context_t* _ctx) {
  struct kk_std_test_test_test___fun1494__t* _self = kk_function_alloc_as(struct kk_std_test_test_test___fun1494__t, 9, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_test___fun1494, kk_context());
  _self->b = b;
  _self->e = e;
  _self->err = err;
  _self->location = location;
  _self->resume = resume;
  _self->showa = showa;
  _self->cont = cont;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test_test___fun1494(kk_function_t _fself, kk_box_t _b_x591, kk_context_t* _ctx) {
  struct kk_std_test_test_test___fun1494__t* _self = kk_function_as(struct kk_std_test_test_test___fun1494__t*, _fself, _ctx);
  kk_std_test_test__expectation b = _self->b; /* std/test/test/expectation<4311> */
  kk_std_core_exn__exception e = _self->e; /* exception */
  kk_std_core_types__maybe err = _self->err; /* maybe<string> */
  kk_string_t location = _self->location; /* string */
  kk_function_t resume = _self->resume; /* (4311) -> <std/test/test/test-scope,console/console,div,exn|4323> () */
  kk_function_t showa = _self->showa; /* (4311) -> pure string */
  bool cont = _self->cont; /* bool */
  kk_drop_match(_self, {kk_std_test_test__expectation_dup(b, _ctx);kk_std_core_exn__exception_dup(e, _ctx);kk_std_core_types__maybe_dup(err, _ctx);kk_string_dup(location, _ctx);kk_function_dup(resume, _ctx);kk_function_dup(showa, _ctx);kk_skip_dup(cont, _ctx);}, {}, _ctx)
  kk_string_t _y_x10138_635 = kk_string_unbox(_b_x591); /*string*/;
  kk_unit_t _x_x1495 = kk_Unit;
  kk_std_test_test__mlift_test___10237(b, cont, e, err, location, resume, showa, _y_x10138_635, _ctx);
  return kk_unit_box(_x_x1495);
}


// lift anonymous function
struct kk_std_test_test_test___fun1500__t {
  struct kk_function_s _base;
  kk_function_t eq;
};
static kk_box_t kk_std_test_test_test___fun1500(kk_function_t _fself, kk_box_t _b_x596, kk_box_t _b_x597, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_test___fun1500(kk_function_t eq, kk_context_t* _ctx) {
  struct kk_std_test_test_test___fun1500__t* _self = kk_function_alloc_as(struct kk_std_test_test_test___fun1500__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_test___fun1500, kk_context());
  _self->eq = eq;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test_test___fun1500(kk_function_t _fself, kk_box_t _b_x596, kk_box_t _b_x597, kk_context_t* _ctx) {
  struct kk_std_test_test_test___fun1500__t* _self = kk_function_as(struct kk_std_test_test_test___fun1500__t*, _fself, _ctx);
  kk_function_t eq = _self->eq; /* (4311, 4311) -> pure bool */
  kk_drop_match(_self, {kk_function_dup(eq, _ctx);}, {}, _ctx)
  bool _x_x1501 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), eq, (eq, _b_x596, _b_x597, _ctx), _ctx); /*bool*/
  return kk_bool_box(_x_x1501);
}


// lift anonymous function
struct kk_std_test_test_test___fun1506__t {
  struct kk_function_s _base;
  kk_box_t a_sq_;
  kk_std_test_test__expectation b;
  kk_std_core_types__maybe err;
  kk_string_t location;
  kk_function_t resume;
  kk_function_t showa;
  bool cont;
};
static kk_box_t kk_std_test_test_test___fun1506(kk_function_t _fself, kk_box_t _b_x603, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_test___fun1506(kk_box_t a_sq_, kk_std_test_test__expectation b, kk_std_core_types__maybe err, kk_string_t location, kk_function_t resume, kk_function_t showa, bool cont, kk_context_t* _ctx) {
  struct kk_std_test_test_test___fun1506__t* _self = kk_function_alloc_as(struct kk_std_test_test_test___fun1506__t, 8, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_test___fun1506, kk_context());
  _self->a_sq_ = a_sq_;
  _self->b = b;
  _self->err = err;
  _self->location = location;
  _self->resume = resume;
  _self->showa = showa;
  _self->cont = cont;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test_test___fun1506(kk_function_t _fself, kk_box_t _b_x603, kk_context_t* _ctx) {
  struct kk_std_test_test_test___fun1506__t* _self = kk_function_as(struct kk_std_test_test_test___fun1506__t*, _fself, _ctx);
  kk_box_t a_sq_ = _self->a_sq_; /* 4311 */
  kk_std_test_test__expectation b = _self->b; /* std/test/test/expectation<4311> */
  kk_std_core_types__maybe err = _self->err; /* maybe<string> */
  kk_string_t location = _self->location; /* string */
  kk_function_t resume = _self->resume; /* (4311) -> <std/test/test/test-scope,console/console,div,exn|4323> () */
  kk_function_t showa = _self->showa; /* (4311) -> pure string */
  bool cont = _self->cont; /* bool */
  kk_drop_match(_self, {kk_box_dup(a_sq_, _ctx);kk_std_test_test__expectation_dup(b, _ctx);kk_std_core_types__maybe_dup(err, _ctx);kk_string_dup(location, _ctx);kk_function_dup(resume, _ctx);kk_function_dup(showa, _ctx);kk_skip_dup(cont, _ctx);}, {}, _ctx)
  bool _c_x10147_636 = kk_bool_unbox(_b_x603); /*bool*/;
  kk_unit_t _x_x1507 = kk_Unit;
  kk_std_test_test__mlift_test___10243(a_sq_, b, cont, err, location, resume, showa, _c_x10147_636, _ctx);
  return kk_unit_box(_x_x1507);
}
static kk_unit_t kk_std_test_test_test___fun1486(kk_function_t _fself, kk_std_test_test__expect_value v, kk_function_t resume, kk_context_t* _ctx) {
  kk_unused(_fself);
  {
    struct kk_std_test_test_Expect_value* _con_x1487 = kk_std_test_test__as_Expect_value(v, _ctx);
    kk_std_core_exn__error a = _con_x1487->run_value;
    kk_std_test_test__expectation b = _con_x1487->expectation;
    kk_std_core_types__maybe err = _con_x1487->details;
    bool cont = _con_x1487->continue_on_error;
    kk_string_t location = _con_x1487->location;
    kk_function_t eq = _con_x1487->eq;
    kk_function_t showa = _con_x1487->show;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_std_core_exn__error_dup(a, _ctx);
      kk_std_test_test__expectation_dup(b, _ctx);
      kk_function_dup(eq, _ctx);
      kk_std_core_types__maybe_dup(err, _ctx);
      kk_string_dup(location, _ctx);
      kk_function_dup(showa, _ctx);
      kk_datatype_ptr_decref(v, _ctx);
    }
    if (kk_std_core_exn__is_Error(a, _ctx)) {
      kk_std_core_exn__exception e = a._cons.Error.exception;
      kk_function_drop(eq, _ctx);
      kk_std_core_exn__exception_dup(e, _ctx);
      kk_std_core_exn__error_drop(a, _ctx);
      kk_ssize_t _b_x586_588;
      kk_std_core_hnd__htag _x_x1488 = kk_std_core_hnd__htag_dup(kk_std_test_test__tag_test_scope, _ctx); /*hnd/htag<std/test/test/test-scope>*/
      _b_x586_588 = kk_std_core_hnd__evv_index(_x_x1488, _ctx); /*hnd/ev-index*/
      kk_string_t x_0_10374;
      kk_box_t _x_x1489 = kk_std_core_hnd__open_at0(_b_x586_588, kk_std_test_test_new_test___fun1490(_ctx), _ctx); /*9025*/
      x_0_10374 = kk_string_unbox(_x_x1489); /*string*/
      if (kk_yielding(kk_context())) {
        kk_string_drop(x_0_10374, _ctx);
        kk_box_t _x_x1493 = kk_std_core_hnd_yield_extend(kk_std_test_test_new_test___fun1494(b, e, err, location, resume, showa, cont, _ctx), _ctx); /*2978*/
        kk_unit_unbox(_x_x1493); return kk_Unit;
      }
      {
        kk_std_test_test__mlift_test___10237(b, cont, e, err, location, resume, showa, x_0_10374, _ctx); return kk_Unit;
      }
    }
    {
      kk_box_t a_sq_ = a._cons.Ok.result;
      bool x_1_10378;
      if (kk_std_test_test__is_ExpectedValue(b, _ctx)) {
        struct kk_std_test_test_ExpectedValue* _con_x1497 = kk_std_test_test__as_ExpectedValue(b, _ctx);
        kk_box_t b_0_sq_ = _con_x1497->a;
        kk_box_dup(b_0_sq_, _ctx);
        kk_ssize_t _b_x592_598;
        kk_std_core_hnd__htag _x_x1498 = kk_std_core_hnd__htag_dup(kk_std_core_exn__tag_exn, _ctx); /*hnd/htag<exn>*/
        _b_x592_598 = kk_std_core_hnd__evv_index(_x_x1498, _ctx); /*hnd/ev-index*/
        kk_box_t _x_x1499;
        kk_box_t _x_x1502 = kk_box_dup(a_sq_, _ctx); /*4311*/
        _x_x1499 = kk_std_core_hnd__open_at2(_b_x592_598, kk_std_test_test_new_test___fun1500(eq, _ctx), _x_x1502, b_0_sq_, _ctx); /*9234*/
        x_1_10378 = kk_bool_unbox(_x_x1499); /*bool*/
        goto _match_x1496;
      }
      if (kk_std_test_test__is_ExpectedError(b, _ctx)) {
        struct kk_std_test_test_ExpectedError* _con_x1503 = kk_std_test_test__as_ExpectedError(b, _ctx);
        kk_function_drop(eq, _ctx);
        x_1_10378 = false; /*bool*/
        goto _match_x1496;
      }
      {
        struct kk_std_test_test_ExpectedAssertion* _con_x1504 = kk_std_test_test__as_ExpectedAssertion(b, _ctx);
        kk_function_drop(eq, _ctx);
        x_1_10378 = true; /*bool*/
      }
      _match_x1496: ;
      if (kk_yielding(kk_context())) {
        kk_box_t _x_x1505 = kk_std_core_hnd_yield_extend(kk_std_test_test_new_test___fun1506(a_sq_, b, err, location, resume, showa, cont, _ctx), _ctx); /*2978*/
        kk_unit_unbox(_x_x1505); return kk_Unit;
      }
      {
        kk_std_test_test__mlift_test___10243(a_sq_, b, cont, err, location, resume, showa, x_1_10378, _ctx); return kk_Unit;
      }
    }
  }
}


// lift anonymous function
struct kk_std_test_test_test___fun1508__t {
  struct kk_function_s _base;
  kk_function_t _b_x605_630;
};
static kk_box_t kk_std_test_test_test___fun1508(kk_function_t _fself, kk_box_t _b_x607, kk_function_t _b_x608, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_test___fun1508(kk_function_t _b_x605_630, kk_context_t* _ctx) {
  struct kk_std_test_test_test___fun1508__t* _self = kk_function_alloc_as(struct kk_std_test_test_test___fun1508__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_test___fun1508, kk_context());
  _self->_b_x605_630 = _b_x605_630;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_test_test_test___fun1511__t {
  struct kk_function_s _base;
  kk_function_t _b_x608;
};
static kk_unit_t kk_std_test_test_test___fun1511(kk_function_t _fself, kk_box_t _b_x609, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_test___fun1511(kk_function_t _b_x608, kk_context_t* _ctx) {
  struct kk_std_test_test_test___fun1511__t* _self = kk_function_alloc_as(struct kk_std_test_test_test___fun1511__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_test___fun1511, kk_context());
  _self->_b_x608 = _b_x608;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_std_test_test_test___fun1511(kk_function_t _fself, kk_box_t _b_x609, kk_context_t* _ctx) {
  struct kk_std_test_test_test___fun1511__t* _self = kk_function_as(struct kk_std_test_test_test___fun1511__t*, _fself, _ctx);
  kk_function_t _b_x608 = _self->_b_x608; /* (5566) -> 5567 5568 */
  kk_drop_match(_self, {kk_function_dup(_b_x608, _ctx);}, {}, _ctx)
  kk_box_t _x_x1512 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _b_x608, (_b_x608, _b_x609, _ctx), _ctx); /*5568*/
  kk_unit_unbox(_x_x1512); return kk_Unit;
}
static kk_box_t kk_std_test_test_test___fun1508(kk_function_t _fself, kk_box_t _b_x607, kk_function_t _b_x608, kk_context_t* _ctx) {
  struct kk_std_test_test_test___fun1508__t* _self = kk_function_as(struct kk_std_test_test_test___fun1508__t*, _fself, _ctx);
  kk_function_t _b_x605_630 = _self->_b_x605_630; /* (v : std/test/test/expect-value<4311>, resume : (4311) -> <std/test/test/test-scope,console/console,div,exn|4323> ()) -> <console/console,div,exn,std/test/test/test-scope|4323> () */
  kk_drop_match(_self, {kk_function_dup(_b_x605_630, _ctx);}, {}, _ctx)
  kk_unit_t _x_x1509 = kk_Unit;
  kk_std_test_test__expect_value _x_x1510 = kk_std_test_test__expect_value_unbox(_b_x607, KK_OWNED, _ctx); /*std/test/test/expect-value<4311>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_test_test__expect_value, kk_function_t, kk_context_t*), _b_x605_630, (_b_x605_630, _x_x1510, kk_std_test_test_new_test___fun1511(_b_x608, _ctx), _ctx), _ctx);
  return kk_unit_box(_x_x1509);
}


// lift anonymous function
struct kk_std_test_test_test___fun1513__t {
  struct kk_function_s _base;
  kk_function_t _b_x606_631;
};
static kk_box_t kk_std_test_test_test___fun1513(kk_function_t _fself, kk_std_core_hnd__resume_result _b_x610, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_test___fun1513(kk_function_t _b_x606_631, kk_context_t* _ctx) {
  struct kk_std_test_test_test___fun1513__t* _self = kk_function_alloc_as(struct kk_std_test_test_test___fun1513__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_test___fun1513, kk_context());
  _self->_b_x606_631 = _b_x606_631;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test_test___fun1513(kk_function_t _fself, kk_std_core_hnd__resume_result _b_x610, kk_context_t* _ctx) {
  struct kk_std_test_test_test___fun1513__t* _self = kk_function_as(struct kk_std_test_test_test___fun1513__t*, _fself, _ctx);
  kk_function_t _b_x606_631 = _self->_b_x606_631; /* (hnd/resume-result<4311,()>) -> <console/console,div,exn,std/test/test/test-scope|4323> () */
  kk_drop_match(_self, {kk_function_dup(_b_x606_631, _ctx);}, {}, _ctx)
  kk_unit_t _x_x1514 = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_hnd__resume_result, kk_context_t*), _b_x606_631, (_b_x606_631, _b_x610, _ctx), _ctx);
  return kk_unit_box(_x_x1514);
}
static kk_box_t kk_std_test_test_test___fun1483(kk_function_t _fself, kk_function_t _b_x613, kk_context_t* _ctx) {
  struct kk_std_test_test_test___fun1483__t* _self = kk_function_as(struct kk_std_test_test_test___fun1483__t*, _fself, _ctx);
  kk_std_test_test__expect_value x = _self->x; /* std/test/test/expect-value<4311> */
  kk_drop_match(_self, {kk_std_test_test__expect_value_dup(x, _ctx);}, {}, _ctx)
  kk_function_t k_634 = kk_std_test_test_new_test___fun1484(_b_x613, _ctx); /*(hnd/resume-result<4311,()>) -> <console/console,div,exn,std/test/test/test-scope|4323> ()*/;
  kk_std_test_test__expect_value _b_x604_629 = x; /*std/test/test/expect-value<4311>*/;
  kk_function_t _b_x605_630 = kk_std_test_test_new_test___fun1486(_ctx); /*(v : std/test/test/expect-value<4311>, resume : (4311) -> <std/test/test/test-scope,console/console,div,exn|4323> ()) -> <console/console,div,exn,std/test/test/test-scope|4323> ()*/;
  kk_function_t _b_x606_631 = k_634; /*(hnd/resume-result<4311,()>) -> <console/console,div,exn,std/test/test/test-scope|4323> ()*/;
  return kk_std_core_hnd_protect(kk_std_test_test__expect_value_box(_b_x604_629, _ctx), kk_std_test_test_new_test___fun1508(_b_x605_630, _ctx), kk_std_test_test_new_test___fun1513(_b_x606_631, _ctx), _ctx);
}
static kk_box_t kk_std_test_test_test___fun1482(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ___wildcard_x623__16, kk_std_test_test__expect_value x, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_datatype_ptr_dropn(___wildcard_x623__16, (KK_I32(3)), _ctx);
  return kk_std_core_hnd_yield_to(m, kk_std_test_test_new_test___fun1483(x, _ctx), _ctx);
}


// lift anonymous function
struct kk_std_test_test_test___fun1517__t {
  struct kk_function_s _base;
  kk_function_t _b_x615_626;
};
static kk_box_t kk_std_test_test_test___fun1517(kk_function_t _fself, int32_t _b_x616, kk_std_core_hnd__ev _b_x617, kk_box_t _b_x618, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_test___fun1517(kk_function_t _b_x615_626, kk_context_t* _ctx) {
  struct kk_std_test_test_test___fun1517__t* _self = kk_function_alloc_as(struct kk_std_test_test_test___fun1517__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_test___fun1517, kk_context());
  _self->_b_x615_626 = _b_x615_626;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test_test___fun1517(kk_function_t _fself, int32_t _b_x616, kk_std_core_hnd__ev _b_x617, kk_box_t _b_x618, kk_context_t* _ctx) {
  struct kk_std_test_test_test___fun1517__t* _self = kk_function_as(struct kk_std_test_test_test___fun1517__t*, _fself, _ctx);
  kk_function_t _b_x615_626 = _self->_b_x615_626; /* (m : hnd/marker<<console/console,div,exn,std/test/test/test-scope|4323>,()>, hnd/ev<std/test/test/test>, x : std/test/test/expect-value<4311>) -> <console/console,div,exn,std/test/test/test-scope|4323> 4311 */
  kk_drop_match(_self, {kk_function_dup(_b_x615_626, _ctx);}, {}, _ctx)
  kk_std_test_test__expect_value _x_x1518 = kk_std_test_test__expect_value_unbox(_b_x618, KK_OWNED, _ctx); /*std/test/test/expect-value<4311>*/
  return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_std_test_test__expect_value, kk_context_t*), _b_x615_626, (_b_x615_626, _b_x616, _b_x617, _x_x1518, _ctx), _ctx);
}


// lift anonymous function
struct kk_std_test_test_test___fun1519__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_test_test___fun1519(kk_function_t _fself, kk_box_t _b_x622, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_test___fun1519(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test_test___fun1519, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_test_test___fun1519(kk_function_t _fself, kk_box_t _b_x622, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_0_637 = kk_Unit;
  kk_unit_unbox(_b_x622);
  return kk_unit_box(_x_0_637);
}


// lift anonymous function
struct kk_std_test_test_test___fun1520__t {
  struct kk_function_s _base;
  kk_function_t f;
};
static kk_box_t kk_std_test_test_test___fun1520(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_test___fun1520(kk_function_t f, kk_context_t* _ctx) {
  struct kk_std_test_test_test___fun1520__t* _self = kk_function_alloc_as(struct kk_std_test_test_test___fun1520__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_test___fun1520, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test_test___fun1520(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_test_test_test___fun1520__t* _self = kk_function_as(struct kk_std_test_test_test___fun1520__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* () -> <std/test/test/test,std/test/test/test-scope,console/console,pure|4323> () */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_unit_t _x_x1521 = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), f, (f, _ctx), _ctx);
  return kk_unit_box(_x_x1521);
}

kk_unit_t kk_std_test_test_test__(kk_function_t f, kk_string_t _implicit_fs_kk_module, kk_string_t _implicit_fs_kk_line, kk_context_t* _ctx) { /* forall<e> (f : () -> <test,test-scope,console/console,pure|e> (), ?kk-module : string, ?kk-line : string) -> <console/console,test-scope,pure|e> () */ 
  kk_string_drop(_implicit_fs_kk_line, _ctx);
  kk_string_drop(_implicit_fs_kk_module, _ctx);
  kk_box_t _x_x1481;
  kk_function_t _b_x615_626 = kk_std_test_test_new_test___fun1482(_ctx); /*(m : hnd/marker<<console/console,div,exn,std/test/test/test-scope|4323>,()>, hnd/ev<std/test/test/test>, x : std/test/test/expect-value<4311>) -> <console/console,div,exn,std/test/test/test-scope|4323> 4311*/;
  kk_std_test_test__test _x_x1515;
  kk_std_core_hnd__clause1 _x_x1516 = kk_std_core_hnd__new_Clause1(kk_std_test_test_new_test___fun1517(_b_x615_626, _ctx), _ctx); /*hnd/clause1<45,46,47,48,49>*/
  _x_x1515 = kk_std_test_test__new_Hnd_test(kk_reuse_null, 0, kk_integer_from_small(3), _x_x1516, _ctx); /*std/test/test/test<21,22>*/
  _x_x1481 = kk_std_test_test__handle_test(_x_x1515, kk_std_test_test_new_test___fun1519(_ctx), kk_std_test_test_new_test___fun1520(f, _ctx), _ctx); /*718*/
  kk_unit_unbox(_x_x1481); return kk_Unit;
}
extern kk_unit_t kk_std_test_test_test_fun1523(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_test_test_test_fun1523__t* _self = kk_function_as(struct kk_std_test_test_test_fun1523__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* () -> <std/test/test/test,std/test/test/test-scope,console/console,pure|4362> () */
  kk_string_t _implicit_fs_kk_line = _self->_implicit_fs_kk_line; /* string */
  kk_string_t _implicit_fs_kk_module = _self->_implicit_fs_kk_module; /* string */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);kk_string_dup(_implicit_fs_kk_line, _ctx);kk_string_dup(_implicit_fs_kk_module, _ctx);}, {}, _ctx)
  kk_std_test_test_test__(f, _implicit_fs_kk_module, _implicit_fs_kk_line, _ctx); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_std_test_test__mlift_test_tests_10246_fun1526__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_test_test__mlift_test_tests_10246_fun1526(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test_tests_10246_fun1526(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test__mlift_test_tests_10246_fun1526, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_test_test__mlift_test_tests_10246_fun1527__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_test_test__mlift_test_tests_10246_fun1527(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test_tests_10246_fun1527(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test__mlift_test_tests_10246_fun1527, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_test_test__mlift_test_tests_10246_fun1529__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_test__mlift_test_tests_10246_fun1529(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test_tests_10246_fun1529(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test__mlift_test_tests_10246_fun1529, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_test_test__mlift_test_tests_10246_fun1531__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_test__mlift_test_tests_10246_fun1531(kk_function_t _fself, kk_box_t _b_x644, kk_box_t _b_x645, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test_tests_10246_fun1531(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test__mlift_test_tests_10246_fun1531, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_test__mlift_test_tests_10246_fun1531(kk_function_t _fself, kk_box_t _b_x644, kk_box_t _b_x645, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x1532 = kk_string_unbox(_b_x644); /*string*/
  kk_std_core_types__optional _x_x1533 = kk_std_core_types__optional_unbox(_b_x645, KK_OWNED, _ctx); /*? exception-info*/
  return kk_std_core_exn_throw(_x_x1532, _x_x1533, _ctx);
}
static kk_box_t kk_std_test_test__mlift_test_tests_10246_fun1529(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_ssize_t _b_x640_668;
  kk_std_core_hnd__htag _x_x1530 = kk_std_core_hnd__htag_dup(kk_std_core_exn__tag_exn, _ctx); /*hnd/htag<exn>*/
  _b_x640_668 = kk_std_core_hnd__evv_index(_x_x1530, _ctx); /*hnd/ev-index*/
  kk_box_t _x_x1534;
  kk_string_t _x_x1535;
  kk_define_string_literal(, _s_x1536, 20, "Some error somewhere", _ctx)
  _x_x1535 = kk_string_dup(_s_x1536, _ctx); /*string*/
  _x_x1534 = kk_string_box(_x_x1535); /*9232*/
  return kk_std_core_hnd__open_at2(_b_x640_668, kk_std_test_test__new_mlift_test_tests_10246_fun1531(_ctx), _x_x1534, kk_std_core_types__optional_box(kk_std_core_types__new_None(_ctx), _ctx), _ctx);
}


// lift anonymous function
struct kk_std_test_test__mlift_test_tests_10246_fun1544__t {
  struct kk_function_s _base;
};
static bool kk_std_test_test__mlift_test_tests_10246_fun1544(kk_function_t _fself, kk_box_t _b_x657, kk_box_t _b_x658, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test_tests_10246_fun1544(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test__mlift_test_tests_10246_fun1544, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_test_test__mlift_test_tests_10246_fun1544(kk_function_t _fself, kk_box_t _b_x657, kk_box_t _b_x658, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _brw_x866 = kk_integer_unbox(_b_x657, _ctx); /*int*/;
  kk_integer_t _brw_x865 = kk_integer_unbox(_b_x658, _ctx); /*int*/;
  bool _brw_x867 = kk_integer_eq_borrow(_brw_x866,_brw_x865,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x866, _ctx);
  kk_integer_drop(_brw_x865, _ctx);
  return _brw_x867;
}


// lift anonymous function
struct kk_std_test_test__mlift_test_tests_10246_fun1545__t {
  struct kk_function_s _base;
};
static kk_string_t kk_std_test_test__mlift_test_tests_10246_fun1545(kk_function_t _fself, kk_box_t _b_x659, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test_tests_10246_fun1545(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test__mlift_test_tests_10246_fun1545, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_std_test_test__mlift_test_tests_10246_fun1545(kk_function_t _fself, kk_box_t _b_x659, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x1546 = kk_integer_unbox(_b_x659, _ctx); /*int*/
  return kk_std_core_int_show(_x_x1546, _ctx);
}


// lift anonymous function
struct kk_std_test_test__mlift_test_tests_10246_fun1552__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_test__mlift_test_tests_10246_fun1552(kk_function_t _fself, kk_box_t _b_x675, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test_tests_10246_fun1552(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test__mlift_test_tests_10246_fun1552, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_test__mlift_test_tests_10246_fun1552(kk_function_t _fself, kk_box_t _b_x675, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t wild___3_679 = kk_integer_unbox(_b_x675, _ctx); /*int*/;
  kk_integer_drop(wild___3_679, _ctx);
  return kk_unit_box(kk_Unit);
}
static kk_unit_t kk_std_test_test__mlift_test_tests_10246_fun1527(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t x_10380;
  kk_box_t _x_x1528;
  kk_std_core_types__optional _x_x1537;
  kk_box_t _x_x1538;
  kk_string_t _x_x1539;
  kk_define_string_literal(, _s_x1540, 18, "Really expected 1!", _ctx)
  _x_x1539 = kk_string_dup(_s_x1540, _ctx); /*string*/
  _x_x1538 = kk_string_box(_x_x1539); /*0*/
  _x_x1537 = kk_std_core_types__new_Optional(_x_x1538, _ctx); /*? 0*/
  kk_std_core_types__optional _x_x1541;
  kk_box_t _x_x1542;
  bool _x_x1543;
  kk_std_core_types__optional _match_x868 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x868, _ctx)) {
    kk_box_t _box_x647 = _match_x868._cons._Optional.value;
    bool _uniq_continue_on_error_1876_2 = kk_bool_unbox(_box_x647);
    kk_std_core_types__optional_drop(_match_x868, _ctx);
    _x_x1543 = _uniq_continue_on_error_1876_2; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x868, _ctx);
    _x_x1543 = false; /*bool*/
  }
  _x_x1542 = kk_bool_box(_x_x1543); /*0*/
  _x_x1541 = kk_std_core_types__new_Optional(_x_x1542, _ctx); /*? 0*/
  kk_string_t _x_x1547;
  kk_define_string_literal(, _s_x1548, 3, "171", _ctx)
  _x_x1547 = kk_string_dup(_s_x1548, _ctx); /*string*/
  kk_string_t _x_x1549;
  kk_define_string_literal(, _s_x1550, 13, "std/test/test", _ctx)
  _x_x1549 = kk_string_dup(_s_x1550, _ctx); /*string*/
  _x_x1528 = kk_std_test_test_expect_result(kk_integer_box(kk_integer_from_small(1), _ctx), kk_std_test_test__new_mlift_test_tests_10246_fun1529(_ctx), _x_x1537, _x_x1541, kk_std_test_test__new_mlift_test_tests_10246_fun1544(_ctx), kk_std_test_test__new_mlift_test_tests_10246_fun1545(_ctx), _x_x1547, _x_x1549, _ctx); /*1369*/
  x_10380 = kk_integer_unbox(_x_x1528, _ctx); /*int*/
  kk_integer_drop(x_10380, _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1551 = kk_std_core_hnd_yield_extend(kk_std_test_test__new_mlift_test_tests_10246_fun1552(_ctx), _ctx); /*2978*/
    kk_unit_unbox(_x_x1551); return kk_Unit;
  }
  {
    kk_Unit; return kk_Unit;
  }
}
static kk_unit_t kk_std_test_test__mlift_test_tests_10246_fun1526(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x1553;
  kk_define_string_literal(, _s_x1554, 13, "std/test/test", _ctx)
  _x_x1553 = kk_string_dup(_s_x1554, _ctx); /*string*/
  kk_string_t _x_x1555;
  kk_define_string_literal(, _s_x1556, 3, "170", _ctx)
  _x_x1555 = kk_string_dup(_s_x1556, _ctx); /*string*/
  kk_std_test_test_test__(kk_std_test_test__new_mlift_test_tests_10246_fun1527(_ctx), _x_x1553, _x_x1555, _ctx); return kk_Unit;
}

kk_unit_t kk_std_test_test__mlift_test_tests_10246(kk_unit_t wild___2_0, kk_context_t* _ctx) { /* forall<e> (wild_@2@0 : ()) -> <test-scope,console/console,div,exn|e> () */ 
  kk_string_t _x_x1524;
  kk_define_string_literal(, _s_x1525, 15, "Additional info", _ctx)
  _x_x1524 = kk_string_dup(_s_x1525, _ctx); /*string*/
  kk_string_t _x_x1557;
  kk_define_string_literal(, _s_x1558, 13, "std/test/test", _ctx)
  _x_x1557 = kk_string_dup(_s_x1558, _ctx); /*string*/
  kk_string_t _x_x1559;
  kk_define_string_literal(, _s_x1560, 3, "170", _ctx)
  _x_x1559 = kk_string_dup(_s_x1560, _ctx); /*string*/
  kk_std_test_test_istest_fs_scope(_x_x1524, true, kk_std_test_test__new_mlift_test_tests_10246_fun1526(_ctx), _x_x1557, _x_x1559, _ctx); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_std_test_test__mlift_test_tests_10248_fun1562__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_test__mlift_test_tests_10248_fun1562(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test_tests_10248_fun1562(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test__mlift_test_tests_10248_fun1562, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_test__mlift_test_tests_10248_fun1562(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_integer_box(kk_integer_from_small(1), _ctx);
}


// lift anonymous function
struct kk_std_test_test__mlift_test_tests_10248_fun1570__t {
  struct kk_function_s _base;
};
static bool kk_std_test_test__mlift_test_tests_10248_fun1570(kk_function_t _fself, kk_box_t _b_x692, kk_box_t _b_x693, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test_tests_10248_fun1570(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test__mlift_test_tests_10248_fun1570, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_test_test__mlift_test_tests_10248_fun1570(kk_function_t _fself, kk_box_t _b_x692, kk_box_t _b_x693, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _brw_x860 = kk_integer_unbox(_b_x692, _ctx); /*int*/;
  kk_integer_t _brw_x859 = kk_integer_unbox(_b_x693, _ctx); /*int*/;
  bool _brw_x861 = kk_integer_eq_borrow(_brw_x860,_brw_x859,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x860, _ctx);
  kk_integer_drop(_brw_x859, _ctx);
  return _brw_x861;
}


// lift anonymous function
struct kk_std_test_test__mlift_test_tests_10248_fun1571__t {
  struct kk_function_s _base;
};
static kk_string_t kk_std_test_test__mlift_test_tests_10248_fun1571(kk_function_t _fself, kk_box_t _b_x694, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test_tests_10248_fun1571(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test__mlift_test_tests_10248_fun1571, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_std_test_test__mlift_test_tests_10248_fun1571(kk_function_t _fself, kk_box_t _b_x694, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x1572 = kk_integer_unbox(_b_x694, _ctx); /*int*/
  return kk_std_core_int_show(_x_x1572, _ctx);
}


// lift anonymous function
struct kk_std_test_test__mlift_test_tests_10248_fun1578__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_test__mlift_test_tests_10248_fun1578(kk_function_t _fself, kk_box_t _b_x706, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test_tests_10248_fun1578(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test__mlift_test_tests_10248_fun1578, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_test__mlift_test_tests_10248_fun1578(kk_function_t _fself, kk_box_t _b_x706, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t wild___1_708 = kk_integer_unbox(_b_x706, _ctx); /*int*/;
  kk_integer_drop(wild___1_708, _ctx);
  return kk_unit_box(kk_Unit);
}

kk_unit_t kk_std_test_test__mlift_test_tests_10248(kk_integer_t wild___0, kk_context_t* _ctx) { /* forall<e> (wild_@0 : int) -> <test,console/console,div,exn,test-scope|e> () */ 
  kk_integer_drop(wild___0, _ctx);
  kk_integer_t x_10383;
  kk_box_t _x_x1561;
  kk_std_core_types__optional _x_x1563;
  kk_box_t _x_x1564;
  kk_string_t _x_x1565;
  kk_std_core_types__optional _match_x863 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x863, _ctx)) {
    kk_box_t _box_x680 = _match_x863._cons._Optional.value;
    kk_string_t _uniq_details_1872_0 = kk_string_unbox(_box_x680);
    kk_string_dup(_uniq_details_1872_0, _ctx);
    kk_std_core_types__optional_drop(_match_x863, _ctx);
    _x_x1565 = _uniq_details_1872_0; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x863, _ctx);
    _x_x1565 = kk_string_empty(); /*string*/
  }
  _x_x1564 = kk_string_box(_x_x1565); /*0*/
  _x_x1563 = kk_std_core_types__new_Optional(_x_x1564, _ctx); /*? 0*/
  kk_std_core_types__optional _x_x1567;
  kk_box_t _x_x1568;
  bool _x_x1569;
  kk_std_core_types__optional _match_x862 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x862, _ctx)) {
    kk_box_t _box_x682 = _match_x862._cons._Optional.value;
    bool _uniq_continue_on_error_1876_0 = kk_bool_unbox(_box_x682);
    kk_std_core_types__optional_drop(_match_x862, _ctx);
    _x_x1569 = _uniq_continue_on_error_1876_0; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x862, _ctx);
    _x_x1569 = false; /*bool*/
  }
  _x_x1568 = kk_bool_box(_x_x1569); /*0*/
  _x_x1567 = kk_std_core_types__new_Optional(_x_x1568, _ctx); /*? 0*/
  kk_string_t _x_x1573;
  kk_define_string_literal(, _s_x1574, 3, "164", _ctx)
  _x_x1573 = kk_string_dup(_s_x1574, _ctx); /*string*/
  kk_string_t _x_x1575;
  kk_define_string_literal(, _s_x1576, 13, "std/test/test", _ctx)
  _x_x1575 = kk_string_dup(_s_x1576, _ctx); /*string*/
  _x_x1561 = kk_std_test_test_expect_result(kk_integer_box(kk_integer_from_small(2), _ctx), kk_std_test_test__new_mlift_test_tests_10248_fun1562(_ctx), _x_x1563, _x_x1567, kk_std_test_test__new_mlift_test_tests_10248_fun1570(_ctx), kk_std_test_test__new_mlift_test_tests_10248_fun1571(_ctx), _x_x1573, _x_x1575, _ctx); /*1369*/
  x_10383 = kk_integer_unbox(_x_x1561, _ctx); /*int*/
  kk_integer_drop(x_10383, _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1577 = kk_std_core_hnd_yield_extend(kk_std_test_test__new_mlift_test_tests_10248_fun1578(_ctx), _ctx); /*2978*/
    kk_unit_unbox(_x_x1577); return kk_Unit;
  }
  {
    kk_Unit; return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_test_test__mlift_test_tests_10249_fun1582__t {
  struct kk_function_s _base;
  kk_integer_t res;
};
static kk_box_t kk_std_test_test__mlift_test_tests_10249_fun1582(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test_tests_10249_fun1582(kk_integer_t res, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_test_tests_10249_fun1582__t* _self = kk_function_alloc_as(struct kk_std_test_test__mlift_test_tests_10249_fun1582__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test__mlift_test_tests_10249_fun1582, kk_context());
  _self->res = res;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_test_test__mlift_test_tests_10249_fun1582(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_test_tests_10249_fun1582__t* _self = kk_function_as(struct kk_std_test_test__mlift_test_tests_10249_fun1582__t*, _fself, _ctx);
  kk_integer_t res = _self->res; /* int */
  kk_drop_match(_self, {kk_integer_dup(res, _ctx);}, {}, _ctx)
  kk_integer_t _x_x1583 = kk_integer_add_small_const(res, 1, _ctx); /*int*/
  return kk_integer_box(_x_x1583, _ctx);
}


// lift anonymous function
struct kk_std_test_test__mlift_test_tests_10249_fun1591__t {
  struct kk_function_s _base;
};
static bool kk_std_test_test__mlift_test_tests_10249_fun1591(kk_function_t _fself, kk_box_t _b_x721, kk_box_t _b_x722, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test_tests_10249_fun1591(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test__mlift_test_tests_10249_fun1591, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_test_test__mlift_test_tests_10249_fun1591(kk_function_t _fself, kk_box_t _b_x721, kk_box_t _b_x722, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _brw_x854 = kk_integer_unbox(_b_x721, _ctx); /*int*/;
  kk_integer_t _brw_x853 = kk_integer_unbox(_b_x722, _ctx); /*int*/;
  bool _brw_x855 = kk_integer_eq_borrow(_brw_x854,_brw_x853,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x854, _ctx);
  kk_integer_drop(_brw_x853, _ctx);
  return _brw_x855;
}


// lift anonymous function
struct kk_std_test_test__mlift_test_tests_10249_fun1592__t {
  struct kk_function_s _base;
};
static kk_string_t kk_std_test_test__mlift_test_tests_10249_fun1592(kk_function_t _fself, kk_box_t _b_x723, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test_tests_10249_fun1592(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test__mlift_test_tests_10249_fun1592, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_std_test_test__mlift_test_tests_10249_fun1592(kk_function_t _fself, kk_box_t _b_x723, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x1593 = kk_integer_unbox(_b_x723, _ctx); /*int*/
  return kk_std_core_int_show(_x_x1593, _ctx);
}


// lift anonymous function
struct kk_std_test_test__mlift_test_tests_10249_fun1599__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_test__mlift_test_tests_10249_fun1599(kk_function_t _fself, kk_box_t _b_x735, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test_tests_10249_fun1599(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test__mlift_test_tests_10249_fun1599, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_test__mlift_test_tests_10249_fun1599(kk_function_t _fself, kk_box_t _b_x735, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t wild___0_737 = kk_integer_unbox(_b_x735, _ctx); /*int*/;
  kk_unit_t _x_x1600 = kk_Unit;
  kk_std_test_test__mlift_test_tests_10248(wild___0_737, _ctx);
  return kk_unit_box(_x_x1600);
}

kk_unit_t kk_std_test_test__mlift_test_tests_10249(kk_integer_t res, kk_context_t* _ctx) { /* forall<e> (res : int) -> <test,console/console,div,exn,test-scope|e> () */ 
  kk_unit_t __ = kk_Unit;
  kk_string_t _x_x1579;
  kk_define_string_literal(, _s_x1580, 10, "Continued!", _ctx)
  _x_x1579 = kk_string_dup(_s_x1580, _ctx); /*string*/
  kk_std_core_console_printsln(_x_x1579, _ctx);
  kk_integer_t x_10386;
  kk_box_t _x_x1581;
  kk_std_core_types__optional _x_x1584;
  kk_box_t _x_x1585;
  kk_string_t _x_x1586;
  kk_std_core_types__optional _match_x857 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x857, _ctx)) {
    kk_box_t _box_x709 = _match_x857._cons._Optional.value;
    kk_string_t _uniq_details_1872 = kk_string_unbox(_box_x709);
    kk_string_dup(_uniq_details_1872, _ctx);
    kk_std_core_types__optional_drop(_match_x857, _ctx);
    _x_x1586 = _uniq_details_1872; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x857, _ctx);
    _x_x1586 = kk_string_empty(); /*string*/
  }
  _x_x1585 = kk_string_box(_x_x1586); /*0*/
  _x_x1584 = kk_std_core_types__new_Optional(_x_x1585, _ctx); /*? 0*/
  kk_std_core_types__optional _x_x1588;
  kk_box_t _x_x1589;
  bool _x_x1590;
  kk_std_core_types__optional _match_x856 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x856, _ctx)) {
    kk_box_t _box_x711 = _match_x856._cons._Optional.value;
    bool _uniq_continue_on_error_1876 = kk_bool_unbox(_box_x711);
    kk_std_core_types__optional_drop(_match_x856, _ctx);
    _x_x1590 = _uniq_continue_on_error_1876; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x856, _ctx);
    _x_x1590 = false; /*bool*/
  }
  _x_x1589 = kk_bool_box(_x_x1590); /*0*/
  _x_x1588 = kk_std_core_types__new_Optional(_x_x1589, _ctx); /*? 0*/
  kk_string_t _x_x1594;
  kk_define_string_literal(, _s_x1595, 3, "162", _ctx)
  _x_x1594 = kk_string_dup(_s_x1595, _ctx); /*string*/
  kk_string_t _x_x1596;
  kk_define_string_literal(, _s_x1597, 13, "std/test/test", _ctx)
  _x_x1596 = kk_string_dup(_s_x1597, _ctx); /*string*/
  _x_x1581 = kk_std_test_test_expect_result(kk_integer_box(kk_integer_from_small(2), _ctx), kk_std_test_test__new_mlift_test_tests_10249_fun1582(res, _ctx), _x_x1584, _x_x1588, kk_std_test_test__new_mlift_test_tests_10249_fun1591(_ctx), kk_std_test_test__new_mlift_test_tests_10249_fun1592(_ctx), _x_x1594, _x_x1596, _ctx); /*1369*/
  x_10386 = kk_integer_unbox(_x_x1581, _ctx); /*int*/
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_10386, _ctx);
    kk_box_t _x_x1598 = kk_std_core_hnd_yield_extend(kk_std_test_test__new_mlift_test_tests_10249_fun1599(_ctx), _ctx); /*2978*/
    kk_unit_unbox(_x_x1598); return kk_Unit;
  }
  {
    kk_std_test_test__mlift_test_tests_10248(x_10386, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_test_test__mlift_test_tests_10250_fun1603__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_test_test__mlift_test_tests_10250_fun1603(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test_tests_10250_fun1603(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test__mlift_test_tests_10250_fun1603, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_test_test__mlift_test_tests_10250_fun1606__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_test_test__mlift_test_tests_10250_fun1606(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test_tests_10250_fun1606(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test__mlift_test_tests_10250_fun1606, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_test_test__mlift_test_tests_10250_fun1607__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_test_test__mlift_test_tests_10250_fun1607(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test_tests_10250_fun1607(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test__mlift_test_tests_10250_fun1607, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_test_test__mlift_test_tests_10250_fun1609__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_test__mlift_test_tests_10250_fun1609(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test_tests_10250_fun1609(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test__mlift_test_tests_10250_fun1609, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_test__mlift_test_tests_10250_fun1609(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_integer_box(kk_integer_from_small(2), _ctx);
}


// lift anonymous function
struct kk_std_test_test__mlift_test_tests_10250_fun1617__t {
  struct kk_function_s _base;
};
static bool kk_std_test_test__mlift_test_tests_10250_fun1617(kk_function_t _fself, kk_box_t _b_x750, kk_box_t _b_x751, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test_tests_10250_fun1617(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test__mlift_test_tests_10250_fun1617, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_test_test__mlift_test_tests_10250_fun1617(kk_function_t _fself, kk_box_t _b_x750, kk_box_t _b_x751, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _brw_x848 = kk_integer_unbox(_b_x750, _ctx); /*int*/;
  kk_integer_t _brw_x847 = kk_integer_unbox(_b_x751, _ctx); /*int*/;
  bool _brw_x849 = kk_integer_eq_borrow(_brw_x848,_brw_x847,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x848, _ctx);
  kk_integer_drop(_brw_x847, _ctx);
  return _brw_x849;
}


// lift anonymous function
struct kk_std_test_test__mlift_test_tests_10250_fun1618__t {
  struct kk_function_s _base;
};
static kk_string_t kk_std_test_test__mlift_test_tests_10250_fun1618(kk_function_t _fself, kk_box_t _b_x752, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test_tests_10250_fun1618(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test__mlift_test_tests_10250_fun1618, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_std_test_test__mlift_test_tests_10250_fun1618(kk_function_t _fself, kk_box_t _b_x752, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x1619 = kk_integer_unbox(_b_x752, _ctx); /*int*/
  return kk_std_core_int_show(_x_x1619, _ctx);
}


// lift anonymous function
struct kk_std_test_test__mlift_test_tests_10250_fun1625__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_test__mlift_test_tests_10250_fun1625(kk_function_t _fself, kk_box_t _b_x764, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test_tests_10250_fun1625(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test__mlift_test_tests_10250_fun1625, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_test__mlift_test_tests_10250_fun1625(kk_function_t _fself, kk_box_t _b_x764, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_box_drop(_b_x764, _ctx);
  return kk_unit_box(kk_Unit);
}
static kk_unit_t kk_std_test_test__mlift_test_tests_10250_fun1607(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t x_0_10390;
  kk_box_t _x_x1608;
  kk_std_core_types__optional _x_x1610;
  kk_box_t _x_x1611;
  kk_string_t _x_x1612;
  kk_std_core_types__optional _match_x851 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x851, _ctx)) {
    kk_box_t _box_x738 = _match_x851._cons._Optional.value;
    kk_string_t _uniq_details_1872_1 = kk_string_unbox(_box_x738);
    kk_string_dup(_uniq_details_1872_1, _ctx);
    kk_std_core_types__optional_drop(_match_x851, _ctx);
    _x_x1612 = _uniq_details_1872_1; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x851, _ctx);
    _x_x1612 = kk_string_empty(); /*string*/
  }
  _x_x1611 = kk_string_box(_x_x1612); /*0*/
  _x_x1610 = kk_std_core_types__new_Optional(_x_x1611, _ctx); /*? 0*/
  kk_std_core_types__optional _x_x1614;
  kk_box_t _x_x1615;
  bool _x_x1616;
  kk_std_core_types__optional _match_x850 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x850, _ctx)) {
    kk_box_t _box_x740 = _match_x850._cons._Optional.value;
    bool _uniq_continue_on_error_1876_1 = kk_bool_unbox(_box_x740);
    kk_std_core_types__optional_drop(_match_x850, _ctx);
    _x_x1616 = _uniq_continue_on_error_1876_1; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x850, _ctx);
    _x_x1616 = false; /*bool*/
  }
  _x_x1615 = kk_bool_box(_x_x1616); /*0*/
  _x_x1614 = kk_std_core_types__new_Optional(_x_x1615, _ctx); /*? 0*/
  kk_string_t _x_x1620;
  kk_define_string_literal(, _s_x1621, 3, "168", _ctx)
  _x_x1620 = kk_string_dup(_s_x1621, _ctx); /*string*/
  kk_string_t _x_x1622;
  kk_define_string_literal(, _s_x1623, 13, "std/test/test", _ctx)
  _x_x1622 = kk_string_dup(_s_x1623, _ctx); /*string*/
  _x_x1608 = kk_std_test_test_expect_result(kk_integer_box(kk_integer_from_small(1), _ctx), kk_std_test_test__new_mlift_test_tests_10250_fun1609(_ctx), _x_x1610, _x_x1614, kk_std_test_test__new_mlift_test_tests_10250_fun1617(_ctx), kk_std_test_test__new_mlift_test_tests_10250_fun1618(_ctx), _x_x1620, _x_x1622, _ctx); /*1369*/
  x_0_10390 = kk_integer_unbox(_x_x1608, _ctx); /*int*/
  kk_integer_drop(x_0_10390, _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1624 = kk_std_core_hnd_yield_extend(kk_std_test_test__new_mlift_test_tests_10250_fun1625(_ctx), _ctx); /*2978*/
    kk_unit_unbox(_x_x1624); return kk_Unit;
  }
  {
    kk_Unit; return kk_Unit;
  }
}
static kk_unit_t kk_std_test_test__mlift_test_tests_10250_fun1606(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x1626;
  kk_define_string_literal(, _s_x1627, 13, "std/test/test", _ctx)
  _x_x1626 = kk_string_dup(_s_x1627, _ctx); /*string*/
  kk_string_t _x_x1628;
  kk_define_string_literal(, _s_x1629, 3, "167", _ctx)
  _x_x1628 = kk_string_dup(_s_x1629, _ctx); /*string*/
  kk_std_test_test_test__(kk_std_test_test__new_mlift_test_tests_10250_fun1607(_ctx), _x_x1626, _x_x1628, _ctx); return kk_Unit;
}


// lift anonymous function
struct kk_std_test_test__mlift_test_tests_10250_fun1635__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_test__mlift_test_tests_10250_fun1635(kk_function_t _fself, kk_box_t _b_x768, kk_context_t* _ctx);
static kk_function_t kk_std_test_test__new_mlift_test_tests_10250_fun1635(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test__mlift_test_tests_10250_fun1635, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_test__mlift_test_tests_10250_fun1635(kk_function_t _fself, kk_box_t _b_x768, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t wild___2_0_0_770 = kk_Unit;
  kk_unit_unbox(_b_x768);
  kk_unit_t _x_x1636 = kk_Unit;
  kk_std_test_test__mlift_test_tests_10246(wild___2_0_0_770, _ctx);
  return kk_unit_box(_x_x1636);
}
static kk_unit_t kk_std_test_test__mlift_test_tests_10250_fun1603(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t x_10388 = kk_Unit;
  kk_string_t _x_x1604;
  kk_define_string_literal(, _s_x1605, 12, "Wrong expect", _ctx)
  _x_x1604 = kk_string_dup(_s_x1605, _ctx); /*string*/
  kk_string_t _x_x1630;
  kk_define_string_literal(, _s_x1631, 13, "std/test/test", _ctx)
  _x_x1630 = kk_string_dup(_s_x1631, _ctx); /*string*/
  kk_string_t _x_x1632;
  kk_define_string_literal(, _s_x1633, 3, "167", _ctx)
  _x_x1632 = kk_string_dup(_s_x1633, _ctx); /*string*/
  kk_std_test_test_istest_fs_scope(_x_x1604, true, kk_std_test_test__new_mlift_test_tests_10250_fun1606(_ctx), _x_x1630, _x_x1632, _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1634 = kk_std_core_hnd_yield_extend(kk_std_test_test__new_mlift_test_tests_10250_fun1635(_ctx), _ctx); /*2978*/
    kk_unit_unbox(_x_x1634); return kk_Unit;
  }
  {
    kk_std_test_test__mlift_test_tests_10246(x_10388, _ctx); return kk_Unit;
  }
}

kk_unit_t kk_std_test_test__mlift_test_tests_10250(kk_unit_t wild___1_0, kk_context_t* _ctx) { /* forall<e> (wild_@1@0 : ()) -> <console/console,div,exn|e> () */ 
  kk_string_t _x_x1601;
  kk_define_string_literal(, _s_x1602, 5, "Other", _ctx)
  _x_x1601 = kk_string_dup(_s_x1602, _ctx); /*string*/
  kk_string_t _x_x1637;
  kk_define_string_literal(, _s_x1638, 13, "std/test/test", _ctx)
  _x_x1637 = kk_string_dup(_s_x1638, _ctx); /*string*/
  kk_string_t _x_x1639;
  kk_define_string_literal(, _s_x1640, 3, "166", _ctx)
  _x_x1639 = kk_string_dup(_s_x1640, _ctx); /*string*/
  kk_std_test_test_group(_x_x1601, kk_std_test_test__new_mlift_test_tests_10250_fun1603(_ctx), kk_std_core_types__new_None(_ctx), _x_x1637, _x_x1639, _ctx); return kk_Unit;
}
 
// Some simple examples


// lift anonymous function
struct kk_std_test_test_test_tests_fun1643__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_test_test_test_tests_fun1643(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_test_tests_fun1643(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test_test_tests_fun1643, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_test_test_test_tests_fun1647__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_test_test_test_tests_fun1647(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_test_tests_fun1647(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test_test_tests_fun1647, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_test_test_test_tests_fun1650__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_test_test_test_tests_fun1650(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_test_tests_fun1650(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test_test_tests_fun1650, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_test_test_test_tests_fun1651__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_test_test_test_tests_fun1651(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_test_tests_fun1651(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test_test_tests_fun1651, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_test_test_test_tests_fun1653__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_test_test_tests_fun1653(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_test_tests_fun1653(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test_test_tests_fun1653, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_test_test_tests_fun1653(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_integer_box(kk_integer_from_small(2), _ctx);
}


// lift anonymous function
struct kk_std_test_test_test_tests_fun1654__t {
  struct kk_function_s _base;
};
static bool kk_std_test_test_test_tests_fun1654(kk_function_t _fself, kk_box_t _b_x780, kk_box_t _b_x781, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_test_tests_fun1654(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test_test_tests_fun1654, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_test_test_test_tests_fun1654(kk_function_t _fself, kk_box_t _b_x780, kk_box_t _b_x781, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _brw_x842 = kk_integer_unbox(_b_x780, _ctx); /*int*/;
  kk_integer_t _brw_x841 = kk_integer_unbox(_b_x781, _ctx); /*int*/;
  bool _brw_x843 = kk_integer_eq_borrow(_brw_x842,_brw_x841,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x842, _ctx);
  kk_integer_drop(_brw_x841, _ctx);
  return _brw_x843;
}


// lift anonymous function
struct kk_std_test_test_test_tests_fun1655__t {
  struct kk_function_s _base;
};
static kk_string_t kk_std_test_test_test_tests_fun1655(kk_function_t _fself, kk_box_t _b_x782, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_test_tests_fun1655(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test_test_tests_fun1655, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_std_test_test_test_tests_fun1655(kk_function_t _fself, kk_box_t _b_x782, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x1656 = kk_integer_unbox(_b_x782, _ctx); /*int*/
  return kk_std_core_int_show(_x_x1656, _ctx);
}


// lift anonymous function
struct kk_std_test_test_test_tests_fun1662__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_test_test_tests_fun1662(kk_function_t _fself, kk_box_t _b_x792, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_test_tests_fun1662(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test_test_tests_fun1662, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_test_test_tests_fun1662(kk_function_t _fself, kk_box_t _b_x792, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x1663 = kk_Unit;
  kk_integer_t _x_x1664 = kk_integer_unbox(_b_x792, _ctx); /*int*/
  kk_std_test_test__mlift_test_tests_10249(_x_x1664, _ctx);
  return kk_unit_box(_x_x1663);
}
static kk_unit_t kk_std_test_test_test_tests_fun1651(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t x_0_10396;
  kk_box_t _x_x1652;
  kk_string_t _x_x1657;
  kk_define_string_literal(, _s_x1658, 3, "159", _ctx)
  _x_x1657 = kk_string_dup(_s_x1658, _ctx); /*string*/
  kk_string_t _x_x1659;
  kk_define_string_literal(, _s_x1660, 13, "std/test/test", _ctx)
  _x_x1659 = kk_string_dup(_s_x1660, _ctx); /*string*/
  _x_x1652 = kk_std_test_test_expect_result(kk_integer_box(kk_integer_from_small(1), _ctx), kk_std_test_test_new_test_tests_fun1653(_ctx), kk_std_core_types__new_None(_ctx), kk_std_core_types__new_None(_ctx), kk_std_test_test_new_test_tests_fun1654(_ctx), kk_std_test_test_new_test_tests_fun1655(_ctx), _x_x1657, _x_x1659, _ctx); /*1369*/
  x_0_10396 = kk_integer_unbox(_x_x1652, _ctx); /*int*/
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_0_10396, _ctx);
    kk_box_t _x_x1661 = kk_std_core_hnd_yield_extend(kk_std_test_test_new_test_tests_fun1662(_ctx), _ctx); /*2978*/
    kk_unit_unbox(_x_x1661); return kk_Unit;
  }
  {
    kk_std_test_test__mlift_test_tests_10249(x_0_10396, _ctx); return kk_Unit;
  }
}
static kk_unit_t kk_std_test_test_test_tests_fun1650(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x1665;
  kk_define_string_literal(, _s_x1666, 13, "std/test/test", _ctx)
  _x_x1665 = kk_string_dup(_s_x1666, _ctx); /*string*/
  kk_string_t _x_x1667;
  kk_define_string_literal(, _s_x1668, 3, "158", _ctx)
  _x_x1667 = kk_string_dup(_s_x1668, _ctx); /*string*/
  kk_std_test_test_test__(kk_std_test_test_new_test_tests_fun1651(_ctx), _x_x1665, _x_x1667, _ctx); return kk_Unit;
}
static kk_unit_t kk_std_test_test_test_tests_fun1647(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x1648;
  kk_define_string_literal(, _s_x1649, 22, "Returns continue tests", _ctx)
  _x_x1648 = kk_string_dup(_s_x1649, _ctx); /*string*/
  kk_string_t _x_x1669;
  kk_define_string_literal(, _s_x1670, 13, "std/test/test", _ctx)
  _x_x1669 = kk_string_dup(_s_x1670, _ctx); /*string*/
  kk_string_t _x_x1671;
  kk_define_string_literal(, _s_x1672, 3, "158", _ctx)
  _x_x1671 = kk_string_dup(_s_x1672, _ctx); /*string*/
  kk_std_test_test_istest_fs_scope(_x_x1648, true, kk_std_test_test_new_test_tests_fun1650(_ctx), _x_x1669, _x_x1671, _ctx); return kk_Unit;
}
static kk_unit_t kk_std_test_test_test_tests_fun1643(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x1644;
  kk_define_string_literal(, _s_x1645, 10, "A subgroup", _ctx)
  _x_x1644 = kk_string_dup(_s_x1645, _ctx); /*string*/
  bool _x_x1646;
  kk_std_core_types__optional _match_x844 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x844, _ctx)) {
    kk_box_t _box_x771 = _match_x844._cons._Optional.value;
    bool _uniq_is_test_3609 = kk_bool_unbox(_box_x771);
    kk_std_core_types__optional_drop(_match_x844, _ctx);
    _x_x1646 = _uniq_is_test_3609; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x844, _ctx);
    _x_x1646 = false; /*bool*/
  }
  kk_string_t _x_x1673;
  kk_define_string_literal(, _s_x1674, 13, "std/test/test", _ctx)
  _x_x1673 = kk_string_dup(_s_x1674, _ctx); /*string*/
  kk_string_t _x_x1675;
  kk_define_string_literal(, _s_x1676, 3, "157", _ctx)
  _x_x1675 = kk_string_dup(_s_x1676, _ctx); /*string*/
  kk_std_test_test_istest_fs_scope(_x_x1644, _x_x1646, kk_std_test_test_new_test_tests_fun1647(_ctx), _x_x1673, _x_x1675, _ctx); return kk_Unit;
}


// lift anonymous function
struct kk_std_test_test_test_tests_fun1682__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_test_test_tests_fun1682(kk_function_t _fself, kk_box_t _b_x796, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_test_tests_fun1682(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test_test_tests_fun1682, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_test_test_tests_fun1682(kk_function_t _fself, kk_box_t _b_x796, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t wild___1_0_830 = kk_Unit;
  kk_unit_unbox(_b_x796);
  kk_unit_t _x_x1683 = kk_Unit;
  kk_std_test_test__mlift_test_tests_10250(wild___1_0_830, _ctx);
  return kk_unit_box(_x_x1683);
}


// lift anonymous function
struct kk_std_test_test_test_tests_fun1686__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_test_test_test_tests_fun1686(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_test_tests_fun1686(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test_test_tests_fun1686, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_test_test_test_tests_fun1689__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_test_test_test_tests_fun1689(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_test_tests_fun1689(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test_test_tests_fun1689, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_test_test_test_tests_fun1690__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_std_test_test_test_tests_fun1690(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_test_tests_fun1690(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test_test_tests_fun1690, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_test_test_test_tests_fun1692__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_test_test_tests_fun1692(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_test_tests_fun1692(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test_test_tests_fun1692, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_test_test_tests_fun1692(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_integer_box(kk_integer_from_small(2), _ctx);
}


// lift anonymous function
struct kk_std_test_test_test_tests_fun1700__t {
  struct kk_function_s _base;
};
static bool kk_std_test_test_test_tests_fun1700(kk_function_t _fself, kk_box_t _b_x809, kk_box_t _b_x810, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_test_tests_fun1700(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test_test_tests_fun1700, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_test_test_test_tests_fun1700(kk_function_t _fself, kk_box_t _b_x809, kk_box_t _b_x810, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _brw_x836 = kk_integer_unbox(_b_x809, _ctx); /*int*/;
  kk_integer_t _brw_x835 = kk_integer_unbox(_b_x810, _ctx); /*int*/;
  bool _brw_x837 = kk_integer_eq_borrow(_brw_x836,_brw_x835,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x836, _ctx);
  kk_integer_drop(_brw_x835, _ctx);
  return _brw_x837;
}


// lift anonymous function
struct kk_std_test_test_test_tests_fun1701__t {
  struct kk_function_s _base;
};
static kk_string_t kk_std_test_test_test_tests_fun1701(kk_function_t _fself, kk_box_t _b_x811, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_test_tests_fun1701(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test_test_tests_fun1701, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_std_test_test_test_tests_fun1701(kk_function_t _fself, kk_box_t _b_x811, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x1702 = kk_integer_unbox(_b_x811, _ctx); /*int*/
  return kk_std_core_int_show(_x_x1702, _ctx);
}


// lift anonymous function
struct kk_std_test_test_test_tests_fun1708__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_test_test_tests_fun1708(kk_function_t _fself, kk_box_t _b_x823, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_test_tests_fun1708(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test_test_tests_fun1708, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_test_test_tests_fun1708(kk_function_t _fself, kk_box_t _b_x823, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_box_drop(_b_x823, _ctx);
  return kk_unit_box(kk_Unit);
}
static kk_unit_t kk_std_test_test_test_tests_fun1690(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t x_2_10400;
  kk_box_t _x_x1691;
  kk_std_core_types__optional _x_x1693;
  kk_box_t _x_x1694;
  kk_string_t _x_x1695;
  kk_std_core_types__optional _match_x839 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x839, _ctx)) {
    kk_box_t _box_x797 = _match_x839._cons._Optional.value;
    kk_string_t _uniq_details_1872_1 = kk_string_unbox(_box_x797);
    kk_string_dup(_uniq_details_1872_1, _ctx);
    kk_std_core_types__optional_drop(_match_x839, _ctx);
    _x_x1695 = _uniq_details_1872_1; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x839, _ctx);
    _x_x1695 = kk_string_empty(); /*string*/
  }
  _x_x1694 = kk_string_box(_x_x1695); /*0*/
  _x_x1693 = kk_std_core_types__new_Optional(_x_x1694, _ctx); /*? 0*/
  kk_std_core_types__optional _x_x1697;
  kk_box_t _x_x1698;
  bool _x_x1699;
  kk_std_core_types__optional _match_x838 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x838, _ctx)) {
    kk_box_t _box_x799 = _match_x838._cons._Optional.value;
    bool _uniq_continue_on_error_1876_1 = kk_bool_unbox(_box_x799);
    kk_std_core_types__optional_drop(_match_x838, _ctx);
    _x_x1699 = _uniq_continue_on_error_1876_1; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x838, _ctx);
    _x_x1699 = false; /*bool*/
  }
  _x_x1698 = kk_bool_box(_x_x1699); /*0*/
  _x_x1697 = kk_std_core_types__new_Optional(_x_x1698, _ctx); /*? 0*/
  kk_string_t _x_x1703;
  kk_define_string_literal(, _s_x1704, 3, "168", _ctx)
  _x_x1703 = kk_string_dup(_s_x1704, _ctx); /*string*/
  kk_string_t _x_x1705;
  kk_define_string_literal(, _s_x1706, 13, "std/test/test", _ctx)
  _x_x1705 = kk_string_dup(_s_x1706, _ctx); /*string*/
  _x_x1691 = kk_std_test_test_expect_result(kk_integer_box(kk_integer_from_small(1), _ctx), kk_std_test_test_new_test_tests_fun1692(_ctx), _x_x1693, _x_x1697, kk_std_test_test_new_test_tests_fun1700(_ctx), kk_std_test_test_new_test_tests_fun1701(_ctx), _x_x1703, _x_x1705, _ctx); /*1369*/
  x_2_10400 = kk_integer_unbox(_x_x1691, _ctx); /*int*/
  kk_integer_drop(x_2_10400, _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1707 = kk_std_core_hnd_yield_extend(kk_std_test_test_new_test_tests_fun1708(_ctx), _ctx); /*2978*/
    kk_unit_unbox(_x_x1707); return kk_Unit;
  }
  {
    kk_Unit; return kk_Unit;
  }
}
static kk_unit_t kk_std_test_test_test_tests_fun1689(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x1709;
  kk_define_string_literal(, _s_x1710, 13, "std/test/test", _ctx)
  _x_x1709 = kk_string_dup(_s_x1710, _ctx); /*string*/
  kk_string_t _x_x1711;
  kk_define_string_literal(, _s_x1712, 3, "167", _ctx)
  _x_x1711 = kk_string_dup(_s_x1712, _ctx); /*string*/
  kk_std_test_test_test__(kk_std_test_test_new_test_tests_fun1690(_ctx), _x_x1709, _x_x1711, _ctx); return kk_Unit;
}


// lift anonymous function
struct kk_std_test_test_test_tests_fun1718__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_test_test_test_tests_fun1718(kk_function_t _fself, kk_box_t _b_x827, kk_context_t* _ctx);
static kk_function_t kk_std_test_test_new_test_tests_fun1718(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_test_test_test_tests_fun1718, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_test_test_test_tests_fun1718(kk_function_t _fself, kk_box_t _b_x827, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t wild___2_0_0_831 = kk_Unit;
  kk_unit_unbox(_b_x827);
  kk_unit_t _x_x1719 = kk_Unit;
  kk_std_test_test__mlift_test_tests_10246(wild___2_0_0_831, _ctx);
  return kk_unit_box(_x_x1719);
}
static kk_unit_t kk_std_test_test_test_tests_fun1686(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t x_1_10398 = kk_Unit;
  kk_string_t _x_x1687;
  kk_define_string_literal(, _s_x1688, 12, "Wrong expect", _ctx)
  _x_x1687 = kk_string_dup(_s_x1688, _ctx); /*string*/
  kk_string_t _x_x1713;
  kk_define_string_literal(, _s_x1714, 13, "std/test/test", _ctx)
  _x_x1713 = kk_string_dup(_s_x1714, _ctx); /*string*/
  kk_string_t _x_x1715;
  kk_define_string_literal(, _s_x1716, 3, "167", _ctx)
  _x_x1715 = kk_string_dup(_s_x1716, _ctx); /*string*/
  kk_std_test_test_istest_fs_scope(_x_x1687, true, kk_std_test_test_new_test_tests_fun1689(_ctx), _x_x1713, _x_x1715, _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1717 = kk_std_core_hnd_yield_extend(kk_std_test_test_new_test_tests_fun1718(_ctx), _ctx); /*2978*/
    kk_unit_unbox(_x_x1717); return kk_Unit;
  }
  {
    kk_std_test_test__mlift_test_tests_10246(x_1_10398, _ctx); return kk_Unit;
  }
}

kk_unit_t kk_std_test_test_test_tests(kk_context_t* _ctx) { /* forall<e> () -> <console/console,pure|e> () */ 
  kk_unit_t x_10393 = kk_Unit;
  kk_string_t _x_x1641;
  kk_define_string_literal(, _s_x1642, 6, "Basics", _ctx)
  _x_x1641 = kk_string_dup(_s_x1642, _ctx); /*string*/
  kk_string_t _x_x1677;
  kk_define_string_literal(, _s_x1678, 13, "std/test/test", _ctx)
  _x_x1677 = kk_string_dup(_s_x1678, _ctx); /*string*/
  kk_string_t _x_x1679;
  kk_define_string_literal(, _s_x1680, 3, "156", _ctx)
  _x_x1679 = kk_string_dup(_s_x1680, _ctx); /*string*/
  kk_std_test_test_group(_x_x1641, kk_std_test_test_new_test_tests_fun1643(_ctx), kk_std_core_types__new_None(_ctx), _x_x1677, _x_x1679, _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1681 = kk_std_core_hnd_yield_extend(kk_std_test_test_new_test_tests_fun1682(_ctx), _ctx); /*2978*/
    kk_unit_unbox(_x_x1681); return kk_Unit;
  }
  {
    kk_string_t _x_x1684;
    kk_define_string_literal(, _s_x1685, 5, "Other", _ctx)
    _x_x1684 = kk_string_dup(_s_x1685, _ctx); /*string*/
    kk_string_t _x_x1720;
    kk_define_string_literal(, _s_x1721, 13, "std/test/test", _ctx)
    _x_x1720 = kk_string_dup(_s_x1721, _ctx); /*string*/
    kk_string_t _x_x1722;
    kk_define_string_literal(, _s_x1723, 3, "166", _ctx)
    _x_x1722 = kk_string_dup(_s_x1723, _ctx); /*string*/
    kk_std_test_test_group(_x_x1684, kk_std_test_test_new_test_tests_fun1686(_ctx), kk_std_core_types__new_None(_ctx), _x_x1720, _x_x1722, _ctx); return kk_Unit;
  }
}

// initialization
void kk_std_test_test__init(kk_context_t* _ctx){
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
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
  {
    kk_string_t _x_x1008;
    kk_define_string_literal(, _s_x1009, 9, "test@test", _ctx)
    _x_x1008 = kk_string_dup(_s_x1009, _ctx); /*string*/
    kk_std_test_test__tag_test = kk_std_core_hnd__new_Htag(_x_x1008, _ctx); /*hnd/htag<std/test/test/test>*/
  }
  {
    kk_string_t _x_x1014;
    kk_define_string_literal(, _s_x1015, 15, "test-scope@test", _ctx)
    _x_x1014 = kk_string_dup(_s_x1015, _ctx); /*string*/
    kk_std_test_test__tag_test_scope = kk_std_core_hnd__new_Htag(_x_x1014, _ctx); /*hnd/htag<std/test/test/test-scope>*/
  }
}

// termination
void kk_std_test_test__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_core_hnd__htag_drop(kk_std_test_test__tag_test_scope, _ctx);
  kk_std_core_hnd__htag_drop(kk_std_test_test__tag_test, _ctx);
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
