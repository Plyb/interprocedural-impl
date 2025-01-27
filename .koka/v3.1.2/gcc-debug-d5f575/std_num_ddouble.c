// Koka generated module: std/num/ddouble, koka version: 3.1.2, platform: 64-bit
#include "std_num_ddouble.h"

kk_std_num_ddouble__ddouble kk_std_num_ddouble_ddouble_fs__copy(kk_std_num_ddouble__ddouble _this, kk_std_core_types__optional hi, kk_std_core_types__optional lo, kk_context_t* _ctx) { /* (ddouble, hi : ? float64, lo : ? float64) -> ddouble */ 
  double _x_x745;
  if (kk_std_core_types__is_Optional(hi, _ctx)) {
    kk_box_t _box_x0 = hi._cons._Optional.value;
    double _uniq_hi_184 = kk_double_unbox(_box_x0, KK_BORROWED, _ctx);
    kk_std_core_types__optional_drop(hi, _ctx);
    _x_x745 = _uniq_hi_184; /*float64*/
  }
  else {
    kk_std_core_types__optional_drop(hi, _ctx);
    {
      double _x = _this.hi;
      _x_x745 = _x; /*float64*/
    }
  }
  double _x_x746;
  if (kk_std_core_types__is_Optional(lo, _ctx)) {
    kk_box_t _box_x1 = lo._cons._Optional.value;
    double _uniq_lo_191 = kk_double_unbox(_box_x1, KK_BORROWED, _ctx);
    kk_std_core_types__optional_drop(lo, _ctx);
    _x_x746 = _uniq_lo_191; /*float64*/
  }
  else {
    kk_std_core_types__optional_drop(lo, _ctx);
    {
      double _x_0 = _this.lo;
      _x_x746 = _x_0; /*float64*/
    }
  }
  return kk_std_num_ddouble__new_Ddouble(_x_x745, _x_x746, _ctx);
}

kk_std_num_ddouble__edouble kk_std_num_ddouble_edouble_fs__copy(kk_std_num_ddouble__edouble _this, kk_std_core_types__optional num, kk_std_core_types__optional err, kk_context_t* _ctx) { /* (edouble, num : ? float64, err : ? float64) -> edouble */ 
  double _x_x747;
  if (kk_std_core_types__is_Optional(num, _ctx)) {
    kk_box_t _box_x2 = num._cons._Optional.value;
    double _uniq_num_222 = kk_double_unbox(_box_x2, KK_BORROWED, _ctx);
    kk_std_core_types__optional_drop(num, _ctx);
    _x_x747 = _uniq_num_222; /*float64*/
  }
  else {
    kk_std_core_types__optional_drop(num, _ctx);
    {
      double _x = _this.num;
      _x_x747 = _x; /*float64*/
    }
  }
  double _x_x748;
  if (kk_std_core_types__is_Optional(err, _ctx)) {
    kk_box_t _box_x3 = err._cons._Optional.value;
    double _uniq_err_229 = kk_double_unbox(_box_x3, KK_BORROWED, _ctx);
    kk_std_core_types__optional_drop(err, _ctx);
    _x_x748 = _uniq_err_229; /*float64*/
  }
  else {
    kk_std_core_types__optional_drop(err, _ctx);
    {
      double _x_0 = _this.err;
      _x_x748 = _x_0; /*float64*/
    }
  }
  return kk_std_num_ddouble__new_Edouble(_x_x747, _x_x748, _ctx);
}

kk_integer_t kk_std_num_ddouble_maxprecise;

kk_std_num_ddouble__ddouble kk_std_num_ddouble_dquicksum(double x, double y, kk_context_t* _ctx) { /* (x : float64, y : float64) -> ddouble */ 
  bool b_10015 = isfinite(x); /*bool*/;
  if (b_10015) {
    double z = (x + y); /*float64*/;
    double err;
    double _x_x777 = (z - x); /*float64*/
    err = (y - _x_x777); /*float64*/
    double _x_x778;
    bool _match_x735 = isfinite(z); /*bool*/;
    if (_match_x735) {
      _x_x778 = err; /*float64*/
    }
    else {
      _x_x778 = z; /*float64*/
    }
    return kk_std_num_ddouble__new_Ddouble(z, _x_x778, _ctx);
  }
  {
    return kk_std_num_ddouble__new_Ddouble(x, 0x0p+0, _ctx);
  }
}
 
// Multiply two `:ddouble`s

kk_std_num_ddouble__ddouble kk_std_num_ddouble__lp__star__rp_(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble y, kk_context_t* _ctx) { /* (x : ddouble, y : ddouble) -> ddouble */ 
  double z;
  double _x_x780;
  {
    double _x = x.hi;
    _x_x780 = _x; /*float64*/
  }
  double _x_x781;
  {
    double _x_0 = y.hi;
    _x_x781 = _x_0; /*float64*/
  }
  z = (_x_x780 * _x_x781); /*float64*/
  double err;
  double _x_x782;
  {
    double _x_1 = x.hi;
    _x_x782 = _x_1; /*float64*/
  }
  double _x_x783;
  {
    double _x_0_0 = y.hi;
    _x_x783 = _x_0_0; /*float64*/
  }
  double _x_x784 = (-z); /*float64*/
  err = kk_std_num_float64_fmadd(_x_x782, _x_x783, _x_x784, _ctx); /*float64*/
  kk_std_num_ddouble__edouble z_0 = kk_std_num_ddouble__new_Edouble(z, err, _ctx); /*std/num/ddouble/edouble*/;
  double e;
  double _x_x785;
  {
    double _x_1_0 = z_0.err;
    _x_x785 = _x_1_0; /*float64*/
  }
  double _x_x786;
  double _x_x787;
  double _x_x788;
  {
    double _x_2 = x.hi;
    _x_x788 = _x_2; /*float64*/
  }
  double _x_x789;
  {
    double _x_3 = y.lo;
    _x_x789 = _x_3; /*float64*/
  }
  _x_x787 = (_x_x788 * _x_x789); /*float64*/
  double _x_x790;
  double _x_x791;
  {
    double _x_4 = x.lo;
    _x_x791 = _x_4; /*float64*/
  }
  double _x_x792;
  {
    double _x_5 = y.hi;
    _x_x792 = _x_5; /*float64*/
  }
  _x_x790 = (_x_x791 * _x_x792); /*float64*/
  _x_x786 = (_x_x787 + _x_x790); /*float64*/
  e = (_x_x785 + _x_x786); /*float64*/
  double _x_x793;
  {
    double _x_6 = z_0.num;
    _x_x793 = _x_6; /*float64*/
  }
  return kk_std_num_ddouble_dquicksum(_x_x793, e, _ctx);
}
 
// As `sum` but with `x.abs >= y.abs`

kk_std_num_ddouble__edouble kk_std_num_ddouble_quicksum(double x, double y, kk_context_t* _ctx) { /* (x : float64, y : float64) -> edouble */ 
  double z = (x + y); /*float64*/;
  double err;
  double _x_x794 = (z - x); /*float64*/
  err = (y - _x_x794); /*float64*/
  double _x_x795;
  bool _match_x734 = isfinite(z); /*bool*/;
  if (_match_x734) {
    _x_x795 = err; /*float64*/
  }
  else {
    _x_x795 = z; /*float64*/
  }
  return kk_std_num_ddouble__new_Edouble(z, _x_x795, _ctx);
}
 
// often called `twosum` in literature (see [@shewchuk])

kk_std_num_ddouble__edouble kk_std_num_ddouble_sum(double x, double y, kk_context_t* _ctx) { /* (x : float64, y : float64) -> edouble */ 
  double z = (x + y); /*float64*/;
  double diff = (z - x); /*float64*/;
  double err;
  double _x_x796;
  double _x_x797 = (z - diff); /*float64*/
  _x_x796 = (x - _x_x797); /*float64*/
  double _x_x798 = (y - diff); /*float64*/
  err = (_x_x796 + _x_x798); /*float64*/
  double _x_x799;
  bool _match_x733 = isfinite(z); /*bool*/;
  if (_match_x733) {
    _x_x799 = err; /*float64*/
  }
  else {
    _x_x799 = z; /*float64*/
  }
  return kk_std_num_ddouble__new_Edouble(z, _x_x799, _ctx);
}
 
// Add two `:ddouble`s

kk_std_num_ddouble__ddouble kk_std_num_ddouble__lp__plus__rp_(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble y, kk_context_t* _ctx) { /* (x : ddouble, y : ddouble) -> ddouble */ 
  kk_std_num_ddouble__edouble z1;
  double _x_x800;
  {
    double _x = x.hi;
    _x_x800 = _x; /*float64*/
  }
  double _x_x801;
  {
    double _x_0 = y.hi;
    _x_x801 = _x_0; /*float64*/
  }
  z1 = kk_std_num_ddouble_sum(_x_x800, _x_x801, _ctx); /*std/num/ddouble/edouble*/
  kk_std_num_ddouble__edouble lo;
  double _x_x802;
  {
    double _x_1 = x.lo;
    _x_x802 = _x_1; /*float64*/
  }
  double _x_x803;
  {
    double _x_2 = y.lo;
    _x_x803 = _x_2; /*float64*/
  }
  lo = kk_std_num_ddouble_sum(_x_x802, _x_x803, _ctx); /*std/num/ddouble/edouble*/
  double e1;
  double _x_x804;
  {
    double _x_3 = z1.err;
    _x_x804 = _x_3; /*float64*/
  }
  double _x_x805;
  {
    double _x_4 = lo.num;
    _x_x805 = _x_4; /*float64*/
  }
  e1 = (_x_x804 + _x_x805); /*float64*/
  double z;
  double _x_x806;
  {
    double _x_5 = z1.num;
    _x_x806 = _x_5; /*float64*/
  }
  z = (_x_x806 + e1); /*float64*/
  double err;
  double _x_x807;
  double _x_x808;
  {
    double _x_5_0 = z1.num;
    _x_x808 = _x_5_0; /*float64*/
  }
  _x_x807 = (z - _x_x808); /*float64*/
  err = (e1 - _x_x807); /*float64*/
  kk_std_num_ddouble__edouble z2;
  double _x_x809;
  bool _match_x732 = isfinite(z); /*bool*/;
  if (_match_x732) {
    _x_x809 = err; /*float64*/
  }
  else {
    _x_x809 = z; /*float64*/
  }
  z2 = kk_std_num_ddouble__new_Edouble(z, _x_x809, _ctx); /*std/num/ddouble/edouble*/
  double e2;
  double _x_x810;
  {
    double _x_6 = z2.err;
    _x_x810 = _x_6; /*float64*/
  }
  double _x_x811;
  {
    double _x_7 = lo.err;
    _x_x811 = _x_7; /*float64*/
  }
  e2 = (_x_x810 + _x_x811); /*float64*/
  double _x_x812;
  {
    double _x_8 = z2.num;
    _x_x812 = _x_8; /*float64*/
  }
  return kk_std_num_ddouble_dquicksum(_x_x812, e2, _ctx);
}
 
// Divide two `:ddouble`s

kk_std_num_ddouble__ddouble kk_std_num_ddouble__lp__fs__rp_(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble y, kk_context_t* _ctx) { /* (x : ddouble, y : ddouble) -> ddouble */ 
  double d_10041;
  double _x_x822;
  {
    double _x = x.hi;
    _x_x822 = _x; /*float64*/
  }
  double _x_x823;
  {
    double _x_0 = y.hi;
    _x_x823 = _x_0; /*float64*/
  }
  d_10041 = (_x_x822 / _x_x823); /*float64*/
  kk_std_num_ddouble__ddouble q1 = kk_std_num_ddouble__new_Ddouble(d_10041, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/;
  bool b_10044;
  bool _match_x731;
  double _x_x824;
  {
    double _x_1 = q1.hi;
    _x_x824 = _x_1; /*float64*/
  }
  _match_x731 = isfinite(_x_x824); /*bool*/
  if (_match_x731) {
    double _x_x825;
    {
      double _x_0_0 = q1.lo;
      _x_x825 = _x_0_0; /*float64*/
    }
    b_10044 = isfinite(_x_x825); /*bool*/
  }
  else {
    b_10044 = false; /*bool*/
  }
  if (b_10044) {
    bool b_0_10045;
    double _x_x826;
    {
      double _x_1_0 = y.hi;
      _x_x826 = _x_1_0; /*float64*/
    }
    b_0_10045 = isfinite(_x_x826); /*bool*/
    if (b_0_10045) {
      kk_std_num_ddouble__ddouble y_0_10048 = kk_std_num_ddouble__lp__star__rp_(y, q1, _ctx); /*std/num/ddouble/ddouble*/;
      kk_std_num_ddouble__ddouble r1;
      kk_std_num_ddouble__ddouble _x_x827;
      double _x_x828;
      double _x_x829;
      {
        double _x_2 = y_0_10048.hi;
        _x_x829 = _x_2; /*float64*/
      }
      _x_x828 = (-_x_x829); /*float64*/
      double _x_x830;
      double _x_x831;
      {
        double _x_0_1 = y_0_10048.lo;
        _x_x831 = _x_0_1; /*float64*/
      }
      _x_x830 = (-_x_x831); /*float64*/
      _x_x827 = kk_std_num_ddouble__new_Ddouble(_x_x828, _x_x830, _ctx); /*std/num/ddouble/ddouble*/
      r1 = kk_std_num_ddouble__lp__plus__rp_(x, _x_x827, _ctx); /*std/num/ddouble/ddouble*/
      double d_0_10049;
      double _x_x832;
      {
        double _x_2_0 = r1.hi;
        _x_x832 = _x_2_0; /*float64*/
      }
      double _x_x833;
      {
        double _x_3 = y.hi;
        _x_x833 = _x_3; /*float64*/
      }
      d_0_10049 = (_x_x832 / _x_x833); /*float64*/
      kk_std_num_ddouble__ddouble q2 = kk_std_num_ddouble__new_Ddouble(d_0_10049, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/;
      kk_std_num_ddouble__ddouble y_1_10053 = kk_std_num_ddouble__lp__star__rp_(y, q2, _ctx); /*std/num/ddouble/ddouble*/;
      kk_std_num_ddouble__ddouble r2;
      kk_std_num_ddouble__ddouble _x_x834;
      double _x_x835;
      double _x_x836;
      {
        double _x_4 = y_1_10053.hi;
        _x_x836 = _x_4; /*float64*/
      }
      _x_x835 = (-_x_x836); /*float64*/
      double _x_x837;
      double _x_x838;
      {
        double _x_0_2 = y_1_10053.lo;
        _x_x838 = _x_0_2; /*float64*/
      }
      _x_x837 = (-_x_x838); /*float64*/
      _x_x834 = kk_std_num_ddouble__new_Ddouble(_x_x835, _x_x837, _ctx); /*std/num/ddouble/ddouble*/
      r2 = kk_std_num_ddouble__lp__plus__rp_(r1, _x_x834, _ctx); /*std/num/ddouble/ddouble*/
      double d_1_10054;
      double _x_x839;
      {
        double _x_4_0 = r2.hi;
        _x_x839 = _x_4_0; /*float64*/
      }
      double _x_x840;
      {
        double _x_5 = y.hi;
        _x_x840 = _x_5; /*float64*/
      }
      d_1_10054 = (_x_x839 / _x_x840); /*float64*/
      kk_std_num_ddouble__ddouble q;
      double _x_x841;
      {
        double _x_6 = q1.hi;
        _x_x841 = _x_6; /*float64*/
      }
      double _x_x842;
      {
        double _x_7 = q2.hi;
        _x_x842 = _x_7; /*float64*/
      }
      q = kk_std_num_ddouble_dquicksum(_x_x841, _x_x842, _ctx); /*std/num/ddouble/ddouble*/
      kk_std_num_ddouble__ddouble _x_x843 = kk_std_num_ddouble__new_Ddouble(d_1_10054, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/
      return kk_std_num_ddouble__lp__plus__rp_(q, _x_x843, _ctx);
    }
    {
      return q1;
    }
  }
  {
    return q1;
  }
}
 
// Not-A-Number

kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_nan;

kk_std_num_ddouble__ddouble kk_std_num_ddouble_dsum(double x, double y, kk_context_t* _ctx) { /* (x : float64, y : float64) -> ddouble */ 
  double z = (x + y); /*float64*/;
  double diff = (z - x); /*float64*/;
  double err;
  double _x_x849;
  double _x_x850 = (z - diff); /*float64*/
  _x_x849 = (x - _x_x850); /*float64*/
  double _x_x851 = (y - diff); /*float64*/
  err = (_x_x849 + _x_x851); /*float64*/
  double _x_x852;
  bool _match_x729 = isfinite(z); /*bool*/;
  if (_match_x729) {
    _x_x852 = err; /*float64*/
  }
  else {
    _x_x852 = z; /*float64*/
  }
  return kk_std_num_ddouble__new_Ddouble(z, _x_x852, _ctx);
}

kk_integer_t kk_std_num_ddouble_minprecise;

bool kk_std_num_ddouble_is_precise(kk_integer_t i, kk_context_t* _ctx) { /* (i : int) -> bool */ 
  bool _match_x725 = kk_integer_gte_borrow(i,kk_std_num_ddouble_minprecise,kk_context()); /*bool*/;
  if (_match_x725) {
    kk_integer_t _brw_x726 = kk_integer_from_str("9007199254740991", _ctx); /*int*/;
    bool _brw_x727 = kk_integer_lte_borrow(i,_brw_x726,kk_context()); /*bool*/;
    kk_integer_drop(i, _ctx);
    kk_integer_drop(_brw_x726, _ctx);
    return _brw_x727;
  }
  {
    kk_integer_drop(i, _ctx);
    return false;
  }
}
 
// Multiply `x` with itself.

kk_std_num_ddouble__ddouble kk_std_num_ddouble_sqr(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> ddouble */ 
  double z;
  double _x_x854;
  {
    double _x = x.hi;
    _x_x854 = _x; /*float64*/
  }
  double _x_x855;
  {
    double _x_0 = x.hi;
    _x_x855 = _x_0; /*float64*/
  }
  z = (_x_x854 * _x_x855); /*float64*/
  double err;
  double _x_x856;
  {
    double _x_1 = x.hi;
    _x_x856 = _x_1; /*float64*/
  }
  double _x_x857;
  {
    double _x_2 = x.hi;
    _x_x857 = _x_2; /*float64*/
  }
  double _x_x858 = (-z); /*float64*/
  err = kk_std_num_float64_fmadd(_x_x856, _x_x857, _x_x858, _ctx); /*float64*/
  kk_std_num_ddouble__edouble z_0 = kk_std_num_ddouble__new_Edouble(z, err, _ctx); /*std/num/ddouble/edouble*/;
  double e;
  double _x_x859;
  double _x_x860;
  {
    double _x_0_0 = z_0.err;
    _x_x860 = _x_0_0; /*float64*/
  }
  double _x_x861;
  double _x_x862;
  double _x_x863;
  {
    double _x_1_0 = x.hi;
    _x_x863 = _x_1_0; /*float64*/
  }
  _x_x862 = (0x1p1 * _x_x863); /*float64*/
  double _x_x864;
  {
    double _x_2_0 = x.lo;
    _x_x864 = _x_2_0; /*float64*/
  }
  _x_x861 = (_x_x862 * _x_x864); /*float64*/
  _x_x859 = (_x_x860 + _x_x861); /*float64*/
  double _x_x865;
  double _x_x866;
  {
    double _x_3 = x.lo;
    _x_x866 = _x_3; /*float64*/
  }
  double _x_x867;
  {
    double _x_4 = x.lo;
    _x_x867 = _x_4; /*float64*/
  }
  _x_x865 = (_x_x866 * _x_x867); /*float64*/
  e = (_x_x859 + _x_x865); /*float64*/
  double _x_x868;
  {
    double _x_5 = z_0.num;
    _x_x868 = _x_5; /*float64*/
  }
  return kk_std_num_ddouble_dquicksum(_x_x868, e, _ctx);
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble_npwr_acc(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble acc, kk_integer_t n, kk_context_t* _ctx) { /* (x : ddouble, acc : ddouble, n : int) -> ddouble */ 
  kk__tailcall: ;
  bool _match_x724 = kk_integer_lte_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x724) {
    kk_integer_drop(n, _ctx);
    return acc;
  }
  {
    bool b_10014;
    kk_integer_t _x_x869 = kk_integer_dup(n, _ctx); /*int*/
    b_10014 = kk_integer_is_odd(_x_x869,kk_context()); /*bool*/
    if (b_10014) { // tailcall
                   kk_std_num_ddouble__ddouble _x_x870 = kk_std_num_ddouble__lp__star__rp_(x, acc, _ctx); /*std/num/ddouble/ddouble*/
                   kk_integer_t _x_x871 = kk_integer_add_small_const(n, -1, _ctx); /*int*/
                   acc = _x_x870;
                   n = _x_x871;
                   goto kk__tailcall;
    }
    { // tailcall
      kk_std_num_ddouble__ddouble _x_x872 = kk_std_num_ddouble_sqr(x, _ctx); /*std/num/ddouble/ddouble*/
      kk_integer_t _x_x873 = kk_integer_div(n,(kk_integer_from_small(2)),kk_context()); /*int*/
      x = _x_x872;
      n = _x_x873;
      goto kk__tailcall;
    }
  }
}
 
// One

kk_std_num_ddouble__ddouble kk_std_num_ddouble_one;

kk_std_num_ddouble__ddouble kk_std_num_ddouble_npwr(kk_std_num_ddouble__ddouble x, kk_integer_t n, kk_context_t* _ctx) { /* (x : ddouble, n : int) -> ddouble */ 
  bool _match_x721 = kk_integer_eq_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x721) {
    kk_integer_drop(n, _ctx);
    bool _match_x723;
    double _x_x874;
    {
      double _x = x.hi;
      _x_x874 = _x; /*float64*/
    }
    _match_x723 = (_x_x874 == (0x0p+0)); /*bool*/
    if (_match_x723) {
      return kk_std_num_ddouble_dd_nan;
    }
    {
      return kk_std_num_ddouble_one;
    }
  }
  {
    bool _match_x722 = kk_integer_eq_borrow(n,(kk_integer_from_small(1)),kk_context()); /*bool*/;
    if (_match_x722) {
      kk_integer_drop(n, _ctx);
      return x;
    }
    {
      return kk_std_num_ddouble_npwr_acc(x, kk_std_num_ddouble_one, n, _ctx);
    }
  }
}
 
// Return `x` to the power of `n`.

kk_std_num_ddouble__ddouble kk_std_num_ddouble_powi(kk_std_num_ddouble__ddouble x, kk_integer_t n, kk_context_t* _ctx) { /* (x : ddouble, n : int) -> ddouble */ 
  kk_integer_t n_0_10594;
  kk_integer_t _x_x875 = kk_integer_dup(n, _ctx); /*int*/
  n_0_10594 = kk_integer_abs(_x_x875,kk_context()); /*int*/
  kk_std_num_ddouble__ddouble p;
  bool _match_x718 = kk_integer_eq_borrow(n_0_10594,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x718) {
    kk_integer_drop(n_0_10594, _ctx);
    bool _match_x720;
    double _x_x876;
    {
      double _x = x.hi;
      _x_x876 = _x; /*float64*/
    }
    _match_x720 = (_x_x876 == (0x0p+0)); /*bool*/
    if (_match_x720) {
      p = kk_std_num_ddouble_dd_nan; /*std/num/ddouble/ddouble*/
    }
    else {
      p = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
    }
  }
  else {
    bool _match_x719 = kk_integer_eq_borrow(n_0_10594,(kk_integer_from_small(1)),kk_context()); /*bool*/;
    if (_match_x719) {
      kk_integer_drop(n_0_10594, _ctx);
      p = x; /*std/num/ddouble/ddouble*/
    }
    else {
      p = kk_std_num_ddouble_npwr_acc(x, kk_std_num_ddouble_one, n_0_10594, _ctx); /*std/num/ddouble/ddouble*/
    }
  }
  bool _match_x716;
  bool _brw_x717 = kk_integer_lt_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(n, _ctx);
  _match_x716 = _brw_x717; /*bool*/
  if (_match_x716) {
    return kk_std_num_ddouble__lp__fs__rp_(kk_std_num_ddouble_one, p, _ctx);
  }
  {
    return p;
  }
}
 
// Ten (`10.ddouble`)

kk_std_num_ddouble__ddouble kk_std_num_ddouble_ten;

kk_std_num_ddouble__ddouble kk_std_num_ddouble_small_exp(kk_integer_t i, kk_integer_t e, kk_context_t* _ctx) { /* (i : int, e : int) -> ddouble */ 
  double d_10081 = kk_integer_as_double(i,kk_context()); /*float64*/;
  kk_std_num_ddouble__ddouble dd = kk_std_num_ddouble__new_Ddouble(d_10081, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/;
  bool _match_x713 = kk_integer_is_zero_borrow(e); /*bool*/;
  if (_match_x713) {
    kk_integer_drop(e, _ctx);
    return dd;
  }
  {
    bool _match_x714 = kk_integer_is_zero_borrow(e); /*bool*/;
    if (_match_x714) {
      kk_integer_drop(e, _ctx);
      return dd;
    }
    {
      kk_std_num_ddouble__ddouble _x_x878 = kk_std_num_ddouble_powi(kk_std_num_ddouble_ten, e, _ctx); /*std/num/ddouble/ddouble*/
      return kk_std_num_ddouble__lp__star__rp_(dd, _x_x878, _ctx);
    }
  }
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble_ddouble_int_exp(kk_integer_t i, kk_integer_t e, kk_context_t* _ctx) { /* (i : int, e : int) -> ddouble */ 
  bool _match_x673 = kk_integer_gte_borrow(i,kk_std_num_ddouble_minprecise,kk_context()); /*bool*/;
  if (_match_x673) {
    bool _match_x692;
    kk_integer_t _brw_x711 = kk_integer_from_str("9007199254740991", _ctx); /*int*/;
    bool _brw_x712 = kk_integer_lte_borrow(i,_brw_x711,kk_context()); /*bool*/;
    kk_integer_drop(_brw_x711, _ctx);
    _match_x692 = _brw_x712; /*bool*/
    if (_match_x692) {
      return kk_std_num_ddouble_small_exp(i, e, _ctx);
    }
    {
      kk_integer_t p;
      kk_integer_t _x_x879 = kk_integer_dup(i, _ctx); /*int*/
      p = kk_std_core_int_count_digits(_x_x879, _ctx); /*int*/
      kk_integer_t px = kk_integer_add_small_const(p, -14, _ctx); /*int*/;
      kk_std_core_types__tuple2 _match_x693;
      kk_integer_t _x_x880 = kk_integer_dup(px, _ctx); /*int*/
      _match_x693 = kk_std_core_int_cdivmod_exp10(i, _x_x880, _ctx); /*(int, int)*/
      {
        kk_box_t _box_x4 = _match_x693.fst;
        kk_box_t _box_x5 = _match_x693.snd;
        kk_integer_t hi = kk_integer_unbox(_box_x4, _ctx);
        kk_integer_t y_0 = kk_integer_unbox(_box_x5, _ctx);
        kk_integer_dup(hi, _ctx);
        kk_integer_dup(y_0, _ctx);
        kk_std_core_types__tuple2_drop(_match_x693, _ctx);
        kk_integer_t py;
        kk_integer_t _x_x881 = kk_integer_dup(px, _ctx); /*int*/
        py = kk_integer_add_small_const(_x_x881, -14, _ctx); /*int*/
        bool _match_x694 = kk_integer_lte_borrow(py,(kk_integer_from_small(0)),kk_context()); /*bool*/;
        if (_match_x694) {
          kk_integer_drop(py, _ctx);
          kk_integer_t e_0_10088;
          kk_integer_t _x_x882 = kk_integer_dup(e, _ctx); /*int*/
          e_0_10088 = kk_integer_add(px,_x_x882,kk_context()); /*int*/
          double d_10091 = kk_integer_as_double(hi,kk_context()); /*float64*/;
          kk_std_num_ddouble__ddouble dd = kk_std_num_ddouble__new_Ddouble(d_10091, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/;
          kk_std_num_ddouble__ddouble _x_x883;
          bool _match_x709 = kk_integer_is_zero_borrow(e_0_10088); /*bool*/;
          if (_match_x709) {
            kk_integer_drop(e_0_10088, _ctx);
            _x_x883 = dd; /*std/num/ddouble/ddouble*/
          }
          else {
            bool _match_x710 = kk_integer_is_zero_borrow(e_0_10088); /*bool*/;
            if (_match_x710) {
              kk_integer_drop(e_0_10088, _ctx);
              _x_x883 = dd; /*std/num/ddouble/ddouble*/
            }
            else {
              kk_std_num_ddouble__ddouble _x_x884 = kk_std_num_ddouble_powi(kk_std_num_ddouble_ten, e_0_10088, _ctx); /*std/num/ddouble/ddouble*/
              _x_x883 = kk_std_num_ddouble__lp__star__rp_(dd, _x_x884, _ctx); /*std/num/ddouble/ddouble*/
            }
          }
          kk_std_num_ddouble__ddouble _x_x885 = kk_std_num_ddouble_small_exp(y_0, e, _ctx); /*std/num/ddouble/ddouble*/
          return kk_std_num_ddouble__lp__plus__rp_(_x_x883, _x_x885, _ctx);
        }
        {
          kk_std_core_types__tuple2 _match_x695;
          kk_integer_t _x_x886 = kk_integer_dup(py, _ctx); /*int*/
          _match_x695 = kk_std_core_int_cdivmod_exp10(y_0, _x_x886, _ctx); /*(int, int)*/
          {
            kk_box_t _box_x6 = _match_x695.fst;
            kk_box_t _box_x7 = _match_x695.snd;
            kk_integer_t mid = kk_integer_unbox(_box_x6, _ctx);
            kk_integer_t z = kk_integer_unbox(_box_x7, _ctx);
            kk_integer_dup(mid, _ctx);
            kk_integer_dup(z, _ctx);
            kk_std_core_types__tuple2_drop(_match_x695, _ctx);
            kk_integer_t pz;
            kk_integer_t _x_x887 = kk_integer_dup(py, _ctx); /*int*/
            pz = kk_integer_add_small_const(_x_x887, -14, _ctx); /*int*/
            bool _match_x696 = kk_integer_lte_borrow(pz,(kk_integer_from_small(0)),kk_context()); /*bool*/;
            if (_match_x696) {
              kk_integer_drop(pz, _ctx);
              kk_integer_t e_1_10095;
              kk_integer_t _x_x888 = kk_integer_dup(e, _ctx); /*int*/
              e_1_10095 = kk_integer_add(px,_x_x888,kk_context()); /*int*/
              double d_0_10098 = kk_integer_as_double(hi,kk_context()); /*float64*/;
              kk_std_num_ddouble__ddouble dd_0 = kk_std_num_ddouble__new_Ddouble(d_0_10098, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/;
              kk_integer_t e_2_10100;
              kk_integer_t _x_x889 = kk_integer_dup(e, _ctx); /*int*/
              e_2_10100 = kk_integer_add(py,_x_x889,kk_context()); /*int*/
              double d_1_10103 = kk_integer_as_double(mid,kk_context()); /*float64*/;
              kk_std_num_ddouble__ddouble dd_1 = kk_std_num_ddouble__new_Ddouble(d_1_10103, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/;
              kk_integer_t e_3_10105 = kk_integer_add_small_const(e, 0, _ctx); /*int*/;
              double d_2_10108 = kk_integer_as_double(z,kk_context()); /*float64*/;
              kk_std_num_ddouble__ddouble dd_2 = kk_std_num_ddouble__new_Ddouble(d_2_10108, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/;
              kk_std_num_ddouble__ddouble _x_x890;
              bool _match_x707 = kk_integer_is_zero_borrow(e_1_10095); /*bool*/;
              if (_match_x707) {
                kk_integer_drop(e_1_10095, _ctx);
                _x_x890 = dd_0; /*std/num/ddouble/ddouble*/
              }
              else {
                bool _match_x708 = kk_integer_is_zero_borrow(e_1_10095); /*bool*/;
                if (_match_x708) {
                  kk_integer_drop(e_1_10095, _ctx);
                  _x_x890 = dd_0; /*std/num/ddouble/ddouble*/
                }
                else {
                  kk_std_num_ddouble__ddouble _x_x891 = kk_std_num_ddouble_powi(kk_std_num_ddouble_ten, e_1_10095, _ctx); /*std/num/ddouble/ddouble*/
                  _x_x890 = kk_std_num_ddouble__lp__star__rp_(dd_0, _x_x891, _ctx); /*std/num/ddouble/ddouble*/
                }
              }
              kk_std_num_ddouble__ddouble _x_x892;
              kk_std_num_ddouble__ddouble _x_x893;
              bool _match_x705 = kk_integer_is_zero_borrow(e_2_10100); /*bool*/;
              if (_match_x705) {
                kk_integer_drop(e_2_10100, _ctx);
                _x_x893 = dd_1; /*std/num/ddouble/ddouble*/
              }
              else {
                bool _match_x706 = kk_integer_is_zero_borrow(e_2_10100); /*bool*/;
                if (_match_x706) {
                  kk_integer_drop(e_2_10100, _ctx);
                  _x_x893 = dd_1; /*std/num/ddouble/ddouble*/
                }
                else {
                  kk_std_num_ddouble__ddouble _x_x894 = kk_std_num_ddouble_powi(kk_std_num_ddouble_ten, e_2_10100, _ctx); /*std/num/ddouble/ddouble*/
                  _x_x893 = kk_std_num_ddouble__lp__star__rp_(dd_1, _x_x894, _ctx); /*std/num/ddouble/ddouble*/
                }
              }
              kk_std_num_ddouble__ddouble _x_x895;
              bool _match_x703 = kk_integer_is_zero_borrow(e_3_10105); /*bool*/;
              if (_match_x703) {
                kk_integer_drop(e_3_10105, _ctx);
                _x_x895 = dd_2; /*std/num/ddouble/ddouble*/
              }
              else {
                bool _match_x704 = kk_integer_is_zero_borrow(e_3_10105); /*bool*/;
                if (_match_x704) {
                  kk_integer_drop(e_3_10105, _ctx);
                  _x_x895 = dd_2; /*std/num/ddouble/ddouble*/
                }
                else {
                  kk_std_num_ddouble__ddouble _x_x896 = kk_std_num_ddouble_powi(kk_std_num_ddouble_ten, e_3_10105, _ctx); /*std/num/ddouble/ddouble*/
                  _x_x895 = kk_std_num_ddouble__lp__star__rp_(dd_2, _x_x896, _ctx); /*std/num/ddouble/ddouble*/
                }
              }
              _x_x892 = kk_std_num_ddouble__lp__plus__rp_(_x_x893, _x_x895, _ctx); /*std/num/ddouble/ddouble*/
              return kk_std_num_ddouble__lp__plus__rp_(_x_x890, _x_x892, _ctx);
            }
            {
              kk_integer_t lo;
              kk_integer_t _x_x897 = kk_integer_dup(pz, _ctx); /*int*/
              lo = kk_std_core_int_cdiv_exp10(z, _x_x897, _ctx); /*int*/
              kk_integer_t e_4_10110;
              kk_integer_t _x_x898 = kk_integer_dup(e, _ctx); /*int*/
              e_4_10110 = kk_integer_add(px,_x_x898,kk_context()); /*int*/
              double d_3_10113 = kk_integer_as_double(hi,kk_context()); /*float64*/;
              kk_std_num_ddouble__ddouble dd_3 = kk_std_num_ddouble__new_Ddouble(d_3_10113, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/;
              kk_integer_t e_5_10115;
              kk_integer_t _x_x899 = kk_integer_dup(e, _ctx); /*int*/
              e_5_10115 = kk_integer_add(py,_x_x899,kk_context()); /*int*/
              double d_4_10118 = kk_integer_as_double(mid,kk_context()); /*float64*/;
              kk_std_num_ddouble__ddouble dd_4 = kk_std_num_ddouble__new_Ddouble(d_4_10118, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/;
              kk_integer_t e_6_10120 = kk_integer_add(pz,e,kk_context()); /*int*/;
              double d_5_10123 = kk_integer_as_double(lo,kk_context()); /*float64*/;
              kk_std_num_ddouble__ddouble dd_5 = kk_std_num_ddouble__new_Ddouble(d_5_10123, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/;
              kk_std_num_ddouble__ddouble _x_x900;
              bool _match_x701 = kk_integer_is_zero_borrow(e_4_10110); /*bool*/;
              if (_match_x701) {
                kk_integer_drop(e_4_10110, _ctx);
                _x_x900 = dd_3; /*std/num/ddouble/ddouble*/
              }
              else {
                bool _match_x702 = kk_integer_is_zero_borrow(e_4_10110); /*bool*/;
                if (_match_x702) {
                  kk_integer_drop(e_4_10110, _ctx);
                  _x_x900 = dd_3; /*std/num/ddouble/ddouble*/
                }
                else {
                  kk_std_num_ddouble__ddouble _x_x901 = kk_std_num_ddouble_powi(kk_std_num_ddouble_ten, e_4_10110, _ctx); /*std/num/ddouble/ddouble*/
                  _x_x900 = kk_std_num_ddouble__lp__star__rp_(dd_3, _x_x901, _ctx); /*std/num/ddouble/ddouble*/
                }
              }
              kk_std_num_ddouble__ddouble _x_x902;
              kk_std_num_ddouble__ddouble _x_x903;
              bool _match_x699 = kk_integer_is_zero_borrow(e_5_10115); /*bool*/;
              if (_match_x699) {
                kk_integer_drop(e_5_10115, _ctx);
                _x_x903 = dd_4; /*std/num/ddouble/ddouble*/
              }
              else {
                bool _match_x700 = kk_integer_is_zero_borrow(e_5_10115); /*bool*/;
                if (_match_x700) {
                  kk_integer_drop(e_5_10115, _ctx);
                  _x_x903 = dd_4; /*std/num/ddouble/ddouble*/
                }
                else {
                  kk_std_num_ddouble__ddouble _x_x904 = kk_std_num_ddouble_powi(kk_std_num_ddouble_ten, e_5_10115, _ctx); /*std/num/ddouble/ddouble*/
                  _x_x903 = kk_std_num_ddouble__lp__star__rp_(dd_4, _x_x904, _ctx); /*std/num/ddouble/ddouble*/
                }
              }
              kk_std_num_ddouble__ddouble _x_x905;
              bool _match_x697 = kk_integer_is_zero_borrow(e_6_10120); /*bool*/;
              if (_match_x697) {
                kk_integer_drop(e_6_10120, _ctx);
                _x_x905 = dd_5; /*std/num/ddouble/ddouble*/
              }
              else {
                bool _match_x698 = kk_integer_is_zero_borrow(e_6_10120); /*bool*/;
                if (_match_x698) {
                  kk_integer_drop(e_6_10120, _ctx);
                  _x_x905 = dd_5; /*std/num/ddouble/ddouble*/
                }
                else {
                  kk_std_num_ddouble__ddouble _x_x906 = kk_std_num_ddouble_powi(kk_std_num_ddouble_ten, e_6_10120, _ctx); /*std/num/ddouble/ddouble*/
                  _x_x905 = kk_std_num_ddouble__lp__star__rp_(dd_5, _x_x906, _ctx); /*std/num/ddouble/ddouble*/
                }
              }
              _x_x902 = kk_std_num_ddouble__lp__plus__rp_(_x_x903, _x_x905, _ctx); /*std/num/ddouble/ddouble*/
              return kk_std_num_ddouble__lp__plus__rp_(_x_x900, _x_x902, _ctx);
            }
          }
        }
      }
    }
  }
  {
    kk_integer_t p_0;
    kk_integer_t _x_x907 = kk_integer_dup(i, _ctx); /*int*/
    p_0 = kk_std_core_int_count_digits(_x_x907, _ctx); /*int*/
    kk_integer_t px_0 = kk_integer_add_small_const(p_0, -14, _ctx); /*int*/;
    kk_std_core_types__tuple2 _match_x674;
    kk_integer_t _x_x908 = kk_integer_dup(px_0, _ctx); /*int*/
    _match_x674 = kk_std_core_int_cdivmod_exp10(i, _x_x908, _ctx); /*(int, int)*/
    {
      kk_box_t _box_x8 = _match_x674.fst;
      kk_box_t _box_x9 = _match_x674.snd;
      kk_integer_t hi_0 = kk_integer_unbox(_box_x8, _ctx);
      kk_integer_t y_0_0 = kk_integer_unbox(_box_x9, _ctx);
      kk_integer_dup(hi_0, _ctx);
      kk_integer_dup(y_0_0, _ctx);
      kk_std_core_types__tuple2_drop(_match_x674, _ctx);
      kk_integer_t py_0;
      kk_integer_t _x_x909 = kk_integer_dup(px_0, _ctx); /*int*/
      py_0 = kk_integer_add_small_const(_x_x909, -14, _ctx); /*int*/
      bool _match_x675 = kk_integer_lte_borrow(py_0,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      if (_match_x675) {
        kk_integer_drop(py_0, _ctx);
        kk_integer_t e_0_10088_0;
        kk_integer_t _x_x910 = kk_integer_dup(e, _ctx); /*int*/
        e_0_10088_0 = kk_integer_add(px_0,_x_x910,kk_context()); /*int*/
        double d_10091_0 = kk_integer_as_double(hi_0,kk_context()); /*float64*/;
        kk_std_num_ddouble__ddouble dd_6 = kk_std_num_ddouble__new_Ddouble(d_10091_0, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/;
        kk_std_num_ddouble__ddouble _x_x911;
        bool _match_x690 = kk_integer_is_zero_borrow(e_0_10088_0); /*bool*/;
        if (_match_x690) {
          kk_integer_drop(e_0_10088_0, _ctx);
          _x_x911 = dd_6; /*std/num/ddouble/ddouble*/
        }
        else {
          bool _match_x691 = kk_integer_is_zero_borrow(e_0_10088_0); /*bool*/;
          if (_match_x691) {
            kk_integer_drop(e_0_10088_0, _ctx);
            _x_x911 = dd_6; /*std/num/ddouble/ddouble*/
          }
          else {
            kk_std_num_ddouble__ddouble _x_x912 = kk_std_num_ddouble_powi(kk_std_num_ddouble_ten, e_0_10088_0, _ctx); /*std/num/ddouble/ddouble*/
            _x_x911 = kk_std_num_ddouble__lp__star__rp_(dd_6, _x_x912, _ctx); /*std/num/ddouble/ddouble*/
          }
        }
        kk_std_num_ddouble__ddouble _x_x913 = kk_std_num_ddouble_small_exp(y_0_0, e, _ctx); /*std/num/ddouble/ddouble*/
        return kk_std_num_ddouble__lp__plus__rp_(_x_x911, _x_x913, _ctx);
      }
      {
        kk_std_core_types__tuple2 _match_x676;
        kk_integer_t _x_x914 = kk_integer_dup(py_0, _ctx); /*int*/
        _match_x676 = kk_std_core_int_cdivmod_exp10(y_0_0, _x_x914, _ctx); /*(int, int)*/
        {
          kk_box_t _box_x10 = _match_x676.fst;
          kk_box_t _box_x11 = _match_x676.snd;
          kk_integer_t mid_0 = kk_integer_unbox(_box_x10, _ctx);
          kk_integer_t z_0 = kk_integer_unbox(_box_x11, _ctx);
          kk_integer_dup(mid_0, _ctx);
          kk_integer_dup(z_0, _ctx);
          kk_std_core_types__tuple2_drop(_match_x676, _ctx);
          kk_integer_t pz_0;
          kk_integer_t _x_x915 = kk_integer_dup(py_0, _ctx); /*int*/
          pz_0 = kk_integer_add_small_const(_x_x915, -14, _ctx); /*int*/
          bool _match_x677 = kk_integer_lte_borrow(pz_0,(kk_integer_from_small(0)),kk_context()); /*bool*/;
          if (_match_x677) {
            kk_integer_drop(pz_0, _ctx);
            kk_integer_t e_1_10095_0;
            kk_integer_t _x_x916 = kk_integer_dup(e, _ctx); /*int*/
            e_1_10095_0 = kk_integer_add(px_0,_x_x916,kk_context()); /*int*/
            double d_0_10098_0 = kk_integer_as_double(hi_0,kk_context()); /*float64*/;
            kk_std_num_ddouble__ddouble dd_0_0 = kk_std_num_ddouble__new_Ddouble(d_0_10098_0, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/;
            kk_integer_t e_2_10100_0;
            kk_integer_t _x_x917 = kk_integer_dup(e, _ctx); /*int*/
            e_2_10100_0 = kk_integer_add(py_0,_x_x917,kk_context()); /*int*/
            double d_1_10103_0 = kk_integer_as_double(mid_0,kk_context()); /*float64*/;
            kk_std_num_ddouble__ddouble dd_1_0 = kk_std_num_ddouble__new_Ddouble(d_1_10103_0, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/;
            kk_integer_t e_3_10105_0 = kk_integer_add_small_const(e, 0, _ctx); /*int*/;
            double d_2_10108_0 = kk_integer_as_double(z_0,kk_context()); /*float64*/;
            kk_std_num_ddouble__ddouble dd_2_0 = kk_std_num_ddouble__new_Ddouble(d_2_10108_0, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/;
            kk_std_num_ddouble__ddouble _x_x918;
            bool _match_x688 = kk_integer_is_zero_borrow(e_1_10095_0); /*bool*/;
            if (_match_x688) {
              kk_integer_drop(e_1_10095_0, _ctx);
              _x_x918 = dd_0_0; /*std/num/ddouble/ddouble*/
            }
            else {
              bool _match_x689 = kk_integer_is_zero_borrow(e_1_10095_0); /*bool*/;
              if (_match_x689) {
                kk_integer_drop(e_1_10095_0, _ctx);
                _x_x918 = dd_0_0; /*std/num/ddouble/ddouble*/
              }
              else {
                kk_std_num_ddouble__ddouble _x_x919 = kk_std_num_ddouble_powi(kk_std_num_ddouble_ten, e_1_10095_0, _ctx); /*std/num/ddouble/ddouble*/
                _x_x918 = kk_std_num_ddouble__lp__star__rp_(dd_0_0, _x_x919, _ctx); /*std/num/ddouble/ddouble*/
              }
            }
            kk_std_num_ddouble__ddouble _x_x920;
            kk_std_num_ddouble__ddouble _x_x921;
            bool _match_x686 = kk_integer_is_zero_borrow(e_2_10100_0); /*bool*/;
            if (_match_x686) {
              kk_integer_drop(e_2_10100_0, _ctx);
              _x_x921 = dd_1_0; /*std/num/ddouble/ddouble*/
            }
            else {
              bool _match_x687 = kk_integer_is_zero_borrow(e_2_10100_0); /*bool*/;
              if (_match_x687) {
                kk_integer_drop(e_2_10100_0, _ctx);
                _x_x921 = dd_1_0; /*std/num/ddouble/ddouble*/
              }
              else {
                kk_std_num_ddouble__ddouble _x_x922 = kk_std_num_ddouble_powi(kk_std_num_ddouble_ten, e_2_10100_0, _ctx); /*std/num/ddouble/ddouble*/
                _x_x921 = kk_std_num_ddouble__lp__star__rp_(dd_1_0, _x_x922, _ctx); /*std/num/ddouble/ddouble*/
              }
            }
            kk_std_num_ddouble__ddouble _x_x923;
            bool _match_x684 = kk_integer_is_zero_borrow(e_3_10105_0); /*bool*/;
            if (_match_x684) {
              kk_integer_drop(e_3_10105_0, _ctx);
              _x_x923 = dd_2_0; /*std/num/ddouble/ddouble*/
            }
            else {
              bool _match_x685 = kk_integer_is_zero_borrow(e_3_10105_0); /*bool*/;
              if (_match_x685) {
                kk_integer_drop(e_3_10105_0, _ctx);
                _x_x923 = dd_2_0; /*std/num/ddouble/ddouble*/
              }
              else {
                kk_std_num_ddouble__ddouble _x_x924 = kk_std_num_ddouble_powi(kk_std_num_ddouble_ten, e_3_10105_0, _ctx); /*std/num/ddouble/ddouble*/
                _x_x923 = kk_std_num_ddouble__lp__star__rp_(dd_2_0, _x_x924, _ctx); /*std/num/ddouble/ddouble*/
              }
            }
            _x_x920 = kk_std_num_ddouble__lp__plus__rp_(_x_x921, _x_x923, _ctx); /*std/num/ddouble/ddouble*/
            return kk_std_num_ddouble__lp__plus__rp_(_x_x918, _x_x920, _ctx);
          }
          {
            kk_integer_t lo_0;
            kk_integer_t _x_x925 = kk_integer_dup(pz_0, _ctx); /*int*/
            lo_0 = kk_std_core_int_cdiv_exp10(z_0, _x_x925, _ctx); /*int*/
            kk_integer_t e_4_10110_0;
            kk_integer_t _x_x926 = kk_integer_dup(e, _ctx); /*int*/
            e_4_10110_0 = kk_integer_add(px_0,_x_x926,kk_context()); /*int*/
            double d_3_10113_0 = kk_integer_as_double(hi_0,kk_context()); /*float64*/;
            kk_std_num_ddouble__ddouble dd_3_0 = kk_std_num_ddouble__new_Ddouble(d_3_10113_0, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/;
            kk_integer_t e_5_10115_0;
            kk_integer_t _x_x927 = kk_integer_dup(e, _ctx); /*int*/
            e_5_10115_0 = kk_integer_add(py_0,_x_x927,kk_context()); /*int*/
            double d_4_10118_0 = kk_integer_as_double(mid_0,kk_context()); /*float64*/;
            kk_std_num_ddouble__ddouble dd_4_0 = kk_std_num_ddouble__new_Ddouble(d_4_10118_0, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/;
            kk_integer_t e_6_10120_0 = kk_integer_add(pz_0,e,kk_context()); /*int*/;
            double d_5_10123_0 = kk_integer_as_double(lo_0,kk_context()); /*float64*/;
            kk_std_num_ddouble__ddouble dd_5_0 = kk_std_num_ddouble__new_Ddouble(d_5_10123_0, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/;
            kk_std_num_ddouble__ddouble _x_x928;
            bool _match_x682 = kk_integer_is_zero_borrow(e_4_10110_0); /*bool*/;
            if (_match_x682) {
              kk_integer_drop(e_4_10110_0, _ctx);
              _x_x928 = dd_3_0; /*std/num/ddouble/ddouble*/
            }
            else {
              bool _match_x683 = kk_integer_is_zero_borrow(e_4_10110_0); /*bool*/;
              if (_match_x683) {
                kk_integer_drop(e_4_10110_0, _ctx);
                _x_x928 = dd_3_0; /*std/num/ddouble/ddouble*/
              }
              else {
                kk_std_num_ddouble__ddouble _x_x929 = kk_std_num_ddouble_powi(kk_std_num_ddouble_ten, e_4_10110_0, _ctx); /*std/num/ddouble/ddouble*/
                _x_x928 = kk_std_num_ddouble__lp__star__rp_(dd_3_0, _x_x929, _ctx); /*std/num/ddouble/ddouble*/
              }
            }
            kk_std_num_ddouble__ddouble _x_x930;
            kk_std_num_ddouble__ddouble _x_x931;
            bool _match_x680 = kk_integer_is_zero_borrow(e_5_10115_0); /*bool*/;
            if (_match_x680) {
              kk_integer_drop(e_5_10115_0, _ctx);
              _x_x931 = dd_4_0; /*std/num/ddouble/ddouble*/
            }
            else {
              bool _match_x681 = kk_integer_is_zero_borrow(e_5_10115_0); /*bool*/;
              if (_match_x681) {
                kk_integer_drop(e_5_10115_0, _ctx);
                _x_x931 = dd_4_0; /*std/num/ddouble/ddouble*/
              }
              else {
                kk_std_num_ddouble__ddouble _x_x932 = kk_std_num_ddouble_powi(kk_std_num_ddouble_ten, e_5_10115_0, _ctx); /*std/num/ddouble/ddouble*/
                _x_x931 = kk_std_num_ddouble__lp__star__rp_(dd_4_0, _x_x932, _ctx); /*std/num/ddouble/ddouble*/
              }
            }
            kk_std_num_ddouble__ddouble _x_x933;
            bool _match_x678 = kk_integer_is_zero_borrow(e_6_10120_0); /*bool*/;
            if (_match_x678) {
              kk_integer_drop(e_6_10120_0, _ctx);
              _x_x933 = dd_5_0; /*std/num/ddouble/ddouble*/
            }
            else {
              bool _match_x679 = kk_integer_is_zero_borrow(e_6_10120_0); /*bool*/;
              if (_match_x679) {
                kk_integer_drop(e_6_10120_0, _ctx);
                _x_x933 = dd_5_0; /*std/num/ddouble/ddouble*/
              }
              else {
                kk_std_num_ddouble__ddouble _x_x934 = kk_std_num_ddouble_powi(kk_std_num_ddouble_ten, e_6_10120_0, _ctx); /*std/num/ddouble/ddouble*/
                _x_x933 = kk_std_num_ddouble__lp__star__rp_(dd_5_0, _x_x934, _ctx); /*std/num/ddouble/ddouble*/
              }
            }
            _x_x930 = kk_std_num_ddouble__lp__plus__rp_(_x_x931, _x_x933, _ctx); /*std/num/ddouble/ddouble*/
            return kk_std_num_ddouble__lp__plus__rp_(_x_x928, _x_x930, _ctx);
          }
        }
      }
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_ddouble__mlift_pddouble_normal_10798_fun948__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_ddouble__mlift_pddouble_normal_10798_fun948(kk_function_t _fself, kk_box_t _b_x16, kk_box_t _b_x17, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble__new_mlift_pddouble_normal_10798_fun948(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_ddouble__mlift_pddouble_normal_10798_fun948, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_ddouble__mlift_pddouble_normal_10798_fun948(kk_function_t _fself, kk_box_t _b_x16, kk_box_t _b_x17, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x_x949;
  kk_string_t _x_x950 = kk_string_unbox(_b_x16); /*string*/
  bool _x_x951;
  kk_std_core_types__optional _match_x672 = kk_std_core_types__optional_unbox(_b_x17, KK_OWNED, _ctx); /*? bool*/;
  if (kk_std_core_types__is_Optional(_match_x672, _ctx)) {
    kk_box_t _box_x12 = _match_x672._cons._Optional.value;
    bool _uniq_hex_528 = kk_bool_unbox(_box_x12);
    kk_std_core_types__optional_drop(_match_x672, _ctx);
    _x_x951 = _uniq_hex_528; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x672, _ctx);
    _x_x951 = false; /*bool*/
  }
  _x_x949 = kk_std_core_int_xparse(_x_x950, _x_x951, _ctx); /*maybe<int>*/
  return kk_std_core_types__maybe_box(_x_x949, _ctx);
}


// lift anonymous function
struct kk_std_num_ddouble__mlift_pddouble_normal_10798_fun953__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_ddouble__mlift_pddouble_normal_10798_fun953(kk_function_t _fself, kk_box_t _b_x27, kk_box_t _b_x28, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble__new_mlift_pddouble_normal_10798_fun953(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_ddouble__mlift_pddouble_normal_10798_fun953, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_ddouble__mlift_pddouble_normal_10798_fun953(kk_function_t _fself, kk_box_t _b_x27, kk_box_t _b_x28, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x954;
  kk_std_core_types__maybe _match_x671 = kk_std_core_types__maybe_unbox(_b_x27, KK_OWNED, _ctx); /*maybe<int>*/;
  if (kk_std_core_types__is_Nothing(_match_x671, _ctx)) {
    _x_x954 = kk_integer_unbox(_b_x28, _ctx); /*int*/
  }
  else {
    kk_box_t _box_x23 = _match_x671._cons.Just.value;
    kk_integer_t x = kk_integer_unbox(_box_x23, _ctx);
    kk_integer_dup(x, _ctx);
    kk_std_core_types__maybe_drop(_match_x671, _ctx);
    kk_box_drop(_b_x28, _ctx);
    _x_x954 = x; /*int*/
  }
  return kk_integer_box(_x_x954, _ctx);
}


// lift anonymous function
struct kk_std_num_ddouble__mlift_pddouble_normal_10798_fun956__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_ddouble__mlift_pddouble_normal_10798_fun956(kk_function_t _fself, kk_box_t _b_x37, kk_box_t _b_x38, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble__new_mlift_pddouble_normal_10798_fun956(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_ddouble__mlift_pddouble_normal_10798_fun956, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_ddouble__mlift_pddouble_normal_10798_fun956(kk_function_t _fself, kk_box_t _b_x37, kk_box_t _b_x38, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_num_ddouble__ddouble _x_x957;
  kk_integer_t _x_x958 = kk_integer_unbox(_b_x37, _ctx); /*int*/
  kk_integer_t _x_x959 = kk_integer_unbox(_b_x38, _ctx); /*int*/
  _x_x957 = kk_std_num_ddouble_ddouble_int_exp(_x_x958, _x_x959, _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble__ddouble_box(_x_x957, _ctx);
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble__mlift_pddouble_normal_10798(kk_string_t frac, bool neg, kk_string_t whole, kk_integer_t exp_0, kk_context_t* _ctx) { /* (frac : string, neg : bool, whole : string, exp@0 : int) -> std/text/parse/parse ddouble */ 
  kk_string_t _x_x1_0_10790;
  kk_string_t _x_x942;
  if (neg) {
    kk_define_string_literal(, _s_x943, 1, "-", _ctx)
    _x_x942 = kk_string_dup(_s_x943, _ctx); /*string*/
  }
  else {
    _x_x942 = kk_string_empty(); /*string*/
  }
  kk_string_t _x_x945;
  kk_string_t _x_x946 = kk_string_dup(frac, _ctx); /*string*/
  _x_x945 = kk_std_core_types__lp__plus__plus__rp_(whole, _x_x946, _ctx); /*string*/
  _x_x1_0_10790 = kk_std_core_types__lp__plus__plus__rp_(_x_x942, _x_x945, _ctx); /*string*/
  kk_std_core_types__maybe _x_x1_10788;
  kk_box_t _x_x947 = kk_std_core_hnd__open_none2(kk_std_num_ddouble__new_mlift_pddouble_normal_10798_fun948(_ctx), kk_string_box(_x_x1_0_10790), kk_std_core_types__optional_box(kk_std_core_types__new_None(_ctx), _ctx), _ctx); /*8647*/
  _x_x1_10788 = kk_std_core_types__maybe_unbox(_x_x947, KK_OWNED, _ctx); /*maybe<int>*/
  kk_integer_t w;
  kk_box_t _x_x952 = kk_std_core_hnd__open_none2(kk_std_num_ddouble__new_mlift_pddouble_normal_10798_fun953(_ctx), kk_std_core_types__maybe_box(_x_x1_10788, _ctx), kk_integer_box(kk_integer_from_small(0), _ctx), _ctx); /*8647*/
  w = kk_integer_unbox(_x_x952, _ctx); /*int*/
  kk_integer_t y_10781 = kk_std_core_string_count(frac, _ctx); /*int*/;
  kk_integer_t e = kk_integer_sub(exp_0,y_10781,kk_context()); /*int*/;
  kk_box_t _x_x955 = kk_std_core_hnd__open_none2(kk_std_num_ddouble__new_mlift_pddouble_normal_10798_fun956(_ctx), kk_integer_box(w, _ctx), kk_integer_box(e, _ctx), _ctx); /*8647*/
  return kk_std_num_ddouble__ddouble_unbox(_x_x955, KK_OWNED, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_ddouble__mlift_pddouble_normal_10800_fun963__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_ddouble__mlift_pddouble_normal_10800_fun963(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble__new_mlift_pddouble_normal_10800_fun963(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_ddouble__mlift_pddouble_normal_10800_fun963, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_num_ddouble__mlift_pddouble_normal_10800_fun966__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_ddouble__mlift_pddouble_normal_10800_fun966(kk_function_t _fself, kk_box_t _b_x43, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble__new_mlift_pddouble_normal_10800_fun966(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_ddouble__mlift_pddouble_normal_10800_fun966, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_ddouble__mlift_pddouble_normal_10800_fun966(kk_function_t _fself, kk_box_t _b_x43, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x967;
  kk_char_t _x_x968 = kk_char_unbox(_b_x43, KK_OWNED, _ctx); /*char*/
  _x_x967 = kk_std_num_ddouble__mlift_pddouble_normal_10797(_x_x968, _ctx); /*int*/
  return kk_integer_box(_x_x967, _ctx);
}
static kk_box_t kk_std_num_ddouble__mlift_pddouble_normal_10800_fun963(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t x_0_10810 = kk_std_text_parse_char('e', _ctx); /*char*/;
  kk_integer_t _x_x964;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x965 = kk_std_core_hnd_yield_extend(kk_std_num_ddouble__new_mlift_pddouble_normal_10800_fun966(_ctx), _ctx); /*2978*/
    _x_x964 = kk_integer_unbox(_x_x965, _ctx); /*int*/
  }
  else {
    _x_x964 = kk_std_text_parse_pint(_ctx); /*int*/
  }
  return kk_integer_box(_x_x964, _ctx);
}


// lift anonymous function
struct kk_std_num_ddouble__mlift_pddouble_normal_10800_fun969__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_ddouble__mlift_pddouble_normal_10800_fun969(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble__new_mlift_pddouble_normal_10800_fun969(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_ddouble__mlift_pddouble_normal_10800_fun969, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_ddouble__mlift_pddouble_normal_10800_fun969(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_integer_box(kk_integer_from_small(0), _ctx);
}


// lift anonymous function
struct kk_std_num_ddouble__mlift_pddouble_normal_10800_fun971__t {
  struct kk_function_s _base;
  kk_string_t frac;
  kk_string_t whole;
  bool neg;
};
static kk_box_t kk_std_num_ddouble__mlift_pddouble_normal_10800_fun971(kk_function_t _fself, kk_box_t _b_x50, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble__new_mlift_pddouble_normal_10800_fun971(kk_string_t frac, kk_string_t whole, bool neg, kk_context_t* _ctx) {
  struct kk_std_num_ddouble__mlift_pddouble_normal_10800_fun971__t* _self = kk_function_alloc_as(struct kk_std_num_ddouble__mlift_pddouble_normal_10800_fun971__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_ddouble__mlift_pddouble_normal_10800_fun971, kk_context());
  _self->frac = frac;
  _self->whole = whole;
  _self->neg = neg;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_ddouble__mlift_pddouble_normal_10800_fun971(kk_function_t _fself, kk_box_t _b_x50, kk_context_t* _ctx) {
  struct kk_std_num_ddouble__mlift_pddouble_normal_10800_fun971__t* _self = kk_function_as(struct kk_std_num_ddouble__mlift_pddouble_normal_10800_fun971__t*, _fself, _ctx);
  kk_string_t frac = _self->frac; /* string */
  kk_string_t whole = _self->whole; /* string */
  bool neg = _self->neg; /* bool */
  kk_drop_match(_self, {kk_string_dup(frac, _ctx);kk_string_dup(whole, _ctx);kk_skip_dup(neg, _ctx);}, {}, _ctx)
  kk_integer_t exp_0_52 = kk_integer_unbox(_b_x50, _ctx); /*int*/;
  kk_std_num_ddouble__ddouble _x_x972 = kk_std_num_ddouble__mlift_pddouble_normal_10798(frac, neg, whole, exp_0_52, _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble__ddouble_box(_x_x972, _ctx);
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble__mlift_pddouble_normal_10800(bool neg, kk_string_t whole, kk_string_t _y_x10767, kk_context_t* _ctx) { /* (neg : bool, whole : string, string) -> std/text/parse/parse ddouble */ 
  kk_string_t frac;
  kk_string_t _x_x960;
  kk_define_string_literal(, _s_x961, 1, "0", _ctx)
  _x_x960 = kk_string_dup(_s_x961, _ctx); /*string*/
  frac = kk_std_core_sslice_trim_right(_y_x10767, _x_x960, _ctx); /*string*/
  kk_integer_t x_10808;
  kk_box_t _x_x962 = kk_std_text_parse__lp__bar__bar__rp_(kk_std_num_ddouble__new_mlift_pddouble_normal_10800_fun963(_ctx), kk_std_num_ddouble__new_mlift_pddouble_normal_10800_fun969(_ctx), _ctx); /*1635*/
  x_10808 = kk_integer_unbox(_x_x962, _ctx); /*int*/
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_10808, _ctx);
    kk_box_t _x_x970 = kk_std_core_hnd_yield_extend(kk_std_num_ddouble__new_mlift_pddouble_normal_10800_fun971(frac, whole, neg, _ctx), _ctx); /*2978*/
    return kk_std_num_ddouble__ddouble_unbox(_x_x970, KK_OWNED, _ctx);
  }
  {
    return kk_std_num_ddouble__mlift_pddouble_normal_10798(frac, neg, whole, x_10808, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_ddouble__mlift_pddouble_normal_10801_fun974__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_ddouble__mlift_pddouble_normal_10801_fun974(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble__new_mlift_pddouble_normal_10801_fun974(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_ddouble__mlift_pddouble_normal_10801_fun974, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_num_ddouble__mlift_pddouble_normal_10801_fun977__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_ddouble__mlift_pddouble_normal_10801_fun977(kk_function_t _fself, kk_box_t _b_x54, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble__new_mlift_pddouble_normal_10801_fun977(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_ddouble__mlift_pddouble_normal_10801_fun977, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_ddouble__mlift_pddouble_normal_10801_fun977(kk_function_t _fself, kk_box_t _b_x54, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x978;
  kk_char_t _x_x979 = kk_char_unbox(_b_x54, KK_OWNED, _ctx); /*char*/
  _x_x978 = kk_std_num_ddouble__mlift_pddouble_normal_10799(_x_x979, _ctx); /*string*/
  return kk_string_box(_x_x978);
}
static kk_box_t kk_std_num_ddouble__mlift_pddouble_normal_10801_fun974(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t x_0_10814 = kk_std_text_parse_char('.', _ctx); /*char*/;
  kk_string_t _x_x975;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x976 = kk_std_core_hnd_yield_extend(kk_std_num_ddouble__new_mlift_pddouble_normal_10801_fun977(_ctx), _ctx); /*2978*/
    _x_x975 = kk_string_unbox(_x_x976); /*string*/
  }
  else {
    _x_x975 = kk_std_text_parse_digits(_ctx); /*string*/
  }
  return kk_string_box(_x_x975);
}


// lift anonymous function
struct kk_std_num_ddouble__mlift_pddouble_normal_10801_fun980__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_ddouble__mlift_pddouble_normal_10801_fun980(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble__new_mlift_pddouble_normal_10801_fun980(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_ddouble__mlift_pddouble_normal_10801_fun980, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_ddouble__mlift_pddouble_normal_10801_fun980(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x981 = kk_string_empty(); /*string*/
  return kk_string_box(_x_x981);
}


// lift anonymous function
struct kk_std_num_ddouble__mlift_pddouble_normal_10801_fun984__t {
  struct kk_function_s _base;
  kk_string_t whole;
  bool neg;
};
static kk_box_t kk_std_num_ddouble__mlift_pddouble_normal_10801_fun984(kk_function_t _fself, kk_box_t _b_x61, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble__new_mlift_pddouble_normal_10801_fun984(kk_string_t whole, bool neg, kk_context_t* _ctx) {
  struct kk_std_num_ddouble__mlift_pddouble_normal_10801_fun984__t* _self = kk_function_alloc_as(struct kk_std_num_ddouble__mlift_pddouble_normal_10801_fun984__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_ddouble__mlift_pddouble_normal_10801_fun984, kk_context());
  _self->whole = whole;
  _self->neg = neg;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_ddouble__mlift_pddouble_normal_10801_fun984(kk_function_t _fself, kk_box_t _b_x61, kk_context_t* _ctx) {
  struct kk_std_num_ddouble__mlift_pddouble_normal_10801_fun984__t* _self = kk_function_as(struct kk_std_num_ddouble__mlift_pddouble_normal_10801_fun984__t*, _fself, _ctx);
  kk_string_t whole = _self->whole; /* string */
  bool neg = _self->neg; /* bool */
  kk_drop_match(_self, {kk_string_dup(whole, _ctx);kk_skip_dup(neg, _ctx);}, {}, _ctx)
  kk_string_t _y_x10767_63 = kk_string_unbox(_b_x61); /*string*/;
  kk_std_num_ddouble__ddouble _x_x985 = kk_std_num_ddouble__mlift_pddouble_normal_10800(neg, whole, _y_x10767_63, _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble__ddouble_box(_x_x985, _ctx);
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble__mlift_pddouble_normal_10801(bool neg, kk_string_t whole, kk_context_t* _ctx) { /* (neg : bool, whole : string) -> std/text/parse/parse ddouble */ 
  kk_string_t x_10812;
  kk_box_t _x_x973 = kk_std_text_parse__lp__bar__bar__rp_(kk_std_num_ddouble__new_mlift_pddouble_normal_10801_fun974(_ctx), kk_std_num_ddouble__new_mlift_pddouble_normal_10801_fun980(_ctx), _ctx); /*1635*/
  x_10812 = kk_string_unbox(_x_x973); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_10812, _ctx);
    kk_box_t _x_x983 = kk_std_core_hnd_yield_extend(kk_std_num_ddouble__new_mlift_pddouble_normal_10801_fun984(whole, neg, _ctx), _ctx); /*2978*/
    return kk_std_num_ddouble__ddouble_unbox(_x_x983, KK_OWNED, _ctx);
  }
  {
    return kk_std_num_ddouble__mlift_pddouble_normal_10800(neg, whole, x_10812, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_ddouble__mlift_pddouble_normal_10802_fun987__t {
  struct kk_function_s _base;
  bool neg;
};
static kk_box_t kk_std_num_ddouble__mlift_pddouble_normal_10802_fun987(kk_function_t _fself, kk_box_t _b_x65, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble__new_mlift_pddouble_normal_10802_fun987(bool neg, kk_context_t* _ctx) {
  struct kk_std_num_ddouble__mlift_pddouble_normal_10802_fun987__t* _self = kk_function_alloc_as(struct kk_std_num_ddouble__mlift_pddouble_normal_10802_fun987__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_ddouble__mlift_pddouble_normal_10802_fun987, kk_context());
  _self->neg = neg;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_ddouble__mlift_pddouble_normal_10802_fun987(kk_function_t _fself, kk_box_t _b_x65, kk_context_t* _ctx) {
  struct kk_std_num_ddouble__mlift_pddouble_normal_10802_fun987__t* _self = kk_function_as(struct kk_std_num_ddouble__mlift_pddouble_normal_10802_fun987__t*, _fself, _ctx);
  bool neg = _self->neg; /* bool */
  kk_drop_match(_self, {kk_skip_dup(neg, _ctx);}, {}, _ctx)
  kk_string_t whole_67 = kk_string_unbox(_b_x65); /*string*/;
  kk_std_num_ddouble__ddouble _x_x988 = kk_std_num_ddouble__mlift_pddouble_normal_10801(neg, whole_67, _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble__ddouble_box(_x_x988, _ctx);
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble__mlift_pddouble_normal_10802(bool neg, kk_context_t* _ctx) { /* (neg : bool) -> std/text/parse/parse ddouble */ 
  kk_string_t x_10816 = kk_std_text_parse_digits(_ctx); /*string*/;
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_10816, _ctx);
    kk_box_t _x_x986 = kk_std_core_hnd_yield_extend(kk_std_num_ddouble__new_mlift_pddouble_normal_10802_fun987(neg, _ctx), _ctx); /*2978*/
    return kk_std_num_ddouble__ddouble_unbox(_x_x986, KK_OWNED, _ctx);
  }
  {
    return kk_std_num_ddouble__mlift_pddouble_normal_10801(neg, x_10816, _ctx);
  }
}


// lift anonymous function
struct kk_std_num_ddouble_pddouble_normal_fun990__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_ddouble_pddouble_normal_fun990(kk_function_t _fself, kk_box_t _b_x69, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble_new_pddouble_normal_fun990(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_ddouble_pddouble_normal_fun990, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_ddouble_pddouble_normal_fun990(kk_function_t _fself, kk_box_t _b_x69, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_num_ddouble__ddouble _x_x991;
  bool _x_x992 = kk_bool_unbox(_b_x69); /*bool*/
  _x_x991 = kk_std_num_ddouble__mlift_pddouble_normal_10802(_x_x992, _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble__ddouble_box(_x_x991, _ctx);
}


// lift anonymous function
struct kk_std_num_ddouble_pddouble_normal_fun994__t {
  struct kk_function_s _base;
  bool x_10818;
};
static kk_box_t kk_std_num_ddouble_pddouble_normal_fun994(kk_function_t _fself, kk_box_t _b_x71, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble_new_pddouble_normal_fun994(bool x_10818, kk_context_t* _ctx) {
  struct kk_std_num_ddouble_pddouble_normal_fun994__t* _self = kk_function_alloc_as(struct kk_std_num_ddouble_pddouble_normal_fun994__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_ddouble_pddouble_normal_fun994, kk_context());
  _self->x_10818 = x_10818;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_ddouble_pddouble_normal_fun994(kk_function_t _fself, kk_box_t _b_x71, kk_context_t* _ctx) {
  struct kk_std_num_ddouble_pddouble_normal_fun994__t* _self = kk_function_as(struct kk_std_num_ddouble_pddouble_normal_fun994__t*, _fself, _ctx);
  bool x_10818 = _self->x_10818; /* bool */
  kk_drop_match(_self, {kk_skip_dup(x_10818, _ctx);}, {}, _ctx)
  kk_string_t whole_124 = kk_string_unbox(_b_x71); /*string*/;
  kk_std_num_ddouble__ddouble _x_x995 = kk_std_num_ddouble__mlift_pddouble_normal_10801(x_10818, whole_124, _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble__ddouble_box(_x_x995, _ctx);
}


// lift anonymous function
struct kk_std_num_ddouble_pddouble_normal_fun997__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_ddouble_pddouble_normal_fun997(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble_new_pddouble_normal_fun997(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_ddouble_pddouble_normal_fun997, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_num_ddouble_pddouble_normal_fun1000__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_ddouble_pddouble_normal_fun1000(kk_function_t _fself, kk_box_t _b_x73, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble_new_pddouble_normal_fun1000(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_ddouble_pddouble_normal_fun1000, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_ddouble_pddouble_normal_fun1000(kk_function_t _fself, kk_box_t _b_x73, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x1001;
  kk_char_t _x_x1002 = kk_char_unbox(_b_x73, KK_OWNED, _ctx); /*char*/
  _x_x1001 = kk_std_num_ddouble__mlift_pddouble_normal_10799(_x_x1002, _ctx); /*string*/
  return kk_string_box(_x_x1001);
}
static kk_box_t kk_std_num_ddouble_pddouble_normal_fun997(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t x_2_10827 = kk_std_text_parse_char('.', _ctx); /*char*/;
  kk_string_t _x_x998;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x999 = kk_std_core_hnd_yield_extend(kk_std_num_ddouble_new_pddouble_normal_fun1000(_ctx), _ctx); /*2978*/
    _x_x998 = kk_string_unbox(_x_x999); /*string*/
  }
  else {
    _x_x998 = kk_std_text_parse_digits(_ctx); /*string*/
  }
  return kk_string_box(_x_x998);
}


// lift anonymous function
struct kk_std_num_ddouble_pddouble_normal_fun1003__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_ddouble_pddouble_normal_fun1003(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble_new_pddouble_normal_fun1003(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_ddouble_pddouble_normal_fun1003, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_ddouble_pddouble_normal_fun1003(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x1004 = kk_string_empty(); /*string*/
  return kk_string_box(_x_x1004);
}


// lift anonymous function
struct kk_std_num_ddouble_pddouble_normal_fun1007__t {
  struct kk_function_s _base;
  kk_string_t x_0_10821;
  bool x_10818;
};
static kk_box_t kk_std_num_ddouble_pddouble_normal_fun1007(kk_function_t _fself, kk_box_t _b_x80, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble_new_pddouble_normal_fun1007(kk_string_t x_0_10821, bool x_10818, kk_context_t* _ctx) {
  struct kk_std_num_ddouble_pddouble_normal_fun1007__t* _self = kk_function_alloc_as(struct kk_std_num_ddouble_pddouble_normal_fun1007__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_ddouble_pddouble_normal_fun1007, kk_context());
  _self->x_0_10821 = x_0_10821;
  _self->x_10818 = x_10818;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_ddouble_pddouble_normal_fun1007(kk_function_t _fself, kk_box_t _b_x80, kk_context_t* _ctx) {
  struct kk_std_num_ddouble_pddouble_normal_fun1007__t* _self = kk_function_as(struct kk_std_num_ddouble_pddouble_normal_fun1007__t*, _fself, _ctx);
  kk_string_t x_0_10821 = _self->x_0_10821; /* string */
  bool x_10818 = _self->x_10818; /* bool */
  kk_drop_match(_self, {kk_string_dup(x_0_10821, _ctx);kk_skip_dup(x_10818, _ctx);}, {}, _ctx)
  kk_string_t _y_x10767_125 = kk_string_unbox(_b_x80); /*string*/;
  kk_std_num_ddouble__ddouble _x_x1008 = kk_std_num_ddouble__mlift_pddouble_normal_10800(x_10818, x_0_10821, _y_x10767_125, _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble__ddouble_box(_x_x1008, _ctx);
}


// lift anonymous function
struct kk_std_num_ddouble_pddouble_normal_fun1012__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_ddouble_pddouble_normal_fun1012(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble_new_pddouble_normal_fun1012(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_ddouble_pddouble_normal_fun1012, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_num_ddouble_pddouble_normal_fun1015__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_ddouble_pddouble_normal_fun1015(kk_function_t _fself, kk_box_t _b_x82, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble_new_pddouble_normal_fun1015(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_ddouble_pddouble_normal_fun1015, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_ddouble_pddouble_normal_fun1015(kk_function_t _fself, kk_box_t _b_x82, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x1016;
  kk_char_t _x_x1017 = kk_char_unbox(_b_x82, KK_OWNED, _ctx); /*char*/
  _x_x1016 = kk_std_num_ddouble__mlift_pddouble_normal_10797(_x_x1017, _ctx); /*int*/
  return kk_integer_box(_x_x1016, _ctx);
}
static kk_box_t kk_std_num_ddouble_pddouble_normal_fun1012(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t x_4_10832 = kk_std_text_parse_char('e', _ctx); /*char*/;
  kk_integer_t _x_x1013;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1014 = kk_std_core_hnd_yield_extend(kk_std_num_ddouble_new_pddouble_normal_fun1015(_ctx), _ctx); /*2978*/
    _x_x1013 = kk_integer_unbox(_x_x1014, _ctx); /*int*/
  }
  else {
    _x_x1013 = kk_std_text_parse_pint(_ctx); /*int*/
  }
  return kk_integer_box(_x_x1013, _ctx);
}


// lift anonymous function
struct kk_std_num_ddouble_pddouble_normal_fun1018__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_ddouble_pddouble_normal_fun1018(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble_new_pddouble_normal_fun1018(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_ddouble_pddouble_normal_fun1018, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_ddouble_pddouble_normal_fun1018(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_integer_box(kk_integer_from_small(0), _ctx);
}


// lift anonymous function
struct kk_std_num_ddouble_pddouble_normal_fun1020__t {
  struct kk_function_s _base;
  kk_string_t frac;
  kk_string_t x_0_10821;
  bool x_10818;
};
static kk_box_t kk_std_num_ddouble_pddouble_normal_fun1020(kk_function_t _fself, kk_box_t _b_x89, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble_new_pddouble_normal_fun1020(kk_string_t frac, kk_string_t x_0_10821, bool x_10818, kk_context_t* _ctx) {
  struct kk_std_num_ddouble_pddouble_normal_fun1020__t* _self = kk_function_alloc_as(struct kk_std_num_ddouble_pddouble_normal_fun1020__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_ddouble_pddouble_normal_fun1020, kk_context());
  _self->frac = frac;
  _self->x_0_10821 = x_0_10821;
  _self->x_10818 = x_10818;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_ddouble_pddouble_normal_fun1020(kk_function_t _fself, kk_box_t _b_x89, kk_context_t* _ctx) {
  struct kk_std_num_ddouble_pddouble_normal_fun1020__t* _self = kk_function_as(struct kk_std_num_ddouble_pddouble_normal_fun1020__t*, _fself, _ctx);
  kk_string_t frac = _self->frac; /* string */
  kk_string_t x_0_10821 = _self->x_0_10821; /* string */
  bool x_10818 = _self->x_10818; /* bool */
  kk_drop_match(_self, {kk_string_dup(frac, _ctx);kk_string_dup(x_0_10821, _ctx);kk_skip_dup(x_10818, _ctx);}, {}, _ctx)
  kk_integer_t exp_0_126 = kk_integer_unbox(_b_x89, _ctx); /*int*/;
  kk_std_num_ddouble__ddouble _x_x1021 = kk_std_num_ddouble__mlift_pddouble_normal_10798(frac, x_10818, x_0_10821, exp_0_126, _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble__ddouble_box(_x_x1021, _ctx);
}


// lift anonymous function
struct kk_std_num_ddouble_pddouble_normal_fun1028__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_ddouble_pddouble_normal_fun1028(kk_function_t _fself, kk_box_t _b_x94, kk_box_t _b_x95, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble_new_pddouble_normal_fun1028(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_ddouble_pddouble_normal_fun1028, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_ddouble_pddouble_normal_fun1028(kk_function_t _fself, kk_box_t _b_x94, kk_box_t _b_x95, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x_x1029;
  kk_string_t _x_x1030 = kk_string_unbox(_b_x94); /*string*/
  bool _x_x1031;
  kk_std_core_types__optional _match_x663 = kk_std_core_types__optional_unbox(_b_x95, KK_OWNED, _ctx); /*? bool*/;
  if (kk_std_core_types__is_Optional(_match_x663, _ctx)) {
    kk_box_t _box_x90 = _match_x663._cons._Optional.value;
    bool _uniq_hex_528 = kk_bool_unbox(_box_x90);
    kk_std_core_types__optional_drop(_match_x663, _ctx);
    _x_x1031 = _uniq_hex_528; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x663, _ctx);
    _x_x1031 = false; /*bool*/
  }
  _x_x1029 = kk_std_core_int_xparse(_x_x1030, _x_x1031, _ctx); /*maybe<int>*/
  return kk_std_core_types__maybe_box(_x_x1029, _ctx);
}


// lift anonymous function
struct kk_std_num_ddouble_pddouble_normal_fun1033__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_ddouble_pddouble_normal_fun1033(kk_function_t _fself, kk_box_t _b_x105, kk_box_t _b_x106, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble_new_pddouble_normal_fun1033(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_ddouble_pddouble_normal_fun1033, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_ddouble_pddouble_normal_fun1033(kk_function_t _fself, kk_box_t _b_x105, kk_box_t _b_x106, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x1034;
  kk_std_core_types__maybe _match_x662 = kk_std_core_types__maybe_unbox(_b_x105, KK_OWNED, _ctx); /*maybe<int>*/;
  if (kk_std_core_types__is_Nothing(_match_x662, _ctx)) {
    _x_x1034 = kk_integer_unbox(_b_x106, _ctx); /*int*/
  }
  else {
    kk_box_t _box_x101 = _match_x662._cons.Just.value;
    kk_integer_t x_5 = kk_integer_unbox(_box_x101, _ctx);
    kk_integer_dup(x_5, _ctx);
    kk_std_core_types__maybe_drop(_match_x662, _ctx);
    kk_box_drop(_b_x106, _ctx);
    _x_x1034 = x_5; /*int*/
  }
  return kk_integer_box(_x_x1034, _ctx);
}


// lift anonymous function
struct kk_std_num_ddouble_pddouble_normal_fun1036__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_ddouble_pddouble_normal_fun1036(kk_function_t _fself, kk_box_t _b_x115, kk_box_t _b_x116, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble_new_pddouble_normal_fun1036(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_ddouble_pddouble_normal_fun1036, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_ddouble_pddouble_normal_fun1036(kk_function_t _fself, kk_box_t _b_x115, kk_box_t _b_x116, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_num_ddouble__ddouble _x_x1037;
  kk_integer_t _x_x1038 = kk_integer_unbox(_b_x115, _ctx); /*int*/
  kk_integer_t _x_x1039 = kk_integer_unbox(_b_x116, _ctx); /*int*/
  _x_x1037 = kk_std_num_ddouble_ddouble_int_exp(_x_x1038, _x_x1039, _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble__ddouble_box(_x_x1037, _ctx);
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble_pddouble_normal(kk_context_t* _ctx) { /* () -> std/text/parse/parse ddouble */ 
  bool x_10818 = kk_std_text_parse_sign(_ctx); /*bool*/;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x989 = kk_std_core_hnd_yield_extend(kk_std_num_ddouble_new_pddouble_normal_fun990(_ctx), _ctx); /*2978*/
    return kk_std_num_ddouble__ddouble_unbox(_x_x989, KK_OWNED, _ctx);
  }
  {
    kk_string_t x_0_10821 = kk_std_text_parse_digits(_ctx); /*string*/;
    if (kk_yielding(kk_context())) {
      kk_string_drop(x_0_10821, _ctx);
      kk_box_t _x_x993 = kk_std_core_hnd_yield_extend(kk_std_num_ddouble_new_pddouble_normal_fun994(x_10818, _ctx), _ctx); /*2978*/
      return kk_std_num_ddouble__ddouble_unbox(_x_x993, KK_OWNED, _ctx);
    }
    {
      kk_string_t x_1_10824;
      kk_box_t _x_x996 = kk_std_text_parse__lp__bar__bar__rp_(kk_std_num_ddouble_new_pddouble_normal_fun997(_ctx), kk_std_num_ddouble_new_pddouble_normal_fun1003(_ctx), _ctx); /*1635*/
      x_1_10824 = kk_string_unbox(_x_x996); /*string*/
      if (kk_yielding(kk_context())) {
        kk_string_drop(x_1_10824, _ctx);
        kk_box_t _x_x1006 = kk_std_core_hnd_yield_extend(kk_std_num_ddouble_new_pddouble_normal_fun1007(x_0_10821, x_10818, _ctx), _ctx); /*2978*/
        return kk_std_num_ddouble__ddouble_unbox(_x_x1006, KK_OWNED, _ctx);
      }
      {
        kk_string_t frac;
        kk_string_t _x_x1009;
        kk_define_string_literal(, _s_x1010, 1, "0", _ctx)
        _x_x1009 = kk_string_dup(_s_x1010, _ctx); /*string*/
        frac = kk_std_core_sslice_trim_right(x_1_10824, _x_x1009, _ctx); /*string*/
        kk_integer_t x_3_10829;
        kk_box_t _x_x1011 = kk_std_text_parse__lp__bar__bar__rp_(kk_std_num_ddouble_new_pddouble_normal_fun1012(_ctx), kk_std_num_ddouble_new_pddouble_normal_fun1018(_ctx), _ctx); /*1635*/
        x_3_10829 = kk_integer_unbox(_x_x1011, _ctx); /*int*/
        if (kk_yielding(kk_context())) {
          kk_integer_drop(x_3_10829, _ctx);
          kk_box_t _x_x1019 = kk_std_core_hnd_yield_extend(kk_std_num_ddouble_new_pddouble_normal_fun1020(frac, x_0_10821, x_10818, _ctx), _ctx); /*2978*/
          return kk_std_num_ddouble__ddouble_unbox(_x_x1019, KK_OWNED, _ctx);
        }
        {
          kk_string_t _x_x1_0_10790;
          kk_string_t _x_x1022;
          if (x_10818) {
            kk_define_string_literal(, _s_x1023, 1, "-", _ctx)
            _x_x1022 = kk_string_dup(_s_x1023, _ctx); /*string*/
          }
          else {
            _x_x1022 = kk_string_empty(); /*string*/
          }
          kk_string_t _x_x1025;
          kk_string_t _x_x1026 = kk_string_dup(frac, _ctx); /*string*/
          _x_x1025 = kk_std_core_types__lp__plus__plus__rp_(x_0_10821, _x_x1026, _ctx); /*string*/
          _x_x1_0_10790 = kk_std_core_types__lp__plus__plus__rp_(_x_x1022, _x_x1025, _ctx); /*string*/
          kk_std_core_types__maybe _x_x1_10788;
          kk_box_t _x_x1027 = kk_std_core_hnd__open_none2(kk_std_num_ddouble_new_pddouble_normal_fun1028(_ctx), kk_string_box(_x_x1_0_10790), kk_std_core_types__optional_box(kk_std_core_types__new_None(_ctx), _ctx), _ctx); /*8647*/
          _x_x1_10788 = kk_std_core_types__maybe_unbox(_x_x1027, KK_OWNED, _ctx); /*maybe<int>*/
          kk_integer_t w;
          kk_box_t _x_x1032 = kk_std_core_hnd__open_none2(kk_std_num_ddouble_new_pddouble_normal_fun1033(_ctx), kk_std_core_types__maybe_box(_x_x1_10788, _ctx), kk_integer_box(kk_integer_from_small(0), _ctx), _ctx); /*8647*/
          w = kk_integer_unbox(_x_x1032, _ctx); /*int*/
          kk_integer_t y_10781 = kk_std_core_string_count(frac, _ctx); /*int*/;
          kk_integer_t e = kk_integer_sub(x_3_10829,y_10781,kk_context()); /*int*/;
          kk_box_t _x_x1035 = kk_std_core_hnd__open_none2(kk_std_num_ddouble_new_pddouble_normal_fun1036(_ctx), kk_integer_box(w, _ctx), kk_integer_box(e, _ctx), _ctx); /*8647*/
          return kk_std_num_ddouble__ddouble_unbox(_x_x1035, KK_OWNED, _ctx);
        }
      }
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_ddouble__mlift_pddouble_sum_10803_fun1041__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_ddouble__mlift_pddouble_sum_10803_fun1041(kk_function_t _fself, kk_box_t _b_x130, kk_box_t _b_x131, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble__new_mlift_pddouble_sum_10803_fun1041(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_ddouble__mlift_pddouble_sum_10803_fun1041, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_ddouble__mlift_pddouble_sum_10803_fun1041(kk_function_t _fself, kk_box_t _b_x130, kk_box_t _b_x131, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_num_ddouble__ddouble _x_x1042;
  kk_std_num_ddouble__ddouble _x_x1043 = kk_std_num_ddouble__ddouble_unbox(_b_x130, KK_OWNED, _ctx); /*std/num/ddouble/ddouble*/
  kk_std_num_ddouble__ddouble _x_x1044 = kk_std_num_ddouble__ddouble_unbox(_b_x131, KK_OWNED, _ctx); /*std/num/ddouble/ddouble*/
  _x_x1042 = kk_std_num_ddouble__lp__plus__rp_(_x_x1043, _x_x1044, _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble__ddouble_box(_x_x1042, _ctx);
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble__mlift_pddouble_sum_10803(double hi, double lo, kk_context_t* _ctx) { /* (hi : float64, lo : float64) -> std/text/parse/parse ddouble */ 
  kk_box_t _x_x1040;
  kk_box_t _x_x1045;
  kk_std_num_ddouble__ddouble _x_x1046 = kk_std_num_ddouble__new_Ddouble(hi, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/
  _x_x1045 = kk_std_num_ddouble__ddouble_box(_x_x1046, _ctx); /*8645*/
  kk_box_t _x_x1047;
  kk_std_num_ddouble__ddouble _x_x1048 = kk_std_num_ddouble__new_Ddouble(lo, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/
  _x_x1047 = kk_std_num_ddouble__ddouble_box(_x_x1048, _ctx); /*8646*/
  _x_x1040 = kk_std_core_hnd__open_none2(kk_std_num_ddouble__new_mlift_pddouble_sum_10803_fun1041(_ctx), _x_x1045, _x_x1047, _ctx); /*8647*/
  return kk_std_num_ddouble__ddouble_unbox(_x_x1040, KK_OWNED, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_ddouble__mlift_pddouble_sum_10804_fun1049__t {
  struct kk_function_s _base;
  double hi;
};
static kk_std_num_ddouble__ddouble kk_std_num_ddouble__mlift_pddouble_sum_10804_fun1049(kk_function_t _fself, double lo, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble__new_mlift_pddouble_sum_10804_fun1049(double hi, kk_context_t* _ctx) {
  struct kk_std_num_ddouble__mlift_pddouble_sum_10804_fun1049__t* _self = kk_function_alloc_as(struct kk_std_num_ddouble__mlift_pddouble_sum_10804_fun1049__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_ddouble__mlift_pddouble_sum_10804_fun1049, kk_context());
  _self->hi = hi;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_num_ddouble__mlift_pddouble_sum_10804_fun1051__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_ddouble__mlift_pddouble_sum_10804_fun1051(kk_function_t _fself, kk_box_t _b_x138, kk_box_t _b_x139, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble__new_mlift_pddouble_sum_10804_fun1051(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_ddouble__mlift_pddouble_sum_10804_fun1051, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_ddouble__mlift_pddouble_sum_10804_fun1051(kk_function_t _fself, kk_box_t _b_x138, kk_box_t _b_x139, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_num_ddouble__ddouble _x_x1052;
  kk_std_num_ddouble__ddouble _x_x1053 = kk_std_num_ddouble__ddouble_unbox(_b_x138, KK_OWNED, _ctx); /*std/num/ddouble/ddouble*/
  kk_std_num_ddouble__ddouble _x_x1054 = kk_std_num_ddouble__ddouble_unbox(_b_x139, KK_OWNED, _ctx); /*std/num/ddouble/ddouble*/
  _x_x1052 = kk_std_num_ddouble__lp__plus__rp_(_x_x1053, _x_x1054, _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble__ddouble_box(_x_x1052, _ctx);
}
static kk_std_num_ddouble__ddouble kk_std_num_ddouble__mlift_pddouble_sum_10804_fun1049(kk_function_t _fself, double lo, kk_context_t* _ctx) {
  struct kk_std_num_ddouble__mlift_pddouble_sum_10804_fun1049__t* _self = kk_function_as(struct kk_std_num_ddouble__mlift_pddouble_sum_10804_fun1049__t*, _fself, _ctx);
  double hi = _self->hi; /* float64 */
  kk_drop_match(_self, {kk_skip_dup(hi, _ctx);}, {}, _ctx)
  kk_box_t _x_x1050;
  kk_box_t _x_x1055;
  kk_std_num_ddouble__ddouble _x_x1056 = kk_std_num_ddouble__new_Ddouble(hi, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/
  _x_x1055 = kk_std_num_ddouble__ddouble_box(_x_x1056, _ctx); /*8645*/
  kk_box_t _x_x1057;
  kk_std_num_ddouble__ddouble _x_x1058 = kk_std_num_ddouble__new_Ddouble(lo, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/
  _x_x1057 = kk_std_num_ddouble__ddouble_box(_x_x1058, _ctx); /*8646*/
  _x_x1050 = kk_std_core_hnd__open_none2(kk_std_num_ddouble__new_mlift_pddouble_sum_10804_fun1051(_ctx), _x_x1055, _x_x1057, _ctx); /*8647*/
  return kk_std_num_ddouble__ddouble_unbox(_x_x1050, KK_OWNED, _ctx);
}


// lift anonymous function
struct kk_std_num_ddouble__mlift_pddouble_sum_10804_fun1060__t {
  struct kk_function_s _base;
  kk_function_t next_10835;
};
static kk_box_t kk_std_num_ddouble__mlift_pddouble_sum_10804_fun1060(kk_function_t _fself, kk_box_t _b_x144, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble__new_mlift_pddouble_sum_10804_fun1060(kk_function_t next_10835, kk_context_t* _ctx) {
  struct kk_std_num_ddouble__mlift_pddouble_sum_10804_fun1060__t* _self = kk_function_alloc_as(struct kk_std_num_ddouble__mlift_pddouble_sum_10804_fun1060__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_ddouble__mlift_pddouble_sum_10804_fun1060, kk_context());
  _self->next_10835 = next_10835;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_ddouble__mlift_pddouble_sum_10804_fun1060(kk_function_t _fself, kk_box_t _b_x144, kk_context_t* _ctx) {
  struct kk_std_num_ddouble__mlift_pddouble_sum_10804_fun1060__t* _self = kk_function_as(struct kk_std_num_ddouble__mlift_pddouble_sum_10804_fun1060__t*, _fself, _ctx);
  kk_function_t next_10835 = _self->next_10835; /* (float64) -> std/text/parse/parse std/num/ddouble/ddouble */
  kk_drop_match(_self, {kk_function_dup(next_10835, _ctx);}, {}, _ctx)
  kk_std_num_ddouble__ddouble _x_x1061;
  double _x_x1062 = kk_double_unbox(_b_x144, KK_OWNED, _ctx); /*float64*/
  _x_x1061 = kk_function_call(kk_std_num_ddouble__ddouble, (kk_function_t, double, kk_context_t*), next_10835, (next_10835, _x_x1062, _ctx), _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble__ddouble_box(_x_x1061, _ctx);
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble__mlift_pddouble_sum_10804(double hi, kk_string_t wild___0, kk_context_t* _ctx) { /* (hi : float64, wild_@0 : string) -> std/text/parse/parse ddouble */ 
  kk_string_drop(wild___0, _ctx);
  double x_10834 = kk_std_num_float64_pdouble(_ctx); /*float64*/;
  kk_function_t next_10835 = kk_std_num_ddouble__new_mlift_pddouble_sum_10804_fun1049(hi, _ctx); /*(float64) -> std/text/parse/parse std/num/ddouble/ddouble*/;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1059 = kk_std_core_hnd_yield_extend(kk_std_num_ddouble__new_mlift_pddouble_sum_10804_fun1060(next_10835, _ctx), _ctx); /*2978*/
    return kk_std_num_ddouble__ddouble_unbox(_x_x1059, KK_OWNED, _ctx);
  }
  {
    return kk_function_call(kk_std_num_ddouble__ddouble, (kk_function_t, double, kk_context_t*), next_10835, (next_10835, x_10834, _ctx), _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_ddouble__mlift_pddouble_sum_10805_fun1064__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_ddouble__mlift_pddouble_sum_10805_fun1064(kk_function_t _fself, kk_box_t _b_x148, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble__new_mlift_pddouble_sum_10805_fun1064(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_ddouble__mlift_pddouble_sum_10805_fun1064, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_ddouble__mlift_pddouble_sum_10805_fun1064(kk_function_t _fself, kk_box_t _b_x148, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x1065;
  bool b_155 = kk_bool_unbox(_b_x148); /*bool*/;
  if (b_155) {
    _x_x1065 = false; /*bool*/
  }
  else {
    _x_x1065 = true; /*bool*/
  }
  return kk_bool_box(_x_x1065);
}


// lift anonymous function
struct kk_std_num_ddouble__mlift_pddouble_sum_10805_fun1069__t {
  struct kk_function_s _base;
  double hi;
};
static kk_box_t kk_std_num_ddouble__mlift_pddouble_sum_10805_fun1069(kk_function_t _fself, kk_box_t _b_x150, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble__new_mlift_pddouble_sum_10805_fun1069(double hi, kk_context_t* _ctx) {
  struct kk_std_num_ddouble__mlift_pddouble_sum_10805_fun1069__t* _self = kk_function_alloc_as(struct kk_std_num_ddouble__mlift_pddouble_sum_10805_fun1069__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_ddouble__mlift_pddouble_sum_10805_fun1069, kk_context());
  _self->hi = hi;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_ddouble__mlift_pddouble_sum_10805_fun1069(kk_function_t _fself, kk_box_t _b_x150, kk_context_t* _ctx) {
  struct kk_std_num_ddouble__mlift_pddouble_sum_10805_fun1069__t* _self = kk_function_as(struct kk_std_num_ddouble__mlift_pddouble_sum_10805_fun1069__t*, _fself, _ctx);
  double hi = _self->hi; /* float64 */
  kk_drop_match(_self, {kk_skip_dup(hi, _ctx);}, {}, _ctx)
  kk_string_t wild___0_154 = kk_string_unbox(_b_x150); /*string*/;
  kk_std_num_ddouble__ddouble _x_x1070 = kk_std_num_ddouble__mlift_pddouble_sum_10804(hi, wild___0_154, _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble__ddouble_box(_x_x1070, _ctx);
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble__mlift_pddouble_sum_10805(double hi, kk_context_t* _ctx) { /* (hi : float64) -> std/text/parse/parse ddouble */ 
  bool _x_x1_10794 = isfinite(hi); /*bool*/;
  bool _match_x655;
  kk_box_t _x_x1063 = kk_std_core_hnd__open_none1(kk_std_num_ddouble__new_mlift_pddouble_sum_10805_fun1064(_ctx), kk_bool_box(_x_x1_10794), _ctx); /*8580*/
  _match_x655 = kk_bool_unbox(_x_x1063); /*bool*/
  if (_match_x655) {
    return kk_std_num_ddouble__new_Ddouble(hi, 0x0p+0, _ctx);
  }
  {
    kk_string_t x_10838;
    kk_string_t _x_x1066;
    kk_define_string_literal(, _s_x1067, 3, " + ", _ctx)
    _x_x1066 = kk_string_dup(_s_x1067, _ctx); /*string*/
    x_10838 = kk_std_text_parse_pstring(_x_x1066, _ctx); /*string*/
    if (kk_yielding(kk_context())) {
      kk_string_drop(x_10838, _ctx);
      kk_box_t _x_x1068 = kk_std_core_hnd_yield_extend(kk_std_num_ddouble__new_mlift_pddouble_sum_10805_fun1069(hi, _ctx), _ctx); /*2978*/
      return kk_std_num_ddouble__ddouble_unbox(_x_x1068, KK_OWNED, _ctx);
    }
    {
      return kk_std_num_ddouble__mlift_pddouble_sum_10804(hi, x_10838, _ctx);
    }
  }
}


// lift anonymous function
struct kk_std_num_ddouble_pddouble_sum_fun1072__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_ddouble_pddouble_sum_fun1072(kk_function_t _fself, kk_box_t _b_x157, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble_new_pddouble_sum_fun1072(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_ddouble_pddouble_sum_fun1072, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_ddouble_pddouble_sum_fun1072(kk_function_t _fself, kk_box_t _b_x157, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_num_ddouble__ddouble _x_x1073;
  double _x_x1074 = kk_double_unbox(_b_x157, KK_OWNED, _ctx); /*float64*/
  _x_x1073 = kk_std_num_ddouble__mlift_pddouble_sum_10805(_x_x1074, _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble__ddouble_box(_x_x1073, _ctx);
}


// lift anonymous function
struct kk_std_num_ddouble_pddouble_sum_fun1076__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_ddouble_pddouble_sum_fun1076(kk_function_t _fself, kk_box_t _b_x160, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble_new_pddouble_sum_fun1076(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_ddouble_pddouble_sum_fun1076, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_ddouble_pddouble_sum_fun1076(kk_function_t _fself, kk_box_t _b_x160, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x1077;
  bool b_188 = kk_bool_unbox(_b_x160); /*bool*/;
  if (b_188) {
    _x_x1077 = false; /*bool*/
  }
  else {
    _x_x1077 = true; /*bool*/
  }
  return kk_bool_box(_x_x1077);
}


// lift anonymous function
struct kk_std_num_ddouble_pddouble_sum_fun1081__t {
  struct kk_function_s _base;
  double x_10840;
};
static kk_box_t kk_std_num_ddouble_pddouble_sum_fun1081(kk_function_t _fself, kk_box_t _b_x162, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble_new_pddouble_sum_fun1081(double x_10840, kk_context_t* _ctx) {
  struct kk_std_num_ddouble_pddouble_sum_fun1081__t* _self = kk_function_alloc_as(struct kk_std_num_ddouble_pddouble_sum_fun1081__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_ddouble_pddouble_sum_fun1081, kk_context());
  _self->x_10840 = x_10840;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_ddouble_pddouble_sum_fun1081(kk_function_t _fself, kk_box_t _b_x162, kk_context_t* _ctx) {
  struct kk_std_num_ddouble_pddouble_sum_fun1081__t* _self = kk_function_as(struct kk_std_num_ddouble_pddouble_sum_fun1081__t*, _fself, _ctx);
  double x_10840 = _self->x_10840; /* float64 */
  kk_drop_match(_self, {kk_skip_dup(x_10840, _ctx);}, {}, _ctx)
  kk_string_t wild___0_186 = kk_string_unbox(_b_x162); /*string*/;
  kk_std_num_ddouble__ddouble _x_x1082 = kk_std_num_ddouble__mlift_pddouble_sum_10804(x_10840, wild___0_186, _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble__ddouble_box(_x_x1082, _ctx);
}


// lift anonymous function
struct kk_std_num_ddouble_pddouble_sum_fun1084__t {
  struct kk_function_s _base;
  double x_10840;
};
static kk_box_t kk_std_num_ddouble_pddouble_sum_fun1084(kk_function_t _fself, kk_box_t _b_x169, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble_new_pddouble_sum_fun1084(double x_10840, kk_context_t* _ctx) {
  struct kk_std_num_ddouble_pddouble_sum_fun1084__t* _self = kk_function_alloc_as(struct kk_std_num_ddouble_pddouble_sum_fun1084__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_ddouble_pddouble_sum_fun1084, kk_context());
  _self->x_10840 = x_10840;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_num_ddouble_pddouble_sum_fun1087__t {
  struct kk_function_s _base;
};
static kk_std_num_ddouble__ddouble kk_std_num_ddouble_pddouble_sum_fun1087(kk_function_t _fself, kk_std_num_ddouble__ddouble _x1_x1085, kk_std_num_ddouble__ddouble _x2_x1086, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble_new_pddouble_sum_fun1087(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_ddouble_pddouble_sum_fun1087, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_std_num_ddouble__ddouble kk_std_num_ddouble_pddouble_sum_fun1087(kk_function_t _fself, kk_std_num_ddouble__ddouble _x1_x1085, kk_std_num_ddouble__ddouble _x2_x1086, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_num_ddouble__lp__plus__rp_(_x1_x1085, _x2_x1086, _ctx);
}


// lift anonymous function
struct kk_std_num_ddouble_pddouble_sum_fun1088__t {
  struct kk_function_s _base;
  kk_function_t _b_x163_180;
};
static kk_box_t kk_std_num_ddouble_pddouble_sum_fun1088(kk_function_t _fself, kk_box_t _b_x166, kk_box_t _b_x167, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble_new_pddouble_sum_fun1088(kk_function_t _b_x163_180, kk_context_t* _ctx) {
  struct kk_std_num_ddouble_pddouble_sum_fun1088__t* _self = kk_function_alloc_as(struct kk_std_num_ddouble_pddouble_sum_fun1088__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_ddouble_pddouble_sum_fun1088, kk_context());
  _self->_b_x163_180 = _b_x163_180;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_ddouble_pddouble_sum_fun1088(kk_function_t _fself, kk_box_t _b_x166, kk_box_t _b_x167, kk_context_t* _ctx) {
  struct kk_std_num_ddouble_pddouble_sum_fun1088__t* _self = kk_function_as(struct kk_std_num_ddouble_pddouble_sum_fun1088__t*, _fself, _ctx);
  kk_function_t _b_x163_180 = _self->_b_x163_180; /* (x : std/num/ddouble/ddouble, y : std/num/ddouble/ddouble) -> std/num/ddouble/ddouble */
  kk_drop_match(_self, {kk_function_dup(_b_x163_180, _ctx);}, {}, _ctx)
  kk_std_num_ddouble__ddouble _x_x1089;
  kk_std_num_ddouble__ddouble _x_x1090 = kk_std_num_ddouble__ddouble_unbox(_b_x166, KK_OWNED, _ctx); /*std/num/ddouble/ddouble*/
  kk_std_num_ddouble__ddouble _x_x1091 = kk_std_num_ddouble__ddouble_unbox(_b_x167, KK_OWNED, _ctx); /*std/num/ddouble/ddouble*/
  _x_x1089 = kk_function_call(kk_std_num_ddouble__ddouble, (kk_function_t, kk_std_num_ddouble__ddouble, kk_std_num_ddouble__ddouble, kk_context_t*), _b_x163_180, (_b_x163_180, _x_x1090, _x_x1091, _ctx), _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble__ddouble_box(_x_x1089, _ctx);
}
static kk_box_t kk_std_num_ddouble_pddouble_sum_fun1084(kk_function_t _fself, kk_box_t _b_x169, kk_context_t* _ctx) {
  struct kk_std_num_ddouble_pddouble_sum_fun1084__t* _self = kk_function_as(struct kk_std_num_ddouble_pddouble_sum_fun1084__t*, _fself, _ctx);
  double x_10840 = _self->x_10840; /* float64 */
  kk_drop_match(_self, {kk_skip_dup(x_10840, _ctx);}, {}, _ctx)
  double lo_187 = kk_double_unbox(_b_x169, KK_OWNED, _ctx); /*float64*/;
  kk_function_t _b_x163_180 = kk_std_num_ddouble_new_pddouble_sum_fun1087(_ctx); /*(x : std/num/ddouble/ddouble, y : std/num/ddouble/ddouble) -> std/num/ddouble/ddouble*/;
  kk_std_num_ddouble__ddouble _b_x164_181 = kk_std_num_ddouble__new_Ddouble(x_10840, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/;
  kk_std_num_ddouble__ddouble _b_x165_182 = kk_std_num_ddouble__new_Ddouble(lo_187, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/;
  return kk_std_core_hnd__open_none2(kk_std_num_ddouble_new_pddouble_sum_fun1088(_b_x163_180, _ctx), kk_std_num_ddouble__ddouble_box(_b_x164_181, _ctx), kk_std_num_ddouble__ddouble_box(_b_x165_182, _ctx), _ctx);
}


// lift anonymous function
struct kk_std_num_ddouble_pddouble_sum_fun1092__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_ddouble_pddouble_sum_fun1092(kk_function_t _fself, kk_box_t _b_x173, kk_box_t _b_x174, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble_new_pddouble_sum_fun1092(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_ddouble_pddouble_sum_fun1092, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_ddouble_pddouble_sum_fun1092(kk_function_t _fself, kk_box_t _b_x173, kk_box_t _b_x174, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_num_ddouble__ddouble _x_x1093;
  kk_std_num_ddouble__ddouble _x_x1094 = kk_std_num_ddouble__ddouble_unbox(_b_x173, KK_OWNED, _ctx); /*std/num/ddouble/ddouble*/
  kk_std_num_ddouble__ddouble _x_x1095 = kk_std_num_ddouble__ddouble_unbox(_b_x174, KK_OWNED, _ctx); /*std/num/ddouble/ddouble*/
  _x_x1093 = kk_std_num_ddouble__lp__plus__rp_(_x_x1094, _x_x1095, _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble__ddouble_box(_x_x1093, _ctx);
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble_pddouble_sum(kk_context_t* _ctx) { /* () -> std/text/parse/parse ddouble */ 
  double x_10840 = kk_std_num_float64_pdouble(_ctx); /*float64*/;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1071 = kk_std_core_hnd_yield_extend(kk_std_num_ddouble_new_pddouble_sum_fun1072(_ctx), _ctx); /*2978*/
    return kk_std_num_ddouble__ddouble_unbox(_x_x1071, KK_OWNED, _ctx);
  }
  {
    bool _x_x1_10794 = isfinite(x_10840); /*bool*/;
    bool _match_x652;
    kk_box_t _x_x1075 = kk_std_core_hnd__open_none1(kk_std_num_ddouble_new_pddouble_sum_fun1076(_ctx), kk_bool_box(_x_x1_10794), _ctx); /*8580*/
    _match_x652 = kk_bool_unbox(_x_x1075); /*bool*/
    if (_match_x652) {
      return kk_std_num_ddouble__new_Ddouble(x_10840, 0x0p+0, _ctx);
    }
    {
      kk_string_t x_0_10843;
      kk_string_t _x_x1078;
      kk_define_string_literal(, _s_x1079, 3, " + ", _ctx)
      _x_x1078 = kk_string_dup(_s_x1079, _ctx); /*string*/
      x_0_10843 = kk_std_text_parse_pstring(_x_x1078, _ctx); /*string*/
      kk_string_drop(x_0_10843, _ctx);
      if (kk_yielding(kk_context())) {
        kk_box_t _x_x1080 = kk_std_core_hnd_yield_extend(kk_std_num_ddouble_new_pddouble_sum_fun1081(x_10840, _ctx), _ctx); /*2978*/
        return kk_std_num_ddouble__ddouble_unbox(_x_x1080, KK_OWNED, _ctx);
      }
      {
        double x_1_10846 = kk_std_num_float64_pdouble(_ctx); /*float64*/;
        kk_box_t _x_x1083;
        if (kk_yielding(kk_context())) {
          _x_x1083 = kk_std_core_hnd_yield_extend(kk_std_num_ddouble_new_pddouble_sum_fun1084(x_10840, _ctx), _ctx); /*2978*/
        }
        else {
          kk_box_t _x_x1096;
          kk_std_num_ddouble__ddouble _x_x1097 = kk_std_num_ddouble__new_Ddouble(x_10840, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/
          _x_x1096 = kk_std_num_ddouble__ddouble_box(_x_x1097, _ctx); /*8645*/
          kk_box_t _x_x1098;
          kk_std_num_ddouble__ddouble _x_x1099 = kk_std_num_ddouble__new_Ddouble(x_1_10846, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/
          _x_x1098 = kk_std_num_ddouble__ddouble_box(_x_x1099, _ctx); /*8646*/
          _x_x1083 = kk_std_core_hnd__open_none2(kk_std_num_ddouble_new_pddouble_sum_fun1092(_ctx), _x_x1096, _x_x1098, _ctx); /*2978*/
        }
        return kk_std_num_ddouble__ddouble_unbox(_x_x1083, KK_OWNED, _ctx);
      }
    }
  }
}


// lift anonymous function
struct kk_std_num_ddouble_pddouble_fun1101__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_ddouble_pddouble_fun1101(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble_new_pddouble_fun1101(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_ddouble_pddouble_fun1101, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_ddouble_pddouble_fun1101(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_num_ddouble__ddouble _x_x1102 = kk_std_num_ddouble_pddouble_sum(_ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble__ddouble_box(_x_x1102, _ctx);
}


// lift anonymous function
struct kk_std_num_ddouble_pddouble_fun1103__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_ddouble_pddouble_fun1103(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble_new_pddouble_fun1103(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_ddouble_pddouble_fun1103, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_ddouble_pddouble_fun1103(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_num_ddouble__ddouble _x_x1104 = kk_std_num_ddouble_pddouble_normal(_ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble__ddouble_box(_x_x1104, _ctx);
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble_pddouble(kk_context_t* _ctx) { /* () -> std/text/parse/parse ddouble */ 
  kk_box_t _x_x1100 = kk_std_text_parse__lp__bar__bar__rp_(kk_std_num_ddouble_new_pddouble_fun1101(_ctx), kk_std_num_ddouble_new_pddouble_fun1103(_ctx), _ctx); /*4786*/
  return kk_std_num_ddouble__ddouble_unbox(_x_x1100, KK_OWNED, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_std_num_ddouble__mlift_parse_ddouble_10807_fun1106__t {
  struct kk_function_s _base;
  kk_std_num_ddouble__ddouble x;
};
static kk_box_t kk_std_num_ddouble__mlift_parse_ddouble_10807_fun1106(kk_function_t _fself, kk_box_t _b_x194, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble__new_mlift_parse_ddouble_10807_fun1106(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) {
  struct kk_std_num_ddouble__mlift_parse_ddouble_10807_fun1106__t* _self = kk_function_alloc_as(struct kk_std_num_ddouble__mlift_parse_ddouble_10807_fun1106__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_ddouble__mlift_parse_ddouble_10807_fun1106, kk_context());
  _self->x = x;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_ddouble__mlift_parse_ddouble_10807_fun1106(kk_function_t _fself, kk_box_t _b_x194, kk_context_t* _ctx) {
  struct kk_std_num_ddouble__mlift_parse_ddouble_10807_fun1106__t* _self = kk_function_as(struct kk_std_num_ddouble__mlift_parse_ddouble_10807_fun1106__t*, _fself, _ctx);
  kk_std_num_ddouble__ddouble x = _self->x; /* std/num/ddouble/ddouble */
  kk_drop_match(_self, {kk_std_num_ddouble__ddouble_dup(x, _ctx);}, {}, _ctx)
  kk_unit_t wild___196 = kk_Unit;
  kk_unit_unbox(_b_x194);
  return kk_std_num_ddouble__ddouble_box(x, _ctx);
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble__mlift_parse_ddouble_10807(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> std/text/parse/parse ddouble */ 
  kk_unit_t x_0_10851 = kk_Unit;
  kk_std_text_parse_eof(_ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1105 = kk_std_core_hnd_yield_extend(kk_std_num_ddouble__new_mlift_parse_ddouble_10807_fun1106(x, _ctx), _ctx); /*2978*/
    return kk_std_num_ddouble__ddouble_unbox(_x_x1105, KK_OWNED, _ctx);
  }
  {
    return x;
  }
}


// lift anonymous function
struct kk_std_num_ddouble_parse_ddouble_fun1111__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_ddouble_parse_ddouble_fun1111(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble_new_parse_ddouble_fun1111(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_ddouble_parse_ddouble_fun1111, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_num_ddouble_parse_ddouble_fun1113__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_ddouble_parse_ddouble_fun1113(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble_new_parse_ddouble_fun1113(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_ddouble_parse_ddouble_fun1113, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_ddouble_parse_ddouble_fun1113(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_num_ddouble__ddouble _x_x1114 = kk_std_num_ddouble_pddouble_sum(_ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble__ddouble_box(_x_x1114, _ctx);
}


// lift anonymous function
struct kk_std_num_ddouble_parse_ddouble_fun1115__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_ddouble_parse_ddouble_fun1115(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble_new_parse_ddouble_fun1115(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_ddouble_parse_ddouble_fun1115, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_ddouble_parse_ddouble_fun1115(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_num_ddouble__ddouble _x_x1116 = kk_std_num_ddouble_pddouble_normal(_ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble__ddouble_box(_x_x1116, _ctx);
}


// lift anonymous function
struct kk_std_num_ddouble_parse_ddouble_fun1119__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_ddouble_parse_ddouble_fun1119(kk_function_t _fself, kk_box_t _b_x202, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble_new_parse_ddouble_fun1119(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_ddouble_parse_ddouble_fun1119, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_ddouble_parse_ddouble_fun1119(kk_function_t _fself, kk_box_t _b_x202, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_num_ddouble__ddouble _x_x1120;
  kk_std_num_ddouble__ddouble _x_x1121 = kk_std_num_ddouble__ddouble_unbox(_b_x202, KK_OWNED, _ctx); /*std/num/ddouble/ddouble*/
  _x_x1120 = kk_std_num_ddouble__mlift_parse_ddouble_10807(_x_x1121, _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble__ddouble_box(_x_x1120, _ctx);
}
static kk_box_t kk_std_num_ddouble_parse_ddouble_fun1111(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_num_ddouble__ddouble x_10855;
  kk_box_t _x_x1112 = kk_std_text_parse__lp__bar__bar__rp_(kk_std_num_ddouble_new_parse_ddouble_fun1113(_ctx), kk_std_num_ddouble_new_parse_ddouble_fun1115(_ctx), _ctx); /*4786*/
  x_10855 = kk_std_num_ddouble__ddouble_unbox(_x_x1112, KK_OWNED, _ctx); /*std/num/ddouble/ddouble*/
  kk_std_num_ddouble__ddouble _x_x1117;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1118 = kk_std_core_hnd_yield_extend(kk_std_num_ddouble_new_parse_ddouble_fun1119(_ctx), _ctx); /*2978*/
    _x_x1117 = kk_std_num_ddouble__ddouble_unbox(_x_x1118, KK_OWNED, _ctx); /*std/num/ddouble/ddouble*/
  }
  else {
    _x_x1117 = kk_std_num_ddouble__mlift_parse_ddouble_10807(x_10855, _ctx); /*std/num/ddouble/ddouble*/
  }
  return kk_std_num_ddouble__ddouble_box(_x_x1117, _ctx);
}

kk_std_core_types__maybe kk_std_num_ddouble_parse_ddouble(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> maybe<ddouble> */ 
  kk_string_t s_0_10133;
  kk_string_t _x_x1107;
  kk_string_t _x_x1108 = kk_string_trim_left(s,kk_context()); /*string*/
  _x_x1107 = kk_string_trim_right(_x_x1108,kk_context()); /*string*/
  s_0_10133 = kk_std_core_string_to_lower(_x_x1107, _ctx); /*string*/
  kk_std_core_sslice__sslice input_10131;
  kk_string_t _x_x1109 = kk_string_dup(s_0_10133, _ctx); /*string*/
  kk_integer_t _x_x1110 = kk_string_len_int(s_0_10133,kk_context()); /*int*/
  input_10131 = kk_std_core_sslice__new_Sslice(_x_x1109, kk_integer_from_small(0), _x_x1110, _ctx); /*sslice/sslice*/
  kk_std_text_parse__parse_error perr_10130 = kk_std_text_parse_parse(input_10131, kk_std_num_ddouble_new_parse_ddouble_fun1111(_ctx), _ctx); /*std/text/parse/parse-error<std/num/ddouble/ddouble>*/;
  if (kk_std_text_parse__is_ParseOk(perr_10130, _ctx)) {
    struct kk_std_text_parse_ParseOk* _con_x1122 = kk_std_text_parse__as_ParseOk(perr_10130, _ctx);
    kk_box_t _box_x208 = _con_x1122->result;
    kk_std_core_sslice__sslice _pat_0_0 = _con_x1122->rest;
    kk_std_num_ddouble__ddouble x_0 = kk_std_num_ddouble__ddouble_unbox(_box_x208, KK_BORROWED, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(perr_10130, _ctx)) {
      kk_std_core_sslice__sslice_drop(_pat_0_0, _ctx);
      kk_box_drop(_box_x208, _ctx);
      kk_datatype_ptr_free(perr_10130, _ctx);
    }
    else {
      kk_datatype_ptr_decref(perr_10130, _ctx);
    }
    return kk_std_core_types__new_Just(kk_std_num_ddouble__ddouble_box(x_0, _ctx), _ctx);
  }
  {
    struct kk_std_text_parse_ParseError* _con_x1123 = kk_std_text_parse__as_ParseError(perr_10130, _ctx);
    kk_std_core_sslice__sslice _pat_5 = _con_x1123->rest;
    kk_string_t msg = _con_x1123->msg;
    if kk_likely(kk_datatype_ptr_is_unique(perr_10130, _ctx)) {
      kk_string_drop(msg, _ctx);
      kk_std_core_sslice__sslice_drop(_pat_5, _ctx);
      kk_datatype_ptr_free(perr_10130, _ctx);
    }
    else {
      kk_datatype_ptr_decref(perr_10130, _ctx);
    }
    return kk_std_core_types__new_Nothing(_ctx);
  }
}
 
// Zero constant

kk_std_num_ddouble__ddouble kk_std_num_ddouble_zero;
 
// Return the sum of a list of doubles.
// Uses [Kahan-Babu&scaron;kan-Neumaier summation](https://en.wikipedia.org/wiki/Kahan_summation_algorithm#Further_enhancements)
// to minimize rounding errors. This
// is more precise as Kahan summation and about as fast.
// `[1.0e3,1.0e97,1.0e3,-1.0e97].sum == 2000.0`
// A. Neumaier, _Rundungsfehleranalyse einiger Verfahren zur Summation endlicher Summen_.
// Math. Mechanik, 54:39--51, 1974.


// lift anonymous function
struct kk_std_num_ddouble_list_fs_sum_fun1125__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_ref_t loc_0;
};
static kk_unit_t kk_std_num_ddouble_list_fs_sum_fun1125(kk_function_t _fself, kk_box_t _b_x233, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble_list_fs_new_sum_fun1125(kk_ref_t loc, kk_ref_t loc_0, kk_context_t* _ctx) {
  struct kk_std_num_ddouble_list_fs_sum_fun1125__t* _self = kk_function_alloc_as(struct kk_std_num_ddouble_list_fs_sum_fun1125__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_ddouble_list_fs_sum_fun1125, kk_context());
  _self->loc = loc;
  _self->loc_0 = loc_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_std_num_ddouble_list_fs_sum_fun1125(kk_function_t _fself, kk_box_t _b_x233, kk_context_t* _ctx) {
  struct kk_std_num_ddouble_list_fs_sum_fun1125__t* _self = kk_function_as(struct kk_std_num_ddouble_list_fs_sum_fun1125__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<1904,std/num/ddouble/ddouble> */
  kk_ref_t loc_0 = _self->loc_0; /* local-var<1904,std/num/ddouble/ddouble> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);kk_ref_dup(loc_0, _ctx);}, {}, _ctx)
  kk_std_num_ddouble__ddouble x_238 = kk_std_num_ddouble__ddouble_unbox(_b_x233, KK_OWNED, _ctx); /*std/num/ddouble/ddouble*/;
  kk_std_num_ddouble__ddouble t;
  kk_std_num_ddouble__ddouble _x_x1126;
  kk_box_t _x_x1127;
  kk_ref_t _x_x1128 = kk_ref_dup(loc, _ctx); /*local-var<1904,std/num/ddouble/ddouble>*/
  _x_x1127 = kk_ref_get(_x_x1128,kk_context()); /*3159*/
  _x_x1126 = kk_std_num_ddouble__ddouble_unbox(_x_x1127, KK_OWNED, _ctx); /*std/num/ddouble/ddouble*/
  t = kk_std_num_ddouble__lp__plus__rp_(_x_x1126, x_238, _ctx); /*std/num/ddouble/ddouble*/
  kk_std_num_ddouble__ddouble x_1_10139;
  kk_box_t _x_x1129;
  kk_ref_t _x_x1130 = kk_ref_dup(loc, _ctx); /*local-var<1904,std/num/ddouble/ddouble>*/
  _x_x1129 = kk_ref_get(_x_x1130,kk_context()); /*3118*/
  x_1_10139 = kk_std_num_ddouble__ddouble_unbox(_x_x1129, KK_OWNED, _ctx); /*std/num/ddouble/ddouble*/
  kk_std_num_ddouble__ddouble x_0_10137;
  bool _match_x648;
  double _x_x1131;
  {
    double _x = x_1_10139.hi;
    _x_x1131 = _x; /*float64*/
  }
  _match_x648 = (_x_x1131 < (0x0p+0)); /*bool*/
  if (_match_x648) {
    double _x_x1132;
    double _x_x1133;
    {
      double _x_0 = x_1_10139.hi;
      _x_x1133 = _x_0; /*float64*/
    }
    _x_x1132 = (-_x_x1133); /*float64*/
    double _x_x1134;
    double _x_x1135;
    {
      double _x_0_0 = x_1_10139.lo;
      _x_x1135 = _x_0_0; /*float64*/
    }
    _x_x1134 = (-_x_x1135); /*float64*/
    x_0_10137 = kk_std_num_ddouble__new_Ddouble(_x_x1132, _x_x1134, _ctx); /*std/num/ddouble/ddouble*/
  }
  else {
    x_0_10137 = x_1_10139; /*std/num/ddouble/ddouble*/
  }
  kk_std_num_ddouble__ddouble y_10138 = kk_std_num_ddouble_abs(x_238, _ctx); /*std/num/ddouble/ddouble*/;
  kk_std_num_ddouble__ddouble c;
  bool _match_x646;
  kk_std_core_types__order _x_x1136;
  kk_std_core_types__order _match_x647;
  double _x_x1137;
  {
    double _x_1 = x_0_10137.hi;
    _x_x1137 = _x_1; /*float64*/
  }
  double _x_x1138;
  {
    double _x_0_1 = y_10138.hi;
    _x_x1138 = _x_0_1; /*float64*/
  }
  _match_x647 = kk_std_num_float64_cmp(_x_x1137, _x_x1138, _ctx); /*order*/
  if (kk_std_core_types__is_Eq(_match_x647, _ctx)) {
    double _x_x1139;
    {
      double _x_1_0 = x_0_10137.lo;
      _x_x1139 = _x_1_0; /*float64*/
    }
    double _x_x1140;
    {
      double _x_2 = y_10138.lo;
      _x_x1140 = _x_2; /*float64*/
    }
    _x_x1136 = kk_std_num_float64_cmp(_x_x1139, _x_x1140, _ctx); /*order*/
  }
  else {
    _x_x1136 = _match_x647; /*order*/
  }
  _match_x646 = kk_std_core_order__lp__excl__eq__rp_(_x_x1136, kk_std_core_types__new_Lt(_ctx), _ctx); /*bool*/
  if (_match_x646) {
    kk_std_num_ddouble__ddouble x_3_10143;
    kk_box_t _x_x1141;
    kk_ref_t _x_x1142 = kk_ref_dup(loc, _ctx); /*local-var<1904,std/num/ddouble/ddouble>*/
    _x_x1141 = kk_ref_get(_x_x1142,kk_context()); /*3094*/
    x_3_10143 = kk_std_num_ddouble__ddouble_unbox(_x_x1141, KK_OWNED, _ctx); /*std/num/ddouble/ddouble*/
    kk_std_num_ddouble__ddouble _x_x1143;
    kk_std_num_ddouble__ddouble _x_x1144;
    double _x_x1145;
    double _x_x1146;
    {
      double _x_3 = t.hi;
      _x_x1146 = _x_3; /*float64*/
    }
    _x_x1145 = (-_x_x1146); /*float64*/
    double _x_x1147;
    double _x_x1148;
    {
      double _x_0_2 = t.lo;
      _x_x1148 = _x_0_2; /*float64*/
    }
    _x_x1147 = (-_x_x1148); /*float64*/
    _x_x1144 = kk_std_num_ddouble__new_Ddouble(_x_x1145, _x_x1147, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1143 = kk_std_num_ddouble__lp__plus__rp_(x_3_10143, _x_x1144, _ctx); /*std/num/ddouble/ddouble*/
    c = kk_std_num_ddouble__lp__plus__rp_(_x_x1143, x_238, _ctx); /*std/num/ddouble/ddouble*/
  }
  else {
    kk_std_num_ddouble__ddouble _x_x1149;
    kk_std_num_ddouble__ddouble _x_x1150;
    double _x_x1151;
    double _x_x1152;
    {
      double _x_4 = t.hi;
      _x_x1152 = _x_4; /*float64*/
    }
    _x_x1151 = (-_x_x1152); /*float64*/
    double _x_x1153;
    double _x_x1154;
    {
      double _x_0_3 = t.lo;
      _x_x1154 = _x_0_3; /*float64*/
    }
    _x_x1153 = (-_x_x1154); /*float64*/
    _x_x1150 = kk_std_num_ddouble__new_Ddouble(_x_x1151, _x_x1153, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1149 = kk_std_num_ddouble__lp__plus__rp_(x_238, _x_x1150, _ctx); /*std/num/ddouble/ddouble*/
    kk_std_num_ddouble__ddouble _x_x1155;
    kk_box_t _x_x1156;
    kk_ref_t _x_x1157 = kk_ref_dup(loc, _ctx); /*local-var<1904,std/num/ddouble/ddouble>*/
    _x_x1156 = kk_ref_get(_x_x1157,kk_context()); /*3117*/
    _x_x1155 = kk_std_num_ddouble__ddouble_unbox(_x_x1156, KK_OWNED, _ctx); /*std/num/ddouble/ddouble*/
    c = kk_std_num_ddouble__lp__plus__rp_(_x_x1149, _x_x1155, _ctx); /*std/num/ddouble/ddouble*/
  }
  kk_std_num_ddouble__ddouble _b_x225_227;
  kk_std_num_ddouble__ddouble _x_x1158;
  kk_box_t _x_x1159;
  kk_ref_t _x_x1160 = kk_ref_dup(loc_0, _ctx); /*local-var<1904,std/num/ddouble/ddouble>*/
  _x_x1159 = kk_ref_get(_x_x1160,kk_context()); /*3159*/
  _x_x1158 = kk_std_num_ddouble__ddouble_unbox(_x_x1159, KK_OWNED, _ctx); /*std/num/ddouble/ddouble*/
  _b_x225_227 = kk_std_num_ddouble__lp__plus__rp_(_x_x1158, c, _ctx); /*std/num/ddouble/ddouble*/
  kk_unit_t __ = kk_Unit;
  kk_unit_t _brw_x645 = kk_Unit;
  kk_ref_set_borrow(loc_0,(kk_std_num_ddouble__ddouble_box(_b_x225_227, _ctx)),kk_context());
  kk_ref_drop(loc_0, _ctx);
  _brw_x645;
  kk_unit_t _brw_x644 = kk_Unit;
  kk_ref_set_borrow(loc,(kk_std_num_ddouble__ddouble_box(t, _ctx)),kk_context());
  kk_ref_drop(loc, _ctx);
  _brw_x644; return kk_Unit;
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble_list_fs_sum(kk_std_core_types__list xs, kk_context_t* _ctx) { /* (xs : list<ddouble>) -> ddouble */ 
  kk_ref_t loc = kk_ref_alloc((kk_std_num_ddouble__ddouble_box(kk_std_num_ddouble_zero, _ctx)),kk_context()); /*local-var<1904,std/num/ddouble/ddouble>*/;
  kk_ref_t loc_0 = kk_ref_alloc((kk_std_num_ddouble__ddouble_box(kk_std_num_ddouble_zero, _ctx)),kk_context()); /*local-var<1904,std/num/ddouble/ddouble>*/;
  kk_unit_t ___0 = kk_Unit;
  kk_function_t _x_x1124;
  kk_ref_dup(loc, _ctx);
  kk_ref_dup(loc_0, _ctx);
  _x_x1124 = kk_std_num_ddouble_list_fs_new_sum_fun1125(loc, loc_0, _ctx); /*(2691) -> 2692 ()*/
  kk_std_core_list_foreach(xs, _x_x1124, _ctx);
  kk_std_num_ddouble__ddouble res_0;
  kk_std_num_ddouble__ddouble _x_x1161;
  kk_box_t _x_x1162;
  kk_ref_t _x_x1163 = kk_ref_dup(loc, _ctx); /*local-var<1904,std/num/ddouble/ddouble>*/
  _x_x1162 = kk_ref_get(_x_x1163,kk_context()); /*3191*/
  _x_x1161 = kk_std_num_ddouble__ddouble_unbox(_x_x1162, KK_OWNED, _ctx); /*std/num/ddouble/ddouble*/
  kk_std_num_ddouble__ddouble _x_x1164;
  kk_box_t _x_x1165;
  kk_ref_t _x_x1166 = kk_ref_dup(loc_0, _ctx); /*local-var<1904,std/num/ddouble/ddouble>*/
  _x_x1165 = kk_ref_get(_x_x1166,kk_context()); /*3191*/
  _x_x1164 = kk_std_num_ddouble__ddouble_unbox(_x_x1165, KK_OWNED, _ctx); /*std/num/ddouble/ddouble*/
  res_0 = kk_std_num_ddouble__lp__plus__rp_(_x_x1161, _x_x1164, _ctx); /*std/num/ddouble/ddouble*/
  kk_std_num_ddouble__ddouble res;
  kk_box_t _x_x1167 = kk_std_core_hnd_prompt_local_var(loc_0, kk_std_num_ddouble__ddouble_box(res_0, _ctx), _ctx); /*9564*/
  res = kk_std_num_ddouble__ddouble_unbox(_x_x1167, KK_OWNED, _ctx); /*std/num/ddouble/ddouble*/
  kk_box_t _x_x1168 = kk_std_core_hnd_prompt_local_var(loc, kk_std_num_ddouble__ddouble_box(res, _ctx), _ctx); /*9564*/
  return kk_std_num_ddouble__ddouble_unbox(_x_x1168, KK_OWNED, _ctx);
}
 
// &pi;

kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_pi;
 
// 2&pi;

kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_twopi;
 
// &pi;/2

kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_pi2;
 
// &pi;/4

kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_pi4;
 
// &pi;/16

kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_pi16;
 
// 3&pi;/4

kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_pi34;
 
// The _e_ constant.

kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_e;
 
// The natural logarithm of 2

kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_ln2;
 
// The natural logarithm of 10

kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_ln10;
 
// The base-2 logarithm of _e_.

kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_log2e;
 
// The base-10 logarithm of _e_.

kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_log10e;
 
// The square-root of 2

kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_sqrt2;
 
// `1.0 / sqrt(2.0)`

kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_sqrt12;
 
// [Euler's constant](https://en.wikipedia.org/wiki/Euler%E2%80%93Mascheroni_constant)

kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_euler;
 
// The 'machine epsilon': this is not well-defined for a `:ddouble` in general since
// the difference between 1.0 and the next representable `:ddouble` value is `dd-true-min`.
// Instead, we take the square of `flt-epsilon`, i.e. 2^-104^.

kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_epsilon;
 
// 8*dd-epsilon

kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_epsilon8;
 
// The maximum representable `:ddouble`

kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_max;
 
// The smallest positive `:ddouble` that is still normalized

kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_min;
 
// The smallest positive `:ddouble`  (which is subnormal).

kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_true_min;
 
// Positive infinity

kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_posinf;
 
// Negative infinity

kk_std_num_ddouble__ddouble kk_std_num_ddouble_dd_neginf;

kk_integer_t kk_std_num_ddouble_dd_max_prec;

kk_integer_t kk_std_num_ddouble_dd_default_prec;

kk_std_num_ddouble__ddouble kk_std_num_ddouble_two;
 
// Round a `:ddouble` to the nearest integer, rounding to the nearest even number in case of a tie.

kk_std_num_ddouble__ddouble kk_std_num_ddouble_round(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> ddouble */ 
  double r;
  double _x_x1197;
  {
    double _x = x.hi;
    _x_x1197 = _x; /*float64*/
  }
  r = kk_double_round_even(_x_x1197,kk_context()); /*float64*/
  double diff;
  double _x_x1198;
  {
    double _x_0 = x.hi;
    _x_x1198 = _x_0; /*float64*/
  }
  diff = (r - _x_x1198); /*float64*/
  bool _match_x628 = (diff == (0x0p+0)); /*bool*/;
  if (_match_x628) {
    double _x_x1199;
    double _x_x1200;
    {
      double _x_1 = x.lo;
      _x_x1200 = _x_1; /*float64*/
    }
    _x_x1199 = kk_double_round_even(_x_x1200,kk_context()); /*float64*/
    return kk_std_num_ddouble_dquicksum(r, _x_x1199, _ctx);
  }
  {
    double d_10166;
    bool _match_x629 = (diff == (0x1p-1)); /*bool*/;
    if (_match_x629) {
      bool _match_x632;
      double _x_x1201;
      {
        double _x_2 = x.lo;
        _x_x1201 = _x_2; /*float64*/
      }
      _match_x632 = (_x_x1201 < (0x0p+0)); /*bool*/
      if (_match_x632) {
        d_10166 = (r - 0x1p0); /*float64*/
      }
      else {
        bool _match_x633 = (diff == (-0x1p-1)); /*bool*/;
        if (_match_x633) {
          bool _match_x634;
          double _x_x1202;
          {
            double _x_3 = x.lo;
            _x_x1202 = _x_3; /*float64*/
          }
          _match_x634 = (_x_x1202 > (0x0p+0)); /*bool*/
          if (_match_x634) {
            d_10166 = (r + 0x1p0); /*float64*/
          }
          else {
            d_10166 = r; /*float64*/
          }
        }
        else {
          d_10166 = r; /*float64*/
        }
      }
    }
    else {
      bool _match_x630 = (diff == (-0x1p-1)); /*bool*/;
      if (_match_x630) {
        bool _match_x631;
        double _x_x1203;
        {
          double _x_4 = x.lo;
          _x_x1203 = _x_4; /*float64*/
        }
        _match_x631 = (_x_x1203 > (0x0p+0)); /*bool*/
        if (_match_x631) {
          d_10166 = (r + 0x1p0); /*float64*/
        }
        else {
          d_10166 = r; /*float64*/
        }
      }
      else {
        d_10166 = r; /*float64*/
      }
    }
    return kk_std_num_ddouble__new_Ddouble(d_10166, 0x0p+0, _ctx);
  }
}
 
// Remainder of two `:ddouble`s

kk_std_num_ddouble__ddouble kk_std_num_ddouble__lp__perc__rp_(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble y, kk_context_t* _ctx) { /* (x : ddouble, y : ddouble) -> ddouble */ 
  kk_std_num_ddouble__ddouble n;
  kk_std_num_ddouble__ddouble _x_x1204 = kk_std_num_ddouble__lp__fs__rp_(x, y, _ctx); /*std/num/ddouble/ddouble*/
  n = kk_std_num_ddouble_round(_x_x1204, _ctx); /*std/num/ddouble/ddouble*/
  kk_std_num_ddouble__ddouble y_0_10174 = kk_std_num_ddouble__lp__star__rp_(n, y, _ctx); /*std/num/ddouble/ddouble*/;
  kk_std_num_ddouble__ddouble _x_x1205;
  double _x_x1206;
  double _x_x1207;
  {
    double _x = y_0_10174.hi;
    _x_x1207 = _x; /*float64*/
  }
  _x_x1206 = (-_x_x1207); /*float64*/
  double _x_x1208;
  double _x_x1209;
  {
    double _x_0 = y_0_10174.lo;
    _x_x1209 = _x_0; /*float64*/
  }
  _x_x1208 = (-_x_x1209); /*float64*/
  _x_x1205 = kk_std_num_ddouble__new_Ddouble(_x_x1206, _x_x1208, _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble__lp__plus__rp_(x, _x_x1205, _ctx);
}
 
// Division and remainder of two `:ddouble`s

kk_std_core_types__tuple2 kk_std_num_ddouble_divrem(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble y, kk_context_t* _ctx) { /* (x : ddouble, y : ddouble) -> (ddouble, ddouble) */ 
  kk_std_num_ddouble__ddouble n;
  kk_std_num_ddouble__ddouble _x_x1210 = kk_std_num_ddouble__lp__fs__rp_(x, y, _ctx); /*std/num/ddouble/ddouble*/
  n = kk_std_num_ddouble_round(_x_x1210, _ctx); /*std/num/ddouble/ddouble*/
  kk_std_num_ddouble__ddouble y_0_10176 = kk_std_num_ddouble__lp__star__rp_(n, y, _ctx); /*std/num/ddouble/ddouble*/;
  kk_std_num_ddouble__ddouble _b_x253_255;
  kk_std_num_ddouble__ddouble _x_x1211;
  double _x_x1212;
  double _x_x1213;
  {
    double _x = y_0_10176.hi;
    _x_x1213 = _x; /*float64*/
  }
  _x_x1212 = (-_x_x1213); /*float64*/
  double _x_x1214;
  double _x_x1215;
  {
    double _x_0 = y_0_10176.lo;
    _x_x1215 = _x_0; /*float64*/
  }
  _x_x1214 = (-_x_x1215); /*float64*/
  _x_x1211 = kk_std_num_ddouble__new_Ddouble(_x_x1212, _x_x1214, _ctx); /*std/num/ddouble/ddouble*/
  _b_x253_255 = kk_std_num_ddouble__lp__plus__rp_(x, _x_x1211, _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_core_types__new_Tuple2(kk_std_num_ddouble__ddouble_box(n, _ctx), kk_std_num_ddouble__ddouble_box(_b_x253_255, _ctx), _ctx);
}
 
// Convert a `:ddouble` to a `:decimal` up to a given precision `prec` (= `-1`).
// A negative precision converts precisely. Returns 0 for non-finite `:ddouble`'s.

kk_std_num_decimal__decimal kk_std_num_ddouble_decimal(kk_std_num_ddouble__ddouble x, kk_std_core_types__optional prec, kk_context_t* _ctx) { /* (x : ddouble, prec : ? int) -> std/num/decimal/decimal */ 
  bool b_10177;
  bool _match_x627;
  double _x_x1216;
  {
    double _x = x.hi;
    _x_x1216 = _x; /*float64*/
  }
  _match_x627 = isfinite(_x_x1216); /*bool*/
  if (_match_x627) {
    double _x_x1217;
    {
      double _x_0 = x.lo;
      _x_x1217 = _x_0; /*float64*/
    }
    b_10177 = isfinite(_x_x1217); /*bool*/
  }
  else {
    b_10177 = false; /*bool*/
  }
  if (b_10177) {
    kk_integer_t _b_x257_262;
    if (kk_std_core_types__is_Optional(prec, _ctx)) {
      kk_box_t _box_x256 = prec._cons._Optional.value;
      kk_integer_t _uniq_prec_2854 = kk_integer_unbox(_box_x256, _ctx);
      kk_integer_dup(_uniq_prec_2854, _ctx);
      _b_x257_262 = _uniq_prec_2854; /*int*/
    }
    else {
      _b_x257_262 = kk_integer_from_small(-1); /*int*/
    }
    kk_integer_t _b_x259_263;
    if (kk_std_core_types__is_Optional(prec, _ctx)) {
      kk_box_t _box_x258 = prec._cons._Optional.value;
      kk_integer_t _uniq_prec_2854_0 = kk_integer_unbox(_box_x258, _ctx);
      kk_integer_dup(_uniq_prec_2854_0, _ctx);
      kk_std_core_types__optional_drop(prec, _ctx);
      _b_x259_263 = _uniq_prec_2854_0; /*int*/
    }
    else {
      kk_std_core_types__optional_drop(prec, _ctx);
      _b_x259_263 = kk_integer_from_small(-1); /*int*/
    }
    kk_std_num_decimal__decimal _x_x1218;
    double _x_x1219;
    {
      double _x_1 = x.hi;
      _x_x1219 = _x_1; /*float64*/
    }
    kk_std_core_types__optional _x_x1220 = kk_std_core_types__new_Optional(kk_integer_box(_b_x257_262, _ctx), _ctx); /*? 7*/
    _x_x1218 = kk_std_num_decimal_float64_fs_decimal(_x_x1219, _x_x1220, _ctx); /*std/num/decimal/decimal*/
    kk_std_num_decimal__decimal _x_x1221;
    double _x_x1222;
    {
      double _x_0_0 = x.lo;
      _x_x1222 = _x_0_0; /*float64*/
    }
    kk_std_core_types__optional _x_x1223 = kk_std_core_types__new_Optional(kk_integer_box(_b_x259_263, _ctx), _ctx); /*? 7*/
    _x_x1221 = kk_std_num_decimal_float64_fs_decimal(_x_x1222, _x_x1223, _ctx); /*std/num/decimal/decimal*/
    return kk_std_num_decimal__lp__plus__rp_(_x_x1218, _x_x1221, _ctx);
  }
  {
    kk_std_core_types__optional_drop(prec, _ctx);
    kk_std_core_types__optional _x_x1224;
    kk_box_t _x_x1225;
    kk_integer_t _x_x1226;
    kk_std_core_types__optional _match_x626 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
    if (kk_std_core_types__is_Optional(_match_x626, _ctx)) {
      kk_box_t _box_x260 = _match_x626._cons._Optional.value;
      kk_integer_t _uniq_exp_1232 = kk_integer_unbox(_box_x260, _ctx);
      kk_integer_dup(_uniq_exp_1232, _ctx);
      kk_std_core_types__optional_drop(_match_x626, _ctx);
      _x_x1226 = _uniq_exp_1232; /*int*/
    }
    else {
      kk_std_core_types__optional_drop(_match_x626, _ctx);
      _x_x1226 = kk_integer_from_small(0); /*int*/
    }
    _x_x1225 = kk_integer_box(_x_x1226, _ctx); /*7*/
    _x_x1224 = kk_std_core_types__new_Optional(_x_x1225, _ctx); /*? 7*/
    return kk_std_num_decimal_decimal_exp(kk_integer_from_small(0), _x_x1224, _ctx);
  }
}
 
// Convert a `:ddouble` to the nearest integer (rounding to the nearest even number in case of a tie)

kk_integer_t kk_std_num_ddouble_int(kk_std_num_ddouble__ddouble x, kk_std_core_types__optional nonfin, kk_context_t* _ctx) { /* (x : ddouble, nonfin : ? int) -> int */ 
  bool b_10182;
  bool _match_x625;
  double _x_x1227;
  {
    double _x = x.hi;
    _x_x1227 = _x; /*float64*/
  }
  _match_x625 = isfinite(_x_x1227); /*bool*/
  if (_match_x625) {
    double _x_x1228;
    {
      double _x_0 = x.lo;
      _x_x1228 = _x_0; /*float64*/
    }
    b_10182 = isfinite(_x_x1228); /*bool*/
  }
  else {
    b_10182 = false; /*bool*/
  }
  if (b_10182) {
    kk_std_core_types__optional_drop(nonfin, _ctx);
    kk_std_num_decimal__decimal _x_x1229;
    kk_std_num_ddouble__ddouble _x_x1230 = kk_std_num_ddouble_round(x, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1229 = kk_std_num_ddouble_decimal(_x_x1230, kk_std_core_types__new_None(_ctx), _ctx); /*std/num/decimal/decimal*/
    return kk_std_num_decimal_int(_x_x1229, kk_std_core_types__new_None(_ctx), _ctx);
  }
  if (kk_std_core_types__is_Optional(nonfin, _ctx)) {
    kk_box_t _box_x265 = nonfin._cons._Optional.value;
    kk_integer_t _uniq_nonfin_2921 = kk_integer_unbox(_box_x265, _ctx);
    kk_integer_dup(_uniq_nonfin_2921, _ctx);
    kk_std_core_types__optional_drop(nonfin, _ctx);
    return _uniq_nonfin_2921;
  }
  {
    kk_std_core_types__optional_drop(nonfin, _ctx);
    return kk_integer_from_small(0);
  }
}
 
// Round to negative infinity.

kk_std_num_ddouble__ddouble kk_std_num_ddouble_floor(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> ddouble */ 
  double r;
  double _x_x1231;
  {
    double _x = x.hi;
    _x_x1231 = _x; /*float64*/
  }
  r = floor(_x_x1231); /*float64*/
  bool _match_x624;
  double _x_x1232;
  {
    double _x_0 = x.hi;
    _x_x1232 = _x_0; /*float64*/
  }
  _match_x624 = (r == _x_x1232); /*bool*/
  if (_match_x624) {
    double _x_x1233;
    double _x_x1234;
    {
      double _x_1 = x.lo;
      _x_x1234 = _x_1; /*float64*/
    }
    _x_x1233 = floor(_x_x1234); /*float64*/
    return kk_std_num_ddouble_dquicksum(r, _x_x1233, _ctx);
  }
  {
    return kk_std_num_ddouble__new_Ddouble(r, 0x0p+0, _ctx);
  }
}
 
// Round to positive infinity.

kk_std_num_ddouble__ddouble kk_std_num_ddouble_ceiling(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> ddouble */ 
  double r;
  double _x_x1235;
  {
    double _x = x.hi;
    _x_x1235 = _x; /*float64*/
  }
  r = ceil(_x_x1235); /*float64*/
  bool _match_x623;
  double _x_x1236;
  {
    double _x_0 = x.hi;
    _x_x1236 = _x_0; /*float64*/
  }
  _match_x623 = (r == _x_x1236); /*bool*/
  if (_match_x623) {
    double _x_x1237;
    double _x_x1238;
    {
      double _x_1 = x.lo;
      _x_x1238 = _x_1; /*float64*/
    }
    _x_x1237 = ceil(_x_x1238); /*float64*/
    return kk_std_num_ddouble_dquicksum(r, _x_x1237, _ctx);
  }
  {
    return kk_std_num_ddouble__new_Ddouble(r, 0x0p+0, _ctx);
  }
}
 
// The fraction of `x` such that `x.truncate + x.fraction == x`.

kk_std_num_ddouble__ddouble kk_std_num_ddouble_fraction(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> ddouble */ 
  kk_std_num_ddouble__ddouble y_10193;
  bool _match_x621;
  double _x_x1240;
  {
    double _x = x.hi;
    _x_x1240 = _x; /*float64*/
  }
  _match_x621 = (_x_x1240 < (0x0p+0)); /*bool*/
  if (_match_x621) {
    y_10193 = kk_std_num_ddouble_ceiling(x, _ctx); /*std/num/ddouble/ddouble*/
  }
  else {
    y_10193 = kk_std_num_ddouble_floor(x, _ctx); /*std/num/ddouble/ddouble*/
  }
  kk_std_num_ddouble__ddouble _x_x1241;
  double _x_x1242;
  double _x_x1243;
  {
    double _x_0 = y_10193.hi;
    _x_x1243 = _x_0; /*float64*/
  }
  _x_x1242 = (-_x_x1243); /*float64*/
  double _x_x1244;
  double _x_x1245;
  {
    double _x_0_0 = y_10193.lo;
    _x_x1245 = _x_0_0; /*float64*/
  }
  _x_x1244 = (-_x_x1245); /*float64*/
  _x_x1241 = kk_std_num_ddouble__new_Ddouble(_x_x1242, _x_x1244, _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble__lp__plus__rp_(x, _x_x1241, _ctx);
}
 
// Round a `:ddouble` to a specified precision.
// Uses `round` if the precision is smaller or equal to zero.

kk_std_num_ddouble__ddouble kk_std_num_ddouble_round_to_prec(kk_std_num_ddouble__ddouble x, kk_integer_t prec, kk_context_t* _ctx) { /* (x : ddouble, prec : int) -> ddouble */ 
  bool _match_x619 = kk_integer_lte_borrow(prec,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x619) {
    kk_integer_drop(prec, _ctx);
    return kk_std_num_ddouble_round(x, _ctx);
  }
  {
    bool _match_x620 = kk_integer_gt_borrow(prec,(kk_integer_from_small(31)),kk_context()); /*bool*/;
    if (_match_x620) {
      kk_integer_drop(prec, _ctx);
      return x;
    }
    {
      kk_std_num_ddouble__ddouble p = kk_std_num_ddouble_powi(kk_std_num_ddouble_ten, prec, _ctx); /*std/num/ddouble/ddouble*/;
      kk_std_num_ddouble__ddouble _x_x1251;
      kk_std_num_ddouble__ddouble _x_x1252 = kk_std_num_ddouble__lp__star__rp_(x, p, _ctx); /*std/num/ddouble/ddouble*/
      _x_x1251 = kk_std_num_ddouble_round(_x_x1252, _ctx); /*std/num/ddouble/ddouble*/
      return kk_std_num_ddouble__lp__fs__rp_(_x_x1251, p, _ctx);
    }
  }
}
 
// The square root of a non-negative `:ddouble` `x`.
// For negative `x`, `dd-nan` is returned.

kk_std_num_ddouble__ddouble kk_std_num_ddouble_sqrt(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> ddouble */ 
  bool _match_x617;
  double _x_x1264;
  {
    double _x = x.hi;
    _x_x1264 = _x; /*float64*/
  }
  _match_x617 = (_x_x1264 == (0x0p+0)); /*bool*/
  if (_match_x617) {
    return kk_std_num_ddouble_zero;
  }
  {
    bool _match_x618;
    double _x_x1265;
    {
      double _x_0 = x.hi;
      _x_x1265 = _x_0; /*float64*/
    }
    _match_x618 = (_x_x1265 < (0x0p+0)); /*bool*/
    if (_match_x618) {
      return kk_std_num_ddouble_dd_nan;
    }
    {
      double a;
      double _x_x1266;
      double _x_x1267;
      {
        double _x_1 = x.hi;
        _x_x1267 = _x_1; /*float64*/
      }
      _x_x1266 = sqrt(_x_x1267); /*float64*/
      a = (0x1p0 / _x_x1266); /*float64*/
      double t1;
      double _x_x1268;
      {
        double _x_2 = x.hi;
        _x_x1268 = _x_2; /*float64*/
      }
      t1 = (_x_x1268 * a); /*float64*/
      kk_std_num_ddouble__ddouble y_10213;
      kk_std_num_ddouble__ddouble _x_x1269 = kk_std_num_ddouble__new_Ddouble(t1, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/
      y_10213 = kk_std_num_ddouble_sqr(_x_x1269, _ctx); /*std/num/ddouble/ddouble*/
      kk_std_num_ddouble__ddouble ddouble_0_3_10211;
      kk_std_num_ddouble__ddouble _x_x1270;
      double _x_x1271;
      double _x_x1272;
      {
        double _x_3 = y_10213.hi;
        _x_x1272 = _x_3; /*float64*/
      }
      _x_x1271 = (-_x_x1272); /*float64*/
      double _x_x1273;
      double _x_x1274;
      {
        double _x_0_0 = y_10213.lo;
        _x_x1274 = _x_0_0; /*float64*/
      }
      _x_x1273 = (-_x_x1274); /*float64*/
      _x_x1270 = kk_std_num_ddouble__new_Ddouble(_x_x1271, _x_x1273, _ctx); /*std/num/ddouble/ddouble*/
      ddouble_0_3_10211 = kk_std_num_ddouble__lp__plus__rp_(x, _x_x1270, _ctx); /*std/num/ddouble/ddouble*/
      double t2;
      double _x_x1275;
      double _x_x1276;
      {
        double _x_3_0 = ddouble_0_3_10211.hi;
        _x_x1276 = _x_3_0; /*float64*/
      }
      _x_x1275 = (_x_x1276 * a); /*float64*/
      t2 = (_x_x1275 * (0x1p-1)); /*float64*/
      return kk_std_num_ddouble_dsum(t1, t2, _ctx);
    }
  }
}

kk_std_core_types__list kk_std_num_ddouble_exp_factors;

kk_std_num_ddouble__ddouble kk_std_num_ddouble_exp_approx(kk_std_num_ddouble__ddouble p, kk_std_num_ddouble__ddouble t, kk_std_num_ddouble__ddouble r, double eps, kk_std_core_types__list fs, kk_std_core_types__optional s, kk_context_t* _ctx) { /* (p : ddouble, t : ddouble, r : ddouble, eps : float64, fs : list<ddouble>, s : ? ddouble) -> ddouble */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Nil(fs, _ctx)) {
    kk_std_num_ddouble__ddouble _x_x1306;
    if (kk_std_core_types__is_Optional(s, _ctx)) {
      kk_box_t _box_x294 = s._cons._Optional.value;
      kk_std_num_ddouble__ddouble _uniq_s_3440 = kk_std_num_ddouble__ddouble_unbox(_box_x294, KK_BORROWED, _ctx);
      kk_std_core_types__optional_drop(s, _ctx);
      _x_x1306 = _uniq_s_3440; /*std/num/ddouble/ddouble*/
    }
    else {
      kk_std_core_types__optional_drop(s, _ctx);
      _x_x1306 = kk_std_num_ddouble_zero; /*std/num/ddouble/ddouble*/
    }
    return kk_std_num_ddouble__lp__plus__rp_(_x_x1306, t, _ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x1307 = kk_std_core_types__as_Cons(fs, _ctx);
    kk_box_t _box_x295 = _con_x1307->head;
    kk_std_num_ddouble__ddouble f = kk_std_num_ddouble__ddouble_unbox(_box_x295, KK_BORROWED, _ctx);
    kk_std_core_types__list fs1 = _con_x1307->tail;
    if kk_likely(kk_datatype_ptr_is_unique(fs, _ctx)) {
      kk_box_drop(_box_x295, _ctx);
      kk_datatype_ptr_free(fs, _ctx);
    }
    else {
      kk_std_core_types__list_dup(fs1, _ctx);
      kk_datatype_ptr_decref(fs, _ctx);
    }
    kk_std_num_ddouble__ddouble s1;
    kk_std_num_ddouble__ddouble _x_x1308;
    if (kk_std_core_types__is_Optional(s, _ctx)) {
      kk_box_t _box_x296 = s._cons._Optional.value;
      kk_std_num_ddouble__ddouble _uniq_s_3440_0 = kk_std_num_ddouble__ddouble_unbox(_box_x296, KK_BORROWED, _ctx);
      _x_x1308 = _uniq_s_3440_0; /*std/num/ddouble/ddouble*/
    }
    else {
      _x_x1308 = kk_std_num_ddouble_zero; /*std/num/ddouble/ddouble*/
    }
    s1 = kk_std_num_ddouble__lp__plus__rp_(_x_x1308, t, _ctx); /*std/num/ddouble/ddouble*/
    kk_std_num_ddouble__ddouble p1 = kk_std_num_ddouble__lp__star__rp_(p, r, _ctx); /*std/num/ddouble/ddouble*/;
    kk_std_num_ddouble__ddouble t1 = kk_std_num_ddouble__lp__star__rp_(p1, f, _ctx); /*std/num/ddouble/ddouble*/;
    bool _match_x616;
    double _x_x1309;
    double _x_x1310;
    {
      double _x = t1.hi;
      _x_x1310 = _x; /*float64*/
    }
    _x_x1309 = kk_double_abs(_x_x1310); /*float64*/
    _match_x616 = (_x_x1309 <= eps); /*bool*/
    if (_match_x616) {
      kk_std_core_types__list_drop(fs1, _ctx);
      kk_std_num_ddouble__ddouble _x_x1311;
      if (kk_std_core_types__is_Optional(s, _ctx)) {
        kk_box_t _box_x297 = s._cons._Optional.value;
        kk_std_num_ddouble__ddouble _uniq_s_3440_1 = kk_std_num_ddouble__ddouble_unbox(_box_x297, KK_BORROWED, _ctx);
        kk_std_core_types__optional_drop(s, _ctx);
        _x_x1311 = _uniq_s_3440_1; /*std/num/ddouble/ddouble*/
      }
      else {
        kk_std_core_types__optional_drop(s, _ctx);
        _x_x1311 = kk_std_num_ddouble_zero; /*std/num/ddouble/ddouble*/
      }
      return kk_std_num_ddouble__lp__plus__rp_(_x_x1311, t, _ctx);
    }
    {
      kk_std_core_types__optional_drop(s, _ctx);
      { // tailcall
        kk_std_core_types__optional _x_x1312 = kk_std_core_types__new_Optional(kk_std_num_ddouble__ddouble_box(s1, _ctx), _ctx); /*? 7*/
        p = p1;
        t = t1;
        fs = fs1;
        s = _x_x1312;
        goto kk__tailcall;
      }
    }
  }
}
 
// Return _e_ (`dd-e`) to the power of `x`.


// lift anonymous function
struct kk_std_num_ddouble_exp_fun1350__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_unit_t kk_std_num_ddouble_exp_fun1350(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble_new_exp_fun1350(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_num_ddouble_exp_fun1350__t* _self = kk_function_alloc_as(struct kk_std_num_ddouble_exp_fun1350__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_ddouble_exp_fun1350, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_std_num_ddouble_exp_fun1350(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_num_ddouble_exp_fun1350__t* _self = kk_function_as(struct kk_std_num_ddouble_exp_fun1350__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<3810,std/num/ddouble/ddouble> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_std_num_ddouble__ddouble x_4_10245;
  kk_box_t _x_x1351;
  kk_ref_t _x_x1352 = kk_ref_dup(loc, _ctx); /*local-var<3810,std/num/ddouble/ddouble>*/
  _x_x1351 = kk_ref_get(_x_x1352,kk_context()); /*5050*/
  x_4_10245 = kk_std_num_ddouble__ddouble_unbox(_x_x1351, KK_OWNED, _ctx); /*std/num/ddouble/ddouble*/
  kk_std_num_ddouble__ddouble _b_x306_308;
  kk_std_num_ddouble__ddouble _x_x1353;
  double _x_x1354;
  double _x_x1355;
  {
    double _x_7 = x_4_10245.hi;
    _x_x1355 = _x_7; /*float64*/
  }
  _x_x1354 = (_x_x1355 * 0x1p1); /*float64*/
  double _x_x1356;
  double _x_x1357;
  {
    double _x_8 = x_4_10245.lo;
    _x_x1357 = _x_8; /*float64*/
  }
  _x_x1356 = (_x_x1357 * 0x1p1); /*float64*/
  _x_x1353 = kk_std_num_ddouble__new_Ddouble(_x_x1354, _x_x1356, _ctx); /*std/num/ddouble/ddouble*/
  kk_std_num_ddouble__ddouble _x_x1358;
  kk_std_num_ddouble__ddouble _x_x1359;
  kk_box_t _x_x1360;
  kk_ref_t _x_x1361 = kk_ref_dup(loc, _ctx); /*local-var<3810,std/num/ddouble/ddouble>*/
  _x_x1360 = kk_ref_get(_x_x1361,kk_context()); /*5050*/
  _x_x1359 = kk_std_num_ddouble__ddouble_unbox(_x_x1360, KK_OWNED, _ctx); /*std/num/ddouble/ddouble*/
  _x_x1358 = kk_std_num_ddouble_sqr(_x_x1359, _ctx); /*std/num/ddouble/ddouble*/
  _b_x306_308 = kk_std_num_ddouble__lp__plus__rp_(_x_x1353, _x_x1358, _ctx); /*std/num/ddouble/ddouble*/
  kk_unit_t _brw_x614 = kk_Unit;
  kk_ref_set_borrow(loc,(kk_std_num_ddouble__ddouble_box(_b_x306_308, _ctx)),kk_context());
  kk_ref_drop(loc, _ctx);
  _brw_x614; return kk_Unit;
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble_exp(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> ddouble */ 
  double inv_k = (0x1p0 / 0x1p9); /*float64*/;
  bool _match_x610;
  double _x_x1313;
  {
    double _x = x.hi;
    _x_x1313 = _x; /*float64*/
  }
  _match_x610 = (_x_x1313 <= (-0x1.628p9)); /*bool*/
  if (_match_x610) {
    return kk_std_num_ddouble_zero;
  }
  {
    bool _match_x611;
    double _x_x1314;
    {
      double _x_0 = x.hi;
      _x_x1314 = _x_0; /*float64*/
    }
    _match_x611 = (_x_x1314 >= (0x1.628p9)); /*bool*/
    if (_match_x611) {
      return kk_std_num_ddouble_dd_posinf;
    }
    {
      bool _match_x612;
      double _x_x1315;
      {
        double _x_1 = x.hi;
        _x_x1315 = _x_1; /*float64*/
      }
      _match_x612 = (_x_x1315 == (0x0p+0)); /*bool*/
      if (_match_x612) {
        return kk_std_num_ddouble_one;
      }
      {
        bool _match_x613;
        kk_std_core_types__order _x_x1316;
        kk_std_core_types__order _match_x615;
        double _x_x1317;
        {
          double _x_2 = x.hi;
          _x_x1317 = _x_2; /*float64*/
        }
        double _x_x1318;
        kk_std_num_ddouble__ddouble _x_x1319 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
        {
          double _x_0_0 = _x_x1319.hi;
          _x_x1318 = _x_0_0; /*float64*/
        }
        _match_x615 = kk_std_num_float64_cmp(_x_x1317, _x_x1318, _ctx); /*order*/
        if (kk_std_core_types__is_Eq(_match_x615, _ctx)) {
          double _x_x1320;
          {
            double _x_1_0 = x.lo;
            _x_x1320 = _x_1_0; /*float64*/
          }
          double _x_x1321;
          kk_std_num_ddouble__ddouble _x_x1322 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
          {
            double _x_2_0 = _x_x1322.lo;
            _x_x1321 = _x_2_0; /*float64*/
          }
          _x_x1316 = kk_std_num_float64_cmp(_x_x1320, _x_x1321, _ctx); /*order*/
        }
        else {
          _x_x1316 = _match_x615; /*order*/
        }
        _match_x613 = kk_std_core_order__lp__eq__eq__rp_(_x_x1316, kk_std_core_types__new_Eq(_ctx), _ctx); /*bool*/
        if (_match_x613) {
          return kk_std_num_ddouble_dd_e;
        }
        {
          kk_integer_t m;
          double _x_x1323;
          double _x_x1324;
          double _x_x1325;
          double _x_x1326;
          {
            double _x_2_1 = x.hi;
            _x_x1326 = _x_2_1; /*float64*/
          }
          double _x_x1327;
          kk_std_num_ddouble__ddouble _x_x1328 = kk_std_num_ddouble_dd_ln2; /*std/num/ddouble/ddouble*/
          {
            double _x_3 = _x_x1328.hi;
            _x_x1327 = _x_3; /*float64*/
          }
          _x_x1325 = (_x_x1326 / _x_x1327); /*float64*/
          _x_x1324 = (_x_x1325 + (0x1p-1)); /*float64*/
          _x_x1323 = floor(_x_x1324); /*float64*/
          m = kk_integer_from_double(_x_x1323,kk_context()); /*int*/
          kk_std_num_ddouble__ddouble y_0_10240;
          kk_std_num_ddouble__ddouble _x_x1329;
          kk_integer_t _x_x1330 = kk_integer_dup(m, _ctx); /*int*/
          _x_x1329 = kk_std_num_ddouble_ddouble_int_exp(_x_x1330, kk_integer_from_small(0), _ctx); /*std/num/ddouble/ddouble*/
          y_0_10240 = kk_std_num_ddouble__lp__star__rp_(_x_x1329, kk_std_num_ddouble_dd_ln2, _ctx); /*std/num/ddouble/ddouble*/
          kk_std_num_ddouble__ddouble x_2_10237;
          kk_std_num_ddouble__ddouble _x_x1331;
          double _x_x1332;
          double _x_x1333;
          {
            double _x_4 = y_0_10240.hi;
            _x_x1333 = _x_4; /*float64*/
          }
          _x_x1332 = (-_x_x1333); /*float64*/
          double _x_x1334;
          double _x_x1335;
          {
            double _x_0_1 = y_0_10240.lo;
            _x_x1335 = _x_0_1; /*float64*/
          }
          _x_x1334 = (-_x_x1335); /*float64*/
          _x_x1331 = kk_std_num_ddouble__new_Ddouble(_x_x1332, _x_x1334, _ctx); /*std/num/ddouble/ddouble*/
          x_2_10237 = kk_std_num_ddouble__lp__plus__rp_(x, _x_x1331, _ctx); /*std/num/ddouble/ddouble*/
          kk_std_num_ddouble__ddouble r;
          double _x_x1336;
          double _x_x1337;
          {
            double _x_4_0 = x_2_10237.hi;
            _x_x1337 = _x_4_0; /*float64*/
          }
          _x_x1336 = (_x_x1337 * inv_k); /*float64*/
          double _x_x1338;
          double _x_x1339;
          {
            double _x_5 = x_2_10237.lo;
            _x_x1339 = _x_5; /*float64*/
          }
          _x_x1338 = (_x_x1339 * inv_k); /*float64*/
          r = kk_std_num_ddouble__new_Ddouble(_x_x1336, _x_x1338, _ctx); /*std/num/ddouble/ddouble*/
          kk_std_num_ddouble__ddouble p_0 = kk_std_num_ddouble_sqr(r, _ctx); /*std/num/ddouble/ddouble*/;
          kk_std_num_ddouble__ddouble t;
          kk_std_num_ddouble__ddouble _x_x1340;
          double _x_x1341;
          double _x_x1342;
          {
            double _x_6 = p_0.hi;
            _x_x1342 = _x_6; /*float64*/
          }
          _x_x1341 = (_x_x1342 * (0x1p-1)); /*float64*/
          double _x_x1343;
          double _x_x1344;
          {
            double _x_0_2 = p_0.lo;
            _x_x1344 = _x_0_2; /*float64*/
          }
          _x_x1343 = (_x_x1344 * (0x1p-1)); /*float64*/
          _x_x1340 = kk_std_num_ddouble__new_Ddouble(_x_x1341, _x_x1343, _ctx); /*std/num/ddouble/ddouble*/
          t = kk_std_num_ddouble__lp__plus__rp_(r, _x_x1340, _ctx); /*std/num/ddouble/ddouble*/
          kk_std_num_ddouble__ddouble init_10861;
          double _x_x1345;
          double _x_x1346;
          kk_std_num_ddouble__ddouble _x_x1347 = kk_std_num_ddouble_dd_epsilon; /*std/num/ddouble/ddouble*/
          {
            double _x_6_0 = _x_x1347.hi;
            _x_x1346 = _x_6_0; /*float64*/
          }
          _x_x1345 = (inv_k * _x_x1346); /*float64*/
          kk_std_core_types__list _x_x1348 = kk_std_core_types__list_dup(kk_std_num_ddouble_exp_factors, _ctx); /*list<std/num/ddouble/ddouble>*/
          init_10861 = kk_std_num_ddouble_exp_approx(p_0, t, r, _x_x1345, _x_x1348, kk_std_core_types__new_None(_ctx), _ctx); /*std/num/ddouble/ddouble*/
          kk_ref_t loc = kk_ref_alloc((kk_std_num_ddouble__ddouble_box(init_10861, _ctx)),kk_context()); /*local-var<3810,std/num/ddouble/ddouble>*/;
          kk_unit_t __ = kk_Unit;
          kk_function_t _x_x1349;
          kk_ref_dup(loc, _ctx);
          _x_x1349 = kk_std_num_ddouble_new_exp_fun1350(loc, _ctx); /*() -> (local<3810>) ()*/
          kk_std_core_repeat(kk_integer_from_small(9), _x_x1349, _ctx);
          kk_std_num_ddouble__ddouble _b_x312_314;
          kk_std_num_ddouble__ddouble _x_x1362;
          kk_box_t _x_x1363;
          kk_ref_t _x_x1364 = kk_ref_dup(loc, _ctx); /*local-var<3810,std/num/ddouble/ddouble>*/
          _x_x1363 = kk_ref_get(_x_x1364,kk_context()); /*5098*/
          _x_x1362 = kk_std_num_ddouble__ddouble_unbox(_x_x1363, KK_OWNED, _ctx); /*std/num/ddouble/ddouble*/
          _b_x312_314 = kk_std_num_ddouble__lp__plus__rp_(_x_x1362, kk_std_num_ddouble_one, _ctx); /*std/num/ddouble/ddouble*/
          kk_unit_t ___0 = kk_Unit;
          kk_ref_set_borrow(loc,(kk_std_num_ddouble__ddouble_box(_b_x312_314, _ctx)),kk_context());
          kk_std_num_ddouble__ddouble x_6_10250;
          kk_box_t _x_x1365;
          kk_ref_t _x_x1366 = kk_ref_dup(loc, _ctx); /*local-var<3810,std/num/ddouble/ddouble>*/
          _x_x1365 = kk_ref_get(_x_x1366,kk_context()); /*5098*/
          x_6_10250 = kk_std_num_ddouble__ddouble_unbox(_x_x1365, KK_OWNED, _ctx); /*std/num/ddouble/ddouble*/
          kk_std_num_ddouble__ddouble res;
          double _x_x1367;
          double _x_x1368;
          {
            double _x_9 = x_6_10250.hi;
            _x_x1368 = _x_9; /*float64*/
          }
          kk_integer_t _x_x1369 = kk_integer_dup(m, _ctx); /*int*/
          _x_x1367 = kk_std_num_float64_ldexp(_x_x1368, _x_x1369, _ctx); /*float64*/
          double _x_x1370;
          double _x_x1371;
          {
            double _x_10 = x_6_10250.lo;
            _x_x1371 = _x_10; /*float64*/
          }
          _x_x1370 = kk_std_num_float64_ldexp(_x_x1371, m, _ctx); /*float64*/
          res = kk_std_num_ddouble__new_Ddouble(_x_x1367, _x_x1370, _ctx); /*std/num/ddouble/ddouble*/
          kk_box_t _x_x1372 = kk_std_core_hnd_prompt_local_var(loc, kk_std_num_ddouble__ddouble_box(res, _ctx), _ctx); /*9564*/
          return kk_std_num_ddouble__ddouble_unbox(_x_x1372, KK_OWNED, _ctx);
        }
      }
    }
  }
}
 
// The natural logarithm (in base _e_) of `x`.

kk_std_num_ddouble__ddouble kk_std_num_ddouble_ln(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> ddouble */ 
  bool _match_x601;
  kk_std_core_types__order _x_x1373;
  kk_std_core_types__order _match_x609;
  double _x_x1374;
  {
    double _x = x.hi;
    _x_x1374 = _x; /*float64*/
  }
  double _x_x1375;
  kk_std_num_ddouble__ddouble _x_x1376 = kk_std_num_ddouble_zero; /*std/num/ddouble/ddouble*/
  {
    double _x_0 = _x_x1376.hi;
    _x_x1375 = _x_0; /*float64*/
  }
  _match_x609 = kk_std_num_float64_cmp(_x_x1374, _x_x1375, _ctx); /*order*/
  if (kk_std_core_types__is_Eq(_match_x609, _ctx)) {
    double _x_x1377;
    {
      double _x_1 = x.lo;
      _x_x1377 = _x_1; /*float64*/
    }
    double _x_x1378;
    kk_std_num_ddouble__ddouble _x_x1379 = kk_std_num_ddouble_zero; /*std/num/ddouble/ddouble*/
    {
      double _x_2 = _x_x1379.lo;
      _x_x1378 = _x_2; /*float64*/
    }
    _x_x1373 = kk_std_num_float64_cmp(_x_x1377, _x_x1378, _ctx); /*order*/
  }
  else {
    _x_x1373 = _match_x609; /*order*/
  }
  _match_x601 = kk_std_core_order__lp__excl__eq__rp_(_x_x1373, kk_std_core_types__new_Gt(_ctx), _ctx); /*bool*/
  if (_match_x601) {
    bool _match_x607;
    kk_std_core_types__order _x_x1380;
    kk_std_core_types__order _match_x608;
    double _x_x1381;
    {
      double _x_3 = x.hi;
      _x_x1381 = _x_3; /*float64*/
    }
    double _x_x1382;
    kk_std_num_ddouble__ddouble _x_x1383 = kk_std_num_ddouble_zero; /*std/num/ddouble/ddouble*/
    {
      double _x_0_0 = _x_x1383.hi;
      _x_x1382 = _x_0_0; /*float64*/
    }
    _match_x608 = kk_std_num_float64_cmp(_x_x1381, _x_x1382, _ctx); /*order*/
    if (kk_std_core_types__is_Eq(_match_x608, _ctx)) {
      double _x_x1384;
      {
        double _x_1_0 = x.lo;
        _x_x1384 = _x_1_0; /*float64*/
      }
      double _x_x1385;
      kk_std_num_ddouble__ddouble _x_x1386 = kk_std_num_ddouble_zero; /*std/num/ddouble/ddouble*/
      {
        double _x_2_0 = _x_x1386.lo;
        _x_x1385 = _x_2_0; /*float64*/
      }
      _x_x1380 = kk_std_num_float64_cmp(_x_x1384, _x_x1385, _ctx); /*order*/
    }
    else {
      _x_x1380 = _match_x608; /*order*/
    }
    _match_x607 = kk_std_core_order__lp__eq__eq__rp_(_x_x1380, kk_std_core_types__new_Eq(_ctx), _ctx); /*bool*/
    if (_match_x607) {
      return kk_std_num_ddouble_dd_neginf;
    }
    {
      return kk_std_num_ddouble_dd_nan;
    }
  }
  {
    bool _match_x602;
    kk_std_core_types__order _x_x1387;
    kk_std_core_types__order _match_x606;
    double _x_x1388;
    {
      double _x_4 = x.hi;
      _x_x1388 = _x_4; /*float64*/
    }
    double _x_x1389;
    kk_std_num_ddouble__ddouble _x_x1390 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
    {
      double _x_0_1 = _x_x1390.hi;
      _x_x1389 = _x_0_1; /*float64*/
    }
    _match_x606 = kk_std_num_float64_cmp(_x_x1388, _x_x1389, _ctx); /*order*/
    if (kk_std_core_types__is_Eq(_match_x606, _ctx)) {
      double _x_x1391;
      {
        double _x_1_1 = x.lo;
        _x_x1391 = _x_1_1; /*float64*/
      }
      double _x_x1392;
      kk_std_num_ddouble__ddouble _x_x1393 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
      {
        double _x_2_1 = _x_x1393.lo;
        _x_x1392 = _x_2_1; /*float64*/
      }
      _x_x1387 = kk_std_num_float64_cmp(_x_x1391, _x_x1392, _ctx); /*order*/
    }
    else {
      _x_x1387 = _match_x606; /*order*/
    }
    _match_x602 = kk_std_core_order__lp__eq__eq__rp_(_x_x1387, kk_std_core_types__new_Eq(_ctx), _ctx); /*bool*/
    if (_match_x602) {
      return kk_std_num_ddouble_zero;
    }
    {
      bool _match_x603;
      kk_std_core_types__order _x_x1394;
      kk_std_core_types__order _match_x605;
      double _x_x1395;
      {
        double _x_5 = x.hi;
        _x_x1395 = _x_5; /*float64*/
      }
      double _x_x1396;
      kk_std_num_ddouble__ddouble _x_x1397 = kk_std_num_ddouble_dd_e; /*std/num/ddouble/ddouble*/
      {
        double _x_0_2 = _x_x1397.hi;
        _x_x1396 = _x_0_2; /*float64*/
      }
      _match_x605 = kk_std_num_float64_cmp(_x_x1395, _x_x1396, _ctx); /*order*/
      if (kk_std_core_types__is_Eq(_match_x605, _ctx)) {
        double _x_x1398;
        {
          double _x_1_2 = x.lo;
          _x_x1398 = _x_1_2; /*float64*/
        }
        double _x_x1399;
        kk_std_num_ddouble__ddouble _x_x1400 = kk_std_num_ddouble_dd_e; /*std/num/ddouble/ddouble*/
        {
          double _x_2_2 = _x_x1400.lo;
          _x_x1399 = _x_2_2; /*float64*/
        }
        _x_x1394 = kk_std_num_float64_cmp(_x_x1398, _x_x1399, _ctx); /*order*/
      }
      else {
        _x_x1394 = _match_x605; /*order*/
      }
      _match_x603 = kk_std_core_order__lp__eq__eq__rp_(_x_x1394, kk_std_core_types__new_Eq(_ctx), _ctx); /*bool*/
      if (_match_x603) {
        return kk_std_num_ddouble_one;
      }
      {
        bool _match_x604;
        double _x_x1401;
        {
          double _x_6 = x.hi;
          _x_x1401 = _x_6; /*float64*/
        }
        _match_x604 = (isinf(_x_x1401) && !signbit(_x_x1401)); /*bool*/
        if (_match_x604) {
          return x;
        }
        {
          double d_10264;
          double _x_x1402;
          {
            double _x_0_3 = x.hi;
            _x_x1402 = _x_0_3; /*float64*/
          }
          d_10264 = log(_x_x1402); /*float64*/
          kk_std_num_ddouble__ddouble a0 = kk_std_num_ddouble__new_Ddouble(d_10264, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/;
          kk_std_num_ddouble__ddouble x_5_10266;
          kk_std_num_ddouble__ddouble _x_x1403;
          kk_std_num_ddouble__ddouble _x_x1404;
          double _x_x1405;
          double _x_x1406;
          {
            double _x_7 = a0.hi;
            _x_x1406 = _x_7; /*float64*/
          }
          _x_x1405 = (-_x_x1406); /*float64*/
          double _x_x1407;
          double _x_x1408;
          {
            double _x_0_4 = a0.lo;
            _x_x1408 = _x_0_4; /*float64*/
          }
          _x_x1407 = (-_x_x1408); /*float64*/
          _x_x1404 = kk_std_num_ddouble__new_Ddouble(_x_x1405, _x_x1407, _ctx); /*std/num/ddouble/ddouble*/
          _x_x1403 = kk_std_num_ddouble_exp(_x_x1404, _ctx); /*std/num/ddouble/ddouble*/
          x_5_10266 = kk_std_num_ddouble__lp__star__rp_(x, _x_x1403, _ctx); /*std/num/ddouble/ddouble*/
          kk_std_num_ddouble__ddouble _x_x1409;
          kk_std_num_ddouble__ddouble _x_x1410;
          double _x_x1411;
          double _x_x1412;
          kk_std_num_ddouble__ddouble _x_x1413 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
          {
            double _x_8 = _x_x1413.hi;
            _x_x1412 = _x_8; /*float64*/
          }
          _x_x1411 = (-_x_x1412); /*float64*/
          double _x_x1414;
          double _x_x1415;
          kk_std_num_ddouble__ddouble _x_x1416 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
          {
            double _x_0_5 = _x_x1416.lo;
            _x_x1415 = _x_0_5; /*float64*/
          }
          _x_x1414 = (-_x_x1415); /*float64*/
          _x_x1410 = kk_std_num_ddouble__new_Ddouble(_x_x1411, _x_x1414, _ctx); /*std/num/ddouble/ddouble*/
          _x_x1409 = kk_std_num_ddouble__lp__plus__rp_(x_5_10266, _x_x1410, _ctx); /*std/num/ddouble/ddouble*/
          return kk_std_num_ddouble__lp__plus__rp_(a0, _x_x1409, _ctx);
        }
      }
    }
  }
}
 
// Create a `:ddouble` `x` such that `x` equals `d`&middot;10^`e`^.

kk_std_num_ddouble__ddouble kk_std_num_ddouble_float64_fs_ddouble_exp(double d, kk_integer_t e, kk_context_t* _ctx) { /* (d : float64, e : int) -> ddouble */ 
  kk_std_num_ddouble__ddouble x_10272 = kk_std_num_ddouble__new_Ddouble(d, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/;
  bool _match_x600 = kk_integer_is_zero_borrow(e); /*bool*/;
  if (_match_x600) {
    kk_integer_drop(e, _ctx);
    return x_10272;
  }
  {
    kk_std_num_ddouble__ddouble _x_x1423 = kk_std_num_ddouble_powi(kk_std_num_ddouble_ten, e, _ctx); /*std/num/ddouble/ddouble*/
    return kk_std_num_ddouble__lp__star__rp_(x_10272, _x_x1423, _ctx);
  }
}
 
// Create a `:ddouble` `x` such that `x` equals `i`&middot;10^`e`^.

kk_std_num_ddouble__ddouble kk_std_num_ddouble_int_fs_ddouble_exp(kk_integer_t i, kk_integer_t exp_0, kk_context_t* _ctx) { /* (i : int, exp : int) -> ddouble */ 
  kk_std_num_ddouble__ddouble x_10276 = kk_std_num_ddouble_ddouble_int_exp(i, kk_integer_from_small(0), _ctx); /*std/num/ddouble/ddouble*/;
  bool _match_x599 = kk_integer_is_zero_borrow(exp_0); /*bool*/;
  if (_match_x599) {
    kk_integer_drop(exp_0, _ctx);
    return x_10276;
  }
  {
    kk_std_num_ddouble__ddouble _x_x1424 = kk_std_num_ddouble_powi(kk_std_num_ddouble_ten, exp_0, _ctx); /*std/num/ddouble/ddouble*/
    return kk_std_num_ddouble__lp__star__rp_(x_10276, _x_x1424, _ctx);
  }
}
 
// Show a `:ddouble` `x` with a given precision `prec` (=`-31`).
// The precision specifies the  number of digits after the dot (in either scientific of fixed-point notation).
// If the precision is negative, _at most_ `prec` digits are displayed, while for a positive
// precision, exactly `prec` digits behind the dot are displayed.
// This uses `show-fixed` when the exponent of `x` in scientific notation is larger than -5
// and smaller than the precision (or 15 in case of a negative precision), otherwise it uses `show-exp`.

kk_string_t kk_std_num_ddouble_show(kk_std_num_ddouble__ddouble x, kk_std_core_types__optional prec, kk_context_t* _ctx) { /* (x : ddouble, prec : ? int) -> string */ 
  bool b_10280;
  bool _match_x598;
  double _x_x1425;
  {
    double _x = x.hi;
    _x_x1425 = _x; /*float64*/
  }
  _match_x598 = isfinite(_x_x1425); /*bool*/
  if (_match_x598) {
    double _x_x1426;
    {
      double _x_0 = x.lo;
      _x_x1426 = _x_0; /*float64*/
    }
    b_10280 = isfinite(_x_x1426); /*bool*/
  }
  else {
    b_10280 = false; /*bool*/
  }
  if (b_10280) {
    kk_std_num_decimal__decimal _x_x1427 = kk_std_num_ddouble_decimal(x, kk_std_core_types__new_None(_ctx), _ctx); /*std/num/decimal/decimal*/
    kk_std_core_types__optional _x_x1428;
    kk_box_t _x_x1429;
    kk_integer_t _x_x1430;
    if (kk_std_core_types__is_Optional(prec, _ctx)) {
      kk_box_t _box_x322 = prec._cons._Optional.value;
      kk_integer_t _uniq_prec_4040 = kk_integer_unbox(_box_x322, _ctx);
      kk_integer_dup(_uniq_prec_4040, _ctx);
      kk_std_core_types__optional_drop(prec, _ctx);
      _x_x1430 = _uniq_prec_4040; /*int*/
    }
    else {
      kk_std_core_types__optional_drop(prec, _ctx);
      _x_x1430 = kk_integer_from_small(-31); /*int*/
    }
    _x_x1429 = kk_integer_box(_x_x1430, _ctx); /*7*/
    _x_x1428 = kk_std_core_types__new_Optional(_x_x1429, _ctx); /*? 7*/
    return kk_std_num_decimal_show(_x_x1427, _x_x1428, _ctx);
  }
  {
    kk_std_core_types__optional_drop(prec, _ctx);
    double _x_x1431;
    {
      double _x_1 = x.hi;
      _x_x1431 = _x_1; /*float64*/
    }
    return kk_std_num_float64_show(_x_x1431, kk_std_core_types__new_None(_ctx), _ctx);
  }
}
 
/* Show a `:ddouble` `x` precisely as the sum of two `:float64`s
in [hexadecimal notation](https://books.google.com/books?id=FgMsCwAAQBAJ&pg=PA41).
Use this if you need to guarantee that you can parse back `:ddouble`s exactly,
i.e. `x == x.show-hex.ddouble`.
```
> 0.1.ddouble.show-hex
"0x1.999999999999Ap-4 + 0x0.0p+0"
> "0.1".ddouble.show-hex
"0x1.999999999999Ap-4 + -0x1.999999999999Ap-58"
> dd-pi.show-hex
"0x1.921FB54442D18p+1 + 0x1.1A62633145C07p-53"
> dd-max.show-hex
"0x1.FFFFFFFFFFFFFp+1023 + 0x1.FFFFFFFFFFFFFp+969"
```
.
*/

kk_string_t kk_std_num_ddouble_show_hex(kk_std_num_ddouble__ddouble x, kk_std_core_types__optional width, kk_std_core_types__optional use_capitals, kk_std_core_types__optional pre, kk_context_t* _ctx) { /* (x : ddouble, width : ? int, use-capitals : ? bool, pre : ? string) -> string */ 
  bool b_10282;
  bool _match_x597;
  double _x_x1432;
  {
    double _x = x.hi;
    _x_x1432 = _x; /*float64*/
  }
  _match_x597 = isfinite(_x_x1432); /*bool*/
  if (_match_x597) {
    double _x_x1433;
    {
      double _x_0 = x.lo;
      _x_x1433 = _x_0; /*float64*/
    }
    b_10282 = isfinite(_x_x1433); /*bool*/
  }
  else {
    b_10282 = false; /*bool*/
  }
  if (b_10282) {
    kk_integer_t _b_x326_337;
    if (kk_std_core_types__is_Optional(width, _ctx)) {
      kk_box_t _box_x325 = width._cons._Optional.value;
      kk_integer_t _uniq_width_4178 = kk_integer_unbox(_box_x325, _ctx);
      kk_integer_dup(_uniq_width_4178, _ctx);
      _b_x326_337 = _uniq_width_4178; /*int*/
    }
    else {
      _b_x326_337 = kk_integer_from_small(1); /*int*/
    }
    bool _b_x328_338;
    if (kk_std_core_types__is_Optional(use_capitals, _ctx)) {
      kk_box_t _box_x327 = use_capitals._cons._Optional.value;
      bool _uniq_use_capitals_4182 = kk_bool_unbox(_box_x327);
      _b_x328_338 = _uniq_use_capitals_4182; /*bool*/
    }
    else {
      _b_x328_338 = true; /*bool*/
    }
    kk_string_t _b_x330_339;
    if (kk_std_core_types__is_Optional(pre, _ctx)) {
      kk_box_t _box_x329 = pre._cons._Optional.value;
      kk_string_t _uniq_pre_4186 = kk_string_unbox(_box_x329);
      kk_string_dup(_uniq_pre_4186, _ctx);
      _b_x330_339 = _uniq_pre_4186; /*string*/
    }
    else {
      kk_define_string_literal(, _s_x1434, 2, "0x", _ctx)
      _b_x330_339 = kk_string_dup(_s_x1434, _ctx); /*string*/
    }
    kk_string_t _x_x1435;
    double _x_x1436;
    {
      double _x_0_0 = x.hi;
      _x_x1436 = _x_0_0; /*float64*/
    }
    kk_std_core_types__optional _x_x1437 = kk_std_core_types__new_Optional(kk_integer_box(_b_x326_337, _ctx), _ctx); /*? 7*/
    kk_std_core_types__optional _x_x1438 = kk_std_core_types__new_Optional(kk_bool_box(_b_x328_338), _ctx); /*? 7*/
    kk_std_core_types__optional _x_x1439 = kk_std_core_types__new_Optional(kk_string_box(_b_x330_339), _ctx); /*? 7*/
    _x_x1435 = kk_std_num_float64_show_hex(_x_x1436, _x_x1437, _x_x1438, _x_x1439, _ctx); /*string*/
    kk_string_t _x_x1440;
    kk_integer_t _b_x332_340;
    if (kk_std_core_types__is_Optional(width, _ctx)) {
      kk_box_t _box_x331 = width._cons._Optional.value;
      kk_integer_t _uniq_width_4178_0 = kk_integer_unbox(_box_x331, _ctx);
      kk_integer_dup(_uniq_width_4178_0, _ctx);
      kk_std_core_types__optional_drop(width, _ctx);
      _b_x332_340 = _uniq_width_4178_0; /*int*/
    }
    else {
      kk_std_core_types__optional_drop(width, _ctx);
      _b_x332_340 = kk_integer_from_small(1); /*int*/
    }
    bool _b_x334_341;
    if (kk_std_core_types__is_Optional(use_capitals, _ctx)) {
      kk_box_t _box_x333 = use_capitals._cons._Optional.value;
      bool _uniq_use_capitals_4182_0 = kk_bool_unbox(_box_x333);
      kk_std_core_types__optional_drop(use_capitals, _ctx);
      _b_x334_341 = _uniq_use_capitals_4182_0; /*bool*/
    }
    else {
      kk_std_core_types__optional_drop(use_capitals, _ctx);
      _b_x334_341 = true; /*bool*/
    }
    kk_string_t _b_x336_342;
    if (kk_std_core_types__is_Optional(pre, _ctx)) {
      kk_box_t _box_x335 = pre._cons._Optional.value;
      kk_string_t _uniq_pre_4186_0 = kk_string_unbox(_box_x335);
      kk_string_dup(_uniq_pre_4186_0, _ctx);
      kk_std_core_types__optional_drop(pre, _ctx);
      _b_x336_342 = _uniq_pre_4186_0; /*string*/
    }
    else {
      kk_std_core_types__optional_drop(pre, _ctx);
      kk_define_string_literal(, _s_x1441, 2, "0x", _ctx)
      _b_x336_342 = kk_string_dup(_s_x1441, _ctx); /*string*/
    }
    kk_string_t _x_x1442;
    kk_define_string_literal(, _s_x1443, 3, " + ", _ctx)
    _x_x1442 = kk_string_dup(_s_x1443, _ctx); /*string*/
    kk_string_t _x_x1444;
    double _x_x1445;
    {
      double _x_1 = x.lo;
      _x_x1445 = _x_1; /*float64*/
    }
    kk_std_core_types__optional _x_x1446 = kk_std_core_types__new_Optional(kk_integer_box(_b_x332_340, _ctx), _ctx); /*? 7*/
    kk_std_core_types__optional _x_x1447 = kk_std_core_types__new_Optional(kk_bool_box(_b_x334_341), _ctx); /*? 7*/
    kk_std_core_types__optional _x_x1448 = kk_std_core_types__new_Optional(kk_string_box(_b_x336_342), _ctx); /*? 7*/
    _x_x1444 = kk_std_num_float64_show_hex(_x_x1445, _x_x1446, _x_x1447, _x_x1448, _ctx); /*string*/
    _x_x1440 = kk_std_core_types__lp__plus__plus__rp_(_x_x1442, _x_x1444, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x1435, _x_x1440, _ctx);
  }
  {
    kk_std_core_types__optional_drop(width, _ctx);
    kk_std_core_types__optional_drop(use_capitals, _ctx);
    kk_std_core_types__optional_drop(pre, _ctx);
    double _x_x1449;
    {
      double _x_2 = x.hi;
      _x_x1449 = _x_2; /*float64*/
    }
    return kk_std_num_float64_show(_x_x1449, kk_std_core_types__new_None(_ctx), _ctx);
  }
}
 
/* Show a ddouble `x` with a given precision `prec` (=`-31`) in scientific notation.
The precision specifies the  number of digits after the dot, i.e.
the number of significant digits is `prec+1`.
If the precision is negative, _at most_ `prec` digits are displayed, and if
it is positive exactly `prec` digits are used.
```
> 1.1.ddouble.show-exp
"1.1000000000000000888178419700125"
> 1.1.ddouble.show-exp(-100)
"1.100000000000000088817841970012523233890533447265625"
> 1.1.ddouble.show-exp(5)
"1.10000"
> 1.1.ddouble.show-exp(-5)
"1.1"
```
.
*/

kk_string_t kk_std_num_ddouble_show_exp(kk_std_num_ddouble__ddouble x, kk_std_core_types__optional prec, kk_context_t* _ctx) { /* (x : ddouble, prec : ? int) -> string */ 
  bool b_10286;
  bool _match_x596;
  double _x_x1450;
  {
    double _x = x.hi;
    _x_x1450 = _x; /*float64*/
  }
  _match_x596 = isfinite(_x_x1450); /*bool*/
  if (_match_x596) {
    double _x_x1451;
    {
      double _x_0 = x.lo;
      _x_x1451 = _x_0; /*float64*/
    }
    b_10286 = isfinite(_x_x1451); /*bool*/
  }
  else {
    b_10286 = false; /*bool*/
  }
  if (b_10286) {
    kk_std_num_decimal__decimal _x_x1452 = kk_std_num_ddouble_decimal(x, kk_std_core_types__new_None(_ctx), _ctx); /*std/num/decimal/decimal*/
    kk_std_core_types__optional _x_x1453;
    kk_box_t _x_x1454;
    kk_integer_t _x_x1455;
    if (kk_std_core_types__is_Optional(prec, _ctx)) {
      kk_box_t _box_x343 = prec._cons._Optional.value;
      kk_integer_t _uniq_prec_4338 = kk_integer_unbox(_box_x343, _ctx);
      kk_integer_dup(_uniq_prec_4338, _ctx);
      kk_std_core_types__optional_drop(prec, _ctx);
      _x_x1455 = _uniq_prec_4338; /*int*/
    }
    else {
      kk_std_core_types__optional_drop(prec, _ctx);
      _x_x1455 = kk_integer_from_small(-31); /*int*/
    }
    _x_x1454 = kk_integer_box(_x_x1455, _ctx); /*7*/
    _x_x1453 = kk_std_core_types__new_Optional(_x_x1454, _ctx); /*? 7*/
    return kk_std_num_decimal_show_exp(_x_x1452, _x_x1453, _ctx);
  }
  {
    kk_std_core_types__optional_drop(prec, _ctx);
    double _x_x1456;
    {
      double _x_1 = x.hi;
      _x_x1456 = _x_1; /*float64*/
    }
    return kk_std_num_float64_show(_x_x1456, kk_std_core_types__new_None(_ctx), _ctx);
  }
}
 
/* Show a ddouble `x` with a given precision `prec` (=`-31`) in fixed-point notation.
The precision specifies the  number of digits after the dot.
If the precision is negative, _at most_  `prec` digits after the dot are displayed,
while for a positive precision, exactly `prec` digits are used.
```
> 0.1.ddouble.show-fixed
"0.1000000000000000055511151231258"
> 0.1.ddouble.show-fixed(-100)
"0.1000000000000000055511151231257827021181583404541015625"
> 0.1.ddouble.show-fixed(5)
"0.10000"
> 0.1.ddouble.show-fixed(-5)
"0.1"
```
.
*/

kk_string_t kk_std_num_ddouble_show_fixed(kk_std_num_ddouble__ddouble x, kk_std_core_types__optional prec, kk_context_t* _ctx) { /* (x : ddouble, prec : ? int) -> string */ 
  bool b_10288;
  bool _match_x595;
  double _x_x1457;
  {
    double _x = x.hi;
    _x_x1457 = _x; /*float64*/
  }
  _match_x595 = isfinite(_x_x1457); /*bool*/
  if (_match_x595) {
    double _x_x1458;
    {
      double _x_0 = x.lo;
      _x_x1458 = _x_0; /*float64*/
    }
    b_10288 = isfinite(_x_x1458); /*bool*/
  }
  else {
    b_10288 = false; /*bool*/
  }
  if (b_10288) {
    kk_std_num_decimal__decimal _x_x1459 = kk_std_num_ddouble_decimal(x, kk_std_core_types__new_None(_ctx), _ctx); /*std/num/decimal/decimal*/
    kk_std_core_types__optional _x_x1460;
    kk_box_t _x_x1461;
    kk_integer_t _x_x1462;
    if (kk_std_core_types__is_Optional(prec, _ctx)) {
      kk_box_t _box_x346 = prec._cons._Optional.value;
      kk_integer_t _uniq_prec_4423 = kk_integer_unbox(_box_x346, _ctx);
      kk_integer_dup(_uniq_prec_4423, _ctx);
      kk_std_core_types__optional_drop(prec, _ctx);
      _x_x1462 = _uniq_prec_4423; /*int*/
    }
    else {
      kk_std_core_types__optional_drop(prec, _ctx);
      _x_x1462 = kk_integer_from_small(-31); /*int*/
    }
    _x_x1461 = kk_integer_box(_x_x1462, _ctx); /*7*/
    _x_x1460 = kk_std_core_types__new_Optional(_x_x1461, _ctx); /*? 7*/
    return kk_std_num_decimal_show_fixed(_x_x1459, _x_x1460, _ctx);
  }
  {
    kk_std_core_types__optional_drop(prec, _ctx);
    double _x_x1463;
    {
      double _x_1 = x.hi;
      _x_x1463 = _x_1; /*float64*/
    }
    return kk_std_num_float64_show(_x_x1463, kk_std_core_types__new_None(_ctx), _ctx);
  }
}
 
// Show a `:ddouble` as the sum of  `:float64`s with an optional precision.
// Note: use `show-hex` for reliable round-trip parsing.

kk_string_t kk_std_num_ddouble_show_sum(kk_std_num_ddouble__ddouble x, kk_std_core_types__optional prec, kk_context_t* _ctx) { /* (x : ddouble, prec : ? int) -> string */ 
  bool b_10290;
  bool _match_x594;
  double _x_x1464;
  {
    double _x = x.hi;
    _x_x1464 = _x; /*float64*/
  }
  _match_x594 = isfinite(_x_x1464); /*bool*/
  if (_match_x594) {
    double _x_x1465;
    {
      double _x_0 = x.lo;
      _x_x1465 = _x_0; /*float64*/
    }
    b_10290 = isfinite(_x_x1465); /*bool*/
  }
  else {
    b_10290 = false; /*bool*/
  }
  if (b_10290) {
    kk_integer_t _b_x350_353;
    if (kk_std_core_types__is_Optional(prec, _ctx)) {
      kk_box_t _box_x349 = prec._cons._Optional.value;
      kk_integer_t _uniq_prec_4508 = kk_integer_unbox(_box_x349, _ctx);
      kk_integer_dup(_uniq_prec_4508, _ctx);
      _b_x350_353 = _uniq_prec_4508; /*int*/
    }
    else {
      _b_x350_353 = kk_integer_from_small(-17); /*int*/
    }
    kk_string_t _x_x1466;
    double _x_x1467;
    {
      double _x_0_0 = x.hi;
      _x_x1467 = _x_0_0; /*float64*/
    }
    kk_std_core_types__optional _x_x1468 = kk_std_core_types__new_Optional(kk_integer_box(_b_x350_353, _ctx), _ctx); /*? 7*/
    _x_x1466 = kk_std_num_float64_show(_x_x1467, _x_x1468, _ctx); /*string*/
    kk_string_t _x_x1469;
    kk_integer_t _b_x352_354;
    if (kk_std_core_types__is_Optional(prec, _ctx)) {
      kk_box_t _box_x351 = prec._cons._Optional.value;
      kk_integer_t _uniq_prec_4508_0 = kk_integer_unbox(_box_x351, _ctx);
      kk_integer_dup(_uniq_prec_4508_0, _ctx);
      kk_std_core_types__optional_drop(prec, _ctx);
      _b_x352_354 = _uniq_prec_4508_0; /*int*/
    }
    else {
      kk_std_core_types__optional_drop(prec, _ctx);
      _b_x352_354 = kk_integer_from_small(-17); /*int*/
    }
    kk_string_t _x_x1470;
    kk_define_string_literal(, _s_x1471, 3, " + ", _ctx)
    _x_x1470 = kk_string_dup(_s_x1471, _ctx); /*string*/
    kk_string_t _x_x1472;
    double _x_x1473;
    {
      double _x_1 = x.lo;
      _x_x1473 = _x_1; /*float64*/
    }
    kk_std_core_types__optional _x_x1474 = kk_std_core_types__new_Optional(kk_integer_box(_b_x352_354, _ctx), _ctx); /*? 7*/
    _x_x1472 = kk_std_num_float64_show(_x_x1473, _x_x1474, _ctx); /*string*/
    _x_x1469 = kk_std_core_types__lp__plus__plus__rp_(_x_x1470, _x_x1472, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x1466, _x_x1469, _ctx);
  }
  {
    kk_std_core_types__optional_drop(prec, _ctx);
    double _x_x1475;
    {
      double _x_2 = x.hi;
      _x_x1475 = _x_2; /*float64*/
    }
    return kk_std_num_float64_show(_x_x1475, kk_std_core_types__new_None(_ctx), _ctx);
  }
}
 
// The `n`-th root of a `:ddouble` number `x`.
// `n` must be positive, and if `n` is even, then
// `x` must not be negative.

kk_std_num_ddouble__ddouble kk_std_num_ddouble_nroot(kk_std_num_ddouble__ddouble x, kk_integer_t n, kk_context_t* _ctx) { /* (x : ddouble, n : int) -> ddouble */ 
  bool _match_x586 = kk_integer_eq_borrow(n,(kk_integer_from_small(2)),kk_context()); /*bool*/;
  if (_match_x586) {
    kk_integer_drop(n, _ctx);
    return kk_std_num_ddouble_sqrt(x, _ctx);
  }
  {
    bool _match_x587 = kk_integer_eq_borrow(n,(kk_integer_from_small(1)),kk_context()); /*bool*/;
    if (_match_x587) {
      kk_integer_drop(n, _ctx);
      return x;
    }
    {
      bool _match_x588 = kk_integer_lte_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      if (_match_x588) {
        kk_integer_drop(n, _ctx);
        return kk_std_num_ddouble_dd_nan;
      }
      {
        bool b_10014;
        kk_integer_t _x_x1476 = kk_integer_dup(n, _ctx); /*int*/
        b_10014 = kk_integer_is_odd(_x_x1476,kk_context()); /*bool*/
        if (b_10014) {
          bool _match_x592;
          double _x_x1477;
          {
            double _x_3 = x.hi;
            _x_x1477 = _x_3; /*float64*/
          }
          _match_x592 = (_x_x1477 == (0x0p+0)); /*bool*/
          if (_match_x592) {
            kk_integer_drop(n, _ctx);
            return kk_std_num_ddouble_zero;
          }
          {
            kk_std_num_ddouble__ddouble r_0 = kk_std_num_ddouble_abs(x, _ctx); /*std/num/ddouble/ddouble*/;
            double d_4_10311;
            double _x_x1478;
            double _x_x1479;
            double _x_x1480;
            double _x_x1481;
            {
              double _x_4 = r_0.hi;
              _x_x1481 = _x_4; /*float64*/
            }
            _x_x1480 = log(_x_x1481); /*float64*/
            _x_x1479 = (-_x_x1480); /*float64*/
            double _x_x1482;
            kk_integer_t _x_x1483 = kk_integer_dup(n, _ctx); /*int*/
            _x_x1482 = kk_integer_as_double(_x_x1483,kk_context()); /*float64*/
            _x_x1478 = (_x_x1479 / _x_x1482); /*float64*/
            d_4_10311 = exp(_x_x1478); /*float64*/
            kk_std_num_ddouble__ddouble a0_0 = kk_std_num_ddouble__new_Ddouble(d_4_10311, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/;
            kk_std_num_ddouble__ddouble y_0_10314;
            kk_std_num_ddouble__ddouble _x_x1484;
            kk_integer_t _x_x1485 = kk_integer_dup(n, _ctx); /*int*/
            _x_x1484 = kk_std_num_ddouble_powi(a0_0, _x_x1485, _ctx); /*std/num/ddouble/ddouble*/
            y_0_10314 = kk_std_num_ddouble__lp__star__rp_(r_0, _x_x1484, _ctx); /*std/num/ddouble/ddouble*/
            kk_std_num_ddouble__ddouble a1_0;
            kk_std_num_ddouble__ddouble _x_x1486;
            kk_std_num_ddouble__ddouble _x_x1487;
            kk_std_num_ddouble__ddouble _x_x1488;
            kk_std_num_ddouble__ddouble _x_x1489;
            double _x_x1490;
            double _x_x1491;
            {
              double _x = y_0_10314.hi;
              _x_x1491 = _x; /*float64*/
            }
            _x_x1490 = (-_x_x1491); /*float64*/
            double _x_x1492;
            double _x_x1493;
            {
              double _x_0 = y_0_10314.lo;
              _x_x1493 = _x_0; /*float64*/
            }
            _x_x1492 = (-_x_x1493); /*float64*/
            _x_x1489 = kk_std_num_ddouble__new_Ddouble(_x_x1490, _x_x1492, _ctx); /*std/num/ddouble/ddouble*/
            _x_x1488 = kk_std_num_ddouble__lp__plus__rp_(kk_std_num_ddouble_one, _x_x1489, _ctx); /*std/num/ddouble/ddouble*/
            _x_x1487 = kk_std_num_ddouble__lp__star__rp_(a0_0, _x_x1488, _ctx); /*std/num/ddouble/ddouble*/
            kk_std_num_ddouble__ddouble _x_x1494 = kk_std_num_ddouble_ddouble_int_exp(n, kk_integer_from_small(0), _ctx); /*std/num/ddouble/ddouble*/
            _x_x1486 = kk_std_num_ddouble__lp__fs__rp_(_x_x1487, _x_x1494, _ctx); /*std/num/ddouble/ddouble*/
            a1_0 = kk_std_num_ddouble__lp__plus__rp_(a0_0, _x_x1486, _ctx); /*std/num/ddouble/ddouble*/
            kk_std_num_ddouble__ddouble _x_x1495;
            bool _match_x593;
            double _x_x1496;
            {
              double _x_5 = x.hi;
              _x_x1496 = _x_5; /*float64*/
            }
            _match_x593 = (_x_x1496 < (0x0p+0)); /*bool*/
            if (_match_x593) {
              double _x_x1497;
              double _x_x1498;
              kk_std_num_ddouble__ddouble _x_x1499 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
              {
                double _x_1 = _x_x1499.hi;
                _x_x1498 = _x_1; /*float64*/
              }
              _x_x1497 = (-_x_x1498); /*float64*/
              double _x_x1500;
              double _x_x1501;
              kk_std_num_ddouble__ddouble _x_x1502 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
              {
                double _x_0_0 = _x_x1502.lo;
                _x_x1501 = _x_0_0; /*float64*/
              }
              _x_x1500 = (-_x_x1501); /*float64*/
              _x_x1495 = kk_std_num_ddouble__new_Ddouble(_x_x1497, _x_x1500, _ctx); /*std/num/ddouble/ddouble*/
            }
            else {
              _x_x1495 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
            }
            return kk_std_num_ddouble__lp__fs__rp_(_x_x1495, a1_0, _ctx);
          }
        }
        {
          bool _match_x589;
          double _x_x1503;
          {
            double _x_2 = x.hi;
            _x_x1503 = _x_2; /*float64*/
          }
          _match_x589 = (_x_x1503 < (0x0p+0)); /*bool*/
          if (_match_x589) {
            kk_integer_drop(n, _ctx);
            return kk_std_num_ddouble_dd_nan;
          }
          {
            bool _match_x590;
            double _x_x1504;
            {
              double _x_0_1 = x.hi;
              _x_x1504 = _x_0_1; /*float64*/
            }
            _match_x590 = (_x_x1504 == (0x0p+0)); /*bool*/
            if (_match_x590) {
              kk_integer_drop(n, _ctx);
              return kk_std_num_ddouble_zero;
            }
            {
              kk_std_num_ddouble__ddouble r = kk_std_num_ddouble_abs(x, _ctx); /*std/num/ddouble/ddouble*/;
              double d_1_10301;
              double _x_x1505;
              double _x_x1506;
              double _x_x1507;
              double _x_x1508;
              {
                double _x_1_0 = r.hi;
                _x_x1508 = _x_1_0; /*float64*/
              }
              _x_x1507 = log(_x_x1508); /*float64*/
              _x_x1506 = (-_x_x1507); /*float64*/
              double _x_x1509;
              kk_integer_t _x_x1510 = kk_integer_dup(n, _ctx); /*int*/
              _x_x1509 = kk_integer_as_double(_x_x1510,kk_context()); /*float64*/
              _x_x1505 = (_x_x1506 / _x_x1509); /*float64*/
              d_1_10301 = exp(_x_x1505); /*float64*/
              kk_std_num_ddouble__ddouble a0 = kk_std_num_ddouble__new_Ddouble(d_1_10301, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/;
              kk_std_num_ddouble__ddouble y_10304;
              kk_std_num_ddouble__ddouble _x_x1511;
              kk_integer_t _x_x1512 = kk_integer_dup(n, _ctx); /*int*/
              _x_x1511 = kk_std_num_ddouble_powi(a0, _x_x1512, _ctx); /*std/num/ddouble/ddouble*/
              y_10304 = kk_std_num_ddouble__lp__star__rp_(r, _x_x1511, _ctx); /*std/num/ddouble/ddouble*/
              kk_std_num_ddouble__ddouble a1;
              kk_std_num_ddouble__ddouble _x_x1513;
              kk_std_num_ddouble__ddouble _x_x1514;
              kk_std_num_ddouble__ddouble _x_x1515;
              kk_std_num_ddouble__ddouble _x_x1516;
              double _x_x1517;
              double _x_x1518;
              {
                double _x_6 = y_10304.hi;
                _x_x1518 = _x_6; /*float64*/
              }
              _x_x1517 = (-_x_x1518); /*float64*/
              double _x_x1519;
              double _x_x1520;
              {
                double _x_0_2 = y_10304.lo;
                _x_x1520 = _x_0_2; /*float64*/
              }
              _x_x1519 = (-_x_x1520); /*float64*/
              _x_x1516 = kk_std_num_ddouble__new_Ddouble(_x_x1517, _x_x1519, _ctx); /*std/num/ddouble/ddouble*/
              _x_x1515 = kk_std_num_ddouble__lp__plus__rp_(kk_std_num_ddouble_one, _x_x1516, _ctx); /*std/num/ddouble/ddouble*/
              _x_x1514 = kk_std_num_ddouble__lp__star__rp_(a0, _x_x1515, _ctx); /*std/num/ddouble/ddouble*/
              kk_std_num_ddouble__ddouble _x_x1521 = kk_std_num_ddouble_ddouble_int_exp(n, kk_integer_from_small(0), _ctx); /*std/num/ddouble/ddouble*/
              _x_x1513 = kk_std_num_ddouble__lp__fs__rp_(_x_x1514, _x_x1521, _ctx); /*std/num/ddouble/ddouble*/
              a1 = kk_std_num_ddouble__lp__plus__rp_(a0, _x_x1513, _ctx); /*std/num/ddouble/ddouble*/
              kk_std_num_ddouble__ddouble _x_x1522;
              bool _match_x591;
              double _x_x1523;
              {
                double _x_2_0 = x.hi;
                _x_x1523 = _x_2_0; /*float64*/
              }
              _match_x591 = (_x_x1523 < (0x0p+0)); /*bool*/
              if (_match_x591) {
                double _x_x1524;
                double _x_x1525;
                kk_std_num_ddouble__ddouble _x_x1526 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
                {
                  double _x_7 = _x_x1526.hi;
                  _x_x1525 = _x_7; /*float64*/
                }
                _x_x1524 = (-_x_x1525); /*float64*/
                double _x_x1527;
                double _x_x1528;
                kk_std_num_ddouble__ddouble _x_x1529 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
                {
                  double _x_0_3 = _x_x1529.lo;
                  _x_x1528 = _x_0_3; /*float64*/
                }
                _x_x1527 = (-_x_x1528); /*float64*/
                _x_x1522 = kk_std_num_ddouble__new_Ddouble(_x_x1524, _x_x1527, _ctx); /*std/num/ddouble/ddouble*/
              }
              else {
                _x_x1522 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
              }
              return kk_std_num_ddouble__lp__fs__rp_(_x_x1522, a1, _ctx);
            }
          }
        }
      }
    }
  }
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble_one_half;
 
// Return `ln(1.0 + x)`.
// Avoids potential imprecision for small `x` where adding `1.0` explicitly
// may lead to rounding errors.

kk_std_num_ddouble__ddouble kk_std_num_ddouble_ln1p(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> ddouble */ 
  bool _match_x584;
  double _x_x1534;
  {
    double _x = x.hi;
    _x_x1534 = _x; /*float64*/
  }
  _match_x584 = (isinf(_x_x1534) && !signbit(_x_x1534)); /*bool*/
  if (_match_x584) {
    return x;
  }
  {
    kk_std_num_ddouble__ddouble y = kk_std_num_ddouble__lp__plus__rp_(kk_std_num_ddouble_one, x, _ctx); /*std/num/ddouble/ddouble*/;
    kk_std_num_ddouble__ddouble z;
    kk_std_num_ddouble__ddouble _x_x1535;
    double _x_x1536;
    double _x_x1537;
    kk_std_num_ddouble__ddouble _x_x1538 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
    {
      double _x_0 = _x_x1538.hi;
      _x_x1537 = _x_0; /*float64*/
    }
    _x_x1536 = (-_x_x1537); /*float64*/
    double _x_x1539;
    double _x_x1540;
    kk_std_num_ddouble__ddouble _x_x1541 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
    {
      double _x_0_0 = _x_x1541.lo;
      _x_x1540 = _x_0_0; /*float64*/
    }
    _x_x1539 = (-_x_x1540); /*float64*/
    _x_x1535 = kk_std_num_ddouble__new_Ddouble(_x_x1536, _x_x1539, _ctx); /*std/num/ddouble/ddouble*/
    z = kk_std_num_ddouble__lp__plus__rp_(y, _x_x1535, _ctx); /*std/num/ddouble/ddouble*/
    bool _match_x585;
    double _x_x1542;
    {
      double _x_0_1 = z.hi;
      _x_x1542 = _x_0_1; /*float64*/
    }
    _match_x585 = (_x_x1542 == (0x0p+0)); /*bool*/
    if (_match_x585) {
      return x;
    }
    {
      kk_std_num_ddouble__ddouble _x_x1543 = kk_std_num_ddouble_ln(y, _ctx); /*std/num/ddouble/ddouble*/
      kk_std_num_ddouble__ddouble _x_x1544 = kk_std_num_ddouble__lp__fs__rp_(x, z, _ctx); /*std/num/ddouble/ddouble*/
      return kk_std_num_ddouble__lp__star__rp_(_x_x1543, _x_x1544, _ctx);
    }
  }
}
 
// Return `exp(x - 1.0)`.
// Avoids rounding errors for values of `x` very close to `1.0`.

kk_std_num_ddouble__ddouble kk_std_num_ddouble_expm1(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> ddouble */ 
  bool _match_x579;
  double _x_x1545;
  {
    double _x = x.hi;
    _x_x1545 = _x; /*float64*/
  }
  _match_x579 = (isinf(_x_x1545) && !signbit(_x_x1545)); /*bool*/
  if (_match_x579) {
    return x;
  }
  {
    kk_std_num_ddouble__ddouble y = kk_std_num_ddouble_exp(x, _ctx); /*std/num/ddouble/ddouble*/;
    bool _match_x580;
    kk_std_core_types__order _x_x1546;
    kk_std_core_types__order _match_x583;
    double _x_x1547;
    {
      double _x_0 = y.hi;
      _x_x1547 = _x_0; /*float64*/
    }
    double _x_x1548;
    kk_std_num_ddouble__ddouble _x_x1549 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
    {
      double _x_0_0 = _x_x1549.hi;
      _x_x1548 = _x_0_0; /*float64*/
    }
    _match_x583 = kk_std_num_float64_cmp(_x_x1547, _x_x1548, _ctx); /*order*/
    if (kk_std_core_types__is_Eq(_match_x583, _ctx)) {
      double _x_x1550;
      {
        double _x_1 = y.lo;
        _x_x1550 = _x_1; /*float64*/
      }
      double _x_x1551;
      kk_std_num_ddouble__ddouble _x_x1552 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
      {
        double _x_2 = _x_x1552.lo;
        _x_x1551 = _x_2; /*float64*/
      }
      _x_x1546 = kk_std_num_float64_cmp(_x_x1550, _x_x1551, _ctx); /*order*/
    }
    else {
      _x_x1546 = _match_x583; /*order*/
    }
    _match_x580 = kk_std_core_order__lp__eq__eq__rp_(_x_x1546, kk_std_core_types__new_Eq(_ctx), _ctx); /*bool*/
    if (_match_x580) {
      return x;
    }
    {
      kk_std_num_ddouble__ddouble ym;
      kk_std_num_ddouble__ddouble _x_x1553;
      double _x_x1554;
      double _x_x1555;
      kk_std_num_ddouble__ddouble _x_x1556 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
      {
        double _x_3 = _x_x1556.hi;
        _x_x1555 = _x_3; /*float64*/
      }
      _x_x1554 = (-_x_x1555); /*float64*/
      double _x_x1557;
      double _x_x1558;
      kk_std_num_ddouble__ddouble _x_x1559 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
      {
        double _x_0_1 = _x_x1559.lo;
        _x_x1558 = _x_0_1; /*float64*/
      }
      _x_x1557 = (-_x_x1558); /*float64*/
      _x_x1553 = kk_std_num_ddouble__new_Ddouble(_x_x1554, _x_x1557, _ctx); /*std/num/ddouble/ddouble*/
      ym = kk_std_num_ddouble__lp__plus__rp_(y, _x_x1553, _ctx); /*std/num/ddouble/ddouble*/
      kk_std_num_ddouble__ddouble y_2_10333;
      double _x_x1560;
      double _x_x1561;
      kk_std_num_ddouble__ddouble _x_x1562 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
      {
        double _x_4 = _x_x1562.hi;
        _x_x1561 = _x_4; /*float64*/
      }
      _x_x1560 = (-_x_x1561); /*float64*/
      double _x_x1563;
      double _x_x1564;
      kk_std_num_ddouble__ddouble _x_x1565 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
      {
        double _x_0_2 = _x_x1565.lo;
        _x_x1564 = _x_0_2; /*float64*/
      }
      _x_x1563 = (-_x_x1564); /*float64*/
      y_2_10333 = kk_std_num_ddouble__new_Ddouble(_x_x1560, _x_x1563, _ctx); /*std/num/ddouble/ddouble*/
      bool _match_x581;
      kk_std_core_types__order _x_x1566;
      kk_std_core_types__order _match_x582;
      double _x_x1567;
      {
        double _x_5 = ym.hi;
        _x_x1567 = _x_5; /*float64*/
      }
      double _x_x1568;
      {
        double _x_0_3 = y_2_10333.hi;
        _x_x1568 = _x_0_3; /*float64*/
      }
      _match_x582 = kk_std_num_float64_cmp(_x_x1567, _x_x1568, _ctx); /*order*/
      if (kk_std_core_types__is_Eq(_match_x582, _ctx)) {
        double _x_x1569;
        {
          double _x_1_0 = ym.lo;
          _x_x1569 = _x_1_0; /*float64*/
        }
        double _x_x1570;
        {
          double _x_2_0 = y_2_10333.lo;
          _x_x1570 = _x_2_0; /*float64*/
        }
        _x_x1566 = kk_std_num_float64_cmp(_x_x1569, _x_x1570, _ctx); /*order*/
      }
      else {
        _x_x1566 = _match_x582; /*order*/
      }
      _match_x581 = kk_std_core_order__lp__eq__eq__rp_(_x_x1566, kk_std_core_types__new_Eq(_ctx), _ctx); /*bool*/
      if (_match_x581) {
        double _x_x1571;
        double _x_x1572;
        kk_std_num_ddouble__ddouble _x_x1573 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
        {
          double _x_6 = _x_x1573.hi;
          _x_x1572 = _x_6; /*float64*/
        }
        _x_x1571 = (-_x_x1572); /*float64*/
        double _x_x1574;
        double _x_x1575;
        kk_std_num_ddouble__ddouble _x_x1576 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
        {
          double _x_0_4 = _x_x1576.lo;
          _x_x1575 = _x_0_4; /*float64*/
        }
        _x_x1574 = (-_x_x1575); /*float64*/
        return kk_std_num_ddouble__new_Ddouble(_x_x1571, _x_x1574, _ctx);
      }
      {
        kk_std_num_ddouble__ddouble _x_x1577;
        kk_std_num_ddouble__ddouble _x_x1578 = kk_std_num_ddouble_ln(y, _ctx); /*std/num/ddouble/ddouble*/
        _x_x1577 = kk_std_num_ddouble__lp__fs__rp_(x, _x_x1578, _ctx); /*std/num/ddouble/ddouble*/
        return kk_std_num_ddouble__lp__star__rp_(ym, _x_x1577, _ctx);
      }
    }
  }
}
 
// Returns `ln(exp(x) + exp(y))`.
// Avoids overlow/underflow errors.

kk_std_num_ddouble__ddouble kk_std_num_ddouble_lnaddexp(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble y, kk_context_t* _ctx) { /* (x : ddouble, y : ddouble) -> ddouble */ 
  bool _match_x576;
  kk_std_core_types__order _x_x1581;
  kk_std_core_types__order _match_x578;
  double _x_x1582;
  {
    double _x = x.hi;
    _x_x1582 = _x; /*float64*/
  }
  double _x_x1583;
  {
    double _x_0 = y.hi;
    _x_x1583 = _x_0; /*float64*/
  }
  _match_x578 = kk_std_num_float64_cmp(_x_x1582, _x_x1583, _ctx); /*order*/
  if (kk_std_core_types__is_Eq(_match_x578, _ctx)) {
    double _x_x1584;
    {
      double _x_1 = x.lo;
      _x_x1584 = _x_1; /*float64*/
    }
    double _x_x1585;
    {
      double _x_2 = y.lo;
      _x_x1585 = _x_2; /*float64*/
    }
    _x_x1581 = kk_std_num_float64_cmp(_x_x1584, _x_x1585, _ctx); /*order*/
  }
  else {
    _x_x1581 = _match_x578; /*order*/
  }
  _match_x576 = kk_std_core_order__lp__eq__eq__rp_(_x_x1581, kk_std_core_types__new_Eq(_ctx), _ctx); /*bool*/
  if (_match_x576) {
    return kk_std_num_ddouble__lp__plus__rp_(x, kk_std_num_ddouble_dd_ln2, _ctx);
  }
  {
    kk_std_num_ddouble__ddouble z;
    kk_std_num_ddouble__ddouble _x_x1586;
    double _x_x1587;
    double _x_x1588;
    {
      double _x_3 = y.hi;
      _x_x1588 = _x_3; /*float64*/
    }
    _x_x1587 = (-_x_x1588); /*float64*/
    double _x_x1589;
    double _x_x1590;
    {
      double _x_0_0 = y.lo;
      _x_x1590 = _x_0_0; /*float64*/
    }
    _x_x1589 = (-_x_x1590); /*float64*/
    _x_x1586 = kk_std_num_ddouble__new_Ddouble(_x_x1587, _x_x1589, _ctx); /*std/num/ddouble/ddouble*/
    z = kk_std_num_ddouble__lp__plus__rp_(x, _x_x1586, _ctx); /*std/num/ddouble/ddouble*/
    bool _match_x577;
    double _x_x1591;
    {
      double _x_4 = z.hi;
      _x_x1591 = _x_4; /*float64*/
    }
    _match_x577 = (_x_x1591 > (0x0p+0)); /*bool*/
    if (_match_x577) {
      kk_std_num_ddouble__ddouble _x_x1592;
      kk_std_num_ddouble__ddouble _x_x1593;
      kk_std_num_ddouble__ddouble _x_x1594;
      double _x_x1595;
      double _x_x1596;
      {
        double _x_5 = z.hi;
        _x_x1596 = _x_5; /*float64*/
      }
      _x_x1595 = (-_x_x1596); /*float64*/
      double _x_x1597;
      double _x_x1598;
      {
        double _x_0_1 = z.lo;
        _x_x1598 = _x_0_1; /*float64*/
      }
      _x_x1597 = (-_x_x1598); /*float64*/
      _x_x1594 = kk_std_num_ddouble__new_Ddouble(_x_x1595, _x_x1597, _ctx); /*std/num/ddouble/ddouble*/
      _x_x1593 = kk_std_num_ddouble_exp(_x_x1594, _ctx); /*std/num/ddouble/ddouble*/
      _x_x1592 = kk_std_num_ddouble_ln1p(_x_x1593, _ctx); /*std/num/ddouble/ddouble*/
      return kk_std_num_ddouble__lp__plus__rp_(x, _x_x1592, _ctx);
    }
    {
      kk_std_num_ddouble__ddouble _x_x1599;
      kk_std_num_ddouble__ddouble _x_x1600 = kk_std_num_ddouble_exp(z, _ctx); /*std/num/ddouble/ddouble*/
      _x_x1599 = kk_std_num_ddouble_ln1p(_x_x1600, _ctx); /*std/num/ddouble/ddouble*/
      return kk_std_num_ddouble__lp__plus__rp_(y, _x_x1599, _ctx);
    }
  }
}
 
// Returns `log2( exp2(x) + exp2(y) )`.
// Avoids overlow/underflow errors.

kk_std_num_ddouble__ddouble kk_std_num_ddouble_logaddexp2(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble y, kk_context_t* _ctx) { /* (x : ddouble, y : ddouble) -> ddouble */ 
  bool _match_x573;
  kk_std_core_types__order _x_x1601;
  kk_std_core_types__order _match_x575;
  double _x_x1602;
  {
    double _x = x.hi;
    _x_x1602 = _x; /*float64*/
  }
  double _x_x1603;
  {
    double _x_0 = y.hi;
    _x_x1603 = _x_0; /*float64*/
  }
  _match_x575 = kk_std_num_float64_cmp(_x_x1602, _x_x1603, _ctx); /*order*/
  if (kk_std_core_types__is_Eq(_match_x575, _ctx)) {
    double _x_x1604;
    {
      double _x_1 = x.lo;
      _x_x1604 = _x_1; /*float64*/
    }
    double _x_x1605;
    {
      double _x_2 = y.lo;
      _x_x1605 = _x_2; /*float64*/
    }
    _x_x1601 = kk_std_num_float64_cmp(_x_x1604, _x_x1605, _ctx); /*order*/
  }
  else {
    _x_x1601 = _match_x575; /*order*/
  }
  _match_x573 = kk_std_core_order__lp__eq__eq__rp_(_x_x1601, kk_std_core_types__new_Eq(_ctx), _ctx); /*bool*/
  if (_match_x573) {
    return kk_std_num_ddouble__lp__plus__rp_(x, kk_std_num_ddouble_one, _ctx);
  }
  {
    kk_std_num_ddouble__ddouble z;
    kk_std_num_ddouble__ddouble _x_x1606;
    double _x_x1607;
    double _x_x1608;
    {
      double _x_3 = y.hi;
      _x_x1608 = _x_3; /*float64*/
    }
    _x_x1607 = (-_x_x1608); /*float64*/
    double _x_x1609;
    double _x_x1610;
    {
      double _x_0_0 = y.lo;
      _x_x1610 = _x_0_0; /*float64*/
    }
    _x_x1609 = (-_x_x1610); /*float64*/
    _x_x1606 = kk_std_num_ddouble__new_Ddouble(_x_x1607, _x_x1609, _ctx); /*std/num/ddouble/ddouble*/
    z = kk_std_num_ddouble__lp__plus__rp_(x, _x_x1606, _ctx); /*std/num/ddouble/ddouble*/
    bool _match_x574;
    double _x_x1611;
    {
      double _x_4 = z.hi;
      _x_x1611 = _x_4; /*float64*/
    }
    _match_x574 = (_x_x1611 > (0x0p+0)); /*bool*/
    if (_match_x574) {
      kk_std_num_ddouble__ddouble exp_0_10349;
      double _x_x1612;
      double _x_x1613;
      {
        double _x_5 = z.hi;
        _x_x1613 = _x_5; /*float64*/
      }
      _x_x1612 = (-_x_x1613); /*float64*/
      double _x_x1614;
      double _x_x1615;
      {
        double _x_0_1 = z.lo;
        _x_x1615 = _x_0_1; /*float64*/
      }
      _x_x1614 = (-_x_x1615); /*float64*/
      exp_0_10349 = kk_std_num_ddouble__new_Ddouble(_x_x1612, _x_x1614, _ctx); /*std/num/ddouble/ddouble*/
      kk_std_num_ddouble__ddouble x_3_10348;
      kk_std_num_ddouble__ddouble _x_x1616;
      kk_std_num_ddouble__ddouble _x_x1617 = kk_std_num_ddouble_ln(kk_std_num_ddouble_two, _ctx); /*std/num/ddouble/ddouble*/
      _x_x1616 = kk_std_num_ddouble__lp__star__rp_(exp_0_10349, _x_x1617, _ctx); /*std/num/ddouble/ddouble*/
      x_3_10348 = kk_std_num_ddouble_exp(_x_x1616, _ctx); /*std/num/ddouble/ddouble*/
      kk_std_num_ddouble__ddouble _x_x1618;
      kk_std_num_ddouble__ddouble _x_x1619 = kk_std_num_ddouble_ln1p(x_3_10348, _ctx); /*std/num/ddouble/ddouble*/
      _x_x1618 = kk_std_num_ddouble__lp__star__rp_(kk_std_num_ddouble_dd_log2e, _x_x1619, _ctx); /*std/num/ddouble/ddouble*/
      return kk_std_num_ddouble__lp__plus__rp_(x, _x_x1618, _ctx);
    }
    {
      kk_std_num_ddouble__ddouble x_5_10352;
      kk_std_num_ddouble__ddouble _x_x1620;
      kk_std_num_ddouble__ddouble _x_x1621 = kk_std_num_ddouble_ln(kk_std_num_ddouble_two, _ctx); /*std/num/ddouble/ddouble*/
      _x_x1620 = kk_std_num_ddouble__lp__star__rp_(z, _x_x1621, _ctx); /*std/num/ddouble/ddouble*/
      x_5_10352 = kk_std_num_ddouble_exp(_x_x1620, _ctx); /*std/num/ddouble/ddouble*/
      kk_std_num_ddouble__ddouble _x_x1622;
      kk_std_num_ddouble__ddouble _x_x1623 = kk_std_num_ddouble_ln1p(x_5_10352, _ctx); /*std/num/ddouble/ddouble*/
      _x_x1622 = kk_std_num_ddouble__lp__star__rp_(kk_std_num_ddouble_dd_log2e, _x_x1623, _ctx); /*std/num/ddouble/ddouble*/
      return kk_std_num_ddouble__lp__plus__rp_(y, _x_x1622, _ctx);
    }
  }
}
 
// Return if two `:ddouble`s are nearly equal with respect to some `epsilon` (=`8*dd-epsilon`).
// The epsilon is the nearest difference for numbers around 1.0. The routine automatically
// scales the epsilon for larger and smaller numbers, and for numbers close to zero.

bool kk_std_num_ddouble_nearly_eq(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble y, kk_std_core_types__optional epsilon, kk_context_t* _ctx) { /* (x : ddouble, y : ddouble, epsilon : ? ddouble) -> bool */ 
  bool _match_x558;
  kk_std_core_types__order _x_x1624;
  kk_std_core_types__order _match_x572;
  double _x_x1625;
  {
    double _x = x.hi;
    _x_x1625 = _x; /*float64*/
  }
  double _x_x1626;
  {
    double _x_0 = y.hi;
    _x_x1626 = _x_0; /*float64*/
  }
  _match_x572 = kk_std_num_float64_cmp(_x_x1625, _x_x1626, _ctx); /*order*/
  if (kk_std_core_types__is_Eq(_match_x572, _ctx)) {
    double _x_x1627;
    {
      double _x_1 = x.lo;
      _x_x1627 = _x_1; /*float64*/
    }
    double _x_x1628;
    {
      double _x_2 = y.lo;
      _x_x1628 = _x_2; /*float64*/
    }
    _x_x1624 = kk_std_num_float64_cmp(_x_x1627, _x_x1628, _ctx); /*order*/
  }
  else {
    _x_x1624 = _match_x572; /*order*/
  }
  _match_x558 = kk_std_core_order__lp__eq__eq__rp_(_x_x1624, kk_std_core_types__new_Eq(_ctx), _ctx); /*bool*/
  if (_match_x558) {
    kk_std_core_types__optional_drop(epsilon, _ctx);
    return true;
  }
  {
    kk_std_num_ddouble__ddouble x_1_10358;
    kk_std_num_ddouble__ddouble _x_x1629;
    double _x_x1630;
    double _x_x1631;
    {
      double _x_3 = y.hi;
      _x_x1631 = _x_3; /*float64*/
    }
    _x_x1630 = (-_x_x1631); /*float64*/
    double _x_x1632;
    double _x_x1633;
    {
      double _x_0_0 = y.lo;
      _x_x1633 = _x_0_0; /*float64*/
    }
    _x_x1632 = (-_x_x1633); /*float64*/
    _x_x1629 = kk_std_num_ddouble__new_Ddouble(_x_x1630, _x_x1632, _ctx); /*std/num/ddouble/ddouble*/
    x_1_10358 = kk_std_num_ddouble__lp__plus__rp_(x, _x_x1629, _ctx); /*std/num/ddouble/ddouble*/
    kk_std_num_ddouble__ddouble diff;
    bool _match_x571;
    double _x_x1634;
    {
      double _x_4 = x_1_10358.hi;
      _x_x1634 = _x_4; /*float64*/
    }
    _match_x571 = (_x_x1634 < (0x0p+0)); /*bool*/
    if (_match_x571) {
      double _x_x1635;
      double _x_x1636;
      {
        double _x_5 = x_1_10358.hi;
        _x_x1636 = _x_5; /*float64*/
      }
      _x_x1635 = (-_x_x1636); /*float64*/
      double _x_x1637;
      double _x_x1638;
      {
        double _x_0_1 = x_1_10358.lo;
        _x_x1638 = _x_0_1; /*float64*/
      }
      _x_x1637 = (-_x_x1638); /*float64*/
      diff = kk_std_num_ddouble__new_Ddouble(_x_x1635, _x_x1637, _ctx); /*std/num/ddouble/ddouble*/
    }
    else {
      diff = x_1_10358; /*std/num/ddouble/ddouble*/
    }
    bool _match_x559;
    double _x_x1639;
    {
      double _x_0_2 = x.hi;
      _x_x1639 = _x_0_2; /*float64*/
    }
    _match_x559 = (_x_x1639 == (0x0p+0)); /*bool*/
    if (_match_x559) {
      kk_std_num_ddouble__ddouble x_5_10367 = kk_std_num_ddouble__lp__star__rp_(kk_std_num_ddouble_two, diff, _ctx); /*std/num/ddouble/ddouble*/;
      kk_std_num_ddouble__ddouble y_2_10368;
      kk_std_num_ddouble__ddouble _x_x1640;
      if (kk_std_core_types__is_Optional(epsilon, _ctx)) {
        kk_box_t _box_x355 = epsilon._cons._Optional.value;
        kk_std_num_ddouble__ddouble _uniq_epsilon_5262 = kk_std_num_ddouble__ddouble_unbox(_box_x355, KK_BORROWED, _ctx);
        kk_std_core_types__optional_drop(epsilon, _ctx);
        _x_x1640 = _uniq_epsilon_5262; /*std/num/ddouble/ddouble*/
      }
      else {
        kk_std_core_types__optional_drop(epsilon, _ctx);
        _x_x1640 = kk_std_num_ddouble_dd_epsilon8; /*std/num/ddouble/ddouble*/
      }
      y_2_10368 = kk_std_num_ddouble__lp__star__rp_(_x_x1640, kk_std_num_ddouble_dd_min, _ctx); /*std/num/ddouble/ddouble*/
      kk_std_core_types__order _x_x1641;
      kk_std_core_types__order _match_x570;
      double _x_x1642;
      {
        double _x_6 = x_5_10367.hi;
        _x_x1642 = _x_6; /*float64*/
      }
      double _x_x1643;
      {
        double _x_0_3 = y_2_10368.hi;
        _x_x1643 = _x_0_3; /*float64*/
      }
      _match_x570 = kk_std_num_float64_cmp(_x_x1642, _x_x1643, _ctx); /*order*/
      if (kk_std_core_types__is_Eq(_match_x570, _ctx)) {
        double _x_x1644;
        {
          double _x_1_0 = x_5_10367.lo;
          _x_x1644 = _x_1_0; /*float64*/
        }
        double _x_x1645;
        {
          double _x_2_0 = y_2_10368.lo;
          _x_x1645 = _x_2_0; /*float64*/
        }
        _x_x1641 = kk_std_num_float64_cmp(_x_x1644, _x_x1645, _ctx); /*order*/
      }
      else {
        _x_x1641 = _match_x570; /*order*/
      }
      return kk_std_core_order__lp__eq__eq__rp_(_x_x1641, kk_std_core_types__new_Lt(_ctx), _ctx);
    }
    {
      bool _match_x560;
      double _x_x1646;
      {
        double _x_1_1 = y.hi;
        _x_x1646 = _x_1_1; /*float64*/
      }
      _match_x560 = (_x_x1646 == (0x0p+0)); /*bool*/
      if (_match_x560) {
        kk_std_num_ddouble__ddouble x_7_10372 = kk_std_num_ddouble__lp__star__rp_(kk_std_num_ddouble_two, diff, _ctx); /*std/num/ddouble/ddouble*/;
        kk_std_num_ddouble__ddouble y_3_10373;
        kk_std_num_ddouble__ddouble _x_x1647;
        if (kk_std_core_types__is_Optional(epsilon, _ctx)) {
          kk_box_t _box_x356 = epsilon._cons._Optional.value;
          kk_std_num_ddouble__ddouble _uniq_epsilon_5262_0 = kk_std_num_ddouble__ddouble_unbox(_box_x356, KK_BORROWED, _ctx);
          kk_std_core_types__optional_drop(epsilon, _ctx);
          _x_x1647 = _uniq_epsilon_5262_0; /*std/num/ddouble/ddouble*/
        }
        else {
          kk_std_core_types__optional_drop(epsilon, _ctx);
          _x_x1647 = kk_std_num_ddouble_dd_epsilon8; /*std/num/ddouble/ddouble*/
        }
        y_3_10373 = kk_std_num_ddouble__lp__star__rp_(_x_x1647, kk_std_num_ddouble_dd_min, _ctx); /*std/num/ddouble/ddouble*/
        kk_std_core_types__order _x_x1648;
        kk_std_core_types__order _match_x569;
        double _x_x1649;
        {
          double _x_7 = x_7_10372.hi;
          _x_x1649 = _x_7; /*float64*/
        }
        double _x_x1650;
        {
          double _x_0_4 = y_3_10373.hi;
          _x_x1650 = _x_0_4; /*float64*/
        }
        _match_x569 = kk_std_num_float64_cmp(_x_x1649, _x_x1650, _ctx); /*order*/
        if (kk_std_core_types__is_Eq(_match_x569, _ctx)) {
          double _x_x1651;
          {
            double _x_1_2 = x_7_10372.lo;
            _x_x1651 = _x_1_2; /*float64*/
          }
          double _x_x1652;
          {
            double _x_2_1 = y_3_10373.lo;
            _x_x1652 = _x_2_1; /*float64*/
          }
          _x_x1648 = kk_std_num_float64_cmp(_x_x1651, _x_x1652, _ctx); /*order*/
        }
        else {
          _x_x1648 = _match_x569; /*order*/
        }
        return kk_std_core_order__lp__eq__eq__rp_(_x_x1648, kk_std_core_types__new_Lt(_ctx), _ctx);
      }
      {
        bool _match_x561;
        kk_std_core_types__order _x_x1653;
        kk_std_core_types__order _match_x568;
        double _x_x1654;
        {
          double _x_8 = diff.hi;
          _x_x1654 = _x_8; /*float64*/
        }
        double _x_x1655;
        kk_std_num_ddouble__ddouble _x_x1656 = kk_std_num_ddouble_dd_min; /*std/num/ddouble/ddouble*/
        {
          double _x_0_5 = _x_x1656.hi;
          _x_x1655 = _x_0_5; /*float64*/
        }
        _match_x568 = kk_std_num_float64_cmp(_x_x1654, _x_x1655, _ctx); /*order*/
        if (kk_std_core_types__is_Eq(_match_x568, _ctx)) {
          double _x_x1657;
          {
            double _x_1_3 = diff.lo;
            _x_x1657 = _x_1_3; /*float64*/
          }
          double _x_x1658;
          kk_std_num_ddouble__ddouble _x_x1659 = kk_std_num_ddouble_dd_min; /*std/num/ddouble/ddouble*/
          {
            double _x_2_2 = _x_x1659.lo;
            _x_x1658 = _x_2_2; /*float64*/
          }
          _x_x1653 = kk_std_num_float64_cmp(_x_x1657, _x_x1658, _ctx); /*order*/
        }
        else {
          _x_x1653 = _match_x568; /*order*/
        }
        _match_x561 = kk_std_core_order__lp__eq__eq__rp_(_x_x1653, kk_std_core_types__new_Lt(_ctx), _ctx); /*bool*/
        if (_match_x561) {
          kk_std_num_ddouble__ddouble x_9_10376 = kk_std_num_ddouble__lp__star__rp_(kk_std_num_ddouble_two, diff, _ctx); /*std/num/ddouble/ddouble*/;
          kk_std_num_ddouble__ddouble y_5_10377;
          kk_std_num_ddouble__ddouble _x_x1660;
          if (kk_std_core_types__is_Optional(epsilon, _ctx)) {
            kk_box_t _box_x357 = epsilon._cons._Optional.value;
            kk_std_num_ddouble__ddouble _uniq_epsilon_5262_1 = kk_std_num_ddouble__ddouble_unbox(_box_x357, KK_BORROWED, _ctx);
            kk_std_core_types__optional_drop(epsilon, _ctx);
            _x_x1660 = _uniq_epsilon_5262_1; /*std/num/ddouble/ddouble*/
          }
          else {
            kk_std_core_types__optional_drop(epsilon, _ctx);
            _x_x1660 = kk_std_num_ddouble_dd_epsilon8; /*std/num/ddouble/ddouble*/
          }
          y_5_10377 = kk_std_num_ddouble__lp__star__rp_(_x_x1660, kk_std_num_ddouble_dd_min, _ctx); /*std/num/ddouble/ddouble*/
          kk_std_core_types__order _x_x1661;
          kk_std_core_types__order _match_x567;
          double _x_x1662;
          {
            double _x_9 = x_9_10376.hi;
            _x_x1662 = _x_9; /*float64*/
          }
          double _x_x1663;
          {
            double _x_0_6 = y_5_10377.hi;
            _x_x1663 = _x_0_6; /*float64*/
          }
          _match_x567 = kk_std_num_float64_cmp(_x_x1662, _x_x1663, _ctx); /*order*/
          if (kk_std_core_types__is_Eq(_match_x567, _ctx)) {
            double _x_x1664;
            {
              double _x_1_4 = x_9_10376.lo;
              _x_x1664 = _x_1_4; /*float64*/
            }
            double _x_x1665;
            {
              double _x_2_3 = y_5_10377.lo;
              _x_x1665 = _x_2_3; /*float64*/
            }
            _x_x1661 = kk_std_num_float64_cmp(_x_x1664, _x_x1665, _ctx); /*order*/
          }
          else {
            _x_x1661 = _match_x567; /*order*/
          }
          return kk_std_core_order__lp__eq__eq__rp_(_x_x1661, kk_std_core_types__new_Lt(_ctx), _ctx);
        }
        {
          kk_std_num_ddouble__ddouble sum_0;
          kk_std_num_ddouble__ddouble _x_x1666 = kk_std_num_ddouble_abs(x, _ctx); /*std/num/ddouble/ddouble*/
          kk_std_num_ddouble__ddouble _x_x1667 = kk_std_num_ddouble_abs(y, _ctx); /*std/num/ddouble/ddouble*/
          sum_0 = kk_std_num_ddouble__lp__plus__rp_(_x_x1666, _x_x1667, _ctx); /*std/num/ddouble/ddouble*/
          kk_std_num_ddouble__ddouble x_10_10378;
          kk_std_num_ddouble__ddouble _x_x1668 = kk_std_num_ddouble__lp__star__rp_(kk_std_num_ddouble_two, diff, _ctx); /*std/num/ddouble/ddouble*/
          kk_std_num_ddouble__ddouble _x_x1669;
          bool _match_x565;
          kk_std_core_types__order _x_x1670;
          kk_std_core_types__order _match_x566;
          double _x_x1671;
          {
            double _x_10 = sum_0.hi;
            _x_x1671 = _x_10; /*float64*/
          }
          double _x_x1672;
          kk_std_num_ddouble__ddouble _x_x1673 = kk_std_num_ddouble_dd_max; /*std/num/ddouble/ddouble*/
          {
            double _x_0_7 = _x_x1673.hi;
            _x_x1672 = _x_0_7; /*float64*/
          }
          _match_x566 = kk_std_num_float64_cmp(_x_x1671, _x_x1672, _ctx); /*order*/
          if (kk_std_core_types__is_Eq(_match_x566, _ctx)) {
            double _x_x1674;
            {
              double _x_1_5 = sum_0.lo;
              _x_x1674 = _x_1_5; /*float64*/
            }
            double _x_x1675;
            kk_std_num_ddouble__ddouble _x_x1676 = kk_std_num_ddouble_dd_max; /*std/num/ddouble/ddouble*/
            {
              double _x_2_4 = _x_x1676.lo;
              _x_x1675 = _x_2_4; /*float64*/
            }
            _x_x1670 = kk_std_num_float64_cmp(_x_x1674, _x_x1675, _ctx); /*order*/
          }
          else {
            _x_x1670 = _match_x566; /*order*/
          }
          _match_x565 = kk_std_core_order__lp__eq__eq__rp_(_x_x1670, kk_std_core_types__new_Gt(_ctx), _ctx); /*bool*/
          if (_match_x565) {
            _x_x1669 = kk_std_num_ddouble_dd_max; /*std/num/ddouble/ddouble*/
          }
          else {
            _x_x1669 = sum_0; /*std/num/ddouble/ddouble*/
          }
          x_10_10378 = kk_std_num_ddouble__lp__fs__rp_(_x_x1668, _x_x1669, _ctx); /*std/num/ddouble/ddouble*/
          kk_std_core_types__order _x_x1677;
          kk_std_core_types__order _match_x562;
          double _x_x1678;
          {
            double _x_11 = x_10_10378.hi;
            _x_x1678 = _x_11; /*float64*/
          }
          double _x_x1679;
          kk_std_num_ddouble__ddouble _match_x564;
          if (kk_std_core_types__is_Optional(epsilon, _ctx)) {
            kk_box_t _box_x358 = epsilon._cons._Optional.value;
            kk_std_num_ddouble__ddouble _uniq_epsilon_5262_2 = kk_std_num_ddouble__ddouble_unbox(_box_x358, KK_BORROWED, _ctx);
            _match_x564 = _uniq_epsilon_5262_2; /*std/num/ddouble/ddouble*/
          }
          else {
            _match_x564 = kk_std_num_ddouble_dd_epsilon8; /*std/num/ddouble/ddouble*/
          }
          {
            double _x_0_8 = _match_x564.hi;
            _x_x1679 = _x_0_8; /*float64*/
          }
          _match_x562 = kk_std_num_float64_cmp(_x_x1678, _x_x1679, _ctx); /*order*/
          if (kk_std_core_types__is_Eq(_match_x562, _ctx)) {
            double _x_x1680;
            {
              double _x_1_6 = x_10_10378.lo;
              _x_x1680 = _x_1_6; /*float64*/
            }
            double _x_x1681;
            kk_std_num_ddouble__ddouble _match_x563;
            if (kk_std_core_types__is_Optional(epsilon, _ctx)) {
              kk_box_t _box_x359 = epsilon._cons._Optional.value;
              kk_std_num_ddouble__ddouble _uniq_epsilon_5262_3 = kk_std_num_ddouble__ddouble_unbox(_box_x359, KK_BORROWED, _ctx);
              kk_std_core_types__optional_drop(epsilon, _ctx);
              _match_x563 = _uniq_epsilon_5262_3; /*std/num/ddouble/ddouble*/
            }
            else {
              kk_std_core_types__optional_drop(epsilon, _ctx);
              _match_x563 = kk_std_num_ddouble_dd_epsilon8; /*std/num/ddouble/ddouble*/
            }
            {
              double _x_2_5 = _match_x563.lo;
              _x_x1681 = _x_2_5; /*float64*/
            }
            _x_x1677 = kk_std_num_float64_cmp(_x_x1680, _x_x1681, _ctx); /*order*/
          }
          else {
            kk_std_core_types__optional_drop(epsilon, _ctx);
            _x_x1677 = _match_x562; /*order*/
          }
          return kk_std_core_order__lp__eq__eq__rp_(_x_x1677, kk_std_core_types__new_Lt(_ctx), _ctx);
        }
      }
    }
  }
}
 
// The hypotenuse of `x` and `y`: `sqrt(x*x + y*y)`.
// Prevents overflow for large numbers.

kk_std_num_ddouble__ddouble kk_std_num_ddouble_hypot(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble y, kk_context_t* _ctx) { /* (x : ddouble, y : ddouble) -> ddouble */ 
  kk_std_num_ddouble__ddouble xx = kk_std_num_ddouble_abs(x, _ctx); /*std/num/ddouble/ddouble*/;
  kk_std_num_ddouble__ddouble yy = kk_std_num_ddouble_abs(y, _ctx); /*std/num/ddouble/ddouble*/;
  kk_std_num_ddouble__ddouble lo;
  bool _match_x556;
  kk_std_core_types__order _x_x1682;
  kk_std_core_types__order _match_x557;
  double _x_x1683;
  {
    double _x = xx.hi;
    _x_x1683 = _x; /*float64*/
  }
  double _x_x1684;
  {
    double _x_0 = yy.hi;
    _x_x1684 = _x_0; /*float64*/
  }
  _match_x557 = kk_std_num_float64_cmp(_x_x1683, _x_x1684, _ctx); /*order*/
  if (kk_std_core_types__is_Eq(_match_x557, _ctx)) {
    double _x_x1685;
    {
      double _x_1 = xx.lo;
      _x_x1685 = _x_1; /*float64*/
    }
    double _x_x1686;
    {
      double _x_2 = yy.lo;
      _x_x1686 = _x_2; /*float64*/
    }
    _x_x1682 = kk_std_num_float64_cmp(_x_x1685, _x_x1686, _ctx); /*order*/
  }
  else {
    _x_x1682 = _match_x557; /*order*/
  }
  _match_x556 = kk_std_core_order__lp__excl__eq__rp_(_x_x1682, kk_std_core_types__new_Gt(_ctx), _ctx); /*bool*/
  if (_match_x556) {
    lo = xx; /*std/num/ddouble/ddouble*/
  }
  else {
    lo = yy; /*std/num/ddouble/ddouble*/
  }
  kk_std_num_ddouble__ddouble hi;
  bool _match_x554;
  kk_std_core_types__order _x_x1687;
  kk_std_core_types__order _match_x555;
  double _x_x1688;
  {
    double _x_3 = xx.hi;
    _x_x1688 = _x_3; /*float64*/
  }
  double _x_x1689;
  {
    double _x_0_0 = yy.hi;
    _x_x1689 = _x_0_0; /*float64*/
  }
  _match_x555 = kk_std_num_float64_cmp(_x_x1688, _x_x1689, _ctx); /*order*/
  if (kk_std_core_types__is_Eq(_match_x555, _ctx)) {
    double _x_x1690;
    {
      double _x_1_0 = xx.lo;
      _x_x1690 = _x_1_0; /*float64*/
    }
    double _x_x1691;
    {
      double _x_2_0 = yy.lo;
      _x_x1691 = _x_2_0; /*float64*/
    }
    _x_x1687 = kk_std_num_float64_cmp(_x_x1690, _x_x1691, _ctx); /*order*/
  }
  else {
    _x_x1687 = _match_x555; /*order*/
  }
  _match_x554 = kk_std_core_order__lp__excl__eq__rp_(_x_x1687, kk_std_core_types__new_Lt(_ctx), _ctx); /*bool*/
  if (_match_x554) {
    hi = xx; /*std/num/ddouble/ddouble*/
  }
  else {
    hi = yy; /*std/num/ddouble/ddouble*/
  }
  bool _match_x553;
  double _x_x1692;
  {
    double _x_4 = hi.hi;
    _x_x1692 = _x_4; /*float64*/
  }
  _match_x553 = (_x_x1692 == (0x0p+0)); /*bool*/
  if (_match_x553) {
    return kk_std_num_ddouble_zero;
  }
  {
    kk_std_num_ddouble__ddouble z = kk_std_num_ddouble__lp__fs__rp_(lo, hi, _ctx); /*std/num/ddouble/ddouble*/;
    kk_std_num_ddouble__ddouble _x_x1693;
    kk_std_num_ddouble__ddouble _x_x1694;
    kk_std_num_ddouble__ddouble _x_x1695 = kk_std_num_ddouble__lp__star__rp_(z, z, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1694 = kk_std_num_ddouble__lp__plus__rp_(kk_std_num_ddouble_one, _x_x1695, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1693 = kk_std_num_ddouble_sqrt(_x_x1694, _ctx); /*std/num/ddouble/ddouble*/
    return kk_std_num_ddouble__lp__star__rp_(hi, _x_x1693, _ctx);
  }
}
 
// The square root of the sum of the squares of three doubles.
// Prevents overflow for large numbers.

kk_std_num_ddouble__ddouble kk_std_num_ddouble_xyz_fs_hypot(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble y, kk_std_num_ddouble__ddouble z, kk_context_t* _ctx) { /* (x : ddouble, y : ddouble, z : ddouble) -> ddouble */ 
  kk_std_num_ddouble__ddouble xx = kk_std_num_ddouble_abs(x, _ctx); /*std/num/ddouble/ddouble*/;
  kk_std_num_ddouble__ddouble yy = kk_std_num_ddouble_abs(y, _ctx); /*std/num/ddouble/ddouble*/;
  kk_std_num_ddouble__ddouble zz = kk_std_num_ddouble_abs(z, _ctx); /*std/num/ddouble/ddouble*/;
  kk_std_num_ddouble__ddouble x_0_10393;
  bool _match_x551;
  kk_std_core_types__order _x_x1696;
  kk_std_core_types__order _match_x552;
  double _x_x1697;
  {
    double _x = xx.hi;
    _x_x1697 = _x; /*float64*/
  }
  double _x_x1698;
  {
    double _x_0 = yy.hi;
    _x_x1698 = _x_0; /*float64*/
  }
  _match_x552 = kk_std_num_float64_cmp(_x_x1697, _x_x1698, _ctx); /*order*/
  if (kk_std_core_types__is_Eq(_match_x552, _ctx)) {
    double _x_x1699;
    {
      double _x_1 = xx.lo;
      _x_x1699 = _x_1; /*float64*/
    }
    double _x_x1700;
    {
      double _x_2 = yy.lo;
      _x_x1700 = _x_2; /*float64*/
    }
    _x_x1696 = kk_std_num_float64_cmp(_x_x1699, _x_x1700, _ctx); /*order*/
  }
  else {
    _x_x1696 = _match_x552; /*order*/
  }
  _match_x551 = kk_std_core_order__lp__excl__eq__rp_(_x_x1696, kk_std_core_types__new_Lt(_ctx), _ctx); /*bool*/
  if (_match_x551) {
    x_0_10393 = xx; /*std/num/ddouble/ddouble*/
  }
  else {
    x_0_10393 = yy; /*std/num/ddouble/ddouble*/
  }
  kk_std_num_ddouble__ddouble hi;
  bool _match_x549;
  kk_std_core_types__order _x_x1701;
  kk_std_core_types__order _match_x550;
  double _x_x1702;
  {
    double _x_3 = x_0_10393.hi;
    _x_x1702 = _x_3; /*float64*/
  }
  double _x_x1703;
  {
    double _x_0_0 = zz.hi;
    _x_x1703 = _x_0_0; /*float64*/
  }
  _match_x550 = kk_std_num_float64_cmp(_x_x1702, _x_x1703, _ctx); /*order*/
  if (kk_std_core_types__is_Eq(_match_x550, _ctx)) {
    double _x_x1704;
    {
      double _x_1_0 = x_0_10393.lo;
      _x_x1704 = _x_1_0; /*float64*/
    }
    double _x_x1705;
    {
      double _x_2_0 = zz.lo;
      _x_x1705 = _x_2_0; /*float64*/
    }
    _x_x1701 = kk_std_num_float64_cmp(_x_x1704, _x_x1705, _ctx); /*order*/
  }
  else {
    _x_x1701 = _match_x550; /*order*/
  }
  _match_x549 = kk_std_core_order__lp__excl__eq__rp_(_x_x1701, kk_std_core_types__new_Lt(_ctx), _ctx); /*bool*/
  if (_match_x549) {
    hi = x_0_10393; /*std/num/ddouble/ddouble*/
  }
  else {
    hi = zz; /*std/num/ddouble/ddouble*/
  }
  bool _match_x548;
  double _x_x1706;
  {
    double _x_4 = hi.hi;
    _x_x1706 = _x_4; /*float64*/
  }
  _match_x548 = (_x_x1706 == (0x0p+0)); /*bool*/
  if (_match_x548) {
    return kk_std_num_ddouble_zero;
  }
  {
    kk_std_num_ddouble__ddouble _x_x1707;
    kk_std_num_ddouble__ddouble _x_x1708;
    kk_std_num_ddouble__ddouble _x_x1709;
    kk_std_num_ddouble__ddouble _x_x1710;
    kk_std_num_ddouble__ddouble _x_x1711 = kk_std_num_ddouble__lp__fs__rp_(xx, hi, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1710 = kk_std_num_ddouble_sqr(_x_x1711, _ctx); /*std/num/ddouble/ddouble*/
    kk_std_num_ddouble__ddouble _x_x1712;
    kk_std_num_ddouble__ddouble _x_x1713 = kk_std_num_ddouble__lp__fs__rp_(yy, hi, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1712 = kk_std_num_ddouble_sqr(_x_x1713, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1709 = kk_std_num_ddouble__lp__plus__rp_(_x_x1710, _x_x1712, _ctx); /*std/num/ddouble/ddouble*/
    kk_std_num_ddouble__ddouble _x_x1714;
    kk_std_num_ddouble__ddouble _x_x1715 = kk_std_num_ddouble__lp__fs__rp_(zz, hi, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1714 = kk_std_num_ddouble_sqr(_x_x1715, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1708 = kk_std_num_ddouble__lp__plus__rp_(_x_x1709, _x_x1714, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1707 = kk_std_num_ddouble_sqrt(_x_x1708, _ctx); /*std/num/ddouble/ddouble*/
    return kk_std_num_ddouble__lp__star__rp_(hi, _x_x1707, _ctx);
  }
}
 
// The maximum of the absolute values.

kk_std_num_ddouble__ddouble kk_std_num_ddouble_abs_max(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble y, kk_context_t* _ctx) { /* (x : ddouble, y : ddouble) -> ddouble */ 
  kk_std_num_ddouble__ddouble x_0_10404 = kk_std_num_ddouble_abs(x, _ctx); /*std/num/ddouble/ddouble*/;
  kk_std_num_ddouble__ddouble y_0_10405 = kk_std_num_ddouble_abs(y, _ctx); /*std/num/ddouble/ddouble*/;
  bool _match_x546;
  kk_std_core_types__order _x_x1716;
  kk_std_core_types__order _match_x547;
  double _x_x1717;
  {
    double _x = x_0_10404.hi;
    _x_x1717 = _x; /*float64*/
  }
  double _x_x1718;
  {
    double _x_0 = y_0_10405.hi;
    _x_x1718 = _x_0; /*float64*/
  }
  _match_x547 = kk_std_num_float64_cmp(_x_x1717, _x_x1718, _ctx); /*order*/
  if (kk_std_core_types__is_Eq(_match_x547, _ctx)) {
    double _x_x1719;
    {
      double _x_1 = x_0_10404.lo;
      _x_x1719 = _x_1; /*float64*/
    }
    double _x_x1720;
    {
      double _x_2 = y_0_10405.lo;
      _x_x1720 = _x_2; /*float64*/
    }
    _x_x1716 = kk_std_num_float64_cmp(_x_x1719, _x_x1720, _ctx); /*order*/
  }
  else {
    _x_x1716 = _match_x547; /*order*/
  }
  _match_x546 = kk_std_core_order__lp__excl__eq__rp_(_x_x1716, kk_std_core_types__new_Lt(_ctx), _ctx); /*bool*/
  if (_match_x546) {
    return x_0_10404;
  }
  {
    return y_0_10405;
  }
}
 
// The maximum of a list of absolute values.


// lift anonymous function
struct kk_std_num_ddouble_list_fs_abs_max_fun1722__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_ddouble_list_fs_abs_max_fun1722(kk_function_t _fself, kk_box_t _b_x363, kk_box_t _b_x364, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble_list_fs_new_abs_max_fun1722(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_ddouble_list_fs_abs_max_fun1722, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_ddouble_list_fs_abs_max_fun1722(kk_function_t _fself, kk_box_t _b_x363, kk_box_t _b_x364, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_num_ddouble__ddouble x_368 = kk_std_num_ddouble__ddouble_unbox(_b_x363, KK_OWNED, _ctx); /*std/num/ddouble/ddouble*/;
  kk_std_num_ddouble__ddouble m_369 = kk_std_num_ddouble__ddouble_unbox(_b_x364, KK_OWNED, _ctx); /*std/num/ddouble/ddouble*/;
  kk_std_num_ddouble__ddouble x_0_10408 = kk_std_num_ddouble_abs(x_368, _ctx); /*std/num/ddouble/ddouble*/;
  kk_std_num_ddouble__ddouble _x_x1723;
  bool _match_x544;
  kk_std_core_types__order _x_x1724;
  kk_std_core_types__order _match_x545;
  double _x_x1725;
  {
    double _x = x_0_10408.hi;
    _x_x1725 = _x; /*float64*/
  }
  double _x_x1726;
  {
    double _x_0 = m_369.hi;
    _x_x1726 = _x_0; /*float64*/
  }
  _match_x545 = kk_std_num_float64_cmp(_x_x1725, _x_x1726, _ctx); /*order*/
  if (kk_std_core_types__is_Eq(_match_x545, _ctx)) {
    double _x_x1727;
    {
      double _x_1 = x_0_10408.lo;
      _x_x1727 = _x_1; /*float64*/
    }
    double _x_x1728;
    {
      double _x_2 = m_369.lo;
      _x_x1728 = _x_2; /*float64*/
    }
    _x_x1724 = kk_std_num_float64_cmp(_x_x1727, _x_x1728, _ctx); /*order*/
  }
  else {
    _x_x1724 = _match_x545; /*order*/
  }
  _match_x544 = kk_std_core_order__lp__excl__eq__rp_(_x_x1724, kk_std_core_types__new_Lt(_ctx), _ctx); /*bool*/
  if (_match_x544) {
    _x_x1723 = x_0_10408; /*std/num/ddouble/ddouble*/
  }
  else {
    _x_x1723 = m_369; /*std/num/ddouble/ddouble*/
  }
  return kk_std_num_ddouble__ddouble_box(_x_x1723, _ctx);
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble_list_fs_abs_max(kk_std_core_types__list xs, kk_context_t* _ctx) { /* (xs : list<ddouble>) -> ddouble */ 
  kk_box_t _x_x1721 = kk_std_core_list_foldr(xs, kk_std_num_ddouble__ddouble_box(kk_std_num_ddouble_zero, _ctx), kk_std_num_ddouble_list_fs_new_abs_max_fun1722(_ctx), _ctx); /*1117*/
  return kk_std_num_ddouble__ddouble_unbox(_x_x1721, KK_OWNED, _ctx);
}
 
// The square root of the sum of squares of a list of doubles.
// Prevents overflow for large numbers and uses Kahan-Babu&scaron;kan-Neumaier summation
// for precision.


// lift anonymous function
struct kk_std_num_ddouble_list_fs_hypot_fun1732__t {
  struct kk_function_s _base;
  kk_std_num_ddouble__ddouble hi;
};
static kk_std_num_ddouble__ddouble kk_std_num_ddouble_list_fs_hypot_fun1732(kk_function_t _fself, kk_std_num_ddouble__ddouble x_0, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble_list_fs_new_hypot_fun1732(kk_std_num_ddouble__ddouble hi, kk_context_t* _ctx) {
  struct kk_std_num_ddouble_list_fs_hypot_fun1732__t* _self = kk_function_alloc_as(struct kk_std_num_ddouble_list_fs_hypot_fun1732__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_ddouble_list_fs_hypot_fun1732, kk_context());
  _self->hi = hi;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_std_num_ddouble__ddouble kk_std_num_ddouble_list_fs_hypot_fun1732(kk_function_t _fself, kk_std_num_ddouble__ddouble x_0, kk_context_t* _ctx) {
  struct kk_std_num_ddouble_list_fs_hypot_fun1732__t* _self = kk_function_as(struct kk_std_num_ddouble_list_fs_hypot_fun1732__t*, _fself, _ctx);
  kk_std_num_ddouble__ddouble hi = _self->hi; /* std/num/ddouble/ddouble */
  kk_drop_match(_self, {kk_std_num_ddouble__ddouble_dup(hi, _ctx);}, {}, _ctx)
  kk_std_num_ddouble__ddouble _x_x1733 = kk_std_num_ddouble__lp__fs__rp_(x_0, hi, _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble_sqr(_x_x1733, _ctx);
}


// lift anonymous function
struct kk_std_num_ddouble_list_fs_hypot_fun1736__t {
  struct kk_function_s _base;
  kk_function_t _b_x371_374;
};
static kk_box_t kk_std_num_ddouble_list_fs_hypot_fun1736(kk_function_t _fself, kk_box_t _b_x372, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble_list_fs_new_hypot_fun1736(kk_function_t _b_x371_374, kk_context_t* _ctx) {
  struct kk_std_num_ddouble_list_fs_hypot_fun1736__t* _self = kk_function_alloc_as(struct kk_std_num_ddouble_list_fs_hypot_fun1736__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_ddouble_list_fs_hypot_fun1736, kk_context());
  _self->_b_x371_374 = _b_x371_374;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_ddouble_list_fs_hypot_fun1736(kk_function_t _fself, kk_box_t _b_x372, kk_context_t* _ctx) {
  struct kk_std_num_ddouble_list_fs_hypot_fun1736__t* _self = kk_function_as(struct kk_std_num_ddouble_list_fs_hypot_fun1736__t*, _fself, _ctx);
  kk_function_t _b_x371_374 = _self->_b_x371_374; /* (x@0 : std/num/ddouble/ddouble) -> std/num/ddouble/ddouble */
  kk_drop_match(_self, {kk_function_dup(_b_x371_374, _ctx);}, {}, _ctx)
  kk_std_num_ddouble__ddouble _x_x1737;
  kk_std_num_ddouble__ddouble _x_x1738 = kk_std_num_ddouble__ddouble_unbox(_b_x372, KK_OWNED, _ctx); /*std/num/ddouble/ddouble*/
  _x_x1737 = kk_function_call(kk_std_num_ddouble__ddouble, (kk_function_t, kk_std_num_ddouble__ddouble, kk_context_t*), _b_x371_374, (_b_x371_374, _x_x1738, _ctx), _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble__ddouble_box(_x_x1737, _ctx);
}

kk_std_num_ddouble__ddouble kk_std_num_ddouble_list_fs_hypot(kk_std_core_types__list xs, kk_context_t* _ctx) { /* (xs : list<ddouble>) -> ddouble */ 
  kk_std_num_ddouble__ddouble hi;
  kk_std_core_types__list _x_x1729 = kk_std_core_types__list_dup(xs, _ctx); /*list<std/num/ddouble/ddouble>*/
  hi = kk_std_num_ddouble_list_fs_abs_max(_x_x1729, _ctx); /*std/num/ddouble/ddouble*/
  bool _match_x543;
  double _x_x1730;
  {
    double _x = hi.hi;
    _x_x1730 = _x; /*float64*/
  }
  _match_x543 = (_x_x1730 == (0x0p+0)); /*bool*/
  if (_match_x543) {
    kk_std_core_types__list_drop(xs, _ctx);
    return kk_std_num_ddouble_zero;
  }
  {
    kk_std_num_ddouble__ddouble _x_x1731;
    kk_std_core_types__list _b_x370_373 = xs; /*list<std/num/ddouble/ddouble>*/;
    kk_function_t _b_x371_374 = kk_std_num_ddouble_list_fs_new_hypot_fun1732(hi, _ctx); /*(x@0 : std/num/ddouble/ddouble) -> std/num/ddouble/ddouble*/;
    kk_std_num_ddouble__ddouble _x_x1734;
    kk_std_core_types__list _x_x1735 = kk_std_core_list_map(_b_x370_373, kk_std_num_ddouble_list_fs_new_hypot_fun1736(_b_x371_374, _ctx), _ctx); /*list<8642>*/
    _x_x1734 = kk_std_num_ddouble_list_fs_sum(_x_x1735, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1731 = kk_std_num_ddouble_sqrt(_x_x1734, _ctx); /*std/num/ddouble/ddouble*/
    return kk_std_num_ddouble__lp__star__rp_(hi, _x_x1731, _ctx);
  }
}

kk_std_core_types__list kk_std_num_ddouble_ch_factors;

kk_vector_t kk_std_num_ddouble_sin16_table;
 
// Calculate sine and cosine on an angle in radians.


// lift anonymous function
struct kk_std_num_ddouble_sincos_fun1832__t {
  struct kk_function_s _base;
  kk_std_num_ddouble__ddouble s2;
};
static kk_box_t kk_std_num_ddouble_sincos_fun1832(kk_function_t _fself, kk_box_t _b_x447, kk_box_t _b_x448, kk_context_t* _ctx);
static kk_function_t kk_std_num_ddouble_new_sincos_fun1832(kk_std_num_ddouble__ddouble s2, kk_context_t* _ctx) {
  struct kk_std_num_ddouble_sincos_fun1832__t* _self = kk_function_alloc_as(struct kk_std_num_ddouble_sincos_fun1832__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_ddouble_sincos_fun1832, kk_context());
  _self->s2 = s2;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_ddouble_sincos_fun1832(kk_function_t _fself, kk_box_t _b_x447, kk_box_t _b_x448, kk_context_t* _ctx) {
  struct kk_std_num_ddouble_sincos_fun1832__t* _self = kk_function_as(struct kk_std_num_ddouble_sincos_fun1832__t*, _fself, _ctx);
  kk_std_num_ddouble__ddouble s2 = _self->s2; /* std/num/ddouble/ddouble */
  kk_drop_match(_self, {kk_std_num_ddouble__ddouble_dup(s2, _ctx);}, {}, _ctx)
  kk_std_num_ddouble__ddouble _x_x1833;
  kk_std_num_ddouble__ddouble _x_x1834 = kk_std_num_ddouble__ddouble_unbox(_b_x448, KK_OWNED, _ctx); /*std/num/ddouble/ddouble*/
  kk_std_num_ddouble__ddouble _x_x1835;
  kk_std_num_ddouble__ddouble _x_x1836 = kk_std_num_ddouble__ddouble_unbox(_b_x447, KK_OWNED, _ctx); /*std/num/ddouble/ddouble*/
  _x_x1835 = kk_std_num_ddouble__lp__star__rp_(_x_x1836, s2, _ctx); /*std/num/ddouble/ddouble*/
  _x_x1833 = kk_std_num_ddouble__lp__plus__rp_(_x_x1834, _x_x1835, _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_num_ddouble__ddouble_box(_x_x1833, _ctx);
}

kk_std_core_types__tuple2 kk_std_num_ddouble_sincos(kk_std_num_ddouble__ddouble rad, kk_context_t* _ctx) { /* (rad : ddouble) -> (ddouble, ddouble) */ 
  bool _match_x528;
  double _x_x1782;
  double _x_x1783;
  {
    double _x = rad.hi;
    _x_x1783 = _x; /*float64*/
  }
  _x_x1782 = kk_double_abs(_x_x1783); /*float64*/
  _match_x528 = (_x_x1782 < (0x1.5fd7fe1796495p-37)); /*bool*/
  if (_match_x528) {
    kk_std_num_ddouble__ddouble y_10420;
    kk_std_num_ddouble__ddouble _x_x1784 = kk_std_num_ddouble_sqr(rad, _ctx); /*std/num/ddouble/ddouble*/
    kk_std_num_ddouble__ddouble _x_x1785 = kk_std_num_ddouble_ddouble_int_exp(kk_integer_from_small(3), kk_integer_from_small(0), _ctx); /*std/num/ddouble/ddouble*/
    y_10420 = kk_std_num_ddouble__lp__fs__rp_(_x_x1784, _x_x1785, _ctx); /*std/num/ddouble/ddouble*/
    kk_std_num_ddouble__ddouble s;
    kk_std_num_ddouble__ddouble _x_x1786;
    kk_std_num_ddouble__ddouble _x_x1787;
    double _x_x1788;
    double _x_x1789;
    {
      double _x_0 = y_10420.hi;
      _x_x1789 = _x_0; /*float64*/
    }
    _x_x1788 = (-_x_x1789); /*float64*/
    double _x_x1790;
    double _x_x1791;
    {
      double _x_0_0 = y_10420.lo;
      _x_x1791 = _x_0_0; /*float64*/
    }
    _x_x1790 = (-_x_x1791); /*float64*/
    _x_x1787 = kk_std_num_ddouble__new_Ddouble(_x_x1788, _x_x1790, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1786 = kk_std_num_ddouble__lp__plus__rp_(kk_std_num_ddouble_one, _x_x1787, _ctx); /*std/num/ddouble/ddouble*/
    s = kk_std_num_ddouble__lp__star__rp_(rad, _x_x1786, _ctx); /*std/num/ddouble/ddouble*/
    kk_std_num_ddouble__ddouble y_0_10423 = kk_std_num_ddouble_sqr(s, _ctx); /*std/num/ddouble/ddouble*/;
    kk_std_num_ddouble__ddouble c;
    kk_std_num_ddouble__ddouble _x_x1792;
    kk_std_num_ddouble__ddouble _x_x1793;
    double _x_x1794;
    double _x_x1795;
    {
      double _x_1 = y_0_10423.hi;
      _x_x1795 = _x_1; /*float64*/
    }
    _x_x1794 = (-_x_x1795); /*float64*/
    double _x_x1796;
    double _x_x1797;
    {
      double _x_0_1 = y_0_10423.lo;
      _x_x1797 = _x_0_1; /*float64*/
    }
    _x_x1796 = (-_x_x1797); /*float64*/
    _x_x1793 = kk_std_num_ddouble__new_Ddouble(_x_x1794, _x_x1796, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1792 = kk_std_num_ddouble__lp__plus__rp_(kk_std_num_ddouble_one, _x_x1793, _ctx); /*std/num/ddouble/ddouble*/
    c = kk_std_num_ddouble_sqrt(_x_x1792, _ctx); /*std/num/ddouble/ddouble*/
    return kk_std_core_types__new_Tuple2(kk_std_num_ddouble__ddouble_box(s, _ctx), kk_std_num_ddouble__ddouble_box(c, _ctx), _ctx);
  }
  {
    kk_std_num_ddouble__ddouble x1 = kk_std_num_ddouble__lp__fs__rp_(rad, kk_std_num_ddouble_dd_twopi, _ctx); /*std/num/ddouble/ddouble*/;
    kk_std_num_ddouble__ddouble y_1_10425 = kk_std_num_ddouble_round(x1, _ctx); /*std/num/ddouble/ddouble*/;
    kk_std_num_ddouble__ddouble x3;
    kk_std_num_ddouble__ddouble _x_x1798;
    double _x_x1799;
    double _x_x1800;
    {
      double _x_2 = y_1_10425.hi;
      _x_x1800 = _x_2; /*float64*/
    }
    _x_x1799 = (-_x_x1800); /*float64*/
    double _x_x1801;
    double _x_x1802;
    {
      double _x_0_2 = y_1_10425.lo;
      _x_x1802 = _x_0_2; /*float64*/
    }
    _x_x1801 = (-_x_x1802); /*float64*/
    _x_x1798 = kk_std_num_ddouble__new_Ddouble(_x_x1799, _x_x1801, _ctx); /*std/num/ddouble/ddouble*/
    x3 = kk_std_num_ddouble__lp__plus__rp_(x1, _x_x1798, _ctx); /*std/num/ddouble/ddouble*/
    kk_std_num_ddouble__ddouble x32 = kk_std_num_ddouble__lp__plus__rp_(x3, x3, _ctx); /*std/num/ddouble/ddouble*/;
    kk_std_num_ddouble__ddouble x34 = kk_std_num_ddouble__lp__plus__rp_(x32, x32, _ctx); /*std/num/ddouble/ddouble*/;
    bool b_10428;
    bool _match_x541;
    double _x_x1803;
    {
      double _x_3 = x34.hi;
      _x_x1803 = _x_3; /*float64*/
    }
    _match_x541 = isfinite(_x_x1803); /*bool*/
    if (_match_x541) {
      double _x_x1804;
      {
        double _x_0_3 = x34.lo;
        _x_x1804 = _x_0_3; /*float64*/
      }
      b_10428 = isfinite(_x_x1804); /*bool*/
    }
    else {
      b_10428 = false; /*bool*/
    }
    kk_integer_t a;
    if (b_10428) {
      kk_std_num_decimal__decimal _x_x1805;
      kk_std_num_ddouble__ddouble _x_x1806 = kk_std_num_ddouble_round(x34, _ctx); /*std/num/ddouble/ddouble*/
      _x_x1805 = kk_std_num_ddouble_decimal(_x_x1806, kk_std_core_types__new_None(_ctx), _ctx); /*std/num/decimal/decimal*/
      a = kk_std_num_decimal_int(_x_x1805, kk_std_core_types__new_None(_ctx), _ctx); /*int*/
    }
    else {
      kk_std_core_types__optional _match_x540 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
      if (kk_std_core_types__is_Optional(_match_x540, _ctx)) {
        kk_box_t _box_x442 = _match_x540._cons._Optional.value;
        kk_integer_t _uniq_nonfin_2921 = kk_integer_unbox(_box_x442, _ctx);
        kk_integer_dup(_uniq_nonfin_2921, _ctx);
        kk_std_core_types__optional_drop(_match_x540, _ctx);
        a = _uniq_nonfin_2921; /*int*/
      }
      else {
        kk_std_core_types__optional_drop(_match_x540, _ctx);
        a = kk_integer_from_small(0); /*int*/
      }
    }
    kk_std_num_ddouble__ddouble y_2_10433;
    kk_integer_t _x_x1807 = kk_integer_dup(a, _ctx); /*int*/
    y_2_10433 = kk_std_num_ddouble_ddouble_int_exp(_x_x1807, kk_integer_from_small(0), _ctx); /*std/num/ddouble/ddouble*/
    kk_std_num_ddouble__ddouble x_3_10429;
    kk_std_num_ddouble__ddouble _x_x1808 = kk_std_num_ddouble_ddouble_int_exp(kk_integer_from_small(8), kk_integer_from_small(0), _ctx); /*std/num/ddouble/ddouble*/
    kk_std_num_ddouble__ddouble _x_x1809;
    kk_std_num_ddouble__ddouble _x_x1810;
    double _x_x1811;
    double _x_x1812;
    {
      double _x_4 = y_2_10433.hi;
      _x_x1812 = _x_4; /*float64*/
    }
    _x_x1811 = (-_x_x1812); /*float64*/
    double _x_x1813;
    double _x_x1814;
    {
      double _x_0_4 = y_2_10433.lo;
      _x_x1814 = _x_0_4; /*float64*/
    }
    _x_x1813 = (-_x_x1814); /*float64*/
    _x_x1810 = kk_std_num_ddouble__new_Ddouble(_x_x1811, _x_x1813, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1809 = kk_std_num_ddouble__lp__plus__rp_(x34, _x_x1810, _ctx); /*std/num/ddouble/ddouble*/
    x_3_10429 = kk_std_num_ddouble__lp__star__rp_(_x_x1808, _x_x1809, _ctx); /*std/num/ddouble/ddouble*/
    bool b_0_10435;
    bool _match_x539;
    double _x_x1815;
    {
      double _x_5 = x_3_10429.hi;
      _x_x1815 = _x_5; /*float64*/
    }
    _match_x539 = isfinite(_x_x1815); /*bool*/
    if (_match_x539) {
      double _x_x1816;
      {
        double _x_0_5 = x_3_10429.lo;
        _x_x1816 = _x_0_5; /*float64*/
      }
      b_0_10435 = isfinite(_x_x1816); /*bool*/
    }
    else {
      b_0_10435 = false; /*bool*/
    }
    kk_integer_t b_1;
    if (b_0_10435) {
      kk_std_num_decimal__decimal _x_x1817;
      kk_std_num_ddouble__ddouble _x_x1818 = kk_std_num_ddouble_round(x_3_10429, _ctx); /*std/num/ddouble/ddouble*/
      _x_x1817 = kk_std_num_ddouble_decimal(_x_x1818, kk_std_core_types__new_None(_ctx), _ctx); /*std/num/decimal/decimal*/
      b_1 = kk_std_num_decimal_int(_x_x1817, kk_std_core_types__new_None(_ctx), _ctx); /*int*/
    }
    else {
      kk_std_core_types__optional _match_x538 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
      if (kk_std_core_types__is_Optional(_match_x538, _ctx)) {
        kk_box_t _box_x443 = _match_x538._cons._Optional.value;
        kk_integer_t _uniq_nonfin_2921_0 = kk_integer_unbox(_box_x443, _ctx);
        kk_integer_dup(_uniq_nonfin_2921_0, _ctx);
        kk_std_core_types__optional_drop(_match_x538, _ctx);
        b_1 = _uniq_nonfin_2921_0; /*int*/
      }
      else {
        kk_std_core_types__optional_drop(_match_x538, _ctx);
        b_1 = kk_integer_from_small(0); /*int*/
      }
    }
    kk_integer_t x_6_10439;
    kk_integer_t _x_x1819 = kk_integer_dup(a, _ctx); /*int*/
    x_6_10439 = kk_integer_mul((kk_integer_from_small(8)),_x_x1819,kk_context()); /*int*/
    kk_integer_t i_2_10438;
    kk_integer_t _x_x1820 = kk_integer_dup(b_1, _ctx); /*int*/
    i_2_10438 = kk_integer_add(x_6_10439,_x_x1820,kk_context()); /*int*/
    kk_std_num_ddouble__ddouble y_3_10437;
    kk_std_num_ddouble__ddouble _x_x1821 = kk_std_num_ddouble_ddouble_int_exp(i_2_10438, kk_integer_from_small(0), _ctx); /*std/num/ddouble/ddouble*/
    kk_std_num_ddouble__ddouble _x_x1822 = kk_std_num_ddouble_ddouble_int_exp(kk_integer_from_small(16), kk_integer_from_small(0), _ctx); /*std/num/ddouble/ddouble*/
    y_3_10437 = kk_std_num_ddouble__lp__fs__rp_(_x_x1821, _x_x1822, _ctx); /*std/num/ddouble/ddouble*/
    kk_std_num_ddouble__ddouble s_0;
    kk_std_num_ddouble__ddouble _x_x1823;
    kk_std_num_ddouble__ddouble _x_x1824;
    double _x_x1825;
    double _x_x1826;
    {
      double _x_6 = y_3_10437.hi;
      _x_x1826 = _x_6; /*float64*/
    }
    _x_x1825 = (-_x_x1826); /*float64*/
    double _x_x1827;
    double _x_x1828;
    {
      double _x_0_6 = y_3_10437.lo;
      _x_x1828 = _x_0_6; /*float64*/
    }
    _x_x1827 = (-_x_x1828); /*float64*/
    _x_x1824 = kk_std_num_ddouble__new_Ddouble(_x_x1825, _x_x1827, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1823 = kk_std_num_ddouble__lp__plus__rp_(x32, _x_x1824, _ctx); /*std/num/ddouble/ddouble*/
    s_0 = kk_std_num_ddouble__lp__star__rp_(kk_std_num_ddouble_dd_pi, _x_x1823, _ctx); /*std/num/ddouble/ddouble*/
    kk_std_num_ddouble__ddouble s2 = kk_std_num_ddouble_sqr(s_0, _ctx); /*std/num/ddouble/ddouble*/;
    kk_std_num_ddouble__ddouble sins;
    kk_std_num_ddouble__ddouble _x_x1829;
    kk_box_t _x_x1830;
    kk_std_core_types__list _x_x1831 = kk_std_core_types__list_dup(kk_std_num_ddouble_ch_factors, _ctx); /*list<std/num/ddouble/ddouble>*/
    _x_x1830 = kk_std_core_list_foldl(_x_x1831, kk_std_num_ddouble__ddouble_box(kk_std_num_ddouble_zero, _ctx), kk_std_num_ddouble_new_sincos_fun1832(s2, _ctx), _ctx); /*1073*/
    _x_x1829 = kk_std_num_ddouble__ddouble_unbox(_x_x1830, KK_OWNED, _ctx); /*std/num/ddouble/ddouble*/
    sins = kk_std_num_ddouble__lp__star__rp_(s_0, _x_x1829, _ctx); /*std/num/ddouble/ddouble*/
    kk_std_num_ddouble__ddouble y_5_10443 = kk_std_num_ddouble_sqr(sins, _ctx); /*std/num/ddouble/ddouble*/;
    kk_std_num_ddouble__ddouble coss;
    kk_std_num_ddouble__ddouble _x_x1837;
    kk_std_num_ddouble__ddouble _x_x1838;
    double _x_x1839;
    double _x_x1840;
    {
      double _x_7 = y_5_10443.hi;
      _x_x1840 = _x_7; /*float64*/
    }
    _x_x1839 = (-_x_x1840); /*float64*/
    double _x_x1841;
    double _x_x1842;
    {
      double _x_0_7 = y_5_10443.lo;
      _x_x1842 = _x_0_7; /*float64*/
    }
    _x_x1841 = (-_x_x1842); /*float64*/
    _x_x1838 = kk_std_num_ddouble__new_Ddouble(_x_x1839, _x_x1841, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1837 = kk_std_num_ddouble__lp__plus__rp_(kk_std_num_ddouble_one, _x_x1838, _ctx); /*std/num/ddouble/ddouble*/
    coss = kk_std_num_ddouble_sqrt(_x_x1837, _ctx); /*std/num/ddouble/ddouble*/
    kk_std_num_ddouble__ddouble sinb;
    bool _match_x534 = kk_integer_gte_borrow(b_1,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    if (_match_x534) {
      kk_std_core_types__maybe m_10445 = kk_std_core_vector_at(kk_std_num_ddouble_sin16_table, b_1, _ctx); /*maybe<std/num/ddouble/ddouble>*/;
      if (kk_std_core_types__is_Nothing(m_10445, _ctx)) {
        sinb = kk_std_num_ddouble_dd_nan; /*std/num/ddouble/ddouble*/
      }
      else {
        kk_box_t _box_x454 = m_10445._cons.Just.value;
        kk_std_num_ddouble__ddouble x_8 = kk_std_num_ddouble__ddouble_unbox(_box_x454, KK_BORROWED, _ctx);
        kk_std_core_types__maybe_drop(m_10445, _ctx);
        sinb = x_8; /*std/num/ddouble/ddouble*/
      }
    }
    else {
      kk_integer_t i_5_10448;
      kk_integer_t _x_x1843 = kk_integer_dup(b_1, _ctx); /*int*/
      i_5_10448 = kk_integer_neg(_x_x1843,kk_context()); /*int*/
      kk_std_core_types__maybe m_0_10449;
      kk_std_core_types__maybe _brw_x537 = kk_std_core_vector_at(kk_std_num_ddouble_sin16_table, i_5_10448, _ctx); /*maybe<346>*/;
      kk_integer_drop(i_5_10448, _ctx);
      m_0_10449 = _brw_x537; /*maybe<std/num/ddouble/ddouble>*/
      double _x_x1844;
      double _x_x1845;
      kk_std_num_ddouble__ddouble _match_x536;
      if (kk_std_core_types__is_Nothing(m_0_10449, _ctx)) {
        _match_x536 = kk_std_num_ddouble_dd_nan; /*std/num/ddouble/ddouble*/
      }
      else {
        kk_box_t _box_x455 = m_0_10449._cons.Just.value;
        kk_std_num_ddouble__ddouble x_10 = kk_std_num_ddouble__ddouble_unbox(_box_x455, KK_BORROWED, _ctx);
        _match_x536 = x_10; /*std/num/ddouble/ddouble*/
      }
      {
        double _x_0_8 = _match_x536.hi;
        _x_x1845 = _x_0_8; /*float64*/
      }
      _x_x1844 = (-_x_x1845); /*float64*/
      double _x_x1846;
      double _x_x1847;
      kk_std_num_ddouble__ddouble _match_x535;
      if (kk_std_core_types__is_Nothing(m_0_10449, _ctx)) {
        _match_x535 = kk_std_num_ddouble_dd_nan; /*std/num/ddouble/ddouble*/
      }
      else {
        kk_box_t _box_x456 = m_0_10449._cons.Just.value;
        kk_std_num_ddouble__ddouble x_10_0 = kk_std_num_ddouble__ddouble_unbox(_box_x456, KK_BORROWED, _ctx);
        kk_std_core_types__maybe_drop(m_0_10449, _ctx);
        _match_x535 = x_10_0; /*std/num/ddouble/ddouble*/
      }
      {
        double _x_1_0 = _match_x535.lo;
        _x_x1847 = _x_1_0; /*float64*/
      }
      _x_x1846 = (-_x_x1847); /*float64*/
      sinb = kk_std_num_ddouble__new_Ddouble(_x_x1844, _x_x1846, _ctx); /*std/num/ddouble/ddouble*/
    }
    kk_integer_t y_6_10455 = kk_integer_abs(b_1,kk_context()); /*int*/;
    kk_integer_t i_6_10453 = kk_integer_sub((kk_integer_from_small(8)),y_6_10455,kk_context()); /*int*/;
    kk_std_core_types__maybe m_1_10456;
    kk_std_core_types__maybe _brw_x533 = kk_std_core_vector_at(kk_std_num_ddouble_sin16_table, i_6_10453, _ctx); /*maybe<346>*/;
    kk_integer_drop(i_6_10453, _ctx);
    m_1_10456 = _brw_x533; /*maybe<std/num/ddouble/ddouble>*/
    bool _match_x529 = kk_integer_eq_borrow(a,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    if (_match_x529) {
      kk_integer_drop(a, _ctx);
      kk_std_num_ddouble__ddouble x_13_10458;
      kk_std_num_ddouble__ddouble _x_x1848;
      if (kk_std_core_types__is_Nothing(m_1_10456, _ctx)) {
        _x_x1848 = kk_std_num_ddouble_dd_nan; /*std/num/ddouble/ddouble*/
      }
      else {
        kk_box_t _box_x457 = m_1_10456._cons.Just.value;
        kk_std_num_ddouble__ddouble x_11 = kk_std_num_ddouble__ddouble_unbox(_box_x457, KK_BORROWED, _ctx);
        _x_x1848 = x_11; /*std/num/ddouble/ddouble*/
      }
      x_13_10458 = kk_std_num_ddouble__lp__star__rp_(coss, _x_x1848, _ctx); /*std/num/ddouble/ddouble*/
      kk_std_num_ddouble__ddouble y_7_10459 = kk_std_num_ddouble__lp__star__rp_(sins, sinb, _ctx); /*std/num/ddouble/ddouble*/;
      kk_std_num_ddouble__ddouble _b_x459_475;
      kk_std_num_ddouble__ddouble _x_x1849;
      kk_std_num_ddouble__ddouble _x_x1850;
      if (kk_std_core_types__is_Nothing(m_1_10456, _ctx)) {
        _x_x1850 = kk_std_num_ddouble_dd_nan; /*std/num/ddouble/ddouble*/
      }
      else {
        kk_box_t _box_x458 = m_1_10456._cons.Just.value;
        kk_std_num_ddouble__ddouble x_11_0 = kk_std_num_ddouble__ddouble_unbox(_box_x458, KK_BORROWED, _ctx);
        kk_std_core_types__maybe_drop(m_1_10456, _ctx);
        _x_x1850 = x_11_0; /*std/num/ddouble/ddouble*/
      }
      _x_x1849 = kk_std_num_ddouble__lp__star__rp_(sins, _x_x1850, _ctx); /*std/num/ddouble/ddouble*/
      kk_std_num_ddouble__ddouble _x_x1851 = kk_std_num_ddouble__lp__star__rp_(coss, sinb, _ctx); /*std/num/ddouble/ddouble*/
      _b_x459_475 = kk_std_num_ddouble__lp__plus__rp_(_x_x1849, _x_x1851, _ctx); /*std/num/ddouble/ddouble*/
      kk_std_num_ddouble__ddouble _b_x460_476;
      kk_std_num_ddouble__ddouble _x_x1852;
      double _x_x1853;
      double _x_x1854;
      {
        double _x_8 = y_7_10459.hi;
        _x_x1854 = _x_8; /*float64*/
      }
      _x_x1853 = (-_x_x1854); /*float64*/
      double _x_x1855;
      double _x_x1856;
      {
        double _x_0_9 = y_7_10459.lo;
        _x_x1856 = _x_0_9; /*float64*/
      }
      _x_x1855 = (-_x_x1856); /*float64*/
      _x_x1852 = kk_std_num_ddouble__new_Ddouble(_x_x1853, _x_x1855, _ctx); /*std/num/ddouble/ddouble*/
      _b_x460_476 = kk_std_num_ddouble__lp__plus__rp_(x_13_10458, _x_x1852, _ctx); /*std/num/ddouble/ddouble*/
      return kk_std_core_types__new_Tuple2(kk_std_num_ddouble__ddouble_box(_b_x459_475, _ctx), kk_std_num_ddouble__ddouble_box(_b_x460_476, _ctx), _ctx);
    }
    {
      bool _match_x530 = kk_integer_eq_borrow(a,(kk_integer_from_small(1)),kk_context()); /*bool*/;
      if (_match_x530) {
        kk_integer_drop(a, _ctx);
        kk_std_num_ddouble__ddouble x_14_10460;
        kk_std_num_ddouble__ddouble _x_x1857;
        if (kk_std_core_types__is_Nothing(m_1_10456, _ctx)) {
          _x_x1857 = kk_std_num_ddouble_dd_nan; /*std/num/ddouble/ddouble*/
        }
        else {
          kk_box_t _box_x461 = m_1_10456._cons.Just.value;
          kk_std_num_ddouble__ddouble x_11_1 = kk_std_num_ddouble__ddouble_unbox(_box_x461, KK_BORROWED, _ctx);
          _x_x1857 = x_11_1; /*std/num/ddouble/ddouble*/
        }
        x_14_10460 = kk_std_num_ddouble__lp__star__rp_(coss, _x_x1857, _ctx); /*std/num/ddouble/ddouble*/
        kk_std_num_ddouble__ddouble y_8_10461 = kk_std_num_ddouble__lp__star__rp_(sins, sinb, _ctx); /*std/num/ddouble/ddouble*/;
        kk_std_num_ddouble__ddouble x_15_10462;
        kk_std_num_ddouble__ddouble _x_x1858;
        double _x_x1859;
        double _x_x1860;
        {
          double _x_9 = coss.hi;
          _x_x1860 = _x_9; /*float64*/
        }
        _x_x1859 = (-_x_x1860); /*float64*/
        double _x_x1861;
        double _x_x1862;
        {
          double _x_0_10 = coss.lo;
          _x_x1862 = _x_0_10; /*float64*/
        }
        _x_x1861 = (-_x_x1862); /*float64*/
        _x_x1858 = kk_std_num_ddouble__new_Ddouble(_x_x1859, _x_x1861, _ctx); /*std/num/ddouble/ddouble*/
        x_15_10462 = kk_std_num_ddouble__lp__star__rp_(_x_x1858, sinb, _ctx); /*std/num/ddouble/ddouble*/
        kk_std_num_ddouble__ddouble y_9_10463;
        kk_std_num_ddouble__ddouble _x_x1863;
        if (kk_std_core_types__is_Nothing(m_1_10456, _ctx)) {
          _x_x1863 = kk_std_num_ddouble_dd_nan; /*std/num/ddouble/ddouble*/
        }
        else {
          kk_box_t _box_x462 = m_1_10456._cons.Just.value;
          kk_std_num_ddouble__ddouble x_11_2 = kk_std_num_ddouble__ddouble_unbox(_box_x462, KK_BORROWED, _ctx);
          kk_std_core_types__maybe_drop(m_1_10456, _ctx);
          _x_x1863 = x_11_2; /*std/num/ddouble/ddouble*/
        }
        y_9_10463 = kk_std_num_ddouble__lp__star__rp_(sins, _x_x1863, _ctx); /*std/num/ddouble/ddouble*/
        kk_std_num_ddouble__ddouble _b_x463_477;
        kk_std_num_ddouble__ddouble _x_x1864;
        double _x_x1865;
        double _x_x1866;
        {
          double _x_10 = y_8_10461.hi;
          _x_x1866 = _x_10; /*float64*/
        }
        _x_x1865 = (-_x_x1866); /*float64*/
        double _x_x1867;
        double _x_x1868;
        {
          double _x_0_11 = y_8_10461.lo;
          _x_x1868 = _x_0_11; /*float64*/
        }
        _x_x1867 = (-_x_x1868); /*float64*/
        _x_x1864 = kk_std_num_ddouble__new_Ddouble(_x_x1865, _x_x1867, _ctx); /*std/num/ddouble/ddouble*/
        _b_x463_477 = kk_std_num_ddouble__lp__plus__rp_(x_14_10460, _x_x1864, _ctx); /*std/num/ddouble/ddouble*/
        kk_std_num_ddouble__ddouble _b_x464_478;
        kk_std_num_ddouble__ddouble _x_x1869;
        double _x_x1870;
        double _x_x1871;
        {
          double _x_11 = y_9_10463.hi;
          _x_x1871 = _x_11; /*float64*/
        }
        _x_x1870 = (-_x_x1871); /*float64*/
        double _x_x1872;
        double _x_x1873;
        {
          double _x_0_12 = y_9_10463.lo;
          _x_x1873 = _x_0_12; /*float64*/
        }
        _x_x1872 = (-_x_x1873); /*float64*/
        _x_x1869 = kk_std_num_ddouble__new_Ddouble(_x_x1870, _x_x1872, _ctx); /*std/num/ddouble/ddouble*/
        _b_x464_478 = kk_std_num_ddouble__lp__plus__rp_(x_15_10462, _x_x1869, _ctx); /*std/num/ddouble/ddouble*/
        return kk_std_core_types__new_Tuple2(kk_std_num_ddouble__ddouble_box(_b_x463_477, _ctx), kk_std_num_ddouble__ddouble_box(_b_x464_478, _ctx), _ctx);
      }
      {
        bool _match_x531;
        bool _brw_x532 = kk_integer_eq_borrow(a,(kk_integer_from_small(-1)),kk_context()); /*bool*/;
        kk_integer_drop(a, _ctx);
        _match_x531 = _brw_x532; /*bool*/
        if (_match_x531) {
          kk_std_num_ddouble__ddouble x_16_10464 = kk_std_num_ddouble__lp__star__rp_(sins, sinb, _ctx); /*std/num/ddouble/ddouble*/;
          kk_std_num_ddouble__ddouble y_10_10465;
          kk_std_num_ddouble__ddouble _x_x1874;
          if (kk_std_core_types__is_Nothing(m_1_10456, _ctx)) {
            _x_x1874 = kk_std_num_ddouble_dd_nan; /*std/num/ddouble/ddouble*/
          }
          else {
            kk_box_t _box_x465 = m_1_10456._cons.Just.value;
            kk_std_num_ddouble__ddouble x_11_3 = kk_std_num_ddouble__ddouble_unbox(_box_x465, KK_BORROWED, _ctx);
            _x_x1874 = x_11_3; /*std/num/ddouble/ddouble*/
          }
          y_10_10465 = kk_std_num_ddouble__lp__star__rp_(coss, _x_x1874, _ctx); /*std/num/ddouble/ddouble*/
          kk_std_num_ddouble__ddouble _b_x467_479;
          kk_std_num_ddouble__ddouble _x_x1875;
          double _x_x1876;
          double _x_x1877;
          {
            double _x_12 = y_10_10465.hi;
            _x_x1877 = _x_12; /*float64*/
          }
          _x_x1876 = (-_x_x1877); /*float64*/
          double _x_x1878;
          double _x_x1879;
          {
            double _x_0_13 = y_10_10465.lo;
            _x_x1879 = _x_0_13; /*float64*/
          }
          _x_x1878 = (-_x_x1879); /*float64*/
          _x_x1875 = kk_std_num_ddouble__new_Ddouble(_x_x1876, _x_x1878, _ctx); /*std/num/ddouble/ddouble*/
          _b_x467_479 = kk_std_num_ddouble__lp__plus__rp_(x_16_10464, _x_x1875, _ctx); /*std/num/ddouble/ddouble*/
          kk_std_num_ddouble__ddouble _b_x468_480;
          kk_std_num_ddouble__ddouble _x_x1880 = kk_std_num_ddouble__lp__star__rp_(coss, sinb, _ctx); /*std/num/ddouble/ddouble*/
          kk_std_num_ddouble__ddouble _x_x1881;
          kk_std_num_ddouble__ddouble _x_x1882;
          if (kk_std_core_types__is_Nothing(m_1_10456, _ctx)) {
            _x_x1882 = kk_std_num_ddouble_dd_nan; /*std/num/ddouble/ddouble*/
          }
          else {
            kk_box_t _box_x466 = m_1_10456._cons.Just.value;
            kk_std_num_ddouble__ddouble x_11_4 = kk_std_num_ddouble__ddouble_unbox(_box_x466, KK_BORROWED, _ctx);
            kk_std_core_types__maybe_drop(m_1_10456, _ctx);
            _x_x1882 = x_11_4; /*std/num/ddouble/ddouble*/
          }
          _x_x1881 = kk_std_num_ddouble__lp__star__rp_(sins, _x_x1882, _ctx); /*std/num/ddouble/ddouble*/
          _b_x468_480 = kk_std_num_ddouble__lp__plus__rp_(_x_x1880, _x_x1881, _ctx); /*std/num/ddouble/ddouble*/
          return kk_std_core_types__new_Tuple2(kk_std_num_ddouble__ddouble_box(_b_x467_479, _ctx), kk_std_num_ddouble__ddouble_box(_b_x468_480, _ctx), _ctx);
        }
        {
          kk_std_num_ddouble__ddouble x_17_10466;
          kk_std_num_ddouble__ddouble _x_x1883;
          double _x_x1884;
          double _x_x1885;
          {
            double _x_13 = sins.hi;
            _x_x1885 = _x_13; /*float64*/
          }
          _x_x1884 = (-_x_x1885); /*float64*/
          double _x_x1886;
          double _x_x1887;
          {
            double _x_0_14 = sins.lo;
            _x_x1887 = _x_0_14; /*float64*/
          }
          _x_x1886 = (-_x_x1887); /*float64*/
          _x_x1883 = kk_std_num_ddouble__new_Ddouble(_x_x1884, _x_x1886, _ctx); /*std/num/ddouble/ddouble*/
          kk_std_num_ddouble__ddouble _x_x1888;
          if (kk_std_core_types__is_Nothing(m_1_10456, _ctx)) {
            _x_x1888 = kk_std_num_ddouble_dd_nan; /*std/num/ddouble/ddouble*/
          }
          else {
            kk_box_t _box_x469 = m_1_10456._cons.Just.value;
            kk_std_num_ddouble__ddouble x_11_5 = kk_std_num_ddouble__ddouble_unbox(_box_x469, KK_BORROWED, _ctx);
            _x_x1888 = x_11_5; /*std/num/ddouble/ddouble*/
          }
          x_17_10466 = kk_std_num_ddouble__lp__star__rp_(_x_x1883, _x_x1888, _ctx); /*std/num/ddouble/ddouble*/
          kk_std_num_ddouble__ddouble y_11_10467 = kk_std_num_ddouble__lp__star__rp_(coss, sinb, _ctx); /*std/num/ddouble/ddouble*/;
          kk_std_num_ddouble__ddouble x_18_10468 = kk_std_num_ddouble__lp__star__rp_(sins, sinb, _ctx); /*std/num/ddouble/ddouble*/;
          kk_std_num_ddouble__ddouble y_12_10469;
          kk_std_num_ddouble__ddouble _x_x1889;
          if (kk_std_core_types__is_Nothing(m_1_10456, _ctx)) {
            _x_x1889 = kk_std_num_ddouble_dd_nan; /*std/num/ddouble/ddouble*/
          }
          else {
            kk_box_t _box_x470 = m_1_10456._cons.Just.value;
            kk_std_num_ddouble__ddouble x_11_6 = kk_std_num_ddouble__ddouble_unbox(_box_x470, KK_BORROWED, _ctx);
            kk_std_core_types__maybe_drop(m_1_10456, _ctx);
            _x_x1889 = x_11_6; /*std/num/ddouble/ddouble*/
          }
          y_12_10469 = kk_std_num_ddouble__lp__star__rp_(coss, _x_x1889, _ctx); /*std/num/ddouble/ddouble*/
          kk_std_num_ddouble__ddouble _b_x471_481;
          kk_std_num_ddouble__ddouble _x_x1890;
          double _x_x1891;
          double _x_x1892;
          {
            double _x_14 = y_11_10467.hi;
            _x_x1892 = _x_14; /*float64*/
          }
          _x_x1891 = (-_x_x1892); /*float64*/
          double _x_x1893;
          double _x_x1894;
          {
            double _x_0_15 = y_11_10467.lo;
            _x_x1894 = _x_0_15; /*float64*/
          }
          _x_x1893 = (-_x_x1894); /*float64*/
          _x_x1890 = kk_std_num_ddouble__new_Ddouble(_x_x1891, _x_x1893, _ctx); /*std/num/ddouble/ddouble*/
          _b_x471_481 = kk_std_num_ddouble__lp__plus__rp_(x_17_10466, _x_x1890, _ctx); /*std/num/ddouble/ddouble*/
          kk_std_num_ddouble__ddouble _b_x472_482;
          kk_std_num_ddouble__ddouble _x_x1895;
          double _x_x1896;
          double _x_x1897;
          {
            double _x_15 = y_12_10469.hi;
            _x_x1897 = _x_15; /*float64*/
          }
          _x_x1896 = (-_x_x1897); /*float64*/
          double _x_x1898;
          double _x_x1899;
          {
            double _x_0_16 = y_12_10469.lo;
            _x_x1899 = _x_0_16; /*float64*/
          }
          _x_x1898 = (-_x_x1899); /*float64*/
          _x_x1895 = kk_std_num_ddouble__new_Ddouble(_x_x1896, _x_x1898, _ctx); /*std/num/ddouble/ddouble*/
          _b_x472_482 = kk_std_num_ddouble__lp__plus__rp_(x_18_10468, _x_x1895, _ctx); /*std/num/ddouble/ddouble*/
          return kk_std_core_types__new_Tuple2(kk_std_num_ddouble__ddouble_box(_b_x471_481, _ctx), kk_std_num_ddouble__ddouble_box(_b_x472_482, _ctx), _ctx);
        }
      }
    }
  }
}
 
// Return `x` with the sign of `y`.

kk_std_num_ddouble__ddouble kk_std_num_ddouble_with_sign_of(kk_std_num_ddouble__ddouble x, kk_std_num_ddouble__ddouble y, kk_context_t* _ctx) { /* (x : ddouble, y : ddouble) -> ddouble */ 
  bool _match_x526;
  double _x_x1900;
  {
    double _x = y.hi;
    _x_x1900 = _x; /*float64*/
  }
  _match_x526 = (_x_x1900 < (0x0p+0)); /*bool*/
  if (_match_x526) {
    kk_std_num_ddouble__ddouble x_1_10475 = kk_std_num_ddouble_abs(x, _ctx); /*std/num/ddouble/ddouble*/;
    double _x_x1901;
    double _x_x1902;
    {
      double _x_0 = x_1_10475.hi;
      _x_x1902 = _x_0; /*float64*/
    }
    _x_x1901 = (-_x_x1902); /*float64*/
    double _x_x1903;
    double _x_x1904;
    {
      double _x_1 = x_1_10475.lo;
      _x_x1904 = _x_1; /*float64*/
    }
    _x_x1903 = (-_x_x1904); /*float64*/
    return kk_std_num_ddouble__new_Ddouble(_x_x1901, _x_x1903, _ctx);
  }
  {
    return kk_std_num_ddouble_abs(x, _ctx);
  }
}
 
// The arc-tangent of a point (`x`,`y`). Returns the angle with respect to the x-axis in radians between -&pi; and &pi;.

kk_std_num_ddouble__ddouble kk_std_num_ddouble_atan2(kk_std_num_ddouble__ddouble y, kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (y : ddouble, x : ddouble) -> ddouble */ 
  bool _match_x514;
  double _x_x1905;
  {
    double _x = x.hi;
    _x_x1905 = _x; /*float64*/
  }
  _match_x514 = (_x_x1905 == (0x0p+0)); /*bool*/
  if (_match_x514) {
    bool _match_x525;
    double _x_x1906;
    {
      double _x_0 = y.hi;
      _x_x1906 = _x_0; /*float64*/
    }
    _match_x525 = (_x_x1906 == (0x0p+0)); /*bool*/
    if (_match_x525) {
      return kk_std_num_ddouble_zero;
    }
    {
      return kk_std_num_ddouble_with_sign_of(kk_std_num_ddouble_dd_pi2, y, _ctx);
    }
  }
  {
    bool _match_x515;
    double _x_x1907;
    {
      double _x_1 = y.hi;
      _x_x1907 = _x_1; /*float64*/
    }
    _match_x515 = (_x_x1907 == (0x0p+0)); /*bool*/
    if (_match_x515) {
      bool _match_x524;
      double _x_x1908;
      {
        double _x_2 = x.hi;
        _x_x1908 = _x_2; /*float64*/
      }
      _match_x524 = (_x_x1908 > (0x0p+0)); /*bool*/
      if (_match_x524) {
        return kk_std_num_ddouble_zero;
      }
      {
        return kk_std_num_ddouble_dd_pi;
      }
    }
    {
      bool _match_x516;
      kk_std_core_types__order _x_x1909;
      kk_std_core_types__order _match_x523;
      double _x_x1910;
      {
        double _x_3 = x.hi;
        _x_x1910 = _x_3; /*float64*/
      }
      double _x_x1911;
      {
        double _x_0_0 = y.hi;
        _x_x1911 = _x_0_0; /*float64*/
      }
      _match_x523 = kk_std_num_float64_cmp(_x_x1910, _x_x1911, _ctx); /*order*/
      if (kk_std_core_types__is_Eq(_match_x523, _ctx)) {
        double _x_x1912;
        {
          double _x_1_0 = x.lo;
          _x_x1912 = _x_1_0; /*float64*/
        }
        double _x_x1913;
        {
          double _x_2_0 = y.lo;
          _x_x1913 = _x_2_0; /*float64*/
        }
        _x_x1909 = kk_std_num_float64_cmp(_x_x1912, _x_x1913, _ctx); /*order*/
      }
      else {
        _x_x1909 = _match_x523; /*order*/
      }
      _match_x516 = kk_std_core_order__lp__eq__eq__rp_(_x_x1909, kk_std_core_types__new_Eq(_ctx), _ctx); /*bool*/
      if (_match_x516) {
        bool _match_x522;
        double _x_x1914;
        {
          double _x_3_0 = y.hi;
          _x_x1914 = _x_3_0; /*float64*/
        }
        _match_x522 = (_x_x1914 > (0x0p+0)); /*bool*/
        if (_match_x522) {
          return kk_std_num_ddouble_dd_pi4;
        }
        {
          double _x_x1915;
          double _x_x1916;
          kk_std_num_ddouble__ddouble _x_x1917 = kk_std_num_ddouble_dd_pi34; /*std/num/ddouble/ddouble*/
          {
            double _x_4 = _x_x1917.hi;
            _x_x1916 = _x_4; /*float64*/
          }
          _x_x1915 = (-_x_x1916); /*float64*/
          double _x_x1918;
          double _x_x1919;
          kk_std_num_ddouble__ddouble _x_x1920 = kk_std_num_ddouble_dd_pi34; /*std/num/ddouble/ddouble*/
          {
            double _x_0_1 = _x_x1920.lo;
            _x_x1919 = _x_0_1; /*float64*/
          }
          _x_x1918 = (-_x_x1919); /*float64*/
          return kk_std_num_ddouble__new_Ddouble(_x_x1915, _x_x1918, _ctx);
        }
      }
      {
        kk_std_num_ddouble__ddouble y_1_10496;
        double _x_x1921;
        double _x_x1922;
        {
          double _x_5 = y.hi;
          _x_x1922 = _x_5; /*float64*/
        }
        _x_x1921 = (-_x_x1922); /*float64*/
        double _x_x1923;
        double _x_x1924;
        {
          double _x_0_2 = y.lo;
          _x_x1924 = _x_0_2; /*float64*/
        }
        _x_x1923 = (-_x_x1924); /*float64*/
        y_1_10496 = kk_std_num_ddouble__new_Ddouble(_x_x1921, _x_x1923, _ctx); /*std/num/ddouble/ddouble*/
        bool _match_x517;
        kk_std_core_types__order _x_x1925;
        kk_std_core_types__order _match_x521;
        double _x_x1926;
        {
          double _x_6 = x.hi;
          _x_x1926 = _x_6; /*float64*/
        }
        double _x_x1927;
        {
          double _x_0_3 = y_1_10496.hi;
          _x_x1927 = _x_0_3; /*float64*/
        }
        _match_x521 = kk_std_num_float64_cmp(_x_x1926, _x_x1927, _ctx); /*order*/
        if (kk_std_core_types__is_Eq(_match_x521, _ctx)) {
          double _x_x1928;
          {
            double _x_1_1 = x.lo;
            _x_x1928 = _x_1_1; /*float64*/
          }
          double _x_x1929;
          {
            double _x_2_1 = y_1_10496.lo;
            _x_x1929 = _x_2_1; /*float64*/
          }
          _x_x1925 = kk_std_num_float64_cmp(_x_x1928, _x_x1929, _ctx); /*order*/
        }
        else {
          _x_x1925 = _match_x521; /*order*/
        }
        _match_x517 = kk_std_core_order__lp__eq__eq__rp_(_x_x1925, kk_std_core_types__new_Eq(_ctx), _ctx); /*bool*/
        if (_match_x517) {
          bool _match_x520;
          double _x_x1930;
          {
            double _x_4_0 = y.hi;
            _x_x1930 = _x_4_0; /*float64*/
          }
          _match_x520 = (_x_x1930 > (0x0p+0)); /*bool*/
          if (_match_x520) {
            return kk_std_num_ddouble_dd_pi34;
          }
          {
            double _x_x1931;
            double _x_x1932;
            kk_std_num_ddouble__ddouble _x_x1933 = kk_std_num_ddouble_dd_pi4; /*std/num/ddouble/ddouble*/
            {
              double _x_7 = _x_x1933.hi;
              _x_x1932 = _x_7; /*float64*/
            }
            _x_x1931 = (-_x_x1932); /*float64*/
            double _x_x1934;
            double _x_x1935;
            kk_std_num_ddouble__ddouble _x_x1936 = kk_std_num_ddouble_dd_pi4; /*std/num/ddouble/ddouble*/
            {
              double _x_0_4 = _x_x1936.lo;
              _x_x1935 = _x_0_4; /*float64*/
            }
            _x_x1934 = (-_x_x1935); /*float64*/
            return kk_std_num_ddouble__new_Ddouble(_x_x1931, _x_x1934, _ctx);
          }
        }
        {
          kk_std_num_ddouble__ddouble r;
          kk_std_num_ddouble__ddouble _x_x1937;
          kk_std_num_ddouble__ddouble _x_x1938 = kk_std_num_ddouble_sqr(x, _ctx); /*std/num/ddouble/ddouble*/
          kk_std_num_ddouble__ddouble _x_x1939 = kk_std_num_ddouble_sqr(y, _ctx); /*std/num/ddouble/ddouble*/
          _x_x1937 = kk_std_num_ddouble__lp__plus__rp_(_x_x1938, _x_x1939, _ctx); /*std/num/ddouble/ddouble*/
          r = kk_std_num_ddouble_sqrt(_x_x1937, _ctx); /*std/num/ddouble/ddouble*/
          kk_std_num_ddouble__ddouble xr = kk_std_num_ddouble__lp__fs__rp_(x, r, _ctx); /*std/num/ddouble/ddouble*/;
          kk_std_num_ddouble__ddouble yr = kk_std_num_ddouble__lp__fs__rp_(y, r, _ctx); /*std/num/ddouble/ddouble*/;
          double d_5_10500;
          double _x_x1940;
          {
            double _x_5_0 = y.hi;
            _x_x1940 = _x_5_0; /*float64*/
          }
          double _x_x1941;
          {
            double _x_6_0 = x.hi;
            _x_x1941 = _x_6_0; /*float64*/
          }
          d_5_10500 = atan2(_x_x1940,_x_x1941); /*float64*/
          kk_std_num_ddouble__ddouble z = kk_std_num_ddouble__new_Ddouble(d_5_10500, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/;
          kk_std_core_types__tuple2 _match_x518 = kk_std_num_ddouble_sincos(z, _ctx); /*(std/num/ddouble/ddouble, std/num/ddouble/ddouble)*/;
          {
            kk_box_t _box_x489 = _match_x518.fst;
            kk_box_t _box_x490 = _match_x518.snd;
            kk_std_num_ddouble__ddouble sinz = kk_std_num_ddouble__ddouble_unbox(_box_x489, KK_BORROWED, _ctx);
            kk_std_num_ddouble__ddouble cosz = kk_std_num_ddouble__ddouble_unbox(_box_x490, KK_BORROWED, _ctx);
            kk_std_core_types__tuple2_drop(_match_x518, _ctx);
            kk_std_num_ddouble__ddouble ddouble_0_8_10506 = kk_std_num_ddouble_abs(yr, _ctx); /*std/num/ddouble/ddouble*/;
            bool _match_x519;
            double _x_x1942;
            double _x_x1943;
            {
              double _x_7_0 = xr.hi;
              _x_x1943 = _x_7_0; /*float64*/
            }
            _x_x1942 = kk_double_abs(_x_x1943); /*float64*/
            double _x_x1944;
            {
              double _x_8 = ddouble_0_8_10506.hi;
              _x_x1944 = _x_8; /*float64*/
            }
            _match_x519 = (_x_x1942 > _x_x1944); /*bool*/
            if (_match_x519) {
              kk_std_num_ddouble__ddouble _x_x1945;
              kk_std_num_ddouble__ddouble _x_x1946;
              kk_std_num_ddouble__ddouble _x_x1947;
              double _x_x1948;
              double _x_x1949;
              {
                double _x_9 = sinz.hi;
                _x_x1949 = _x_9; /*float64*/
              }
              _x_x1948 = (-_x_x1949); /*float64*/
              double _x_x1950;
              double _x_x1951;
              {
                double _x_0_5 = sinz.lo;
                _x_x1951 = _x_0_5; /*float64*/
              }
              _x_x1950 = (-_x_x1951); /*float64*/
              _x_x1947 = kk_std_num_ddouble__new_Ddouble(_x_x1948, _x_x1950, _ctx); /*std/num/ddouble/ddouble*/
              _x_x1946 = kk_std_num_ddouble__lp__plus__rp_(yr, _x_x1947, _ctx); /*std/num/ddouble/ddouble*/
              _x_x1945 = kk_std_num_ddouble__lp__fs__rp_(_x_x1946, cosz, _ctx); /*std/num/ddouble/ddouble*/
              return kk_std_num_ddouble__lp__plus__rp_(z, _x_x1945, _ctx);
            }
            {
              kk_std_num_ddouble__ddouble y_3_10510;
              kk_std_num_ddouble__ddouble _x_x1952;
              kk_std_num_ddouble__ddouble _x_x1953;
              double _x_x1954;
              double _x_x1955;
              {
                double _x_10 = cosz.hi;
                _x_x1955 = _x_10; /*float64*/
              }
              _x_x1954 = (-_x_x1955); /*float64*/
              double _x_x1956;
              double _x_x1957;
              {
                double _x_0_6 = cosz.lo;
                _x_x1957 = _x_0_6; /*float64*/
              }
              _x_x1956 = (-_x_x1957); /*float64*/
              _x_x1953 = kk_std_num_ddouble__new_Ddouble(_x_x1954, _x_x1956, _ctx); /*std/num/ddouble/ddouble*/
              _x_x1952 = kk_std_num_ddouble__lp__plus__rp_(xr, _x_x1953, _ctx); /*std/num/ddouble/ddouble*/
              y_3_10510 = kk_std_num_ddouble__lp__fs__rp_(_x_x1952, sinz, _ctx); /*std/num/ddouble/ddouble*/
              kk_std_num_ddouble__ddouble _x_x1958;
              double _x_x1959;
              double _x_x1960;
              {
                double _x_11 = y_3_10510.hi;
                _x_x1960 = _x_11; /*float64*/
              }
              _x_x1959 = (-_x_x1960); /*float64*/
              double _x_x1961;
              double _x_x1962;
              {
                double _x_0_7 = y_3_10510.lo;
                _x_x1962 = _x_0_7; /*float64*/
              }
              _x_x1961 = (-_x_x1962); /*float64*/
              _x_x1958 = kk_std_num_ddouble__new_Ddouble(_x_x1959, _x_x1961, _ctx); /*std/num/ddouble/ddouble*/
              return kk_std_num_ddouble__lp__plus__rp_(z, _x_x1958, _ctx);
            }
          }
        }
      }
    }
  }
}
 
// The arc-sine of `x`. Returns the angle in radians.

kk_std_num_ddouble__ddouble kk_std_num_ddouble_asin(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> ddouble */ 
  kk_std_num_ddouble__ddouble a = kk_std_num_ddouble_abs(x, _ctx); /*std/num/ddouble/ddouble*/;
  bool _match_x510;
  kk_std_core_types__order _x_x1963;
  kk_std_core_types__order _match_x513;
  double _x_x1964;
  {
    double _x = a.hi;
    _x_x1964 = _x; /*float64*/
  }
  double _x_x1965;
  kk_std_num_ddouble__ddouble _x_x1966 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
  {
    double _x_0 = _x_x1966.hi;
    _x_x1965 = _x_0; /*float64*/
  }
  _match_x513 = kk_std_num_float64_cmp(_x_x1964, _x_x1965, _ctx); /*order*/
  if (kk_std_core_types__is_Eq(_match_x513, _ctx)) {
    double _x_x1967;
    {
      double _x_1 = a.lo;
      _x_x1967 = _x_1; /*float64*/
    }
    double _x_x1968;
    kk_std_num_ddouble__ddouble _x_x1969 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
    {
      double _x_2 = _x_x1969.lo;
      _x_x1968 = _x_2; /*float64*/
    }
    _x_x1963 = kk_std_num_float64_cmp(_x_x1967, _x_x1968, _ctx); /*order*/
  }
  else {
    _x_x1963 = _match_x513; /*order*/
  }
  _match_x510 = kk_std_core_order__lp__eq__eq__rp_(_x_x1963, kk_std_core_types__new_Gt(_ctx), _ctx); /*bool*/
  if (_match_x510) {
    return kk_std_num_ddouble_dd_nan;
  }
  {
    bool _match_x511;
    kk_std_core_types__order _x_x1970;
    kk_std_core_types__order _match_x512;
    double _x_x1971;
    {
      double _x_3 = a.hi;
      _x_x1971 = _x_3; /*float64*/
    }
    double _x_x1972;
    kk_std_num_ddouble__ddouble _x_x1973 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
    {
      double _x_0_0 = _x_x1973.hi;
      _x_x1972 = _x_0_0; /*float64*/
    }
    _match_x512 = kk_std_num_float64_cmp(_x_x1971, _x_x1972, _ctx); /*order*/
    if (kk_std_core_types__is_Eq(_match_x512, _ctx)) {
      double _x_x1974;
      {
        double _x_1_0 = a.lo;
        _x_x1974 = _x_1_0; /*float64*/
      }
      double _x_x1975;
      kk_std_num_ddouble__ddouble _x_x1976 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
      {
        double _x_2_0 = _x_x1976.lo;
        _x_x1975 = _x_2_0; /*float64*/
      }
      _x_x1970 = kk_std_num_float64_cmp(_x_x1974, _x_x1975, _ctx); /*order*/
    }
    else {
      _x_x1970 = _match_x512; /*order*/
    }
    _match_x511 = kk_std_core_order__lp__eq__eq__rp_(_x_x1970, kk_std_core_types__new_Eq(_ctx), _ctx); /*bool*/
    if (_match_x511) {
      return kk_std_num_ddouble_with_sign_of(kk_std_num_ddouble_dd_pi2, x, _ctx);
    }
    {
      kk_std_num_ddouble__ddouble y_1_10518 = kk_std_num_ddouble_sqr(x, _ctx); /*std/num/ddouble/ddouble*/;
      kk_std_num_ddouble__ddouble _x_x1977;
      kk_std_num_ddouble__ddouble _x_x1978;
      kk_std_num_ddouble__ddouble _x_x1979;
      double _x_x1980;
      double _x_x1981;
      {
        double _x_4 = y_1_10518.hi;
        _x_x1981 = _x_4; /*float64*/
      }
      _x_x1980 = (-_x_x1981); /*float64*/
      double _x_x1982;
      double _x_x1983;
      {
        double _x_0_1 = y_1_10518.lo;
        _x_x1983 = _x_0_1; /*float64*/
      }
      _x_x1982 = (-_x_x1983); /*float64*/
      _x_x1979 = kk_std_num_ddouble__new_Ddouble(_x_x1980, _x_x1982, _ctx); /*std/num/ddouble/ddouble*/
      _x_x1978 = kk_std_num_ddouble__lp__plus__rp_(kk_std_num_ddouble_one, _x_x1979, _ctx); /*std/num/ddouble/ddouble*/
      _x_x1977 = kk_std_num_ddouble_sqrt(_x_x1978, _ctx); /*std/num/ddouble/ddouble*/
      return kk_std_num_ddouble_atan2(x, _x_x1977, _ctx);
    }
  }
}
 
// The arc-cosine of `x`. Returns the angle in radians.

kk_std_num_ddouble__ddouble kk_std_num_ddouble_acos(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> ddouble */ 
  kk_std_num_ddouble__ddouble a = kk_std_num_ddouble_abs(x, _ctx); /*std/num/ddouble/ddouble*/;
  bool _match_x505;
  kk_std_core_types__order _x_x1984;
  kk_std_core_types__order _match_x509;
  double _x_x1985;
  {
    double _x = a.hi;
    _x_x1985 = _x; /*float64*/
  }
  double _x_x1986;
  kk_std_num_ddouble__ddouble _x_x1987 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
  {
    double _x_0 = _x_x1987.hi;
    _x_x1986 = _x_0; /*float64*/
  }
  _match_x509 = kk_std_num_float64_cmp(_x_x1985, _x_x1986, _ctx); /*order*/
  if (kk_std_core_types__is_Eq(_match_x509, _ctx)) {
    double _x_x1988;
    {
      double _x_1 = a.lo;
      _x_x1988 = _x_1; /*float64*/
    }
    double _x_x1989;
    kk_std_num_ddouble__ddouble _x_x1990 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
    {
      double _x_2 = _x_x1990.lo;
      _x_x1989 = _x_2; /*float64*/
    }
    _x_x1984 = kk_std_num_float64_cmp(_x_x1988, _x_x1989, _ctx); /*order*/
  }
  else {
    _x_x1984 = _match_x509; /*order*/
  }
  _match_x505 = kk_std_core_order__lp__eq__eq__rp_(_x_x1984, kk_std_core_types__new_Gt(_ctx), _ctx); /*bool*/
  if (_match_x505) {
    return kk_std_num_ddouble_dd_nan;
  }
  {
    bool _match_x506;
    kk_std_core_types__order _x_x1991;
    kk_std_core_types__order _match_x508;
    double _x_x1992;
    {
      double _x_3 = a.hi;
      _x_x1992 = _x_3; /*float64*/
    }
    double _x_x1993;
    kk_std_num_ddouble__ddouble _x_x1994 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
    {
      double _x_0_0 = _x_x1994.hi;
      _x_x1993 = _x_0_0; /*float64*/
    }
    _match_x508 = kk_std_num_float64_cmp(_x_x1992, _x_x1993, _ctx); /*order*/
    if (kk_std_core_types__is_Eq(_match_x508, _ctx)) {
      double _x_x1995;
      {
        double _x_1_0 = a.lo;
        _x_x1995 = _x_1_0; /*float64*/
      }
      double _x_x1996;
      kk_std_num_ddouble__ddouble _x_x1997 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
      {
        double _x_2_0 = _x_x1997.lo;
        _x_x1996 = _x_2_0; /*float64*/
      }
      _x_x1991 = kk_std_num_float64_cmp(_x_x1995, _x_x1996, _ctx); /*order*/
    }
    else {
      _x_x1991 = _match_x508; /*order*/
    }
    _match_x506 = kk_std_core_order__lp__eq__eq__rp_(_x_x1991, kk_std_core_types__new_Eq(_ctx), _ctx); /*bool*/
    if (_match_x506) {
      bool _match_x507;
      double _x_x1998;
      {
        double _x_4 = x.hi;
        _x_x1998 = _x_4; /*float64*/
      }
      _match_x507 = (_x_x1998 > (0x0p+0)); /*bool*/
      if (_match_x507) {
        return kk_std_num_ddouble_zero;
      }
      {
        return kk_std_num_ddouble_dd_pi;
      }
    }
    {
      kk_std_num_ddouble__ddouble y_1_10527 = kk_std_num_ddouble_sqr(x, _ctx); /*std/num/ddouble/ddouble*/;
      kk_std_num_ddouble__ddouble _x_x1999;
      kk_std_num_ddouble__ddouble _x_x2000;
      kk_std_num_ddouble__ddouble _x_x2001;
      double _x_x2002;
      double _x_x2003;
      {
        double _x_5 = y_1_10527.hi;
        _x_x2003 = _x_5; /*float64*/
      }
      _x_x2002 = (-_x_x2003); /*float64*/
      double _x_x2004;
      double _x_x2005;
      {
        double _x_0_1 = y_1_10527.lo;
        _x_x2005 = _x_0_1; /*float64*/
      }
      _x_x2004 = (-_x_x2005); /*float64*/
      _x_x2001 = kk_std_num_ddouble__new_Ddouble(_x_x2002, _x_x2004, _ctx); /*std/num/ddouble/ddouble*/
      _x_x2000 = kk_std_num_ddouble__lp__plus__rp_(kk_std_num_ddouble_one, _x_x2001, _ctx); /*std/num/ddouble/ddouble*/
      _x_x1999 = kk_std_num_ddouble_sqrt(_x_x2000, _ctx); /*std/num/ddouble/ddouble*/
      return kk_std_num_ddouble_atan2(_x_x1999, x, _ctx);
    }
  }
}
 
// The hyperbolic sine of `x`.

kk_std_num_ddouble__ddouble kk_std_num_ddouble_sinh(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> ddouble */ 
  bool _match_x502;
  double _x_x2006;
  {
    double _x = x.hi;
    _x_x2006 = _x; /*float64*/
  }
  _match_x502 = (_x_x2006 == (0x0p+0)); /*bool*/
  if (_match_x502) {
    return kk_std_num_ddouble_zero;
  }
  {
    kk_std_num_ddouble__ddouble x_1_10531 = kk_std_num_ddouble_abs(x, _ctx); /*std/num/ddouble/ddouble*/;
    bool _match_x503;
    double _x_x2007;
    {
      double _x_0 = x_1_10531.hi;
      _x_x2007 = _x_0; /*float64*/
    }
    _match_x503 = (_x_x2007 > (0x1.999999999999ap-5)); /*bool*/
    if (_match_x503) {
      kk_std_num_ddouble__ddouble ex = kk_std_num_ddouble_exp(x, _ctx); /*std/num/ddouble/ddouble*/;
      bool b_10533;
      bool _match_x504;
      double _x_x2008;
      {
        double _x_1 = ex.hi;
        _x_x2008 = _x_1; /*float64*/
      }
      _match_x504 = isfinite(_x_x2008); /*bool*/
      if (_match_x504) {
        double _x_x2009;
        {
          double _x_0_0 = ex.lo;
          _x_x2009 = _x_0_0; /*float64*/
        }
        b_10533 = isfinite(_x_x2009); /*bool*/
      }
      else {
        b_10533 = false; /*bool*/
      }
      if (b_10533) {
        kk_std_num_ddouble__ddouble y_10536 = kk_std_num_ddouble__lp__fs__rp_(kk_std_num_ddouble_one, ex, _ctx); /*std/num/ddouble/ddouble*/;
        kk_std_num_ddouble__ddouble x_2_10534;
        kk_std_num_ddouble__ddouble _x_x2010;
        double _x_x2011;
        double _x_x2012;
        {
          double _x_2 = y_10536.hi;
          _x_x2012 = _x_2; /*float64*/
        }
        _x_x2011 = (-_x_x2012); /*float64*/
        double _x_x2013;
        double _x_x2014;
        {
          double _x_0_1 = y_10536.lo;
          _x_x2014 = _x_0_1; /*float64*/
        }
        _x_x2013 = (-_x_x2014); /*float64*/
        _x_x2010 = kk_std_num_ddouble__new_Ddouble(_x_x2011, _x_x2013, _ctx); /*std/num/ddouble/ddouble*/
        x_2_10534 = kk_std_num_ddouble__lp__plus__rp_(ex, _x_x2010, _ctx); /*std/num/ddouble/ddouble*/
        double _x_x2015;
        double _x_x2016;
        {
          double _x_1_0 = x_2_10534.hi;
          _x_x2016 = _x_1_0; /*float64*/
        }
        _x_x2015 = (_x_x2016 * (0x1p-1)); /*float64*/
        double _x_x2017;
        double _x_x2018;
        {
          double _x_2_0 = x_2_10534.lo;
          _x_x2018 = _x_2_0; /*float64*/
        }
        _x_x2017 = (_x_x2018 * (0x1p-1)); /*float64*/
        return kk_std_num_ddouble__new_Ddouble(_x_x2015, _x_x2017, _ctx);
      }
      {
        return ex;
      }
    }
    {
      kk_std_num_ddouble__ddouble x2 = kk_std_num_ddouble_sqr(x, _ctx); /*std/num/ddouble/ddouble*/;
      kk_std_num_ddouble__ddouble _x_x2019;
      kk_std_num_ddouble__ddouble _x_x2020;
      kk_std_num_ddouble__ddouble _x_x2021;
      kk_std_num_ddouble__ddouble _x_x2022 = kk_std_num_ddouble_ddouble_int_exp(kk_integer_from_small(6), kk_integer_from_small(0), _ctx); /*std/num/ddouble/ddouble*/
      _x_x2021 = kk_std_num_ddouble__lp__fs__rp_(x2, _x_x2022, _ctx); /*std/num/ddouble/ddouble*/
      kk_std_num_ddouble__ddouble _x_x2023;
      kk_std_num_ddouble__ddouble _x_x2024;
      kk_std_num_ddouble__ddouble _x_x2025;
      kk_std_num_ddouble__ddouble _x_x2026 = kk_std_num_ddouble_ddouble_int_exp(kk_integer_from_small(20), kk_integer_from_small(0), _ctx); /*std/num/ddouble/ddouble*/
      _x_x2025 = kk_std_num_ddouble__lp__fs__rp_(x2, _x_x2026, _ctx); /*std/num/ddouble/ddouble*/
      kk_std_num_ddouble__ddouble _x_x2027;
      kk_std_num_ddouble__ddouble _x_x2028;
      kk_std_num_ddouble__ddouble _x_x2029 = kk_std_num_ddouble_ddouble_int_exp(kk_integer_from_small(42), kk_integer_from_small(0), _ctx); /*std/num/ddouble/ddouble*/
      _x_x2028 = kk_std_num_ddouble__lp__fs__rp_(x2, _x_x2029, _ctx); /*std/num/ddouble/ddouble*/
      _x_x2027 = kk_std_num_ddouble__lp__plus__rp_(kk_std_num_ddouble_one, _x_x2028, _ctx); /*std/num/ddouble/ddouble*/
      _x_x2024 = kk_std_num_ddouble__lp__star__rp_(_x_x2025, _x_x2027, _ctx); /*std/num/ddouble/ddouble*/
      _x_x2023 = kk_std_num_ddouble__lp__plus__rp_(kk_std_num_ddouble_one, _x_x2024, _ctx); /*std/num/ddouble/ddouble*/
      _x_x2020 = kk_std_num_ddouble__lp__star__rp_(_x_x2021, _x_x2023, _ctx); /*std/num/ddouble/ddouble*/
      _x_x2019 = kk_std_num_ddouble__lp__plus__rp_(kk_std_num_ddouble_one, _x_x2020, _ctx); /*std/num/ddouble/ddouble*/
      return kk_std_num_ddouble__lp__star__rp_(x, _x_x2019, _ctx);
    }
  }
}
 
// The hyperbolic cosine of `x`.

kk_std_num_ddouble__ddouble kk_std_num_ddouble_cosh(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> ddouble */ 
  bool _match_x499;
  double _x_x2030;
  {
    double _x = x.hi;
    _x_x2030 = _x; /*float64*/
  }
  _match_x499 = (_x_x2030 == (0x0p+0)); /*bool*/
  if (_match_x499) {
    return kk_std_num_ddouble_one;
  }
  {
    kk_std_num_ddouble__ddouble x_1_10547 = kk_std_num_ddouble_abs(x, _ctx); /*std/num/ddouble/ddouble*/;
    bool _match_x500;
    double _x_x2031;
    {
      double _x_0 = x_1_10547.hi;
      _x_x2031 = _x_0; /*float64*/
    }
    _match_x500 = (_x_x2031 > (0x1.999999999999ap-5)); /*bool*/
    if (_match_x500) {
      kk_std_num_ddouble__ddouble ex = kk_std_num_ddouble_exp(x, _ctx); /*std/num/ddouble/ddouble*/;
      bool b_10549;
      bool _match_x501;
      double _x_x2032;
      {
        double _x_1 = ex.hi;
        _x_x2032 = _x_1; /*float64*/
      }
      _match_x501 = isfinite(_x_x2032); /*bool*/
      if (_match_x501) {
        double _x_x2033;
        {
          double _x_0_0 = ex.lo;
          _x_x2033 = _x_0_0; /*float64*/
        }
        b_10549 = isfinite(_x_x2033); /*bool*/
      }
      else {
        b_10549 = false; /*bool*/
      }
      if (b_10549) {
        kk_std_num_ddouble__ddouble x_2_10550;
        kk_std_num_ddouble__ddouble _x_x2034 = kk_std_num_ddouble__lp__fs__rp_(kk_std_num_ddouble_one, ex, _ctx); /*std/num/ddouble/ddouble*/
        x_2_10550 = kk_std_num_ddouble__lp__plus__rp_(ex, _x_x2034, _ctx); /*std/num/ddouble/ddouble*/
        double _x_x2035;
        double _x_x2036;
        {
          double _x_1_0 = x_2_10550.hi;
          _x_x2036 = _x_1_0; /*float64*/
        }
        _x_x2035 = (_x_x2036 * (0x1p-1)); /*float64*/
        double _x_x2037;
        double _x_x2038;
        {
          double _x_2 = x_2_10550.lo;
          _x_x2038 = _x_2; /*float64*/
        }
        _x_x2037 = (_x_x2038 * (0x1p-1)); /*float64*/
        return kk_std_num_ddouble__new_Ddouble(_x_x2035, _x_x2037, _ctx);
      }
      {
        return ex;
      }
    }
    {
      kk_std_num_ddouble__ddouble s = kk_std_num_ddouble_sinh(x, _ctx); /*std/num/ddouble/ddouble*/;
      kk_std_num_ddouble__ddouble _x_x2039;
      kk_std_num_ddouble__ddouble _x_x2040 = kk_std_num_ddouble_sqr(s, _ctx); /*std/num/ddouble/ddouble*/
      _x_x2039 = kk_std_num_ddouble__lp__plus__rp_(kk_std_num_ddouble_one, _x_x2040, _ctx); /*std/num/ddouble/ddouble*/
      return kk_std_num_ddouble_sqrt(_x_x2039, _ctx);
    }
  }
}
 
// The hyperbolic tangent of `x`.

kk_std_num_ddouble__ddouble kk_std_num_ddouble_tanh(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> ddouble */ 
  bool _match_x495;
  double _x_x2041;
  {
    double _x = x.hi;
    _x_x2041 = _x; /*float64*/
  }
  _match_x495 = (_x_x2041 == (0x0p+0)); /*bool*/
  if (_match_x495) {
    return kk_std_num_ddouble_zero;
  }
  {
    kk_std_num_ddouble__ddouble x_1_10558 = kk_std_num_ddouble_abs(x, _ctx); /*std/num/ddouble/ddouble*/;
    bool _match_x496;
    double _x_x2042;
    {
      double _x_0 = x_1_10558.hi;
      _x_x2042 = _x_0; /*float64*/
    }
    _match_x496 = (_x_x2042 > (0x1.999999999999ap-5)); /*bool*/
    if (_match_x496) {
      kk_std_num_ddouble__ddouble ex = kk_std_num_ddouble_exp(x, _ctx); /*std/num/ddouble/ddouble*/;
      kk_std_num_ddouble__ddouble iex = kk_std_num_ddouble__lp__fs__rp_(kk_std_num_ddouble_one, ex, _ctx); /*std/num/ddouble/ddouble*/;
      bool _match_x497;
      double _x_x2043;
      {
        double _x_1 = ex.hi;
        _x_x2043 = _x_1; /*float64*/
      }
      _match_x497 = (_x_x2043 == (0x0p+0)); /*bool*/
      if (_match_x497) {
        double _x_x2044;
        double _x_x2045;
        kk_std_num_ddouble__ddouble _x_x2046 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
        {
          double _x_2 = _x_x2046.hi;
          _x_x2045 = _x_2; /*float64*/
        }
        _x_x2044 = (-_x_x2045); /*float64*/
        double _x_x2047;
        double _x_x2048;
        kk_std_num_ddouble__ddouble _x_x2049 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
        {
          double _x_0_0 = _x_x2049.lo;
          _x_x2048 = _x_0_0; /*float64*/
        }
        _x_x2047 = (-_x_x2048); /*float64*/
        return kk_std_num_ddouble__new_Ddouble(_x_x2044, _x_x2047, _ctx);
      }
      {
        bool _match_x498;
        double _x_x2050;
        {
          double _x_2_0 = ex.hi;
          _x_x2050 = _x_2_0; /*float64*/
        }
        _match_x498 = (isinf(_x_x2050) && !signbit(_x_x2050)); /*bool*/
        if (_match_x498) {
          return kk_std_num_ddouble_one;
        }
        {
          kk_std_num_ddouble__ddouble _x_x2051;
          kk_std_num_ddouble__ddouble _x_x2052;
          double _x_x2053;
          double _x_x2054;
          {
            double _x_3 = iex.hi;
            _x_x2054 = _x_3; /*float64*/
          }
          _x_x2053 = (-_x_x2054); /*float64*/
          double _x_x2055;
          double _x_x2056;
          {
            double _x_0_1 = iex.lo;
            _x_x2056 = _x_0_1; /*float64*/
          }
          _x_x2055 = (-_x_x2056); /*float64*/
          _x_x2052 = kk_std_num_ddouble__new_Ddouble(_x_x2053, _x_x2055, _ctx); /*std/num/ddouble/ddouble*/
          _x_x2051 = kk_std_num_ddouble__lp__plus__rp_(ex, _x_x2052, _ctx); /*std/num/ddouble/ddouble*/
          kk_std_num_ddouble__ddouble _x_x2057 = kk_std_num_ddouble__lp__plus__rp_(ex, iex, _ctx); /*std/num/ddouble/ddouble*/
          return kk_std_num_ddouble__lp__fs__rp_(_x_x2051, _x_x2057, _ctx);
        }
      }
    }
    {
      kk_std_num_ddouble__ddouble s = kk_std_num_ddouble_sinh(x, _ctx); /*std/num/ddouble/ddouble*/;
      kk_std_num_ddouble__ddouble c;
      kk_std_num_ddouble__ddouble _x_x2058;
      kk_std_num_ddouble__ddouble _x_x2059 = kk_std_num_ddouble_sqr(s, _ctx); /*std/num/ddouble/ddouble*/
      _x_x2058 = kk_std_num_ddouble__lp__plus__rp_(kk_std_num_ddouble_one, _x_x2059, _ctx); /*std/num/ddouble/ddouble*/
      c = kk_std_num_ddouble_sqrt(_x_x2058, _ctx); /*std/num/ddouble/ddouble*/
      return kk_std_num_ddouble__lp__fs__rp_(s, c, _ctx);
    }
  }
}
 
// The area hyperbolic cosine of `x`.

kk_std_num_ddouble__ddouble kk_std_num_ddouble_acosh(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> ddouble */ 
  bool _match_x493;
  kk_std_core_types__order _x_x2064;
  kk_std_core_types__order _match_x494;
  double _x_x2065;
  {
    double _x = x.hi;
    _x_x2065 = _x; /*float64*/
  }
  double _x_x2066;
  kk_std_num_ddouble__ddouble _x_x2067 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
  {
    double _x_0 = _x_x2067.hi;
    _x_x2066 = _x_0; /*float64*/
  }
  _match_x494 = kk_std_num_float64_cmp(_x_x2065, _x_x2066, _ctx); /*order*/
  if (kk_std_core_types__is_Eq(_match_x494, _ctx)) {
    double _x_x2068;
    {
      double _x_1 = x.lo;
      _x_x2068 = _x_1; /*float64*/
    }
    double _x_x2069;
    kk_std_num_ddouble__ddouble _x_x2070 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
    {
      double _x_2 = _x_x2070.lo;
      _x_x2069 = _x_2; /*float64*/
    }
    _x_x2064 = kk_std_num_float64_cmp(_x_x2068, _x_x2069, _ctx); /*order*/
  }
  else {
    _x_x2064 = _match_x494; /*order*/
  }
  _match_x493 = kk_std_core_order__lp__eq__eq__rp_(_x_x2064, kk_std_core_types__new_Lt(_ctx), _ctx); /*bool*/
  if (_match_x493) {
    return kk_std_num_ddouble_dd_nan;
  }
  {
    kk_std_num_ddouble__ddouble x_1_10569 = kk_std_num_ddouble_sqr(x, _ctx); /*std/num/ddouble/ddouble*/;
    kk_std_num_ddouble__ddouble _x_x2071;
    kk_std_num_ddouble__ddouble _x_x2072;
    kk_std_num_ddouble__ddouble _x_x2073;
    kk_std_num_ddouble__ddouble _x_x2074;
    double _x_x2075;
    double _x_x2076;
    kk_std_num_ddouble__ddouble _x_x2077 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
    {
      double _x_3 = _x_x2077.hi;
      _x_x2076 = _x_3; /*float64*/
    }
    _x_x2075 = (-_x_x2076); /*float64*/
    double _x_x2078;
    double _x_x2079;
    kk_std_num_ddouble__ddouble _x_x2080 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
    {
      double _x_0_0 = _x_x2080.lo;
      _x_x2079 = _x_0_0; /*float64*/
    }
    _x_x2078 = (-_x_x2079); /*float64*/
    _x_x2074 = kk_std_num_ddouble__new_Ddouble(_x_x2075, _x_x2078, _ctx); /*std/num/ddouble/ddouble*/
    _x_x2073 = kk_std_num_ddouble__lp__plus__rp_(x_1_10569, _x_x2074, _ctx); /*std/num/ddouble/ddouble*/
    _x_x2072 = kk_std_num_ddouble_sqrt(_x_x2073, _ctx); /*std/num/ddouble/ddouble*/
    _x_x2071 = kk_std_num_ddouble__lp__plus__rp_(x, _x_x2072, _ctx); /*std/num/ddouble/ddouble*/
    return kk_std_num_ddouble_ln(_x_x2071, _ctx);
  }
}
 
// The area hyperbolic tangent of `x`.

kk_std_num_ddouble__ddouble kk_std_num_ddouble_atanh(kk_std_num_ddouble__ddouble x, kk_context_t* _ctx) { /* (x : ddouble) -> ddouble */ 
  kk_std_num_ddouble__ddouble x_0_10571 = kk_std_num_ddouble_abs(x, _ctx); /*std/num/ddouble/ddouble*/;
  bool _match_x491;
  kk_std_core_types__order _x_x2081;
  kk_std_core_types__order _match_x492;
  double _x_x2082;
  {
    double _x = x_0_10571.hi;
    _x_x2082 = _x; /*float64*/
  }
  double _x_x2083;
  kk_std_num_ddouble__ddouble _x_x2084 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
  {
    double _x_0 = _x_x2084.hi;
    _x_x2083 = _x_0; /*float64*/
  }
  _match_x492 = kk_std_num_float64_cmp(_x_x2082, _x_x2083, _ctx); /*order*/
  if (kk_std_core_types__is_Eq(_match_x492, _ctx)) {
    double _x_x2085;
    {
      double _x_1 = x_0_10571.lo;
      _x_x2085 = _x_1; /*float64*/
    }
    double _x_x2086;
    kk_std_num_ddouble__ddouble _x_x2087 = kk_std_num_ddouble_one; /*std/num/ddouble/ddouble*/
    {
      double _x_2 = _x_x2087.lo;
      _x_x2086 = _x_2; /*float64*/
    }
    _x_x2081 = kk_std_num_float64_cmp(_x_x2085, _x_x2086, _ctx); /*order*/
  }
  else {
    _x_x2081 = _match_x492; /*order*/
  }
  _match_x491 = kk_std_core_order__lp__eq__eq__rp_(_x_x2081, kk_std_core_types__new_Gt(_ctx), _ctx); /*bool*/
  if (_match_x491) {
    return kk_std_num_ddouble_dd_nan;
  }
  {
    kk_std_num_ddouble__ddouble x_1_10573;
    kk_std_num_ddouble__ddouble _x_x2088;
    kk_std_num_ddouble__ddouble _x_x2089 = kk_std_num_ddouble__lp__plus__rp_(kk_std_num_ddouble_one, x, _ctx); /*std/num/ddouble/ddouble*/
    kk_std_num_ddouble__ddouble _x_x2090;
    kk_std_num_ddouble__ddouble _x_x2091;
    double _x_x2092;
    double _x_x2093;
    {
      double _x_3 = x.hi;
      _x_x2093 = _x_3; /*float64*/
    }
    _x_x2092 = (-_x_x2093); /*float64*/
    double _x_x2094;
    double _x_x2095;
    {
      double _x_0_0 = x.lo;
      _x_x2095 = _x_0_0; /*float64*/
    }
    _x_x2094 = (-_x_x2095); /*float64*/
    _x_x2091 = kk_std_num_ddouble__new_Ddouble(_x_x2092, _x_x2094, _ctx); /*std/num/ddouble/ddouble*/
    _x_x2090 = kk_std_num_ddouble__lp__plus__rp_(kk_std_num_ddouble_one, _x_x2091, _ctx); /*std/num/ddouble/ddouble*/
    _x_x2088 = kk_std_num_ddouble__lp__fs__rp_(_x_x2089, _x_x2090, _ctx); /*std/num/ddouble/ddouble*/
    x_1_10573 = kk_std_num_ddouble_ln(_x_x2088, _ctx); /*std/num/ddouble/ddouble*/
    double _x_x2096;
    double _x_x2097;
    {
      double _x_4 = x_1_10573.hi;
      _x_x2097 = _x_4; /*float64*/
    }
    _x_x2096 = (_x_x2097 * (0x1p-1)); /*float64*/
    double _x_x2098;
    double _x_x2099;
    {
      double _x_0_1 = x_1_10573.lo;
      _x_x2099 = _x_0_1; /*float64*/
    }
    _x_x2098 = (_x_x2099 * (0x1p-1)); /*float64*/
    return kk_std_num_ddouble__new_Ddouble(_x_x2096, _x_x2098, _ctx);
  }
}

// initialization
void kk_std_num_ddouble__init(kk_context_t* _ctx){
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
  kk_std_num_float64__init(_ctx);
  kk_std_num_decimal__init(_ctx);
  kk_std_text_parse__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
  {
    kk_std_num_ddouble_maxprecise = kk_integer_from_str("9007199254740991", _ctx); /*int*/
  }
  {
    kk_std_num_ddouble_dd_nan = kk_std_num_ddouble__new_Ddouble(kk_std_num_float64_nan, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/
  }
  {
    kk_std_num_ddouble_minprecise = kk_integer_neg((kk_integer_from_str("9007199254740991", _ctx)),kk_context()); /*int*/
  }
  {
    kk_std_num_ddouble_one = kk_std_num_ddouble__new_Ddouble(0x1p0, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/
  }
  {
    kk_std_num_ddouble_ten = kk_std_num_ddouble__new_Ddouble(0x1.4p3, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/
  }
  {
    kk_std_num_ddouble_zero = kk_std_num_ddouble__new_Ddouble(0x0p+0, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/
  }
  {
    kk_std_num_ddouble_dd_pi = kk_std_num_ddouble__new_Ddouble(0x1.921fb54442d18p1, 0x1.1a62633145c07p-53, _ctx); /*std/num/ddouble/ddouble*/
  }
  {
    kk_std_num_ddouble_dd_twopi = kk_std_num_ddouble__new_Ddouble(0x1.921fb54442d18p2, 0x1.1a62633145c07p-52, _ctx); /*std/num/ddouble/ddouble*/
  }
  {
    kk_std_num_ddouble_dd_pi2 = kk_std_num_ddouble__new_Ddouble(0x1.921fb54442d18p0, 0x1.1a62633145c07p-54, _ctx); /*std/num/ddouble/ddouble*/
  }
  {
    kk_std_num_ddouble_dd_pi4 = kk_std_num_ddouble__new_Ddouble(0x1.921fb54442d18p-1, 0x1.1a62633145c07p-55, _ctx); /*std/num/ddouble/ddouble*/
  }
  {
    kk_std_num_ddouble_dd_pi16 = kk_std_num_ddouble__new_Ddouble(0x1.921fb54442d18p1, 0x1.1a62633145c07p-53, _ctx); /*std/num/ddouble/ddouble*/
  }
  {
    kk_std_num_ddouble_dd_pi34 = kk_std_num_ddouble__new_Ddouble(0x1.2d97c7f3321d2p1, 0x1.a79394c9e8a0bp-54, _ctx); /*std/num/ddouble/ddouble*/
  }
  {
    kk_std_num_ddouble_dd_e = kk_std_num_ddouble__new_Ddouble(0x1.5bf0a8b145769p1, 0x1.4d57ee2b1013ap-53, _ctx); /*std/num/ddouble/ddouble*/
  }
  {
    kk_std_num_ddouble_dd_ln2 = kk_std_num_ddouble__new_Ddouble(0x1.62e42fefa39efp-1, 0x1.abc9e3b39803fp-56, _ctx); /*std/num/ddouble/ddouble*/
  }
  {
    kk_std_num_ddouble_dd_ln10 = kk_std_num_ddouble__new_Ddouble(0x1.26bb1bbb55516p1, -0x1.f48ad494ea3e9p-53, _ctx); /*std/num/ddouble/ddouble*/
  }
  {
    kk_std_num_ddouble_dd_log2e = kk_std_num_ddouble__new_Ddouble(0x1.71547652b82fep0, 0x1.777d0ffda0d23p-56, _ctx); /*std/num/ddouble/ddouble*/
  }
  {
    kk_std_num_ddouble_dd_log10e = kk_std_num_ddouble__new_Ddouble(0x1.bcb7b1526e50ep-2, 0x1.95355baaafad3p-57, _ctx); /*std/num/ddouble/ddouble*/
  }
  {
    kk_std_num_ddouble_dd_sqrt2 = kk_std_num_ddouble__new_Ddouble(0x1.6a09e667f3bcdp0, -0x1.bdd3413b26456p-54, _ctx); /*std/num/ddouble/ddouble*/
  }
  {
    kk_std_num_ddouble_dd_sqrt12 = kk_std_num_ddouble__new_Ddouble(0x1.6a09e667f3bcdp-1, -0x1.bdd3413b26456p-55, _ctx); /*std/num/ddouble/ddouble*/
  }
  {
    kk_std_num_ddouble_dd_euler = kk_std_num_ddouble__new_Ddouble(0x1.2788cfc6fb619p-1, -0x1.6cb90701fbfabp-58, _ctx); /*std/num/ddouble/ddouble*/
  }
  {
    kk_std_num_ddouble_dd_epsilon = kk_std_num_ddouble__new_Ddouble(0x1p-104, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/
  }
  {
    kk_std_num_ddouble_dd_epsilon8 = kk_std_num_ddouble__new_Ddouble(0x1p-101, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/
  }
  {
    kk_std_num_ddouble_dd_max = kk_std_num_ddouble__new_Ddouble(0x1.fffffffffffffp1023, 0x1.fffffffffffffp969, _ctx); /*std/num/ddouble/ddouble*/
  }
  {
    kk_std_num_ddouble_dd_min = kk_std_num_ddouble__new_Ddouble(0x1p-1022, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/
  }
  {
    kk_std_num_ddouble_dd_true_min = kk_std_num_ddouble__new_Ddouble(0x1p-1074, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/
  }
  {
    kk_std_num_ddouble_dd_posinf = kk_std_num_ddouble__new_Ddouble(kk_std_num_float64_posinf, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/
  }
  {
    kk_std_num_ddouble_dd_neginf = kk_std_num_ddouble__new_Ddouble(kk_std_num_float64_neginf, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/
  }
  {
    kk_std_num_ddouble_dd_max_prec = kk_integer_from_small(31); /*int*/
  }
  {
    kk_std_num_ddouble_dd_default_prec = kk_integer_from_small(-31); /*int*/
  }
  {
    kk_std_num_ddouble_two = kk_std_num_ddouble__new_Ddouble(0x1p1, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/
  }
  {
    kk_box_t _x_x1289;
    kk_std_num_ddouble__ddouble _x_x1290 = kk_std_num_ddouble__new_Ddouble(0x1.5555555555555p-3, 0x1.5555555555555p-57, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1289 = kk_std_num_ddouble__ddouble_box(_x_x1290, _ctx); /*82*/
    kk_std_core_types__list _x_x1291;
    kk_box_t _x_x1292;
    kk_std_num_ddouble__ddouble _x_x1293 = kk_std_num_ddouble__new_Ddouble(0x1.5555555555555p-5, 0x1.5555555555555p-59, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1292 = kk_std_num_ddouble__ddouble_box(_x_x1293, _ctx); /*82*/
    kk_std_core_types__list _x_x1294;
    kk_box_t _x_x1295;
    kk_std_num_ddouble__ddouble _x_x1296 = kk_std_num_ddouble__new_Ddouble(0x1.1111111111111p-7, 0x1.1111111111111p-63, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1295 = kk_std_num_ddouble__ddouble_box(_x_x1296, _ctx); /*82*/
    kk_std_core_types__list _x_x1297;
    kk_box_t _x_x1298;
    kk_std_num_ddouble__ddouble _x_x1299 = kk_std_num_ddouble__new_Ddouble(0x1.6c16c16c16c17p-10, -0x1.f49f49f49f49fp-65, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1298 = kk_std_num_ddouble__ddouble_box(_x_x1299, _ctx); /*82*/
    kk_std_core_types__list _x_x1300;
    kk_box_t _x_x1301;
    kk_std_num_ddouble__ddouble _x_x1302 = kk_std_num_ddouble__new_Ddouble(0x1.a01a01a01a01ap-13, 0x1.a01a01a01a01ap-73, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1301 = kk_std_num_ddouble__ddouble_box(_x_x1302, _ctx); /*82*/
    kk_std_core_types__list _x_x1303;
    kk_box_t _x_x1304;
    kk_std_num_ddouble__ddouble _x_x1305 = kk_std_num_ddouble__new_Ddouble(0x1.a01a01a01a01ap-16, 0x1.a01a01a01a01ap-76, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1304 = kk_std_num_ddouble__ddouble_box(_x_x1305, _ctx); /*82*/
    _x_x1303 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x1304, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<82>*/
    _x_x1300 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x1301, _x_x1303, _ctx); /*list<82>*/
    _x_x1297 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x1298, _x_x1300, _ctx); /*list<82>*/
    _x_x1294 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x1295, _x_x1297, _ctx); /*list<82>*/
    _x_x1291 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x1292, _x_x1294, _ctx); /*list<82>*/
    kk_std_num_ddouble_exp_factors = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x1289, _x_x1291, _ctx); /*list<std/num/ddouble/ddouble>*/
  }
  {
    kk_std_num_ddouble_one_half = kk_std_num_ddouble__new_Ddouble(0x1p-1, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/
  }
  {
    kk_box_t _x_x1739;
    kk_std_num_ddouble__ddouble _x_x1740 = kk_std_num_ddouble__new_Ddouble(0x1.6116039167de1p-33, 0x1.ea9f4c1702653p-88, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1739 = kk_std_num_ddouble__ddouble_box(_x_x1740, _ctx); /*82*/
    kk_std_core_types__list _x_x1741;
    kk_box_t _x_x1742;
    kk_std_num_ddouble__ddouble _x_x1743 = kk_std_num_ddouble__new_Ddouble(-0x1.ae64561f4804fp-26, -0x1.c5104f49cf934p-82, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1742 = kk_std_num_ddouble__ddouble_box(_x_x1743, _ctx); /*82*/
    kk_std_core_types__list _x_x1744;
    kk_box_t _x_x1745;
    kk_std_num_ddouble__ddouble _x_x1746 = kk_std_num_ddouble__new_Ddouble(0x1.71de3a556b36bp-19, -0x1.eb33da7509008p-73, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1745 = kk_std_num_ddouble__ddouble_box(_x_x1746, _ctx); /*82*/
    kk_std_core_types__list _x_x1747;
    kk_box_t _x_x1748;
    kk_std_num_ddouble__ddouble _x_x1749 = kk_std_num_ddouble__new_Ddouble(-0x1.a01a01a01a01ap-13, 0x1.0313e2634850bp-67, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1748 = kk_std_num_ddouble__ddouble_box(_x_x1749, _ctx); /*82*/
    kk_std_core_types__list _x_x1750;
    kk_box_t _x_x1751;
    kk_std_num_ddouble__ddouble _x_x1752 = kk_std_num_ddouble__new_Ddouble(0x1.1111111111111p-7, 0x1.110a7e6657814p-63, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1751 = kk_std_num_ddouble__ddouble_box(_x_x1752, _ctx); /*82*/
    kk_std_core_types__list _x_x1753;
    kk_box_t _x_x1754;
    kk_std_num_ddouble__ddouble _x_x1755 = kk_std_num_ddouble__new_Ddouble(-0x1.5555555555555p-3, -0x1.5555555162e8fp-57, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1754 = kk_std_num_ddouble__ddouble_box(_x_x1755, _ctx); /*82*/
    kk_std_core_types__list _x_x1756;
    kk_box_t _x_x1757;
    kk_std_num_ddouble__ddouble _x_x1758 = kk_std_num_ddouble__new_Ddouble(0x1p0, -0x1.86fa265ab5ed7p-101, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1757 = kk_std_num_ddouble__ddouble_box(_x_x1758, _ctx); /*82*/
    _x_x1756 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x1757, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<82>*/
    _x_x1753 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x1754, _x_x1756, _ctx); /*list<82>*/
    _x_x1750 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x1751, _x_x1753, _ctx); /*list<82>*/
    _x_x1747 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x1748, _x_x1750, _ctx); /*list<82>*/
    _x_x1744 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x1745, _x_x1747, _ctx); /*list<82>*/
    _x_x1741 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x1742, _x_x1744, _ctx); /*list<82>*/
    kk_std_num_ddouble_ch_factors = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x1739, _x_x1741, _ctx); /*list<std/num/ddouble/ddouble>*/
  }
  {
    kk_std_core_types__list _x_x1759;
    kk_std_core_types__list _x_x1760;
    kk_box_t _x_x1761;
    kk_std_num_ddouble__ddouble _x_x1762 = kk_std_num_ddouble__new_Ddouble(0x1.8f8b83c69a60bp-3, -0x1.26d19b9ff8d82p-57, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1761 = kk_std_num_ddouble__ddouble_box(_x_x1762, _ctx); /*82*/
    kk_std_core_types__list _x_x1763;
    kk_box_t _x_x1764;
    kk_std_num_ddouble__ddouble _x_x1765 = kk_std_num_ddouble__new_Ddouble(0x1.87de2a6aea963p-2, -0x1.72cedd3d5a61p-57, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1764 = kk_std_num_ddouble__ddouble_box(_x_x1765, _ctx); /*82*/
    kk_std_core_types__list _x_x1766;
    kk_box_t _x_x1767;
    kk_std_num_ddouble__ddouble _x_x1768 = kk_std_num_ddouble__new_Ddouble(0x1.1c73b39ae68c8p-1, 0x1.b25dd267f66p-55, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1767 = kk_std_num_ddouble__ddouble_box(_x_x1768, _ctx); /*82*/
    kk_std_core_types__list _x_x1769;
    kk_box_t _x_x1770;
    kk_std_num_ddouble__ddouble _x_x1771 = kk_std_num_ddouble__new_Ddouble(0x1.6a09e667f3bcdp-1, -0x1.bdd3413b26455p-55, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1770 = kk_std_num_ddouble__ddouble_box(_x_x1771, _ctx); /*82*/
    kk_std_core_types__list _x_x1772;
    kk_box_t _x_x1773;
    kk_std_num_ddouble__ddouble _x_x1774 = kk_std_num_ddouble__new_Ddouble(0x1.a9b66290ea1a3p-1, 0x1.9f630e8b6dafp-60, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1773 = kk_std_num_ddouble__ddouble_box(_x_x1774, _ctx); /*82*/
    kk_std_core_types__list _x_x1775;
    kk_box_t _x_x1776;
    kk_std_num_ddouble__ddouble _x_x1777 = kk_std_num_ddouble__new_Ddouble(0x1.d906bcf328d46p-1, 0x1.457e610231ac4p-56, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1776 = kk_std_num_ddouble__ddouble_box(_x_x1777, _ctx); /*82*/
    kk_std_core_types__list _x_x1778;
    kk_box_t _x_x1779;
    kk_std_num_ddouble__ddouble _x_x1780 = kk_std_num_ddouble__new_Ddouble(0x1.f6297cff75cbp-1, 0x1.562172a361fd6p-56, _ctx); /*std/num/ddouble/ddouble*/
    _x_x1779 = kk_std_num_ddouble__ddouble_box(_x_x1780, _ctx); /*82*/
    kk_std_core_types__list _x_x1781 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_std_num_ddouble__ddouble_box(kk_std_num_ddouble_one, _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<82>*/
    _x_x1778 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x1779, _x_x1781, _ctx); /*list<82>*/
    _x_x1775 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x1776, _x_x1778, _ctx); /*list<82>*/
    _x_x1772 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x1773, _x_x1775, _ctx); /*list<82>*/
    _x_x1769 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x1770, _x_x1772, _ctx); /*list<82>*/
    _x_x1766 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x1767, _x_x1769, _ctx); /*list<82>*/
    _x_x1763 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x1764, _x_x1766, _ctx); /*list<82>*/
    _x_x1760 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x1761, _x_x1763, _ctx); /*list<82>*/
    _x_x1759 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_std_num_ddouble__ddouble_box(kk_std_num_ddouble_zero, _ctx), _x_x1760, _ctx); /*list<82>*/
    kk_std_num_ddouble_sin16_table = kk_std_core_vector_unvlist(_x_x1759, _ctx); /*vector<std/num/ddouble/ddouble>*/
  }
}

// termination
void kk_std_num_ddouble__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_vector_drop(kk_std_num_ddouble_sin16_table, _ctx);
  kk_std_core_types__list_drop(kk_std_num_ddouble_ch_factors, _ctx);
  kk_std_num_ddouble__ddouble_drop(kk_std_num_ddouble_one_half, _ctx);
  kk_std_core_types__list_drop(kk_std_num_ddouble_exp_factors, _ctx);
  kk_std_num_ddouble__ddouble_drop(kk_std_num_ddouble_two, _ctx);
  kk_integer_drop(kk_std_num_ddouble_dd_default_prec, _ctx);
  kk_integer_drop(kk_std_num_ddouble_dd_max_prec, _ctx);
  kk_std_num_ddouble__ddouble_drop(kk_std_num_ddouble_dd_neginf, _ctx);
  kk_std_num_ddouble__ddouble_drop(kk_std_num_ddouble_dd_posinf, _ctx);
  kk_std_num_ddouble__ddouble_drop(kk_std_num_ddouble_dd_true_min, _ctx);
  kk_std_num_ddouble__ddouble_drop(kk_std_num_ddouble_dd_min, _ctx);
  kk_std_num_ddouble__ddouble_drop(kk_std_num_ddouble_dd_max, _ctx);
  kk_std_num_ddouble__ddouble_drop(kk_std_num_ddouble_dd_epsilon8, _ctx);
  kk_std_num_ddouble__ddouble_drop(kk_std_num_ddouble_dd_epsilon, _ctx);
  kk_std_num_ddouble__ddouble_drop(kk_std_num_ddouble_dd_euler, _ctx);
  kk_std_num_ddouble__ddouble_drop(kk_std_num_ddouble_dd_sqrt12, _ctx);
  kk_std_num_ddouble__ddouble_drop(kk_std_num_ddouble_dd_sqrt2, _ctx);
  kk_std_num_ddouble__ddouble_drop(kk_std_num_ddouble_dd_log10e, _ctx);
  kk_std_num_ddouble__ddouble_drop(kk_std_num_ddouble_dd_log2e, _ctx);
  kk_std_num_ddouble__ddouble_drop(kk_std_num_ddouble_dd_ln10, _ctx);
  kk_std_num_ddouble__ddouble_drop(kk_std_num_ddouble_dd_ln2, _ctx);
  kk_std_num_ddouble__ddouble_drop(kk_std_num_ddouble_dd_e, _ctx);
  kk_std_num_ddouble__ddouble_drop(kk_std_num_ddouble_dd_pi34, _ctx);
  kk_std_num_ddouble__ddouble_drop(kk_std_num_ddouble_dd_pi16, _ctx);
  kk_std_num_ddouble__ddouble_drop(kk_std_num_ddouble_dd_pi4, _ctx);
  kk_std_num_ddouble__ddouble_drop(kk_std_num_ddouble_dd_pi2, _ctx);
  kk_std_num_ddouble__ddouble_drop(kk_std_num_ddouble_dd_twopi, _ctx);
  kk_std_num_ddouble__ddouble_drop(kk_std_num_ddouble_dd_pi, _ctx);
  kk_std_num_ddouble__ddouble_drop(kk_std_num_ddouble_zero, _ctx);
  kk_std_num_ddouble__ddouble_drop(kk_std_num_ddouble_ten, _ctx);
  kk_std_num_ddouble__ddouble_drop(kk_std_num_ddouble_one, _ctx);
  kk_integer_drop(kk_std_num_ddouble_minprecise, _ctx);
  kk_std_num_ddouble__ddouble_drop(kk_std_num_ddouble_dd_nan, _ctx);
  kk_integer_drop(kk_std_num_ddouble_maxprecise, _ctx);
  kk_std_text_parse__done(_ctx);
  kk_std_num_decimal__done(_ctx);
  kk_std_num_float64__done(_ctx);
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
