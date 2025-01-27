#pragma once
#ifndef kk_std_num_ddouble_H
#define kk_std_num_ddouble_H
// Koka generated module: std/num/ddouble, koka version: 3.1.2, platform: 64-bit
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
#include "std_num_float64.h"
#include "std_num_decimal.h"
#include "std_text_parse.h"

// type declarations

// value type std/num/ddouble/ddouble
struct kk_std_num_ddouble_Ddouble {
  double hi;
  double lo;
};
typedef struct kk_std_num_ddouble_Ddouble kk_std_num_ddouble__ddouble;
static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble__new_Ddouble(double hi, double lo, kk_context_t* _ctx) {
  kk_std_num_ddouble__ddouble _con;
  _con.hi = hi;
  _con.lo = lo;
  return _con;
}
static inline bool kk_std_num_ddouble__is_Ddouble(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble__ddouble_dup(kk_std_num_ddouble__ddouble _x, kk_context_t* _ctx) {
  kk_skip_dup(_x.hi, _ctx);
  kk_skip_dup(_x.lo, _ctx);
  return _x;
}
static inline void kk_std_num_ddouble__ddouble_drop(kk_std_num_ddouble__ddouble _x, kk_context_t* _ctx) {
  kk_skip_drop(_x.hi, _ctx);
  kk_skip_drop(_x.lo, _ctx);
}
static inline kk_box_t kk_std_num_ddouble__ddouble_box(kk_std_num_ddouble__ddouble _x, kk_context_t* _ctx) {
  kk_box_t _box;
  kk_valuetype_box(kk_std_num_ddouble__ddouble, _box, _x, 0 /* scan count */, _ctx);
  return _box;
}
static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble__ddouble_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  kk_std_num_ddouble__ddouble _unbox;
  kk_valuetype_unbox(kk_std_num_ddouble__ddouble, _unbox, _x, _borrow, _ctx);
  return _unbox;
}

// value type std/num/ddouble/edouble
struct kk_std_num_ddouble_Edouble {
  double num;
  double err;
};
typedef struct kk_std_num_ddouble_Edouble kk_std_num_ddouble__edouble;
static inline kk_std_num_ddouble__edouble kk_std_num_ddouble__new_Edouble(double num, double err, kk_context_t* _ctx) {
  kk_std_num_ddouble__edouble _con;
  _con.num = num;
  _con.err = err;
  return _con;
}
static inline bool kk_std_num_ddouble__is_Edouble(kk_std_num_ddouble__edouble x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_std_num_ddouble__edouble kk_std_num_ddouble__edouble_dup(kk_std_num_ddouble__edouble _x, kk_context_t* _ctx) {
  kk_skip_dup(_x.num, _ctx);
  kk_skip_dup(_x.err, _ctx);
  return _x;
}
static inline void kk_std_num_ddouble__edouble_drop(kk_std_num_ddouble__edouble _x, kk_context_t* _ctx) {
  kk_skip_drop(_x.num, _ctx);
  kk_skip_drop(_x.err, _ctx);
}
static inline kk_box_t kk_std_num_ddouble__edouble_box(kk_std_num_ddouble__edouble _x, kk_context_t* _ctx) {
  kk_box_t _box;
  kk_valuetype_box(kk_std_num_ddouble__edouble, _box, _x, 0 /* scan count */, _ctx);
  return _box;
}
static inline kk_std_num_ddouble__edouble kk_std_num_ddouble__edouble_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  kk_std_num_ddouble__edouble _unbox;
  kk_valuetype_unbox(kk_std_num_ddouble__edouble, _unbox, _x, _borrow, _ctx);
  return _unbox;
}

// value declarations
 
// Automatically generated. Retrieves the `hi` constructor field of the `:ddouble` type.

static inline double kk_std_num_ddouble_ddouble_fs_hi(kk_std_num_ddouble__ddouble ddouble_0, kk_context_t* _ctx) { /* (ddouble : ddouble) -> float64 */ 
  {
    double _x = ddouble_0.hi;
    return _x;
  }
}
 
// Automatically generated. Retrieves the `lo` constructor field of the `:ddouble` type.

static inline double kk_std_num_ddouble_ddouble_fs_lo(kk_std_num_ddouble__ddouble ddouble_0, kk_context_t* _ctx) { /* (ddouble : ddouble) -> float64 */ 
  {
    double _x = ddouble_0.lo;
    return _x;
  }
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble_ddouble_fs__copy(kk_std_num_ddouble__ddouble _this, kk_std_core_types__optional hi, kk_std_core_types__optional lo, kk_context_t* _ctx); /* (ddouble, hi : ? float64, lo : ? float64) -> ddouble */ 
 
// Automatically generated. Retrieves the `num` constructor field of the `:edouble` type.

static inline double kk_std_num_ddouble_edouble_fs_num(kk_std_num_ddouble__edouble edouble, kk_context_t* _ctx) { /* (edouble : edouble) -> float64 */ 
  {
    double _x = edouble.num;
    return _x;
  }
}
 
// Automatically generated. Retrieves the `err` constructor field of the `:edouble` type.

static inline double kk_std_num_ddouble_edouble_fs_err(kk_std_num_ddouble__edouble edouble, kk_context_t* _ctx) { /* (edouble : edouble) -> float64 */ 
  {
    double _x = edouble.err;
    return _x;
  }
}

kk_std_num_ddouble__edouble kk_std_num_ddouble_edouble_fs__copy(kk_std_num_ddouble__edouble _this, kk_std_core_types__optional num, kk_std_core_types__optional err, kk_context_t* _ctx); /* (edouble, num : ? float64, err : ? float64) -> edouble */ 

extern kk_integer_t kk_std_num_ddouble_maxprecise;
 
// Is this `:ddouble` equal to is-zero

static inline bool kk_std_num_ddouble_is_zero(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> bool */ 
  double _x_x749;
  {
    double _x = x.hi;
    _x_x749 = _x; /*float64*/
  }
  return (_x_x749 == (0x0p+0));
}
 
// Is this `:ddouble` negative?

static inline bool kk_std_num_ddouble_is_neg(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> bool */ 
  double _x_x750;
  {
    double _x = x.hi;
    _x_x750 = _x; /*float64*/
  }
  return (_x_x750 < (0x0p+0));
}
 
// Is this a finite `:ddouble`? (i.e. not `is-nan` or `is-inf`)

static inline bool kk_std_num_ddouble_is_finite(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> bool */ 
  bool _match_x741;
  double _x_x751;
  {
    double _x = x.hi;
    _x_x751 = _x; /*float64*/
  }
  _match_x741 = isfinite(_x_x751); /*bool*/
  if (_match_x741) {
    double _x_x752;
    {
      double _x_0 = x.lo;
      _x_x752 = _x_0; /*float64*/
    }
    return isfinite(_x_x752);
  }
  {
    return false;
  }
}
 
// Compare two `:ddouble` values.

static inline kk_std_core_types__order kk_std_num_ddouble_cmp(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble y, kk_context_t* _ctx) { /* (x : ddouble, y : ddouble) -> order */ 
  kk_std_core_types__order _match_x740;
  double _x_x753;
  {
    double _x = x.hi;
    _x_x753 = _x; /*float64*/
  }
  double _x_x754;
  {
    double _x_0 = y.hi;
    _x_x754 = _x_0; /*float64*/
  }
  _match_x740 = kk_std_num_float64_cmp(_x_x753, _x_x754, _ctx); /*order*/
  if (kk_std_core_types__is_Eq(_match_x740, _ctx)) {
    double _x_x755;
    {
      double _x_1 = x.lo;
      _x_x755 = _x_1; /*float64*/
    }
    double _x_x756;
    {
      double _x_2 = y.lo;
      _x_x756 = _x_2; /*float64*/
    }
    return kk_std_num_float64_cmp(_x_x755, _x_x756, _ctx);
  }
  {
    return _match_x740;
  }
}

static inline bool kk_std_num_ddouble__lp__excl__eq__rp_(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble y, kk_context_t* _ctx) { /* (x : ddouble, y : ddouble) -> bool */ 
  kk_std_core_types__order _x_x757;
  kk_std_core_types__order _match_x739;
  double _x_x758;
  {
    double _x = x.hi;
    _x_x758 = _x; /*float64*/
  }
  double _x_x759;
  {
    double _x_0 = y.hi;
    _x_x759 = _x_0; /*float64*/
  }
  _match_x739 = kk_std_num_float64_cmp(_x_x758, _x_x759, _ctx); /*order*/
  if (kk_std_core_types__is_Eq(_match_x739, _ctx)) {
    double _x_x760;
    {
      double _x_1 = x.lo;
      _x_x760 = _x_1; /*float64*/
    }
    double _x_x761;
    {
      double _x_2 = y.lo;
      _x_x761 = _x_2; /*float64*/
    }
    _x_x757 = kk_std_num_float64_cmp(_x_x760, _x_x761, _ctx); /*order*/
  }
  else {
    _x_x757 = _match_x739; /*order*/
  }
  return kk_std_core_order__lp__excl__eq__rp_(_x_x757, kk_std_core_types__new_Eq(_ctx), _ctx);
}

static inline bool kk_std_num_ddouble__lp__gt__eq__rp_(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble y, kk_context_t* _ctx) { /* (x : ddouble, y : ddouble) -> bool */ 
  kk_std_core_types__order _x_x762;
  kk_std_core_types__order _match_x738;
  double _x_x763;
  {
    double _x = x.hi;
    _x_x763 = _x; /*float64*/
  }
  double _x_x764;
  {
    double _x_0 = y.hi;
    _x_x764 = _x_0; /*float64*/
  }
  _match_x738 = kk_std_num_float64_cmp(_x_x763, _x_x764, _ctx); /*order*/
  if (kk_std_core_types__is_Eq(_match_x738, _ctx)) {
    double _x_x765;
    {
      double _x_1 = x.lo;
      _x_x765 = _x_1; /*float64*/
    }
    double _x_x766;
    {
      double _x_2 = y.lo;
      _x_x766 = _x_2; /*float64*/
    }
    _x_x762 = kk_std_num_float64_cmp(_x_x765, _x_x766, _ctx); /*order*/
  }
  else {
    _x_x762 = _match_x738; /*order*/
  }
  return kk_std_core_order__lp__excl__eq__rp_(_x_x762, kk_std_core_types__new_Lt(_ctx), _ctx);
}

static inline bool kk_std_num_ddouble__lp__eq__eq__rp_(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble y, kk_context_t* _ctx) { /* (x : ddouble, y : ddouble) -> bool */ 
  kk_std_core_types__order _x_x767;
  kk_std_core_types__order _match_x737;
  double _x_x768;
  {
    double _x = x.hi;
    _x_x768 = _x; /*float64*/
  }
  double _x_x769;
  {
    double _x_0 = y.hi;
    _x_x769 = _x_0; /*float64*/
  }
  _match_x737 = kk_std_num_float64_cmp(_x_x768, _x_x769, _ctx); /*order*/
  if (kk_std_core_types__is_Eq(_match_x737, _ctx)) {
    double _x_x770;
    {
      double _x_1 = x.lo;
      _x_x770 = _x_1; /*float64*/
    }
    double _x_x771;
    {
      double _x_2 = y.lo;
      _x_x771 = _x_2; /*float64*/
    }
    _x_x767 = kk_std_num_float64_cmp(_x_x770, _x_x771, _ctx); /*order*/
  }
  else {
    _x_x767 = _match_x737; /*order*/
  }
  return kk_std_core_order__lp__eq__eq__rp_(_x_x767, kk_std_core_types__new_Eq(_ctx), _ctx);
}

static inline bool kk_std_num_ddouble__lp__lt__eq__rp_(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble y, kk_context_t* _ctx) { /* (x : ddouble, y : ddouble) -> bool */ 
  kk_std_core_types__order _x_x772;
  kk_std_core_types__order _match_x736;
  double _x_x773;
  {
    double _x = x.hi;
    _x_x773 = _x; /*float64*/
  }
  double _x_x774;
  {
    double _x_0 = y.hi;
    _x_x774 = _x_0; /*float64*/
  }
  _match_x736 = kk_std_num_float64_cmp(_x_x773, _x_x774, _ctx); /*order*/
  if (kk_std_core_types__is_Eq(_match_x736, _ctx)) {
    double _x_x775;
    {
      double _x_1 = x.lo;
      _x_x775 = _x_1; /*float64*/
    }
    double _x_x776;
    {
      double _x_2 = y.lo;
      _x_x776 = _x_2; /*float64*/
    }
    _x_x772 = kk_std_num_float64_cmp(_x_x775, _x_x776, _ctx); /*order*/
  }
  else {
    _x_x772 = _match_x736; /*order*/
  }
  return kk_std_core_order__lp__excl__eq__rp_(_x_x772, kk_std_core_types__new_Gt(_ctx), _ctx);
}
 
// Convert a `:ddouble` to a `:float64` (losing precision)

static inline double kk_std_num_ddouble_float64(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> float64 */ 
  {
    double _x = x.hi;
    return _x;
  }
}
 
// Create a `:ddouble` from a `:float64`.

static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble_float64_fs_ddouble(double d, kk_context_t* _ctx) { /* (d : float64) -> ddouble */ 
  return kk_std_num_ddouble__new_Ddouble(d, 0x0p+0, _ctx);
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble_dquicksum(double x, double y, kk_context_t* _ctx); /* (x : float64, y : float64) -> ddouble */ 
 
// often called `twoproduct` in literature (see [@shewchuk])

static inline kk_std_num_ddouble__edouble kk_std_num_ddouble_prod(double x, double y, kk_context_t* _ctx) { /* (x : float64, y : float64) -> edouble */ 
  double z = (x * y); /*float64*/;
  double err;
  double _x_x779 = (-z); /*float64*/
  err = kk_std_num_float64_fmadd(x, y, _x_x779, _ctx); /*float64*/
  return kk_std_num_ddouble__new_Edouble(z, err, _ctx);
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble__lp__star__rp_(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble y, kk_context_t* _ctx); /* (x : ddouble, y : ddouble) -> ddouble */ 

kk_std_num_ddouble__edouble kk_std_num_ddouble_quicksum(double x, double y, kk_context_t* _ctx); /* (x : float64, y : float64) -> edouble */ 

kk_std_num_ddouble__edouble kk_std_num_ddouble_sum(double x, double y, kk_context_t* _ctx); /* (x : float64, y : float64) -> edouble */ 

kk_std_num_ddouble__ddouble kk_std_num_ddouble__lp__plus__rp_(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble y, kk_context_t* _ctx); /* (x : ddouble, y : ddouble) -> ddouble */ 
 
// Negate a `:ddouble`.

static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble__lp__tilde__rp_(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> ddouble */ 
  double _x_x813;
  double _x_x814;
  {
    double _x = x.hi;
    _x_x814 = _x; /*float64*/
  }
  _x_x813 = (-_x_x814); /*float64*/
  double _x_x815;
  double _x_x816;
  {
    double _x_0 = x.lo;
    _x_x816 = _x_0; /*float64*/
  }
  _x_x815 = (-_x_x816); /*float64*/
  return kk_std_num_ddouble__new_Ddouble(_x_x813, _x_x815, _ctx);
}
 
// Subtract two values.

static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble__lp__dash__rp_(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble y, kk_context_t* _ctx) { /* (x : ddouble, y : ddouble) -> ddouble */ 
  kk_std_num_ddouble__ddouble _x_x817;
  double _x_x818;
  double _x_x819;
  {
    double _x = y.hi;
    _x_x819 = _x; /*float64*/
  }
  _x_x818 = (-_x_x819); /*float64*/
  double _x_x820;
  double _x_x821;
  {
    double _x_0 = y.lo;
    _x_x821 = _x_0; /*float64*/
  }
  _x_x820 = (-_x_x821); /*float64*/
  _x_x817 = kk_std_num_ddouble__new_Ddouble(_x_x818, _x_x820, _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble__lp__plus__rp_(x, _x_x817, _ctx);
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble__lp__fs__rp_(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble y, kk_context_t* _ctx); /* (x : ddouble, y : ddouble) -> ddouble */ 
 
// Return the absolute value.

static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble_abs(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> ddouble */ 
  bool _match_x730;
  double _x_x844;
  {
    double _x = x.hi;
    _x_x844 = _x; /*float64*/
  }
  _match_x730 = (_x_x844 < (0x0p+0)); /*bool*/
  if (_match_x730) {
    double _x_x845;
    double _x_x846;
    {
      double _x_0 = x.hi;
      _x_x846 = _x_0; /*float64*/
    }
    _x_x845 = (-_x_x846); /*float64*/
    double _x_x847;
    double _x_x848;
    {
      double _x_0_0 = x.lo;
      _x_x848 = _x_0_0; /*float64*/
    }
    _x_x847 = (-_x_x848); /*float64*/
    return kk_std_num_ddouble__new_Ddouble(_x_x845, _x_x847, _ctx);
  }
  {
    return x;
  }
}

extern kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_nan;

kk_std_num_ddouble__ddouble kk_std_num_ddouble_dsum(double x, double y, kk_context_t* _ctx); /* (x : float64, y : float64) -> ddouble */ 
 
// Create a `:ddouble` as the sum of two `:float64`'s.

static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble_ddouble(double x, double y, kk_context_t* _ctx) { /* (x : float64, y : float64) -> ddouble */ 
  bool _match_x728 = (y == (0x0p+0)); /*bool*/;
  if (_match_x728) {
    return kk_std_num_ddouble__new_Ddouble(x, 0x0p+0, _ctx);
  }
  {
    return kk_std_num_ddouble_dsum(x, y, _ctx);
  }
}

extern kk_integer_t kk_std_num_ddouble_minprecise;

bool kk_std_num_ddouble_is_precise(kk_integer_t i, kk_context_t* _ctx); /* (i : int) -> bool */ 

static inline kk_std_num_ddouble__edouble kk_std_num_ddouble_prodsqr(double x, kk_context_t* _ctx) { /* (x : float64) -> edouble */ 
  double z = (x * x); /*float64*/;
  double err;
  double _x_x853 = (-z); /*float64*/
  err = kk_std_num_float64_fmadd(x, x, _x_x853, _ctx); /*float64*/
  return kk_std_num_ddouble__new_Edouble(z, err, _ctx);
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble_sqr(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx); /* (x : ddouble) -> ddouble */ 

kk_std_num_ddouble__ddouble kk_std_num_ddouble_npwr_acc(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble acc, kk_integer_t n, kk_context_t* _ctx); /* (x : ddouble, acc : ddouble, n : int) -> ddouble */ 

extern kk_std_num_ddouble__ddouble kk_std_num_ddouble_one;

kk_std_num_ddouble__ddouble kk_std_num_ddouble_npwr(kk_std_num_ddouble__ddouble x, kk_integer_t n, kk_context_t* _ctx); /* (x : ddouble, n : int) -> ddouble */ 

kk_std_num_ddouble__ddouble kk_std_num_ddouble_powi(kk_std_num_ddouble__ddouble x, kk_integer_t n, kk_context_t* _ctx); /* (x : ddouble, n : int) -> ddouble */ 

extern kk_std_num_ddouble__ddouble kk_std_num_ddouble_ten;
 
// Return 10 to the power of `exp`.

static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble_powi10(kk_integer_t exp_0, kk_context_t* _ctx) { /* (exp : int) -> ddouble */ 
  return kk_std_num_ddouble_powi(kk_std_num_ddouble_ten, exp_0, _ctx);
}

static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble_mul_exp10(kk_std_num_ddouble__ddouble x, kk_integer_t exp_0, kk_context_t* _ctx) { /* (x : ddouble, exp : int) -> ddouble */ 
  bool _match_x715 = kk_integer_is_zero_borrow(exp_0); /*bool*/;
  if (_match_x715) {
    kk_integer_drop(exp_0, _ctx);
    return x;
  }
  {
    kk_std_num_ddouble__ddouble _x_x877 = kk_std_num_ddouble_powi(kk_std_num_ddouble_ten, exp_0, _ctx); /*std/num/ddouble/ddouble*/
    return kk_std_num_ddouble__lp__star__rp_(x, _x_x877, _ctx);
  }
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble_small_exp(kk_integer_t i, kk_integer_t e, kk_context_t* _ctx); /* (i : int, e : int) -> ddouble */ 

kk_std_num_ddouble__ddouble kk_std_num_ddouble_ddouble_int_exp(kk_integer_t i, kk_integer_t e, kk_context_t* _ctx); /* (i : int, e : int) -> ddouble */ 
 
// Decrement by one.

static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble_dec(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> ddouble */ 
  kk_std_num_ddouble__ddouble _x_x935;
  double _x_x936;
  double _x_x937;
  kk_std_num_ddouble__ddouble _x_x938 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
  {
    double _x = _x_x938.hi;
    _x_x937 = _x; /*float64*/
  }
  _x_x936 = (-_x_x937); /*float64*/
  double _x_x939;
  double _x_x940;
  kk_std_num_ddouble__ddouble _x_x941 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
  {
    double _x_0 = _x_x941.lo;
    _x_x940 = _x_0; /*float64*/
  }
  _x_x939 = (-_x_x940); /*float64*/
  _x_x935 = kk_std_num_ddouble__new_Ddouble(_x_x936, _x_x939, _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble__lp__plus__rp_(x, _x_x935, _ctx);
}
 
// monadic lift

static inline kk_integer_t kk_std_num_ddouble__mlift_pddouble_normal_10797(kk_char_t wild___0, kk_context_t* _ctx) { /* (wild_@0 : char) -> std/text/parse/parse int */ 
  return kk_std_text_parse_pint(_ctx);
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble__mlift_pddouble_normal_10798(kk_string_t frac, bool neg, kk_string_t whole, kk_integer_t exp_0, kk_context_t* _ctx); /* (frac : string, neg : bool, whole : string, exp@0 : int) -> std/text/parse/parse ddouble */ 
 
// monadic lift

static inline kk_string_t kk_std_num_ddouble__mlift_pddouble_normal_10799(kk_char_t wild__, kk_context_t* _ctx) { /* (wild_ : char) -> std/text/parse/parse string */ 
  return kk_std_text_parse_digits(_ctx);
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble__mlift_pddouble_normal_10800(bool neg, kk_string_t whole, kk_string_t _y_x10767, kk_context_t* _ctx); /* (neg : bool, whole : string, string) -> std/text/parse/parse ddouble */ 

kk_std_num_ddouble__ddouble kk_std_num_ddouble__mlift_pddouble_normal_10801(bool neg, kk_string_t whole, kk_context_t* _ctx); /* (neg : bool, whole : string) -> std/text/parse/parse ddouble */ 

kk_std_num_ddouble__ddouble kk_std_num_ddouble__mlift_pddouble_normal_10802(bool neg, kk_context_t* _ctx); /* (neg : bool) -> std/text/parse/parse ddouble */ 

kk_std_num_ddouble__ddouble kk_std_num_ddouble_pddouble_normal(kk_context_t* _ctx); /* () -> std/text/parse/parse ddouble */ 

kk_std_num_ddouble__ddouble kk_std_num_ddouble__mlift_pddouble_sum_10803(double hi, double lo, kk_context_t* _ctx); /* (hi : float64, lo : float64) -> std/text/parse/parse ddouble */ 

kk_std_num_ddouble__ddouble kk_std_num_ddouble__mlift_pddouble_sum_10804(double hi, kk_string_t wild___0, kk_context_t* _ctx); /* (hi : float64, wild_@0 : string) -> std/text/parse/parse ddouble */ 

kk_std_num_ddouble__ddouble kk_std_num_ddouble__mlift_pddouble_sum_10805(double hi, kk_context_t* _ctx); /* (hi : float64) -> std/text/parse/parse ddouble */ 

kk_std_num_ddouble__ddouble kk_std_num_ddouble_pddouble_sum(kk_context_t* _ctx); /* () -> std/text/parse/parse ddouble */ 

kk_std_num_ddouble__ddouble kk_std_num_ddouble_pddouble(kk_context_t* _ctx); /* () -> std/text/parse/parse ddouble */ 
 
// monadic lift

static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble__mlift_parse_ddouble_10806(kk_std_num_ddouble__ddouble x, kk_unit_t wild__, kk_context_t* _ctx) { /* (x : ddouble, wild_ : ()) -> std/text/parse/parse ddouble */ 
  return x;
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble__mlift_parse_ddouble_10807(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx); /* (x : ddouble) -> std/text/parse/parse ddouble */ 

kk_std_core_types__maybe kk_std_num_ddouble_parse_ddouble(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> maybe<ddouble> */ 

extern kk_std_num_ddouble__ddouble kk_std_num_ddouble_zero;
 
// Create a `:ddouble` from an `:int`.
// A `:ddouble` can represent integers precisely up to 30 digits.
// If an integer is passed that is out of range an infinity is returned.

static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble_int_fs_ddouble(kk_integer_t i, kk_context_t* _ctx) { /* (i : int) -> ddouble */ 
  return kk_std_num_ddouble_ddouble_int_exp(i, kk_integer_from_small(0), _ctx);
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble_list_fs_sum(kk_std_core_types__list xs, kk_context_t* _ctx); /* (xs : list<ddouble>) -> ddouble */ 
 
// Parse a floating point number with up to 31 digits precision.
// Return `dd-nan` if the string is an invalid number.

static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble_string_fs_ddouble(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> ddouble */ 
  kk_std_core_types__maybe m_10147 = kk_std_num_ddouble_parse_ddouble(s, _ctx); /*maybe<std/num/ddouble/ddouble>*/;
  if (kk_std_core_types__is_Nothing(m_10147, _ctx)) {
    return kk_std_num_ddouble_dd_nan;
  }
  {
    kk_box_t _box_x251 = m_10147._cons.Just.value;
    kk_std_num_ddouble__ddouble x = kk_std_num_ddouble__ddouble_unbox(_box_x251, KK_BORROWED, _ctx);
    kk_std_core_types__maybe_drop(m_10147, _ctx);
    return x;
  }
}

extern kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_pi;

extern kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_twopi;

extern kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_pi2;

extern kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_pi4;

extern kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_pi16;

extern kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_pi34;

extern kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_e;

extern kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_ln2;

extern kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_ln10;

extern kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_log2e;

extern kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_log10e;

extern kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_sqrt2;

extern kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_sqrt12;

extern kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_euler;

extern kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_epsilon;

extern kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_epsilon8;

extern kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_max;

extern kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_min;

extern kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_true_min;

extern kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_posinf;

extern kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_neginf;
 
// maximal precision in decimal digits of a `:ddouble`.

extern kk_integer_t kk_std_num_ddouble_dd_max_prec;

extern kk_integer_t kk_std_num_ddouble_dd_default_prec;

extern kk_std_num_ddouble__ddouble kk_std_num_ddouble_two;
 
// Is this `:ddouble` positive?

static inline bool kk_std_num_ddouble_is_pos(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> bool */ 
  double _x_x1169;
  {
    double _x = x.hi;
    _x_x1169 = _x; /*float64*/
  }
  return (_x_x1169 > (0x0p+0));
}
 
// Is this `:ddouble` not-a-number?

static inline bool kk_std_num_ddouble_is_nan(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> bool */ 
  bool _match_x643;
  double _x_x1170;
  {
    double _x = x.hi;
    _x_x1170 = _x; /*float64*/
  }
  _match_x643 = isnan(_x_x1170); /*bool*/
  if (_match_x643) {
    return true;
  }
  {
    double _x_x1171;
    {
      double _x_0 = x.lo;
      _x_x1171 = _x_0; /*float64*/
    }
    return isnan(_x_x1171);
  }
}
 
// Is this an infinite value.

static inline bool kk_std_num_ddouble_is_inf(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> bool */ 
  double _x_x1172;
  {
    double _x = x.hi;
    _x_x1172 = _x; /*float64*/
  }
  return kk_std_num_float64_is_inf(_x_x1172, _ctx);
}
 
// Does `x` equal positive infinity?

static inline bool kk_std_num_ddouble_is_posinf(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> bool */ 
  double _x_x1173;
  {
    double _x = x.hi;
    _x_x1173 = _x; /*float64*/
  }
  return (isinf(_x_x1173) && !signbit(_x_x1173));
}
 
// Does `x` equal negative infinity?

static inline bool kk_std_num_ddouble_is_neginf(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> bool */ 
  double _x_x1174;
  {
    double _x = x.hi;
    _x_x1174 = _x; /*float64*/
  }
  return (isinf(_x_x1174) && signbit(_x_x1174));
}

static inline bool kk_std_num_ddouble__lp__gt__rp_(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble y, kk_context_t* _ctx) { /* (x : ddouble, y : ddouble) -> bool */ 
  kk_std_core_types__order _x_x1175;
  kk_std_core_types__order _match_x642;
  double _x_x1176;
  {
    double _x = x.hi;
    _x_x1176 = _x; /*float64*/
  }
  double _x_x1177;
  {
    double _x_0 = y.hi;
    _x_x1177 = _x_0; /*float64*/
  }
  _match_x642 = kk_std_num_float64_cmp(_x_x1176, _x_x1177, _ctx); /*order*/
  if (kk_std_core_types__is_Eq(_match_x642, _ctx)) {
    double _x_x1178;
    {
      double _x_1 = x.lo;
      _x_x1178 = _x_1; /*float64*/
    }
    double _x_x1179;
    {
      double _x_2 = y.lo;
      _x_x1179 = _x_2; /*float64*/
    }
    _x_x1175 = kk_std_num_float64_cmp(_x_x1178, _x_x1179, _ctx); /*order*/
  }
  else {
    _x_x1175 = _match_x642; /*order*/
  }
  return kk_std_core_order__lp__eq__eq__rp_(_x_x1175, kk_std_core_types__new_Gt(_ctx), _ctx);
}

static inline bool kk_std_num_ddouble__lp__lt__rp_(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble y, kk_context_t* _ctx) { /* (x : ddouble, y : ddouble) -> bool */ 
  kk_std_core_types__order _x_x1180;
  kk_std_core_types__order _match_x641;
  double _x_x1181;
  {
    double _x = x.hi;
    _x_x1181 = _x; /*float64*/
  }
  double _x_x1182;
  {
    double _x_0 = y.hi;
    _x_x1182 = _x_0; /*float64*/
  }
  _match_x641 = kk_std_num_float64_cmp(_x_x1181, _x_x1182, _ctx); /*order*/
  if (kk_std_core_types__is_Eq(_match_x641, _ctx)) {
    double _x_x1183;
    {
      double _x_1 = x.lo;
      _x_x1183 = _x_1; /*float64*/
    }
    double _x_x1184;
    {
      double _x_2 = y.lo;
      _x_x1184 = _x_2; /*float64*/
    }
    _x_x1180 = kk_std_num_float64_cmp(_x_x1183, _x_x1184, _ctx); /*order*/
  }
  else {
    _x_x1180 = _match_x641; /*order*/
  }
  return kk_std_core_order__lp__eq__eq__rp_(_x_x1180, kk_std_core_types__new_Lt(_ctx), _ctx);
}
 
// Return the sign of the `:ddouble`.

static inline kk_std_core_types__order kk_std_num_ddouble_is_sign(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> order */ 
  bool _match_x639;
  double _x_x1185;
  {
    double _x = x.hi;
    _x_x1185 = _x; /*float64*/
  }
  _match_x639 = (_x_x1185 == (0x0p+0)); /*bool*/
  if (_match_x639) {
    return kk_std_core_types__new_Eq(_ctx);
  }
  {
    bool _match_x640;
    double _x_x1186;
    {
      double _x_0 = x.hi;
      _x_x1186 = _x_0; /*float64*/
    }
    _match_x640 = (_x_x1186 < (0x0p+0)); /*bool*/
    if (_match_x640) {
      return kk_std_core_types__new_Lt(_ctx);
    }
    {
      return kk_std_core_types__new_Gt(_ctx);
    }
  }
}
 
// The minimum of `x` and `y`.

static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble_min(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble y, kk_context_t* _ctx) { /* (x : ddouble, y : ddouble) -> ddouble */ 
  bool _match_x637;
  kk_std_core_types__order _x_x1187;
  kk_std_core_types__order _match_x638;
  double _x_x1188;
  {
    double _x = x.hi;
    _x_x1188 = _x; /*float64*/
  }
  double _x_x1189;
  {
    double _x_0 = y.hi;
    _x_x1189 = _x_0; /*float64*/
  }
  _match_x638 = kk_std_num_float64_cmp(_x_x1188, _x_x1189, _ctx); /*order*/
  if (kk_std_core_types__is_Eq(_match_x638, _ctx)) {
    double _x_x1190;
    {
      double _x_1 = x.lo;
      _x_x1190 = _x_1; /*float64*/
    }
    double _x_x1191;
    {
      double _x_2 = y.lo;
      _x_x1191 = _x_2; /*float64*/
    }
    _x_x1187 = kk_std_num_float64_cmp(_x_x1190, _x_x1191, _ctx); /*order*/
  }
  else {
    _x_x1187 = _match_x638; /*order*/
  }
  _match_x637 = kk_std_core_order__lp__excl__eq__rp_(_x_x1187, kk_std_core_types__new_Gt(_ctx), _ctx); /*bool*/
  if (_match_x637) {
    return x;
  }
  {
    return y;
  }
}
 
// The maximum of `x` and `y`

static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble_max(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble y, kk_context_t* _ctx) { /* (x : ddouble, y : ddouble) -> ddouble */ 
  bool _match_x635;
  kk_std_core_types__order _x_x1192;
  kk_std_core_types__order _match_x636;
  double _x_x1193;
  {
    double _x = x.hi;
    _x_x1193 = _x; /*float64*/
  }
  double _x_x1194;
  {
    double _x_0 = y.hi;
    _x_x1194 = _x_0; /*float64*/
  }
  _match_x636 = kk_std_num_float64_cmp(_x_x1193, _x_x1194, _ctx); /*order*/
  if (kk_std_core_types__is_Eq(_match_x636, _ctx)) {
    double _x_x1195;
    {
      double _x_1 = x.lo;
      _x_x1195 = _x_1; /*float64*/
    }
    double _x_x1196;
    {
      double _x_2 = y.lo;
      _x_x1196 = _x_2; /*float64*/
    }
    _x_x1192 = kk_std_num_float64_cmp(_x_x1195, _x_x1196, _ctx); /*order*/
  }
  else {
    _x_x1192 = _match_x636; /*order*/
  }
  _match_x635 = kk_std_core_order__lp__excl__eq__rp_(_x_x1192, kk_std_core_types__new_Lt(_ctx), _ctx); /*bool*/
  if (_match_x635) {
    return x;
  }
  {
    return y;
  }
}
 
// Increment by one.

static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble_inc(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> ddouble */ 
  return kk_std_num_ddouble__lp__plus__rp_(x, kk_std_num_ddouble_one, _ctx);
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble_round(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx); /* (x : ddouble) -> ddouble */ 

kk_std_num_ddouble__ddouble kk_std_num_ddouble__lp__perc__rp_(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble y, kk_context_t* _ctx); /* (x : ddouble, y : ddouble) -> ddouble */ 

kk_std_core_types__tuple2 kk_std_num_ddouble_divrem(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble y, kk_context_t* _ctx); /* (x : ddouble, y : ddouble) -> (ddouble, ddouble) */ 

kk_std_num_decimal__decimal kk_std_num_ddouble_decimal(kk_std_num_ddouble__ddouble x, kk_std_core_types__optional prec, kk_context_t* _ctx); /* (x : ddouble, prec : ? int) -> std/num/decimal/decimal */ 

kk_integer_t kk_std_num_ddouble_int(kk_std_num_ddouble__ddouble x, kk_std_core_types__optional nonfin, kk_context_t* _ctx); /* (x : ddouble, nonfin : ? int) -> int */ 

kk_std_num_ddouble__ddouble kk_std_num_ddouble_floor(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx); /* (x : ddouble) -> ddouble */ 

kk_std_num_ddouble__ddouble kk_std_num_ddouble_ceiling(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx); /* (x : ddouble) -> ddouble */ 
 
// Round towards zero.

static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble_truncate(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> ddouble */ 
  bool _match_x622;
  double _x_x1239;
  {
    double _x = x.hi;
    _x_x1239 = _x; /*float64*/
  }
  _match_x622 = (_x_x1239 < (0x0p+0)); /*bool*/
  if (_match_x622) {
    return kk_std_num_ddouble_ceiling(x, _ctx);
  }
  {
    return kk_std_num_ddouble_floor(x, _ctx);
  }
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble_fraction(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx); /* (x : ddouble) -> ddouble */ 
 
// The _floored_ fraction of `x`. This is always positive, such that `x.floor + x.ffraction == x`.

static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble_ffraction(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> ddouble */ 
  kk_std_num_ddouble__ddouble y_10195 = kk_std_num_ddouble_floor(x, _ctx); /*std/num/ddouble/ddouble*/;
  kk_std_num_ddouble__ddouble _x_x1246;
  double _x_x1247;
  double _x_x1248;
  {
    double _x = y_10195.hi;
    _x_x1248 = _x; /*float64*/
  }
  _x_x1247 = (-_x_x1248); /*float64*/
  double _x_x1249;
  double _x_x1250;
  {
    double _x_0 = y_10195.lo;
    _x_x1250 = _x_0; /*float64*/
  }
  _x_x1249 = (-_x_x1250); /*float64*/
  _x_x1246 = kk_std_num_ddouble__new_Ddouble(_x_x1247, _x_x1249, _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble__lp__plus__rp_(x, _x_x1246, _ctx);
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble_round_to_prec(kk_std_num_ddouble__ddouble x, kk_integer_t prec, kk_context_t* _ctx); /* (x : ddouble, prec : int) -> ddouble */ 
 
// 'Load exponent': returns `x`&middot;2^`exp`^.

static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble_ldexp(kk_std_num_ddouble__ddouble x, kk_integer_t exp_0, kk_context_t* _ctx) { /* (x : ddouble, exp : int) -> ddouble */ 
  double _x_x1253;
  double _x_x1254;
  {
    double _x = x.hi;
    _x_x1254 = _x; /*float64*/
  }
  kk_integer_t _x_x1255 = kk_integer_dup(exp_0, _ctx); /*int*/
  _x_x1253 = kk_std_num_float64_ldexp(_x_x1254, _x_x1255, _ctx); /*float64*/
  double _x_x1256;
  double _x_x1257;
  {
    double _x_0 = x.lo;
    _x_x1257 = _x_0; /*float64*/
  }
  _x_x1256 = kk_std_num_float64_ldexp(_x_x1257, exp_0, _ctx); /*float64*/
  return kk_std_num_ddouble__new_Ddouble(_x_x1253, _x_x1256, _ctx);
}
 
// Decode a `:ddouble` `d` into two doubles `(hi,lo)` such that `d` equals  `hi`+`lo`,
// where `lo` &le; 0.5&middot;ulp(`hi`).

static inline kk_std_core_types__tuple2 kk_std_num_ddouble_decode(kk_std_num_ddouble__ddouble d, kk_context_t* _ctx) { /* (d : ddouble) -> (float64, float64) */ 
  kk_box_t _x_x1258;
  double _x_x1259;
  {
    double _x = d.hi;
    _x_x1259 = _x; /*float64*/
  }
  _x_x1258 = kk_double_box(_x_x1259, _ctx); /*129*/
  kk_box_t _x_x1260;
  double _x_x1261;
  {
    double _x_0 = d.lo;
    _x_x1261 = _x_0; /*float64*/
  }
  _x_x1260 = kk_double_box(_x_x1261, _ctx); /*130*/
  return kk_std_core_types__new_Tuple2(_x_x1258, _x_x1260, _ctx);
}
 
// Encode a `:ddouble` `d` from two doubles `(hi,lo)` such that `d` equals  `hi`+`lo`.

static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble_encode(double hi, double lo, kk_context_t* _ctx) { /* (hi : float64, lo : float64) -> ddouble */ 
  kk_std_num_ddouble__ddouble _x_x1262 = kk_std_num_ddouble__new_Ddouble(hi, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/
  kk_std_num_ddouble__ddouble _x_x1263 = kk_std_num_ddouble__new_Ddouble(lo, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble__lp__plus__rp_(_x_x1262, _x_x1263, _ctx);
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble_sqrt(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx); /* (x : ddouble) -> ddouble */ 
 
// Multiply `x` by a `:float64` `p` where `p` must be a power of 2.

static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble_mul_pwr2(kk_std_num_ddouble__ddouble x, double p, kk_context_t* _ctx) { /* (x : ddouble, p : float64) -> ddouble */ 
  double _x_x1277;
  double _x_x1278;
  {
    double _x = x.hi;
    _x_x1278 = _x; /*float64*/
  }
  _x_x1277 = (_x_x1278 * p); /*float64*/
  double _x_x1279;
  double _x_x1280;
  {
    double _x_0 = x.lo;
    _x_x1280 = _x_0; /*float64*/
  }
  _x_x1279 = (_x_x1280 * p); /*float64*/
  return kk_std_num_ddouble__new_Ddouble(_x_x1277, _x_x1279, _ctx);
}

static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble_half(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> ddouble */ 
  double _x_x1281;
  double _x_x1282;
  {
    double _x = x.hi;
    _x_x1282 = _x; /*float64*/
  }
  _x_x1281 = (_x_x1282 * (0x1p-1)); /*float64*/
  double _x_x1283;
  double _x_x1284;
  {
    double _x_0 = x.lo;
    _x_x1284 = _x_0; /*float64*/
  }
  _x_x1283 = (_x_x1284 * (0x1p-1)); /*float64*/
  return kk_std_num_ddouble__new_Ddouble(_x_x1281, _x_x1283, _ctx);
}

static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble_twice(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> ddouble */ 
  double _x_x1285;
  double _x_x1286;
  {
    double _x = x.hi;
    _x_x1286 = _x; /*float64*/
  }
  _x_x1285 = (_x_x1286 * 0x1p1); /*float64*/
  double _x_x1287;
  double _x_x1288;
  {
    double _x_0 = x.lo;
    _x_x1288 = _x_0; /*float64*/
  }
  _x_x1287 = (_x_x1288 * 0x1p1); /*float64*/
  return kk_std_num_ddouble__new_Ddouble(_x_x1285, _x_x1287, _ctx);
}

extern kk_std_core_types__list kk_std_num_ddouble_exp_factors;

kk_std_num_ddouble__ddouble kk_std_num_ddouble_exp_approx(kk_std_num_ddouble__ddouble p, kk_std_num_ddouble__ddouble t, kk_std_num_ddouble__ddouble r, double eps, kk_std_core_types__list fs, kk_std_core_types__optional s, kk_context_t* _ctx); /* (p : ddouble, t : ddouble, r : ddouble, eps : float64, fs : list<ddouble>, s : ? ddouble) -> ddouble */ 

kk_std_num_ddouble__ddouble kk_std_num_ddouble_exp(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx); /* (x : ddouble) -> ddouble */ 

kk_std_num_ddouble__ddouble kk_std_num_ddouble_ln(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx); /* (x : ddouble) -> ddouble */ 
 
// `x` to the power of `y` both as `:ddouble`

static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble_pow(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble y, kk_context_t* _ctx) { /* (x : ddouble, y : ddouble) -> ddouble */ 
  kk_std_num_ddouble__ddouble _x_x1417;
  kk_std_num_ddouble__ddouble _x_x1418 = kk_std_num_ddouble_ln(x, _ctx); /*std/num/ddouble/ddouble*/
  _x_x1417 = kk_std_num_ddouble__lp__star__rp_(y, _x_x1418, _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble_exp(_x_x1417, _ctx);
}
 
// Return 10 to the power of `exp`.

static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble_exp10(kk_std_num_ddouble__ddouble exp_0, kk_context_t* _ctx) { /* (exp : ddouble) -> ddouble */ 
  kk_std_num_ddouble__ddouble _x_x1419;
  kk_std_num_ddouble__ddouble _x_x1420 = kk_std_num_ddouble_ln(kk_std_num_ddouble_ten, _ctx); /*std/num/ddouble/ddouble*/
  _x_x1419 = kk_std_num_ddouble__lp__star__rp_(exp_0, _x_x1420, _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble_exp(_x_x1419, _ctx);
}
 
// Return 2 to the power of `exp`.

static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble_exp2(kk_std_num_ddouble__ddouble exp_0, kk_context_t* _ctx) { /* (exp : ddouble) -> ddouble */ 
  kk_std_num_ddouble__ddouble _x_x1421;
  kk_std_num_ddouble__ddouble _x_x1422 = kk_std_num_ddouble_ln(kk_std_num_ddouble_two, _ctx); /*std/num/ddouble/ddouble*/
  _x_x1421 = kk_std_num_ddouble__lp__star__rp_(exp_0, _x_x1422, _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble_exp(_x_x1421, _ctx);
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble_float64_fs_ddouble_exp(double d, kk_integer_t e, kk_context_t* _ctx); /* (d : float64, e : int) -> ddouble */ 

kk_std_num_ddouble__ddouble kk_std_num_ddouble_int_fs_ddouble_exp(kk_integer_t i, kk_integer_t exp_0, kk_context_t* _ctx); /* (i : int, exp : int) -> ddouble */ 

kk_string_t kk_std_num_ddouble_show(kk_std_num_ddouble__ddouble x, kk_std_core_types__optional prec, kk_context_t* _ctx); /* (x : ddouble, prec : ? int) -> string */ 

kk_string_t kk_std_num_ddouble_show_hex(kk_std_num_ddouble__ddouble x, kk_std_core_types__optional width, kk_std_core_types__optional use_capitals, kk_std_core_types__optional pre, kk_context_t* _ctx); /* (x : ddouble, width : ? int, use-capitals : ? bool, pre : ? string) -> string */ 

kk_string_t kk_std_num_ddouble_show_exp(kk_std_num_ddouble__ddouble x, kk_std_core_types__optional prec, kk_context_t* _ctx); /* (x : ddouble, prec : ? int) -> string */ 

kk_string_t kk_std_num_ddouble_show_fixed(kk_std_num_ddouble__ddouble x, kk_std_core_types__optional prec, kk_context_t* _ctx); /* (x : ddouble, prec : ? int) -> string */ 

kk_string_t kk_std_num_ddouble_show_sum(kk_std_num_ddouble__ddouble x, kk_std_core_types__optional prec, kk_context_t* _ctx); /* (x : ddouble, prec : ? int) -> string */ 

kk_std_num_ddouble__ddouble kk_std_num_ddouble_nroot(kk_std_num_ddouble__ddouble x, kk_integer_t n, kk_context_t* _ctx); /* (x : ddouble, n : int) -> ddouble */ 

extern kk_std_num_ddouble__ddouble kk_std_num_ddouble_one_half;
 
// Return the logarithm in some base `b` of a `:ddouble` `x`

static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble_log(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble base, kk_context_t* _ctx) { /* (x : ddouble, base : ddouble) -> ddouble */ 
  kk_std_num_ddouble__ddouble _x_x1530 = kk_std_num_ddouble_ln(x, _ctx); /*std/num/ddouble/ddouble*/
  kk_std_num_ddouble__ddouble _x_x1531 = kk_std_num_ddouble_ln(base, _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble__lp__fs__rp_(_x_x1530, _x_x1531, _ctx);
}
 
// The logarithm in base 10 of `x`.

static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble_log10(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> ddouble */ 
  kk_std_num_ddouble__ddouble _x_x1532 = kk_std_num_ddouble_ln(x, _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble__lp__fs__rp_(_x_x1532, kk_std_num_ddouble_dd_ln10, _ctx);
}
 
// The logarithm in base 2 of `x`.

static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble_log2(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> ddouble */ 
  kk_std_num_ddouble__ddouble _x_x1533 = kk_std_num_ddouble_ln(x, _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble__lp__fs__rp_(_x_x1533, kk_std_num_ddouble_dd_ln2, _ctx);
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble_ln1p(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx); /* (x : ddouble) -> ddouble */ 

kk_std_num_ddouble__ddouble kk_std_num_ddouble_expm1(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx); /* (x : ddouble) -> ddouble */ 

static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble_log2p1(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> ddouble */ 
  kk_std_num_ddouble__ddouble _x_x1579 = kk_std_num_ddouble_ln1p(x, _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble__lp__star__rp_(kk_std_num_ddouble_dd_log2e, _x_x1579, _ctx);
}

static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble_exp2m1(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> ddouble */ 
  kk_std_num_ddouble__ddouble _x_x1580 = kk_std_num_ddouble__lp__star__rp_(kk_std_num_ddouble_dd_ln2, x, _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble_expm1(_x_x1580, _ctx);
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble_lnaddexp(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble y, kk_context_t* _ctx); /* (x : ddouble, y : ddouble) -> ddouble */ 

kk_std_num_ddouble__ddouble kk_std_num_ddouble_logaddexp2(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble y, kk_context_t* _ctx); /* (x : ddouble, y : ddouble) -> ddouble */ 

bool kk_std_num_ddouble_nearly_eq(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble y, kk_std_core_types__optional epsilon, kk_context_t* _ctx); /* (x : ddouble, y : ddouble, epsilon : ? ddouble) -> bool */ 
 
// Return if two `:ddouble`s are nearly equal with respect to an `epsilon` of `10*dd-epsilon`.
// See also `nearly-eq` which takes an explicit `epsilon`.

static inline bool kk_std_num_ddouble__lp__tilde__eq__rp_(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble y, kk_context_t* _ctx) { /* (x : ddouble, y : ddouble) -> bool */ 
  return kk_std_num_ddouble_nearly_eq(x, y, kk_std_core_types__new_None(_ctx), _ctx);
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble_hypot(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble y, kk_context_t* _ctx); /* (x : ddouble, y : ddouble) -> ddouble */ 

kk_std_num_ddouble__ddouble kk_std_num_ddouble_xyz_fs_hypot(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble y, kk_std_num_ddouble__ddouble z, kk_context_t* _ctx); /* (x : ddouble, y : ddouble, z : ddouble) -> ddouble */ 

kk_std_num_ddouble__ddouble kk_std_num_ddouble_abs_max(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble y, kk_context_t* _ctx); /* (x : ddouble, y : ddouble) -> ddouble */ 

kk_std_num_ddouble__ddouble kk_std_num_ddouble_list_fs_abs_max(kk_std_core_types__list xs, kk_context_t* _ctx); /* (xs : list<ddouble>) -> ddouble */ 

kk_std_num_ddouble__ddouble kk_std_num_ddouble_list_fs_hypot(kk_std_core_types__list xs, kk_context_t* _ctx); /* (xs : list<ddouble>) -> ddouble */ 

extern kk_std_core_types__list kk_std_num_ddouble_ch_factors;

extern kk_vector_t kk_std_num_ddouble_sin16_table;
 
// Return sin(i*pi/16) for 0 <= i <= 8

static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble_sin16(kk_integer_t i, kk_context_t* _ctx) { /* (i : int) -> ddouble */ 
  kk_std_core_types__maybe m_10416;
  kk_std_core_types__maybe _brw_x542 = kk_std_core_vector_at(kk_std_num_ddouble_sin16_table, i, _ctx); /*maybe<346>*/;
  kk_integer_drop(i, _ctx);
  m_10416 = _brw_x542; /*maybe<std/num/ddouble/ddouble>*/
  if (kk_std_core_types__is_Nothing(m_10416, _ctx)) {
    return kk_std_num_ddouble_dd_nan;
  }
  {
    kk_box_t _box_x439 = m_10416._cons.Just.value;
    kk_std_num_ddouble__ddouble x = kk_std_num_ddouble__ddouble_unbox(_box_x439, KK_BORROWED, _ctx);
    kk_std_core_types__maybe_drop(m_10416, _ctx);
    return x;
  }
}

kk_std_core_types__tuple2 kk_std_num_ddouble_sincos(kk_std_num_ddouble__ddouble rad, kk_context_t* _ctx); /* (rad : ddouble) -> (ddouble, ddouble) */ 
 
// The sine function of a given angle in radians.

static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble_sin(kk_std_num_ddouble__ddouble rad, kk_context_t* _ctx) { /* (rad : ddouble) -> ddouble */ 
  kk_std_core_types__tuple2 tuple2_10470 = kk_std_num_ddouble_sincos(rad, _ctx); /*(std/num/ddouble/ddouble, std/num/ddouble/ddouble)*/;
  {
    kk_box_t _box_x483 = tuple2_10470.fst;
    kk_box_t _box_x484 = tuple2_10470.snd;
    kk_std_num_ddouble__ddouble _x = kk_std_num_ddouble__ddouble_unbox(_box_x483, KK_BORROWED, _ctx);
    kk_std_core_types__tuple2_drop(tuple2_10470, _ctx);
    return _x;
  }
}
 
// The cosine function of a given angle in radians.

static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble_cos(kk_std_num_ddouble__ddouble rad, kk_context_t* _ctx) { /* (rad : ddouble) -> ddouble */ 
  kk_std_core_types__tuple2 tuple2_10471 = kk_std_num_ddouble_sincos(rad, _ctx); /*(std/num/ddouble/ddouble, std/num/ddouble/ddouble)*/;
  {
    kk_box_t _box_x485 = tuple2_10471.fst;
    kk_box_t _box_x486 = tuple2_10471.snd;
    kk_std_num_ddouble__ddouble _x = kk_std_num_ddouble__ddouble_unbox(_box_x486, KK_BORROWED, _ctx);
    kk_std_core_types__tuple2_drop(tuple2_10471, _ctx);
    return _x;
  }
}
 
// The tangent of a given angle in radians.

static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble_tan(kk_std_num_ddouble__ddouble rad, kk_context_t* _ctx) { /* (rad : ddouble) -> ddouble */ 
  kk_std_core_types__tuple2 _match_x527 = kk_std_num_ddouble_sincos(rad, _ctx); /*(std/num/ddouble/ddouble, std/num/ddouble/ddouble)*/;
  {
    kk_box_t _box_x487 = _match_x527.fst;
    kk_box_t _box_x488 = _match_x527.snd;
    kk_std_num_ddouble__ddouble s = kk_std_num_ddouble__ddouble_unbox(_box_x487, KK_BORROWED, _ctx);
    kk_std_num_ddouble__ddouble c = kk_std_num_ddouble__ddouble_unbox(_box_x488, KK_BORROWED, _ctx);
    kk_std_core_types__tuple2_drop(_match_x527, _ctx);
    return kk_std_num_ddouble__lp__fs__rp_(s, c, _ctx);
  }
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble_with_sign_of(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble y, kk_context_t* _ctx); /* (x : ddouble, y : ddouble) -> ddouble */ 

kk_std_num_ddouble__ddouble kk_std_num_ddouble_atan2(kk_std_num_ddouble__ddouble y, kk_std_num_ddouble__ddouble x, kk_context_t* _ctx); /* (y : ddouble, x : ddouble) -> ddouble */ 

kk_std_num_ddouble__ddouble kk_std_num_ddouble_asin(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx); /* (x : ddouble) -> ddouble */ 

kk_std_num_ddouble__ddouble kk_std_num_ddouble_acos(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx); /* (x : ddouble) -> ddouble */ 
 
// The arc-tangent of `x`. Returns the angle in radians.

static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble_atan(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> ddouble */ 
  return kk_std_num_ddouble_atan2(x, kk_std_num_ddouble_one, _ctx);
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble_sinh(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx); /* (x : ddouble) -> ddouble */ 

kk_std_num_ddouble__ddouble kk_std_num_ddouble_cosh(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx); /* (x : ddouble) -> ddouble */ 

kk_std_num_ddouble__ddouble kk_std_num_ddouble_tanh(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx); /* (x : ddouble) -> ddouble */ 
 
// The area hyperbolic sine of `x`.

static inline kk_std_num_ddouble__ddouble kk_std_num_ddouble_asinh(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> ddouble */ 
  kk_std_num_ddouble__ddouble _x_x2060;
  kk_std_num_ddouble__ddouble _x_x2061;
  kk_std_num_ddouble__ddouble _x_x2062;
  kk_std_num_ddouble__ddouble _x_x2063 = kk_std_num_ddouble_sqr(x, _ctx); /*std/num/ddouble/ddouble*/
  _x_x2062 = kk_std_num_ddouble__lp__plus__rp_(_x_x2063, kk_std_num_ddouble_one, _ctx); /*std/num/ddouble/ddouble*/
  _x_x2061 = kk_std_num_ddouble_sqrt(_x_x2062, _ctx); /*std/num/ddouble/ddouble*/
  _x_x2060 = kk_std_num_ddouble__lp__plus__rp_(x, _x_x2061, _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble_ln(_x_x2060, _ctx);
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble_acosh(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx); /* (x : ddouble) -> ddouble */ 

kk_std_num_ddouble__ddouble kk_std_num_ddouble_atanh(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx); /* (x : ddouble) -> ddouble */ 

void kk_std_num_ddouble__init(kk_context_t* _ctx);


void kk_std_num_ddouble__done(kk_context_t* _ctx);

#endif // header
