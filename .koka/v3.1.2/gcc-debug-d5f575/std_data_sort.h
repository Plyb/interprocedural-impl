#pragma once
#ifndef kk_std_data_sort_H
#define kk_std_data_sort_H
// Koka generated module: std/data/sort, koka version: 3.1.2, platform: 64-bit
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

// type declarations

// value declarations

kk_std_core_types__list kk_std_data_sort__mlift_sort_10017(kk_std_core_types__list _y_x10004, kk_box_t pivot, kk_std_core_types__list _y_x10005, kk_context_t* _ctx); /* forall<a,e> (list<a>, pivot : a, list<a>) -> e list<a> */ 

kk_std_core_types__list kk_std_data_sort__mlift_sort_10018(kk_std_core_types__list greater, kk_box_t pivot_0, kk_function_t _implicit_fs__lp__lt__rp_, kk_std_core_types__list _y_x10004_0, kk_context_t* _ctx); /* forall<a,e> (greater : list<a>, pivot : a, ?(<) : (a, a) -> e bool, list<a>) -> e list<a> */ 

kk_std_core_types__list kk_std_data_sort__mlift_sort_10019(kk_box_t pivot_1, kk_function_t _implicit_fs__lp__at_x_0_lt__rp_, kk_std_core_types__tuple2 _y_x10003, kk_context_t* _ctx); /* forall<a,e> (pivot : a, ?(<) : (a, a) -> e bool, (list<a>, list<a>)) -> e list<a> */ 

kk_std_core_types__list kk_std_data_sort_sort(kk_std_core_types__list l, kk_function_t _implicit_fs__lp__at_x_1_lt__rp_, kk_context_t* _ctx); /* forall<a,e> (l : list<a>, ?(<) : (a, a) -> e bool) -> e list<a> */ 

kk_std_core_types__list kk_std_data_sort__mlift_trmc_group_10020(kk_std_core_types__cctx _acc, kk_box_t pivot, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_std_core_types__tuple2 _y_x10009, kk_context_t* _ctx); /* forall<a,e> (ctx<list<list<a>>>, pivot : a, ?(==) : (a, a) -> e bool, (list<a>, list<a>)) -> e list<list<a>> */ 

kk_std_core_types__list kk_std_data_sort__trmc_group(kk_std_core_types__list l, kk_function_t _implicit_fs__lp__at_x_0_eq__eq__rp_, kk_std_core_types__cctx _acc_0, kk_context_t* _ctx); /* forall<a,e> (l : list<a>, ?(==) : (a, a) -> e bool, ctx<list<list<a>>>) -> e list<list<a>> */ 

kk_std_core_types__list kk_std_data_sort_group(kk_std_core_types__list l_0, kk_function_t _implicit_fs__lp__at_x_1_eq__eq__rp_, kk_context_t* _ctx); /* forall<a,e> (l : list<a>, ?(==) : (a, a) -> e bool) -> e list<list<a>> */ 

static inline kk_std_core_types__list kk_std_data_sort_group_by(kk_std_core_types__list l, kk_function_t same_group, kk_context_t* _ctx) { /* forall<a,e> (l : list<a>, same-group : (a, a) -> e bool) -> e list<list<a>> */ 
  return kk_std_data_sort_group(l, same_group, _ctx);
}

kk_std_core_types__tuple2 kk_std_data_sort_qpartition(kk_box_t x, kk_std_core_types__list ys, kk_function_t _implicit_fs__lp__lt__rp_, kk_context_t* _ctx); /* forall<a> (x : a, ys : list<a>, ?(<) : (a, a) -> bool) -> (list<a>, list<a>) */ 

kk_std_core_types__list kk_std_data_sort_quicksort(kk_std_core_types__list xs, kk_std_core_types__list res, kk_function_t _implicit_fs__lp__lt__rp_, kk_context_t* _ctx); /* forall<a> (xs : list<a>, res : list<a>, ?(<) : (a, a) -> bool) -> list<a> */ 

void kk_std_data_sort__init(kk_context_t* _ctx);


void kk_std_data_sort__done(kk_context_t* _ctx);

#endif // header
