#pragma once
#ifndef kk_std_data_hash_H
#define kk_std_data_hash_H
// Koka generated module: std/data/hash, koka version: 3.1.2, platform: 64-bit
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
#include "std_num_int64.h"
#include "std_test_test.h"
#include "std_core_dash_extras.h"
/*----------------------------------------------------------------------------
   Copyright 2024, Koka-Community Authors

   Licensed under the MIT License ("The License"). You may not
   use this file except in compliance with the License. A copy of the License
   can be found in the LICENSE file at the root of this distribution.
----------------------------------------------------------------------------*/
int64_t kk_thread_seed(kk_context_t* ctx);

kk_integer_t kk_string_hash(kk_string_t s, int64_t seed, kk_context_t* ctx);

kk_integer_t kk_hash_vector_int64(kk_vector_t v, int64_t seed, kk_context_t* ctx);

kk_integer_t kk_integer_hash(kk_integer_t i, int64_t seed, kk_context_t* ctx);

kk_integer_t hash_small_integer(kk_integer_t i, int64_t seed, kk_context_t* ctx);

kk_integer_t hash_big_integer(kk_integer_t i, int64_t seed, kk_context_t* ctx);

uint64_t xxh64_read_u64(uint8_t* input, size_t cursor);

uint32_t xxh64_read_u32(uint8_t* input, size_t cursor);

uint64_t xxh64(uint8_t* input, size_t input_length, uint64_t seed);

uint64_t xxh64_round(uint64_t acc, uint64_t input);

uint64_t xxh64_merge_round(uint64_t acc, uint64_t value);

uint64_t xxh64_finalize(uint64_t input, uint8_t* data, size_t data_length, uint64_t cursor);

uint64_t xxh64_avalanche(uint64_t input);


// type declarations

// value declarations

extern int64_t kk_std_data_hash_thread_fs_seed;

static inline kk_integer_t kk_std_data_hash_int_fs_hash(kk_integer_t i, int64_t seed, kk_context_t* _ctx) { /* (i : int, seed : int64) -> int */ 
  return kk_integer_hash(i,seed,kk_context());
}

kk_unit_t kk_std_data_hash_list_hash_helper(kk_std_core_types__list l, kk_vector_t buf, kk_integer_t index, kk_function_t _implicit_fs_hasher, int64_t _implicit_fs_seed, kk_context_t* _ctx); /* forall<a> (l : list<a>, buf : vector<int64>, index : int, ?hasher : (a, int64) -> int, ?seed : int64) -> () */ 

kk_integer_t kk_std_data_hash_list_fs_hash(kk_std_core_types__list l, kk_function_t _implicit_fs_hasher, int64_t _implicit_fs_seed, kk_context_t* _ctx); /* forall<a> (l : list<a>, ?hasher : (a, int64) -> int, ?seed : int64) -> int */ 

kk_integer_t kk_std_data_hash_vector_fs_hash(kk_vector_t v, kk_function_t _implicit_fs_hasher, int64_t _implicit_fs_seed, kk_context_t* _ctx); /* forall<a> (v : vector<a>, ?hasher : (a, int64) -> int, ?seed : int64) -> int */ 

kk_integer_t kk_std_data_hash_either_fs_hash(kk_std_core_types__either e, kk_function_t _implicit_fs_l_fs_hasher, kk_function_t _implicit_fs_r_fs_hasher, int64_t seed, kk_context_t* _ctx); /* forall<a,b> (e : either<a,b>, ?l/hasher : (a, int64) -> int, ?r/hasher : (b, int64) -> int, seed : int64) -> int */ 
 
// A hashing function for booleans. It takes a bool `b` and an implicit `seed` which is is an `int64`.

static inline kk_integer_t kk_std_data_hash_bool_fs_hash(bool b, int64_t seed, kk_context_t* _ctx) { /* (b : bool, seed : int64) -> int */ 
  if (b) {
    return kk_integer_hash((kk_integer_from_small(1)),seed,kk_context());
  }
  {
    return kk_integer_hash((kk_integer_from_small(0)),seed,kk_context());
  }
}
 
// A hashing function for characters. It takes a char `c` and an implicit `seed` which is is an `int64`.

static inline kk_integer_t kk_std_data_hash_char_fs_hash(kk_char_t c, int64_t seed, kk_context_t* _ctx) { /* (c : char, seed : int64) -> int */ 
  kk_integer_t i_10009 = kk_integer_from_int(c,kk_context()); /*int*/;
  return kk_integer_hash(i_10009,seed,kk_context());
}

kk_integer_t kk_std_data_hash_maybe_fs_hash(kk_std_core_types__maybe m, kk_function_t _implicit_fs_hasher, int64_t seed, kk_context_t* _ctx); /* forall<a> (m : maybe<a>, ?hasher : (a, int64) -> int, seed : int64) -> int */ 

static inline kk_unit_t kk_std_data_hash_test_hash(kk_context_t* _ctx) { /* () -> console/console () */ 
  kk_string_t _x_x75;
  kk_integer_t _x_x76 = kk_integer_from_int64(kk_std_data_hash_thread_fs_seed,kk_context()); /*int*/
  _x_x75 = kk_std_core_int_show(_x_x76, _ctx); /*string*/
  kk_std_core_console_printsln(_x_x75, _ctx); return kk_Unit;
}

void kk_std_data_hash__init(kk_context_t* _ctx);


void kk_std_data_hash__done(kk_context_t* _ctx);

#endif // header
