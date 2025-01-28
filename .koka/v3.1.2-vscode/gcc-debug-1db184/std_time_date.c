// Koka generated module: std/time/date, koka version: 3.1.2, platform: 64-bit
#include "std_time_date.h"

kk_std_time_date__clock kk_std_time_date_clock_fs__copy(kk_std_time_date__clock _this, kk_std_core_types__optional hours, kk_std_core_types__optional minutes, kk_std_core_types__optional seconds, kk_context_t* _ctx) { /* (clock, hours : ? int, minutes : ? int, seconds : ? std/num/ddouble/ddouble) -> clock */ 
  kk_integer_t _x_x175;
  if (kk_std_core_types__is_Optional(hours, _ctx)) {
    kk_box_t _box_x0 = hours._cons._Optional.value;
    kk_integer_t _uniq_hours_101 = kk_integer_unbox(_box_x0, _ctx);
    kk_integer_dup(_uniq_hours_101, _ctx);
    kk_std_core_types__optional_drop(hours, _ctx);
    _x_x175 = _uniq_hours_101; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(hours, _ctx);
    {
      struct kk_std_time_date_Clock* _con_x176 = kk_std_time_date__as_Clock(_this, _ctx);
      kk_std_num_ddouble__ddouble _pat_1_0 = _con_x176->seconds;
      kk_integer_t _x = _con_x176->hours;
      kk_integer_dup(_x, _ctx);
      _x_x175 = _x; /*int*/
    }
  }
  kk_integer_t _x_x177;
  if (kk_std_core_types__is_Optional(minutes, _ctx)) {
    kk_box_t _box_x1 = minutes._cons._Optional.value;
    kk_integer_t _uniq_minutes_108 = kk_integer_unbox(_box_x1, _ctx);
    kk_integer_dup(_uniq_minutes_108, _ctx);
    kk_std_core_types__optional_drop(minutes, _ctx);
    _x_x177 = _uniq_minutes_108; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(minutes, _ctx);
    {
      struct kk_std_time_date_Clock* _con_x178 = kk_std_time_date__as_Clock(_this, _ctx);
      kk_std_num_ddouble__ddouble _pat_1_2 = _con_x178->seconds;
      kk_integer_t _x_0 = _con_x178->minutes;
      kk_integer_dup(_x_0, _ctx);
      _x_x177 = _x_0; /*int*/
    }
  }
  kk_std_num_ddouble__ddouble _x_x179;
  if (kk_std_core_types__is_Optional(seconds, _ctx)) {
    kk_box_t _box_x2 = seconds._cons._Optional.value;
    kk_std_num_ddouble__ddouble _uniq_seconds_115 = kk_std_num_ddouble__ddouble_unbox(_box_x2, KK_BORROWED, _ctx);
    kk_std_core_types__optional_drop(seconds, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(2)), _ctx);
    _x_x179 = _uniq_seconds_115; /*std/num/ddouble/ddouble*/
  }
  else {
    kk_std_core_types__optional_drop(seconds, _ctx);
    {
      struct kk_std_time_date_Clock* _con_x180 = kk_std_time_date__as_Clock(_this, _ctx);
      kk_std_num_ddouble__ddouble _x_1 = _con_x180->seconds;
      kk_integer_t _pat_0_2 = _con_x180->hours;
      kk_integer_t _pat_1_3 = _con_x180->minutes;
      if kk_likely(kk_datatype_ptr_is_unique(_this, _ctx)) {
        kk_integer_drop(_pat_1_3, _ctx);
        kk_integer_drop(_pat_0_2, _ctx);
        kk_datatype_ptr_free(_this, _ctx);
      }
      else {
        kk_datatype_ptr_decref(_this, _ctx);
      }
      _x_x179 = _x_1; /*std/num/ddouble/ddouble*/
    }
  }
  return kk_std_time_date__new_Clock(kk_reuse_null, 0, _x_x175, _x_x177, _x_x179, _ctx);
}

kk_std_time_date__date kk_std_time_date_date_fs__copy(kk_std_time_date__date _this, kk_std_core_types__optional year, kk_std_core_types__optional month, kk_std_core_types__optional day, kk_context_t* _ctx) { /* (date, year : ? int, month : ? int, day : ? int) -> date */ 
  kk_integer_t _x_x181;
  if (kk_std_core_types__is_Optional(year, _ctx)) {
    kk_box_t _box_x3 = year._cons._Optional.value;
    kk_integer_t _uniq_year_155 = kk_integer_unbox(_box_x3, _ctx);
    kk_integer_dup(_uniq_year_155, _ctx);
    kk_std_core_types__optional_drop(year, _ctx);
    _x_x181 = _uniq_year_155; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(year, _ctx);
    {
      kk_integer_t _x = _this.year;
      kk_integer_dup(_x, _ctx);
      _x_x181 = _x; /*int*/
    }
  }
  kk_integer_t _x_x182;
  if (kk_std_core_types__is_Optional(month, _ctx)) {
    kk_box_t _box_x4 = month._cons._Optional.value;
    kk_integer_t _uniq_month_162 = kk_integer_unbox(_box_x4, _ctx);
    kk_integer_dup(_uniq_month_162, _ctx);
    kk_std_core_types__optional_drop(month, _ctx);
    _x_x182 = _uniq_month_162; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(month, _ctx);
    {
      kk_integer_t _x_0 = _this.month;
      kk_integer_dup(_x_0, _ctx);
      _x_x182 = _x_0; /*int*/
    }
  }
  kk_integer_t _x_x183;
  if (kk_std_core_types__is_Optional(day, _ctx)) {
    kk_box_t _box_x5 = day._cons._Optional.value;
    kk_integer_t _uniq_day_169 = kk_integer_unbox(_box_x5, _ctx);
    kk_integer_dup(_uniq_day_169, _ctx);
    kk_std_core_types__optional_drop(day, _ctx);
    kk_std_time_date__date_drop(_this, _ctx);
    _x_x183 = _uniq_day_169; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(day, _ctx);
    {
      kk_integer_t _x_1 = _this.day;
      kk_integer_dup(_x_1, _ctx);
      kk_std_time_date__date_drop(_this, _ctx);
      _x_x183 = _x_1; /*int*/
    }
  }
  return kk_std_time_date__new_Date(_x_x181, _x_x182, _x_x183, _ctx);
}
 
// Convert a `:weekday` to an `:int` using the ISO definition which starts at Monday as 1,
// up to Sunday as 7.

kk_integer_t kk_std_time_date_int(kk_std_time_date__weekday wd, kk_context_t* _ctx) { /* (wd : weekday) -> int */ 
  if (kk_std_time_date__is_Mon(wd, _ctx)) {
    return kk_integer_from_small(1);
  }
  if (kk_std_time_date__is_Tue(wd, _ctx)) {
    return kk_integer_from_small(2);
  }
  if (kk_std_time_date__is_Wed(wd, _ctx)) {
    return kk_integer_from_small(3);
  }
  if (kk_std_time_date__is_Thu(wd, _ctx)) {
    return kk_integer_from_small(4);
  }
  if (kk_std_time_date__is_Fri(wd, _ctx)) {
    return kk_integer_from_small(5);
  }
  if (kk_std_time_date__is_Sat(wd, _ctx)) {
    return kk_integer_from_small(6);
  }
  {
    return kk_integer_from_small(7);
  }
}
 
// Add two dates field-wise together.

kk_std_time_date__date kk_std_time_date__lp__plus__rp_(kk_std_time_date__date d1, kk_std_time_date__date d2, kk_context_t* _ctx) { /* (d1 : date, d2 : date) -> date */ 
  kk_integer_t _x_x185;
  kk_integer_t _x_x186;
  {
    kk_integer_t _x = d1.year;
    kk_integer_dup(_x, _ctx);
    _x_x186 = _x; /*int*/
  }
  kk_integer_t _x_x187;
  {
    kk_integer_t _x_0 = d2.year;
    kk_integer_dup(_x_0, _ctx);
    _x_x187 = _x_0; /*int*/
  }
  _x_x185 = kk_integer_add(_x_x186,_x_x187,kk_context()); /*int*/
  kk_integer_t _x_x188;
  kk_integer_t _x_x189;
  {
    kk_integer_t _x_1 = d1.month;
    kk_integer_dup(_x_1, _ctx);
    _x_x189 = _x_1; /*int*/
  }
  kk_integer_t _x_x190;
  {
    kk_integer_t _x_2 = d2.month;
    kk_integer_dup(_x_2, _ctx);
    _x_x190 = _x_2; /*int*/
  }
  _x_x188 = kk_integer_add(_x_x189,_x_x190,kk_context()); /*int*/
  kk_integer_t _x_x191;
  kk_integer_t _x_x192;
  {
    kk_integer_t _x_3 = d1.day;
    kk_integer_dup(_x_3, _ctx);
    kk_std_time_date__date_drop(d1, _ctx);
    _x_x192 = _x_3; /*int*/
  }
  kk_integer_t _x_x193;
  {
    kk_integer_t _x_4 = d2.day;
    kk_integer_dup(_x_4, _ctx);
    kk_std_time_date__date_drop(d2, _ctx);
    _x_x193 = _x_4; /*int*/
  }
  _x_x191 = kk_integer_add(_x_x192,_x_x193,kk_context()); /*int*/
  return kk_std_time_date__new_Date(_x_x185, _x_x188, _x_x191, _ctx);
}
 
// Compare two dates by fields.

kk_std_core_types__order kk_std_time_date_cmp(kk_std_time_date__date d, kk_std_time_date__date e, kk_context_t* _ctx) { /* (d : date, e : date) -> order */ 
  bool _match_x134;
  kk_integer_t _brw_x156;
  {
    kk_integer_t _x = d.year;
    kk_integer_dup(_x, _ctx);
    _brw_x156 = _x; /*int*/
  }
  kk_integer_t _brw_x155;
  {
    kk_integer_t _x_0 = e.year;
    kk_integer_dup(_x_0, _ctx);
    _brw_x155 = _x_0; /*int*/
  }
  bool _brw_x157 = kk_integer_eq_borrow(_brw_x156,_brw_x155,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x156, _ctx);
  kk_integer_drop(_brw_x155, _ctx);
  _match_x134 = _brw_x157; /*bool*/
  if (_match_x134) {
    bool _match_x139;
    kk_integer_t _brw_x153;
    {
      kk_integer_t _x_1 = d.month;
      kk_integer_dup(_x_1, _ctx);
      _brw_x153 = _x_1; /*int*/
    }
    kk_integer_t _brw_x152;
    {
      kk_integer_t _x_2 = e.month;
      kk_integer_dup(_x_2, _ctx);
      _brw_x152 = _x_2; /*int*/
    }
    bool _brw_x154 = kk_integer_eq_borrow(_brw_x153,_brw_x152,kk_context()); /*bool*/;
    kk_integer_drop(_brw_x153, _ctx);
    kk_integer_drop(_brw_x152, _ctx);
    _match_x139 = _brw_x154; /*bool*/
    if (_match_x139) {
      bool _match_x144;
      kk_integer_t _brw_x150;
      {
        kk_integer_t _x_3 = d.day;
        kk_integer_dup(_x_3, _ctx);
        _brw_x150 = _x_3; /*int*/
      }
      kk_integer_t _brw_x149;
      {
        kk_integer_t _x_4 = e.day;
        kk_integer_dup(_x_4, _ctx);
        _brw_x149 = _x_4; /*int*/
      }
      bool _brw_x151 = kk_integer_eq_borrow(_brw_x150,_brw_x149,kk_context()); /*bool*/;
      kk_integer_drop(_brw_x150, _ctx);
      kk_integer_drop(_brw_x149, _ctx);
      _match_x144 = _brw_x151; /*bool*/
      if (_match_x144) {
        kk_std_time_date__date_drop(e, _ctx);
        kk_std_time_date__date_drop(d, _ctx);
        return kk_std_core_types__new_Eq(_ctx);
      }
      {
        bool _match_x145;
        kk_integer_t _brw_x147;
        {
          kk_integer_t _x_3_0 = d.day;
          kk_integer_dup(_x_3_0, _ctx);
          kk_std_time_date__date_drop(d, _ctx);
          _brw_x147 = _x_3_0; /*int*/
        }
        kk_integer_t _brw_x146;
        {
          kk_integer_t _x_4_0 = e.day;
          kk_integer_dup(_x_4_0, _ctx);
          kk_std_time_date__date_drop(e, _ctx);
          _brw_x146 = _x_4_0; /*int*/
        }
        bool _brw_x148 = kk_integer_gt_borrow(_brw_x147,_brw_x146,kk_context()); /*bool*/;
        kk_integer_drop(_brw_x147, _ctx);
        kk_integer_drop(_brw_x146, _ctx);
        _match_x145 = _brw_x148; /*bool*/
        if (_match_x145) {
          return kk_std_core_types__new_Gt(_ctx);
        }
        {
          return kk_std_core_types__new_Lt(_ctx);
        }
      }
    }
    {
      bool _match_x140;
      kk_integer_t _brw_x142;
      {
        kk_integer_t _x_1_0 = d.month;
        kk_integer_dup(_x_1_0, _ctx);
        kk_std_time_date__date_drop(d, _ctx);
        _brw_x142 = _x_1_0; /*int*/
      }
      kk_integer_t _brw_x141;
      {
        kk_integer_t _x_2_0 = e.month;
        kk_integer_dup(_x_2_0, _ctx);
        kk_std_time_date__date_drop(e, _ctx);
        _brw_x141 = _x_2_0; /*int*/
      }
      bool _brw_x143 = kk_integer_gt_borrow(_brw_x142,_brw_x141,kk_context()); /*bool*/;
      kk_integer_drop(_brw_x142, _ctx);
      kk_integer_drop(_brw_x141, _ctx);
      _match_x140 = _brw_x143; /*bool*/
      if (_match_x140) {
        return kk_std_core_types__new_Gt(_ctx);
      }
      {
        return kk_std_core_types__new_Lt(_ctx);
      }
    }
  }
  {
    bool _match_x135;
    kk_integer_t _brw_x137;
    {
      kk_integer_t _x_5 = d.year;
      kk_integer_dup(_x_5, _ctx);
      kk_std_time_date__date_drop(d, _ctx);
      _brw_x137 = _x_5; /*int*/
    }
    kk_integer_t _brw_x136;
    {
      kk_integer_t _x_0_0 = e.year;
      kk_integer_dup(_x_0_0, _ctx);
      kk_std_time_date__date_drop(e, _ctx);
      _brw_x136 = _x_0_0; /*int*/
    }
    bool _brw_x138 = kk_integer_gt_borrow(_brw_x137,_brw_x136,kk_context()); /*bool*/;
    kk_integer_drop(_brw_x137, _ctx);
    kk_integer_drop(_brw_x136, _ctx);
    _match_x135 = _brw_x138; /*bool*/
    if (_match_x135) {
      return kk_std_core_types__new_Gt(_ctx);
    }
    {
      return kk_std_core_types__new_Lt(_ctx);
    }
  }
}
 
// Return the total seconds of a `:clock` assuming 60 seconds per
// minute and 60 minutes per hour.

kk_std_num_ddouble__ddouble kk_std_time_date_total_seconds(kk_std_time_date__clock c, kk_context_t* _ctx) { /* (c : clock) -> std/num/ddouble/ddouble */ 
  kk_integer_t x_10031;
  kk_integer_t _x_x195;
  {
    struct kk_std_time_date_Clock* _con_x196 = kk_std_time_date__as_Clock(c, _ctx);
    kk_std_num_ddouble__ddouble _pat_1 = _con_x196->seconds;
    kk_integer_t _x = _con_x196->hours;
    kk_integer_dup(_x, _ctx);
    _x_x195 = _x; /*int*/
  }
  x_10031 = kk_integer_mul(_x_x195,(kk_integer_from_small(60)),kk_context()); /*int*/
  kk_integer_t i_10030;
  kk_integer_t _x_x197;
  kk_integer_t _x_x198;
  {
    struct kk_std_time_date_Clock* _con_x199 = kk_std_time_date__as_Clock(c, _ctx);
    kk_std_num_ddouble__ddouble _pat_1_0 = _con_x199->seconds;
    kk_integer_t _x_0 = _con_x199->minutes;
    kk_integer_dup(_x_0, _ctx);
    _x_x198 = _x_0; /*int*/
  }
  _x_x197 = kk_integer_add(x_10031,_x_x198,kk_context()); /*int*/
  i_10030 = kk_integer_mul(_x_x197,(kk_integer_from_small(60)),kk_context()); /*int*/
  kk_std_num_ddouble__ddouble _x_x200 = kk_std_num_ddouble_ddouble_int_exp(i_10030, kk_integer_from_small(0), _ctx); /*std/num/ddouble/ddouble*/
  kk_std_num_ddouble__ddouble _x_x201;
  {
    struct kk_std_time_date_Clock* _con_x202 = kk_std_time_date__as_Clock(c, _ctx);
    kk_std_num_ddouble__ddouble _x_1 = _con_x202->seconds;
    kk_integer_t _pat_0_1 = _con_x202->hours;
    kk_integer_t _pat_1_1 = _con_x202->minutes;
    if kk_likely(kk_datatype_ptr_is_unique(c, _ctx)) {
      kk_integer_drop(_pat_1_1, _ctx);
      kk_integer_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(c, _ctx);
    }
    else {
      kk_datatype_ptr_decref(c, _ctx);
    }
    _x_x201 = _x_1; /*std/num/ddouble/ddouble*/
  }
  return kk_std_num_ddouble__lp__plus__rp_(_x_x200, _x_x201, _ctx);
}
 
// Convert a weekday number to a `:weekday`(starting at Monday (=1) up to Sunday (=7)).
// Takes the integer `i - 1` modulo 7, so `0` or `14` also become Sunday etc.

kk_std_time_date__weekday kk_std_time_date_weekday(kk_integer_t i, kk_context_t* _ctx) { /* (i : int) -> weekday */ 
  kk_integer_t d;
  kk_integer_t _x_x203 = kk_integer_add_small_const(i, -1, _ctx); /*int*/
  d = kk_integer_mod(_x_x203,(kk_integer_from_small(7)),kk_context()); /*int*/
  bool _match_x127 = kk_integer_eq_borrow(d,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x127) {
    kk_integer_drop(d, _ctx);
    return kk_std_time_date__new_Mon(_ctx);
  }
  {
    bool _match_x128 = kk_integer_eq_borrow(d,(kk_integer_from_small(1)),kk_context()); /*bool*/;
    if (_match_x128) {
      kk_integer_drop(d, _ctx);
      return kk_std_time_date__new_Tue(_ctx);
    }
    {
      bool _match_x129 = kk_integer_eq_borrow(d,(kk_integer_from_small(2)),kk_context()); /*bool*/;
      if (_match_x129) {
        kk_integer_drop(d, _ctx);
        return kk_std_time_date__new_Wed(_ctx);
      }
      {
        bool _match_x130 = kk_integer_eq_borrow(d,(kk_integer_from_small(3)),kk_context()); /*bool*/;
        if (_match_x130) {
          kk_integer_drop(d, _ctx);
          return kk_std_time_date__new_Thu(_ctx);
        }
        {
          bool _match_x131 = kk_integer_eq_borrow(d,(kk_integer_from_small(4)),kk_context()); /*bool*/;
          if (_match_x131) {
            kk_integer_drop(d, _ctx);
            return kk_std_time_date__new_Fri(_ctx);
          }
          {
            bool _match_x132;
            bool _brw_x133 = kk_integer_eq_borrow(d,(kk_integer_from_small(5)),kk_context()); /*bool*/;
            kk_integer_drop(d, _ctx);
            _match_x132 = _brw_x133; /*bool*/
            if (_match_x132) {
              return kk_std_time_date__new_Sat(_ctx);
            }
            {
              return kk_std_time_date__new_Sun(_ctx);
            }
          }
        }
      }
    }
  }
}
 
// Add two clock together.

kk_std_time_date__clock kk_std_time_date_clock_fs__lp__plus__rp_(kk_std_time_date__clock c, kk_std_time_date__clock d, kk_context_t* _ctx) { /* (c : clock, d : clock) -> clock */ 
  kk_integer_t _x_x204;
  kk_integer_t _x_x205;
  {
    struct kk_std_time_date_Clock* _con_x206 = kk_std_time_date__as_Clock(c, _ctx);
    kk_std_num_ddouble__ddouble _pat_1 = _con_x206->seconds;
    kk_integer_t _x = _con_x206->hours;
    kk_integer_dup(_x, _ctx);
    _x_x205 = _x; /*int*/
  }
  kk_integer_t _x_x207;
  {
    struct kk_std_time_date_Clock* _con_x208 = kk_std_time_date__as_Clock(d, _ctx);
    kk_std_num_ddouble__ddouble _pat_1_0 = _con_x208->seconds;
    kk_integer_t _x_0 = _con_x208->hours;
    kk_integer_dup(_x_0, _ctx);
    _x_x207 = _x_0; /*int*/
  }
  _x_x204 = kk_integer_add(_x_x205,_x_x207,kk_context()); /*int*/
  kk_integer_t _x_x209;
  kk_integer_t _x_x210;
  {
    struct kk_std_time_date_Clock* _con_x211 = kk_std_time_date__as_Clock(c, _ctx);
    kk_std_num_ddouble__ddouble _pat_1_1 = _con_x211->seconds;
    kk_integer_t _x_1 = _con_x211->minutes;
    kk_integer_dup(_x_1, _ctx);
    _x_x210 = _x_1; /*int*/
  }
  kk_integer_t _x_x212;
  {
    struct kk_std_time_date_Clock* _con_x213 = kk_std_time_date__as_Clock(d, _ctx);
    kk_std_num_ddouble__ddouble _pat_1_2 = _con_x213->seconds;
    kk_integer_t _x_2 = _con_x213->minutes;
    kk_integer_dup(_x_2, _ctx);
    _x_x212 = _x_2; /*int*/
  }
  _x_x209 = kk_integer_add(_x_x210,_x_x212,kk_context()); /*int*/
  kk_std_num_ddouble__ddouble _x_x214;
  kk_std_num_ddouble__ddouble _x_x215;
  {
    struct kk_std_time_date_Clock* _con_x216 = kk_std_time_date__as_Clock(c, _ctx);
    kk_std_num_ddouble__ddouble _x_3 = _con_x216->seconds;
    kk_integer_t _pat_0_3 = _con_x216->hours;
    kk_integer_t _pat_1_3 = _con_x216->minutes;
    if kk_likely(kk_datatype_ptr_is_unique(c, _ctx)) {
      kk_integer_drop(_pat_1_3, _ctx);
      kk_integer_drop(_pat_0_3, _ctx);
      kk_datatype_ptr_free(c, _ctx);
    }
    else {
      kk_datatype_ptr_decref(c, _ctx);
    }
    _x_x215 = _x_3; /*std/num/ddouble/ddouble*/
  }
  kk_std_num_ddouble__ddouble _x_x217;
  {
    struct kk_std_time_date_Clock* _con_x218 = kk_std_time_date__as_Clock(d, _ctx);
    kk_std_num_ddouble__ddouble _x_4 = _con_x218->seconds;
    kk_integer_t _pat_0_4 = _con_x218->hours;
    kk_integer_t _pat_1_4 = _con_x218->minutes;
    if kk_likely(kk_datatype_ptr_is_unique(d, _ctx)) {
      kk_integer_drop(_pat_1_4, _ctx);
      kk_integer_drop(_pat_0_4, _ctx);
      kk_datatype_ptr_free(d, _ctx);
    }
    else {
      kk_datatype_ptr_decref(d, _ctx);
    }
    _x_x217 = _x_4; /*std/num/ddouble/ddouble*/
  }
  _x_x214 = kk_std_num_ddouble__lp__plus__rp_(_x_x215, _x_x217, _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_time_date__new_Clock(kk_reuse_null, 0, _x_x204, _x_x209, _x_x214, _ctx);
}
 
// Compare weekdays.

kk_std_core_types__order kk_std_time_date_weekday_fs_cmp(kk_std_time_date__weekday wd1, kk_std_time_date__weekday wd2, kk_context_t* _ctx) { /* (wd1 : weekday, wd2 : weekday) -> order */ 
  kk_integer_t x_10056 = kk_std_time_date_int(wd1, _ctx); /*int*/;
  kk_integer_t y_10057 = kk_std_time_date_int(wd2, _ctx); /*int*/;
  bool _match_x123 = kk_integer_eq_borrow(x_10056,y_10057,kk_context()); /*bool*/;
  if (_match_x123) {
    kk_integer_drop(y_10057, _ctx);
    kk_integer_drop(x_10056, _ctx);
    return kk_std_core_types__new_Eq(_ctx);
  }
  {
    bool _match_x124;
    bool _brw_x125 = kk_integer_gt_borrow(x_10056,y_10057,kk_context()); /*bool*/;
    kk_integer_drop(x_10056, _ctx);
    kk_integer_drop(y_10057, _ctx);
    _match_x124 = _brw_x125; /*bool*/
    if (_match_x124) {
      return kk_std_core_types__new_Gt(_ctx);
    }
    {
      return kk_std_core_types__new_Lt(_ctx);
    }
  }
}
 
// The zero clock

kk_std_time_date__clock kk_std_time_date_clock0;
 
// Is this a zero clock?

bool kk_std_time_date_is_zero(kk_std_time_date__clock c, kk_context_t* _ctx) { /* (c : clock) -> bool */ 
  bool _match_x117;
  kk_integer_t _brw_x121;
  {
    struct kk_std_time_date_Clock* _con_x235 = kk_std_time_date__as_Clock(c, _ctx);
    kk_std_num_ddouble__ddouble _pat_1 = _con_x235->seconds;
    kk_integer_t _x = _con_x235->hours;
    kk_integer_dup(_x, _ctx);
    _brw_x121 = _x; /*int*/
  }
  bool _brw_x122 = kk_integer_is_zero_borrow(_brw_x121); /*bool*/;
  kk_integer_drop(_brw_x121, _ctx);
  _match_x117 = _brw_x122; /*bool*/
  if (_match_x117) {
    bool _match_x118;
    kk_integer_t _brw_x119;
    {
      struct kk_std_time_date_Clock* _con_x236 = kk_std_time_date__as_Clock(c, _ctx);
      kk_std_num_ddouble__ddouble _pat_1_0 = _con_x236->seconds;
      kk_integer_t _x_0 = _con_x236->minutes;
      kk_integer_dup(_x_0, _ctx);
      _brw_x119 = _x_0; /*int*/
    }
    bool _brw_x120 = kk_integer_is_zero_borrow(_brw_x119); /*bool*/;
    kk_integer_drop(_brw_x119, _ctx);
    _match_x118 = _brw_x120; /*bool*/
    if (_match_x118) {
      double _x_x237;
      {
        struct kk_std_time_date_Clock* _con_x238 = kk_std_time_date__as_Clock(c, _ctx);
        kk_std_num_ddouble__ddouble _x_2 = _con_x238->seconds;
        kk_integer_t _pat_0_3 = _con_x238->hours;
        kk_integer_t _pat_1_1 = _con_x238->minutes;
        if kk_likely(kk_datatype_ptr_is_unique(c, _ctx)) {
          kk_integer_drop(_pat_1_1, _ctx);
          kk_integer_drop(_pat_0_3, _ctx);
          kk_datatype_ptr_free(c, _ctx);
        }
        else {
          kk_datatype_ptr_decref(c, _ctx);
        }
        {
          double _x_1 = _x_2.hi;
          _x_x237 = _x_1; /*float64*/
        }
      }
      return (_x_x237 == (0x0p+0));
    }
    {
      kk_datatype_ptr_dropn(c, (KK_I32(2)), _ctx);
      return false;
    }
  }
  {
    kk_datatype_ptr_dropn(c, (KK_I32(2)), _ctx);
    return false;
  }
}
 
// Return the fraction of the seconds as milli-seconds (10^-3^).

kk_integer_t kk_std_time_date_milli_seconds(kk_std_time_date__clock c, kk_context_t* _ctx) { /* (c : clock) -> int */ 
  kk_std_num_ddouble__ddouble x_10063;
  kk_std_num_ddouble__ddouble _x_x239;
  {
    struct kk_std_time_date_Clock* _con_x240 = kk_std_time_date__as_Clock(c, _ctx);
    kk_std_num_ddouble__ddouble _x_0 = _con_x240->seconds;
    kk_integer_t _pat_0_1 = _con_x240->hours;
    kk_integer_t _pat_1_0 = _con_x240->minutes;
    if kk_likely(kk_datatype_ptr_is_unique(c, _ctx)) {
      kk_integer_drop(_pat_1_0, _ctx);
      kk_integer_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(c, _ctx);
    }
    else {
      kk_datatype_ptr_decref(c, _ctx);
    }
    _x_x239 = _x_0; /*std/num/ddouble/ddouble*/
  }
  x_10063 = kk_std_num_ddouble_fraction(_x_x239, _ctx); /*std/num/ddouble/ddouble*/
  double d_10062;
  double _x_x241;
  {
    double _x = x_10063.hi;
    _x_x241 = _x; /*float64*/
  }
  d_10062 = (_x_x241 * (0x1.f4p9)); /*float64*/
  double _x_x242;
  bool _match_x116 = (d_10062 >= (0x0p+0)); /*bool*/;
  if (_match_x116) {
    _x_x242 = floor(d_10062); /*float64*/
  }
  else {
    _x_x242 = ceil(d_10062); /*float64*/
  }
  return kk_integer_from_double(_x_x242,kk_context());
}
 
// Return the fraction of seconds as nano-seconds ((10^-9^).

kk_integer_t kk_std_time_date_nano_seconds(kk_std_time_date__clock c, kk_context_t* _ctx) { /* (c : clock) -> int */ 
  kk_std_num_ddouble__ddouble x_10066;
  kk_std_num_ddouble__ddouble _x_x243;
  {
    struct kk_std_time_date_Clock* _con_x244 = kk_std_time_date__as_Clock(c, _ctx);
    kk_std_num_ddouble__ddouble _x_0 = _con_x244->seconds;
    kk_integer_t _pat_0_1 = _con_x244->hours;
    kk_integer_t _pat_1_0 = _con_x244->minutes;
    if kk_likely(kk_datatype_ptr_is_unique(c, _ctx)) {
      kk_integer_drop(_pat_1_0, _ctx);
      kk_integer_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(c, _ctx);
    }
    else {
      kk_datatype_ptr_decref(c, _ctx);
    }
    _x_x243 = _x_0; /*std/num/ddouble/ddouble*/
  }
  x_10066 = kk_std_num_ddouble_fraction(_x_x243, _ctx); /*std/num/ddouble/ddouble*/
  double d_10065;
  double _x_x245;
  {
    double _x = x_10066.hi;
    _x_x245 = _x; /*float64*/
  }
  d_10065 = (_x_x245 * (0x1.dcd65p29)); /*float64*/
  double _x_x246;
  bool _match_x115 = (d_10065 >= (0x0p+0)); /*bool*/;
  if (_match_x115) {
    _x_x246 = floor(d_10065); /*float64*/
  }
  else {
    _x_x246 = ceil(d_10065); /*float64*/
  }
  return kk_integer_from_double(_x_x246,kk_context());
}
 
// Round a clock time to a certain number of digits precision (of the fraction of seconds) (default `9`, nano seconds).

kk_std_time_date__clock kk_std_time_date_round_to_prec(kk_std_time_date__clock c, kk_std_core_types__optional prec, kk_context_t* _ctx) { /* (c : clock, prec : ? int) -> clock */ 
  kk_integer_t _x_x247;
  {
    struct kk_std_time_date_Clock* _con_x248 = kk_std_time_date__as_Clock(c, _ctx);
    kk_std_num_ddouble__ddouble _pat_1 = _con_x248->seconds;
    kk_integer_t _x = _con_x248->hours;
    kk_integer_dup(_x, _ctx);
    _x_x247 = _x; /*int*/
  }
  kk_integer_t _x_x249;
  {
    struct kk_std_time_date_Clock* _con_x250 = kk_std_time_date__as_Clock(c, _ctx);
    kk_std_num_ddouble__ddouble _pat_1_0 = _con_x250->seconds;
    kk_integer_t _x_0 = _con_x250->minutes;
    kk_integer_dup(_x_0, _ctx);
    _x_x249 = _x_0; /*int*/
  }
  kk_std_num_ddouble__ddouble _x_x251;
  kk_std_num_ddouble__ddouble _x_x252;
  {
    struct kk_std_time_date_Clock* _con_x253 = kk_std_time_date__as_Clock(c, _ctx);
    kk_std_num_ddouble__ddouble _x_1 = _con_x253->seconds;
    kk_integer_t _pat_0_1 = _con_x253->hours;
    kk_integer_t _pat_1_1 = _con_x253->minutes;
    if kk_likely(kk_datatype_ptr_is_unique(c, _ctx)) {
      kk_integer_drop(_pat_1_1, _ctx);
      kk_integer_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(c, _ctx);
    }
    else {
      kk_datatype_ptr_decref(c, _ctx);
    }
    _x_x252 = _x_1; /*std/num/ddouble/ddouble*/
  }
  kk_integer_t _x_x254;
  if (kk_std_core_types__is_Optional(prec, _ctx)) {
    kk_box_t _box_x6 = prec._cons._Optional.value;
    kk_integer_t _uniq_prec_1547 = kk_integer_unbox(_box_x6, _ctx);
    kk_integer_dup(_uniq_prec_1547, _ctx);
    kk_std_core_types__optional_drop(prec, _ctx);
    _x_x254 = _uniq_prec_1547; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(prec, _ctx);
    _x_x254 = kk_integer_from_small(9); /*int*/
  }
  _x_x251 = kk_std_num_ddouble_round_to_prec(_x_x252, _x_x254, _ctx); /*std/num/ddouble/ddouble*/
  return kk_std_time_date__new_Clock(kk_reuse_null, 0, _x_x247, _x_x249, _x_x251, _ctx);
}
 
// Show seconds

kk_string_t kk_std_time_date_show_seconds(kk_std_num_ddouble__ddouble secs, kk_std_core_types__optional max_prec, kk_std_core_types__optional secs_width, kk_std_core_types__optional unit, kk_context_t* _ctx) { /* (secs : std/num/ddouble/ddouble, max-prec : ? int, secs-width : ? int, unit : ? string) -> string */ 
  kk_integer_t _b_x8_9;
  kk_integer_t _x_x255;
  kk_integer_t _x_x256;
  if (kk_std_core_types__is_Optional(max_prec, _ctx)) {
    kk_box_t _box_x7 = max_prec._cons._Optional.value;
    kk_integer_t _uniq_max_prec_1575 = kk_integer_unbox(_box_x7, _ctx);
    kk_integer_dup(_uniq_max_prec_1575, _ctx);
    kk_std_core_types__optional_drop(max_prec, _ctx);
    _x_x256 = _uniq_max_prec_1575; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(max_prec, _ctx);
    _x_x256 = kk_integer_from_small(9); /*int*/
  }
  _x_x255 = kk_integer_abs(_x_x256,kk_context()); /*int*/
  _b_x8_9 = kk_integer_neg(_x_x255,kk_context()); /*int*/
  kk_string_t s;
  kk_std_core_types__optional _x_x257 = kk_std_core_types__new_Optional(kk_integer_box(_b_x8_9, _ctx), _ctx); /*? 7*/
  s = kk_std_num_ddouble_show_fixed(secs, _x_x257, _ctx); /*string*/
  kk_std_core_types__maybe _match_x108;
  kk_string_t _x_x258 = kk_string_dup(s, _ctx); /*string*/
  kk_string_t _x_x259;
  kk_define_string_literal(, _s_x260, 1, ".", _ctx)
  _x_x259 = kk_string_dup(_s_x260, _ctx); /*string*/
  _match_x108 = kk_std_core_sslice_find(_x_x258, _x_x259, _ctx); /*maybe<sslice/sslice>*/
  if (kk_std_core_types__is_Nothing(_match_x108, _ctx)) {
    kk_std_core_types__optional_drop(unit, _ctx);
    kk_integer_t _brw_x113;
    if (kk_std_core_types__is_Optional(secs_width, _ctx)) {
      kk_box_t _box_x10 = secs_width._cons._Optional.value;
      kk_integer_t _uniq_secs_width_1579 = kk_integer_unbox(_box_x10, _ctx);
      kk_integer_dup(_uniq_secs_width_1579, _ctx);
      kk_std_core_types__optional_drop(secs_width, _ctx);
      _brw_x113 = _uniq_secs_width_1579; /*int*/
    }
    else {
      kk_std_core_types__optional_drop(secs_width, _ctx);
      _brw_x113 = kk_integer_from_small(1); /*int*/
    }
    kk_string_t _brw_x114;
    kk_std_core_types__optional _x_x261 = kk_std_core_types__new_Optional(kk_char_box('0', _ctx), _ctx); /*? 7*/
    _brw_x114 = kk_std_core_string_pad_left(s, _brw_x113, _x_x261, _ctx); /*string*/
    kk_integer_drop(_brw_x113, _ctx);
    return _brw_x114;
  }
  {
    kk_box_t _box_x12 = _match_x108._cons.Just.value;
    kk_std_core_sslice__sslice dot = kk_std_core_sslice__sslice_unbox(_box_x12, KK_BORROWED, _ctx);
    kk_string_drop(s, _ctx);
    kk_std_core_sslice__sslice_dup(dot, _ctx);
    kk_std_core_types__maybe_drop(_match_x108, _ctx);
    kk_string_t f;
    kk_std_core_sslice__sslice _x_x262;
    kk_std_core_sslice__sslice _x_x263 = kk_std_core_sslice__sslice_dup(dot, _ctx); /*sslice/sslice*/
    _x_x262 = kk_std_core_sslice_after(_x_x263, _ctx); /*sslice/sslice*/
    f = kk_std_core_sslice_string(_x_x262, _ctx); /*string*/
    kk_integer_t x_10071;
    kk_string_t _x_x264 = kk_string_dup(f, _ctx); /*string*/
    x_10071 = kk_std_core_string_count(_x_x264, _ctx); /*int*/
    kk_integer_t len3;
    kk_integer_t _x_x265;
    kk_integer_t _x_x266 = kk_integer_add_small_const(x_10071, 2, _ctx); /*int*/
    _x_x265 = kk_integer_div(_x_x266,(kk_integer_from_small(3)),kk_context()); /*int*/
    len3 = kk_integer_mul(_x_x265,(kk_integer_from_small(3)),kk_context()); /*int*/
    kk_char_t _b_x14_18 = '0'; /*char*/;
    kk_string_t _x_x267;
    kk_string_t _own_x111;
    kk_std_core_sslice__sslice _x_x268;
    {
      kk_string_t s_0 = dot.str;
      kk_integer_t start = dot.start;
      kk_string_dup(s_0, _ctx);
      kk_integer_dup(start, _ctx);
      kk_std_core_sslice__sslice_drop(dot, _ctx);
      _x_x268 = kk_std_core_sslice__new_Sslice(s_0, kk_integer_from_small(0), start, _ctx); /*sslice/sslice*/
    }
    _own_x111 = kk_std_core_sslice_string(_x_x268, _ctx); /*string*/
    kk_integer_t _brw_x110;
    if (kk_std_core_types__is_Optional(secs_width, _ctx)) {
      kk_box_t _box_x13 = secs_width._cons._Optional.value;
      kk_integer_t _uniq_secs_width_1579_0 = kk_integer_unbox(_box_x13, _ctx);
      kk_integer_dup(_uniq_secs_width_1579_0, _ctx);
      kk_std_core_types__optional_drop(secs_width, _ctx);
      _brw_x110 = _uniq_secs_width_1579_0; /*int*/
    }
    else {
      kk_std_core_types__optional_drop(secs_width, _ctx);
      _brw_x110 = kk_integer_from_small(1); /*int*/
    }
    kk_string_t _brw_x112;
    kk_std_core_types__optional _x_x269 = kk_std_core_types__new_Optional(kk_char_box(_b_x14_18, _ctx), _ctx); /*? 7*/
    _brw_x112 = kk_std_core_string_pad_left(_own_x111, _brw_x110, _x_x269, _ctx); /*string*/
    kk_integer_drop(_brw_x110, _ctx);
    _x_x267 = _brw_x112; /*string*/
    kk_string_t _x_x270;
    kk_string_t _x_x271;
    kk_define_string_literal(, _s_x272, 1, ".", _ctx)
    _x_x271 = kk_string_dup(_s_x272, _ctx); /*string*/
    kk_string_t _x_x273;
    kk_char_t _b_x15_19 = '0'; /*char*/;
    kk_string_t _x_x274;
    kk_string_t _brw_x109;
    kk_std_core_types__optional _x_x275 = kk_std_core_types__new_Optional(kk_char_box(_b_x15_19, _ctx), _ctx); /*? 7*/
    _brw_x109 = kk_std_core_string_pad_right(f, len3, _x_x275, _ctx); /*string*/
    kk_integer_drop(len3, _ctx);
    _x_x274 = _brw_x109; /*string*/
    kk_string_t _x_x276;
    if (kk_std_core_types__is_Optional(unit, _ctx)) {
      kk_box_t _box_x16 = unit._cons._Optional.value;
      kk_string_t _uniq_unit_1583 = kk_string_unbox(_box_x16);
      kk_string_dup(_uniq_unit_1583, _ctx);
      kk_std_core_types__optional_drop(unit, _ctx);
      _x_x276 = _uniq_unit_1583; /*string*/
    }
    else {
      kk_std_core_types__optional_drop(unit, _ctx);
      _x_x276 = kk_string_empty(); /*string*/
    }
    _x_x273 = kk_std_core_types__lp__plus__plus__rp_(_x_x274, _x_x276, _ctx); /*string*/
    _x_x270 = kk_std_core_types__lp__plus__plus__rp_(_x_x271, _x_x273, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x267, _x_x270, _ctx);
  }
}
 
// Show a `:weekday` as an English string (`Sun.show == "Sunday"`).

kk_string_t kk_std_time_date_weekday_fs_show(kk_std_time_date__weekday wd, kk_context_t* _ctx) { /* (wd : weekday) -> string */ 
  if (kk_std_time_date__is_Mon(wd, _ctx)) {
    kk_define_string_literal(, _s_x279, 6, "Monday", _ctx)
    return kk_string_dup(_s_x279, _ctx);
  }
  if (kk_std_time_date__is_Tue(wd, _ctx)) {
    kk_define_string_literal(, _s_x280, 7, "Tuesday", _ctx)
    return kk_string_dup(_s_x280, _ctx);
  }
  if (kk_std_time_date__is_Wed(wd, _ctx)) {
    kk_define_string_literal(, _s_x281, 9, "Wednesday", _ctx)
    return kk_string_dup(_s_x281, _ctx);
  }
  if (kk_std_time_date__is_Thu(wd, _ctx)) {
    kk_define_string_literal(, _s_x282, 8, "Thursday", _ctx)
    return kk_string_dup(_s_x282, _ctx);
  }
  if (kk_std_time_date__is_Fri(wd, _ctx)) {
    kk_define_string_literal(, _s_x283, 6, "Friday", _ctx)
    return kk_string_dup(_s_x283, _ctx);
  }
  if (kk_std_time_date__is_Sat(wd, _ctx)) {
    kk_define_string_literal(, _s_x284, 8, "Saturday", _ctx)
    return kk_string_dup(_s_x284, _ctx);
  }
  {
    kk_define_string_literal(, _s_x285, 6, "Sunday", _ctx)
    return kk_string_dup(_s_x285, _ctx);
  }
}
 
// pad with zeros

kk_string_t kk_std_time_date_show0(kk_integer_t i, kk_std_core_types__optional width, kk_context_t* _ctx) { /* (i : int, width : ? int) -> string */ 
  kk_string_t _own_x106 = kk_std_core_int_show(i, _ctx); /*string*/;
  kk_integer_t _brw_x105;
  if (kk_std_core_types__is_Optional(width, _ctx)) {
    kk_box_t _box_x20 = width._cons._Optional.value;
    kk_integer_t _uniq_width_1986 = kk_integer_unbox(_box_x20, _ctx);
    kk_integer_dup(_uniq_width_1986, _ctx);
    kk_std_core_types__optional_drop(width, _ctx);
    _brw_x105 = _uniq_width_1986; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(width, _ctx);
    _brw_x105 = kk_integer_from_small(2); /*int*/
  }
  kk_string_t _brw_x107;
  kk_std_core_types__optional _x_x287 = kk_std_core_types__new_Optional(kk_char_box('0', _ctx), _ctx); /*? 7*/
  _brw_x107 = kk_std_core_string_pad_left(_own_x106, _brw_x105, _x_x287, _ctx); /*string*/
  kk_integer_drop(_brw_x105, _ctx);
  return _brw_x107;
}
 
// Show a year in ISO format (using 5+ digits and explicit sign for years < 0 or years > 9999)).

kk_string_t kk_std_time_date_show_year(kk_integer_t year, kk_context_t* _ctx) { /* (year : int) -> string */ 
  bool _match_x98;
  kk_integer_t _brw_x103 = kk_integer_from_int(9999, _ctx); /*int*/;
  bool _brw_x104 = kk_integer_gt_borrow(year,_brw_x103,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x103, _ctx);
  _match_x98 = _brw_x104; /*bool*/
  if (_match_x98) {
    kk_integer_t i_10074 = kk_integer_abs(year,kk_context()); /*int*/;
    kk_char_t _b_x23_26 = '0'; /*char*/;
    kk_string_t _x_x288;
    kk_define_string_literal(, _s_x289, 1, "+", _ctx)
    _x_x288 = kk_string_dup(_s_x289, _ctx); /*string*/
    kk_string_t _x_x290;
    kk_string_t _own_x102 = kk_std_core_int_show(i_10074, _ctx); /*string*/;
    kk_std_core_types__optional _x_x291 = kk_std_core_types__new_Optional(kk_char_box(_b_x23_26, _ctx), _ctx); /*? 7*/
    _x_x290 = kk_std_core_string_pad_left(_own_x102, kk_integer_from_small(5), _x_x291, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x288, _x_x290, _ctx);
  }
  {
    bool _match_x99 = kk_integer_lt_borrow(year,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    if (_match_x99) {
      kk_integer_t i_1_10077 = kk_integer_abs(year,kk_context()); /*int*/;
      kk_char_t _b_x24_27 = '0'; /*char*/;
      kk_string_t _x_x292;
      kk_define_string_literal(, _s_x293, 1, "-", _ctx)
      _x_x292 = kk_string_dup(_s_x293, _ctx); /*string*/
      kk_string_t _x_x294;
      kk_string_t _own_x101 = kk_std_core_int_show(i_1_10077, _ctx); /*string*/;
      kk_std_core_types__optional _x_x295 = kk_std_core_types__new_Optional(kk_char_box(_b_x24_27, _ctx), _ctx); /*? 7*/
      _x_x294 = kk_std_core_string_pad_left(_own_x101, kk_integer_from_small(5), _x_x295, _ctx); /*string*/
      return kk_std_core_types__lp__plus__plus__rp_(_x_x292, _x_x294, _ctx);
    }
    {
      kk_integer_t i_2_10079 = kk_integer_abs(year,kk_context()); /*int*/;
      kk_char_t _b_x25_28 = '0'; /*char*/;
      kk_string_t _x_x296 = kk_string_empty(); /*string*/
      kk_string_t _x_x298;
      kk_string_t _own_x100 = kk_std_core_int_show(i_2_10079, _ctx); /*string*/;
      kk_std_core_types__optional _x_x299 = kk_std_core_types__new_Optional(kk_char_box(_b_x25_28, _ctx), _ctx); /*? 7*/
      _x_x298 = kk_std_core_string_pad_left(_own_x100, kk_integer_from_small(4), _x_x299, _ctx); /*string*/
      return kk_std_core_types__lp__plus__plus__rp_(_x_x296, _x_x298, _ctx);
    }
  }
}
 
// Show a date in ISO format. `Date(2000,1,1).show == "2000-01-01"`.
// Takes an optional `month-prefix` (=`""`) that is used by the ISO week
// and month calendar to add a `"W"` or `"M"` prefix respectively.

kk_string_t kk_std_time_date_show(kk_std_time_date__date d, kk_std_core_types__optional month_prefix, kk_context_t* _ctx) { /* (d : date, month-prefix : ? string) -> string */ 
  kk_integer_t day_width;
  bool _match_x97;
  kk_string_t _x_x300;
  if (kk_std_core_types__is_Optional(month_prefix, _ctx)) {
    kk_box_t _box_x29 = month_prefix._cons._Optional.value;
    kk_string_t _uniq_month_prefix_1855 = kk_string_unbox(_box_x29);
    kk_string_dup(_uniq_month_prefix_1855, _ctx);
    _x_x300 = _uniq_month_prefix_1855; /*string*/
  }
  else {
    _x_x300 = kk_string_empty(); /*string*/
  }
  kk_string_t _x_x302;
  kk_define_string_literal(, _s_x303, 1, "W", _ctx)
  _x_x302 = kk_string_dup(_s_x303, _ctx); /*string*/
  _match_x97 = kk_string_is_eq(_x_x300,_x_x302,kk_context()); /*bool*/
  if (_match_x97) {
    day_width = kk_integer_from_small(1); /*int*/
  }
  else {
    day_width = kk_integer_from_small(2); /*int*/
  }
  kk_string_t _x_x304;
  kk_integer_t _x_x305;
  {
    kk_integer_t _x = d.year;
    kk_integer_dup(_x, _ctx);
    _x_x305 = _x; /*int*/
  }
  _x_x304 = kk_std_time_date_show_year(_x_x305, _ctx); /*string*/
  kk_string_t _x_x306;
  kk_string_t _x_x307;
  kk_define_string_literal(, _s_x308, 1, "-", _ctx)
  _x_x307 = kk_string_dup(_s_x308, _ctx); /*string*/
  kk_string_t _x_x309;
  kk_string_t _x_x310;
  if (kk_std_core_types__is_Optional(month_prefix, _ctx)) {
    kk_box_t _box_x30 = month_prefix._cons._Optional.value;
    kk_string_t _uniq_month_prefix_1855_0 = kk_string_unbox(_box_x30);
    kk_string_dup(_uniq_month_prefix_1855_0, _ctx);
    kk_std_core_types__optional_drop(month_prefix, _ctx);
    _x_x310 = _uniq_month_prefix_1855_0; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(month_prefix, _ctx);
    _x_x310 = kk_string_empty(); /*string*/
  }
  kk_string_t _x_x312;
  kk_char_t _b_x32_34 = '0'; /*char*/;
  kk_string_t _x_x313;
  kk_string_t _own_x95;
  kk_integer_t _x_x314;
  {
    kk_integer_t _x_0 = d.month;
    kk_integer_dup(_x_0, _ctx);
    _x_x314 = _x_0; /*int*/
  }
  _own_x95 = kk_std_core_int_show(_x_x314, _ctx); /*string*/
  kk_integer_t _brw_x94;
  kk_std_core_types__optional _match_x93 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x93, _ctx)) {
    kk_box_t _box_x31 = _match_x93._cons._Optional.value;
    kk_integer_t _uniq_width_1986 = kk_integer_unbox(_box_x31, _ctx);
    kk_integer_dup(_uniq_width_1986, _ctx);
    kk_std_core_types__optional_drop(_match_x93, _ctx);
    _brw_x94 = _uniq_width_1986; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x93, _ctx);
    _brw_x94 = kk_integer_from_small(2); /*int*/
  }
  kk_string_t _brw_x96;
  kk_std_core_types__optional _x_x315 = kk_std_core_types__new_Optional(kk_char_box(_b_x32_34, _ctx), _ctx); /*? 7*/
  _brw_x96 = kk_std_core_string_pad_left(_own_x95, _brw_x94, _x_x315, _ctx); /*string*/
  kk_integer_drop(_brw_x94, _ctx);
  _x_x313 = _brw_x96; /*string*/
  kk_string_t _x_x316;
  kk_char_t _b_x33_35 = '0'; /*char*/;
  kk_string_t _x_x317;
  kk_define_string_literal(, _s_x318, 1, "-", _ctx)
  _x_x317 = kk_string_dup(_s_x318, _ctx); /*string*/
  kk_string_t _x_x319;
  kk_string_t _own_x91;
  kk_integer_t _x_x320;
  {
    kk_integer_t _x_1 = d.day;
    kk_integer_dup(_x_1, _ctx);
    kk_std_time_date__date_drop(d, _ctx);
    _x_x320 = _x_1; /*int*/
  }
  _own_x91 = kk_std_core_int_show(_x_x320, _ctx); /*string*/
  kk_string_t _brw_x92;
  kk_std_core_types__optional _x_x321 = kk_std_core_types__new_Optional(kk_char_box(_b_x33_35, _ctx), _ctx); /*? 7*/
  _brw_x92 = kk_std_core_string_pad_left(_own_x91, day_width, _x_x321, _ctx); /*string*/
  kk_integer_drop(day_width, _ctx);
  _x_x319 = _brw_x92; /*string*/
  _x_x316 = kk_std_core_types__lp__plus__plus__rp_(_x_x317, _x_x319, _ctx); /*string*/
  _x_x312 = kk_std_core_types__lp__plus__plus__rp_(_x_x313, _x_x316, _ctx); /*string*/
  _x_x309 = kk_std_core_types__lp__plus__plus__rp_(_x_x310, _x_x312, _ctx); /*string*/
  _x_x306 = kk_std_core_types__lp__plus__plus__rp_(_x_x307, _x_x309, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x304, _x_x306, _ctx);
}
 
// Show a clock in ISO format up to an optional maximum precision (=`9`).
// `Clock(23,30,fixed(1.123)).show == "23:30:01.123"`
// `Clock(23,30,fixed(1.123)).show(0) == "23:30:01"`

kk_string_t kk_std_time_date_clock_fs_show(kk_std_time_date__clock c, kk_std_core_types__optional prec, kk_context_t* _ctx) { /* (c : clock, prec : ? int) -> string */ 
  kk_char_t _b_x37_43 = '0'; /*char*/;
  kk_string_t _x_x322;
  kk_string_t _own_x89;
  kk_integer_t _x_x323;
  {
    struct kk_std_time_date_Clock* _con_x324 = kk_std_time_date__as_Clock(c, _ctx);
    kk_std_num_ddouble__ddouble _pat_1_0 = _con_x324->seconds;
    kk_integer_t _x = _con_x324->hours;
    kk_integer_dup(_x, _ctx);
    _x_x323 = _x; /*int*/
  }
  _own_x89 = kk_std_core_int_show(_x_x323, _ctx); /*string*/
  kk_integer_t _brw_x88;
  kk_std_core_types__optional _match_x87 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x87, _ctx)) {
    kk_box_t _box_x36 = _match_x87._cons._Optional.value;
    kk_integer_t _uniq_width_1986 = kk_integer_unbox(_box_x36, _ctx);
    kk_integer_dup(_uniq_width_1986, _ctx);
    kk_std_core_types__optional_drop(_match_x87, _ctx);
    _brw_x88 = _uniq_width_1986; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x87, _ctx);
    _brw_x88 = kk_integer_from_small(2); /*int*/
  }
  kk_string_t _brw_x90;
  kk_std_core_types__optional _x_x325 = kk_std_core_types__new_Optional(kk_char_box(_b_x37_43, _ctx), _ctx); /*? 7*/
  _brw_x90 = kk_std_core_string_pad_left(_own_x89, _brw_x88, _x_x325, _ctx); /*string*/
  kk_integer_drop(_brw_x88, _ctx);
  _x_x322 = _brw_x90; /*string*/
  kk_string_t _x_x326;
  kk_string_t _x_x327;
  kk_define_string_literal(, _s_x328, 1, ":", _ctx)
  _x_x327 = kk_string_dup(_s_x328, _ctx); /*string*/
  kk_string_t _x_x329;
  kk_char_t _b_x39_44 = '0'; /*char*/;
  kk_string_t _x_x330;
  kk_string_t _own_x85;
  kk_integer_t _x_x331;
  {
    struct kk_std_time_date_Clock* _con_x332 = kk_std_time_date__as_Clock(c, _ctx);
    kk_std_num_ddouble__ddouble _pat_1_1 = _con_x332->seconds;
    kk_integer_t _x_0 = _con_x332->minutes;
    kk_integer_dup(_x_0, _ctx);
    _x_x331 = _x_0; /*int*/
  }
  _own_x85 = kk_std_core_int_show(_x_x331, _ctx); /*string*/
  kk_integer_t _brw_x84;
  kk_std_core_types__optional _match_x83 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x83, _ctx)) {
    kk_box_t _box_x38 = _match_x83._cons._Optional.value;
    kk_integer_t _uniq_width_1986_0 = kk_integer_unbox(_box_x38, _ctx);
    kk_integer_dup(_uniq_width_1986_0, _ctx);
    kk_std_core_types__optional_drop(_match_x83, _ctx);
    _brw_x84 = _uniq_width_1986_0; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x83, _ctx);
    _brw_x84 = kk_integer_from_small(2); /*int*/
  }
  kk_string_t _brw_x86;
  kk_std_core_types__optional _x_x333 = kk_std_core_types__new_Optional(kk_char_box(_b_x39_44, _ctx), _ctx); /*? 7*/
  _brw_x86 = kk_std_core_string_pad_left(_own_x85, _brw_x84, _x_x333, _ctx); /*string*/
  kk_integer_drop(_brw_x84, _ctx);
  _x_x330 = _brw_x86; /*string*/
  kk_string_t _x_x334;
  kk_integer_t _b_x41_45;
  if (kk_std_core_types__is_Optional(prec, _ctx)) {
    kk_box_t _box_x40 = prec._cons._Optional.value;
    kk_integer_t _uniq_prec_2128 = kk_integer_unbox(_box_x40, _ctx);
    kk_integer_dup(_uniq_prec_2128, _ctx);
    kk_std_core_types__optional_drop(prec, _ctx);
    _b_x41_45 = _uniq_prec_2128; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(prec, _ctx);
    _b_x41_45 = kk_integer_from_small(9); /*int*/
  }
  kk_integer_t _b_x42_46 = kk_integer_from_small(2); /*int*/;
  kk_string_t _x_x335;
  kk_define_string_literal(, _s_x336, 1, ":", _ctx)
  _x_x335 = kk_string_dup(_s_x336, _ctx); /*string*/
  kk_string_t _x_x337;
  kk_std_num_ddouble__ddouble _x_x338;
  {
    struct kk_std_time_date_Clock* _con_x339 = kk_std_time_date__as_Clock(c, _ctx);
    kk_std_num_ddouble__ddouble _x_1 = _con_x339->seconds;
    kk_integer_t _pat_0_3 = _con_x339->hours;
    kk_integer_t _pat_1_2 = _con_x339->minutes;
    if kk_likely(kk_datatype_ptr_is_unique(c, _ctx)) {
      kk_integer_drop(_pat_1_2, _ctx);
      kk_integer_drop(_pat_0_3, _ctx);
      kk_datatype_ptr_free(c, _ctx);
    }
    else {
      kk_datatype_ptr_decref(c, _ctx);
    }
    _x_x338 = _x_1; /*std/num/ddouble/ddouble*/
  }
  kk_std_core_types__optional _x_x340 = kk_std_core_types__new_Optional(kk_integer_box(_b_x41_45, _ctx), _ctx); /*? 7*/
  kk_std_core_types__optional _x_x341 = kk_std_core_types__new_Optional(kk_integer_box(_b_x42_46, _ctx), _ctx); /*? 7*/
  _x_x337 = kk_std_time_date_show_seconds(_x_x338, _x_x340, _x_x341, kk_std_core_types__new_None(_ctx), _ctx); /*string*/
  _x_x334 = kk_std_core_types__lp__plus__plus__rp_(_x_x335, _x_x337, _ctx); /*string*/
  _x_x329 = kk_std_core_types__lp__plus__plus__rp_(_x_x330, _x_x334, _ctx); /*string*/
  _x_x326 = kk_std_core_types__lp__plus__plus__rp_(_x_x327, _x_x329, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x322, _x_x326, _ctx);
}
 
// Create a clock from a seconds as an `:int` with an optional fraction.
// Normalizes the clock with seconds and minutes under 60 but
// adds the fraction as is to the final seconds, so that might
// be `>= 60` if the fraction `>= 1.0`;

kk_std_time_date__clock kk_std_time_date_intddouble_fs_clock(kk_integer_t seconds, kk_std_core_types__optional frac, kk_context_t* _ctx) { /* (seconds : int, frac : ? std/num/ddouble/ddouble) -> clock */ 
  kk_std_core_types__tuple2 _match_x81 = kk_std_core_int_divmod(seconds, kk_integer_from_small(60), _ctx); /*(int, int)*/;
  {
    kk_box_t _box_x47 = _match_x81.fst;
    kk_box_t _box_x48 = _match_x81.snd;
    kk_integer_t hm = kk_integer_unbox(_box_x47, _ctx);
    kk_integer_t s = kk_integer_unbox(_box_x48, _ctx);
    kk_integer_dup(hm, _ctx);
    kk_integer_dup(s, _ctx);
    kk_std_core_types__tuple2_drop(_match_x81, _ctx);
    kk_std_core_types__tuple2 _match_x82 = kk_std_core_int_divmod(hm, kk_integer_from_small(60), _ctx); /*(int, int)*/;
    {
      kk_box_t _box_x49 = _match_x82.fst;
      kk_box_t _box_x50 = _match_x82.snd;
      kk_integer_t h = kk_integer_unbox(_box_x49, _ctx);
      kk_integer_t m = kk_integer_unbox(_box_x50, _ctx);
      kk_integer_dup(h, _ctx);
      kk_integer_dup(m, _ctx);
      kk_std_core_types__tuple2_drop(_match_x82, _ctx);
      kk_std_num_ddouble__ddouble _x_x342;
      kk_std_num_ddouble__ddouble _x_x343 = kk_std_num_ddouble_ddouble_int_exp(s, kk_integer_from_small(0), _ctx); /*std/num/ddouble/ddouble*/
      kk_std_num_ddouble__ddouble _x_x344;
      if (kk_std_core_types__is_Optional(frac, _ctx)) {
        kk_box_t _box_x51 = frac._cons._Optional.value;
        kk_std_num_ddouble__ddouble _uniq_frac_2255 = kk_std_num_ddouble__ddouble_unbox(_box_x51, KK_BORROWED, _ctx);
        kk_std_core_types__optional_drop(frac, _ctx);
        _x_x344 = _uniq_frac_2255; /*std/num/ddouble/ddouble*/
      }
      else {
        kk_std_core_types__optional_drop(frac, _ctx);
        _x_x344 = kk_std_num_ddouble_zero; /*std/num/ddouble/ddouble*/
      }
      _x_x342 = kk_std_num_ddouble__lp__plus__rp_(_x_x343, _x_x344, _ctx); /*std/num/ddouble/ddouble*/
      return kk_std_time_date__new_Clock(kk_reuse_null, 0, h, m, _x_x342, _ctx);
    }
  }
}
 
// Create a clock from seconds; normalizes the clock with seconds and minutes under 60.

kk_std_time_date__clock kk_std_time_date_ddouble_fs_clock(kk_std_num_ddouble__ddouble seconds, kk_context_t* _ctx) { /* (seconds : std/num/ddouble/ddouble) -> clock */ 
  kk_integer_t seconds_0_10096;
  kk_std_num_ddouble__ddouble _x_x345 = kk_std_num_ddouble_floor(seconds, _ctx); /*std/num/ddouble/ddouble*/
  seconds_0_10096 = kk_std_num_ddouble_int(_x_x345, kk_std_core_types__new_None(_ctx), _ctx); /*int*/
  kk_std_num_ddouble__ddouble _b_x52_53 = kk_std_num_ddouble_ffraction(seconds, _ctx); /*std/num/ddouble/ddouble*/;
  kk_std_core_types__tuple2 _match_x78 = kk_std_core_int_divmod(seconds_0_10096, kk_integer_from_small(60), _ctx); /*(int, int)*/;
  {
    kk_box_t _box_x54 = _match_x78.fst;
    kk_box_t _box_x55 = _match_x78.snd;
    kk_integer_t hm = kk_integer_unbox(_box_x54, _ctx);
    kk_integer_t s = kk_integer_unbox(_box_x55, _ctx);
    kk_integer_dup(hm, _ctx);
    kk_integer_dup(s, _ctx);
    kk_std_core_types__tuple2_drop(_match_x78, _ctx);
    kk_std_core_types__tuple2 _match_x79 = kk_std_core_int_divmod(hm, kk_integer_from_small(60), _ctx); /*(int, int)*/;
    {
      kk_box_t _box_x56 = _match_x79.fst;
      kk_box_t _box_x57 = _match_x79.snd;
      kk_integer_t h = kk_integer_unbox(_box_x56, _ctx);
      kk_integer_t m = kk_integer_unbox(_box_x57, _ctx);
      kk_integer_dup(h, _ctx);
      kk_integer_dup(m, _ctx);
      kk_std_core_types__tuple2_drop(_match_x79, _ctx);
      kk_std_num_ddouble__ddouble _x_x346;
      kk_std_num_ddouble__ddouble _x_x347 = kk_std_num_ddouble_ddouble_int_exp(s, kk_integer_from_small(0), _ctx); /*std/num/ddouble/ddouble*/
      kk_std_num_ddouble__ddouble _x_x348;
      kk_std_core_types__optional _match_x80 = kk_std_core_types__new_Optional(kk_std_num_ddouble__ddouble_box(_b_x52_53, _ctx), _ctx); /*? 0*/;
      if (kk_std_core_types__is_Optional(_match_x80, _ctx)) {
        kk_box_t _box_x58 = _match_x80._cons._Optional.value;
        kk_std_num_ddouble__ddouble _uniq_frac_2255 = kk_std_num_ddouble__ddouble_unbox(_box_x58, KK_BORROWED, _ctx);
        kk_std_core_types__optional_drop(_match_x80, _ctx);
        _x_x348 = _uniq_frac_2255; /*std/num/ddouble/ddouble*/
      }
      else {
        kk_std_core_types__optional_drop(_match_x80, _ctx);
        _x_x348 = kk_std_num_ddouble_zero; /*std/num/ddouble/ddouble*/
      }
      _x_x346 = kk_std_num_ddouble__lp__plus__rp_(_x_x347, _x_x348, _ctx); /*std/num/ddouble/ddouble*/
      return kk_std_time_date__new_Clock(kk_reuse_null, 0, h, m, _x_x346, _ctx);
    }
  }
}
 
// Create a clock from a seconds as an `:int` with an optional fraction.
// Normalizes the clock with seconds and minutes under 60 but
// adds the fraction as is to the final seconds, so that might
// be `>= 60` if the fraction `>= 1.0`;

kk_std_time_date__clock kk_std_time_date_intfloat64_fs_clock(kk_integer_t seconds, double frac, kk_context_t* _ctx) { /* (seconds : int, frac : float64) -> clock */ 
  kk_std_core_types__tuple2 _match_x76 = kk_std_core_int_divmod(seconds, kk_integer_from_small(60), _ctx); /*(int, int)*/;
  {
    kk_box_t _box_x59 = _match_x76.fst;
    kk_box_t _box_x60 = _match_x76.snd;
    kk_integer_t hm = kk_integer_unbox(_box_x59, _ctx);
    kk_integer_t s = kk_integer_unbox(_box_x60, _ctx);
    kk_integer_dup(hm, _ctx);
    kk_integer_dup(s, _ctx);
    kk_std_core_types__tuple2_drop(_match_x76, _ctx);
    kk_std_core_types__tuple2 _match_x77 = kk_std_core_int_divmod(hm, kk_integer_from_small(60), _ctx); /*(int, int)*/;
    {
      kk_box_t _box_x61 = _match_x77.fst;
      kk_box_t _box_x62 = _match_x77.snd;
      kk_integer_t h = kk_integer_unbox(_box_x61, _ctx);
      kk_integer_t m = kk_integer_unbox(_box_x62, _ctx);
      kk_integer_dup(h, _ctx);
      kk_integer_dup(m, _ctx);
      kk_std_core_types__tuple2_drop(_match_x77, _ctx);
      kk_std_num_ddouble__ddouble _x_x349;
      kk_std_num_ddouble__ddouble _x_x350 = kk_std_num_ddouble_ddouble_int_exp(s, kk_integer_from_small(0), _ctx); /*std/num/ddouble/ddouble*/
      kk_std_num_ddouble__ddouble _x_x351 = kk_std_num_ddouble__new_Ddouble(frac, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/
      _x_x349 = kk_std_num_ddouble__lp__plus__rp_(_x_x350, _x_x351, _ctx); /*std/num/ddouble/ddouble*/
      return kk_std_time_date__new_Clock(kk_reuse_null, 0, h, m, _x_x349, _ctx);
    }
  }
}

kk_std_time_date__clock kk_std_time_date_leap_fs_clock(kk_std_num_ddouble__ddouble seconds, kk_integer_t leap, kk_context_t* _ctx) { /* (seconds : std/num/ddouble/ddouble, leap : int) -> clock */ 
  kk_integer_t seconds_0_10103;
  kk_std_num_ddouble__ddouble _x_x352 = kk_std_num_ddouble_floor(seconds, _ctx); /*std/num/ddouble/ddouble*/
  seconds_0_10103 = kk_std_num_ddouble_int(_x_x352, kk_std_core_types__new_None(_ctx), _ctx); /*int*/
  kk_std_num_ddouble__ddouble _b_x63_64;
  kk_std_num_ddouble__ddouble _x_x353 = kk_std_num_ddouble_ffraction(seconds, _ctx); /*std/num/ddouble/ddouble*/
  kk_std_num_ddouble__ddouble _x_x354 = kk_std_num_ddouble_ddouble_int_exp(leap, kk_integer_from_small(0), _ctx); /*std/num/ddouble/ddouble*/
  _b_x63_64 = kk_std_num_ddouble__lp__plus__rp_(_x_x353, _x_x354, _ctx); /*std/num/ddouble/ddouble*/
  kk_std_core_types__tuple2 _match_x73 = kk_std_core_int_divmod(seconds_0_10103, kk_integer_from_small(60), _ctx); /*(int, int)*/;
  {
    kk_box_t _box_x65 = _match_x73.fst;
    kk_box_t _box_x66 = _match_x73.snd;
    kk_integer_t hm = kk_integer_unbox(_box_x65, _ctx);
    kk_integer_t s = kk_integer_unbox(_box_x66, _ctx);
    kk_integer_dup(hm, _ctx);
    kk_integer_dup(s, _ctx);
    kk_std_core_types__tuple2_drop(_match_x73, _ctx);
    kk_std_core_types__tuple2 _match_x74 = kk_std_core_int_divmod(hm, kk_integer_from_small(60), _ctx); /*(int, int)*/;
    {
      kk_box_t _box_x67 = _match_x74.fst;
      kk_box_t _box_x68 = _match_x74.snd;
      kk_integer_t h = kk_integer_unbox(_box_x67, _ctx);
      kk_integer_t m = kk_integer_unbox(_box_x68, _ctx);
      kk_integer_dup(h, _ctx);
      kk_integer_dup(m, _ctx);
      kk_std_core_types__tuple2_drop(_match_x74, _ctx);
      kk_std_num_ddouble__ddouble _x_x355;
      kk_std_num_ddouble__ddouble _x_x356 = kk_std_num_ddouble_ddouble_int_exp(s, kk_integer_from_small(0), _ctx); /*std/num/ddouble/ddouble*/
      kk_std_num_ddouble__ddouble _x_x357;
      kk_std_core_types__optional _match_x75 = kk_std_core_types__new_Optional(kk_std_num_ddouble__ddouble_box(_b_x63_64, _ctx), _ctx); /*? 0*/;
      if (kk_std_core_types__is_Optional(_match_x75, _ctx)) {
        kk_box_t _box_x69 = _match_x75._cons._Optional.value;
        kk_std_num_ddouble__ddouble _uniq_frac_2255 = kk_std_num_ddouble__ddouble_unbox(_box_x69, KK_BORROWED, _ctx);
        kk_std_core_types__optional_drop(_match_x75, _ctx);
        _x_x357 = _uniq_frac_2255; /*std/num/ddouble/ddouble*/
      }
      else {
        kk_std_core_types__optional_drop(_match_x75, _ctx);
        _x_x357 = kk_std_num_ddouble_zero; /*std/num/ddouble/ddouble*/
      }
      _x_x355 = kk_std_num_ddouble__lp__plus__rp_(_x_x356, _x_x357, _ctx); /*std/num/ddouble/ddouble*/
      return kk_std_time_date__new_Clock(kk_reuse_null, 0, h, m, _x_x355, _ctx);
    }
  }
}
 
// Return the whole seconds part of a `:clock`.

kk_integer_t kk_std_time_date_whole_seconds(kk_std_time_date__clock c, kk_context_t* _ctx) { /* (c : clock) -> int */ 
  kk_std_num_ddouble__ddouble _x_x358;
  bool _match_x72;
  double _x_x359;
  {
    struct kk_std_time_date_Clock* _con_x360 = kk_std_time_date__as_Clock(c, _ctx);
    kk_std_num_ddouble__ddouble _x_0 = _con_x360->seconds;
    {
      double _x = _x_0.hi;
      _x_x359 = _x; /*float64*/
    }
  }
  _match_x72 = (_x_x359 < (0x0p+0)); /*bool*/
  if (_match_x72) {
    kk_std_num_ddouble__ddouble _x_x361;
    {
      struct kk_std_time_date_Clock* _con_x362 = kk_std_time_date__as_Clock(c, _ctx);
      kk_std_num_ddouble__ddouble _x_0_0 = _con_x362->seconds;
      kk_integer_t _pat_0_1_0 = _con_x362->hours;
      kk_integer_t _pat_1_0_0 = _con_x362->minutes;
      if kk_likely(kk_datatype_ptr_is_unique(c, _ctx)) {
        kk_integer_drop(_pat_1_0_0, _ctx);
        kk_integer_drop(_pat_0_1_0, _ctx);
        kk_datatype_ptr_free(c, _ctx);
      }
      else {
        kk_datatype_ptr_decref(c, _ctx);
      }
      _x_x361 = _x_0_0; /*std/num/ddouble/ddouble*/
    }
    _x_x358 = kk_std_num_ddouble_ceiling(_x_x361, _ctx); /*std/num/ddouble/ddouble*/
  }
  else {
    kk_std_num_ddouble__ddouble _x_x363;
    {
      struct kk_std_time_date_Clock* _con_x364 = kk_std_time_date__as_Clock(c, _ctx);
      kk_std_num_ddouble__ddouble _x_0_1 = _con_x364->seconds;
      kk_integer_t _pat_0_1_1 = _con_x364->hours;
      kk_integer_t _pat_1_0_1 = _con_x364->minutes;
      if kk_likely(kk_datatype_ptr_is_unique(c, _ctx)) {
        kk_integer_drop(_pat_1_0_1, _ctx);
        kk_integer_drop(_pat_0_1_1, _ctx);
        kk_datatype_ptr_free(c, _ctx);
      }
      else {
        kk_datatype_ptr_decref(c, _ctx);
      }
      _x_x363 = _x_0_1; /*std/num/ddouble/ddouble*/
    }
    _x_x358 = kk_std_num_ddouble_floor(_x_x363, _ctx); /*std/num/ddouble/ddouble*/
  }
  return kk_std_num_ddouble_int(_x_x358, kk_std_core_types__new_None(_ctx), _ctx);
}
 
// Return the ISO calendar date of Easter in a given year (Algorithm by [J.M. Oudin](https://aa.usno.navy.mil/faq/docs/easter.php)).

kk_std_time_date__date kk_std_time_date_easter(kk_integer_t year, kk_context_t* _ctx) { /* (year : int) -> date */ 
  kk_integer_t c;
  kk_integer_t _x_x374 = kk_integer_dup(year, _ctx); /*int*/
  c = kk_integer_div(_x_x374,(kk_integer_from_small(100)),kk_context()); /*int*/
  kk_integer_t y_10110;
  kk_integer_t _x_x375;
  kk_integer_t _x_x376 = kk_integer_dup(year, _ctx); /*int*/
  _x_x375 = kk_integer_div(_x_x376,(kk_integer_from_small(19)),kk_context()); /*int*/
  y_10110 = kk_integer_mul((kk_integer_from_small(19)),_x_x375,kk_context()); /*int*/
  kk_integer_t n;
  kk_integer_t _x_x377 = kk_integer_dup(year, _ctx); /*int*/
  n = kk_integer_sub(_x_x377,y_10110,kk_context()); /*int*/
  kk_integer_t k;
  kk_integer_t _x_x378;
  kk_integer_t _x_x379 = kk_integer_dup(c, _ctx); /*int*/
  _x_x378 = kk_integer_add_small_const(_x_x379, -17, _ctx); /*int*/
  k = kk_integer_div(_x_x378,(kk_integer_from_small(25)),kk_context()); /*int*/
  kk_integer_t y_4_10120;
  kk_integer_t _x_x380 = kk_integer_dup(c, _ctx); /*int*/
  y_4_10120 = kk_integer_div(_x_x380,(kk_integer_from_small(4)),kk_context()); /*int*/
  kk_integer_t x_3_10117;
  kk_integer_t _x_x381 = kk_integer_dup(c, _ctx); /*int*/
  x_3_10117 = kk_integer_sub(_x_x381,y_4_10120,kk_context()); /*int*/
  kk_integer_t y_3_10118;
  kk_integer_t _x_x382;
  kk_integer_t _x_x383 = kk_integer_dup(c, _ctx); /*int*/
  _x_x382 = kk_integer_sub(_x_x383,k,kk_context()); /*int*/
  y_3_10118 = kk_integer_div(_x_x382,(kk_integer_from_small(3)),kk_context()); /*int*/
  kk_integer_t x_2_10115 = kk_integer_sub(x_3_10117,y_3_10118,kk_context()); /*int*/;
  kk_integer_t y_2_10116;
  kk_integer_t _x_x384 = kk_integer_dup(n, _ctx); /*int*/
  y_2_10116 = kk_integer_mul((kk_integer_from_small(19)),_x_x384,kk_context()); /*int*/
  kk_integer_t x_1_10113 = kk_integer_add(x_2_10115,y_2_10116,kk_context()); /*int*/;
  kk_integer_t i0 = kk_integer_add_small_const(x_1_10113, 15, _ctx); /*int*/;
  kk_integer_t y_6_10124;
  kk_integer_t _x_x385;
  kk_integer_t _x_x386 = kk_integer_dup(i0, _ctx); /*int*/
  _x_x385 = kk_integer_div(_x_x386,(kk_integer_from_small(30)),kk_context()); /*int*/
  y_6_10124 = kk_integer_mul((kk_integer_from_small(30)),_x_x385,kk_context()); /*int*/
  kk_integer_t i1 = kk_integer_sub(i0,y_6_10124,kk_context()); /*int*/;
  kk_integer_t y_8_10128;
  kk_integer_t _x_x387;
  kk_integer_t _x_x388;
  kk_integer_t _x_x389 = kk_integer_dup(i1, _ctx); /*int*/
  _x_x388 = kk_integer_div(_x_x389,(kk_integer_from_small(28)),kk_context()); /*int*/
  kk_integer_t _x_x390;
  kk_integer_t _x_x391;
  kk_integer_t _x_x392 = kk_integer_dup(i1, _ctx); /*int*/
  _x_x391 = kk_integer_add_small_const(_x_x392, 1, _ctx); /*int*/
  _x_x390 = kk_integer_div((kk_integer_from_small(29)),_x_x391,kk_context()); /*int*/
  _x_x387 = kk_integer_mul(_x_x388,_x_x390,kk_context()); /*int*/
  kk_integer_t _x_x393;
  kk_integer_t _x_x394 = kk_integer_sub((kk_integer_from_small(21)),n,kk_context()); /*int*/
  _x_x393 = kk_integer_div(_x_x394,(kk_integer_from_small(11)),kk_context()); /*int*/
  y_8_10128 = kk_integer_mul(_x_x387,_x_x393,kk_context()); /*int*/
  kk_integer_t y_7_10126;
  kk_integer_t _x_x395;
  kk_integer_t _x_x396 = kk_integer_dup(i1, _ctx); /*int*/
  _x_x395 = kk_integer_div(_x_x396,(kk_integer_from_small(28)),kk_context()); /*int*/
  kk_integer_t _x_x397 = kk_integer_sub((kk_integer_from_small(1)),y_8_10128,kk_context()); /*int*/
  y_7_10126 = kk_integer_mul(_x_x395,_x_x397,kk_context()); /*int*/
  kk_integer_t i = kk_integer_sub(i1,y_7_10126,kk_context()); /*int*/;
  kk_integer_t y_15_10142;
  kk_integer_t _x_x398 = kk_integer_dup(year, _ctx); /*int*/
  y_15_10142 = kk_integer_div(_x_x398,(kk_integer_from_small(4)),kk_context()); /*int*/
  kk_integer_t x_14_10139;
  kk_integer_t _x_x399 = kk_integer_dup(year, _ctx); /*int*/
  x_14_10139 = kk_integer_add(_x_x399,y_15_10142,kk_context()); /*int*/
  kk_integer_t x_13_10137;
  kk_integer_t _x_x400 = kk_integer_dup(i, _ctx); /*int*/
  x_13_10137 = kk_integer_add(x_14_10139,_x_x400,kk_context()); /*int*/
  kk_integer_t x_12_10135 = kk_integer_add_small_const(x_13_10137, 2, _ctx); /*int*/;
  kk_integer_t x_11_10133;
  kk_integer_t _x_x401 = kk_integer_dup(c, _ctx); /*int*/
  x_11_10133 = kk_integer_sub(x_12_10135,_x_x401,kk_context()); /*int*/
  kk_integer_t y_11_10134 = kk_integer_div(c,(kk_integer_from_small(4)),kk_context()); /*int*/;
  kk_integer_t j0 = kk_integer_add(x_11_10133,y_11_10134,kk_context()); /*int*/;
  kk_integer_t y_16_10144;
  kk_integer_t _x_x402;
  kk_integer_t _x_x403 = kk_integer_dup(j0, _ctx); /*int*/
  _x_x402 = kk_integer_div(_x_x403,(kk_integer_from_small(7)),kk_context()); /*int*/
  y_16_10144 = kk_integer_mul((kk_integer_from_small(7)),_x_x402,kk_context()); /*int*/
  kk_integer_t j = kk_integer_sub(j0,y_16_10144,kk_context()); /*int*/;
  kk_integer_t l = kk_integer_sub(i,j,kk_context()); /*int*/;
  kk_integer_t y_18_10148;
  kk_integer_t _x_x404;
  kk_integer_t _x_x405 = kk_integer_dup(l, _ctx); /*int*/
  _x_x404 = kk_integer_add_small_const(_x_x405, 40, _ctx); /*int*/
  y_18_10148 = kk_integer_div(_x_x404,(kk_integer_from_small(44)),kk_context()); /*int*/
  kk_integer_t m = kk_integer_add_small_const(y_18_10148, 3, _ctx); /*int*/;
  kk_integer_t x_20_10151 = kk_integer_add_small_const(l, 28, _ctx); /*int*/;
  kk_integer_t y_20_10152;
  kk_integer_t _x_x406;
  kk_integer_t _x_x407 = kk_integer_dup(m, _ctx); /*int*/
  _x_x406 = kk_integer_div(_x_x407,(kk_integer_from_small(4)),kk_context()); /*int*/
  y_20_10152 = kk_integer_mul((kk_integer_from_small(31)),_x_x406,kk_context()); /*int*/
  kk_integer_t d = kk_integer_sub(x_20_10151,y_20_10152,kk_context()); /*int*/;
  return kk_std_time_date__new_Date(year, m, d, _ctx);
}

// initialization
void kk_std_time_date__init(kk_context_t* _ctx){
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
  kk_std_num_float64__init(_ctx);
  kk_std_num_ddouble__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
  {
    kk_std_time_date_clock0 = kk_std_time_date__new_Clock(kk_reuse_null, 0, kk_integer_from_small(0), kk_integer_from_small(0), kk_std_num_ddouble_zero, _ctx); /*std/time/date/clock*/
  }
}

// termination
void kk_std_time_date__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_time_date__clock_drop(kk_std_time_date_clock0, _ctx);
  kk_std_num_ddouble__done(_ctx);
  kk_std_num_float64__done(_ctx);
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
