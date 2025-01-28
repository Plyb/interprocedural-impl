#pragma once
#ifndef kk_std_test_test_H
#define kk_std_test_test_H
// Koka generated module: std/test/test, koka version: 3.1.2, platform: 64-bit
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

// type declarations

// type std/test/test/expectation
struct kk_std_test_test__expectation_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_std_test_test__expectation;
struct kk_std_test_test_ExpectedValue {
  struct kk_std_test_test__expectation_s _base;
  kk_box_t a;
};
struct kk_std_test_test_ExpectedError {
  struct kk_std_test_test__expectation_s _base;
  kk_string_t str;
};
struct kk_std_test_test_ExpectedAssertion {
  struct kk_std_test_test__expectation_s _base;
  kk_string_t str;
};
static inline kk_std_test_test__expectation kk_std_test_test__base_ExpectedValue(struct kk_std_test_test_ExpectedValue* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_std_test_test__expectation kk_std_test_test__new_ExpectedValue(kk_reuse_t _at, int32_t _cpath, kk_box_t a, kk_context_t* _ctx) {
  struct kk_std_test_test_ExpectedValue* _con = kk_block_alloc_at_as(struct kk_std_test_test_ExpectedValue, _at, 1 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->a = a;
  return kk_std_test_test__base_ExpectedValue(_con, _ctx);
}
static inline struct kk_std_test_test_ExpectedValue* kk_std_test_test__as_ExpectedValue(kk_std_test_test__expectation x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_std_test_test_ExpectedValue*, x, (kk_tag_t)(1), _ctx);
}
static inline kk_std_test_test__expectation kk_std_test_test__base_ExpectedError(struct kk_std_test_test_ExpectedError* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_std_test_test__expectation kk_std_test_test__new_ExpectedError(kk_reuse_t _at, int32_t _cpath, kk_string_t str, kk_context_t* _ctx) {
  struct kk_std_test_test_ExpectedError* _con = kk_block_alloc_at_as(struct kk_std_test_test_ExpectedError, _at, 1 /* scan count */, _cpath, (kk_tag_t)(2), _ctx);
  _con->str = str;
  return kk_std_test_test__base_ExpectedError(_con, _ctx);
}
static inline struct kk_std_test_test_ExpectedError* kk_std_test_test__as_ExpectedError(kk_std_test_test__expectation x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_std_test_test_ExpectedError*, x, (kk_tag_t)(2), _ctx);
}
static inline kk_std_test_test__expectation kk_std_test_test__base_ExpectedAssertion(struct kk_std_test_test_ExpectedAssertion* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_std_test_test__expectation kk_std_test_test__new_ExpectedAssertion(kk_reuse_t _at, int32_t _cpath, kk_string_t str, kk_context_t* _ctx) {
  struct kk_std_test_test_ExpectedAssertion* _con = kk_block_alloc_at_as(struct kk_std_test_test_ExpectedAssertion, _at, 1 /* scan count */, _cpath, (kk_tag_t)(3), _ctx);
  _con->str = str;
  return kk_std_test_test__base_ExpectedAssertion(_con, _ctx);
}
static inline struct kk_std_test_test_ExpectedAssertion* kk_std_test_test__as_ExpectedAssertion(kk_std_test_test__expectation x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_std_test_test_ExpectedAssertion*, x, (kk_tag_t)(3), _ctx);
}
static inline bool kk_std_test_test__is_ExpectedValue(kk_std_test_test__expectation x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(1), _ctx));
}
static inline bool kk_std_test_test__is_ExpectedError(kk_std_test_test__expectation x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(2), _ctx));
}
static inline bool kk_std_test_test__is_ExpectedAssertion(kk_std_test_test__expectation x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(3), _ctx));
}
static inline kk_std_test_test__expectation kk_std_test_test__expectation_dup(kk_std_test_test__expectation _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_std_test_test__expectation_drop(kk_std_test_test__expectation _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_std_test_test__expectation_box(kk_std_test_test__expectation _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_std_test_test__expectation kk_std_test_test__expectation_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// type std/test/test/expect-value
struct kk_std_test_test__expect_value_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_std_test_test__expect_value;
struct kk_std_test_test_Expect_value {
  struct kk_std_test_test__expect_value_s _base;
  kk_std_core_exn__error run_value;
  kk_std_test_test__expectation expectation;
  kk_std_core_types__maybe details;
  kk_string_t location;
  kk_function_t eq;
  kk_function_t show;
  bool continue_on_error;
};
static inline kk_std_test_test__expect_value kk_std_test_test__base_Expect_value(struct kk_std_test_test_Expect_value* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_std_test_test__expect_value kk_std_test_test__new_Expect_value(kk_reuse_t _at, int32_t _cpath, kk_std_core_exn__error run_value, kk_std_test_test__expectation expectation, kk_std_core_types__maybe details, bool continue_on_error, kk_string_t location, kk_function_t eq, kk_function_t show, kk_context_t* _ctx) {
  struct kk_std_test_test_Expect_value* _con = kk_block_alloc_at_as(struct kk_std_test_test_Expect_value, _at, 9 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->run_value = run_value;
  _con->expectation = expectation;
  _con->details = details;
  _con->location = location;
  _con->eq = eq;
  _con->show = show;
  _con->continue_on_error = continue_on_error;
  return kk_std_test_test__base_Expect_value(_con, _ctx);
}
static inline struct kk_std_test_test_Expect_value* kk_std_test_test__as_Expect_value(kk_std_test_test__expect_value x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_std_test_test_Expect_value*, x, (kk_tag_t)(1), _ctx);
}
static inline bool kk_std_test_test__is_Expect_value(kk_std_test_test__expect_value x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_std_test_test__expect_value kk_std_test_test__expect_value_dup(kk_std_test_test__expect_value _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_std_test_test__expect_value_drop(kk_std_test_test__expect_value _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_std_test_test__expect_value_box(kk_std_test_test__expect_value _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_std_test_test__expect_value kk_std_test_test__expect_value_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// type std/test/test/test
struct kk_std_test_test__test_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_std_test_test__test;
struct kk_std_test_test__Hnd_test {
  struct kk_std_test_test__test_s _base;
  kk_integer_t _cfc;
  kk_std_core_hnd__clause1 _ctl_test_expect;
};
static inline kk_std_test_test__test kk_std_test_test__base_Hnd_test(struct kk_std_test_test__Hnd_test* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_std_test_test__test kk_std_test_test__new_Hnd_test(kk_reuse_t _at, int32_t _cpath, kk_integer_t _cfc, kk_std_core_hnd__clause1 _ctl_test_expect, kk_context_t* _ctx) {
  struct kk_std_test_test__Hnd_test* _con = kk_block_alloc_at_as(struct kk_std_test_test__Hnd_test, _at, 2 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->_cfc = _cfc;
  _con->_ctl_test_expect = _ctl_test_expect;
  return kk_std_test_test__base_Hnd_test(_con, _ctx);
}
static inline struct kk_std_test_test__Hnd_test* kk_std_test_test__as_Hnd_test(kk_std_test_test__test x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_std_test_test__Hnd_test*, x, (kk_tag_t)(1), _ctx);
}
static inline bool kk_std_test_test__is_Hnd_test(kk_std_test_test__test x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_std_test_test__test kk_std_test_test__test_dup(kk_std_test_test__test _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_std_test_test__test_drop(kk_std_test_test__test _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_std_test_test__test_box(kk_std_test_test__test _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_std_test_test__test kk_std_test_test__test_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// type std/test/test/test-scope
struct kk_std_test_test__test_scope_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_std_test_test__test_scope;
struct kk_std_test_test__Hnd_test_scope {
  struct kk_std_test_test__test_scope_s _base;
  kk_integer_t _cfc;
  kk_std_core_hnd__clause0 _val_indentation;
  kk_std_core_hnd__clause0 _val_scope_name;
  kk_std_core_hnd__clause0 _fun_report_fail;
};
static inline kk_std_test_test__test_scope kk_std_test_test__base_Hnd_test_scope(struct kk_std_test_test__Hnd_test_scope* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_std_test_test__test_scope kk_std_test_test__new_Hnd_test_scope(kk_reuse_t _at, int32_t _cpath, kk_integer_t _cfc, kk_std_core_hnd__clause0 _val_indentation, kk_std_core_hnd__clause0 _val_scope_name, kk_std_core_hnd__clause0 _fun_report_fail, kk_context_t* _ctx) {
  struct kk_std_test_test__Hnd_test_scope* _con = kk_block_alloc_at_as(struct kk_std_test_test__Hnd_test_scope, _at, 4 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->_cfc = _cfc;
  _con->_val_indentation = _val_indentation;
  _con->_val_scope_name = _val_scope_name;
  _con->_fun_report_fail = _fun_report_fail;
  return kk_std_test_test__base_Hnd_test_scope(_con, _ctx);
}
static inline struct kk_std_test_test__Hnd_test_scope* kk_std_test_test__as_Hnd_test_scope(kk_std_test_test__test_scope x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_std_test_test__Hnd_test_scope*, x, (kk_tag_t)(1), _ctx);
}
static inline bool kk_std_test_test__is_Hnd_test_scope(kk_std_test_test__test_scope x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_std_test_test__test_scope kk_std_test_test__test_scope_dup(kk_std_test_test__test_scope _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_std_test_test__test_scope_drop(kk_std_test_test__test_scope _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_std_test_test__test_scope_box(kk_std_test_test__test_scope _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_std_test_test__test_scope kk_std_test_test__test_scope_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// value declarations
 
// Automatically generated. Tests for the `ExpectedValue` constructor of the `:expectation` type.

static inline bool kk_std_test_test_is_expectedValue(kk_std_test_test__expectation expectation, kk_context_t* _ctx) { /* forall<a> (expectation : expectation<a>) -> bool */ 
  if (kk_std_test_test__is_ExpectedValue(expectation, _ctx)) {
    struct kk_std_test_test_ExpectedValue* _con_x933 = kk_std_test_test__as_ExpectedValue(expectation, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `ExpectedError` constructor of the `:expectation` type.

static inline bool kk_std_test_test_is_expectedError(kk_std_test_test__expectation expectation, kk_context_t* _ctx) { /* forall<a> (expectation : expectation<a>) -> bool */ 
  if (kk_std_test_test__is_ExpectedError(expectation, _ctx)) {
    struct kk_std_test_test_ExpectedError* _con_x934 = kk_std_test_test__as_ExpectedError(expectation, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `ExpectedAssertion` constructor of the `:expectation` type.

static inline bool kk_std_test_test_is_expectedAssertion(kk_std_test_test__expectation expectation, kk_context_t* _ctx) { /* forall<a> (expectation : expectation<a>) -> bool */ 
  if (kk_std_test_test__is_ExpectedAssertion(expectation, _ctx)) {
    struct kk_std_test_test_ExpectedAssertion* _con_x935 = kk_std_test_test__as_ExpectedAssertion(expectation, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Retrieves the `run-value` constructor field of the `:expect-value` type.

static inline kk_std_core_exn__error kk_std_test_test_expect_value_fs_run_value(kk_std_test_test__expect_value _this, kk_context_t* _ctx) { /* forall<a> (expect-value<a>) -> error<a> */ 
  {
    struct kk_std_test_test_Expect_value* _con_x936 = kk_std_test_test__as_Expect_value(_this, _ctx);
    kk_std_core_exn__error _x = _con_x936->run_value;
    return kk_std_core_exn__error_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `expectation` constructor field of the `:expect-value` type.

static inline kk_std_test_test__expectation kk_std_test_test_expect_value_fs_expectation(kk_std_test_test__expect_value _this, kk_context_t* _ctx) { /* forall<a> (expect-value<a>) -> expectation<a> */ 
  {
    struct kk_std_test_test_Expect_value* _con_x937 = kk_std_test_test__as_Expect_value(_this, _ctx);
    kk_std_test_test__expectation _x = _con_x937->expectation;
    return kk_std_test_test__expectation_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `details` constructor field of the `:expect-value` type.

static inline kk_std_core_types__maybe kk_std_test_test_expect_value_fs_details(kk_std_test_test__expect_value _this, kk_context_t* _ctx) { /* forall<a> (expect-value<a>) -> maybe<string> */ 
  {
    struct kk_std_test_test_Expect_value* _con_x938 = kk_std_test_test__as_Expect_value(_this, _ctx);
    kk_std_core_types__maybe _x = _con_x938->details;
    return kk_std_core_types__maybe_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `continue-on-error` constructor field of the `:expect-value` type.

static inline bool kk_std_test_test_expect_value_fs_continue_on_error(kk_std_test_test__expect_value _this, kk_context_t* _ctx) { /* forall<a> (expect-value<a>) -> bool */ 
  {
    struct kk_std_test_test_Expect_value* _con_x939 = kk_std_test_test__as_Expect_value(_this, _ctx);
    bool _x = _con_x939->continue_on_error;
    return _x;
  }
}
 
// Automatically generated. Retrieves the `location` constructor field of the `:expect-value` type.

static inline kk_string_t kk_std_test_test_expect_value_fs_location(kk_std_test_test__expect_value _this, kk_context_t* _ctx) { /* forall<a> (expect-value<a>) -> string */ 
  {
    struct kk_std_test_test_Expect_value* _con_x940 = kk_std_test_test__as_Expect_value(_this, _ctx);
    kk_string_t _x = _con_x940->location;
    return kk_string_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `eq` constructor field of the `:expect-value` type.

static inline kk_function_t kk_std_test_test_expect_value_fs_eq(kk_std_test_test__expect_value _this, kk_context_t* _ctx) { /* forall<a> (expect-value<a>) -> ((a, a) -> pure bool) */ 
  {
    struct kk_std_test_test_Expect_value* _con_x941 = kk_std_test_test__as_Expect_value(_this, _ctx);
    kk_function_t _x = _con_x941->eq;
    return kk_function_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `show` constructor field of the `:expect-value` type.

static inline kk_function_t kk_std_test_test_expect_value_fs_show(kk_std_test_test__expect_value _this, kk_context_t* _ctx) { /* forall<a> (expect-value<a>) -> ((a) -> pure string) */ 
  {
    struct kk_std_test_test_Expect_value* _con_x942 = kk_std_test_test__as_Expect_value(_this, _ctx);
    kk_function_t _x = _con_x942->show;
    return kk_function_dup(_x, _ctx);
  }
}

kk_std_test_test__expect_value kk_std_test_test_expect_value_fs__mlift_copy_10220(kk_function_t _c_x10088, kk_std_test_test__expect_value _this, kk_std_core_types__optional continue_on_error, kk_std_core_types__optional details, kk_std_core_types__optional expectation, kk_std_core_types__optional location, kk_std_core_types__optional run_value, kk_function_t _c_x10090, kk_context_t* _ctx); /* forall<a> ((a, a) -> pure bool, expect-value<a>, continue-on-error : ? bool, details : ? (maybe<string>), expectation : ? (expectation<a>), location : ? string, run-value : ? (error<a>), (a) -> pure string) -> expect-value<a> */ 

kk_std_test_test__expect_value kk_std_test_test_expect_value_fs__mlift_copy_10221(kk_std_test_test__expect_value _this, kk_std_core_types__optional continue_on_error, kk_std_core_types__optional details, kk_std_core_types__optional expectation, kk_std_core_types__optional location, kk_std_core_types__optional run_value, kk_std_core_types__optional show_0, kk_function_t _c_x10088, kk_context_t* _ctx); /* forall<a> (expect-value<a>, continue-on-error : ? bool, details : ? (maybe<string>), expectation : ? (expectation<a>), location : ? string, run-value : ? (error<a>), show@0 : ? ((a) -> pure string), (a, a) -> pure bool) -> expect-value<a> */ 

kk_std_test_test__expect_value kk_std_test_test_expect_value_fs__copy(kk_std_test_test__expect_value _this, kk_std_core_types__optional run_value, kk_std_core_types__optional expectation, kk_std_core_types__optional details, kk_std_core_types__optional continue_on_error, kk_std_core_types__optional location, kk_std_core_types__optional eq, kk_std_core_types__optional show_0, kk_context_t* _ctx); /* forall<a> (expect-value<a>, run-value : ? (error<a>), expectation : ? (expectation<a>), details : ? (maybe<string>), continue-on-error : ? bool, location : ? string, eq : ? ((a, a) -> pure bool), show : ? ((a) -> pure string)) -> expect-value<a> */ 
 
// Automatically generated. Retrieves the `@cfc` constructor field of the `:test` type.

static inline kk_integer_t kk_std_test_test_test_fs__cfc(kk_std_test_test__test test_0, kk_context_t* _ctx) { /* forall<e,a> (test : test<e,a>) -> int */ 
  {
    struct kk_std_test_test__Hnd_test* _con_x1002 = kk_std_test_test__as_Hnd_test(test_0, _ctx);
    kk_integer_t _x = _con_x1002->_cfc;
    return kk_integer_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@ctl-test-expect` constructor field of the `:test` type.

static inline kk_std_core_hnd__clause1 kk_std_test_test_test_fs__ctl_test_expect(kk_std_test_test__test test_0, kk_context_t* _ctx) { /* forall<e,a,b> (test : test<e,a>) -> hnd/clause1<expect-value<b>,b,test,e,a> */ 
  {
    struct kk_std_test_test__Hnd_test* _con_x1003 = kk_std_test_test__as_Hnd_test(test_0, _ctx);
    kk_std_core_hnd__clause1 _x = _con_x1003->_ctl_test_expect;
    return kk_std_core_hnd__clause1_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@cfc` constructor field of the `:test-scope` type.

static inline kk_integer_t kk_std_test_test_test_scope_fs__cfc(kk_std_test_test__test_scope _this, kk_context_t* _ctx) { /* forall<e,a> (test-scope<e,a>) -> int */ 
  {
    struct kk_std_test_test__Hnd_test_scope* _con_x1004 = kk_std_test_test__as_Hnd_test_scope(_this, _ctx);
    kk_integer_t _x = _con_x1004->_cfc;
    return kk_integer_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@val-indentation` constructor field of the `:test-scope` type.

static inline kk_std_core_hnd__clause0 kk_std_test_test_test_scope_fs__val_indentation(kk_std_test_test__test_scope _this, kk_context_t* _ctx) { /* forall<e,a> (test-scope<e,a>) -> hnd/clause0<string,test-scope,e,a> */ 
  {
    struct kk_std_test_test__Hnd_test_scope* _con_x1005 = kk_std_test_test__as_Hnd_test_scope(_this, _ctx);
    kk_std_core_hnd__clause0 _x = _con_x1005->_val_indentation;
    return kk_std_core_hnd__clause0_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@val-scope-name` constructor field of the `:test-scope` type.

static inline kk_std_core_hnd__clause0 kk_std_test_test_test_scope_fs__val_scope_name(kk_std_test_test__test_scope _this, kk_context_t* _ctx) { /* forall<e,a> (test-scope<e,a>) -> hnd/clause0<string,test-scope,e,a> */ 
  {
    struct kk_std_test_test__Hnd_test_scope* _con_x1006 = kk_std_test_test__as_Hnd_test_scope(_this, _ctx);
    kk_std_core_hnd__clause0 _x = _con_x1006->_val_scope_name;
    return kk_std_core_hnd__clause0_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-report-fail` constructor field of the `:test-scope` type.

static inline kk_std_core_hnd__clause0 kk_std_test_test_test_scope_fs__fun_report_fail(kk_std_test_test__test_scope _this, kk_context_t* _ctx) { /* forall<e,a> (test-scope<e,a>) -> hnd/clause0<(),test-scope,e,a> */ 
  {
    struct kk_std_test_test__Hnd_test_scope* _con_x1007 = kk_std_test_test__as_Hnd_test_scope(_this, _ctx);
    kk_std_core_hnd__clause0 _x = _con_x1007->_fun_report_fail;
    return kk_std_core_hnd__clause0_dup(_x, _ctx);
  }
}

extern kk_std_core_hnd__htag kk_std_test_test__tag_test;

kk_box_t kk_std_test_test__handle_test(kk_std_test_test__test hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (hnd : test<e,b>, ret : (res : a) -> e b, action : () -> <test|e> a) -> e b */ 
 
// select `test-expect` operation out of effect `:test`

static inline kk_std_core_hnd__clause1 kk_std_test_test__select_test_expect(kk_std_test_test__test hnd, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : test<e,b>) -> hnd/clause1<expect-value<a>,a,test,e,b> */ 
  {
    struct kk_std_test_test__Hnd_test* _con_x1011 = kk_std_test_test__as_Hnd_test(hnd, _ctx);
    kk_std_core_hnd__clause1 _ctl_test_expect = _con_x1011->_ctl_test_expect;
    return kk_std_core_hnd__clause1_dup(_ctl_test_expect, _ctx);
  }
}
 
// Call the `ctl test-expect` operation of the effect `:test`

static inline kk_box_t kk_std_test_test_test_expect(kk_std_test_test__expect_value v, kk_context_t* _ctx) { /* forall<a> (v : expect-value<a>) -> test a */ 
  kk_std_core_hnd__ev ev_10260 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/test/test/test>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x1012 = kk_std_core_hnd__as_Ev(ev_10260, _ctx);
    kk_box_t _box_x77 = _con_x1012->hnd;
    int32_t m = _con_x1012->marker;
    kk_std_test_test__test h = kk_std_test_test__test_unbox(_box_x77, KK_BORROWED, _ctx);
    kk_std_test_test__test_dup(h, _ctx);
    {
      struct kk_std_test_test__Hnd_test* _con_x1013 = kk_std_test_test__as_Hnd_test(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x1013->_cfc;
      kk_std_core_hnd__clause1 _ctl_test_expect = _con_x1013->_ctl_test_expect;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_ctl_test_expect, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x81 = _ctl_test_expect.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x81, (_fun_unbox_x81, m, ev_10260, kk_std_test_test__expect_value_box(v, _ctx), _ctx), _ctx);
      }
    }
  }
}

extern kk_std_core_hnd__htag kk_std_test_test__tag_test_scope;

kk_box_t kk_std_test_test__handle_test_scope(kk_std_test_test__test_scope hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (hnd : test-scope<e,b>, ret : (res : a) -> e b, action : () -> <test-scope|e> a) -> e b */ 
 
// select `@val-scope-name` operation out of effect `:test-scope`

static inline kk_std_core_hnd__clause0 kk_std_test_test__select_val_scope_name(kk_std_test_test__test_scope hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : test-scope<e,a>) -> hnd/clause0<string,test-scope,e,a> */ 
  {
    struct kk_std_test_test__Hnd_test_scope* _con_x1017 = kk_std_test_test__as_Hnd_test_scope(hnd, _ctx);
    kk_std_core_hnd__clause0 _val_scope_name_0 = _con_x1017->_val_scope_name;
    return kk_std_core_hnd__clause0_dup(_val_scope_name_0, _ctx);
  }
}
 
// Call the `val scope-name` operation of the effect `:test-scope`

static inline kk_string_t kk_std_test_test__val_scope_name(kk_context_t* _ctx) { /* () -> test-scope string */ 
  kk_std_core_hnd__ev ev_10264 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/test/test/test-scope>*/;
  kk_box_t _x_x1018;
  {
    struct kk_std_core_hnd_Ev* _con_x1019 = kk_std_core_hnd__as_Ev(ev_10264, _ctx);
    kk_box_t _box_x93 = _con_x1019->hnd;
    int32_t m = _con_x1019->marker;
    kk_std_test_test__test_scope h = kk_std_test_test__test_scope_unbox(_box_x93, KK_BORROWED, _ctx);
    kk_std_test_test__test_scope_dup(h, _ctx);
    {
      struct kk_std_test_test__Hnd_test_scope* _con_x1020 = kk_std_test_test__as_Hnd_test_scope(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x1020->_cfc;
      kk_std_core_hnd__clause0 _pat_1_0 = _con_x1020->_val_indentation;
      kk_std_core_hnd__clause0 _val_scope_name_0 = _con_x1020->_val_scope_name;
      kk_std_core_hnd__clause0 _pat_2_0 = _con_x1020->_fun_report_fail;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_0, _ctx);
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_val_scope_name_0, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x96 = _val_scope_name_0.clause;
        _x_x1018 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x96, (_fun_unbox_x96, m, ev_10264, _ctx), _ctx); /*35*/
      }
    }
  }
  return kk_string_unbox(_x_x1018);
}
 
// select `@val-indentation` operation out of effect `:test-scope`

static inline kk_std_core_hnd__clause0 kk_std_test_test__select_val_indentation(kk_std_test_test__test_scope hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : test-scope<e,a>) -> hnd/clause0<string,test-scope,e,a> */ 
  {
    struct kk_std_test_test__Hnd_test_scope* _con_x1021 = kk_std_test_test__as_Hnd_test_scope(hnd, _ctx);
    kk_std_core_hnd__clause0 _val_indentation_0 = _con_x1021->_val_indentation;
    return kk_std_core_hnd__clause0_dup(_val_indentation_0, _ctx);
  }
}
 
// Call the `val indentation` operation of the effect `:test-scope`

static inline kk_string_t kk_std_test_test__val_indentation(kk_context_t* _ctx) { /* () -> test-scope string */ 
  kk_std_core_hnd__ev ev_10266 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/test/test/test-scope>*/;
  kk_box_t _x_x1022;
  {
    struct kk_std_core_hnd_Ev* _con_x1023 = kk_std_core_hnd__as_Ev(ev_10266, _ctx);
    kk_box_t _box_x99 = _con_x1023->hnd;
    int32_t m = _con_x1023->marker;
    kk_std_test_test__test_scope h = kk_std_test_test__test_scope_unbox(_box_x99, KK_BORROWED, _ctx);
    kk_std_test_test__test_scope_dup(h, _ctx);
    {
      struct kk_std_test_test__Hnd_test_scope* _con_x1024 = kk_std_test_test__as_Hnd_test_scope(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x1024->_cfc;
      kk_std_core_hnd__clause0 _val_indentation_0 = _con_x1024->_val_indentation;
      kk_std_core_hnd__clause0 _pat_1_0 = _con_x1024->_val_scope_name;
      kk_std_core_hnd__clause0 _pat_2_0 = _con_x1024->_fun_report_fail;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_0, _ctx);
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_val_indentation_0, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x102 = _val_indentation_0.clause;
        _x_x1022 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x102, (_fun_unbox_x102, m, ev_10266, _ctx), _ctx); /*35*/
      }
    }
  }
  return kk_string_unbox(_x_x1022);
}
 
// select `report-fail` operation out of effect `:test-scope`

static inline kk_std_core_hnd__clause0 kk_std_test_test__select_report_fail(kk_std_test_test__test_scope hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : test-scope<e,a>) -> hnd/clause0<(),test-scope,e,a> */ 
  {
    struct kk_std_test_test__Hnd_test_scope* _con_x1025 = kk_std_test_test__as_Hnd_test_scope(hnd, _ctx);
    kk_std_core_hnd__clause0 _fun_report_fail = _con_x1025->_fun_report_fail;
    return kk_std_core_hnd__clause0_dup(_fun_report_fail, _ctx);
  }
}
 
// Call the `fun report-fail` operation of the effect `:test-scope`

static inline kk_unit_t kk_std_test_test_report_fail(kk_context_t* _ctx) { /* () -> test-scope () */ 
  kk_std_core_hnd__ev ev_10268 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/test/test/test-scope>*/;
  kk_box_t _x_x1026;
  {
    struct kk_std_core_hnd_Ev* _con_x1027 = kk_std_core_hnd__as_Ev(ev_10268, _ctx);
    kk_box_t _box_x105 = _con_x1027->hnd;
    int32_t m = _con_x1027->marker;
    kk_std_test_test__test_scope h = kk_std_test_test__test_scope_unbox(_box_x105, KK_BORROWED, _ctx);
    kk_std_test_test__test_scope_dup(h, _ctx);
    {
      struct kk_std_test_test__Hnd_test_scope* _con_x1028 = kk_std_test_test__as_Hnd_test_scope(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x1028->_cfc;
      kk_std_core_hnd__clause0 _pat_1_0 = _con_x1028->_val_indentation;
      kk_std_core_hnd__clause0 _pat_2_0 = _con_x1028->_val_scope_name;
      kk_std_core_hnd__clause0 _fun_report_fail = _con_x1028->_fun_report_fail;
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
        kk_function_t _fun_unbox_x108 = _fun_report_fail.clause;
        _x_x1026 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x108, (_fun_unbox_x108, m, ev_10268, _ctx), _ctx); /*35*/
      }
    }
  }
  kk_unit_unbox(_x_x1026); return kk_Unit;
}

kk_string_t kk_std_test_test_show(kk_std_test_test__expectation a, kk_function_t _implicit_fs_show, kk_context_t* _ctx); /* forall<a> (a : expectation<a>, ?show : (a) -> pure string) -> pure string */ 

kk_box_t kk_std_test_test__mlift_expect_result_10222(kk_std_core_types__optional continue_on_error, kk_std_core_types__optional details, kk_box_t expected, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_string_t _implicit_fs_kk_line, kk_string_t _implicit_fs_kk_module, kk_function_t _implicit_fs_show, kk_std_core_exn__error res, kk_context_t* _ctx); /* forall<a,e> (continue-on-error : ? bool, details : ? string, expected : a, ?(==) : (a, a) -> pure bool, ?kk-line : string, ?kk-module : string, ?show : (a) -> pure string, res : error<a>) -> <test|e> a */ 

kk_box_t kk_std_test_test_expect_result(kk_box_t expected, kk_function_t run, kk_std_core_types__optional details, kk_std_core_types__optional continue_on_error, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_show, kk_string_t _implicit_fs_kk_line, kk_string_t _implicit_fs_kk_module, kk_context_t* _ctx); /* forall<a,e> (expected : a, run : () -> <exn,test|e> a, details : ? string, continue-on-error : ? bool, ?(==) : (a, a) -> pure bool, ?show : (a) -> pure string, ?kk-line : string, ?kk-module : string) -> <test|e> a */ 
 
// monadic lift

static inline kk_unit_t kk_std_test_test__mlift_assert_error_10223(bool wild__, kk_context_t* _ctx) { /* (wild_ : bool) -> test () */ 
  kk_Unit; return kk_Unit;
}

kk_unit_t kk_std_test_test_assert_error(kk_string_t assertion, kk_string_t _implicit_fs_kk_line, kk_string_t _implicit_fs_kk_module, kk_context_t* _ctx); /* (assertion : string, ?kk-line : string, ?kk-module : string) -> test () */ 
 
// monadic lift


// lift anonymous function
struct kk_std_test_test__mlift_expect_that_10224_fun1097__t {
  struct kk_function_s _base;
  kk_function_t predicate;
  kk_box_t res_0;
};
extern kk_box_t kk_std_test_test__mlift_expect_that_10224_fun1097(kk_function_t _fself, kk_context_t* _ctx);
static inline kk_function_t kk_std_test_test__new_mlift_expect_that_10224_fun1097(kk_function_t predicate, kk_box_t res_0, kk_context_t* _ctx) {
  struct kk_std_test_test__mlift_expect_that_10224_fun1097__t* _self = kk_function_alloc_as(struct kk_std_test_test__mlift_expect_that_10224_fun1097__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test__mlift_expect_that_10224_fun1097, kk_context());
  _self->predicate = predicate;
  _self->res_0 = res_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}


static inline bool kk_std_test_test__mlift_expect_that_10224(kk_function_t predicate, kk_box_t res_0, kk_ssize_t _y_x10104, kk_context_t* _ctx) { /* forall<a,e> (predicate : (a) -> <exn|e> bool, res@0 : a, hnd/ev-index) -> <test,exn|e> bool */ 
  kk_box_t _x_x1096 = kk_std_core_hnd__mask_at(_y_x10104, false, kk_std_test_test__new_mlift_expect_that_10224_fun1097(predicate, res_0, _ctx), _ctx); /*4118*/
  return kk_bool_unbox(_x_x1096);
}

kk_box_t kk_std_test_test__mlift_expect_that_10225(kk_string_t assertion, kk_std_core_types__optional details, kk_box_t res_0, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_string_t _implicit_fs_kk_line, kk_string_t _implicit_fs_kk_module, kk_function_t _implicit_fs_show, kk_std_core_exn__error good, kk_context_t* _ctx); /* forall<a,e> (assertion : string, details : ? string, res@0 : a, ?(==) : (a, a) -> pure bool, ?kk-line : string, ?kk-module : string, ?show : (a) -> pure string, good : error<bool>) -> <test|e> a */ 

kk_box_t kk_std_test_test__mlift_expect_that_10226(kk_string_t assertion, kk_std_core_types__optional details, kk_function_t predicate, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_string_t _implicit_fs_kk_line, kk_string_t _implicit_fs_kk_module, kk_function_t _implicit_fs_show, kk_std_core_exn__error res, kk_context_t* _ctx); /* forall<a,e> (assertion : string, details : ? string, predicate : (a) -> <exn|e> bool, ?(==) : (a, a) -> pure bool, ?kk-line : string, ?kk-module : string, ?show : (a) -> pure string, res : error<a>) -> <test|e> a */ 

kk_box_t kk_std_test_test_expect_that(kk_string_t assertion, kk_function_t predicate, kk_function_t run, kk_std_core_types__optional details, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_show, kk_string_t _implicit_fs_kk_line, kk_string_t _implicit_fs_kk_module, kk_context_t* _ctx); /* forall<a,e> (assertion : string, predicate : (a) -> <exn|e> bool, run : () -> <exn,test|e> a, details : ? string, ?(==) : (a, a) -> pure bool, ?show : (a) -> pure string, ?kk-line : string, ?kk-module : string) -> <test|e> a */ 
 
// monadic lift

static inline kk_unit_t kk_std_test_test__mlift_expect_10227(kk_box_t wild__, kk_context_t* _ctx) { /* forall<a,e> (wild_ : a) -> <test|e> () */ 
  kk_box_drop(wild__, _ctx);
  kk_Unit; return kk_Unit;
}

kk_unit_t kk_std_test_test_expect(kk_box_t expected, kk_function_t run, kk_std_core_types__optional details, kk_std_core_types__optional continue_on_error, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_show, kk_string_t _implicit_fs_kk_line, kk_string_t _implicit_fs_kk_module, kk_context_t* _ctx); /* forall<a,e> (expected : a, run : () -> <exn,test|e> a, details : ? string, continue-on-error : ? bool, ?(==) : (a, a) -> pure bool, ?show : (a) -> pure string, ?kk-line : string, ?kk-module : string) -> <test|e> () */ 
 
// monadic lift

static inline kk_unit_t kk_std_test_test__mlift_group_10228(kk_string_t infomsg, bool _y_x10115, kk_context_t* _ctx) { /* forall<h,e> (infomsg : string, bool) -> <local<h>,console/console|e> () */ 
  kk_string_t _x_x1210;
  if (_y_x10115) {
    kk_string_t _x_x1211;
    kk_define_string_literal(, _s_x1212, 8, " failed!", _ctx)
    _x_x1211 = kk_string_dup(_s_x1212, _ctx); /*string*/
    _x_x1210 = kk_std_core_types__lp__plus__plus__rp_(infomsg, _x_x1211, _ctx); /*string*/
  }
  else {
    kk_string_t _x_x1213;
    kk_define_string_literal(, _s_x1214, 8, " passed!", _ctx)
    _x_x1213 = kk_string_dup(_s_x1214, _ctx); /*string*/
    _x_x1210 = kk_std_core_types__lp__plus__plus__rp_(infomsg, _x_x1213, _ctx); /*string*/
  }
  kk_std_core_console_printsln(_x_x1210, _ctx); return kk_Unit;
}

kk_unit_t kk_std_test_test_group(kk_string_t name, kk_function_t f, kk_std_core_types__optional is_test, kk_string_t _implicit_fs_kk_module, kk_string_t _implicit_fs_kk_line, kk_context_t* _ctx); /* forall<e> (name : string, f : () -> <test-scope,console/console|e> (), is-test : ? bool, ?kk-module : string, ?kk-line : string) -> <console/console|e> () */ 

kk_unit_t kk_std_test_test_istest_fs__mlift_scope_10229(kk_unit_t wild___0, kk_context_t* _ctx); /* forall<h,e> (wild_@0 : ()) -> <local<h>,test-scope,console/console|e> () */ 

kk_unit_t kk_std_test_test_istest_fs__mlift_scope_10230(kk_string_t infomsg, bool _y_x10128, kk_context_t* _ctx); /* forall<h,e> (infomsg : string, bool) -> <local<h>,console/console,test-scope|e> () */ 
 
// monadic lift


// lift anonymous function
struct kk_std_test_test_istest_fs__mlift_scope_10231_fun1282__t {
  struct kk_function_s _base;
  kk_function_t f;
};
extern kk_box_t kk_std_test_test_istest_fs__mlift_scope_10231_fun1282(kk_function_t _fself, kk_context_t* _ctx);
static inline kk_function_t kk_std_test_test_istest_fs__new_mlift_scope_10231_fun1282(kk_function_t f, kk_context_t* _ctx) {
  struct kk_std_test_test_istest_fs__mlift_scope_10231_fun1282__t* _self = kk_function_alloc_as(struct kk_std_test_test_istest_fs__mlift_scope_10231_fun1282__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_istest_fs__mlift_scope_10231_fun1282, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}


static inline kk_unit_t kk_std_test_test_istest_fs__mlift_scope_10231(kk_function_t f, kk_ssize_t _y_x10130, kk_context_t* _ctx) { /* forall<e> (f : () -> <test-scope,console/console|e> (), hnd/ev-index) -> <test-scope,test-scope,console/console|e> () */ 
  kk_box_t _x_x1281 = kk_std_core_hnd__mask_at(_y_x10130, true, kk_std_test_test_istest_fs__new_mlift_scope_10231_fun1282(f, _ctx), _ctx); /*4118*/
  kk_unit_unbox(_x_x1281); return kk_Unit;
}

kk_unit_t kk_std_test_test_istest_fs__mlift_scope_10232(kk_ref_t anyfail, kk_function_t f, kk_string_t infomsg, kk_string_t name, kk_string_t _y_x10124, kk_context_t* _ctx); /* forall<h,e> (anyfail : local-var<h,bool>, f : () -> <test-scope,console/console|e> (), infomsg : string, name : string, string) -> <test-scope,console/console,local<h>|e> () */ 

kk_unit_t kk_std_test_test_istest_fs__mlift_scope_10233(kk_function_t f, bool is_test, kk_string_t name, kk_string_t _implicit_fs_kk_line, kk_string_t _implicit_fs_kk_module, kk_string_t _y_x10122, kk_context_t* _ctx); /* forall<h,e> (f : () -> <test-scope,console/console|e> (), is-test : bool, name : string, ?kk-line : string, ?kk-module : string, string) -> <test-scope,console/console,local<h>|e> () */ 

kk_unit_t kk_std_test_test_istest_fs_scope(kk_string_t name, bool is_test, kk_function_t f, kk_string_t _implicit_fs_kk_module, kk_string_t _implicit_fs_kk_line, kk_context_t* _ctx); /* forall<e> (name : string, is-test : bool, f : () -> <test-scope,console/console|e> (), ?kk-module : string, ?kk-line : string) -> <test-scope,console/console|e> () */ 
 
// A subgroup of tests

static inline kk_unit_t kk_std_test_test_subgroup(kk_string_t name, kk_function_t f, kk_std_core_types__optional is_test, kk_string_t _implicit_fs_kk_module, kk_string_t _implicit_fs_kk_line, kk_context_t* _ctx) { /* forall<e> (name : string, f : () -> <test-scope,console/console|e> (), is-test : ? bool, ?kk-module : string, ?kk-line : string) -> <test-scope,console/console|e> () */ 
  bool _x_x1354;
  if (kk_std_core_types__is_Optional(is_test, _ctx)) {
    kk_box_t _box_x450 = is_test._cons._Optional.value;
    bool _uniq_is_test_3609 = kk_bool_unbox(_box_x450);
    kk_std_core_types__optional_drop(is_test, _ctx);
    _x_x1354 = _uniq_is_test_3609; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(is_test, _ctx);
    _x_x1354 = false; /*bool*/
  }
  kk_std_test_test_istest_fs_scope(name, _x_x1354, f, _implicit_fs_kk_module, _implicit_fs_kk_line, _ctx); return kk_Unit;
}

kk_unit_t kk_std_test_test__mlift_test___10234(kk_std_test_test__expectation b, bool cont, kk_function_t resume, kk_unit_t wild___0, kk_context_t* _ctx); /* forall<a,e> (b : expectation<a>, cont : bool, resume : (a) -> <test-scope,console/console,div,exn|e> (), wild_@0 : ()) -> <test-scope,console/console,div,exn|e> () */ 

kk_unit_t kk_std_test_test__mlift_test___10235(kk_string_t _y_x10138, kk_string_t _y_x10139, kk_std_test_test__expectation b, bool cont, kk_std_core_exn__exception e, kk_string_t location, kk_function_t resume, kk_std_core_types__maybe _c_x10140, kk_context_t* _ctx); /* forall<a,e> (string, string, b : expectation<a>, cont : bool, e : exception, location : string, resume : (a) -> <test-scope,console/console,div,exn|e> (), maybe<string>) -> () */ 

kk_unit_t kk_std_test_test__mlift_test___10236(kk_string_t _y_x10138, kk_std_test_test__expectation b, bool cont, kk_std_core_exn__exception e, kk_std_core_types__maybe err, kk_string_t location, kk_function_t resume, kk_string_t _y_x10139, kk_context_t* _ctx); /* forall<a,e> (string, b : expectation<a>, cont : bool, e : exception, err : maybe<string>, location : string, resume : (a) -> <test-scope,console/console,div,exn|e> (), string) -> <div,exn,test-scope,console/console|e> () */ 

kk_unit_t kk_std_test_test__mlift_test___10237(kk_std_test_test__expectation b, bool cont, kk_std_core_exn__exception e, kk_std_core_types__maybe err, kk_string_t location, kk_function_t resume, kk_function_t showa, kk_string_t _y_x10138, kk_context_t* _ctx); /* forall<a,e> (b : expectation<a>, cont : bool, e : exception, err : maybe<string>, location : string, resume : (a) -> <test-scope,console/console,div,exn|e> (), showa : (a) -> pure string, string) -> <test-scope,div,exn,console/console|e> () */ 

kk_unit_t kk_std_test_test__mlift_test___10238(kk_string_t _y_x10152, kk_string_t _y_x10153, kk_string_t _y_x10154, kk_std_test_test__expectation b, bool cont, kk_string_t location, kk_function_t resume, kk_std_core_types__maybe _c_x10155, kk_context_t* _ctx); /* forall<a,e> (string, string, string, b : expectation<a>, cont : bool, location : string, resume : (a) -> <test-scope,console/console,div,exn|e> (), maybe<string>) -> () */ 

kk_unit_t kk_std_test_test__mlift_test___10239(kk_string_t _y_x10152, kk_string_t _y_x10153, kk_std_test_test__expectation b, bool cont, kk_std_core_types__maybe err, kk_string_t location, kk_function_t resume, kk_string_t _y_x10154, kk_context_t* _ctx); /* forall<a,e> (string, string, b : expectation<a>, cont : bool, err : maybe<string>, location : string, resume : (a) -> <test-scope,console/console,div,exn|e> (), string) -> <div,exn,test-scope,console/console|e> () */ 

kk_unit_t kk_std_test_test__mlift_test___10240(kk_string_t _y_x10152, kk_box_t a_sq_, kk_std_test_test__expectation b, bool cont, kk_std_core_types__maybe err, kk_string_t location, kk_function_t resume, kk_function_t showa, kk_string_t _y_x10153, kk_context_t* _ctx); /* forall<a,e> (string, a' : a, b : expectation<a>, cont : bool, err : maybe<string>, location : string, resume : (a) -> <test-scope,console/console,div,exn|e> (), showa : (a) -> pure string, string) -> <div,exn,test-scope,console/console|e> () */ 

kk_unit_t kk_std_test_test__mlift_test___10241(kk_box_t a_sq_, kk_std_test_test__expectation b, bool cont, kk_std_core_types__maybe err, kk_string_t location, kk_function_t resume, kk_function_t showa, kk_string_t _y_x10152, kk_context_t* _ctx); /* forall<a,e> (a' : a, b : expectation<a>, cont : bool, err : maybe<string>, location : string, resume : (a) -> <test-scope,console/console,div,exn|e> (), showa : (a) -> pure string, string) -> <test-scope,div,exn,console/console|e> () */ 

kk_unit_t kk_std_test_test__mlift_test___10242(kk_box_t a_sq_, kk_std_test_test__expectation b, bool cont, kk_std_core_types__maybe err, kk_string_t location, kk_function_t resume, kk_function_t showa, kk_unit_t wild___1, kk_context_t* _ctx); /* forall<a,e> (a' : a, b : expectation<a>, cont : bool, err : maybe<string>, location : string, resume : (a) -> <test-scope,console/console,div,exn|e> (), showa : (a) -> pure string, wild_@1 : ()) -> <test-scope,console/console,div,exn|e> () */ 

kk_unit_t kk_std_test_test__mlift_test___10243(kk_box_t a_sq_, kk_std_test_test__expectation b, bool cont, kk_std_core_types__maybe err, kk_string_t location, kk_function_t resume, kk_function_t showa, bool _c_x10147, kk_context_t* _ctx); /* forall<a,e> (a' : a, b : expectation<a>, cont : bool, err : maybe<string>, location : string, resume : (a) -> <test-scope,console/console,div,exn|e> (), showa : (a) -> pure string, bool) -> () */ 

kk_unit_t kk_std_test_test_test__(kk_function_t f, kk_string_t _implicit_fs_kk_module, kk_string_t _implicit_fs_kk_line, kk_context_t* _ctx); /* forall<e> (f : () -> <test,test-scope,console/console,pure|e> (), ?kk-module : string, ?kk-line : string) -> <console/console,test-scope,pure|e> () */ 
 
// A test


// lift anonymous function
struct kk_std_test_test_test_fun1523__t {
  struct kk_function_s _base;
  kk_function_t f;
  kk_string_t _implicit_fs_kk_line;
  kk_string_t _implicit_fs_kk_module;
};
extern kk_unit_t kk_std_test_test_test_fun1523(kk_function_t _fself, kk_context_t* _ctx);
static inline kk_function_t kk_std_test_test_new_test_fun1523(kk_function_t f, kk_string_t _implicit_fs_kk_line, kk_string_t _implicit_fs_kk_module, kk_context_t* _ctx) {
  struct kk_std_test_test_test_fun1523__t* _self = kk_function_alloc_as(struct kk_std_test_test_test_fun1523__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_test_test_test_fun1523, kk_context());
  _self->f = f;
  _self->_implicit_fs_kk_line = _implicit_fs_kk_line;
  _self->_implicit_fs_kk_module = _implicit_fs_kk_module;
  return kk_datatype_from_base(&_self->_base, kk_context());
}


static inline kk_unit_t kk_std_test_test_test(kk_string_t name, kk_function_t f, kk_string_t _implicit_fs_kk_module, kk_string_t _implicit_fs_kk_line, kk_context_t* _ctx) { /* forall<e> (name : string, f : () -> <test,test-scope,console/console,pure|e> (), ?kk-module : string, ?kk-line : string) -> <console/console,test-scope,pure|e> () */ 
  kk_function_t _x_x1522;
  kk_string_dup(_implicit_fs_kk_line, _ctx);
  kk_string_dup(_implicit_fs_kk_module, _ctx);
  _x_x1522 = kk_std_test_test_new_test_fun1523(f, _implicit_fs_kk_line, _implicit_fs_kk_module, _ctx); /*() -> <std/test/test/test-scope,console/console,div,exn|4362> ()*/
  kk_std_test_test_istest_fs_scope(name, true, _x_x1522, _implicit_fs_kk_module, _implicit_fs_kk_line, _ctx); return kk_Unit;
}
 
// monadic lift

static inline kk_unit_t kk_std_test_test__mlift_test_tests_10244(kk_integer_t wild___3, kk_context_t* _ctx) { /* forall<e> (wild_@3 : int) -> <test,console/console,div,exn,test-scope|e> () */ 
  kk_integer_drop(wild___3, _ctx);
  kk_Unit; return kk_Unit;
}
 
// monadic lift

static inline kk_unit_t kk_std_test_test__mlift_test_tests_10245(kk_integer_t wild___2, kk_context_t* _ctx) { /* forall<e> (wild_@2 : int) -> <test,console/console,div,exn,test-scope|e> () */ 
  kk_integer_drop(wild___2, _ctx);
  kk_Unit; return kk_Unit;
}

kk_unit_t kk_std_test_test__mlift_test_tests_10246(kk_unit_t wild___2_0, kk_context_t* _ctx); /* forall<e> (wild_@2@0 : ()) -> <test-scope,console/console,div,exn|e> () */ 
 
// monadic lift

static inline kk_unit_t kk_std_test_test__mlift_test_tests_10247(kk_integer_t wild___1, kk_context_t* _ctx) { /* forall<e> (wild_@1 : int) -> <test,console/console,div,exn,test-scope|e> () */ 
  kk_integer_drop(wild___1, _ctx);
  kk_Unit; return kk_Unit;
}

kk_unit_t kk_std_test_test__mlift_test_tests_10248(kk_integer_t wild___0, kk_context_t* _ctx); /* forall<e> (wild_@0 : int) -> <test,console/console,div,exn,test-scope|e> () */ 

kk_unit_t kk_std_test_test__mlift_test_tests_10249(kk_integer_t res, kk_context_t* _ctx); /* forall<e> (res : int) -> <test,console/console,div,exn,test-scope|e> () */ 

kk_unit_t kk_std_test_test__mlift_test_tests_10250(kk_unit_t wild___1_0, kk_context_t* _ctx); /* forall<e> (wild_@1@0 : ()) -> <console/console,div,exn|e> () */ 

kk_unit_t kk_std_test_test_test_tests(kk_context_t* _ctx); /* forall<e> () -> <console/console,pure|e> () */ 

void kk_std_test_test__init(kk_context_t* _ctx);


void kk_std_test_test__done(kk_context_t* _ctx);

#endif // header
