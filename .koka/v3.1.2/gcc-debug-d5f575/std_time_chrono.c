// Koka generated module: std/time/chrono, koka version: 3.1.2, platform: 64-bit
#include "std_time_chrono.h"
/*---------------------------------------------------------------------------
  Copyright 2020-2021, Microsoft Research, Daan Leijen.

  This is free software; you can redistribute it and/or modify it under the
  terms of the Apache License, Version 2.0. A copy of the License can be
  found in the LICENSE file at the root of this distribution.
---------------------------------------------------------------------------*/

static kk_std_core_types__tuple2 kk_time_unix_now_tuple(kk_context_t* ctx) {
  kk_duration_t d = kk_time_unix_now(ctx);
  // the conversion has about 15 digits of precision
  // we cannot do this more precisely as the api expects the fraction between 0.0 and 2.0 (for leap seconds).
  double secs = (double)d.seconds;
  double frac = (double)d.attoseconds * 1e-18;
  return kk_std_core_types__new_Tuple2( kk_double_box(secs,ctx), kk_double_box(frac,ctx), ctx );
}

static double kk_time_dresolution(kk_context_t* ctx) {
  int64_t asecs = kk_time_resolution(ctx);
  return (double)asecs * 1e-18;
}

 
// Returns a unix time stamp as seconds and fraction of seconds;
// The fraction of seconds is for added precision if necessary,
// and can be larger than one to indicate leap seconds.
// This still needs to be adjusted to our epoch and taking account of leap seconds.

kk_std_core_types__tuple2 kk_std_time_chrono_unix_now(kk_context_t* _ctx) { /* () -> ndet (float64, float64) */ 
  return kk_time_unix_now_tuple(kk_context());
}
 
// The current `:instant` in time as returned by the system clock
// in an optional time scale `ts` (`= ts-ti`).
//
// This uses the best available system clock for the requested
// timescale. For example
// it uses [``CLOCK_UTC``](https://www.madore.org/~david/computers/unix-leap-seconds.html)
// when available to get proper UTC time, or ``CLOCK_TAI`` for TAI time.
//
// Otherwise, it usually uses Unix (POSIX) time (``CLOCK_REALTIME``).
// Unfortunately, most operating systems cannot not report time in leap
// seconds accurately. The `now` function is limited by the OS in this case.
//
// To guard against inaccurate clocks and increase monotonicity,
// the `now` function guarantees that if the current measurement is
// upto 1 second in the past with regard to the previous call to `now`,
// that the returned instant is monotonic by adding nano seconds to the
// previous measurement until the system clock catches up again.
//
// This is effective in particular on older OS's where the time sometimes jumps
// back one second after a leap second. By limiting the adjustment to at most
// one second it ensures the clock catches up soon and does not affect the user
// setting a new time in the past.

kk_std_time_instant__instant kk_std_time_chrono_now_in(kk_std_core_types__optional ts, kk_context_t* _ctx) { /* (ts : ? std/time/instant/timescale) -> ndet std/time/instant/instant */ 
  kk_std_core_types__tuple2 _match_x33 = kk_std_time_chrono_unix_now(_ctx); /*(float64, float64)*/;
  {
    kk_box_t _box_x0 = _match_x33.fst;
    kk_box_t _box_x1 = _match_x33.snd;
    double secs = kk_double_unbox(_box_x0, KK_BORROWED, _ctx);
    double frac = kk_double_unbox(_box_x1, KK_BORROWED, _ctx);
    kk_std_core_types__tuple2_drop(_match_x33, _ctx);
    kk_std_num_ddouble__ddouble _x_x35;
    bool _match_x34 = (frac == (0x0p+0)); /*bool*/;
    if (_match_x34) {
      _x_x35 = kk_std_num_ddouble__new_Ddouble(secs, 0x0p+0, _ctx); /*std/num/ddouble/ddouble*/
    }
    else {
      _x_x35 = kk_std_num_ddouble_dsum(secs, frac, _ctx); /*std/num/ddouble/ddouble*/
    }
    kk_std_core_types__optional _x_x36 = kk_std_core_types__new_Optional(kk_integer_box(kk_integer_from_small(0), _ctx), _ctx); /*? 7*/
    kk_std_core_types__optional _x_x37;
    kk_box_t _x_x38;
    kk_std_time_instant__timescale _x_x39;
    if (kk_std_core_types__is_Optional(ts, _ctx)) {
      kk_box_t _box_x3 = ts._cons._Optional.value;
      kk_std_time_instant__timescale _uniq_ts_33 = kk_std_time_instant__timescale_unbox(_box_x3, KK_BORROWED, _ctx);
      kk_std_time_instant__timescale_dup(_uniq_ts_33, _ctx);
      kk_std_core_types__optional_drop(ts, _ctx);
      _x_x39 = _uniq_ts_33; /*std/time/instant/timescale*/
    }
    else {
      kk_std_core_types__optional_drop(ts, _ctx);
      _x_x39 = kk_std_time_instant__timescale_dup(kk_std_time_utc_ts_ti, _ctx); /*std/time/instant/timescale*/
    }
    _x_x38 = kk_std_time_instant__timescale_box(_x_x39, _ctx); /*7*/
    _x_x37 = kk_std_core_types__new_Optional(_x_x38, _ctx); /*? 7*/
    return kk_std_time_utc_timespan_fs_unix_instant(_x_x35, _x_x36, _x_x37, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_time_chrono__mlift_now_10006_fun41__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_time_chrono__mlift_now_10006_fun41(kk_function_t _fself, kk_box_t _b_x10, kk_context_t* _ctx);
static kk_function_t kk_std_time_chrono__new_mlift_now_10006_fun41(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_time_chrono__mlift_now_10006_fun41, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_time_chrono__mlift_now_10006_fun41(kk_function_t _fself, kk_box_t _b_x10, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_time_instant__instant _x_x42;
  kk_std_core_types__optional _x_x43 = kk_std_core_types__optional_unbox(_b_x10, KK_OWNED, _ctx); /*? std/time/instant/timescale*/
  _x_x42 = kk_std_time_chrono_now_in(_x_x43, _ctx); /*std/time/instant/instant*/
  return kk_std_time_instant__instant_box(_x_x42, _ctx);
}

kk_std_time_instant__instant kk_std_time_chrono__mlift_now_10006(kk_std_time_instant__timescale _y_x10003, kk_context_t* _ctx) { /* (std/time/instant/timescale) -> std/time/utc/utc std/time/instant/instant */ 
  kk_box_t _x_x40;
  kk_box_t _x_x44;
  kk_std_core_types__optional _x_x45 = kk_std_core_types__new_Optional(kk_std_time_instant__timescale_box(_y_x10003, _ctx), _ctx); /*? 7*/
  _x_x44 = kk_std_core_types__optional_box(_x_x45, _ctx); /*8579*/
  _x_x40 = kk_std_core_hnd__open_none1(kk_std_time_chrono__new_mlift_now_10006_fun41(_ctx), _x_x44, _ctx); /*8580*/
  return kk_std_time_instant__instant_unbox(_x_x40, KK_OWNED, _ctx);
}
 
// The current `:instant` in time as returned by the system clock
// in the UTC timescale. Equivalent to `now-in(utc())`, see
// `now-in` for further information about the system clock.


// lift anonymous function
struct kk_std_time_chrono_now_fun49__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_time_chrono_now_fun49(kk_function_t _fself, kk_box_t _b_x21, kk_context_t* _ctx);
static kk_function_t kk_std_time_chrono_new_now_fun49(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_time_chrono_now_fun49, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_time_chrono_now_fun49(kk_function_t _fself, kk_box_t _b_x21, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_time_instant__instant _x_x50;
  kk_std_time_instant__timescale _x_x51 = kk_std_time_instant__timescale_unbox(_b_x21, KK_OWNED, _ctx); /*std/time/instant/timescale*/
  _x_x50 = kk_std_time_chrono__mlift_now_10006(_x_x51, _ctx); /*std/time/instant/instant*/
  return kk_std_time_instant__instant_box(_x_x50, _ctx);
}


// lift anonymous function
struct kk_std_time_chrono_now_fun52__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_time_chrono_now_fun52(kk_function_t _fself, kk_box_t _b_x25, kk_context_t* _ctx);
static kk_function_t kk_std_time_chrono_new_now_fun52(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_time_chrono_now_fun52, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_time_chrono_now_fun52(kk_function_t _fself, kk_box_t _b_x25, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_time_instant__instant _x_x53;
  kk_std_core_types__optional _x_x54 = kk_std_core_types__optional_unbox(_b_x25, KK_OWNED, _ctx); /*? std/time/instant/timescale*/
  _x_x53 = kk_std_time_chrono_now_in(_x_x54, _ctx); /*std/time/instant/instant*/
  return kk_std_time_instant__instant_box(_x_x53, _ctx);
}

kk_std_time_instant__instant kk_std_time_chrono_now(kk_context_t* _ctx) { /* () -> <ndet,std/time/utc/utc> std/time/instant/instant */ 
  kk_std_core_hnd__ev ev_10010 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/time/utc/utc>*/;
  kk_std_time_instant__timescale x_10007;
  kk_box_t _x_x46;
  {
    struct kk_std_core_hnd_Ev* _con_x47 = kk_std_core_hnd__as_Ev(ev_10010, _ctx);
    kk_box_t _box_x14 = _con_x47->hnd;
    int32_t m = _con_x47->marker;
    kk_std_time_utc__utc h = kk_std_time_utc__utc_unbox(_box_x14, KK_BORROWED, _ctx);
    kk_std_time_utc__utc_dup(h, _ctx);
    kk_std_core_hnd__clause0 _match_x31;
    kk_std_core_hnd__clause0 _brw_x32 = kk_std_time_utc__select_utc(h, _ctx); /*hnd/clause0<std/time/instant/timescale,std/time/utc/utc,333,334>*/;
    kk_std_time_utc__utc_drop(h, _ctx);
    _match_x31 = _brw_x32; /*hnd/clause0<std/time/instant/timescale,std/time/utc/utc,333,334>*/
    {
      kk_function_t _fun_unbox_x17 = _match_x31.clause;
      _x_x46 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x17, (_fun_unbox_x17, m, ev_10010, _ctx), _ctx); /*35*/
    }
  }
  x_10007 = kk_std_time_instant__timescale_unbox(_x_x46, KK_OWNED, _ctx); /*std/time/instant/timescale*/
  kk_box_t _x_x48;
  if (kk_yielding(kk_context())) {
    kk_datatype_ptr_dropn(x_10007, (KK_I32(10)), _ctx);
    _x_x48 = kk_std_core_hnd_yield_extend(kk_std_time_chrono_new_now_fun49(_ctx), _ctx); /*2978*/
  }
  else {
    kk_box_t _x_x55;
    kk_std_core_types__optional _x_x56 = kk_std_core_types__new_Optional(kk_std_time_instant__timescale_box(x_10007, _ctx), _ctx); /*? 7*/
    _x_x55 = kk_std_core_types__optional_box(_x_x56, _ctx); /*8579*/
    _x_x48 = kk_std_core_hnd__open_none1(kk_std_time_chrono_new_now_fun52(_ctx), _x_x55, _ctx); /*2978*/
  }
  return kk_std_time_instant__instant_unbox(_x_x48, KK_OWNED, _ctx);
}

double kk_std_time_chrono_xnow_resolution(kk_context_t* _ctx) { /* () -> ndet float64 */ 
  return kk_time_dresolution(kk_context());
}

// initialization
void kk_std_time_chrono__init(kk_context_t* _ctx){
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
  kk_std_time_timestamp__init(_ctx);
  kk_std_time_duration__init(_ctx);
  kk_std_time_instant__init(_ctx);
  kk_std_time_utc__init(_ctx);
  kk_std_num_ddouble__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
}

// termination
void kk_std_time_chrono__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_num_ddouble__done(_ctx);
  kk_std_time_utc__done(_ctx);
  kk_std_time_instant__done(_ctx);
  kk_std_time_duration__done(_ctx);
  kk_std_time_timestamp__done(_ctx);
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
