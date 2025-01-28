#pragma once
#ifndef kk_main_H
#define kk_main_H
// Koka generated module: main, koka version: 3.1.2, platform: 64-bit
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
#include "std_data_hashmap.h"
#include "std_data_hashset.h"
#include "std_data_hash.h"
#include "std_core_undiv.h"
#include "std_core_unsafe.h"
#include "std_data_sort.h"

// type declarations

// value type main/literal
struct kk_main_StringLit {
  kk_string_t str;
};
struct kk_main_NumberLit {
  kk_integer_t num;
};
struct kk_main_literal_s {
  kk_value_tag_t _tag;
  union {
    struct kk_main_StringLit StringLit;
    struct kk_main_NumberLit NumberLit;
  } _cons;
};
typedef struct kk_main_literal_s kk_main__literal;
static inline kk_main__literal kk_main__new_StringLit(kk_string_t str, kk_context_t* _ctx) {
  kk_main__literal _con;
  _con._tag = kk_value_tag(1);
  _con._cons.StringLit.str = str;
  return _con;
}
static inline kk_main__literal kk_main__new_NumberLit(kk_integer_t num, kk_context_t* _ctx) {
  kk_main__literal _con;
  _con._tag = kk_value_tag(2);
  _con._cons.NumberLit.num = num;
  return _con;
}
static inline bool kk_main__is_StringLit(kk_main__literal x, kk_context_t* _ctx) {
  return (kk_value_tag_eq(x._tag, kk_value_tag(1)));
}
static inline bool kk_main__is_NumberLit(kk_main__literal x, kk_context_t* _ctx) {
  return (kk_value_tag_eq(x._tag, kk_value_tag(2)));
}
static inline kk_main__literal kk_main__literal_dup(kk_main__literal _x, kk_context_t* _ctx) {
  if (kk_main__is_StringLit(_x, _ctx)) { kk_string_dup(_x._cons.StringLit.str, _ctx); }
  else { kk_integer_dup(_x._cons.NumberLit.num, _ctx); }
  return _x;
}
static inline void kk_main__literal_drop(kk_main__literal _x, kk_context_t* _ctx) {
  if (kk_main__is_StringLit(_x, _ctx)) { kk_string_drop(_x._cons.StringLit.str, _ctx); }
  else { kk_integer_drop(_x._cons.NumberLit.num, _ctx); }
}
static inline kk_box_t kk_main__literal_box(kk_main__literal _x, kk_context_t* _ctx) {
  kk_box_t _box;
  kk_valuetype_box(kk_main__literal, _box, _x, 2 /* scan count */, _ctx);
  return _box;
}
static inline kk_main__literal kk_main__literal_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  kk_main__literal _unbox;
  kk_valuetype_unbox(kk_main__literal, _unbox, _x, _borrow, _ctx);
  return _unbox;
}

// value type main/fieldName
struct kk_main_FNNamed {
  kk_string_t name;
};
struct kk_main_FNL {
  kk_box_t _unused;
};
struct kk_main_fieldName_s {
  kk_value_tag_t _tag;
  union {
    struct kk_main_FNNamed FNNamed;
    struct kk_main_FNL FNL;
    kk_box_t _fields[1];
  } _cons;
};
typedef struct kk_main_fieldName_s kk_main__fieldName;
static inline kk_main__fieldName kk_main__new_FNL(kk_context_t* _ctx) {
  kk_main__fieldName _con;
  _con._tag = kk_value_tag(2);
  _con._cons._fields[0] = kk_box_null();
  return _con;
}
static inline kk_main__fieldName kk_main__new_FNNamed(kk_string_t name, kk_context_t* _ctx) {
  kk_main__fieldName _con;
  _con._tag = kk_value_tag(1);
  _con._cons.FNNamed.name = name;
  return _con;
}
static inline bool kk_main__is_FNL(kk_main__fieldName x, kk_context_t* _ctx) {
  return (kk_value_tag_eq(x._tag, kk_value_tag(2)));
}
static inline bool kk_main__is_FNNamed(kk_main__fieldName x, kk_context_t* _ctx) {
  return (kk_value_tag_eq(x._tag, kk_value_tag(1)));
}
static inline kk_main__fieldName kk_main__fieldName_dup(kk_main__fieldName _x, kk_context_t* _ctx) {
  if (kk_main__is_FNNamed(_x, _ctx)) { kk_string_dup(_x._cons.FNNamed.name, _ctx); }
  return _x;
}
static inline void kk_main__fieldName_drop(kk_main__fieldName _x, kk_context_t* _ctx) {
  if (kk_main__is_FNNamed(_x, _ctx)) { kk_string_drop(_x._cons.FNNamed.name, _ctx); }
}
static inline kk_box_t kk_main__fieldName_box(kk_main__fieldName _x, kk_context_t* _ctx) {
  if (kk_main__is_FNL(_x, _ctx)) { return kk_box_Nothing(); }
    else { return kk_box_Just(kk_string_box(_x._cons.FNNamed.name), _ctx); }
}
static inline kk_main__fieldName kk_main__fieldName_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  if (kk_box_is_Nothing(_x)) { return kk_main__new_FNL(_ctx); }
    else { return kk_main__new_FNNamed(kk_string_unbox(kk_unbox_Just(_x, _borrow, _ctx)), _ctx); };
}

// value type main/op
enum kk_main__op_e {
  kk_main_AndOp,
  kk_main_NotOp,
  kk_main_EqOp,
  kk_main_GtOp,
  kk_main_PlusOp
};
typedef uint8_t kk_main__op;

static inline kk_main__op kk_main__new_AndOp(kk_context_t* _ctx) {
  return kk_main_AndOp;
}
static inline kk_main__op kk_main__new_NotOp(kk_context_t* _ctx) {
  return kk_main_NotOp;
}
static inline kk_main__op kk_main__new_EqOp(kk_context_t* _ctx) {
  return kk_main_EqOp;
}
static inline kk_main__op kk_main__new_GtOp(kk_context_t* _ctx) {
  return kk_main_GtOp;
}
static inline kk_main__op kk_main__new_PlusOp(kk_context_t* _ctx) {
  return kk_main_PlusOp;
}
static inline bool kk_main__is_AndOp(kk_main__op x, kk_context_t* _ctx) {
  return (x == kk_main_AndOp);
}
static inline bool kk_main__is_NotOp(kk_main__op x, kk_context_t* _ctx) {
  return (x == kk_main_NotOp);
}
static inline bool kk_main__is_EqOp(kk_main__op x, kk_context_t* _ctx) {
  return (x == kk_main_EqOp);
}
static inline bool kk_main__is_GtOp(kk_main__op x, kk_context_t* _ctx) {
  return (x == kk_main_GtOp);
}
static inline bool kk_main__is_PlusOp(kk_main__op x, kk_context_t* _ctx) {
  return (x == kk_main_PlusOp);
}
static inline kk_main__op kk_main__op_dup(kk_main__op _x, kk_context_t* _ctx) {
  return _x;
}
static inline void kk_main__op_drop(kk_main__op _x, kk_context_t* _ctx) {
  
}
static inline kk_box_t kk_main__op_box(kk_main__op _x, kk_context_t* _ctx) {
  return kk_enum_box(_x);
}
static inline kk_main__op kk_main__op_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return (kk_main__op)kk_enum_unbox(_x);
}

// type main/absOp
struct kk_main__absOp_s {
  kk_block_t _block;
};
typedef kk_datatype_t kk_main__absOp;

// type main/absValue
struct kk_main__absValue_s {
  kk_block_t _block;
};
typedef kk_datatype_t kk_main__absValue;

// type main/path
struct kk_main__path_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_main__path;
struct kk_main_AOOp {
  struct kk_main__absOp_s _base;
  kk_std_core_types__list values;
  kk_main__op op;
};
static inline kk_main__absOp kk_main__new_AOTrue(kk_context_t* _ctx) {
  return kk_datatype_from_tag((kk_tag_t)(1));
}
static inline kk_main__absOp kk_main__base_AOOp(struct kk_main_AOOp* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__absOp kk_main__new_AOOp(kk_reuse_t _at, int32_t _cpath, kk_main__op op, kk_std_core_types__list values, kk_context_t* _ctx) {
  struct kk_main_AOOp* _con = kk_block_alloc_at_as(struct kk_main_AOOp, _at, 1 /* scan count */, _cpath, (kk_tag_t)(2), _ctx);
  _con->values = values;
  _con->op = op;
  return kk_main__base_AOOp(_con, _ctx);
}
static inline struct kk_main_AOOp* kk_main__as_AOOp(kk_main__absOp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_AOOp*, x, (kk_tag_t)(2), _ctx);
}
static inline bool kk_main__is_AOTrue(kk_main__absOp x, kk_context_t* _ctx) {
  return (kk_datatype_has_singleton_tag(x, (kk_tag_t)(1)));
}
static inline bool kk_main__is_AOOp(kk_main__absOp x, kk_context_t* _ctx) {
  return (!kk_main__is_AOTrue(x, _ctx));
}
static inline kk_main__absOp kk_main__absOp_dup(kk_main__absOp _x, kk_context_t* _ctx) {
  return kk_datatype_dup(_x, _ctx);
}
static inline void kk_main__absOp_drop(kk_main__absOp _x, kk_context_t* _ctx) {
  kk_datatype_drop(_x, _ctx);
}
static inline kk_box_t kk_main__absOp_box(kk_main__absOp _x, kk_context_t* _ctx) {
  return kk_datatype_box(_x);
}
static inline kk_main__absOp kk_main__absOp_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_unbox(_x);
}
struct kk_main_AVLit {
  struct kk_main__absValue_s _base;
  kk_std_data_hashset__hash_set lits;
};
struct kk_main_AVOp {
  struct kk_main__absValue_s _base;
  kk_std_data_hashset__hash_set ops;
};
struct kk_main_AVPath {
  struct kk_main__absValue_s _base;
  kk_std_data_hashset__hash_set paths;
};
static inline kk_main__absValue kk_main__new_AVBot(kk_context_t* _ctx) {
  return kk_datatype_from_tag((kk_tag_t)(1));
}
static inline kk_main__absValue kk_main__base_AVLit(struct kk_main_AVLit* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__absValue kk_main__new_AVLit(kk_reuse_t _at, int32_t _cpath, kk_std_data_hashset__hash_set lits, kk_context_t* _ctx) {
  struct kk_main_AVLit* _con = kk_block_alloc_at_as(struct kk_main_AVLit, _at, 1 /* scan count */, _cpath, (kk_tag_t)(2), _ctx);
  _con->lits = lits;
  return kk_main__base_AVLit(_con, _ctx);
}
static inline struct kk_main_AVLit* kk_main__as_AVLit(kk_main__absValue x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_AVLit*, x, (kk_tag_t)(2), _ctx);
}
static inline kk_main__absValue kk_main__base_AVOp(struct kk_main_AVOp* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__absValue kk_main__new_AVOp(kk_reuse_t _at, int32_t _cpath, kk_std_data_hashset__hash_set ops, kk_context_t* _ctx) {
  struct kk_main_AVOp* _con = kk_block_alloc_at_as(struct kk_main_AVOp, _at, 1 /* scan count */, _cpath, (kk_tag_t)(3), _ctx);
  _con->ops = ops;
  return kk_main__base_AVOp(_con, _ctx);
}
static inline struct kk_main_AVOp* kk_main__as_AVOp(kk_main__absValue x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_AVOp*, x, (kk_tag_t)(3), _ctx);
}
static inline kk_main__absValue kk_main__base_AVPath(struct kk_main_AVPath* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__absValue kk_main__new_AVPath(kk_reuse_t _at, int32_t _cpath, kk_std_data_hashset__hash_set paths, kk_context_t* _ctx) {
  struct kk_main_AVPath* _con = kk_block_alloc_at_as(struct kk_main_AVPath, _at, 1 /* scan count */, _cpath, (kk_tag_t)(4), _ctx);
  _con->paths = paths;
  return kk_main__base_AVPath(_con, _ctx);
}
static inline struct kk_main_AVPath* kk_main__as_AVPath(kk_main__absValue x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_AVPath*, x, (kk_tag_t)(4), _ctx);
}
static inline bool kk_main__is_AVBot(kk_main__absValue x, kk_context_t* _ctx) {
  return (kk_datatype_has_singleton_tag(x, (kk_tag_t)(1)));
}
static inline bool kk_main__is_AVLit(kk_main__absValue x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(2), _ctx));
}
static inline bool kk_main__is_AVOp(kk_main__absValue x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(3), _ctx));
}
static inline bool kk_main__is_AVPath(kk_main__absValue x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(4), _ctx));
}
static inline kk_main__absValue kk_main__absValue_dup(kk_main__absValue _x, kk_context_t* _ctx) {
  return kk_datatype_dup(_x, _ctx);
}
static inline void kk_main__absValue_drop(kk_main__absValue _x, kk_context_t* _ctx) {
  kk_datatype_drop(_x, _ctx);
}
static inline kk_box_t kk_main__absValue_box(kk_main__absValue _x, kk_context_t* _ctx) {
  return kk_datatype_box(_x);
}
static inline kk_main__absValue kk_main__absValue_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_unbox(_x);
}
struct kk_main_Path {
  struct kk_main__path_s _base;
  kk_std_core_types__list names;
  kk_main__absOp absOp;
  bool dependence;
};
static inline kk_main__path kk_main__base_Path(struct kk_main_Path* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__path kk_main__new_Path(kk_reuse_t _at, int32_t _cpath, kk_std_core_types__list names, kk_main__absOp absOp, bool dependence, kk_context_t* _ctx) {
  struct kk_main_Path* _con = kk_block_alloc_at_as(struct kk_main_Path, _at, 2 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->names = names;
  _con->absOp = absOp;
  _con->dependence = dependence;
  return kk_main__base_Path(_con, _ctx);
}
static inline struct kk_main_Path* kk_main__as_Path(kk_main__path x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_Path*, x, (kk_tag_t)(1), _ctx);
}
static inline bool kk_main__is_Path(kk_main__path x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_main__path kk_main__path_dup(kk_main__path _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_main__path_drop(kk_main__path _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_main__path_box(kk_main__path _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_main__path kk_main__path_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// value type main/varName
struct kk_main_VarName {
  kk_string_t name;
};
typedef struct kk_main_VarName kk_main__varName;
static inline kk_main__varName kk_main__new_VarName(kk_string_t name, kk_context_t* _ctx) {
  kk_main__varName _con = { name };
  return _con;
}
static inline bool kk_main__is_VarName(kk_main__varName x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_main__varName kk_main__varName_dup(kk_main__varName _x, kk_context_t* _ctx) {
  kk_string_dup(_x.name, _ctx);
  return _x;
}
static inline void kk_main__varName_drop(kk_main__varName _x, kk_context_t* _ctx) {
  kk_string_drop(_x.name, _ctx);
}
static inline kk_box_t kk_main__varName_box(kk_main__varName _x, kk_context_t* _ctx) {
  return kk_string_box(_x.name);
}
static inline kk_main__varName kk_main__varName_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_main__new_VarName(kk_string_unbox(_x), _ctx);
}

// type main/exp
struct kk_main__exp_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_main__exp;
struct kk_main_NullE {
  struct kk_main__exp_s _base;
  kk_integer_t id;
};
struct kk_main_LitE {
  struct kk_main__exp_s _base;
  kk_main__literal lit;
  kk_integer_t id;
};
struct kk_main_RootE {
  struct kk_main__exp_s _base;
  kk_integer_t id;
};
struct kk_main_DotE {
  struct kk_main__exp_s _base;
  kk_main__exp e;
  kk_main__fieldName f;
  kk_integer_t id;
};
struct kk_main_OpE {
  struct kk_main__exp_s _base;
  kk_main__exp lhs;
  kk_main__exp rhs;
  kk_integer_t id;
  kk_main__op op;
};
struct kk_main_VarE {
  struct kk_main__exp_s _base;
  kk_main__varName v;
  kk_integer_t id;
};
struct kk_main_AsgnE {
  struct kk_main__exp_s _base;
  kk_main__varName v;
  kk_main__exp rhs;
  kk_integer_t id;
};
struct kk_main_IfE {
  struct kk_main__exp_s _base;
  kk_main__exp cont;
  kk_main__exp thn;
  kk_main__exp els;
  kk_integer_t id;
};
struct kk_main_ForE {
  struct kk_main__exp_s _base;
  kk_main__varName v;
  kk_main__exp from;
  kk_main__exp body;
  kk_integer_t id;
};
struct kk_main_SeqE {
  struct kk_main__exp_s _base;
  kk_main__exp first;
  kk_main__exp second;
  kk_integer_t id;
};
struct kk_main_PrintE {
  struct kk_main__exp_s _base;
  kk_main__exp e;
  kk_integer_t id;
};
static inline kk_main__exp kk_main__base_NullE(struct kk_main_NullE* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__exp kk_main__new_NullE(kk_reuse_t _at, int32_t _cpath, kk_integer_t id, kk_context_t* _ctx) {
  struct kk_main_NullE* _con = kk_block_alloc_at_as(struct kk_main_NullE, _at, 1 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->id = id;
  return kk_main__base_NullE(_con, _ctx);
}
static inline struct kk_main_NullE* kk_main__as_NullE(kk_main__exp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_NullE*, x, (kk_tag_t)(1), _ctx);
}
static inline kk_main__exp kk_main__base_RootE(struct kk_main_RootE* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__exp kk_main__new_RootE(kk_reuse_t _at, int32_t _cpath, kk_integer_t id, kk_context_t* _ctx) {
  struct kk_main_RootE* _con = kk_block_alloc_at_as(struct kk_main_RootE, _at, 1 /* scan count */, _cpath, (kk_tag_t)(3), _ctx);
  _con->id = id;
  return kk_main__base_RootE(_con, _ctx);
}
static inline struct kk_main_RootE* kk_main__as_RootE(kk_main__exp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_RootE*, x, (kk_tag_t)(3), _ctx);
}
static inline kk_main__exp kk_main__base_LitE(struct kk_main_LitE* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__exp kk_main__new_LitE(kk_reuse_t _at, int32_t _cpath, kk_main__literal lit, kk_integer_t id, kk_context_t* _ctx) {
  struct kk_main_LitE* _con = kk_block_alloc_at_as(struct kk_main_LitE, _at, 3 /* scan count */, _cpath, (kk_tag_t)(2), _ctx);
  _con->lit = lit;
  _con->id = id;
  return kk_main__base_LitE(_con, _ctx);
}
static inline struct kk_main_LitE* kk_main__as_LitE(kk_main__exp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_LitE*, x, (kk_tag_t)(2), _ctx);
}
static inline kk_main__exp kk_main__base_VarE(struct kk_main_VarE* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__exp kk_main__new_VarE(kk_reuse_t _at, int32_t _cpath, kk_main__varName v, kk_integer_t id, kk_context_t* _ctx) {
  struct kk_main_VarE* _con = kk_block_alloc_at_as(struct kk_main_VarE, _at, 2 /* scan count */, _cpath, (kk_tag_t)(6), _ctx);
  _con->v = v;
  _con->id = id;
  return kk_main__base_VarE(_con, _ctx);
}
static inline struct kk_main_VarE* kk_main__as_VarE(kk_main__exp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_VarE*, x, (kk_tag_t)(6), _ctx);
}
static inline kk_main__exp kk_main__base_PrintE(struct kk_main_PrintE* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__exp kk_main__new_PrintE(kk_reuse_t _at, int32_t _cpath, kk_main__exp e, kk_integer_t id, kk_context_t* _ctx) {
  struct kk_main_PrintE* _con = kk_block_alloc_at_as(struct kk_main_PrintE, _at, 2 /* scan count */, _cpath, (kk_tag_t)(11), _ctx);
  _con->e = e;
  _con->id = id;
  return kk_main__base_PrintE(_con, _ctx);
}
static inline struct kk_main_PrintE* kk_main__as_PrintE(kk_main__exp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_PrintE*, x, (kk_tag_t)(11), _ctx);
}
static inline kk_main__exp kk_main__base_DotE(struct kk_main_DotE* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__exp kk_main__new_DotE(kk_reuse_t _at, int32_t _cpath, kk_main__exp e, kk_main__fieldName f, kk_integer_t id, kk_context_t* _ctx) {
  struct kk_main_DotE* _con = kk_block_alloc_at_as(struct kk_main_DotE, _at, 4 /* scan count */, _cpath, (kk_tag_t)(4), _ctx);
  _con->e = e;
  _con->f = f;
  _con->id = id;
  return kk_main__base_DotE(_con, _ctx);
}
static inline struct kk_main_DotE* kk_main__as_DotE(kk_main__exp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_DotE*, x, (kk_tag_t)(4), _ctx);
}
static inline kk_main__exp kk_main__base_AsgnE(struct kk_main_AsgnE* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__exp kk_main__new_AsgnE(kk_reuse_t _at, int32_t _cpath, kk_main__varName v, kk_main__exp rhs, kk_integer_t id, kk_context_t* _ctx) {
  struct kk_main_AsgnE* _con = kk_block_alloc_at_as(struct kk_main_AsgnE, _at, 3 /* scan count */, _cpath, (kk_tag_t)(7), _ctx);
  _con->v = v;
  _con->rhs = rhs;
  _con->id = id;
  return kk_main__base_AsgnE(_con, _ctx);
}
static inline struct kk_main_AsgnE* kk_main__as_AsgnE(kk_main__exp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_AsgnE*, x, (kk_tag_t)(7), _ctx);
}
static inline kk_main__exp kk_main__base_SeqE(struct kk_main_SeqE* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__exp kk_main__new_SeqE(kk_reuse_t _at, int32_t _cpath, kk_main__exp first, kk_main__exp second, kk_integer_t id, kk_context_t* _ctx) {
  struct kk_main_SeqE* _con = kk_block_alloc_at_as(struct kk_main_SeqE, _at, 3 /* scan count */, _cpath, (kk_tag_t)(10), _ctx);
  _con->first = first;
  _con->second = second;
  _con->id = id;
  return kk_main__base_SeqE(_con, _ctx);
}
static inline struct kk_main_SeqE* kk_main__as_SeqE(kk_main__exp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_SeqE*, x, (kk_tag_t)(10), _ctx);
}
static inline kk_main__exp kk_main__base_OpE(struct kk_main_OpE* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__exp kk_main__new_OpE(kk_reuse_t _at, int32_t _cpath, kk_main__op op, kk_main__exp lhs, kk_main__exp rhs, kk_integer_t id, kk_context_t* _ctx) {
  struct kk_main_OpE* _con = kk_block_alloc_at_as(struct kk_main_OpE, _at, 3 /* scan count */, _cpath, (kk_tag_t)(5), _ctx);
  _con->lhs = lhs;
  _con->rhs = rhs;
  _con->id = id;
  _con->op = op;
  return kk_main__base_OpE(_con, _ctx);
}
static inline struct kk_main_OpE* kk_main__as_OpE(kk_main__exp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_OpE*, x, (kk_tag_t)(5), _ctx);
}
static inline kk_main__exp kk_main__base_IfE(struct kk_main_IfE* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__exp kk_main__new_IfE(kk_reuse_t _at, int32_t _cpath, kk_main__exp cont, kk_main__exp thn, kk_main__exp els, kk_integer_t id, kk_context_t* _ctx) {
  struct kk_main_IfE* _con = kk_block_alloc_at_as(struct kk_main_IfE, _at, 4 /* scan count */, _cpath, (kk_tag_t)(8), _ctx);
  _con->cont = cont;
  _con->thn = thn;
  _con->els = els;
  _con->id = id;
  return kk_main__base_IfE(_con, _ctx);
}
static inline struct kk_main_IfE* kk_main__as_IfE(kk_main__exp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_IfE*, x, (kk_tag_t)(8), _ctx);
}
static inline kk_main__exp kk_main__base_ForE(struct kk_main_ForE* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__exp kk_main__new_ForE(kk_reuse_t _at, int32_t _cpath, kk_main__varName v, kk_main__exp from, kk_main__exp body, kk_integer_t id, kk_context_t* _ctx) {
  struct kk_main_ForE* _con = kk_block_alloc_at_as(struct kk_main_ForE, _at, 4 /* scan count */, _cpath, (kk_tag_t)(9), _ctx);
  _con->v = v;
  _con->from = from;
  _con->body = body;
  _con->id = id;
  return kk_main__base_ForE(_con, _ctx);
}
static inline struct kk_main_ForE* kk_main__as_ForE(kk_main__exp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_ForE*, x, (kk_tag_t)(9), _ctx);
}
static inline bool kk_main__is_NullE(kk_main__exp x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(1), _ctx));
}
static inline bool kk_main__is_RootE(kk_main__exp x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(3), _ctx));
}
static inline bool kk_main__is_LitE(kk_main__exp x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(2), _ctx));
}
static inline bool kk_main__is_VarE(kk_main__exp x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(6), _ctx));
}
static inline bool kk_main__is_PrintE(kk_main__exp x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(11), _ctx));
}
static inline bool kk_main__is_DotE(kk_main__exp x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(4), _ctx));
}
static inline bool kk_main__is_AsgnE(kk_main__exp x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(7), _ctx));
}
static inline bool kk_main__is_SeqE(kk_main__exp x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(10), _ctx));
}
static inline bool kk_main__is_OpE(kk_main__exp x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(5), _ctx));
}
static inline bool kk_main__is_IfE(kk_main__exp x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(8), _ctx));
}
static inline bool kk_main__is_ForE(kk_main__exp x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(9), _ctx));
}
static inline kk_main__exp kk_main__exp_dup(kk_main__exp _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_main__exp_drop(kk_main__exp _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_main__exp_box(kk_main__exp _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_main__exp kk_main__exp_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// type main/absValueExp
struct kk_main__absValueExp_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_main__absValueExp;

// type main/storeExp
struct kk_main__storeExp_s {
  kk_block_t _block;
};
typedef kk_datatype_t kk_main__storeExp;
struct kk_main_AVEExp {
  struct kk_main__absValueExp_s _base;
  kk_main__exp exp;
};
struct kk_main_AVEValue {
  struct kk_main__absValueExp_s _base;
  kk_main__absValue absValue;
};
struct kk_main_AVEDot {
  struct kk_main__absValueExp_s _base;
  kk_main__absValueExp absValueExp;
  kk_main__fieldName f;
};
struct kk_main_AVEOp {
  struct kk_main__absValueExp_s _base;
  kk_main__absValueExp e1;
  kk_main__absValueExp e2;
  kk_main__op op;
};
struct kk_main_AVEStore {
  struct kk_main__absValueExp_s _base;
  kk_main__storeExp storeExp;
  kk_main__varName v;
};
struct kk_main_AVEJoin {
  struct kk_main__absValueExp_s _base;
  kk_main__absValueExp a;
  kk_main__absValueExp b;
};
static inline kk_main__absValueExp kk_main__base_AVEExp(struct kk_main_AVEExp* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__absValueExp kk_main__new_AVEExp(kk_reuse_t _at, int32_t _cpath, kk_main__exp exp, kk_context_t* _ctx) {
  struct kk_main_AVEExp* _con = kk_block_alloc_at_as(struct kk_main_AVEExp, _at, 1 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->exp = exp;
  return kk_main__base_AVEExp(_con, _ctx);
}
static inline struct kk_main_AVEExp* kk_main__as_AVEExp(kk_main__absValueExp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_AVEExp*, x, (kk_tag_t)(1), _ctx);
}
static inline kk_main__absValueExp kk_main__base_AVEValue(struct kk_main_AVEValue* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__absValueExp kk_main__new_AVEValue(kk_reuse_t _at, int32_t _cpath, kk_main__absValue absValue, kk_context_t* _ctx) {
  struct kk_main_AVEValue* _con = kk_block_alloc_at_as(struct kk_main_AVEValue, _at, 1 /* scan count */, _cpath, (kk_tag_t)(2), _ctx);
  _con->absValue = absValue;
  return kk_main__base_AVEValue(_con, _ctx);
}
static inline struct kk_main_AVEValue* kk_main__as_AVEValue(kk_main__absValueExp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_AVEValue*, x, (kk_tag_t)(2), _ctx);
}
static inline kk_main__absValueExp kk_main__base_AVEDot(struct kk_main_AVEDot* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__absValueExp kk_main__new_AVEDot(kk_reuse_t _at, int32_t _cpath, kk_main__absValueExp absValueExp, kk_main__fieldName f, kk_context_t* _ctx) {
  struct kk_main_AVEDot* _con = kk_block_alloc_at_as(struct kk_main_AVEDot, _at, 3 /* scan count */, _cpath, (kk_tag_t)(3), _ctx);
  _con->absValueExp = absValueExp;
  _con->f = f;
  return kk_main__base_AVEDot(_con, _ctx);
}
static inline struct kk_main_AVEDot* kk_main__as_AVEDot(kk_main__absValueExp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_AVEDot*, x, (kk_tag_t)(3), _ctx);
}
static inline kk_main__absValueExp kk_main__base_AVEStore(struct kk_main_AVEStore* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__absValueExp kk_main__new_AVEStore(kk_reuse_t _at, int32_t _cpath, kk_main__storeExp storeExp, kk_main__varName v, kk_context_t* _ctx) {
  struct kk_main_AVEStore* _con = kk_block_alloc_at_as(struct kk_main_AVEStore, _at, 2 /* scan count */, _cpath, (kk_tag_t)(5), _ctx);
  _con->storeExp = storeExp;
  _con->v = v;
  return kk_main__base_AVEStore(_con, _ctx);
}
static inline struct kk_main_AVEStore* kk_main__as_AVEStore(kk_main__absValueExp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_AVEStore*, x, (kk_tag_t)(5), _ctx);
}
static inline kk_main__absValueExp kk_main__base_AVEJoin(struct kk_main_AVEJoin* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__absValueExp kk_main__new_AVEJoin(kk_reuse_t _at, int32_t _cpath, kk_main__absValueExp a, kk_main__absValueExp b, kk_context_t* _ctx) {
  struct kk_main_AVEJoin* _con = kk_block_alloc_at_as(struct kk_main_AVEJoin, _at, 2 /* scan count */, _cpath, (kk_tag_t)(6), _ctx);
  _con->a = a;
  _con->b = b;
  return kk_main__base_AVEJoin(_con, _ctx);
}
static inline struct kk_main_AVEJoin* kk_main__as_AVEJoin(kk_main__absValueExp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_AVEJoin*, x, (kk_tag_t)(6), _ctx);
}
static inline kk_main__absValueExp kk_main__base_AVEOp(struct kk_main_AVEOp* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__absValueExp kk_main__new_AVEOp(kk_reuse_t _at, int32_t _cpath, kk_main__op op, kk_main__absValueExp e1, kk_main__absValueExp e2, kk_context_t* _ctx) {
  struct kk_main_AVEOp* _con = kk_block_alloc_at_as(struct kk_main_AVEOp, _at, 2 /* scan count */, _cpath, (kk_tag_t)(4), _ctx);
  _con->e1 = e1;
  _con->e2 = e2;
  _con->op = op;
  return kk_main__base_AVEOp(_con, _ctx);
}
static inline struct kk_main_AVEOp* kk_main__as_AVEOp(kk_main__absValueExp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_AVEOp*, x, (kk_tag_t)(4), _ctx);
}
static inline bool kk_main__is_AVEExp(kk_main__absValueExp x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(1), _ctx));
}
static inline bool kk_main__is_AVEValue(kk_main__absValueExp x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(2), _ctx));
}
static inline bool kk_main__is_AVEDot(kk_main__absValueExp x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(3), _ctx));
}
static inline bool kk_main__is_AVEStore(kk_main__absValueExp x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(5), _ctx));
}
static inline bool kk_main__is_AVEJoin(kk_main__absValueExp x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(6), _ctx));
}
static inline bool kk_main__is_AVEOp(kk_main__absValueExp x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(4), _ctx));
}
static inline kk_main__absValueExp kk_main__absValueExp_dup(kk_main__absValueExp _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_main__absValueExp_drop(kk_main__absValueExp _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_main__absValueExp_box(kk_main__absValueExp _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_main__absValueExp kk_main__absValueExp_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}
struct kk_main_SEOS {
  struct kk_main__storeExp_s _base;
  kk_main__exp exp;
};
struct kk_main_SEIS {
  struct kk_main__storeExp_s _base;
  kk_main__exp exp;
};
struct kk_main_SEInsert {
  struct kk_main__storeExp_s _base;
  kk_main__storeExp storeExp;
  kk_main__varName v;
  kk_main__absValueExp absValueExp;
};
struct kk_main_SEUnion {
  struct kk_main__storeExp_s _base;
  kk_main__storeExp a;
  kk_main__storeExp b;
};
struct kk_main_SERemove {
  struct kk_main__storeExp_s _base;
  kk_main__storeExp storeExp;
  kk_main__varName v;
};
struct kk_main_SEValue {
  struct kk_main__storeExp_s _base;
  kk_std_data_hashmap__hash_map store;
};
static inline kk_main__storeExp kk_main__new_SEEmpty(kk_context_t* _ctx) {
  return kk_datatype_from_tag((kk_tag_t)(1));
}
static inline kk_main__storeExp kk_main__base_SEOS(struct kk_main_SEOS* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__storeExp kk_main__new_SEOS(kk_reuse_t _at, int32_t _cpath, kk_main__exp exp, kk_context_t* _ctx) {
  struct kk_main_SEOS* _con = kk_block_alloc_at_as(struct kk_main_SEOS, _at, 1 /* scan count */, _cpath, (kk_tag_t)(2), _ctx);
  _con->exp = exp;
  return kk_main__base_SEOS(_con, _ctx);
}
static inline struct kk_main_SEOS* kk_main__as_SEOS(kk_main__storeExp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_SEOS*, x, (kk_tag_t)(2), _ctx);
}
static inline kk_main__storeExp kk_main__base_SEIS(struct kk_main_SEIS* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__storeExp kk_main__new_SEIS(kk_reuse_t _at, int32_t _cpath, kk_main__exp exp, kk_context_t* _ctx) {
  struct kk_main_SEIS* _con = kk_block_alloc_at_as(struct kk_main_SEIS, _at, 1 /* scan count */, _cpath, (kk_tag_t)(3), _ctx);
  _con->exp = exp;
  return kk_main__base_SEIS(_con, _ctx);
}
static inline struct kk_main_SEIS* kk_main__as_SEIS(kk_main__storeExp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_SEIS*, x, (kk_tag_t)(3), _ctx);
}
static inline kk_main__storeExp kk_main__base_SEValue(struct kk_main_SEValue* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__storeExp kk_main__new_SEValue(kk_reuse_t _at, int32_t _cpath, kk_std_data_hashmap__hash_map store, kk_context_t* _ctx) {
  struct kk_main_SEValue* _con = kk_block_alloc_at_as(struct kk_main_SEValue, _at, 1 /* scan count */, _cpath, (kk_tag_t)(7), _ctx);
  _con->store = store;
  return kk_main__base_SEValue(_con, _ctx);
}
static inline struct kk_main_SEValue* kk_main__as_SEValue(kk_main__storeExp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_SEValue*, x, (kk_tag_t)(7), _ctx);
}
static inline kk_main__storeExp kk_main__base_SEUnion(struct kk_main_SEUnion* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__storeExp kk_main__new_SEUnion(kk_reuse_t _at, int32_t _cpath, kk_main__storeExp a, kk_main__storeExp b, kk_context_t* _ctx) {
  struct kk_main_SEUnion* _con = kk_block_alloc_at_as(struct kk_main_SEUnion, _at, 2 /* scan count */, _cpath, (kk_tag_t)(5), _ctx);
  _con->a = a;
  _con->b = b;
  return kk_main__base_SEUnion(_con, _ctx);
}
static inline struct kk_main_SEUnion* kk_main__as_SEUnion(kk_main__storeExp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_SEUnion*, x, (kk_tag_t)(5), _ctx);
}
static inline kk_main__storeExp kk_main__base_SERemove(struct kk_main_SERemove* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__storeExp kk_main__new_SERemove(kk_reuse_t _at, int32_t _cpath, kk_main__storeExp storeExp, kk_main__varName v, kk_context_t* _ctx) {
  struct kk_main_SERemove* _con = kk_block_alloc_at_as(struct kk_main_SERemove, _at, 2 /* scan count */, _cpath, (kk_tag_t)(6), _ctx);
  _con->storeExp = storeExp;
  _con->v = v;
  return kk_main__base_SERemove(_con, _ctx);
}
static inline struct kk_main_SERemove* kk_main__as_SERemove(kk_main__storeExp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_SERemove*, x, (kk_tag_t)(6), _ctx);
}
static inline kk_main__storeExp kk_main__base_SEInsert(struct kk_main_SEInsert* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__storeExp kk_main__new_SEInsert(kk_reuse_t _at, int32_t _cpath, kk_main__storeExp storeExp, kk_main__varName v, kk_main__absValueExp absValueExp, kk_context_t* _ctx) {
  struct kk_main_SEInsert* _con = kk_block_alloc_at_as(struct kk_main_SEInsert, _at, 3 /* scan count */, _cpath, (kk_tag_t)(4), _ctx);
  _con->storeExp = storeExp;
  _con->v = v;
  _con->absValueExp = absValueExp;
  return kk_main__base_SEInsert(_con, _ctx);
}
static inline struct kk_main_SEInsert* kk_main__as_SEInsert(kk_main__storeExp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_SEInsert*, x, (kk_tag_t)(4), _ctx);
}
static inline bool kk_main__is_SEEmpty(kk_main__storeExp x, kk_context_t* _ctx) {
  return (kk_datatype_has_singleton_tag(x, (kk_tag_t)(1)));
}
static inline bool kk_main__is_SEOS(kk_main__storeExp x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(2), _ctx));
}
static inline bool kk_main__is_SEIS(kk_main__storeExp x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(3), _ctx));
}
static inline bool kk_main__is_SEValue(kk_main__storeExp x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(7), _ctx));
}
static inline bool kk_main__is_SEUnion(kk_main__storeExp x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(5), _ctx));
}
static inline bool kk_main__is_SERemove(kk_main__storeExp x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(6), _ctx));
}
static inline bool kk_main__is_SEInsert(kk_main__storeExp x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(4), _ctx));
}
static inline kk_main__storeExp kk_main__storeExp_dup(kk_main__storeExp _x, kk_context_t* _ctx) {
  return kk_datatype_dup(_x, _ctx);
}
static inline void kk_main__storeExp_drop(kk_main__storeExp _x, kk_context_t* _ctx) {
  kk_datatype_drop(_x, _ctx);
}
static inline kk_box_t kk_main__storeExp_box(kk_main__storeExp _x, kk_context_t* _ctx) {
  return kk_datatype_box(_x);
}
static inline kk_main__storeExp kk_main__storeExp_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_unbox(_x);
}

// type main/absOpExp
struct kk_main__absOpExp_s {
  kk_block_t _block;
};
typedef kk_datatype_t kk_main__absOpExp;
struct kk_main_AOEC {
  struct kk_main__absOpExp_s _base;
  kk_main__exp exp;
};
struct kk_main_AOEAnd {
  struct kk_main__absOpExp_s _base;
  kk_main__absOpExp a;
  kk_main__absOpExp b;
};
struct kk_main_AOEAV {
  struct kk_main__absOpExp_s _base;
  kk_main__absValueExp absValueExp;
};
struct kk_main_AOENot {
  struct kk_main__absOpExp_s _base;
  kk_main__absOpExp absOpExp;
};
static inline kk_main__absOpExp kk_main__new_AOETrue(kk_context_t* _ctx) {
  return kk_datatype_from_tag((kk_tag_t)(1));
}
static inline kk_main__absOpExp kk_main__base_AOEC(struct kk_main_AOEC* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__absOpExp kk_main__new_AOEC(kk_reuse_t _at, int32_t _cpath, kk_main__exp exp, kk_context_t* _ctx) {
  struct kk_main_AOEC* _con = kk_block_alloc_at_as(struct kk_main_AOEC, _at, 1 /* scan count */, _cpath, (kk_tag_t)(2), _ctx);
  _con->exp = exp;
  return kk_main__base_AOEC(_con, _ctx);
}
static inline struct kk_main_AOEC* kk_main__as_AOEC(kk_main__absOpExp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_AOEC*, x, (kk_tag_t)(2), _ctx);
}
static inline kk_main__absOpExp kk_main__base_AOEAV(struct kk_main_AOEAV* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__absOpExp kk_main__new_AOEAV(kk_reuse_t _at, int32_t _cpath, kk_main__absValueExp absValueExp, kk_context_t* _ctx) {
  struct kk_main_AOEAV* _con = kk_block_alloc_at_as(struct kk_main_AOEAV, _at, 1 /* scan count */, _cpath, (kk_tag_t)(4), _ctx);
  _con->absValueExp = absValueExp;
  return kk_main__base_AOEAV(_con, _ctx);
}
static inline struct kk_main_AOEAV* kk_main__as_AOEAV(kk_main__absOpExp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_AOEAV*, x, (kk_tag_t)(4), _ctx);
}
static inline kk_main__absOpExp kk_main__base_AOENot(struct kk_main_AOENot* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__absOpExp kk_main__new_AOENot(kk_reuse_t _at, int32_t _cpath, kk_main__absOpExp absOpExp, kk_context_t* _ctx) {
  struct kk_main_AOENot* _con = kk_block_alloc_at_as(struct kk_main_AOENot, _at, 1 /* scan count */, _cpath, (kk_tag_t)(5), _ctx);
  _con->absOpExp = absOpExp;
  return kk_main__base_AOENot(_con, _ctx);
}
static inline struct kk_main_AOENot* kk_main__as_AOENot(kk_main__absOpExp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_AOENot*, x, (kk_tag_t)(5), _ctx);
}
static inline kk_main__absOpExp kk_main__base_AOEAnd(struct kk_main_AOEAnd* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__absOpExp kk_main__new_AOEAnd(kk_reuse_t _at, int32_t _cpath, kk_main__absOpExp a, kk_main__absOpExp b, kk_context_t* _ctx) {
  struct kk_main_AOEAnd* _con = kk_block_alloc_at_as(struct kk_main_AOEAnd, _at, 2 /* scan count */, _cpath, (kk_tag_t)(3), _ctx);
  _con->a = a;
  _con->b = b;
  return kk_main__base_AOEAnd(_con, _ctx);
}
static inline struct kk_main_AOEAnd* kk_main__as_AOEAnd(kk_main__absOpExp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_AOEAnd*, x, (kk_tag_t)(3), _ctx);
}
static inline bool kk_main__is_AOETrue(kk_main__absOpExp x, kk_context_t* _ctx) {
  return (kk_datatype_has_singleton_tag(x, (kk_tag_t)(1)));
}
static inline bool kk_main__is_AOEC(kk_main__absOpExp x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(2), _ctx));
}
static inline bool kk_main__is_AOEAV(kk_main__absOpExp x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(4), _ctx));
}
static inline bool kk_main__is_AOENot(kk_main__absOpExp x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(5), _ctx));
}
static inline bool kk_main__is_AOEAnd(kk_main__absOpExp x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(3), _ctx));
}
static inline kk_main__absOpExp kk_main__absOpExp_dup(kk_main__absOpExp _x, kk_context_t* _ctx) {
  return kk_datatype_dup(_x, _ctx);
}
static inline void kk_main__absOpExp_drop(kk_main__absOpExp _x, kk_context_t* _ctx) {
  kk_datatype_drop(_x, _ctx);
}
static inline kk_box_t kk_main__absOpExp_box(kk_main__absOpExp _x, kk_context_t* _ctx) {
  return kk_datatype_box(_x);
}
static inline kk_main__absOpExp kk_main__absOpExp_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_unbox(_x);
}

// type main/iteratorContextExp
struct kk_main__iteratorContextExp_s {
  kk_block_t _block;
};
typedef kk_datatype_t kk_main__iteratorContextExp;
struct kk_main_ICEIT {
  struct kk_main__iteratorContextExp_s _base;
  kk_main__exp exp;
};
struct kk_main_ICEPlusIf {
  struct kk_main__iteratorContextExp_s _base;
  kk_main__iteratorContextExp itExp;
  kk_main__absValueExp avExp;
};
static inline kk_main__iteratorContextExp kk_main__new_ICEEmpty(kk_context_t* _ctx) {
  return kk_datatype_from_tag((kk_tag_t)(1));
}
static inline kk_main__iteratorContextExp kk_main__base_ICEIT(struct kk_main_ICEIT* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__iteratorContextExp kk_main__new_ICEIT(kk_reuse_t _at, int32_t _cpath, kk_main__exp exp, kk_context_t* _ctx) {
  struct kk_main_ICEIT* _con = kk_block_alloc_at_as(struct kk_main_ICEIT, _at, 1 /* scan count */, _cpath, (kk_tag_t)(2), _ctx);
  _con->exp = exp;
  return kk_main__base_ICEIT(_con, _ctx);
}
static inline struct kk_main_ICEIT* kk_main__as_ICEIT(kk_main__iteratorContextExp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_ICEIT*, x, (kk_tag_t)(2), _ctx);
}
static inline kk_main__iteratorContextExp kk_main__base_ICEPlusIf(struct kk_main_ICEPlusIf* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__iteratorContextExp kk_main__new_ICEPlusIf(kk_reuse_t _at, int32_t _cpath, kk_main__iteratorContextExp itExp, kk_main__absValueExp avExp, kk_context_t* _ctx) {
  struct kk_main_ICEPlusIf* _con = kk_block_alloc_at_as(struct kk_main_ICEPlusIf, _at, 2 /* scan count */, _cpath, (kk_tag_t)(3), _ctx);
  _con->itExp = itExp;
  _con->avExp = avExp;
  return kk_main__base_ICEPlusIf(_con, _ctx);
}
static inline struct kk_main_ICEPlusIf* kk_main__as_ICEPlusIf(kk_main__iteratorContextExp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_ICEPlusIf*, x, (kk_tag_t)(3), _ctx);
}
static inline bool kk_main__is_ICEEmpty(kk_main__iteratorContextExp x, kk_context_t* _ctx) {
  return (kk_datatype_has_singleton_tag(x, (kk_tag_t)(1)));
}
static inline bool kk_main__is_ICEIT(kk_main__iteratorContextExp x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(2), _ctx));
}
static inline bool kk_main__is_ICEPlusIf(kk_main__iteratorContextExp x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(3), _ctx));
}
static inline kk_main__iteratorContextExp kk_main__iteratorContextExp_dup(kk_main__iteratorContextExp _x, kk_context_t* _ctx) {
  return kk_datatype_dup(_x, _ctx);
}
static inline void kk_main__iteratorContextExp_drop(kk_main__iteratorContextExp _x, kk_context_t* _ctx) {
  kk_datatype_drop(_x, _ctx);
}
static inline kk_box_t kk_main__iteratorContextExp_box(kk_main__iteratorContextExp _x, kk_context_t* _ctx) {
  return kk_datatype_box(_x);
}
static inline kk_main__iteratorContextExp kk_main__iteratorContextExp_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_unbox(_x);
}

// type main/pathExp
struct kk_main__pathExp_s {
  kk_block_t _block;
};
typedef kk_datatype_t kk_main__pathExp;
struct kk_main_PEAV {
  struct kk_main__pathExp_s _base;
  kk_main__absValueExp absValue;
};
struct kk_main_PEValue {
  struct kk_main__pathExp_s _base;
  kk_main__pathExp paths;
  kk_main__absOpExp queryCondition;
  bool dependence;
};
struct kk_main_PETS {
  struct kk_main__pathExp_s _base;
  kk_main__exp exp;
};
struct kk_main_PEP {
  struct kk_main__pathExp_s _base;
  kk_main__exp exp;
};
struct kk_main_PEIT {
  struct kk_main__pathExp_s _base;
  kk_main__exp exp;
};
struct kk_main_PEUnion {
  struct kk_main__pathExp_s _base;
  kk_main__pathExp a;
  kk_main__pathExp b;
};
struct kk_main_PECond {
  struct kk_main__pathExp_s _base;
  kk_main__exp cond;
  kk_main__pathExp thn;
  kk_main__pathExp els;
};
struct kk_main_PELast {
  struct kk_main__pathExp_s _base;
  kk_main__iteratorContextExp paths;
};
static inline kk_main__pathExp kk_main__new_PEEmpty(kk_context_t* _ctx) {
  return kk_datatype_from_tag((kk_tag_t)(1));
}
static inline kk_main__pathExp kk_main__base_PEAV(struct kk_main_PEAV* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__pathExp kk_main__new_PEAV(kk_reuse_t _at, int32_t _cpath, kk_main__absValueExp absValue, kk_context_t* _ctx) {
  struct kk_main_PEAV* _con = kk_block_alloc_at_as(struct kk_main_PEAV, _at, 1 /* scan count */, _cpath, (kk_tag_t)(2), _ctx);
  _con->absValue = absValue;
  return kk_main__base_PEAV(_con, _ctx);
}
static inline struct kk_main_PEAV* kk_main__as_PEAV(kk_main__pathExp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_PEAV*, x, (kk_tag_t)(2), _ctx);
}
static inline kk_main__pathExp kk_main__base_PETS(struct kk_main_PETS* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__pathExp kk_main__new_PETS(kk_reuse_t _at, int32_t _cpath, kk_main__exp exp, kk_context_t* _ctx) {
  struct kk_main_PETS* _con = kk_block_alloc_at_as(struct kk_main_PETS, _at, 1 /* scan count */, _cpath, (kk_tag_t)(4), _ctx);
  _con->exp = exp;
  return kk_main__base_PETS(_con, _ctx);
}
static inline struct kk_main_PETS* kk_main__as_PETS(kk_main__pathExp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_PETS*, x, (kk_tag_t)(4), _ctx);
}
static inline kk_main__pathExp kk_main__base_PEP(struct kk_main_PEP* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__pathExp kk_main__new_PEP(kk_reuse_t _at, int32_t _cpath, kk_main__exp exp, kk_context_t* _ctx) {
  struct kk_main_PEP* _con = kk_block_alloc_at_as(struct kk_main_PEP, _at, 1 /* scan count */, _cpath, (kk_tag_t)(5), _ctx);
  _con->exp = exp;
  return kk_main__base_PEP(_con, _ctx);
}
static inline struct kk_main_PEP* kk_main__as_PEP(kk_main__pathExp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_PEP*, x, (kk_tag_t)(5), _ctx);
}
static inline kk_main__pathExp kk_main__base_PEIT(struct kk_main_PEIT* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__pathExp kk_main__new_PEIT(kk_reuse_t _at, int32_t _cpath, kk_main__exp exp, kk_context_t* _ctx) {
  struct kk_main_PEIT* _con = kk_block_alloc_at_as(struct kk_main_PEIT, _at, 1 /* scan count */, _cpath, (kk_tag_t)(6), _ctx);
  _con->exp = exp;
  return kk_main__base_PEIT(_con, _ctx);
}
static inline struct kk_main_PEIT* kk_main__as_PEIT(kk_main__pathExp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_PEIT*, x, (kk_tag_t)(6), _ctx);
}
static inline kk_main__pathExp kk_main__base_PELast(struct kk_main_PELast* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__pathExp kk_main__new_PELast(kk_reuse_t _at, int32_t _cpath, kk_main__iteratorContextExp paths, kk_context_t* _ctx) {
  struct kk_main_PELast* _con = kk_block_alloc_at_as(struct kk_main_PELast, _at, 1 /* scan count */, _cpath, (kk_tag_t)(9), _ctx);
  _con->paths = paths;
  return kk_main__base_PELast(_con, _ctx);
}
static inline struct kk_main_PELast* kk_main__as_PELast(kk_main__pathExp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_PELast*, x, (kk_tag_t)(9), _ctx);
}
static inline kk_main__pathExp kk_main__base_PEUnion(struct kk_main_PEUnion* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__pathExp kk_main__new_PEUnion(kk_reuse_t _at, int32_t _cpath, kk_main__pathExp a, kk_main__pathExp b, kk_context_t* _ctx) {
  struct kk_main_PEUnion* _con = kk_block_alloc_at_as(struct kk_main_PEUnion, _at, 2 /* scan count */, _cpath, (kk_tag_t)(7), _ctx);
  _con->a = a;
  _con->b = b;
  return kk_main__base_PEUnion(_con, _ctx);
}
static inline struct kk_main_PEUnion* kk_main__as_PEUnion(kk_main__pathExp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_PEUnion*, x, (kk_tag_t)(7), _ctx);
}
static inline kk_main__pathExp kk_main__base_PEValue(struct kk_main_PEValue* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__pathExp kk_main__new_PEValue(kk_reuse_t _at, int32_t _cpath, kk_main__pathExp paths, kk_main__absOpExp queryCondition, bool dependence, kk_context_t* _ctx) {
  struct kk_main_PEValue* _con = kk_block_alloc_at_as(struct kk_main_PEValue, _at, 2 /* scan count */, _cpath, (kk_tag_t)(3), _ctx);
  _con->paths = paths;
  _con->queryCondition = queryCondition;
  _con->dependence = dependence;
  return kk_main__base_PEValue(_con, _ctx);
}
static inline struct kk_main_PEValue* kk_main__as_PEValue(kk_main__pathExp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_PEValue*, x, (kk_tag_t)(3), _ctx);
}
static inline kk_main__pathExp kk_main__base_PECond(struct kk_main_PECond* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__pathExp kk_main__new_PECond(kk_reuse_t _at, int32_t _cpath, kk_main__exp cond, kk_main__pathExp thn, kk_main__pathExp els, kk_context_t* _ctx) {
  struct kk_main_PECond* _con = kk_block_alloc_at_as(struct kk_main_PECond, _at, 3 /* scan count */, _cpath, (kk_tag_t)(8), _ctx);
  _con->cond = cond;
  _con->thn = thn;
  _con->els = els;
  return kk_main__base_PECond(_con, _ctx);
}
static inline struct kk_main_PECond* kk_main__as_PECond(kk_main__pathExp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_PECond*, x, (kk_tag_t)(8), _ctx);
}
static inline bool kk_main__is_PEEmpty(kk_main__pathExp x, kk_context_t* _ctx) {
  return (kk_datatype_has_singleton_tag(x, (kk_tag_t)(1)));
}
static inline bool kk_main__is_PEAV(kk_main__pathExp x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(2), _ctx));
}
static inline bool kk_main__is_PETS(kk_main__pathExp x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(4), _ctx));
}
static inline bool kk_main__is_PEP(kk_main__pathExp x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(5), _ctx));
}
static inline bool kk_main__is_PEIT(kk_main__pathExp x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(6), _ctx));
}
static inline bool kk_main__is_PELast(kk_main__pathExp x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(9), _ctx));
}
static inline bool kk_main__is_PEUnion(kk_main__pathExp x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(7), _ctx));
}
static inline bool kk_main__is_PEValue(kk_main__pathExp x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(3), _ctx));
}
static inline bool kk_main__is_PECond(kk_main__pathExp x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(8), _ctx));
}
static inline kk_main__pathExp kk_main__pathExp_dup(kk_main__pathExp _x, kk_context_t* _ctx) {
  return kk_datatype_dup(_x, _ctx);
}
static inline void kk_main__pathExp_drop(kk_main__pathExp _x, kk_context_t* _ctx) {
  kk_datatype_drop(_x, _ctx);
}
static inline kk_box_t kk_main__pathExp_box(kk_main__pathExp _x, kk_context_t* _ctx) {
  return kk_datatype_box(_x);
}
static inline kk_main__pathExp kk_main__pathExp_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_unbox(_x);
}

// type main/attrGrammar
struct kk_main__attrGrammar_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_main__attrGrammar;
struct kk_main__Hnd_attrGrammar {
  struct kk_main__attrGrammar_s _base;
  kk_integer_t _cfc;
  kk_std_core_hnd__clause1 _fun_getAbstractValue;
  kk_std_core_hnd__clause1 _fun_getDataDependence;
  kk_std_core_hnd__clause1 _fun_getIteratorContext;
  kk_std_core_hnd__clause1 _fun_getPaths;
  kk_std_core_hnd__clause1 _fun_getTraversalSummary;
  kk_std_core_hnd__clause2 _fun_setAbstractValue;
  kk_std_core_hnd__clause2 _fun_setDataDependence;
  kk_std_core_hnd__clause2 _fun_setInputStore;
  kk_std_core_hnd__clause2 _fun_setIteratorContext;
  kk_std_core_hnd__clause2 _fun_setOutputStore;
  kk_std_core_hnd__clause2 _fun_setPaths;
  kk_std_core_hnd__clause2 _fun_setQueryCondition;
  kk_std_core_hnd__clause2 _fun_setTraversalSummary;
};
static inline kk_main__attrGrammar kk_main__base_Hnd_attrGrammar(struct kk_main__Hnd_attrGrammar* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__attrGrammar kk_main__new_Hnd_attrGrammar(kk_reuse_t _at, int32_t _cpath, kk_integer_t _cfc, kk_std_core_hnd__clause1 _fun_getAbstractValue, kk_std_core_hnd__clause1 _fun_getDataDependence, kk_std_core_hnd__clause1 _fun_getIteratorContext, kk_std_core_hnd__clause1 _fun_getPaths, kk_std_core_hnd__clause1 _fun_getTraversalSummary, kk_std_core_hnd__clause2 _fun_setAbstractValue, kk_std_core_hnd__clause2 _fun_setDataDependence, kk_std_core_hnd__clause2 _fun_setInputStore, kk_std_core_hnd__clause2 _fun_setIteratorContext, kk_std_core_hnd__clause2 _fun_setOutputStore, kk_std_core_hnd__clause2 _fun_setPaths, kk_std_core_hnd__clause2 _fun_setQueryCondition, kk_std_core_hnd__clause2 _fun_setTraversalSummary, kk_context_t* _ctx) {
  struct kk_main__Hnd_attrGrammar* _con = kk_block_alloc_at_as(struct kk_main__Hnd_attrGrammar, _at, 14 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->_cfc = _cfc;
  _con->_fun_getAbstractValue = _fun_getAbstractValue;
  _con->_fun_getDataDependence = _fun_getDataDependence;
  _con->_fun_getIteratorContext = _fun_getIteratorContext;
  _con->_fun_getPaths = _fun_getPaths;
  _con->_fun_getTraversalSummary = _fun_getTraversalSummary;
  _con->_fun_setAbstractValue = _fun_setAbstractValue;
  _con->_fun_setDataDependence = _fun_setDataDependence;
  _con->_fun_setInputStore = _fun_setInputStore;
  _con->_fun_setIteratorContext = _fun_setIteratorContext;
  _con->_fun_setOutputStore = _fun_setOutputStore;
  _con->_fun_setPaths = _fun_setPaths;
  _con->_fun_setQueryCondition = _fun_setQueryCondition;
  _con->_fun_setTraversalSummary = _fun_setTraversalSummary;
  return kk_main__base_Hnd_attrGrammar(_con, _ctx);
}
static inline struct kk_main__Hnd_attrGrammar* kk_main__as_Hnd_attrGrammar(kk_main__attrGrammar x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main__Hnd_attrGrammar*, x, (kk_tag_t)(1), _ctx);
}
static inline bool kk_main__is_Hnd_attrGrammar(kk_main__attrGrammar x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_main__attrGrammar kk_main__attrGrammar_dup(kk_main__attrGrammar _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_main__attrGrammar_drop(kk_main__attrGrammar _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_main__attrGrammar_box(kk_main__attrGrammar _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_main__attrGrammar kk_main__attrGrammar_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// type main/fixpoint
struct kk_main__fixpoint_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_main__fixpoint;
struct kk_main__Hnd_fixpoint {
  struct kk_main__fixpoint_s _base;
  kk_integer_t _cfc;
  kk_std_core_hnd__clause0 _fun_modified;
};
static inline kk_main__fixpoint kk_main__base_Hnd_fixpoint(struct kk_main__Hnd_fixpoint* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__fixpoint kk_main__new_Hnd_fixpoint(kk_reuse_t _at, int32_t _cpath, kk_integer_t _cfc, kk_std_core_hnd__clause0 _fun_modified, kk_context_t* _ctx) {
  struct kk_main__Hnd_fixpoint* _con = kk_block_alloc_at_as(struct kk_main__Hnd_fixpoint, _at, 2 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->_cfc = _cfc;
  _con->_fun_modified = _fun_modified;
  return kk_main__base_Hnd_fixpoint(_con, _ctx);
}
static inline struct kk_main__Hnd_fixpoint* kk_main__as_Hnd_fixpoint(kk_main__fixpoint x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main__Hnd_fixpoint*, x, (kk_tag_t)(1), _ctx);
}
static inline bool kk_main__is_Hnd_fixpoint(kk_main__fixpoint x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_main__fixpoint kk_main__fixpoint_dup(kk_main__fixpoint _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_main__fixpoint_drop(kk_main__fixpoint _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_main__fixpoint_box(kk_main__fixpoint _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_main__fixpoint kk_main__fixpoint_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// type main/nondet
struct kk_main__nondet_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_main__nondet;
struct kk_main__Hnd_nondet {
  struct kk_main__nondet_s _base;
  kk_integer_t _cfc;
  kk_std_core_hnd__clause2 _ctl_choose;
  kk_std_core_hnd__clause0 _brk_fail;
};
static inline kk_main__nondet kk_main__base_Hnd_nondet(struct kk_main__Hnd_nondet* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__nondet kk_main__new_Hnd_nondet(kk_reuse_t _at, int32_t _cpath, kk_integer_t _cfc, kk_std_core_hnd__clause2 _ctl_choose, kk_std_core_hnd__clause0 _brk_fail, kk_context_t* _ctx) {
  struct kk_main__Hnd_nondet* _con = kk_block_alloc_at_as(struct kk_main__Hnd_nondet, _at, 3 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->_cfc = _cfc;
  _con->_ctl_choose = _ctl_choose;
  _con->_brk_fail = _brk_fail;
  return kk_main__base_Hnd_nondet(_con, _ctx);
}
static inline struct kk_main__Hnd_nondet* kk_main__as_Hnd_nondet(kk_main__nondet x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main__Hnd_nondet*, x, (kk_tag_t)(1), _ctx);
}
static inline bool kk_main__is_Hnd_nondet(kk_main__nondet x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_main__nondet kk_main__nondet_dup(kk_main__nondet _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_main__nondet_drop(kk_main__nondet _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_main__nondet_box(kk_main__nondet _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_main__nondet kk_main__nondet_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// type main/subst
struct kk_main__subst_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_main__subst;
struct kk_main__Hnd_subst {
  struct kk_main__subst_s _base;
  kk_integer_t _cfc;
  kk_std_core_hnd__clause2 _fun_substAV;
};
static inline kk_main__subst kk_main__base_Hnd_subst(struct kk_main__Hnd_subst* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__subst kk_main__new_Hnd_subst(kk_reuse_t _at, int32_t _cpath, kk_integer_t _cfc, kk_std_core_hnd__clause2 _fun_substAV, kk_context_t* _ctx) {
  struct kk_main__Hnd_subst* _con = kk_block_alloc_at_as(struct kk_main__Hnd_subst, _at, 2 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->_cfc = _cfc;
  _con->_fun_substAV = _fun_substAV;
  return kk_main__base_Hnd_subst(_con, _ctx);
}
static inline struct kk_main__Hnd_subst* kk_main__as_Hnd_subst(kk_main__subst x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main__Hnd_subst*, x, (kk_tag_t)(1), _ctx);
}
static inline bool kk_main__is_Hnd_subst(kk_main__subst x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_main__subst kk_main__subst_dup(kk_main__subst _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_main__subst_drop(kk_main__subst _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_main__subst_box(kk_main__subst _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_main__subst kk_main__subst_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// value declarations
 
// Automatically generated. Tests for the `StringLit` constructor of the `:literal` type.

static inline bool kk_main_is_stringLit(kk_main__literal literal, kk_context_t* _ctx) { /* (literal : literal) -> bool */ 
  if (kk_main__is_StringLit(literal, _ctx)) {
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `NumberLit` constructor of the `:literal` type.

static inline bool kk_main_is_numberLit(kk_main__literal literal, kk_context_t* _ctx) { /* (literal : literal) -> bool */ 
  if (kk_main__is_NumberLit(literal, _ctx)) {
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `FNNamed` constructor of the `:fieldName` type.

static inline bool kk_main_is_fnnamed(kk_main__fieldName fieldName, kk_context_t* _ctx) { /* (fieldName : fieldName) -> bool */ 
  if (kk_main__is_FNNamed(fieldName, _ctx)) {
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `FNL` constructor of the `:fieldName` type.

static inline bool kk_main_is_fnl(kk_main__fieldName fieldName, kk_context_t* _ctx) { /* (fieldName : fieldName) -> bool */ 
  if (kk_main__is_FNL(fieldName, _ctx)) {
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `AndOp` constructor of the `:op` type.

static inline bool kk_main_is_andOp(kk_main__op op, kk_context_t* _ctx) { /* (op : op) -> bool */ 
  if (kk_main__is_AndOp(op, _ctx)) {
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `NotOp` constructor of the `:op` type.

static inline bool kk_main_is_notOp(kk_main__op op, kk_context_t* _ctx) { /* (op : op) -> bool */ 
  if (kk_main__is_NotOp(op, _ctx)) {
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `EqOp` constructor of the `:op` type.

static inline bool kk_main_is_eqOp(kk_main__op op, kk_context_t* _ctx) { /* (op : op) -> bool */ 
  if (kk_main__is_EqOp(op, _ctx)) {
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `GtOp` constructor of the `:op` type.

static inline bool kk_main_is_gtOp(kk_main__op op, kk_context_t* _ctx) { /* (op : op) -> bool */ 
  if (kk_main__is_GtOp(op, _ctx)) {
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `PlusOp` constructor of the `:op` type.

static inline bool kk_main_is_plusOp(kk_main__op op, kk_context_t* _ctx) { /* (op : op) -> bool */ 
  if (kk_main__is_PlusOp(op, _ctx)) {
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `AOTrue` constructor of the `:absOp` type.

static inline bool kk_main_is_aotrue(kk_main__absOp absOp, kk_context_t* _ctx) { /* (absOp : absOp) -> bool */ 
  if (kk_main__is_AOTrue(absOp, _ctx)) {
    return true;
  }
  {
    struct kk_main_AOOp* _con_x4197 = kk_main__as_AOOp(absOp, _ctx);
    return false;
  }
}
 
// Automatically generated. Tests for the `AOOp` constructor of the `:absOp` type.

static inline bool kk_main_is_aoop(kk_main__absOp absOp, kk_context_t* _ctx) { /* (absOp : absOp) -> bool */ 
  if (kk_main__is_AOOp(absOp, _ctx)) {
    struct kk_main_AOOp* _con_x4198 = kk_main__as_AOOp(absOp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `AVBot` constructor of the `:absValue` type.

static inline bool kk_main_is_avbot(kk_main__absValue absValue, kk_context_t* _ctx) { /* (absValue : absValue) -> bool */ 
  if (kk_main__is_AVBot(absValue, _ctx)) {
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `AVLit` constructor of the `:absValue` type.

static inline bool kk_main_is_avlit(kk_main__absValue absValue, kk_context_t* _ctx) { /* (absValue : absValue) -> bool */ 
  if (kk_main__is_AVLit(absValue, _ctx)) {
    struct kk_main_AVLit* _con_x4199 = kk_main__as_AVLit(absValue, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `AVOp` constructor of the `:absValue` type.

static inline bool kk_main_is_avop(kk_main__absValue absValue, kk_context_t* _ctx) { /* (absValue : absValue) -> bool */ 
  if (kk_main__is_AVOp(absValue, _ctx)) {
    struct kk_main_AVOp* _con_x4200 = kk_main__as_AVOp(absValue, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `AVPath` constructor of the `:absValue` type.

static inline bool kk_main_is_avpath(kk_main__absValue absValue, kk_context_t* _ctx) { /* (absValue : absValue) -> bool */ 
  if (kk_main__is_AVPath(absValue, _ctx)) {
    struct kk_main_AVPath* _con_x4201 = kk_main__as_AVPath(absValue, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Retrieves the `names` constructor field of the `:path` type.

static inline kk_std_core_types__list kk_main_path_fs_names(kk_main__path path, kk_context_t* _ctx) { /* (path : path) -> list<fieldName> */ 
  {
    struct kk_main_Path* _con_x4202 = kk_main__as_Path(path, _ctx);
    kk_std_core_types__list _x = _con_x4202->names;
    return kk_std_core_types__list_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `absOp` constructor field of the `:path` type.

static inline kk_main__absOp kk_main_path_fs_absOp(kk_main__path path, kk_context_t* _ctx) { /* (path : path) -> absOp */ 
  {
    struct kk_main_Path* _con_x4203 = kk_main__as_Path(path, _ctx);
    kk_main__absOp _x = _con_x4203->absOp;
    return kk_main__absOp_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `dependence` constructor field of the `:path` type.

static inline bool kk_main_path_fs_dependence(kk_main__path path, kk_context_t* _ctx) { /* (path : path) -> bool */ 
  {
    struct kk_main_Path* _con_x4204 = kk_main__as_Path(path, _ctx);
    bool _x = _con_x4204->dependence;
    return _x;
  }
}

kk_main__path kk_main_path_fs__copy(kk_main__path _this, kk_std_core_types__optional names, kk_std_core_types__optional absOp, kk_std_core_types__optional dependence, kk_context_t* _ctx); /* (path, names : ? (list<fieldName>), absOp : ? absOp, dependence : ? bool) -> path */ 
 
// Automatically generated. Retrieves the `name` constructor field of the `:varName` type.

static inline kk_string_t kk_main_varName_fs_name(kk_main__varName varName, kk_context_t* _ctx) { /* (varName : varName) -> string */ 
  {
    kk_string_t _x = varName.name;
    return kk_string_dup(_x, _ctx);
  }
}

kk_main__varName kk_main_varName_fs__copy(kk_main__varName _this, kk_std_core_types__optional name, kk_context_t* _ctx); /* (varName, name : ? string) -> varName */ 
 
// Automatically generated. Retrieves the `id` constructor field of the `:exp` type.

static inline kk_integer_t kk_main_exp_fs_id(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> int */ 
  if (kk_main__is_NullE(exp, _ctx)) {
    struct kk_main_NullE* _con_x4212 = kk_main__as_NullE(exp, _ctx);
    kk_integer_t _x = _con_x4212->id;
    return kk_integer_dup(_x, _ctx);
  }
  if (kk_main__is_LitE(exp, _ctx)) {
    struct kk_main_LitE* _con_x4213 = kk_main__as_LitE(exp, _ctx);
    kk_integer_t _x_0 = _con_x4213->id;
    return kk_integer_dup(_x_0, _ctx);
  }
  if (kk_main__is_RootE(exp, _ctx)) {
    struct kk_main_RootE* _con_x4214 = kk_main__as_RootE(exp, _ctx);
    kk_integer_t _x_1 = _con_x4214->id;
    return kk_integer_dup(_x_1, _ctx);
  }
  if (kk_main__is_DotE(exp, _ctx)) {
    struct kk_main_DotE* _con_x4215 = kk_main__as_DotE(exp, _ctx);
    kk_integer_t _x_2 = _con_x4215->id;
    return kk_integer_dup(_x_2, _ctx);
  }
  if (kk_main__is_OpE(exp, _ctx)) {
    struct kk_main_OpE* _con_x4216 = kk_main__as_OpE(exp, _ctx);
    kk_integer_t _x_3 = _con_x4216->id;
    return kk_integer_dup(_x_3, _ctx);
  }
  if (kk_main__is_VarE(exp, _ctx)) {
    struct kk_main_VarE* _con_x4217 = kk_main__as_VarE(exp, _ctx);
    kk_main__varName _pat_11 = _con_x4217->v;
    kk_integer_t _x_4 = _con_x4217->id;
    return kk_integer_dup(_x_4, _ctx);
  }
  if (kk_main__is_AsgnE(exp, _ctx)) {
    struct kk_main_AsgnE* _con_x4218 = kk_main__as_AsgnE(exp, _ctx);
    kk_main__varName _pat_14 = _con_x4218->v;
    kk_integer_t _x_5 = _con_x4218->id;
    return kk_integer_dup(_x_5, _ctx);
  }
  if (kk_main__is_IfE(exp, _ctx)) {
    struct kk_main_IfE* _con_x4219 = kk_main__as_IfE(exp, _ctx);
    kk_integer_t _x_6 = _con_x4219->id;
    return kk_integer_dup(_x_6, _ctx);
  }
  if (kk_main__is_ForE(exp, _ctx)) {
    struct kk_main_ForE* _con_x4220 = kk_main__as_ForE(exp, _ctx);
    kk_main__varName _pat_22 = _con_x4220->v;
    kk_integer_t _x_7 = _con_x4220->id;
    return kk_integer_dup(_x_7, _ctx);
  }
  if (kk_main__is_SeqE(exp, _ctx)) {
    struct kk_main_SeqE* _con_x4221 = kk_main__as_SeqE(exp, _ctx);
    kk_integer_t _x_8 = _con_x4221->id;
    return kk_integer_dup(_x_8, _ctx);
  }
  {
    struct kk_main_PrintE* _con_x4222 = kk_main__as_PrintE(exp, _ctx);
    kk_integer_t _x_9 = _con_x4222->id;
    return kk_integer_dup(_x_9, _ctx);
  }
}
 
// Automatically generated. Tests for the `NullE` constructor of the `:exp` type.

static inline bool kk_main_is_nullE(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> bool */ 
  if (kk_main__is_NullE(exp, _ctx)) {
    struct kk_main_NullE* _con_x4223 = kk_main__as_NullE(exp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `LitE` constructor of the `:exp` type.

static inline bool kk_main_is_litE(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> bool */ 
  if (kk_main__is_LitE(exp, _ctx)) {
    struct kk_main_LitE* _con_x4224 = kk_main__as_LitE(exp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `RootE` constructor of the `:exp` type.

static inline bool kk_main_is_rootE(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> bool */ 
  if (kk_main__is_RootE(exp, _ctx)) {
    struct kk_main_RootE* _con_x4225 = kk_main__as_RootE(exp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `DotE` constructor of the `:exp` type.

static inline bool kk_main_is_dotE(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> bool */ 
  if (kk_main__is_DotE(exp, _ctx)) {
    struct kk_main_DotE* _con_x4226 = kk_main__as_DotE(exp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `OpE` constructor of the `:exp` type.

static inline bool kk_main_is_opE(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> bool */ 
  if (kk_main__is_OpE(exp, _ctx)) {
    struct kk_main_OpE* _con_x4227 = kk_main__as_OpE(exp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `VarE` constructor of the `:exp` type.

static inline bool kk_main_is_varE(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> bool */ 
  if (kk_main__is_VarE(exp, _ctx)) {
    struct kk_main_VarE* _con_x4228 = kk_main__as_VarE(exp, _ctx);
    kk_main__varName _pat_0 = _con_x4228->v;
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `AsgnE` constructor of the `:exp` type.

static inline bool kk_main_is_asgnE(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> bool */ 
  if (kk_main__is_AsgnE(exp, _ctx)) {
    struct kk_main_AsgnE* _con_x4229 = kk_main__as_AsgnE(exp, _ctx);
    kk_main__varName _pat_0 = _con_x4229->v;
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `IfE` constructor of the `:exp` type.

static inline bool kk_main_is_ifE(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> bool */ 
  if (kk_main__is_IfE(exp, _ctx)) {
    struct kk_main_IfE* _con_x4230 = kk_main__as_IfE(exp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `ForE` constructor of the `:exp` type.

static inline bool kk_main_is_forE(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> bool */ 
  if (kk_main__is_ForE(exp, _ctx)) {
    struct kk_main_ForE* _con_x4231 = kk_main__as_ForE(exp, _ctx);
    kk_main__varName _pat_0 = _con_x4231->v;
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `SeqE` constructor of the `:exp` type.

static inline bool kk_main_is_seqE(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> bool */ 
  if (kk_main__is_SeqE(exp, _ctx)) {
    struct kk_main_SeqE* _con_x4232 = kk_main__as_SeqE(exp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `PrintE` constructor of the `:exp` type.

static inline bool kk_main_is_printE(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> bool */ 
  if (kk_main__is_PrintE(exp, _ctx)) {
    struct kk_main_PrintE* _con_x4233 = kk_main__as_PrintE(exp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `AVEExp` constructor of the `:absValueExp` type.

static inline bool kk_main_is_aveexp(kk_main__absValueExp absValueExp, kk_context_t* _ctx) { /* (absValueExp : absValueExp) -> bool */ 
  if (kk_main__is_AVEExp(absValueExp, _ctx)) {
    struct kk_main_AVEExp* _con_x4234 = kk_main__as_AVEExp(absValueExp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `AVEValue` constructor of the `:absValueExp` type.

static inline bool kk_main_is_avevalue(kk_main__absValueExp absValueExp, kk_context_t* _ctx) { /* (absValueExp : absValueExp) -> bool */ 
  if (kk_main__is_AVEValue(absValueExp, _ctx)) {
    struct kk_main_AVEValue* _con_x4235 = kk_main__as_AVEValue(absValueExp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `AVEDot` constructor of the `:absValueExp` type.

static inline bool kk_main_is_avedot(kk_main__absValueExp absValueExp, kk_context_t* _ctx) { /* (absValueExp : absValueExp) -> bool */ 
  if (kk_main__is_AVEDot(absValueExp, _ctx)) {
    struct kk_main_AVEDot* _con_x4236 = kk_main__as_AVEDot(absValueExp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `AVEOp` constructor of the `:absValueExp` type.

static inline bool kk_main_is_aveop(kk_main__absValueExp absValueExp, kk_context_t* _ctx) { /* (absValueExp : absValueExp) -> bool */ 
  if (kk_main__is_AVEOp(absValueExp, _ctx)) {
    struct kk_main_AVEOp* _con_x4237 = kk_main__as_AVEOp(absValueExp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `AVEStore` constructor of the `:absValueExp` type.

static inline bool kk_main_is_avestore(kk_main__absValueExp absValueExp, kk_context_t* _ctx) { /* (absValueExp : absValueExp) -> bool */ 
  if (kk_main__is_AVEStore(absValueExp, _ctx)) {
    struct kk_main_AVEStore* _con_x4238 = kk_main__as_AVEStore(absValueExp, _ctx);
    kk_main__varName _pat_1 = _con_x4238->v;
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `AVEJoin` constructor of the `:absValueExp` type.

static inline bool kk_main_is_avejoin(kk_main__absValueExp absValueExp, kk_context_t* _ctx) { /* (absValueExp : absValueExp) -> bool */ 
  if (kk_main__is_AVEJoin(absValueExp, _ctx)) {
    struct kk_main_AVEJoin* _con_x4239 = kk_main__as_AVEJoin(absValueExp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `SEEmpty` constructor of the `:storeExp` type.

static inline bool kk_main_is_seempty(kk_main__storeExp storeExp, kk_context_t* _ctx) { /* (storeExp : storeExp) -> bool */ 
  if (kk_main__is_SEEmpty(storeExp, _ctx)) {
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `SEOS` constructor of the `:storeExp` type.

static inline bool kk_main_is_seos(kk_main__storeExp storeExp, kk_context_t* _ctx) { /* (storeExp : storeExp) -> bool */ 
  if (kk_main__is_SEOS(storeExp, _ctx)) {
    struct kk_main_SEOS* _con_x4240 = kk_main__as_SEOS(storeExp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `SEIS` constructor of the `:storeExp` type.

static inline bool kk_main_is_seis(kk_main__storeExp storeExp, kk_context_t* _ctx) { /* (storeExp : storeExp) -> bool */ 
  if (kk_main__is_SEIS(storeExp, _ctx)) {
    struct kk_main_SEIS* _con_x4241 = kk_main__as_SEIS(storeExp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `SEInsert` constructor of the `:storeExp` type.

static inline bool kk_main_is_seinsert(kk_main__storeExp storeExp, kk_context_t* _ctx) { /* (storeExp : storeExp) -> bool */ 
  if (kk_main__is_SEInsert(storeExp, _ctx)) {
    struct kk_main_SEInsert* _con_x4242 = kk_main__as_SEInsert(storeExp, _ctx);
    kk_main__varName _pat_1 = _con_x4242->v;
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `SEUnion` constructor of the `:storeExp` type.

static inline bool kk_main_is_seunion(kk_main__storeExp storeExp, kk_context_t* _ctx) { /* (storeExp : storeExp) -> bool */ 
  if (kk_main__is_SEUnion(storeExp, _ctx)) {
    struct kk_main_SEUnion* _con_x4243 = kk_main__as_SEUnion(storeExp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `SERemove` constructor of the `:storeExp` type.

static inline bool kk_main_is_seremove(kk_main__storeExp storeExp, kk_context_t* _ctx) { /* (storeExp : storeExp) -> bool */ 
  if (kk_main__is_SERemove(storeExp, _ctx)) {
    struct kk_main_SERemove* _con_x4244 = kk_main__as_SERemove(storeExp, _ctx);
    kk_main__varName _pat_1 = _con_x4244->v;
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `SEValue` constructor of the `:storeExp` type.

static inline bool kk_main_is_sevalue(kk_main__storeExp storeExp, kk_context_t* _ctx) { /* (storeExp : storeExp) -> bool */ 
  if (kk_main__is_SEValue(storeExp, _ctx)) {
    struct kk_main_SEValue* _con_x4245 = kk_main__as_SEValue(storeExp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `AOETrue` constructor of the `:absOpExp` type.

static inline bool kk_main_is_aoetrue(kk_main__absOpExp absOpExp, kk_context_t* _ctx) { /* (absOpExp : absOpExp) -> bool */ 
  if (kk_main__is_AOETrue(absOpExp, _ctx)) {
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `AOEC` constructor of the `:absOpExp` type.

static inline bool kk_main_is_aoec(kk_main__absOpExp absOpExp, kk_context_t* _ctx) { /* (absOpExp : absOpExp) -> bool */ 
  if (kk_main__is_AOEC(absOpExp, _ctx)) {
    struct kk_main_AOEC* _con_x4246 = kk_main__as_AOEC(absOpExp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `AOEAnd` constructor of the `:absOpExp` type.

static inline bool kk_main_is_aoeand(kk_main__absOpExp absOpExp, kk_context_t* _ctx) { /* (absOpExp : absOpExp) -> bool */ 
  if (kk_main__is_AOEAnd(absOpExp, _ctx)) {
    struct kk_main_AOEAnd* _con_x4247 = kk_main__as_AOEAnd(absOpExp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `AOEAV` constructor of the `:absOpExp` type.

static inline bool kk_main_is_aoeav(kk_main__absOpExp absOpExp, kk_context_t* _ctx) { /* (absOpExp : absOpExp) -> bool */ 
  if (kk_main__is_AOEAV(absOpExp, _ctx)) {
    struct kk_main_AOEAV* _con_x4248 = kk_main__as_AOEAV(absOpExp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `AOENot` constructor of the `:absOpExp` type.

static inline bool kk_main_is_aoenot(kk_main__absOpExp absOpExp, kk_context_t* _ctx) { /* (absOpExp : absOpExp) -> bool */ 
  if (kk_main__is_AOENot(absOpExp, _ctx)) {
    struct kk_main_AOENot* _con_x4249 = kk_main__as_AOENot(absOpExp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `ICEEmpty` constructor of the `:iteratorContextExp` type.

static inline bool kk_main_is_iceempty(kk_main__iteratorContextExp iteratorContextExp, kk_context_t* _ctx) { /* (iteratorContextExp : iteratorContextExp) -> bool */ 
  if (kk_main__is_ICEEmpty(iteratorContextExp, _ctx)) {
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `ICEIT` constructor of the `:iteratorContextExp` type.

static inline bool kk_main_is_iceit(kk_main__iteratorContextExp iteratorContextExp, kk_context_t* _ctx) { /* (iteratorContextExp : iteratorContextExp) -> bool */ 
  if (kk_main__is_ICEIT(iteratorContextExp, _ctx)) {
    struct kk_main_ICEIT* _con_x4250 = kk_main__as_ICEIT(iteratorContextExp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `ICEPlusIf` constructor of the `:iteratorContextExp` type.

static inline bool kk_main_is_iceplusIf(kk_main__iteratorContextExp iteratorContextExp, kk_context_t* _ctx) { /* (iteratorContextExp : iteratorContextExp) -> bool */ 
  if (kk_main__is_ICEPlusIf(iteratorContextExp, _ctx)) {
    struct kk_main_ICEPlusIf* _con_x4251 = kk_main__as_ICEPlusIf(iteratorContextExp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `PEEmpty` constructor of the `:pathExp` type.

static inline bool kk_main_is_peempty(kk_main__pathExp pathExp, kk_context_t* _ctx) { /* (pathExp : pathExp) -> bool */ 
  if (kk_main__is_PEEmpty(pathExp, _ctx)) {
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `PEAV` constructor of the `:pathExp` type.

static inline bool kk_main_is_peav(kk_main__pathExp pathExp, kk_context_t* _ctx) { /* (pathExp : pathExp) -> bool */ 
  if (kk_main__is_PEAV(pathExp, _ctx)) {
    struct kk_main_PEAV* _con_x4252 = kk_main__as_PEAV(pathExp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `PEValue` constructor of the `:pathExp` type.

static inline bool kk_main_is_pevalue(kk_main__pathExp pathExp, kk_context_t* _ctx) { /* (pathExp : pathExp) -> bool */ 
  if (kk_main__is_PEValue(pathExp, _ctx)) {
    struct kk_main_PEValue* _con_x4253 = kk_main__as_PEValue(pathExp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `PETS` constructor of the `:pathExp` type.

static inline bool kk_main_is_pets(kk_main__pathExp pathExp, kk_context_t* _ctx) { /* (pathExp : pathExp) -> bool */ 
  if (kk_main__is_PETS(pathExp, _ctx)) {
    struct kk_main_PETS* _con_x4254 = kk_main__as_PETS(pathExp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `PEP` constructor of the `:pathExp` type.

static inline bool kk_main_is_pep(kk_main__pathExp pathExp, kk_context_t* _ctx) { /* (pathExp : pathExp) -> bool */ 
  if (kk_main__is_PEP(pathExp, _ctx)) {
    struct kk_main_PEP* _con_x4255 = kk_main__as_PEP(pathExp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `PEIT` constructor of the `:pathExp` type.

static inline bool kk_main_is_peit(kk_main__pathExp pathExp, kk_context_t* _ctx) { /* (pathExp : pathExp) -> bool */ 
  if (kk_main__is_PEIT(pathExp, _ctx)) {
    struct kk_main_PEIT* _con_x4256 = kk_main__as_PEIT(pathExp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `PEUnion` constructor of the `:pathExp` type.

static inline bool kk_main_is_peunion(kk_main__pathExp pathExp, kk_context_t* _ctx) { /* (pathExp : pathExp) -> bool */ 
  if (kk_main__is_PEUnion(pathExp, _ctx)) {
    struct kk_main_PEUnion* _con_x4257 = kk_main__as_PEUnion(pathExp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `PECond` constructor of the `:pathExp` type.

static inline bool kk_main_is_pecond(kk_main__pathExp pathExp, kk_context_t* _ctx) { /* (pathExp : pathExp) -> bool */ 
  if (kk_main__is_PECond(pathExp, _ctx)) {
    struct kk_main_PECond* _con_x4258 = kk_main__as_PECond(pathExp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `PELast` constructor of the `:pathExp` type.

static inline bool kk_main_is_pelast(kk_main__pathExp pathExp, kk_context_t* _ctx) { /* (pathExp : pathExp) -> bool */ 
  if (kk_main__is_PELast(pathExp, _ctx)) {
    struct kk_main_PELast* _con_x4259 = kk_main__as_PELast(pathExp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Retrieves the `@cfc` constructor field of the `:attrGrammar` type.

static inline kk_integer_t kk_main_attrGrammar_fs__cfc(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> int */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x4260 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_integer_t _x = _con_x4260->_cfc;
    return kk_integer_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-getAbstractValue` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause1 kk_main_attrGrammar_fs__fun_getAbstractValue(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause1<exp,absValueExp,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x4261 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause1 _x = _con_x4261->_fun_getAbstractValue;
    return kk_std_core_hnd__clause1_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-getDataDependence` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause1 kk_main_attrGrammar_fs__fun_getDataDependence(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause1<exp,bool,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x4262 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause1 _x = _con_x4262->_fun_getDataDependence;
    return kk_std_core_hnd__clause1_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-getIteratorContext` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause1 kk_main_attrGrammar_fs__fun_getIteratorContext(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause1<exp,iteratorContextExp,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x4263 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause1 _x = _con_x4263->_fun_getIteratorContext;
    return kk_std_core_hnd__clause1_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-getPaths` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause1 kk_main_attrGrammar_fs__fun_getPaths(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause1<exp,pathExp,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x4264 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause1 _x = _con_x4264->_fun_getPaths;
    return kk_std_core_hnd__clause1_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-getTraversalSummary` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause1 kk_main_attrGrammar_fs__fun_getTraversalSummary(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause1<exp,pathExp,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x4265 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause1 _x = _con_x4265->_fun_getTraversalSummary;
    return kk_std_core_hnd__clause1_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-setAbstractValue` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause2 kk_main_attrGrammar_fs__fun_setAbstractValue(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause2<exp,absValueExp,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x4266 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause2 _x = _con_x4266->_fun_setAbstractValue;
    return kk_std_core_hnd__clause2_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-setDataDependence` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause2 kk_main_attrGrammar_fs__fun_setDataDependence(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause2<exp,bool,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x4267 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause2 _x = _con_x4267->_fun_setDataDependence;
    return kk_std_core_hnd__clause2_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-setInputStore` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause2 kk_main_attrGrammar_fs__fun_setInputStore(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause2<exp,storeExp,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x4268 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause2 _x = _con_x4268->_fun_setInputStore;
    return kk_std_core_hnd__clause2_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-setIteratorContext` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause2 kk_main_attrGrammar_fs__fun_setIteratorContext(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause2<exp,iteratorContextExp,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x4269 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause2 _x = _con_x4269->_fun_setIteratorContext;
    return kk_std_core_hnd__clause2_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-setOutputStore` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause2 kk_main_attrGrammar_fs__fun_setOutputStore(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause2<exp,storeExp,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x4270 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause2 _x = _con_x4270->_fun_setOutputStore;
    return kk_std_core_hnd__clause2_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-setPaths` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause2 kk_main_attrGrammar_fs__fun_setPaths(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause2<exp,pathExp,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x4271 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause2 _x = _con_x4271->_fun_setPaths;
    return kk_std_core_hnd__clause2_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-setQueryCondition` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause2 kk_main_attrGrammar_fs__fun_setQueryCondition(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause2<exp,absOpExp,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x4272 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause2 _x = _con_x4272->_fun_setQueryCondition;
    return kk_std_core_hnd__clause2_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-setTraversalSummary` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause2 kk_main_attrGrammar_fs__fun_setTraversalSummary(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause2<exp,pathExp,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x4273 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause2 _x = _con_x4273->_fun_setTraversalSummary;
    return kk_std_core_hnd__clause2_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@cfc` constructor field of the `:fixpoint` type.

static inline kk_integer_t kk_main_fixpoint_fs__cfc(kk_main__fixpoint fixpoint, kk_context_t* _ctx) { /* forall<e,a> (fixpoint : fixpoint<e,a>) -> int */ 
  {
    struct kk_main__Hnd_fixpoint* _con_x4274 = kk_main__as_Hnd_fixpoint(fixpoint, _ctx);
    kk_integer_t _x = _con_x4274->_cfc;
    return kk_integer_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-modified` constructor field of the `:fixpoint` type.

static inline kk_std_core_hnd__clause0 kk_main_fixpoint_fs__fun_modified(kk_main__fixpoint fixpoint, kk_context_t* _ctx) { /* forall<e,a> (fixpoint : fixpoint<e,a>) -> hnd/clause0<(),fixpoint,e,a> */ 
  {
    struct kk_main__Hnd_fixpoint* _con_x4275 = kk_main__as_Hnd_fixpoint(fixpoint, _ctx);
    kk_std_core_hnd__clause0 _x = _con_x4275->_fun_modified;
    return kk_std_core_hnd__clause0_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@cfc` constructor field of the `:nondet` type.

static inline kk_integer_t kk_main_nondet_fs__cfc(kk_main__nondet nondet, kk_context_t* _ctx) { /* forall<e,a> (nondet : nondet<e,a>) -> int */ 
  {
    struct kk_main__Hnd_nondet* _con_x4276 = kk_main__as_Hnd_nondet(nondet, _ctx);
    kk_integer_t _x = _con_x4276->_cfc;
    return kk_integer_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@ctl-choose` constructor field of the `:nondet` type.

static inline kk_std_core_hnd__clause2 kk_main_nondet_fs__ctl_choose(kk_main__nondet nondet, kk_context_t* _ctx) { /* forall<e,a,b> (nondet : nondet<e,a>) -> hnd/clause2<b,b,b,nondet,e,a> */ 
  {
    struct kk_main__Hnd_nondet* _con_x4277 = kk_main__as_Hnd_nondet(nondet, _ctx);
    kk_std_core_hnd__clause2 _x = _con_x4277->_ctl_choose;
    return kk_std_core_hnd__clause2_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@brk-fail` constructor field of the `:nondet` type.

static inline kk_std_core_hnd__clause0 kk_main_nondet_fs__brk_fail(kk_main__nondet nondet, kk_context_t* _ctx) { /* forall<e,a,b> (nondet : nondet<e,a>) -> hnd/clause0<b,nondet,e,a> */ 
  {
    struct kk_main__Hnd_nondet* _con_x4278 = kk_main__as_Hnd_nondet(nondet, _ctx);
    kk_std_core_hnd__clause0 _x = _con_x4278->_brk_fail;
    return kk_std_core_hnd__clause0_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@cfc` constructor field of the `:subst` type.

static inline kk_integer_t kk_main_subst_fs__cfc(kk_main__subst subst, kk_context_t* _ctx) { /* forall<e,a> (subst : subst<e,a>) -> int */ 
  {
    struct kk_main__Hnd_subst* _con_x4279 = kk_main__as_Hnd_subst(subst, _ctx);
    kk_integer_t _x = _con_x4279->_cfc;
    return kk_integer_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-substAV` constructor field of the `:subst` type.

static inline kk_std_core_hnd__clause2 kk_main_subst_fs__fun_substAV(kk_main__subst subst, kk_context_t* _ctx) { /* forall<e,a> (subst : subst<e,a>) -> hnd/clause2<exp,exp,absValueExp,subst,e,a> */ 
  {
    struct kk_main__Hnd_subst* _con_x4280 = kk_main__as_Hnd_subst(subst, _ctx);
    kk_std_core_hnd__clause2 _x = _con_x4280->_fun_substAV;
    return kk_std_core_hnd__clause2_dup(_x, _ctx);
  }
}

kk_std_core_types__list kk_main_hashset_fs_list(kk_std_data_hashset__hash_set set, kk_context_t* _ctx); /* forall<a> (set : std/data/hashset/hash-set<a>) -> list<a> */ 

static inline kk_string_t kk_main_fieldName_fs_show(kk_main__fieldName fieldName, kk_context_t* _ctx) { /* (fieldName : fieldName) -> string */ 
  if (kk_main__is_FNNamed(fieldName, _ctx)) {
    kk_string_t name = fieldName._cons.FNNamed.name;
    return name;
  }
  {
    kk_define_string_literal(, _s_x4289, 3, "FNL", _ctx)
    return kk_string_dup(_s_x4289, _ctx);
  }
}

static inline kk_string_t kk_main_varName_fs_show(kk_main__varName varName, kk_context_t* _ctx) { /* (varName : varName) -> string */ 
  kk_string_t _x_x4290;
  kk_define_string_literal(, _s_x4291, 8, "VarName(", _ctx)
  _x_x4290 = kk_string_dup(_s_x4291, _ctx); /*string*/
  kk_string_t _x_x4292;
  kk_string_t _x_x4293;
  {
    kk_string_t _x = varName.name;
    _x_x4293 = _x; /*string*/
  }
  kk_string_t _x_x4294;
  kk_define_string_literal(, _s_x4295, 1, ")", _ctx)
  _x_x4294 = kk_string_dup(_s_x4295, _ctx); /*string*/
  _x_x4292 = kk_std_core_types__lp__plus__plus__rp_(_x_x4293, _x_x4294, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x4290, _x_x4292, _ctx);
}

static inline kk_string_t kk_main_op_fs_show(kk_main__op op, kk_context_t* _ctx) { /* (op : op) -> string */ 
  if (kk_main__is_AndOp(op, _ctx)) {
    kk_define_string_literal(, _s_x4296, 5, "AndOp", _ctx)
    return kk_string_dup(_s_x4296, _ctx);
  }
  if (kk_main__is_NotOp(op, _ctx)) {
    kk_define_string_literal(, _s_x4297, 5, "NotOp", _ctx)
    return kk_string_dup(_s_x4297, _ctx);
  }
  if (kk_main__is_EqOp(op, _ctx)) {
    kk_define_string_literal(, _s_x4298, 4, "EqOp", _ctx)
    return kk_string_dup(_s_x4298, _ctx);
  }
  if (kk_main__is_GtOp(op, _ctx)) {
    kk_define_string_literal(, _s_x4299, 4, "GtOp", _ctx)
    return kk_string_dup(_s_x4299, _ctx);
  }
  {
    kk_define_string_literal(, _s_x4300, 6, "PlusOp", _ctx)
    return kk_string_dup(_s_x4300, _ctx);
  }
}

kk_integer_t kk_main_exp_any_fs_id(kk_main__exp exp, kk_context_t* _ctx); /* (exp : exp) -> int */ 

static inline kk_string_t kk_main_hashset_fs_show(kk_std_data_hashset__hash_set set, kk_function_t _implicit_fs_show, kk_context_t* _ctx) { /* forall<a> (set : std/data/hashset/hash-set<a>, ?show : (a) -> string) -> string */ 
  kk_std_core_types__list _x_x4312 = kk_main_hashset_fs_list(set, _ctx); /*list<2152>*/
  return kk_std_core_list_show(_x_x4312, _implicit_fs_show, _ctx);
}

static inline kk_string_t kk_main_literal_fs_show(kk_main__literal lit, kk_context_t* _ctx) { /* (lit : literal) -> string */ 
  if (kk_main__is_StringLit(lit, _ctx)) {
    kk_string_t str = lit._cons.StringLit.str;
    return kk_std_core_show_string_fs_show(str, _ctx);
  }
  {
    kk_integer_t num = lit._cons.NumberLit.num;
    return kk_std_core_int_show(num, _ctx);
  }
}

kk_string_t kk_main_absOp_fs_showDiv(kk_main__absOp absOp, kk_context_t* _ctx); /* (absOp : absOp) -> div string */ 

kk_string_t kk_main_absValue_fs_showDiv(kk_main__absValue absValue, kk_context_t* _ctx); /* (absValue : absValue) -> div string */ 

kk_string_t kk_main_path_fs_showDiv(kk_main__path path_0, kk_context_t* _ctx); /* (path : path) -> div string */ 

static inline kk_string_t kk_main_absOp_fs_show(kk_main__absOp absOp, kk_context_t* _ctx) { /* (absOp : absOp) -> string */ 
  return kk_main_absOp_fs_showDiv(absOp, _ctx);
}

static inline kk_string_t kk_main_absValue_fs_show(kk_main__absValue absValue, kk_context_t* _ctx) { /* (absValue : absValue) -> string */ 
  return kk_main_absValue_fs_showDiv(absValue, _ctx);
}

kk_string_t kk_main_hashmap_fs_show(kk_std_data_hashmap__hash_map map, kk_function_t _implicit_fs_key_fs_show, kk_function_t _implicit_fs_value_fs_show, kk_context_t* _ctx); /* forall<a,b> (map : std/data/hashmap/hash-map<a,b>, ?key/show : (a) -> string, ?value/show : (b) -> string) -> string */ 


// lift anonymous function
struct kk_main_store_fs_show_fun4411__t {
  struct kk_function_s _base;
};
extern kk_string_t kk_main_store_fs_show_fun4411(kk_function_t _fself, kk_box_t _b_x60, kk_context_t* _ctx);
static inline kk_function_t kk_main_store_fs_new_show_fun4411(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_store_fs_show_fun4411, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main_store_fs_show_fun4413__t {
  struct kk_function_s _base;
};
extern kk_string_t kk_main_store_fs_show_fun4413(kk_function_t _fself, kk_box_t _b_x61, kk_context_t* _ctx);
static inline kk_function_t kk_main_store_fs_new_show_fun4413(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_store_fs_show_fun4413, _ctx)
  return kk_function_dup(_fself,kk_context());
}


static inline kk_string_t kk_main_store_fs_show(kk_std_data_hashmap__hash_map store, kk_context_t* _ctx) { /* (store : store) -> string */ 
  return kk_main_hashmap_fs_show(store, kk_main_store_fs_new_show_fun4411(_ctx), kk_main_store_fs_new_show_fun4413(_ctx), _ctx);
}

kk_string_t kk_main_absValueExp_fs_show(kk_main__absValueExp absValueExp, kk_context_t* _ctx); /* (absValueExp : absValueExp) -> div string */ 

kk_string_t kk_main_storeExp_fs_show(kk_main__storeExp storeExp, kk_context_t* _ctx); /* (storeExp : storeExp) -> div string */ 

kk_string_t kk_main_absOpExp_fs_show(kk_main__absOpExp absOpExp, kk_context_t* _ctx); /* (absOpExp : absOpExp) -> div string */ 

kk_string_t kk_main_exp_fs_show(kk_main__exp exp, kk_context_t* _ctx); /* (exp : exp) -> string */ 

kk_string_t kk_main_iteratorContextExp_fs_show(kk_main__iteratorContextExp ice, kk_context_t* _ctx); /* (ice : iteratorContextExp) -> div string */ 

static inline kk_string_t kk_main_path_fs_show(kk_main__path path, kk_context_t* _ctx) { /* (path : path) -> string */ 
  return kk_main_path_fs_showDiv(path, _ctx);
}

kk_string_t kk_main_pathExp_fs_show(kk_main__pathExp pathExp, kk_context_t* _ctx); /* (pathExp : pathExp) -> div string */ 

static inline bool kk_main_op_fs__lp__eq__eq__rp_(kk_main__op a, kk_main__op b, kk_context_t* _ctx) { /* (a : op, b : op) -> bool */ 
  if (kk_main__is_AndOp(a, _ctx) && kk_main__is_AndOp(b, _ctx)) {
    return true;
  }
  if (kk_main__is_NotOp(a, _ctx) && kk_main__is_NotOp(b, _ctx)) {
    return true;
  }
  if (kk_main__is_EqOp(a, _ctx) && kk_main__is_EqOp(b, _ctx)) {
    return true;
  }
  if (kk_main__is_GtOp(a, _ctx) && kk_main__is_GtOp(b, _ctx)) {
    return true;
  }
  if (kk_main__is_PlusOp(a, _ctx) && kk_main__is_PlusOp(b, _ctx)) {
    return true;
  }
  {
    return false;
  }
}

static inline bool kk_main_hashset_fs__lp__eq__eq__rp_(kk_std_data_hashset__hash_set a, kk_std_data_hashset__hash_set b, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) { /* forall<a> (a : std/data/hashset/hash-set<a>, b : std/data/hashset/hash-set<a>, ?(==) : (a, a) -> bool) -> bool */ 
  kk_std_core_types__list _x_x4786 = kk_main_hashset_fs_list(a, _ctx); /*list<2152>*/
  kk_std_core_types__list _x_x4787 = kk_main_hashset_fs_list(b, _ctx); /*list<2152>*/
  return kk_std_core_list__lp__eq__eq__rp_(_x_x4786, _x_x4787, _implicit_fs__lp__eq__eq__rp_, _ctx);
}

bool kk_main_literal_fs__lp__eq__eq__rp_(kk_main__literal a, kk_main__literal b, kk_context_t* _ctx); /* (a : literal, b : literal) -> bool */ 

static inline bool kk_main_fieldName_fs__lp__eq__eq__rp_(kk_main__fieldName a, kk_main__fieldName b, kk_context_t* _ctx) { /* (a : fieldName, b : fieldName) -> bool */ 
  if (kk_main__is_FNNamed(a, _ctx) && kk_main__is_FNNamed(b, _ctx)) {
    kk_string_t aName = a._cons.FNNamed.name;
    kk_string_t bName = b._cons.FNNamed.name;
    return kk_string_is_eq(aName,bName,kk_context());
  }
  if (kk_main__is_FNL(a, _ctx) && kk_main__is_FNL(b, _ctx)) {
    return true;
  }
  {
    kk_main__fieldName_drop(b, _ctx);
    kk_main__fieldName_drop(a, _ctx);
    return false;
  }
}

bool kk_main_absOp_fs_eqDiv(kk_main__absOp a, kk_main__absOp b, kk_context_t* _ctx); /* (a : absOp, b : absOp) -> div bool */ 

bool kk_main_absValue_fs_eqDiv(kk_main__absValue a_0, kk_main__absValue b_0, kk_context_t* _ctx); /* (a : absValue, b : absValue) -> div bool */ 

bool kk_main_path_fs_eqDiv(kk_main__path a_1_0, kk_main__path b_1_0, kk_context_t* _ctx); /* (a : path, b : path) -> div bool */ 

static inline bool kk_main_absOp_fs__lp__eq__eq__rp_(kk_main__absOp a, kk_main__absOp b, kk_context_t* _ctx) { /* (a : absOp, b : absOp) -> bool */ 
  return kk_main_absOp_fs_eqDiv(a, b, _ctx);
}

static inline bool kk_main_absValue_fs__lp__eq__eq__rp_(kk_main__absValue a, kk_main__absValue b, kk_context_t* _ctx) { /* (a : absValue, b : absValue) -> bool */ 
  return kk_main_absValue_fs_eqDiv(a, b, _ctx);
}

static inline bool kk_main_varName_fs__lp__eq__eq__rp_(kk_main__varName a, kk_main__varName b, kk_context_t* _ctx) { /* (a : varName, b : varName) -> bool */ 
  kk_string_t _x_x4822;
  {
    kk_string_t _x = a.name;
    _x_x4822 = _x; /*string*/
  }
  kk_string_t _x_x4823;
  {
    kk_string_t _x_0 = b.name;
    _x_x4823 = _x_0; /*string*/
  }
  return kk_string_is_eq(_x_x4822,_x_x4823,kk_context());
}

bool kk_main_exp_fs_eqDiv(kk_main__exp a, kk_main__exp b, kk_context_t* _ctx); /* (a : exp, b : exp) -> div bool */ 

static inline bool kk_main_exp_fs__lp__eq__eq__rp_(kk_main__exp a, kk_main__exp b, kk_context_t* _ctx) { /* (a : exp, b : exp) -> bool */ 
  return kk_main_exp_fs_eqDiv(a, b, _ctx);
}

bool kk_main_absValueExp_fs__lp__at_mlift_x_10931_eq__eq__rp_(kk_main__fieldName af, kk_main__fieldName bf, bool _y_x10264, kk_context_t* _ctx); /* (af : fieldName, bf : fieldName, bool) -> pure bool */ 

bool kk_main_absValueExp_fs__lp__at_mlift_x_10932_eq__eq__rp_(kk_main__absValueExp ae2, kk_main__absValueExp be2, bool _y_x10266, kk_context_t* _ctx); /* (ae2 : absValueExp, be2 : absValueExp, bool) -> pure bool */ 

bool kk_main_absValueExp_fs__lp__at_mlift_x_10933_eq__eq__rp_(kk_main__varName av_0, kk_main__varName bv_0, bool _y_x10270, kk_context_t* _ctx); /* (av@0 : varName, bv@0 : varName, bool) -> pure bool */ 

bool kk_main_absValueExp_fs__lp__at_mlift_x_10934_eq__eq__rp_(kk_main__absValueExp ba, kk_main__absValueExp bb, bool _y_x10272, kk_context_t* _ctx); /* (ba : absValueExp, bb : absValueExp, bool) -> pure bool */ 

bool kk_main_storeExp_fs__lp__at_mlift_x_10935_eq__eq__rp_(kk_main__absValueExp aav, kk_main__varName av_1, kk_main__absValueExp bav, kk_main__varName bv_1, bool _y_x10276, kk_context_t* _ctx); /* (aav : absValueExp, av@1 : varName, bav : absValueExp, bv@1 : varName, bool) -> pure bool */ 

bool kk_main_storeExp_fs__lp__at_mlift_x_10936_eq__eq__rp_(kk_main__storeExp ab_0, kk_main__storeExp bb_0, bool _y_x10280, kk_context_t* _ctx); /* (ab@0 : storeExp, bb@0 : storeExp, bool) -> pure bool */ 

bool kk_main_storeExp_fs__lp__at_mlift_x_10937_eq__eq__rp_(kk_main__varName av_0_0, kk_main__varName bv_0_0, bool _y_x10283, kk_context_t* _ctx); /* (av@0@0 : varName, bv@0@0 : varName, bool) -> pure bool */ 

bool kk_main_absValueExp_fs__lp__eq__eq__rp_(kk_main__absValueExp a, kk_main__absValueExp b, kk_context_t* _ctx); /* (a : absValueExp, b : absValueExp) -> pure bool */ 

bool kk_main_storeExp_fs__lp__eq__eq__rp_(kk_main__storeExp a_0_0_0_0, kk_main__storeExp b_0_0_0_0, kk_context_t* _ctx); /* (a : storeExp, b : storeExp) -> pure bool */ 

bool kk_main_absOpExp_fs__lp__at_mlift_x_10938_eq__eq__rp_(kk_main__absOpExp ab, kk_main__absOpExp bb, bool _y_x10286, kk_context_t* _ctx); /* (ab : absOpExp, bb : absOpExp, bool) -> pure bool */ 

bool kk_main_absOpExp_fs__lp__eq__eq__rp_(kk_main__absOpExp a, kk_main__absOpExp b, kk_context_t* _ctx); /* (a : absOpExp, b : absOpExp) -> pure bool */ 

bool kk_main_hashmap_fs__lp__eq__eq__rp_(kk_std_data_hashmap__hash_map a, kk_std_data_hashmap__hash_map b, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_function_t _implicit_fs_value_fs__lp__eq__eq__rp_, kk_context_t* _ctx); /* forall<a,b> (a : std/data/hashmap/hash-map<a,b>, b : std/data/hashmap/hash-map<a,b>, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int, ?value/(==) : (b, b) -> bool) -> bool */ 

bool kk_main_iteratorContextExp_fs__lp__at_mlift_x_10939_eq__eq__rp_(kk_main__absValueExp aav, kk_main__absValueExp bav, bool _y_x10293, kk_context_t* _ctx); /* (aav : absValueExp, bav : absValueExp, bool) -> pure bool */ 

bool kk_main_iteratorContextExp_fs__lp__eq__eq__rp_(kk_main__iteratorContextExp a, kk_main__iteratorContextExp b, kk_context_t* _ctx); /* (a : iteratorContextExp, b : iteratorContextExp) -> pure bool */ 

static inline bool kk_main_path_fs__lp__eq__eq__rp_(kk_main__path a, kk_main__path b, kk_context_t* _ctx) { /* (a : path, b : path) -> bool */ 
  return kk_main_path_fs_eqDiv(a, b, _ctx);
}

bool kk_main_pathExp_fs__lp__at_mlift_x_10940_eq__eq__rp_(bool ad, bool bd, bool _y_x10300, kk_context_t* _ctx); /* (ad : bool, bd : bool, bool) -> pure bool */ 

bool kk_main_pathExp_fs__lp__at_mlift_x_10941_eq__eq__rp_(kk_main__absOpExp ac, bool ad_0, kk_main__absOpExp bc, bool bd_0, bool _y_x10299, kk_context_t* _ctx); /* (ac : absOpExp, ad : bool, bc : absOpExp, bd : bool, bool) -> pure bool */ 

bool kk_main_pathExp_fs__lp__at_mlift_x_10942_eq__eq__rp_(kk_main__pathExp ab, kk_main__pathExp bb, bool _y_x10303, kk_context_t* _ctx); /* (ab : pathExp, bb : pathExp, bool) -> pure bool */ 

bool kk_main_pathExp_fs__lp__at_mlift_x_10943_eq__eq__rp_(kk_main__pathExp aels, kk_main__pathExp bels, bool _y_x10306, kk_context_t* _ctx); /* (aels : pathExp, bels : pathExp, bool) -> pure bool */ 

bool kk_main_pathExp_fs__lp__eq__eq__rp_(kk_main__pathExp a, kk_main__pathExp b, kk_context_t* _ctx); /* (a : pathExp, b : pathExp) -> pure bool */ 

kk_std_core_types__maybe kk_main_storeExp_fs_get(kk_main__storeExp store, kk_main__varName v, kk_context_t* _ctx); /* (store : storeExp, v : varName) -> maybe<absValueExp> */ 

static inline kk_std_data_hashset__hash_set kk_main_hashset_fs_union(kk_std_data_hashset__hash_set a, kk_std_data_hashset__hash_set b, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_context_t* _ctx) { /* forall<a> (a : std/data/hashset/hash-set<a>, b : std/data/hashset/hash-set<a>, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int) -> std/data/hashset/hash-set<a> */ 
  kk_std_core_types__list xs_10107 = kk_main_hashset_fs_list(a, _ctx); /*list<11209>*/;
  kk_std_core_types__list ys_10108 = kk_main_hashset_fs_list(b, _ctx); /*list<11209>*/;
  kk_std_core_types__list _x_x5093 = kk_std_core_list_append(xs_10107, ys_10108, _ctx); /*list<13210>*/
  return kk_std_data_hashset_thread_fs_list_fs_hash_set(_x_x5093, _implicit_fs_hash, _implicit_fs__lp__eq__eq__rp_, _ctx);
}

kk_string_t kk_main_hashmap_fs_prettyPrint(kk_std_data_hashmap__hash_map map, kk_function_t _implicit_fs_value_fs_show, kk_context_t* _ctx); /* forall<a> (map : std/data/hashmap/hash-map<int,a>, ?value/show : (a) -> string) -> div string */ 

static inline kk_integer_t kk_main_op_fs_hash(kk_main__op op, int64_t x, kk_context_t* _ctx) { /* (op : op, x : int64) -> int */ 
  if (kk_main__is_AndOp(op, _ctx)) {
    return kk_integer_from_small(0);
  }
  if (kk_main__is_NotOp(op, _ctx)) {
    return kk_integer_from_small(1);
  }
  if (kk_main__is_EqOp(op, _ctx)) {
    return kk_integer_from_small(2);
  }
  if (kk_main__is_GtOp(op, _ctx)) {
    return kk_integer_from_small(3);
  }
  {
    return kk_integer_from_small(4);
  }
}

static inline kk_integer_t kk_main_literal_fs_hash(kk_main__literal a, int64_t x, kk_context_t* _ctx) { /* (a : literal, x : int64) -> int */ 
  if (kk_main__is_StringLit(a, _ctx)) {
    kk_string_t str = a._cons.StringLit.str;
    return kk_string_hash(str,x,kk_context());
  }
  {
    kk_integer_t num = a._cons.NumberLit.num;
    return kk_integer_hash(num,x,kk_context());
  }
}

static inline kk_integer_t kk_main_fieldName_fs_hash(kk_main__fieldName fieldName, int64_t x, kk_context_t* _ctx) { /* (fieldName : fieldName, x : int64) -> int */ 
  if (kk_main__is_FNNamed(fieldName, _ctx)) {
    kk_string_t name = fieldName._cons.FNNamed.name;
    return kk_string_hash(name,x,kk_context());
  }
  {
    return kk_integer_from_small(0);
  }
}

kk_integer_t kk_main_absOp_fs_divHash(kk_main__absOp absOp, int64_t x, kk_context_t* _ctx); /* (absOp : absOp, x : int64) -> div int */ 

kk_integer_t kk_main_absValue_fs_divHash(kk_main__absValue absValue, int64_t x_0_0, kk_context_t* _ctx); /* (absValue : absValue, x : int64) -> div int */ 

kk_integer_t kk_main_path_fs_divHash(kk_main__path path_0, int64_t x_1_0, kk_context_t* _ctx); /* (path : path, x : int64) -> div int */ 

static inline kk_integer_t kk_main_absOp_fs_hash(kk_main__absOp absOp, int64_t x, kk_context_t* _ctx) { /* (absOp : absOp, x : int64) -> int */ 
  return kk_main_absOp_fs_divHash(absOp, x, _ctx);
}

static inline kk_integer_t kk_main_absValue_fs_hash(kk_main__absValue absValue, int64_t x, kk_context_t* _ctx) { /* (absValue : absValue, x : int64) -> int */ 
  return kk_main_absValue_fs_divHash(absValue, x, _ctx);
}

static inline kk_integer_t kk_main_varName_fs_hash(kk_main__varName varName, int64_t x, kk_context_t* _ctx) { /* (varName : varName, x : int64) -> int */ 
  kk_string_t _x_x5149;
  {
    kk_string_t _x = varName.name;
    _x_x5149 = _x; /*string*/
  }
  return kk_string_hash(_x_x5149,x,kk_context());
}

kk_integer_t kk_main_exp_fs_hash(kk_main__exp exp, int64_t x, kk_context_t* _ctx); /* (exp : exp, x : int64) -> int */ 

static inline kk_integer_t kk_main_path_fs_hash(kk_main__path path, int64_t x, kk_context_t* _ctx) { /* (path : path, x : int64) -> int */ 
  return kk_main_path_fs_divHash(path, x, _ctx);
}

extern kk_std_core_hnd__htag kk_main__tag_attrGrammar;

kk_box_t kk_main__handle_attrGrammar(kk_main__attrGrammar hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (hnd : attrGrammar<e,b>, ret : (res : a) -> e b, action : () -> <attrGrammar|e> a) -> e b */ 
 
// select `getAbstractValue` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause1 kk_main__select_getAbstractValue(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause1<exp,absValueExp,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x5169 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause1 _fun_getAbstractValue = _con_x5169->_fun_getAbstractValue;
    return kk_std_core_hnd__clause1_dup(_fun_getAbstractValue, _ctx);
  }
}
 
// Call the `fun getAbstractValue` operation of the effect `:attrGrammar`

static inline kk_main__absValueExp kk_main_getAbstractValue(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> attrGrammar absValueExp */ 
  kk_std_core_hnd__ev ev_11092 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x5170;
  {
    struct kk_std_core_hnd_Ev* _con_x5171 = kk_std_core_hnd__as_Ev(ev_11092, _ctx);
    kk_box_t _box_x484 = _con_x5171->hnd;
    int32_t m = _con_x5171->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x484, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x5172 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x5172->_cfc;
      kk_std_core_hnd__clause1 _fun_getAbstractValue = _con_x5172->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x5172->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x5172->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_3 = _con_x5172->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_4 = _con_x5172->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_5 = _con_x5172->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_6 = _con_x5172->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_7 = _con_x5172->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_8 = _con_x5172->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_9 = _con_x5172->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_10 = _con_x5172->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_11 = _con_x5172->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_12 = _con_x5172->_fun_setTraversalSummary;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause2_drop(_pat_9, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_8, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_7, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_6, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_5, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_4, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_1_0, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_12, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_11, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_10, _ctx);
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_getAbstractValue, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x488 = _fun_getAbstractValue.clause;
        _x_x5170 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x488, (_fun_unbox_x488, m, ev_11092, kk_main__exp_box(exp, _ctx), _ctx), _ctx); /*1010*/
      }
    }
  }
  return kk_main__absValueExp_unbox(_x_x5170, KK_OWNED, _ctx);
}
 
// select `setAbstractValue` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause2 kk_main__select_setAbstractValue(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause2<exp,absValueExp,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x5173 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause2 _fun_setAbstractValue = _con_x5173->_fun_setAbstractValue;
    return kk_std_core_hnd__clause2_dup(_fun_setAbstractValue, _ctx);
  }
}
 
// Call the `fun setAbstractValue` operation of the effect `:attrGrammar`

static inline kk_unit_t kk_main_setAbstractValue(kk_main__exp exp, kk_main__absValueExp absValue, kk_context_t* _ctx) { /* (exp : exp, absValue : absValueExp) -> attrGrammar () */ 
  kk_std_core_hnd__ev evx_11095 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x5174;
  {
    struct kk_std_core_hnd_Ev* _con_x5175 = kk_std_core_hnd__as_Ev(evx_11095, _ctx);
    kk_box_t _box_x492 = _con_x5175->hnd;
    int32_t m = _con_x5175->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x492, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x5176 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x5176->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x5176->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x5176->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_3 = _con_x5176->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_4 = _con_x5176->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_5 = _con_x5176->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _fun_setAbstractValue = _con_x5176->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_6 = _con_x5176->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_7 = _con_x5176->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_8 = _con_x5176->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_9 = _con_x5176->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_10 = _con_x5176->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_11 = _con_x5176->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_12 = _con_x5176->_fun_setTraversalSummary;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause2_drop(_pat_9, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_8, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_7, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_6, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_5, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_4, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_1_0, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_12, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_11, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_10, _ctx);
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause2_dup(_fun_setAbstractValue, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x497 = _fun_setAbstractValue.clause;
        _x_x5174 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x497, (_fun_unbox_x497, m, evx_11095, kk_main__exp_box(exp, _ctx), kk_main__absValueExp_box(absValue, _ctx), _ctx), _ctx); /*1016*/
      }
    }
  }
  kk_unit_unbox(_x_x5174); return kk_Unit;
}
 
// select `getPaths` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause1 kk_main__select_getPaths(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause1<exp,pathExp,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x5177 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause1 _fun_getPaths = _con_x5177->_fun_getPaths;
    return kk_std_core_hnd__clause1_dup(_fun_getPaths, _ctx);
  }
}
 
// Call the `fun getPaths` operation of the effect `:attrGrammar`

static inline kk_main__pathExp kk_main_getPaths(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> attrGrammar pathExp */ 
  kk_std_core_hnd__ev ev_11099 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x5178;
  {
    struct kk_std_core_hnd_Ev* _con_x5179 = kk_std_core_hnd__as_Ev(ev_11099, _ctx);
    kk_box_t _box_x502 = _con_x5179->hnd;
    int32_t m = _con_x5179->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x502, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x5180 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x5180->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x5180->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x5180->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_3 = _con_x5180->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _fun_getPaths = _con_x5180->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_4 = _con_x5180->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_5 = _con_x5180->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_6 = _con_x5180->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_7 = _con_x5180->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_8 = _con_x5180->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_9 = _con_x5180->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_10 = _con_x5180->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_11 = _con_x5180->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_12 = _con_x5180->_fun_setTraversalSummary;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause2_drop(_pat_9, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_8, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_7, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_6, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_5, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_4, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_1_0, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_12, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_11, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_10, _ctx);
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_getPaths, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x506 = _fun_getPaths.clause;
        _x_x5178 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x506, (_fun_unbox_x506, m, ev_11099, kk_main__exp_box(exp, _ctx), _ctx), _ctx); /*1010*/
      }
    }
  }
  return kk_main__pathExp_unbox(_x_x5178, KK_OWNED, _ctx);
}
 
// select `setPaths` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause2 kk_main__select_setPaths(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause2<exp,pathExp,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x5181 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause2 _fun_setPaths = _con_x5181->_fun_setPaths;
    return kk_std_core_hnd__clause2_dup(_fun_setPaths, _ctx);
  }
}
 
// Call the `fun setPaths` operation of the effect `:attrGrammar`

static inline kk_unit_t kk_main_setPaths(kk_main__exp exp, kk_main__pathExp paths, kk_context_t* _ctx) { /* (exp : exp, paths : pathExp) -> attrGrammar () */ 
  kk_std_core_hnd__ev evx_11102 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x5182;
  {
    struct kk_std_core_hnd_Ev* _con_x5183 = kk_std_core_hnd__as_Ev(evx_11102, _ctx);
    kk_box_t _box_x510 = _con_x5183->hnd;
    int32_t m = _con_x5183->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x510, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x5184 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x5184->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x5184->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x5184->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_3 = _con_x5184->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_4 = _con_x5184->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_5 = _con_x5184->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_6 = _con_x5184->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_7 = _con_x5184->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_8 = _con_x5184->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_9 = _con_x5184->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_10 = _con_x5184->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _fun_setPaths = _con_x5184->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_11 = _con_x5184->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_12 = _con_x5184->_fun_setTraversalSummary;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause2_drop(_pat_9, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_8, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_7, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_6, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_5, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_4, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_1_0, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_12, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_11, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_10, _ctx);
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause2_dup(_fun_setPaths, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x515 = _fun_setPaths.clause;
        _x_x5182 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x515, (_fun_unbox_x515, m, evx_11102, kk_main__exp_box(exp, _ctx), kk_main__pathExp_box(paths, _ctx), _ctx), _ctx); /*1016*/
      }
    }
  }
  kk_unit_unbox(_x_x5182); return kk_Unit;
}
 
// select `setOutputStore` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause2 kk_main__select_setOutputStore(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause2<exp,storeExp,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x5185 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause2 _fun_setOutputStore = _con_x5185->_fun_setOutputStore;
    return kk_std_core_hnd__clause2_dup(_fun_setOutputStore, _ctx);
  }
}
 
// fun getOutputStore(exp: exp): storeExp
// Call the `fun setOutputStore` operation of the effect `:attrGrammar`

static inline kk_unit_t kk_main_setOutputStore(kk_main__exp exp, kk_main__storeExp store, kk_context_t* _ctx) { /* (exp : exp, store : storeExp) -> attrGrammar () */ 
  kk_std_core_hnd__ev evx_11106 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x5186;
  {
    struct kk_std_core_hnd_Ev* _con_x5187 = kk_std_core_hnd__as_Ev(evx_11106, _ctx);
    kk_box_t _box_x520 = _con_x5187->hnd;
    int32_t m = _con_x5187->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x520, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x5188 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x5188->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x5188->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x5188->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_3 = _con_x5188->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_4 = _con_x5188->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_5 = _con_x5188->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_6 = _con_x5188->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_7 = _con_x5188->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_8 = _con_x5188->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_9 = _con_x5188->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _fun_setOutputStore = _con_x5188->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_10 = _con_x5188->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_11 = _con_x5188->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_12 = _con_x5188->_fun_setTraversalSummary;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause2_drop(_pat_9, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_8, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_7, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_6, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_5, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_4, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_1_0, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_12, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_11, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_10, _ctx);
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause2_dup(_fun_setOutputStore, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x525 = _fun_setOutputStore.clause;
        _x_x5186 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x525, (_fun_unbox_x525, m, evx_11106, kk_main__exp_box(exp, _ctx), kk_main__storeExp_box(store, _ctx), _ctx), _ctx); /*1016*/
      }
    }
  }
  kk_unit_unbox(_x_x5186); return kk_Unit;
}
 
// select `setInputStore` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause2 kk_main__select_setInputStore(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause2<exp,storeExp,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x5189 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause2 _fun_setInputStore = _con_x5189->_fun_setInputStore;
    return kk_std_core_hnd__clause2_dup(_fun_setInputStore, _ctx);
  }
}
 
// fun getInputStore(exp: exp): storeExp
// Call the `fun setInputStore` operation of the effect `:attrGrammar`

static inline kk_unit_t kk_main_setInputStore(kk_main__exp exp, kk_main__storeExp store, kk_context_t* _ctx) { /* (exp : exp, store : storeExp) -> attrGrammar () */ 
  kk_std_core_hnd__ev evx_11110 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x5190;
  {
    struct kk_std_core_hnd_Ev* _con_x5191 = kk_std_core_hnd__as_Ev(evx_11110, _ctx);
    kk_box_t _box_x530 = _con_x5191->hnd;
    int32_t m = _con_x5191->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x530, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x5192 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x5192->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x5192->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x5192->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_3 = _con_x5192->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_4 = _con_x5192->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_5 = _con_x5192->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_6 = _con_x5192->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_7 = _con_x5192->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _fun_setInputStore = _con_x5192->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_8 = _con_x5192->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_9 = _con_x5192->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_10 = _con_x5192->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_11 = _con_x5192->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_12 = _con_x5192->_fun_setTraversalSummary;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause2_drop(_pat_9, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_8, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_7, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_6, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_5, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_4, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_1_0, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_12, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_11, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_10, _ctx);
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause2_dup(_fun_setInputStore, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x535 = _fun_setInputStore.clause;
        _x_x5190 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x535, (_fun_unbox_x535, m, evx_11110, kk_main__exp_box(exp, _ctx), kk_main__storeExp_box(store, _ctx), _ctx), _ctx); /*1016*/
      }
    }
  }
  kk_unit_unbox(_x_x5190); return kk_Unit;
}
 
// select `setQueryCondition` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause2 kk_main__select_setQueryCondition(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause2<exp,absOpExp,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x5193 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause2 _fun_setQueryCondition = _con_x5193->_fun_setQueryCondition;
    return kk_std_core_hnd__clause2_dup(_fun_setQueryCondition, _ctx);
  }
}
 
// fun getQueryCondition(exp: exp): absOpExp
// Call the `fun setQueryCondition` operation of the effect `:attrGrammar`

static inline kk_unit_t kk_main_setQueryCondition(kk_main__exp exp, kk_main__absOpExp absOp, kk_context_t* _ctx) { /* (exp : exp, absOp : absOpExp) -> attrGrammar () */ 
  kk_std_core_hnd__ev evx_11114 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x5194;
  {
    struct kk_std_core_hnd_Ev* _con_x5195 = kk_std_core_hnd__as_Ev(evx_11114, _ctx);
    kk_box_t _box_x540 = _con_x5195->hnd;
    int32_t m = _con_x5195->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x540, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x5196 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x5196->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x5196->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x5196->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_3 = _con_x5196->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_4 = _con_x5196->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_5 = _con_x5196->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_6 = _con_x5196->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_7 = _con_x5196->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_8 = _con_x5196->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_9 = _con_x5196->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_10 = _con_x5196->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_11 = _con_x5196->_fun_setPaths;
      kk_std_core_hnd__clause2 _fun_setQueryCondition = _con_x5196->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_12 = _con_x5196->_fun_setTraversalSummary;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause2_drop(_pat_9, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_8, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_7, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_6, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_5, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_4, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_1_0, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_12, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_11, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_10, _ctx);
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause2_dup(_fun_setQueryCondition, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x545 = _fun_setQueryCondition.clause;
        _x_x5194 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x545, (_fun_unbox_x545, m, evx_11114, kk_main__exp_box(exp, _ctx), kk_main__absOpExp_box(absOp, _ctx), _ctx), _ctx); /*1016*/
      }
    }
  }
  kk_unit_unbox(_x_x5194); return kk_Unit;
}
 
// select `getDataDependence` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause1 kk_main__select_getDataDependence(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause1<exp,bool,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x5197 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause1 _fun_getDataDependence = _con_x5197->_fun_getDataDependence;
    return kk_std_core_hnd__clause1_dup(_fun_getDataDependence, _ctx);
  }
}
 
// Call the `fun getDataDependence` operation of the effect `:attrGrammar`

static inline bool kk_main_getDataDependence(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> attrGrammar bool */ 
  kk_std_core_hnd__ev ev_11118 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x5198;
  {
    struct kk_std_core_hnd_Ev* _con_x5199 = kk_std_core_hnd__as_Ev(ev_11118, _ctx);
    kk_box_t _box_x550 = _con_x5199->hnd;
    int32_t m = _con_x5199->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x550, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x5200 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x5200->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x5200->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _fun_getDataDependence = _con_x5200->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x5200->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_3 = _con_x5200->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_4 = _con_x5200->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_5 = _con_x5200->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_6 = _con_x5200->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_7 = _con_x5200->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_8 = _con_x5200->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_9 = _con_x5200->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_10 = _con_x5200->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_11 = _con_x5200->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_12 = _con_x5200->_fun_setTraversalSummary;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause2_drop(_pat_9, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_8, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_7, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_6, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_5, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_4, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_1_0, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_12, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_11, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_10, _ctx);
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_getDataDependence, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x554 = _fun_getDataDependence.clause;
        _x_x5198 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x554, (_fun_unbox_x554, m, ev_11118, kk_main__exp_box(exp, _ctx), _ctx), _ctx); /*1010*/
      }
    }
  }
  return kk_bool_unbox(_x_x5198);
}
 
// select `setDataDependence` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause2 kk_main__select_setDataDependence(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause2<exp,bool,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x5201 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause2 _fun_setDataDependence = _con_x5201->_fun_setDataDependence;
    return kk_std_core_hnd__clause2_dup(_fun_setDataDependence, _ctx);
  }
}
 
// Call the `fun setDataDependence` operation of the effect `:attrGrammar`

static inline kk_unit_t kk_main_setDataDependence(kk_main__exp exp, bool dependence, kk_context_t* _ctx) { /* (exp : exp, dependence : bool) -> attrGrammar () */ 
  kk_std_core_hnd__ev evx_11121 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x5202;
  {
    struct kk_std_core_hnd_Ev* _con_x5203 = kk_std_core_hnd__as_Ev(evx_11121, _ctx);
    kk_box_t _box_x558 = _con_x5203->hnd;
    int32_t m = _con_x5203->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x558, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x5204 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x5204->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x5204->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x5204->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_3 = _con_x5204->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_4 = _con_x5204->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_5 = _con_x5204->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_6 = _con_x5204->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _fun_setDataDependence = _con_x5204->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_7 = _con_x5204->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_8 = _con_x5204->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_9 = _con_x5204->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_10 = _con_x5204->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_11 = _con_x5204->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_12 = _con_x5204->_fun_setTraversalSummary;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause2_drop(_pat_9, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_8, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_7, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_6, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_5, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_4, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_1_0, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_12, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_11, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_10, _ctx);
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause2_dup(_fun_setDataDependence, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x563 = _fun_setDataDependence.clause;
        _x_x5202 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x563, (_fun_unbox_x563, m, evx_11121, kk_main__exp_box(exp, _ctx), kk_bool_box(dependence), _ctx), _ctx); /*1016*/
      }
    }
  }
  kk_unit_unbox(_x_x5202); return kk_Unit;
}
 
// select `getIteratorContext` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause1 kk_main__select_getIteratorContext(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause1<exp,iteratorContextExp,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x5205 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause1 _fun_getIteratorContext = _con_x5205->_fun_getIteratorContext;
    return kk_std_core_hnd__clause1_dup(_fun_getIteratorContext, _ctx);
  }
}
 
// Call the `fun getIteratorContext` operation of the effect `:attrGrammar`

static inline kk_main__iteratorContextExp kk_main_getIteratorContext(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> attrGrammar iteratorContextExp */ 
  kk_std_core_hnd__ev ev_11125 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x5206;
  {
    struct kk_std_core_hnd_Ev* _con_x5207 = kk_std_core_hnd__as_Ev(ev_11125, _ctx);
    kk_box_t _box_x568 = _con_x5207->hnd;
    int32_t m = _con_x5207->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x568, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x5208 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x5208->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x5208->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x5208->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _fun_getIteratorContext = _con_x5208->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_3 = _con_x5208->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_4 = _con_x5208->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_5 = _con_x5208->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_6 = _con_x5208->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_7 = _con_x5208->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_8 = _con_x5208->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_9 = _con_x5208->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_10 = _con_x5208->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_11 = _con_x5208->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_12 = _con_x5208->_fun_setTraversalSummary;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause2_drop(_pat_9, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_8, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_7, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_6, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_5, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_4, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_1_0, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_12, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_11, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_10, _ctx);
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_getIteratorContext, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x572 = _fun_getIteratorContext.clause;
        _x_x5206 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x572, (_fun_unbox_x572, m, ev_11125, kk_main__exp_box(exp, _ctx), _ctx), _ctx); /*1010*/
      }
    }
  }
  return kk_main__iteratorContextExp_unbox(_x_x5206, KK_OWNED, _ctx);
}
 
// select `setIteratorContext` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause2 kk_main__select_setIteratorContext(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause2<exp,iteratorContextExp,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x5209 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause2 _fun_setIteratorContext = _con_x5209->_fun_setIteratorContext;
    return kk_std_core_hnd__clause2_dup(_fun_setIteratorContext, _ctx);
  }
}
 
// Call the `fun setIteratorContext` operation of the effect `:attrGrammar`

static inline kk_unit_t kk_main_setIteratorContext(kk_main__exp exp, kk_main__iteratorContextExp paths, kk_context_t* _ctx) { /* (exp : exp, paths : iteratorContextExp) -> attrGrammar () */ 
  kk_std_core_hnd__ev evx_11128 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x5210;
  {
    struct kk_std_core_hnd_Ev* _con_x5211 = kk_std_core_hnd__as_Ev(evx_11128, _ctx);
    kk_box_t _box_x576 = _con_x5211->hnd;
    int32_t m = _con_x5211->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x576, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x5212 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x5212->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x5212->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x5212->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_3 = _con_x5212->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_4 = _con_x5212->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_5 = _con_x5212->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_6 = _con_x5212->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_7 = _con_x5212->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_8 = _con_x5212->_fun_setInputStore;
      kk_std_core_hnd__clause2 _fun_setIteratorContext = _con_x5212->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_9 = _con_x5212->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_10 = _con_x5212->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_11 = _con_x5212->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_12 = _con_x5212->_fun_setTraversalSummary;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause2_drop(_pat_9, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_8, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_7, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_6, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_5, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_4, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_1_0, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_12, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_11, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_10, _ctx);
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause2_dup(_fun_setIteratorContext, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x581 = _fun_setIteratorContext.clause;
        _x_x5210 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x581, (_fun_unbox_x581, m, evx_11128, kk_main__exp_box(exp, _ctx), kk_main__iteratorContextExp_box(paths, _ctx), _ctx), _ctx); /*1016*/
      }
    }
  }
  kk_unit_unbox(_x_x5210); return kk_Unit;
}
 
// select `getTraversalSummary` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause1 kk_main__select_getTraversalSummary(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause1<exp,pathExp,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x5213 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause1 _fun_getTraversalSummary = _con_x5213->_fun_getTraversalSummary;
    return kk_std_core_hnd__clause1_dup(_fun_getTraversalSummary, _ctx);
  }
}
 
// Call the `fun getTraversalSummary` operation of the effect `:attrGrammar`

static inline kk_main__pathExp kk_main_getTraversalSummary(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> attrGrammar pathExp */ 
  kk_std_core_hnd__ev ev_11132 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x5214;
  {
    struct kk_std_core_hnd_Ev* _con_x5215 = kk_std_core_hnd__as_Ev(ev_11132, _ctx);
    kk_box_t _box_x586 = _con_x5215->hnd;
    int32_t m = _con_x5215->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x586, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x5216 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x5216->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x5216->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x5216->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_3 = _con_x5216->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_4 = _con_x5216->_fun_getPaths;
      kk_std_core_hnd__clause1 _fun_getTraversalSummary = _con_x5216->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_5 = _con_x5216->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_6 = _con_x5216->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_7 = _con_x5216->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_8 = _con_x5216->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_9 = _con_x5216->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_10 = _con_x5216->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_11 = _con_x5216->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_12 = _con_x5216->_fun_setTraversalSummary;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause2_drop(_pat_9, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_8, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_7, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_6, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_5, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_4, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_1_0, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_12, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_11, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_10, _ctx);
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_getTraversalSummary, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x590 = _fun_getTraversalSummary.clause;
        _x_x5214 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x590, (_fun_unbox_x590, m, ev_11132, kk_main__exp_box(exp, _ctx), _ctx), _ctx); /*1010*/
      }
    }
  }
  return kk_main__pathExp_unbox(_x_x5214, KK_OWNED, _ctx);
}
 
// select `setTraversalSummary` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause2 kk_main__select_setTraversalSummary(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause2<exp,pathExp,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x5217 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause2 _fun_setTraversalSummary = _con_x5217->_fun_setTraversalSummary;
    return kk_std_core_hnd__clause2_dup(_fun_setTraversalSummary, _ctx);
  }
}
 
// Call the `fun setTraversalSummary` operation of the effect `:attrGrammar`

static inline kk_unit_t kk_main_setTraversalSummary(kk_main__exp exp, kk_main__pathExp summary, kk_context_t* _ctx) { /* (exp : exp, summary : pathExp) -> attrGrammar () */ 
  kk_std_core_hnd__ev evx_11135 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x5218;
  {
    struct kk_std_core_hnd_Ev* _con_x5219 = kk_std_core_hnd__as_Ev(evx_11135, _ctx);
    kk_box_t _box_x594 = _con_x5219->hnd;
    int32_t m = _con_x5219->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x594, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x5220 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x5220->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x5220->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x5220->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_3 = _con_x5220->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_4 = _con_x5220->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_5 = _con_x5220->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_6 = _con_x5220->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_7 = _con_x5220->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_8 = _con_x5220->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_9 = _con_x5220->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_10 = _con_x5220->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_11 = _con_x5220->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_12 = _con_x5220->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _fun_setTraversalSummary = _con_x5220->_fun_setTraversalSummary;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause2_drop(_pat_9, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_8, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_7, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_6, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_5, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_4, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_1_0, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_12, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_11, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_10, _ctx);
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause2_dup(_fun_setTraversalSummary, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x599 = _fun_setTraversalSummary.clause;
        _x_x5218 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x599, (_fun_unbox_x599, m, evx_11135, kk_main__exp_box(exp, _ctx), kk_main__pathExp_box(summary, _ctx), _ctx), _ctx); /*1016*/
      }
    }
  }
  kk_unit_unbox(_x_x5218); return kk_Unit;
}

extern kk_std_core_hnd__htag kk_main__tag_subst;

kk_box_t kk_main__handle_subst(kk_main__subst hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (hnd : subst<e,b>, ret : (res : a) -> e b, action : () -> <subst|e> a) -> e b */ 
 
// select `substAV` operation out of effect `:subst`

static inline kk_std_core_hnd__clause2 kk_main__select_substAV(kk_main__subst hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : subst<e,a>) -> hnd/clause2<exp,exp,absValueExp,subst,e,a> */ 
  {
    struct kk_main__Hnd_subst* _con_x5224 = kk_main__as_Hnd_subst(hnd, _ctx);
    kk_std_core_hnd__clause2 _fun_substAV = _con_x5224->_fun_substAV;
    return kk_std_core_hnd__clause2_dup(_fun_substAV, _ctx);
  }
}

extern kk_std_core_hnd__htag kk_main__tag_nondet;

kk_box_t kk_main__handle_nondet(kk_main__nondet hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (hnd : nondet<e,b>, ret : (res : a) -> e b, action : () -> <nondet|e> a) -> e b */ 
 
// select `choose` operation out of effect `:nondet`

static inline kk_std_core_hnd__clause2 kk_main__select_choose(kk_main__nondet hnd, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : nondet<e,b>) -> hnd/clause2<a,a,a,nondet,e,b> */ 
  {
    struct kk_main__Hnd_nondet* _con_x5228 = kk_main__as_Hnd_nondet(hnd, _ctx);
    kk_std_core_hnd__clause2 _ctl_choose = _con_x5228->_ctl_choose;
    return kk_std_core_hnd__clause2_dup(_ctl_choose, _ctx);
  }
}
 
// select `fail` operation out of effect `:nondet`

static inline kk_std_core_hnd__clause0 kk_main__select_fail(kk_main__nondet hnd, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : nondet<e,b>) -> hnd/clause0<a,nondet,e,b> */ 
  {
    struct kk_main__Hnd_nondet* _con_x5229 = kk_main__as_Hnd_nondet(hnd, _ctx);
    kk_std_core_hnd__clause0 _brk_fail = _con_x5229->_brk_fail;
    return kk_std_core_hnd__clause0_dup(_brk_fail, _ctx);
  }
}

kk_main__absValue kk_main__lp__dot__dot__rp_(kk_main__absValue value, kk_main__fieldName fieldName, kk_context_t* _ctx); /* (value : absValue, fieldName : fieldName) -> exn absValue */ 

kk_main__absValueExp kk_main_absValueExp_fs__mlift_trmc_simplify_10944(kk_std_core_types__cctx _acc, kk_main__absValueExp _y_x10331, kk_context_t* _ctx); /* (ctx<absValueExp>, absValueExp) -> <attrGrammar,exn,div> absValueExp */ 

kk_main__absValueExp kk_main_absValueExp_fs__mlift_trmc_simplify_10945(kk_std_core_types__cctx _acc_0, kk_main__absValue _y_x10332, kk_context_t* _ctx); /* (ctx<absValueExp>, absValue) -> <exn,attrGrammar,div> absValueExp */ 

kk_main__absValueExp kk_main_absValueExp_fs__trmc_simplify(kk_main__absValueExp ave, kk_std_core_types__cctx _acc_1, kk_context_t* _ctx); /* (ave : absValueExp, ctx<absValueExp>) -> <pure,attrGrammar> absValueExp */ 

kk_main__absValueExp kk_main_absValueExp_fs_simplify(kk_main__absValueExp ave_0, kk_context_t* _ctx); /* (ave : absValueExp) -> <pure,attrGrammar> absValueExp */ 

kk_main__pathExp kk_main_pathExp_fs__mlift_trmc_simplify_10946(kk_std_core_types__cctx _acc, kk_main__absValueExp _y_x10336, kk_context_t* _ctx); /* (ctx<pathExp>, absValueExp) -> <pure,attrGrammar> pathExp */ 

kk_main__pathExp kk_main_pathExp_fs__mlift_trmc_simplify_10947(kk_std_core_types__cctx _acc_0, kk_main__pathExp pathExp, kk_main__iteratorContextExp _y_x10338, kk_context_t* _ctx); /* (ctx<pathExp>, pathExp : pathExp, iteratorContextExp) -> <attrGrammar,exn,div> pathExp */ 

kk_main__pathExp kk_main_pathExp_fs__mlift_trmc_simplify_10948(kk_std_core_types__cctx _acc_1, kk_main__pathExp _y_x10340, kk_context_t* _ctx); /* (ctx<pathExp>, pathExp) -> <attrGrammar,exn,div> pathExp */ 

kk_main__pathExp kk_main_pathExp_fs__mlift_trmc_simplify_10949(kk_std_core_types__cctx _acc_2, kk_main__pathExp _y_x10343, kk_context_t* _ctx); /* (ctx<pathExp>, pathExp) -> <attrGrammar,exn,div> pathExp */ 

kk_main__pathExp kk_main_pathExp_fs__mlift_trmc_simplify_10950(kk_std_core_types__cctx _acc_3, kk_main__pathExp b_0, kk_main__pathExp _trmc_x10261, kk_context_t* _ctx); /* (ctx<pathExp>, b@0 : pathExp, pathExp) -> <pure,attrGrammar> pathExp */ 

kk_main__pathExp kk_main_pathExp_fs__mlift_trmc_simplify_10951(kk_std_core_types__cctx _acc_4, kk_main__pathExp a_0, kk_main__pathExp b_0_0, bool _y_x10344, kk_context_t* _ctx); /* (ctx<pathExp>, a@0 : pathExp, b@0 : pathExp, bool) -> <div,exn,attrGrammar> pathExp */ 

kk_main__pathExp kk_main_pathExp_fs__mlift_trmc_simplify_10952(kk_std_core_types__cctx _acc_5, kk_main__pathExp els, kk_main__pathExp thn, bool _y_x10349, kk_context_t* _ctx); /* (ctx<pathExp>, els : pathExp, thn : pathExp, bool) -> <attrGrammar,div,exn> pathExp */ 

kk_main__pathExp kk_main_pathExp_fs__trmc_simplify(kk_main__pathExp pathExp_0, kk_std_core_types__cctx _acc_6, kk_context_t* _ctx); /* (pathExp : pathExp, ctx<pathExp>) -> <pure,attrGrammar> pathExp */ 

kk_main__pathExp kk_main_pathExp_fs_simplify(kk_main__pathExp pathExp_1, kk_context_t* _ctx); /* (pathExp : pathExp) -> <pure,attrGrammar> pathExp */ 
 
// Call the `fun substAV` operation of the effect `:subst`

static inline kk_main__absValueExp kk_main_substAV(kk_main__exp exp, kk_main__exp noCycle, kk_context_t* _ctx) { /* (exp : exp, noCycle : exp) -> subst absValueExp */ 
  kk_std_core_hnd__ev evx_11185 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/subst>*/;
  kk_box_t _x_x5393;
  {
    struct kk_std_core_hnd_Ev* _con_x5394 = kk_std_core_hnd__as_Ev(evx_11185, _ctx);
    kk_box_t _box_x940 = _con_x5394->hnd;
    int32_t m = _con_x5394->marker;
    kk_main__subst h = kk_main__subst_unbox(_box_x940, KK_BORROWED, _ctx);
    kk_main__subst_dup(h, _ctx);
    {
      struct kk_main__Hnd_subst* _con_x5395 = kk_main__as_Hnd_subst(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x5395->_cfc;
      kk_std_core_hnd__clause2 _fun_substAV = _con_x5395->_fun_substAV;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause2_dup(_fun_substAV, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x945 = _fun_substAV.clause;
        _x_x5393 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x945, (_fun_unbox_x945, m, evx_11185, kk_main__exp_box(exp, _ctx), kk_main__exp_box(noCycle, _ctx), _ctx), _ctx); /*1016*/
      }
    }
  }
  return kk_main__absValueExp_unbox(_x_x5393, KK_OWNED, _ctx);
}
 
// Call the `ctl choose` operation of the effect `:nondet`

static inline kk_box_t kk_main_choose(kk_box_t x, kk_box_t y, kk_context_t* _ctx) { /* forall<a> (x : a, y : a) -> nondet a */ 
  kk_std_core_hnd__ev evx_11189 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/nondet>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x5396 = kk_std_core_hnd__as_Ev(evx_11189, _ctx);
    kk_box_t _box_x950 = _con_x5396->hnd;
    int32_t m = _con_x5396->marker;
    kk_main__nondet h = kk_main__nondet_unbox(_box_x950, KK_BORROWED, _ctx);
    kk_main__nondet_dup(h, _ctx);
    {
      struct kk_main__Hnd_nondet* _con_x5397 = kk_main__as_Hnd_nondet(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x5397->_cfc;
      kk_std_core_hnd__clause2 _ctl_choose = _con_x5397->_ctl_choose;
      kk_std_core_hnd__clause0 _pat_1_0 = _con_x5397->_brk_fail;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_1_0, _ctx);
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause2_dup(_ctl_choose, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t f = _ctl_choose.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), f, (f, m, evx_11189, x, y, _ctx), _ctx);
      }
    }
  }
}
 
// Call the `final ctl fail` operation of the effect `:nondet`

static inline kk_box_t kk_main_fail(kk_context_t* _ctx) { /* forall<a> () -> nondet a */ 
  kk_std_core_hnd__ev ev_11193 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/nondet>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x5398 = kk_std_core_hnd__as_Ev(ev_11193, _ctx);
    kk_box_t _box_x951 = _con_x5398->hnd;
    int32_t m = _con_x5398->marker;
    kk_main__nondet h = kk_main__nondet_unbox(_box_x951, KK_BORROWED, _ctx);
    kk_main__nondet_dup(h, _ctx);
    {
      struct kk_main__Hnd_nondet* _con_x5399 = kk_main__as_Hnd_nondet(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x5399->_cfc;
      kk_std_core_hnd__clause2 _pat_1_0 = _con_x5399->_ctl_choose;
      kk_std_core_hnd__clause0 _brk_fail = _con_x5399->_brk_fail;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause2_drop(_pat_1_0, _ctx);
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_brk_fail, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t f = _brk_fail.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), f, (f, m, ev_11193, _ctx), _ctx);
      }
    }
  }
}


// lift anonymous function
struct kk_main_hash_map_fs_insert_fun5402__t {
  struct kk_function_s _base;
};
extern bool kk_main_hash_map_fs_insert_fun5402(kk_function_t _fself, kk_integer_t _x1_x5400, kk_integer_t _x2_x5401, kk_context_t* _ctx);
static inline kk_function_t kk_main_hash_map_fs_new_insert_fun5402(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hash_map_fs_insert_fun5402, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main_hash_map_fs_insert_fun5405__t {
  struct kk_function_s _base;
};
extern kk_integer_t kk_main_hash_map_fs_insert_fun5405(kk_function_t _fself, kk_integer_t _x1_x5403, kk_integer_t _x2_x5404, kk_context_t* _ctx);
static inline kk_function_t kk_main_hash_map_fs_new_insert_fun5405(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hash_map_fs_insert_fun5405, _ctx)
  return kk_function_dup(_fself,kk_context());
}


static inline kk_std_data_hashmap__hash_map kk_main_hash_map_fs_insert(kk_std_data_hashmap__hash_map map, kk_box_t key, kk_box_t value, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_context_t* _ctx) { /* forall<a,b> (map : std/data/hashmap/hash-map<a,b>, key : a, value : b, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int) -> std/data/hashmap/hash-map<a,b> */ 
  return kk_std_data_hashmap_insert(map, key, value, _implicit_fs_hash, _implicit_fs__lp__eq__eq__rp_, kk_main_hash_map_fs_new_insert_fun5402(_ctx), kk_main_hash_map_fs_new_insert_fun5405(_ctx), _ctx);
}


// lift anonymous function
struct kk_main_hash_set_fs_insert_fun5408__t {
  struct kk_function_s _base;
};
extern bool kk_main_hash_set_fs_insert_fun5408(kk_function_t _fself, kk_integer_t _x1_x5406, kk_integer_t _x2_x5407, kk_context_t* _ctx);
static inline kk_function_t kk_main_hash_set_fs_new_insert_fun5408(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hash_set_fs_insert_fun5408, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main_hash_set_fs_insert_fun5411__t {
  struct kk_function_s _base;
};
extern kk_integer_t kk_main_hash_set_fs_insert_fun5411(kk_function_t _fself, kk_integer_t _x1_x5409, kk_integer_t _x2_x5410, kk_context_t* _ctx);
static inline kk_function_t kk_main_hash_set_fs_new_insert_fun5411(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hash_set_fs_insert_fun5411, _ctx)
  return kk_function_dup(_fself,kk_context());
}


static inline kk_std_data_hashset__hash_set kk_main_hash_set_fs_insert(kk_std_data_hashset__hash_set set, kk_box_t x, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_context_t* _ctx) { /* forall<a> (set : std/data/hashset/hash-set<a>, x : a, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int) -> std/data/hashset/hash-set<a> */ 
  return kk_std_data_hashset_insert(set, x, _implicit_fs_hash, _implicit_fs__lp__eq__eq__rp_, kk_main_hash_set_fs_new_insert_fun5408(_ctx), kk_main_hash_set_fs_new_insert_fun5411(_ctx), _ctx);
}


// lift anonymous function
struct kk_main_hashset_fs_singleton_fun5414__t {
  struct kk_function_s _base;
};
extern bool kk_main_hashset_fs_singleton_fun5414(kk_function_t _fself, kk_integer_t _x1_x5412, kk_integer_t _x2_x5413, kk_context_t* _ctx);
static inline kk_function_t kk_main_hashset_fs_new_singleton_fun5414(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hashset_fs_singleton_fun5414, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main_hashset_fs_singleton_fun5417__t {
  struct kk_function_s _base;
};
extern kk_integer_t kk_main_hashset_fs_singleton_fun5417(kk_function_t _fself, kk_integer_t _x1_x5415, kk_integer_t _x2_x5416, kk_context_t* _ctx);
static inline kk_function_t kk_main_hashset_fs_new_singleton_fun5417(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hashset_fs_singleton_fun5417, _ctx)
  return kk_function_dup(_fself,kk_context());
}


static inline kk_std_data_hashset__hash_set kk_main_hashset_fs_singleton(kk_box_t x, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_context_t* _ctx) { /* forall<a> (x : a, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int) -> std/data/hashset/hash-set<a> */ 
  kk_std_data_hashset__hash_set set_10210 = kk_std_data_hashset_thread_fs_hash_set(kk_std_core_types__new_None(_ctx), _ctx); /*std/data/hashset/hash-set<14628>*/;
  return kk_std_data_hashset_insert(set_10210, x, _implicit_fs_hash, _implicit_fs__lp__eq__eq__rp_, kk_main_hashset_fs_new_singleton_fun5414(_ctx), kk_main_hashset_fs_new_singleton_fun5417(_ctx), _ctx);
}

kk_main__absValue kk_main_applyOp(kk_main__op op, kk_main__absValue a, kk_main__absValue b, kk_context_t* _ctx); /* (op : op, a : absValue, b : absValue) -> absValue */ 

kk_box_t kk_main_getOrThrow(kk_std_data_hashmap__hash_map map, kk_box_t key, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_context_t* _ctx); /* forall<a,b> (map : std/data/hashmap/hash-map<a,b>, key : a, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int) -> exn b */ 

kk_unit_t kk_main_hashmap_fs__mlift_insertAll_10953(kk_std_data_hashmap__hash_map _y_x10358, kk_box_t key, kk_ref_t result, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_box_t _c_x10360, kk_context_t* _ctx); /* forall<h,a,b> (std/data/hashmap/hash-map<a,b>, key : a, result : local-var<h,std/data/hashmap/hash-map<a,b>>, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int, b) -> () */ 

kk_unit_t kk_main_hashmap_fs__mlift_insertAll_10954(kk_std_data_hashmap__hash_map b, kk_box_t key, kk_ref_t result, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_std_data_hashmap__hash_map _y_x10358, kk_context_t* _ctx); /* forall<h,a,b> (b : std/data/hashmap/hash-map<a,b>, key : a, result : local-var<h,std/data/hashmap/hash-map<a,b>>, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int, std/data/hashmap/hash-map<a,b>) -> <local<h>,exn,div> () */ 
 
// monadic lift

static inline kk_std_data_hashmap__hash_map kk_main_hashmap_fs__mlift_insertAll_10955(kk_ref_t result, kk_unit_t wild__, kk_context_t* _ctx) { /* forall<h,a,b> (result : local-var<h,std/data/hashmap/hash-map<a,b>>, wild_ : ()) -> <div,exn,local<h>> std/data/hashmap/hash-map<a,b> */ 
  kk_box_t _x_x5495 = kk_ref_get(result,kk_context()); /*17112*/
  return kk_std_data_hashmap__hash_map_unbox(_x_x5495, KK_OWNED, _ctx);
}

kk_std_data_hashmap__hash_map kk_main_hashmap_fs_insertAll(kk_std_data_hashmap__hash_map a, kk_std_data_hashmap__hash_map b, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_context_t* _ctx); /* forall<a,b> (a : std/data/hashmap/hash-map<a,b>, b : std/data/hashmap/hash-map<a,b>, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int) -> pure std/data/hashmap/hash-map<a,b> */ 

kk_unit_t kk_main__mlift_updateAbstractValue_10956(kk_main__exp exp, kk_main__absValueExp _c_x10366, kk_context_t* _ctx); /* (exp : exp, absValueExp) -> () */ 

kk_unit_t kk_main_updateAbstractValue(kk_main__exp exp, kk_context_t* _ctx); /* (exp : exp) -> <attrGrammar,exn> () */ 

kk_std_data_hashset__hash_set kk_main_extractPaths(kk_main__absValue absValue, kk_context_t* _ctx); /* (absValue : absValue) -> std/data/hashset/hash-set<path> */ 

kk_unit_t kk_main_updatePaths(kk_main__exp exp, kk_context_t* _ctx); /* (exp : exp) -> <attrGrammar,exn> () */ 

kk_unit_t kk_main_updateOutputStore(kk_main__exp exp, kk_context_t* _ctx); /* (exp : exp) -> <pure,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateInputStore_10957(kk_main__exp e, kk_main__storeExp inputStore, kk_main__exp s, kk_main__varName v, kk_unit_t wild___0, kk_context_t* _ctx); /* (e : exp, inputStore : storeExp, s : exp, v : varName, wild_@0 : ()) -> <pure,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateInputStore_10958(kk_main__exp s1, kk_main__exp s2, kk_unit_t wild___1, kk_context_t* _ctx); /* (s1 : exp, s2 : exp, wild_@1 : ()) -> <pure,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateInputStore_10959(kk_main__exp e2, kk_main__storeExp inputStore_0, kk_unit_t wild___2, kk_context_t* _ctx); /* (e2 : exp, inputStore : storeExp, wild_@2 : ()) -> <pure,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateInputStore_10960(kk_main__storeExp inputStore_1, kk_main__exp s2_0, kk_unit_t wild___4, kk_context_t* _ctx); /* (inputStore : storeExp, s2@0 : exp, wild_@4 : ()) -> <pure,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateInputStore_10961(kk_main__storeExp inputStore_2, kk_main__exp s1_0, kk_main__exp s2_0_0, kk_unit_t wild___3, kk_context_t* _ctx); /* (inputStore : storeExp, s1@0 : exp, s2@0 : exp, wild_@3 : ()) -> <pure,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateInputStore_10962(kk_main__exp exp, kk_main__storeExp inputStore_3, kk_unit_t wild__, kk_context_t* _ctx); /* (exp : exp, inputStore : storeExp, wild_ : ()) -> <attrGrammar,div,exn> () */ 

kk_unit_t kk_main_updateInputStore(kk_main__exp exp_0, kk_main__storeExp inputStore_4, kk_context_t* _ctx); /* (exp : exp, inputStore : storeExp) -> <pure,attrGrammar> () */ 

bool kk_main_isValidQueryCondition(kk_main__exp exp, kk_context_t* _ctx); /* (exp : exp) -> bool */ 

kk_main__absOp kk_main_absOp_fs__lp__amp__rp_(kk_main__absOp absOp, kk_main__absValue absValue, kk_context_t* _ctx); /* (absOp : absOp, absValue : absValue) -> absOp */ 

kk_main__absValue kk_main_absValue_fs_not(kk_main__absValue absValue, kk_context_t* _ctx); /* (absValue : absValue) -> absValue */ 

kk_unit_t kk_main__mlift_updateQueryCondition_10963(kk_main__exp e, kk_main__absOpExp queryCondition, kk_main__exp s2, kk_unit_t wild___1, kk_context_t* _ctx); /* (e : exp, queryCondition : absOpExp, s2 : exp, wild_@1 : ()) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateQueryCondition_10964(kk_main__absOpExp queryCondition_0, kk_main__exp s2_0, kk_unit_t wild___2, kk_context_t* _ctx); /* (queryCondition : absOpExp, s2 : exp, wild_@2 : ()) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateQueryCondition_10965(kk_main__exp e_0, kk_main__absOpExp queryCondition_1, kk_main__exp s1, kk_main__exp s2_1, kk_unit_t wild___0, kk_context_t* _ctx); /* (e : exp, queryCondition : absOpExp, s1 : exp, s2 : exp, wild_@0 : ()) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateQueryCondition_10966(kk_main__exp e2, kk_main__absOpExp queryCondition_2, kk_unit_t wild___3, kk_context_t* _ctx); /* (e2 : exp, queryCondition : absOpExp, wild_@3 : ()) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateQueryCondition_10967(kk_main__absOpExp queryCondition_3, kk_main__exp s, kk_unit_t wild___4, kk_context_t* _ctx); /* (queryCondition : absOpExp, s : exp, wild_@4 : ()) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateQueryCondition_10968(kk_main__absOpExp queryCondition_4, kk_main__exp s2_0_0, kk_unit_t wild___5, kk_context_t* _ctx); /* (queryCondition : absOpExp, s2@0 : exp, wild_@5 : ()) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateQueryCondition_10969(kk_main__exp exp, kk_main__absOpExp queryCondition_5, kk_unit_t wild__, kk_context_t* _ctx); /* (exp : exp, queryCondition : absOpExp, wild_ : ()) -> attrGrammar () */ 

kk_unit_t kk_main_updateQueryCondition(kk_main__exp exp_0, kk_main__absOpExp queryCondition_6, kk_context_t* _ctx); /* (exp : exp, queryCondition : absOpExp) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateDataDependence_10970(bool dependence, kk_main__exp e2, kk_unit_t wild___0, kk_context_t* _ctx); /* (dependence : bool, e2 : exp, wild_@0 : ()) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateDataDependence_10971(bool dependence_0, kk_main__exp s2, kk_unit_t wild___2, kk_context_t* _ctx); /* (dependence : bool, s2 : exp, wild_@2 : ()) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateDataDependence_10972(bool dependence_1, kk_main__exp s1, kk_main__exp s2_0, kk_unit_t wild___1, kk_context_t* _ctx); /* (dependence : bool, s1 : exp, s2 : exp, wild_@1 : ()) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateDataDependence_10973(bool dependence_2, kk_main__exp s, kk_unit_t wild___3, kk_context_t* _ctx); /* (dependence : bool, s : exp, wild_@3 : ()) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateDataDependence_10974(bool dependence_3, kk_main__exp s2_0_0, kk_unit_t wild___4, kk_context_t* _ctx); /* (dependence : bool, s2@0 : exp, wild_@4 : ()) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateDataDependence_10975(bool dependence_4, kk_main__exp exp, kk_unit_t wild__, kk_context_t* _ctx); /* (dependence : bool, exp : exp, wild_ : ()) -> attrGrammar () */ 

kk_unit_t kk_main_updateDataDependence(kk_main__exp exp_0, bool parentDependence, kk_context_t* _ctx); /* (exp : exp, parentDependence : bool) -> attrGrammar () */ 

bool kk_main_extends(kk_main__absValue absValue, kk_std_core_types__list paths, kk_context_t* _ctx); /* (absValue : absValue, paths : list<path>) -> bool */ 

kk_unit_t kk_main__mlift_updateIteratorContext_10976(kk_main__exp e, kk_main__exp exp, kk_main__exp s, kk_unit_t wild___0, kk_context_t* _ctx); /* (e : exp, exp : exp, s : exp, wild_@0 : ()) -> <exn,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateIteratorContext_10977(kk_main__iteratorContextExp paths, kk_main__exp s2, kk_unit_t wild___1, kk_context_t* _ctx); /* (paths : iteratorContextExp, s2 : exp, wild_@1 : ()) -> <exn,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateIteratorContext_10978(kk_main__exp e2, kk_main__iteratorContextExp paths_0, kk_unit_t wild___2, kk_context_t* _ctx); /* (e2 : exp, paths : iteratorContextExp, wild_@2 : ()) -> <exn,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateIteratorContext_10979(kk_main__iteratorContextExp paths_1, kk_main__exp s2_0, kk_unit_t wild___4, kk_context_t* _ctx); /* (paths : iteratorContextExp, s2@0 : exp, wild_@4 : ()) -> <exn,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateIteratorContext_10980(kk_main__iteratorContextExp paths_2, kk_main__exp s1_0, kk_main__exp s2_0_0, kk_unit_t wild___3, kk_context_t* _ctx); /* (paths : iteratorContextExp, s1@0 : exp, s2@0 : exp, wild_@3 : ()) -> <exn,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateIteratorContext_10981(kk_main__exp exp_0, kk_main__iteratorContextExp paths_3, kk_unit_t wild__, kk_context_t* _ctx); /* (exp : exp, paths : iteratorContextExp, wild_ : ()) -> <attrGrammar,exn> () */ 

kk_unit_t kk_main_updateIteratorContext(kk_main__exp exp_1, kk_main__iteratorContextExp paths_4, kk_context_t* _ctx); /* (exp : exp, paths : iteratorContextExp) -> <attrGrammar,exn> () */ 

kk_box_t kk_main_firstOrThrow(kk_std_core_types__list l, kk_context_t* _ctx); /* forall<a> (l : list<a>) -> exn a */ 

static inline kk_main__pathExp kk_main_iter(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> pathExp */ 
  kk_main__pathExp _x_x5999;
  kk_main__iteratorContextExp _x_x6000;
  kk_main__exp _x_x6001 = kk_main__exp_dup(exp, _ctx); /*main/exp*/
  _x_x6000 = kk_main__new_ICEIT(kk_reuse_null, 0, _x_x6001, _ctx); /*main/iteratorContextExp*/
  _x_x5999 = kk_main__new_PELast(kk_reuse_null, 0, _x_x6000, _ctx); /*main/pathExp*/
  kk_main__absOpExp _x_x6002 = kk_main__new_AOEC(kk_reuse_null, 0, exp, _ctx); /*main/absOpExp*/
  return kk_main__new_PEValue(kk_reuse_null, 0, _x_x5999, _x_x6002, true, _ctx);
}

kk_unit_t kk_main__mlift_updateTraversalSummary_10982(kk_main__exp exp, kk_main__pathExp _c_x10436, kk_context_t* _ctx); /* (exp : exp, pathExp) -> () */ 

kk_unit_t kk_main_updateTraversalSummary(kk_main__exp exp, kk_context_t* _ctx); /* (exp : exp) -> <attrGrammar,exn> () */ 

kk_main__absValue kk_main_absValue_fs_join(kk_main__absValue v1, kk_main__absValue v2, kk_context_t* _ctx); /* (v1 : absValue, v2 : absValue) -> exn absValue */ 
 
// monadic lift

static inline kk_unit_t kk_main__mlift_updateSynthesizedAttrs_10983(kk_main__exp exp, kk_unit_t wild___1, kk_context_t* _ctx) { /* (exp : exp, wild_@1 : ()) -> <pure,attrGrammar> () */ 
  kk_main_updateTraversalSummary(exp, _ctx); return kk_Unit;
}

kk_unit_t kk_main__mlift_updateSynthesizedAttrs_10984(kk_main__exp exp, kk_unit_t wild___0, kk_context_t* _ctx); /* (exp : exp, wild_@0 : ()) -> <attrGrammar,exn> () */ 

kk_unit_t kk_main__mlift_updateSynthesizedAttrs_10985(kk_main__exp exp, kk_unit_t wild__, kk_context_t* _ctx); /* (exp : exp, wild_ : ()) -> <attrGrammar,exn> () */ 

kk_unit_t kk_main_updateSynthesizedAttrs(kk_main__exp exp, kk_context_t* _ctx); /* (exp : exp) -> <pure,attrGrammar> () */ 

kk_unit_t kk_main__mlift_visit_10986(kk_main__exp e2, kk_function_t f, kk_unit_t wild___0, kk_context_t* _ctx); /* forall<e> (e2 : exp, f : (exp) -> e (), wild_@0 : ()) -> e () */ 

kk_unit_t kk_main__mlift_visit_10987(kk_function_t f_0, kk_main__exp s2, kk_unit_t wild___2, kk_context_t* _ctx); /* forall<e> (f : (exp) -> e (), s2 : exp, wild_@2 : ()) -> e () */ 

kk_unit_t kk_main__mlift_visit_10988(kk_function_t f_1, kk_main__exp s1, kk_main__exp s2_0, kk_unit_t wild___1, kk_context_t* _ctx); /* forall<e> (f : (exp) -> e (), s1 : exp, s2 : exp, wild_@1 : ()) -> e () */ 

kk_unit_t kk_main__mlift_visit_10989(kk_function_t f_2, kk_main__exp s, kk_unit_t wild___3, kk_context_t* _ctx); /* forall<e> (f : (exp) -> e (), s : exp, wild_@3 : ()) -> e () */ 

kk_unit_t kk_main__mlift_visit_10990(kk_function_t f_3, kk_main__exp s2_0_0, kk_unit_t wild___4, kk_context_t* _ctx); /* forall<e> (f : (exp) -> e (), s2@0 : exp, wild_@4 : ()) -> e () */ 

kk_unit_t kk_main__mlift_visit_10991(kk_main__exp exp, kk_function_t f_4, kk_unit_t wild__, kk_context_t* _ctx); /* forall<e> (exp : exp, f : (exp) -> e (), wild_ : ()) -> e () */ 

kk_unit_t kk_main_visit(kk_main__exp exp_0, kk_function_t f_5, kk_context_t* _ctx); /* forall<e> (exp : exp, f : (exp) -> e ()) -> e () */ 
 
// monadic lift

static inline kk_unit_t kk_main__mlift_iterateAttributeGrammar_10992(kk_main__exp exp, kk_unit_t wild___2, kk_context_t* _ctx) { /* (exp : exp, wild_@2 : ()) -> <attrGrammar,exn,div> () */ 
  kk_main_updateIteratorContext(exp, kk_main__new_ICEEmpty(_ctx), _ctx); return kk_Unit;
}

kk_unit_t kk_main__mlift_iterateAttributeGrammar_10993(kk_main__exp exp, kk_unit_t wild___1, kk_context_t* _ctx); /* (exp : exp, wild_@1 : ()) -> <attrGrammar,exn,div> () */ 

kk_unit_t kk_main__mlift_iterateAttributeGrammar_10994(kk_main__exp exp, kk_unit_t wild___0, kk_context_t* _ctx); /* (exp : exp, wild_@0 : ()) -> <pure,attrGrammar> () */ 

kk_unit_t kk_main__mlift_iterateAttributeGrammar_10995(kk_main__exp exp, kk_unit_t wild__, kk_context_t* _ctx); /* (exp : exp, wild_ : ()) -> <attrGrammar,div,exn> () */ 

kk_unit_t kk_main_iterateAttributeGrammar(kk_main__exp exp, kk_context_t* _ctx); /* (exp : exp) -> <pure,attrGrammar> () */ 

static inline kk_box_t kk_main_getOrDefault(kk_std_data_hashmap__hash_map map, kk_box_t key, kk_box_t kkloc_default, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_context_t* _ctx) { /* forall<a,b> (map : std/data/hashmap/hash-map<a,b>, key : a, default : b, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int) -> b */ 
  kk_std_core_types__maybe _match_x3720 = kk_std_data_hashmap_get(map, key, _implicit_fs_hash, _implicit_fs__lp__eq__eq__rp_, _ctx); /*maybe<3177>*/;
  if (kk_std_core_types__is_Just(_match_x3720, _ctx)) {
    kk_box_t value = _match_x3720._cons.Just.value;
    kk_box_drop(kkloc_default, _ctx);
    return value;
  }
  {
    return kkloc_default;
  }
}

extern kk_std_core_hnd__htag kk_main__tag_fixpoint;

kk_box_t kk_main__handle_fixpoint(kk_main__fixpoint hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (hnd : fixpoint<e,b>, ret : (res : a) -> e b, action : () -> <fixpoint|e> a) -> e b */ 
 
// select `modified` operation out of effect `:fixpoint`

static inline kk_std_core_hnd__clause0 kk_main__select_modified(kk_main__fixpoint hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : fixpoint<e,a>) -> hnd/clause0<(),fixpoint,e,a> */ 
  {
    struct kk_main__Hnd_fixpoint* _con_x6317 = kk_main__as_Hnd_fixpoint(hnd, _ctx);
    kk_std_core_hnd__clause0 _fun_modified = _con_x6317->_fun_modified;
    return kk_std_core_hnd__clause0_dup(_fun_modified, _ctx);
  }
}
 
// Call the `fun modified` operation of the effect `:fixpoint`

static inline kk_unit_t kk_main_modified(kk_context_t* _ctx) { /* () -> fixpoint () */ 
  kk_std_core_hnd__ev ev_11442 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/fixpoint>*/;
  kk_box_t _x_x6318;
  {
    struct kk_std_core_hnd_Ev* _con_x6319 = kk_std_core_hnd__as_Ev(ev_11442, _ctx);
    kk_box_t _box_x1987 = _con_x6319->hnd;
    int32_t m = _con_x6319->marker;
    kk_main__fixpoint h = kk_main__fixpoint_unbox(_box_x1987, KK_BORROWED, _ctx);
    kk_main__fixpoint_dup(h, _ctx);
    {
      struct kk_main__Hnd_fixpoint* _con_x6320 = kk_main__as_Hnd_fixpoint(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6320->_cfc;
      kk_std_core_hnd__clause0 _fun_modified = _con_x6320->_fun_modified;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_fun_modified, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x1990 = _fun_modified.clause;
        _x_x6318 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x1990, (_fun_unbox_x1990, m, ev_11442, _ctx), _ctx); /*1005*/
      }
    }
  }
  kk_unit_unbox(_x_x6318); return kk_Unit;
}

static inline kk_string_t kk_main_mapShow(kk_std_data_hashmap__hash_map map, kk_function_t _implicit_fs_keyShow, kk_function_t _implicit_fs_valueShow, kk_context_t* _ctx) { /* forall<a,b> (map : std/data/hashmap/hash-map<a,b>, ?keyShow : (a) -> string, ?valueShow : (b) -> string) -> string */ 
  return kk_main_hashmap_fs_show(map, _implicit_fs_keyShow, _implicit_fs_valueShow, _ctx);
}

kk_main__absValueExp kk_main__mlift_analyze_10996(kk_main__exp exp, kk_std_data_hashmap__hash_map _y_x10466, kk_context_t* _ctx); /* forall<h> (exp : exp, std/data/hashmap/hash-map<exp,absValueExp>) -> <local<h>,div,exn,fixpoint> absValueExp */ 

bool kk_main__mlift_analyze_10997(kk_main__exp exp_0, kk_std_data_hashmap__hash_map _y_x10467, kk_context_t* _ctx); /* forall<h> (exp@0 : exp, std/data/hashmap/hash-map<exp,bool>) -> <local<h>,div,exn,fixpoint> bool */ 

kk_main__iteratorContextExp kk_main__mlift_analyze_10998(kk_main__exp exp_1, kk_std_data_hashmap__hash_map _y_x10468, kk_context_t* _ctx); /* forall<h> (exp@1 : exp, std/data/hashmap/hash-map<exp,iteratorContextExp>) -> <local<h>,div,exn,fixpoint> iteratorContextExp */ 

kk_main__pathExp kk_main__mlift_analyze_10999(kk_main__exp exp_2, kk_std_data_hashmap__hash_map _y_x10469, kk_context_t* _ctx); /* forall<h> (exp@2 : exp, std/data/hashmap/hash-map<exp,pathExp>) -> <local<h>,div,exn,fixpoint> pathExp */ 

kk_main__pathExp kk_main__mlift_analyze_11000(kk_main__exp exp_3, kk_std_data_hashmap__hash_map _y_x10470, kk_context_t* _ctx); /* forall<h> (exp@3 : exp, std/data/hashmap/hash-map<exp,pathExp>) -> <local<h>,div,exn,fixpoint> pathExp */ 

kk_unit_t kk_main__mlift_analyze_11001(kk_ref_t abstractValues, kk_main__absValueExp absValue, kk_main__exp exp_4, kk_std_data_hashmap__hash_map _y_x10471, kk_context_t* _ctx); /* forall<h> (abstractValues : local-var<h,std/data/hashmap/hash-map<exp,absValueExp>>, absValue : absValueExp, exp@4 : exp, std/data/hashmap/hash-map<exp,absValueExp>) -> <local<h>,div,exn,fixpoint> () */ 

kk_unit_t kk_main__mlift_analyze_11002(kk_ref_t dataDependences, bool dependence, kk_main__exp exp_5, kk_std_data_hashmap__hash_map _y_x10473, kk_context_t* _ctx); /* forall<h> (dataDependences : local-var<h,std/data/hashmap/hash-map<exp,bool>>, dependence : bool, exp@5 : exp, std/data/hashmap/hash-map<exp,bool>) -> <local<h>,div,exn,fixpoint> () */ 

kk_unit_t kk_main__mlift_analyze_11003(kk_main__exp exp_6, kk_main__storeExp inputStore, kk_ref_t inputStores, kk_std_data_hashmap__hash_map _y_x10475, kk_context_t* _ctx); /* forall<h> (exp@6 : exp, inputStore : storeExp, inputStores : local-var<h,std/data/hashmap/hash-map<exp,storeExp>>, std/data/hashmap/hash-map<exp,storeExp>) -> <local<h>,div,exn,fixpoint> () */ 

kk_unit_t kk_main__mlift_analyze_11004(kk_main__exp exp_7, kk_main__iteratorContextExp iteratorContext, kk_ref_t iteratorContexts, kk_std_data_hashmap__hash_map _y_x10477, kk_context_t* _ctx); /* forall<h> (exp@7 : exp, iteratorContext : iteratorContextExp, iteratorContexts : local-var<h,std/data/hashmap/hash-map<exp,iteratorContextExp>>, std/data/hashmap/hash-map<exp,iteratorContextExp>) -> <local<h>,div,exn,fixpoint> () */ 

kk_unit_t kk_main__mlift_analyze_11005(kk_main__exp exp_8, kk_main__storeExp outputStore, kk_ref_t outputStores, kk_std_data_hashmap__hash_map _y_x10479, kk_context_t* _ctx); /* forall<h> (exp@8 : exp, outputStore : storeExp, outputStores : local-var<h,std/data/hashmap/hash-map<exp,storeExp>>, std/data/hashmap/hash-map<exp,storeExp>) -> <local<h>,div,exn,fixpoint> () */ 

kk_unit_t kk_main__mlift_analyze_11006(kk_main__exp exp_9, kk_main__pathExp paths, kk_ref_t pathsByExp, kk_std_data_hashmap__hash_map _y_x10481, kk_context_t* _ctx); /* forall<h> (exp@9 : exp, paths : pathExp, pathsByExp : local-var<h,std/data/hashmap/hash-map<exp,pathExp>>, std/data/hashmap/hash-map<exp,pathExp>) -> <local<h>,div,exn,fixpoint> () */ 

kk_unit_t kk_main__mlift_analyze_11007(kk_main__exp exp_10, kk_main__absOpExp queryCondition, kk_ref_t queryConditions, kk_std_data_hashmap__hash_map _y_x10483, kk_context_t* _ctx); /* forall<h> (exp@10 : exp, queryCondition : absOpExp, queryConditions : local-var<h,std/data/hashmap/hash-map<exp,absOpExp>>, std/data/hashmap/hash-map<exp,absOpExp>) -> <local<h>,div,exn,fixpoint> () */ 

kk_unit_t kk_main__mlift_analyze_11008(kk_main__exp exp_11, kk_ref_t traversalSummaries, kk_main__pathExp traversalSummary, kk_std_data_hashmap__hash_map _y_x10485, kk_context_t* _ctx); /* forall<h> (exp@11 : exp, traversalSummaries : local-var<h,std/data/hashmap/hash-map<exp,pathExp>>, traversalSummary : pathExp, std/data/hashmap/hash-map<exp,pathExp>) -> <local<h>,div,exn,fixpoint> () */ 

kk_main__pathExp kk_main__mlift_analyze_11009(kk_main__pathExp _y_x10517, kk_context_t* _ctx); /* forall<h> (pathExp) -> <attrGrammar,div,exn,local<h>,fixpoint> pathExp */ 

kk_main__pathExp kk_main__mlift_analyze_11010(kk_main__pathExp _y_x10516, kk_context_t* _ctx); /* forall<h> (pathExp) -> <attrGrammar,div,exn,local<h>,fixpoint> pathExp */ 

kk_main__pathExp kk_main__mlift_analyze_11011(kk_main__pathExp _y_x10515, kk_context_t* _ctx); /* forall<h> (pathExp) -> <attrGrammar,div,exn,local<h>,fixpoint> pathExp */ 

kk_main__pathExp kk_main__mlift_analyze_11012(kk_main__pathExp _y_x10514, kk_context_t* _ctx); /* forall<h> (pathExp) -> <attrGrammar,div,exn,local<h>,fixpoint> pathExp */ 

kk_std_core_types__tuple3 kk_main__mlift_analyze_11013(kk_std_data_hashmap__hash_map _y_x10488, kk_std_data_hashmap__hash_map _y_x10512, kk_std_data_hashmap__hash_map _y_x10519, kk_context_t* _ctx); /* forall<h> (std/data/hashmap/hash-map<exp,storeExp>, std/data/hashmap/hash-map<int,pathExp>, std/data/hashmap/hash-map<int,pathExp>) -> <attrGrammar,div,exn,local<h>,fixpoint> (std/data/hashmap/hash-map<int,storeExp>, std/data/hashmap/hash-map<int,pathExp>, std/data/hashmap/hash-map<int,pathExp>) */ 

kk_std_core_types__tuple3 kk_main__mlift_analyze_11014(kk_std_data_hashmap__hash_map _y_x10488, kk_std_data_hashmap__hash_map _y_x10512, kk_std_data_hashmap__hash_map _y_x10513, kk_context_t* _ctx); /* forall<h> (std/data/hashmap/hash-map<exp,storeExp>, std/data/hashmap/hash-map<int,pathExp>, std/data/hashmap/hash-map<exp,pathExp>) -> <local<h>,attrGrammar,div,exn,fixpoint> (std/data/hashmap/hash-map<int,storeExp>, std/data/hashmap/hash-map<int,pathExp>, std/data/hashmap/hash-map<int,pathExp>) */ 

kk_main__pathExp kk_main__mlift_analyze_11015(kk_main__pathExp _y_x10510, kk_context_t* _ctx); /* forall<h> (pathExp) -> <attrGrammar,div,exn,local<h>,fixpoint> pathExp */ 

kk_main__pathExp kk_main__mlift_analyze_11016(kk_main__pathExp _y_x10509, kk_context_t* _ctx); /* forall<h> (pathExp) -> <attrGrammar,div,exn,local<h>,fixpoint> pathExp */ 

kk_main__pathExp kk_main__mlift_analyze_11017(kk_main__pathExp _y_x10508, kk_context_t* _ctx); /* forall<h> (pathExp) -> <attrGrammar,div,exn,local<h>,fixpoint> pathExp */ 

kk_main__pathExp kk_main__mlift_analyze_11018(kk_main__pathExp _y_x10507, kk_context_t* _ctx); /* forall<h> (pathExp) -> <attrGrammar,div,exn,local<h>,fixpoint> pathExp */ 

kk_main__pathExp kk_main__mlift_analyze_11019(kk_main__pathExp _y_x10506, kk_context_t* _ctx); /* forall<h> (pathExp) -> <attrGrammar,div,exn,local<h>,fixpoint> pathExp */ 

kk_main__pathExp kk_main__mlift_analyze_11020(kk_main__pathExp _y_x10505, kk_context_t* _ctx); /* forall<h> (pathExp) -> <attrGrammar,div,exn,local<h>,fixpoint> pathExp */ 

kk_main__pathExp kk_main__mlift_analyze_11021(kk_main__pathExp _y_x10504, kk_context_t* _ctx); /* forall<h> (pathExp) -> <attrGrammar,div,exn,local<h>,fixpoint> pathExp */ 

kk_main__pathExp kk_main__mlift_analyze_11022(kk_main__pathExp _y_x10503, kk_context_t* _ctx); /* forall<h> (pathExp) -> <attrGrammar,div,exn,local<h>,fixpoint> pathExp */ 

kk_main__pathExp kk_main__mlift_analyze_11023(kk_main__pathExp _y_x10502, kk_context_t* _ctx); /* forall<h> (pathExp) -> <attrGrammar,div,exn,local<h>,fixpoint> pathExp */ 

kk_main__pathExp kk_main__mlift_analyze_11024(kk_main__pathExp _y_x10501, kk_context_t* _ctx); /* forall<h> (pathExp) -> <attrGrammar,div,exn,local<h>,fixpoint> pathExp */ 

kk_main__pathExp kk_main__mlift_analyze_11025(kk_main__pathExp _y_x10500, kk_context_t* _ctx); /* forall<h> (pathExp) -> <attrGrammar,div,exn,local<h>,fixpoint> pathExp */ 

kk_main__pathExp kk_main__mlift_analyze_11026(kk_main__pathExp _y_x10499, kk_context_t* _ctx); /* forall<h> (pathExp) -> <attrGrammar,div,exn,local<h>,fixpoint> pathExp */ 

kk_main__pathExp kk_main__mlift_analyze_11027(kk_main__pathExp _y_x10498, kk_context_t* _ctx); /* forall<h> (pathExp) -> <attrGrammar,div,exn,local<h>,fixpoint> pathExp */ 

kk_main__pathExp kk_main__mlift_analyze_11028(kk_main__pathExp _y_x10497, kk_context_t* _ctx); /* forall<h> (pathExp) -> <attrGrammar,div,exn,local<h>,fixpoint> pathExp */ 

kk_main__pathExp kk_main__mlift_analyze_11029(kk_main__pathExp _y_x10496, kk_context_t* _ctx); /* forall<h> (pathExp) -> <attrGrammar,div,exn,local<h>,fixpoint> pathExp */ 

kk_main__pathExp kk_main__mlift_analyze_11030(kk_main__pathExp _y_x10495, kk_context_t* _ctx); /* forall<h> (pathExp) -> <attrGrammar,div,exn,local<h>,fixpoint> pathExp */ 

kk_main__pathExp kk_main__mlift_analyze_11031(kk_main__pathExp _y_x10494, kk_context_t* _ctx); /* forall<h> (pathExp) -> <attrGrammar,div,exn,local<h>,fixpoint> pathExp */ 

kk_main__pathExp kk_main__mlift_analyze_11032(kk_main__pathExp _y_x10493, kk_context_t* _ctx); /* forall<h> (pathExp) -> <attrGrammar,div,exn,local<h>,fixpoint> pathExp */ 

kk_main__pathExp kk_main__mlift_analyze_11033(kk_main__pathExp _y_x10492, kk_context_t* _ctx); /* forall<h> (pathExp) -> <attrGrammar,div,exn,local<h>,fixpoint> pathExp */ 

kk_main__pathExp kk_main__mlift_analyze_11034(kk_main__pathExp _y_x10491, kk_context_t* _ctx); /* forall<h> (pathExp) -> <attrGrammar,div,exn,local<h>,fixpoint> pathExp */ 

kk_main__pathExp kk_main__mlift_analyze_11035(kk_main__pathExp _y_x10490, kk_context_t* _ctx); /* forall<h> (pathExp) -> <attrGrammar,div,exn,local<h>,fixpoint> pathExp */ 

kk_std_core_types__tuple3 kk_main__mlift_analyze_11036(kk_std_data_hashmap__hash_map _y_x10488, kk_ref_t traversalSummaries, kk_std_data_hashmap__hash_map _y_x10512, kk_context_t* _ctx); /* forall<h> (std/data/hashmap/hash-map<exp,storeExp>, traversalSummaries : local-var<h,std/data/hashmap/hash-map<exp,pathExp>>, std/data/hashmap/hash-map<int,pathExp>) -> <attrGrammar,div,exn,local<h>,fixpoint> (std/data/hashmap/hash-map<int,storeExp>, std/data/hashmap/hash-map<int,pathExp>, std/data/hashmap/hash-map<int,pathExp>) */ 

kk_std_core_types__tuple3 kk_main__mlift_analyze_11037(kk_std_data_hashmap__hash_map _y_x10488, kk_ref_t traversalSummaries, kk_std_data_hashmap__hash_map _y_x10489, kk_context_t* _ctx); /* forall<h> (std/data/hashmap/hash-map<exp,storeExp>, traversalSummaries : local-var<h,std/data/hashmap/hash-map<exp,pathExp>>, std/data/hashmap/hash-map<exp,pathExp>) -> <local<h>,attrGrammar,div,exn,fixpoint> (std/data/hashmap/hash-map<int,storeExp>, std/data/hashmap/hash-map<int,pathExp>, std/data/hashmap/hash-map<int,pathExp>) */ 

kk_std_core_types__tuple3 kk_main__mlift_analyze_11038(kk_ref_t pathsByExp, kk_ref_t traversalSummaries, kk_std_data_hashmap__hash_map _y_x10488, kk_context_t* _ctx); /* forall<h> (pathsByExp : local-var<h,std/data/hashmap/hash-map<exp,pathExp>>, traversalSummaries : local-var<h,std/data/hashmap/hash-map<exp,pathExp>>, std/data/hashmap/hash-map<exp,storeExp>) -> <local<h>,attrGrammar,div,exn,fixpoint> (std/data/hashmap/hash-map<int,storeExp>, std/data/hashmap/hash-map<int,pathExp>, std/data/hashmap/hash-map<int,pathExp>) */ 

kk_std_core_types__tuple3 kk_main__mlift_analyze_11039(kk_ref_t inputStores, kk_ref_t pathsByExp, kk_ref_t traversalSummaries, kk_unit_t wild__, kk_context_t* _ctx); /* forall<h> (inputStores : local-var<h,std/data/hashmap/hash-map<exp,storeExp>>, pathsByExp : local-var<h,std/data/hashmap/hash-map<exp,pathExp>>, traversalSummaries : local-var<h,std/data/hashmap/hash-map<exp,pathExp>>, wild_ : ()) -> <attrGrammar,div,exn,local<h>,fixpoint> (std/data/hashmap/hash-map<int,storeExp>, std/data/hashmap/hash-map<int,pathExp>, std/data/hashmap/hash-map<int,pathExp>) */ 

kk_std_core_types__tuple3 kk_main_analyze(kk_main__exp root, kk_context_t* _ctx); /* (root : exp) -> pure (std/data/hashmap/hash-map<int,storeExp>, std/data/hashmap/hash-map<int,pathExp>, std/data/hashmap/hash-map<int,pathExp>) */ 

extern kk_main__exp kk_main_line1;

extern kk_main__exp kk_main_paperExample;

kk_unit_t kk_main__mlift_check_11040(kk_box_t expected, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_show, kk_std_core_exn__error _y_x10532, kk_context_t* _ctx); /* forall<a,e> (expected : a, ?(==) : (a, a) -> div bool, ?show : (a) -> div string, error<a>) -> <console/console,div|e> () */ 

kk_unit_t kk_main_check(kk_box_t expected, kk_function_t f, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_string_t _implicit_fs_kk_file_line, kk_function_t _implicit_fs_show, kk_context_t* _ctx); /* forall<a,e> (expected : a, f : () -> <console/console,pure|e> a, ?(==) : (a, a) -> div bool, ?kk-file-line : string, ?show : (a) -> div string) -> <console/console,div|e> () */ 

kk_unit_t kk_main__mlift_main_11041(kk_function_t prettyPrintNoDiv, kk_std_core_types__tuple3 _y_x10535, kk_context_t* _ctx); /* (prettyPrintNoDiv : (x : std/data/hashmap/hash-map<int,pathExp>) -> string, (std/data/hashmap/hash-map<int,storeExp>, std/data/hashmap/hash-map<int,pathExp>, std/data/hashmap/hash-map<int,pathExp>)) -> pure () */ 

kk_unit_t kk_main_main(kk_context_t* _ctx); /* () -> <pure,console/console> () */ 

void kk_main__init(kk_context_t* _ctx);


void kk_main__done(kk_context_t* _ctx);

#endif // header
