#pragma once
#ifndef kk_std_test_bench_H
#define kk_std_test_bench_H
// Koka generated module: std/test/bench, koka version: 3.1.2, platform: 64-bit
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
#include "std_time_duration.h"
#include "std_time_instant.h"
#include "std_time_utc.h"
#include "std_time_chrono.h"
#include "std_num_ddouble.h"

// type declarations

// value declarations

kk_box_t kk_std_test_bench__mlift_time_10019(kk_box_t res, kk_std_time_instant__instant start, kk_std_time_instant__instant end, kk_context_t* _ctx); /* forall<a,e> (res : a, start : std/time/instant/instant, end : std/time/instant/instant) -> <ndet,std/time/utc/utc|e> a */ 

kk_box_t kk_std_test_bench__mlift_time_10020(kk_std_time_instant__instant start, kk_box_t res, kk_context_t* _ctx); /* forall<a,e> (start : std/time/instant/instant, res : a) -> <ndet,std/time/utc/utc|e> a */ 

kk_box_t kk_std_test_bench__mlift_time_10021(kk_function_t f, kk_std_time_instant__instant start, kk_context_t* _ctx); /* forall<a,e> (f : () -> <ndet,std/time/utc/utc|e> a, start : std/time/instant/instant) -> <ndet,std/time/utc/utc|e> a */ 

kk_box_t kk_std_test_bench_time(kk_function_t f, kk_context_t* _ctx); /* forall<a,e> (f : () -> <ndet,std/time/utc/utc|e> a) -> <ndet,std/time/utc/utc|e> a */ 

void kk_std_test_bench__init(kk_context_t* _ctx);


void kk_std_test_bench__done(kk_context_t* _ctx);

#endif // header
