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
  kk_std_core_hnd__clause1 _fun_getInputStore;
  kk_std_core_hnd__clause1 _fun_getIteratorContext;
  kk_std_core_hnd__clause1 _fun_getOutputStore;
  kk_std_core_hnd__clause1 _fun_getPaths;
  kk_std_core_hnd__clause1 _fun_getQueryCondition;
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
static inline kk_main__attrGrammar kk_main__new_Hnd_attrGrammar(kk_reuse_t _at, int32_t _cpath, kk_integer_t _cfc, kk_std_core_hnd__clause1 _fun_getAbstractValue, kk_std_core_hnd__clause1 _fun_getDataDependence, kk_std_core_hnd__clause1 _fun_getInputStore, kk_std_core_hnd__clause1 _fun_getIteratorContext, kk_std_core_hnd__clause1 _fun_getOutputStore, kk_std_core_hnd__clause1 _fun_getPaths, kk_std_core_hnd__clause1 _fun_getQueryCondition, kk_std_core_hnd__clause1 _fun_getTraversalSummary, kk_std_core_hnd__clause2 _fun_setAbstractValue, kk_std_core_hnd__clause2 _fun_setDataDependence, kk_std_core_hnd__clause2 _fun_setInputStore, kk_std_core_hnd__clause2 _fun_setIteratorContext, kk_std_core_hnd__clause2 _fun_setOutputStore, kk_std_core_hnd__clause2 _fun_setPaths, kk_std_core_hnd__clause2 _fun_setQueryCondition, kk_std_core_hnd__clause2 _fun_setTraversalSummary, kk_context_t* _ctx) {
  struct kk_main__Hnd_attrGrammar* _con = kk_block_alloc_at_as(struct kk_main__Hnd_attrGrammar, _at, 17 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->_cfc = _cfc;
  _con->_fun_getAbstractValue = _fun_getAbstractValue;
  _con->_fun_getDataDependence = _fun_getDataDependence;
  _con->_fun_getInputStore = _fun_getInputStore;
  _con->_fun_getIteratorContext = _fun_getIteratorContext;
  _con->_fun_getOutputStore = _fun_getOutputStore;
  _con->_fun_getPaths = _fun_getPaths;
  _con->_fun_getQueryCondition = _fun_getQueryCondition;
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
    struct kk_main_AOOp* _con_x6043 = kk_main__as_AOOp(absOp, _ctx);
    return false;
  }
}
 
// Automatically generated. Tests for the `AOOp` constructor of the `:absOp` type.

static inline bool kk_main_is_aoop(kk_main__absOp absOp, kk_context_t* _ctx) { /* (absOp : absOp) -> bool */ 
  if (kk_main__is_AOOp(absOp, _ctx)) {
    struct kk_main_AOOp* _con_x6044 = kk_main__as_AOOp(absOp, _ctx);
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
    struct kk_main_AVLit* _con_x6045 = kk_main__as_AVLit(absValue, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `AVOp` constructor of the `:absValue` type.

static inline bool kk_main_is_avop(kk_main__absValue absValue, kk_context_t* _ctx) { /* (absValue : absValue) -> bool */ 
  if (kk_main__is_AVOp(absValue, _ctx)) {
    struct kk_main_AVOp* _con_x6046 = kk_main__as_AVOp(absValue, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `AVPath` constructor of the `:absValue` type.

static inline bool kk_main_is_avpath(kk_main__absValue absValue, kk_context_t* _ctx) { /* (absValue : absValue) -> bool */ 
  if (kk_main__is_AVPath(absValue, _ctx)) {
    struct kk_main_AVPath* _con_x6047 = kk_main__as_AVPath(absValue, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Retrieves the `names` constructor field of the `:path` type.

static inline kk_std_core_types__list kk_main_path_fs_names(kk_main__path path, kk_context_t* _ctx) { /* (path : path) -> list<fieldName> */ 
  {
    struct kk_main_Path* _con_x6048 = kk_main__as_Path(path, _ctx);
    kk_std_core_types__list _x = _con_x6048->names;
    return kk_std_core_types__list_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `absOp` constructor field of the `:path` type.

static inline kk_main__absOp kk_main_path_fs_absOp(kk_main__path path, kk_context_t* _ctx) { /* (path : path) -> absOp */ 
  {
    struct kk_main_Path* _con_x6049 = kk_main__as_Path(path, _ctx);
    kk_main__absOp _x = _con_x6049->absOp;
    return kk_main__absOp_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `dependence` constructor field of the `:path` type.

static inline bool kk_main_path_fs_dependence(kk_main__path path, kk_context_t* _ctx) { /* (path : path) -> bool */ 
  {
    struct kk_main_Path* _con_x6050 = kk_main__as_Path(path, _ctx);
    bool _x = _con_x6050->dependence;
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
    struct kk_main_NullE* _con_x6058 = kk_main__as_NullE(exp, _ctx);
    kk_integer_t _x = _con_x6058->id;
    return kk_integer_dup(_x, _ctx);
  }
  if (kk_main__is_LitE(exp, _ctx)) {
    struct kk_main_LitE* _con_x6059 = kk_main__as_LitE(exp, _ctx);
    kk_integer_t _x_0 = _con_x6059->id;
    return kk_integer_dup(_x_0, _ctx);
  }
  if (kk_main__is_RootE(exp, _ctx)) {
    struct kk_main_RootE* _con_x6060 = kk_main__as_RootE(exp, _ctx);
    kk_integer_t _x_1 = _con_x6060->id;
    return kk_integer_dup(_x_1, _ctx);
  }
  if (kk_main__is_DotE(exp, _ctx)) {
    struct kk_main_DotE* _con_x6061 = kk_main__as_DotE(exp, _ctx);
    kk_integer_t _x_2 = _con_x6061->id;
    return kk_integer_dup(_x_2, _ctx);
  }
  if (kk_main__is_OpE(exp, _ctx)) {
    struct kk_main_OpE* _con_x6062 = kk_main__as_OpE(exp, _ctx);
    kk_integer_t _x_3 = _con_x6062->id;
    return kk_integer_dup(_x_3, _ctx);
  }
  if (kk_main__is_VarE(exp, _ctx)) {
    struct kk_main_VarE* _con_x6063 = kk_main__as_VarE(exp, _ctx);
    kk_main__varName _pat_11 = _con_x6063->v;
    kk_integer_t _x_4 = _con_x6063->id;
    return kk_integer_dup(_x_4, _ctx);
  }
  if (kk_main__is_AsgnE(exp, _ctx)) {
    struct kk_main_AsgnE* _con_x6064 = kk_main__as_AsgnE(exp, _ctx);
    kk_main__varName _pat_14 = _con_x6064->v;
    kk_integer_t _x_5 = _con_x6064->id;
    return kk_integer_dup(_x_5, _ctx);
  }
  if (kk_main__is_IfE(exp, _ctx)) {
    struct kk_main_IfE* _con_x6065 = kk_main__as_IfE(exp, _ctx);
    kk_integer_t _x_6 = _con_x6065->id;
    return kk_integer_dup(_x_6, _ctx);
  }
  if (kk_main__is_ForE(exp, _ctx)) {
    struct kk_main_ForE* _con_x6066 = kk_main__as_ForE(exp, _ctx);
    kk_main__varName _pat_22 = _con_x6066->v;
    kk_integer_t _x_7 = _con_x6066->id;
    return kk_integer_dup(_x_7, _ctx);
  }
  if (kk_main__is_SeqE(exp, _ctx)) {
    struct kk_main_SeqE* _con_x6067 = kk_main__as_SeqE(exp, _ctx);
    kk_integer_t _x_8 = _con_x6067->id;
    return kk_integer_dup(_x_8, _ctx);
  }
  {
    struct kk_main_PrintE* _con_x6068 = kk_main__as_PrintE(exp, _ctx);
    kk_integer_t _x_9 = _con_x6068->id;
    return kk_integer_dup(_x_9, _ctx);
  }
}
 
// Automatically generated. Tests for the `NullE` constructor of the `:exp` type.

static inline bool kk_main_is_nullE(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> bool */ 
  if (kk_main__is_NullE(exp, _ctx)) {
    struct kk_main_NullE* _con_x6069 = kk_main__as_NullE(exp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `LitE` constructor of the `:exp` type.

static inline bool kk_main_is_litE(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> bool */ 
  if (kk_main__is_LitE(exp, _ctx)) {
    struct kk_main_LitE* _con_x6070 = kk_main__as_LitE(exp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `RootE` constructor of the `:exp` type.

static inline bool kk_main_is_rootE(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> bool */ 
  if (kk_main__is_RootE(exp, _ctx)) {
    struct kk_main_RootE* _con_x6071 = kk_main__as_RootE(exp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `DotE` constructor of the `:exp` type.

static inline bool kk_main_is_dotE(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> bool */ 
  if (kk_main__is_DotE(exp, _ctx)) {
    struct kk_main_DotE* _con_x6072 = kk_main__as_DotE(exp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `OpE` constructor of the `:exp` type.

static inline bool kk_main_is_opE(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> bool */ 
  if (kk_main__is_OpE(exp, _ctx)) {
    struct kk_main_OpE* _con_x6073 = kk_main__as_OpE(exp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `VarE` constructor of the `:exp` type.

static inline bool kk_main_is_varE(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> bool */ 
  if (kk_main__is_VarE(exp, _ctx)) {
    struct kk_main_VarE* _con_x6074 = kk_main__as_VarE(exp, _ctx);
    kk_main__varName _pat_0 = _con_x6074->v;
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `AsgnE` constructor of the `:exp` type.

static inline bool kk_main_is_asgnE(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> bool */ 
  if (kk_main__is_AsgnE(exp, _ctx)) {
    struct kk_main_AsgnE* _con_x6075 = kk_main__as_AsgnE(exp, _ctx);
    kk_main__varName _pat_0 = _con_x6075->v;
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `IfE` constructor of the `:exp` type.

static inline bool kk_main_is_ifE(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> bool */ 
  if (kk_main__is_IfE(exp, _ctx)) {
    struct kk_main_IfE* _con_x6076 = kk_main__as_IfE(exp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `ForE` constructor of the `:exp` type.

static inline bool kk_main_is_forE(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> bool */ 
  if (kk_main__is_ForE(exp, _ctx)) {
    struct kk_main_ForE* _con_x6077 = kk_main__as_ForE(exp, _ctx);
    kk_main__varName _pat_0 = _con_x6077->v;
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `SeqE` constructor of the `:exp` type.

static inline bool kk_main_is_seqE(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> bool */ 
  if (kk_main__is_SeqE(exp, _ctx)) {
    struct kk_main_SeqE* _con_x6078 = kk_main__as_SeqE(exp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `PrintE` constructor of the `:exp` type.

static inline bool kk_main_is_printE(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> bool */ 
  if (kk_main__is_PrintE(exp, _ctx)) {
    struct kk_main_PrintE* _con_x6079 = kk_main__as_PrintE(exp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Retrieves the `@cfc` constructor field of the `:attrGrammar` type.

static inline kk_integer_t kk_main_attrGrammar_fs__cfc(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> int */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6080 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_integer_t _x = _con_x6080->_cfc;
    return kk_integer_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-getAbstractValue` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause1 kk_main_attrGrammar_fs__fun_getAbstractValue(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause1<exp,absValue,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6081 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause1 _x = _con_x6081->_fun_getAbstractValue;
    return kk_std_core_hnd__clause1_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-getDataDependence` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause1 kk_main_attrGrammar_fs__fun_getDataDependence(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause1<exp,bool,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6082 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause1 _x = _con_x6082->_fun_getDataDependence;
    return kk_std_core_hnd__clause1_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-getInputStore` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause1 kk_main_attrGrammar_fs__fun_getInputStore(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause1<exp,store,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6083 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause1 _x = _con_x6083->_fun_getInputStore;
    return kk_std_core_hnd__clause1_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-getIteratorContext` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause1 kk_main_attrGrammar_fs__fun_getIteratorContext(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause1<exp,list<path>,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6084 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause1 _x = _con_x6084->_fun_getIteratorContext;
    return kk_std_core_hnd__clause1_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-getOutputStore` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause1 kk_main_attrGrammar_fs__fun_getOutputStore(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause1<exp,store,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6085 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause1 _x = _con_x6085->_fun_getOutputStore;
    return kk_std_core_hnd__clause1_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-getPaths` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause1 kk_main_attrGrammar_fs__fun_getPaths(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause1<exp,std/data/hashset/hash-set<path>,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6086 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause1 _x = _con_x6086->_fun_getPaths;
    return kk_std_core_hnd__clause1_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-getQueryCondition` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause1 kk_main_attrGrammar_fs__fun_getQueryCondition(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause1<exp,absOp,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6087 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause1 _x = _con_x6087->_fun_getQueryCondition;
    return kk_std_core_hnd__clause1_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-getTraversalSummary` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause1 kk_main_attrGrammar_fs__fun_getTraversalSummary(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause1<exp,std/data/hashset/hash-set<path>,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6088 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause1 _x = _con_x6088->_fun_getTraversalSummary;
    return kk_std_core_hnd__clause1_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-setAbstractValue` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause2 kk_main_attrGrammar_fs__fun_setAbstractValue(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause2<exp,absValue,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6089 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause2 _x = _con_x6089->_fun_setAbstractValue;
    return kk_std_core_hnd__clause2_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-setDataDependence` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause2 kk_main_attrGrammar_fs__fun_setDataDependence(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause2<exp,bool,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6090 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause2 _x = _con_x6090->_fun_setDataDependence;
    return kk_std_core_hnd__clause2_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-setInputStore` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause2 kk_main_attrGrammar_fs__fun_setInputStore(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause2<exp,store,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6091 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause2 _x = _con_x6091->_fun_setInputStore;
    return kk_std_core_hnd__clause2_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-setIteratorContext` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause2 kk_main_attrGrammar_fs__fun_setIteratorContext(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause2<exp,list<path>,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6092 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause2 _x = _con_x6092->_fun_setIteratorContext;
    return kk_std_core_hnd__clause2_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-setOutputStore` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause2 kk_main_attrGrammar_fs__fun_setOutputStore(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause2<exp,store,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6093 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause2 _x = _con_x6093->_fun_setOutputStore;
    return kk_std_core_hnd__clause2_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-setPaths` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause2 kk_main_attrGrammar_fs__fun_setPaths(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause2<exp,std/data/hashset/hash-set<path>,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6094 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause2 _x = _con_x6094->_fun_setPaths;
    return kk_std_core_hnd__clause2_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-setQueryCondition` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause2 kk_main_attrGrammar_fs__fun_setQueryCondition(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause2<exp,absOp,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6095 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause2 _x = _con_x6095->_fun_setQueryCondition;
    return kk_std_core_hnd__clause2_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-setTraversalSummary` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause2 kk_main_attrGrammar_fs__fun_setTraversalSummary(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause2<exp,std/data/hashset/hash-set<path>,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6096 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause2 _x = _con_x6096->_fun_setTraversalSummary;
    return kk_std_core_hnd__clause2_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@cfc` constructor field of the `:fixpoint` type.

static inline kk_integer_t kk_main_fixpoint_fs__cfc(kk_main__fixpoint fixpoint, kk_context_t* _ctx) { /* forall<e,a> (fixpoint : fixpoint<e,a>) -> int */ 
  {
    struct kk_main__Hnd_fixpoint* _con_x6097 = kk_main__as_Hnd_fixpoint(fixpoint, _ctx);
    kk_integer_t _x = _con_x6097->_cfc;
    return kk_integer_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-modified` constructor field of the `:fixpoint` type.

static inline kk_std_core_hnd__clause0 kk_main_fixpoint_fs__fun_modified(kk_main__fixpoint fixpoint, kk_context_t* _ctx) { /* forall<e,a> (fixpoint : fixpoint<e,a>) -> hnd/clause0<(),fixpoint,e,a> */ 
  {
    struct kk_main__Hnd_fixpoint* _con_x6098 = kk_main__as_Hnd_fixpoint(fixpoint, _ctx);
    kk_std_core_hnd__clause0 _x = _con_x6098->_fun_modified;
    return kk_std_core_hnd__clause0_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@cfc` constructor field of the `:nondet` type.

static inline kk_integer_t kk_main_nondet_fs__cfc(kk_main__nondet nondet, kk_context_t* _ctx) { /* forall<e,a> (nondet : nondet<e,a>) -> int */ 
  {
    struct kk_main__Hnd_nondet* _con_x6099 = kk_main__as_Hnd_nondet(nondet, _ctx);
    kk_integer_t _x = _con_x6099->_cfc;
    return kk_integer_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@ctl-choose` constructor field of the `:nondet` type.

static inline kk_std_core_hnd__clause2 kk_main_nondet_fs__ctl_choose(kk_main__nondet nondet, kk_context_t* _ctx) { /* forall<e,a,b> (nondet : nondet<e,a>) -> hnd/clause2<b,b,b,nondet,e,a> */ 
  {
    struct kk_main__Hnd_nondet* _con_x6100 = kk_main__as_Hnd_nondet(nondet, _ctx);
    kk_std_core_hnd__clause2 _x = _con_x6100->_ctl_choose;
    return kk_std_core_hnd__clause2_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@brk-fail` constructor field of the `:nondet` type.

static inline kk_std_core_hnd__clause0 kk_main_nondet_fs__brk_fail(kk_main__nondet nondet, kk_context_t* _ctx) { /* forall<e,a,b> (nondet : nondet<e,a>) -> hnd/clause0<b,nondet,e,a> */ 
  {
    struct kk_main__Hnd_nondet* _con_x6101 = kk_main__as_Hnd_nondet(nondet, _ctx);
    kk_std_core_hnd__clause0 _x = _con_x6101->_brk_fail;
    return kk_std_core_hnd__clause0_dup(_x, _ctx);
  }
}

kk_std_core_types__list kk_main_hashset_fs_list(kk_std_data_hashset__hash_set set, kk_context_t* _ctx); /* forall<a> (set : std/data/hashset/hash-set<a>) -> list<a> */ 

static inline kk_string_t kk_main_fieldName_fs_show(kk_main__fieldName fieldName, kk_context_t* _ctx) { /* (fieldName : fieldName) -> string */ 
  if (kk_main__is_FNNamed(fieldName, _ctx)) {
    kk_string_t name = fieldName._cons.FNNamed.name;
    kk_string_t _x_x6110;
    kk_define_string_literal(, _s_x6111, 8, "FNNamed(", _ctx)
    _x_x6110 = kk_string_dup(_s_x6111, _ctx); /*string*/
    kk_string_t _x_x6112;
    kk_string_t _x_x6113;
    kk_define_string_literal(, _s_x6114, 1, ")", _ctx)
    _x_x6113 = kk_string_dup(_s_x6114, _ctx); /*string*/
    _x_x6112 = kk_std_core_types__lp__plus__plus__rp_(name, _x_x6113, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x6110, _x_x6112, _ctx);
  }
  {
    kk_define_string_literal(, _s_x6115, 3, "FNL", _ctx)
    return kk_string_dup(_s_x6115, _ctx);
  }
}

static inline kk_string_t kk_main_varName_fs_show(kk_main__varName varName, kk_context_t* _ctx) { /* (varName : varName) -> string */ 
  kk_string_t _x_x6116;
  kk_define_string_literal(, _s_x6117, 8, "VarName(", _ctx)
  _x_x6116 = kk_string_dup(_s_x6117, _ctx); /*string*/
  kk_string_t _x_x6118;
  kk_string_t _x_x6119;
  {
    kk_string_t _x = varName.name;
    _x_x6119 = _x; /*string*/
  }
  kk_string_t _x_x6120;
  kk_define_string_literal(, _s_x6121, 1, ")", _ctx)
  _x_x6120 = kk_string_dup(_s_x6121, _ctx); /*string*/
  _x_x6118 = kk_std_core_types__lp__plus__plus__rp_(_x_x6119, _x_x6120, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x6116, _x_x6118, _ctx);
}

static inline kk_string_t kk_main_op_fs_show(kk_main__op op, kk_context_t* _ctx) { /* (op : op) -> string */ 
  if (kk_main__is_AndOp(op, _ctx)) {
    kk_define_string_literal(, _s_x6122, 5, "AndOp", _ctx)
    return kk_string_dup(_s_x6122, _ctx);
  }
  if (kk_main__is_NotOp(op, _ctx)) {
    kk_define_string_literal(, _s_x6123, 5, "NotOp", _ctx)
    return kk_string_dup(_s_x6123, _ctx);
  }
  if (kk_main__is_EqOp(op, _ctx)) {
    kk_define_string_literal(, _s_x6124, 4, "EqOp", _ctx)
    return kk_string_dup(_s_x6124, _ctx);
  }
  if (kk_main__is_GtOp(op, _ctx)) {
    kk_define_string_literal(, _s_x6125, 4, "GtOp", _ctx)
    return kk_string_dup(_s_x6125, _ctx);
  }
  {
    kk_define_string_literal(, _s_x6126, 6, "PlusOp", _ctx)
    return kk_string_dup(_s_x6126, _ctx);
  }
}

static inline kk_string_t kk_main_hashset_fs_show(kk_std_data_hashset__hash_set set, kk_function_t _implicit_fs_show, kk_context_t* _ctx) { /* forall<a> (set : std/data/hashset/hash-set<a>, ?show : (a) -> string) -> string */ 
  kk_std_core_types__list _x_x6127 = kk_main_hashset_fs_list(set, _ctx); /*list<1782>*/
  return kk_std_core_list_show(_x_x6127, _implicit_fs_show, _ctx);
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

kk_string_t kk_main_exp_fs_show(kk_main__exp exp, kk_context_t* _ctx); /* (exp : exp) -> string */ 

kk_string_t kk_main_hashmap_fs_show(kk_std_data_hashmap__hash_map map, kk_function_t _implicit_fs_key_fs_show, kk_function_t _implicit_fs_value_fs_show, kk_context_t* _ctx); /* forall<a,b> (map : std/data/hashmap/hash-map<a,b>, ?key/show : (a) -> string, ?value/show : (b) -> string) -> string */ 

static inline kk_string_t kk_main_path_fs_show(kk_main__path path, kk_context_t* _ctx) { /* (path : path) -> string */ 
  return kk_main_path_fs_showDiv(path, _ctx);
}


// lift anonymous function
struct kk_main_store_fs_show_fun6379__t {
  struct kk_function_s _base;
};
extern kk_string_t kk_main_store_fs_show_fun6379(kk_function_t _fself, kk_box_t _b_x60, kk_context_t* _ctx);
static inline kk_function_t kk_main_store_fs_new_show_fun6379(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_store_fs_show_fun6379, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main_store_fs_show_fun6381__t {
  struct kk_function_s _base;
};
extern kk_string_t kk_main_store_fs_show_fun6381(kk_function_t _fself, kk_box_t _b_x61, kk_context_t* _ctx);
static inline kk_function_t kk_main_store_fs_new_show_fun6381(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_store_fs_show_fun6381, _ctx)
  return kk_function_dup(_fself,kk_context());
}


static inline kk_string_t kk_main_store_fs_show(kk_std_data_hashmap__hash_map store, kk_context_t* _ctx) { /* (store : store) -> string */ 
  return kk_main_hashmap_fs_show(store, kk_main_store_fs_new_show_fun6379(_ctx), kk_main_store_fs_new_show_fun6381(_ctx), _ctx);
}

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
  kk_std_core_types__list _x_x6383 = kk_main_hashset_fs_list(a, _ctx); /*list<1782>*/
  kk_std_core_types__list _x_x6384 = kk_main_hashset_fs_list(b, _ctx); /*list<1782>*/
  return kk_std_core_list__lp__eq__eq__rp_(_x_x6383, _x_x6384, _implicit_fs__lp__eq__eq__rp_, _ctx);
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
  kk_string_t _x_x6419;
  {
    kk_string_t _x = a.name;
    _x_x6419 = _x; /*string*/
  }
  kk_string_t _x_x6420;
  {
    kk_string_t _x_0 = b.name;
    _x_x6420 = _x_0; /*string*/
  }
  return kk_string_is_eq(_x_x6419,_x_x6420,kk_context());
}

bool kk_main_exp_fs_eqDiv(kk_main__exp a, kk_main__exp b, kk_context_t* _ctx); /* (a : exp, b : exp) -> div bool */ 

static inline bool kk_main_exp_fs__lp__eq__eq__rp_(kk_main__exp a, kk_main__exp b, kk_context_t* _ctx) { /* (a : exp, b : exp) -> bool */ 
  return kk_main_exp_fs_eqDiv(a, b, _ctx);
}

bool kk_main_hashmap_fs__lp__eq__eq__rp_(kk_std_data_hashmap__hash_map a, kk_std_data_hashmap__hash_map b, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_function_t _implicit_fs_value_fs__lp__eq__eq__rp_, kk_context_t* _ctx); /* forall<a,b> (a : std/data/hashmap/hash-map<a,b>, b : std/data/hashmap/hash-map<a,b>, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int, ?value/(==) : (b, b) -> bool) -> bool */ 

static inline bool kk_main_path_fs__lp__eq__eq__rp_(kk_main__path a, kk_main__path b, kk_context_t* _ctx) { /* (a : path, b : path) -> bool */ 
  return kk_main_path_fs_eqDiv(a, b, _ctx);
}

static inline kk_std_data_hashset__hash_set kk_main_hashset_fs_union(kk_std_data_hashset__hash_set a, kk_std_data_hashset__hash_set b, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_context_t* _ctx) { /* forall<a> (a : std/data/hashset/hash-set<a>, b : std/data/hashset/hash-set<a>, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int) -> std/data/hashset/hash-set<a> */ 
  kk_std_core_types__list xs_10078 = kk_main_hashset_fs_list(a, _ctx); /*list<6221>*/;
  kk_std_core_types__list ys_10079 = kk_main_hashset_fs_list(b, _ctx); /*list<6221>*/;
  kk_std_core_types__list _x_x6459 = kk_std_core_list_append(xs_10078, ys_10079, _ctx); /*list<8222>*/
  return kk_std_data_hashset_thread_fs_list_fs_hash_set(_x_x6459, _implicit_fs_hash, _implicit_fs__lp__eq__eq__rp_, _ctx);
}

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
  kk_string_t _x_x6481;
  {
    kk_string_t _x = varName.name;
    _x_x6481 = _x; /*string*/
  }
  return kk_string_hash(_x_x6481,x,kk_context());
}

kk_integer_t kk_main_exp_fs_hash(kk_main__exp exp, int64_t x, kk_context_t* _ctx); /* (exp : exp, x : int64) -> int */ 

static inline kk_integer_t kk_main_path_fs_hash(kk_main__path path, int64_t x, kk_context_t* _ctx) { /* (path : path, x : int64) -> int */ 
  return kk_main_path_fs_divHash(path, x, _ctx);
}

extern kk_std_core_hnd__htag kk_main__tag_attrGrammar;

kk_box_t kk_main__handle_attrGrammar(kk_main__attrGrammar hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (hnd : attrGrammar<e,b>, ret : (res : a) -> e b, action : () -> <attrGrammar|e> a) -> e b */ 
 
// select `getAbstractValue` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause1 kk_main__select_getAbstractValue(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause1<exp,absValue,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6501 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause1 _fun_getAbstractValue = _con_x6501->_fun_getAbstractValue;
    return kk_std_core_hnd__clause1_dup(_fun_getAbstractValue, _ctx);
  }
}
 
// Call the `fun getAbstractValue` operation of the effect `:attrGrammar`

static inline kk_main__absValue kk_main_getAbstractValue(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> attrGrammar absValue */ 
  kk_std_core_hnd__ev ev_11270 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x6502;
  {
    struct kk_std_core_hnd_Ev* _con_x6503 = kk_std_core_hnd__as_Ev(ev_11270, _ctx);
    kk_box_t _box_x171 = _con_x6503->hnd;
    int32_t m = _con_x6503->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x171, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x6504 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6504->_cfc;
      kk_std_core_hnd__clause1 _fun_getAbstractValue = _con_x6504->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x6504->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x6504->_fun_getInputStore;
      kk_std_core_hnd__clause1 _pat_3 = _con_x6504->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_4 = _con_x6504->_fun_getOutputStore;
      kk_std_core_hnd__clause1 _pat_5 = _con_x6504->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_6 = _con_x6504->_fun_getQueryCondition;
      kk_std_core_hnd__clause1 _pat_7 = _con_x6504->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_8 = _con_x6504->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_9 = _con_x6504->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_10 = _con_x6504->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_11 = _con_x6504->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_12 = _con_x6504->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_13 = _con_x6504->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_14 = _con_x6504->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_15 = _con_x6504->_fun_setTraversalSummary;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause2_drop(_pat_9, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_8, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_7, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_6, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_5, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_4, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_1_0, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_15, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_14, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_13, _ctx);
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
        kk_function_t _fun_unbox_x175 = _fun_getAbstractValue.clause;
        _x_x6502 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x175, (_fun_unbox_x175, m, ev_11270, kk_main__exp_box(exp, _ctx), _ctx), _ctx); /*1010*/
      }
    }
  }
  return kk_main__absValue_unbox(_x_x6502, KK_OWNED, _ctx);
}
 
// select `setAbstractValue` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause2 kk_main__select_setAbstractValue(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause2<exp,absValue,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6505 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause2 _fun_setAbstractValue = _con_x6505->_fun_setAbstractValue;
    return kk_std_core_hnd__clause2_dup(_fun_setAbstractValue, _ctx);
  }
}
 
// Call the `fun setAbstractValue` operation of the effect `:attrGrammar`

static inline kk_unit_t kk_main_setAbstractValue(kk_main__exp exp, kk_main__absValue absValue, kk_context_t* _ctx) { /* (exp : exp, absValue : absValue) -> attrGrammar () */ 
  kk_std_core_hnd__ev evx_11273 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x6506;
  {
    struct kk_std_core_hnd_Ev* _con_x6507 = kk_std_core_hnd__as_Ev(evx_11273, _ctx);
    kk_box_t _box_x179 = _con_x6507->hnd;
    int32_t m = _con_x6507->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x179, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x6508 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6508->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x6508->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x6508->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_3 = _con_x6508->_fun_getInputStore;
      kk_std_core_hnd__clause1 _pat_4 = _con_x6508->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_5 = _con_x6508->_fun_getOutputStore;
      kk_std_core_hnd__clause1 _pat_6 = _con_x6508->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_7 = _con_x6508->_fun_getQueryCondition;
      kk_std_core_hnd__clause1 _pat_8 = _con_x6508->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _fun_setAbstractValue = _con_x6508->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_9 = _con_x6508->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_10 = _con_x6508->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_11 = _con_x6508->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_12 = _con_x6508->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_13 = _con_x6508->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_14 = _con_x6508->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_15 = _con_x6508->_fun_setTraversalSummary;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause2_drop(_pat_9, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_8, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_7, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_6, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_5, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_4, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_1_0, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_15, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_14, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_13, _ctx);
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
        kk_function_t _fun_unbox_x184 = _fun_setAbstractValue.clause;
        _x_x6506 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x184, (_fun_unbox_x184, m, evx_11273, kk_main__exp_box(exp, _ctx), kk_main__absValue_box(absValue, _ctx), _ctx), _ctx); /*1016*/
      }
    }
  }
  kk_unit_unbox(_x_x6506); return kk_Unit;
}
 
// select `getPaths` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause1 kk_main__select_getPaths(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause1<exp,std/data/hashset/hash-set<path>,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6509 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause1 _fun_getPaths = _con_x6509->_fun_getPaths;
    return kk_std_core_hnd__clause1_dup(_fun_getPaths, _ctx);
  }
}
 
// Call the `fun getPaths` operation of the effect `:attrGrammar`

static inline kk_std_data_hashset__hash_set kk_main_getPaths(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> attrGrammar std/data/hashset/hash-set<path> */ 
  kk_std_core_hnd__ev ev_11277 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x6510;
  {
    struct kk_std_core_hnd_Ev* _con_x6511 = kk_std_core_hnd__as_Ev(ev_11277, _ctx);
    kk_box_t _box_x189 = _con_x6511->hnd;
    int32_t m = _con_x6511->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x189, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x6512 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6512->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x6512->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x6512->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_3 = _con_x6512->_fun_getInputStore;
      kk_std_core_hnd__clause1 _pat_4 = _con_x6512->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_5 = _con_x6512->_fun_getOutputStore;
      kk_std_core_hnd__clause1 _fun_getPaths = _con_x6512->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_6 = _con_x6512->_fun_getQueryCondition;
      kk_std_core_hnd__clause1 _pat_7 = _con_x6512->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_8 = _con_x6512->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_9 = _con_x6512->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_10 = _con_x6512->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_11 = _con_x6512->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_12 = _con_x6512->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_13 = _con_x6512->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_14 = _con_x6512->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_15 = _con_x6512->_fun_setTraversalSummary;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause2_drop(_pat_9, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_8, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_7, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_6, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_5, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_4, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_1_0, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_15, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_14, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_13, _ctx);
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
        kk_function_t _fun_unbox_x193 = _fun_getPaths.clause;
        _x_x6510 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x193, (_fun_unbox_x193, m, ev_11277, kk_main__exp_box(exp, _ctx), _ctx), _ctx); /*1010*/
      }
    }
  }
  return kk_std_data_hashset__hash_set_unbox(_x_x6510, KK_OWNED, _ctx);
}
 
// select `setPaths` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause2 kk_main__select_setPaths(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause2<exp,std/data/hashset/hash-set<path>,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6513 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause2 _fun_setPaths = _con_x6513->_fun_setPaths;
    return kk_std_core_hnd__clause2_dup(_fun_setPaths, _ctx);
  }
}
 
// Call the `fun setPaths` operation of the effect `:attrGrammar`

static inline kk_unit_t kk_main_setPaths(kk_main__exp exp, kk_std_data_hashset__hash_set paths, kk_context_t* _ctx) { /* (exp : exp, paths : std/data/hashset/hash-set<path>) -> attrGrammar () */ 
  kk_std_core_hnd__ev evx_11280 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x6514;
  {
    struct kk_std_core_hnd_Ev* _con_x6515 = kk_std_core_hnd__as_Ev(evx_11280, _ctx);
    kk_box_t _box_x197 = _con_x6515->hnd;
    int32_t m = _con_x6515->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x197, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x6516 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6516->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x6516->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x6516->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_3 = _con_x6516->_fun_getInputStore;
      kk_std_core_hnd__clause1 _pat_4 = _con_x6516->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_5 = _con_x6516->_fun_getOutputStore;
      kk_std_core_hnd__clause1 _pat_6 = _con_x6516->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_7 = _con_x6516->_fun_getQueryCondition;
      kk_std_core_hnd__clause1 _pat_8 = _con_x6516->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_9 = _con_x6516->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_10 = _con_x6516->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_11 = _con_x6516->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_12 = _con_x6516->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_13 = _con_x6516->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _fun_setPaths = _con_x6516->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_14 = _con_x6516->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_15 = _con_x6516->_fun_setTraversalSummary;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause2_drop(_pat_9, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_8, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_7, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_6, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_5, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_4, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_1_0, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_15, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_14, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_13, _ctx);
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
        kk_function_t _fun_unbox_x202 = _fun_setPaths.clause;
        _x_x6514 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x202, (_fun_unbox_x202, m, evx_11280, kk_main__exp_box(exp, _ctx), kk_std_data_hashset__hash_set_box(paths, _ctx), _ctx), _ctx); /*1016*/
      }
    }
  }
  kk_unit_unbox(_x_x6514); return kk_Unit;
}
 
// select `getOutputStore` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause1 kk_main__select_getOutputStore(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause1<exp,store,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6517 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause1 _fun_getOutputStore = _con_x6517->_fun_getOutputStore;
    return kk_std_core_hnd__clause1_dup(_fun_getOutputStore, _ctx);
  }
}
 
// Call the `fun getOutputStore` operation of the effect `:attrGrammar`

static inline kk_std_data_hashmap__hash_map kk_main_getOutputStore(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> attrGrammar store */ 
  kk_std_core_hnd__ev ev_11284 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x6518;
  {
    struct kk_std_core_hnd_Ev* _con_x6519 = kk_std_core_hnd__as_Ev(ev_11284, _ctx);
    kk_box_t _box_x207 = _con_x6519->hnd;
    int32_t m = _con_x6519->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x207, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x6520 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6520->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x6520->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x6520->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_3 = _con_x6520->_fun_getInputStore;
      kk_std_core_hnd__clause1 _pat_4 = _con_x6520->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _fun_getOutputStore = _con_x6520->_fun_getOutputStore;
      kk_std_core_hnd__clause1 _pat_5 = _con_x6520->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_6 = _con_x6520->_fun_getQueryCondition;
      kk_std_core_hnd__clause1 _pat_7 = _con_x6520->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_8 = _con_x6520->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_9 = _con_x6520->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_10 = _con_x6520->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_11 = _con_x6520->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_12 = _con_x6520->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_13 = _con_x6520->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_14 = _con_x6520->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_15 = _con_x6520->_fun_setTraversalSummary;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause2_drop(_pat_9, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_8, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_7, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_6, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_5, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_4, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_1_0, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_15, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_14, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_13, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_12, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_11, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_10, _ctx);
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_getOutputStore, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x211 = _fun_getOutputStore.clause;
        _x_x6518 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x211, (_fun_unbox_x211, m, ev_11284, kk_main__exp_box(exp, _ctx), _ctx), _ctx); /*1010*/
      }
    }
  }
  return kk_std_data_hashmap__hash_map_unbox(_x_x6518, KK_OWNED, _ctx);
}
 
// select `setOutputStore` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause2 kk_main__select_setOutputStore(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause2<exp,store,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6521 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause2 _fun_setOutputStore = _con_x6521->_fun_setOutputStore;
    return kk_std_core_hnd__clause2_dup(_fun_setOutputStore, _ctx);
  }
}
 
// Call the `fun setOutputStore` operation of the effect `:attrGrammar`

static inline kk_unit_t kk_main_setOutputStore(kk_main__exp exp, kk_std_data_hashmap__hash_map store, kk_context_t* _ctx) { /* (exp : exp, store : store) -> attrGrammar () */ 
  kk_std_core_hnd__ev evx_11287 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x6522;
  {
    struct kk_std_core_hnd_Ev* _con_x6523 = kk_std_core_hnd__as_Ev(evx_11287, _ctx);
    kk_box_t _box_x215 = _con_x6523->hnd;
    int32_t m = _con_x6523->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x215, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x6524 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6524->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x6524->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x6524->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_3 = _con_x6524->_fun_getInputStore;
      kk_std_core_hnd__clause1 _pat_4 = _con_x6524->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_5 = _con_x6524->_fun_getOutputStore;
      kk_std_core_hnd__clause1 _pat_6 = _con_x6524->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_7 = _con_x6524->_fun_getQueryCondition;
      kk_std_core_hnd__clause1 _pat_8 = _con_x6524->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_9 = _con_x6524->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_10 = _con_x6524->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_11 = _con_x6524->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_12 = _con_x6524->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _fun_setOutputStore = _con_x6524->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_13 = _con_x6524->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_14 = _con_x6524->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_15 = _con_x6524->_fun_setTraversalSummary;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause2_drop(_pat_9, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_8, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_7, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_6, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_5, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_4, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_1_0, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_15, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_14, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_13, _ctx);
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
        kk_function_t _fun_unbox_x220 = _fun_setOutputStore.clause;
        _x_x6522 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x220, (_fun_unbox_x220, m, evx_11287, kk_main__exp_box(exp, _ctx), kk_std_data_hashmap__hash_map_box(store, _ctx), _ctx), _ctx); /*1016*/
      }
    }
  }
  kk_unit_unbox(_x_x6522); return kk_Unit;
}
 
// select `getInputStore` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause1 kk_main__select_getInputStore(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause1<exp,store,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6525 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause1 _fun_getInputStore = _con_x6525->_fun_getInputStore;
    return kk_std_core_hnd__clause1_dup(_fun_getInputStore, _ctx);
  }
}
 
// Call the `fun getInputStore` operation of the effect `:attrGrammar`

static inline kk_std_data_hashmap__hash_map kk_main_getInputStore(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> attrGrammar store */ 
  kk_std_core_hnd__ev ev_11291 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x6526;
  {
    struct kk_std_core_hnd_Ev* _con_x6527 = kk_std_core_hnd__as_Ev(ev_11291, _ctx);
    kk_box_t _box_x225 = _con_x6527->hnd;
    int32_t m = _con_x6527->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x225, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x6528 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6528->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x6528->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x6528->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _fun_getInputStore = _con_x6528->_fun_getInputStore;
      kk_std_core_hnd__clause1 _pat_3 = _con_x6528->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_4 = _con_x6528->_fun_getOutputStore;
      kk_std_core_hnd__clause1 _pat_5 = _con_x6528->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_6 = _con_x6528->_fun_getQueryCondition;
      kk_std_core_hnd__clause1 _pat_7 = _con_x6528->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_8 = _con_x6528->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_9 = _con_x6528->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_10 = _con_x6528->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_11 = _con_x6528->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_12 = _con_x6528->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_13 = _con_x6528->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_14 = _con_x6528->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_15 = _con_x6528->_fun_setTraversalSummary;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause2_drop(_pat_9, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_8, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_7, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_6, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_5, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_4, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_1_0, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_15, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_14, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_13, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_12, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_11, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_10, _ctx);
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_getInputStore, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x229 = _fun_getInputStore.clause;
        _x_x6526 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x229, (_fun_unbox_x229, m, ev_11291, kk_main__exp_box(exp, _ctx), _ctx), _ctx); /*1010*/
      }
    }
  }
  return kk_std_data_hashmap__hash_map_unbox(_x_x6526, KK_OWNED, _ctx);
}
 
// select `setInputStore` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause2 kk_main__select_setInputStore(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause2<exp,store,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6529 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause2 _fun_setInputStore = _con_x6529->_fun_setInputStore;
    return kk_std_core_hnd__clause2_dup(_fun_setInputStore, _ctx);
  }
}
 
// Call the `fun setInputStore` operation of the effect `:attrGrammar`

static inline kk_unit_t kk_main_setInputStore(kk_main__exp exp, kk_std_data_hashmap__hash_map store, kk_context_t* _ctx) { /* (exp : exp, store : store) -> attrGrammar () */ 
  kk_std_core_hnd__ev evx_11294 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x6530;
  {
    struct kk_std_core_hnd_Ev* _con_x6531 = kk_std_core_hnd__as_Ev(evx_11294, _ctx);
    kk_box_t _box_x233 = _con_x6531->hnd;
    int32_t m = _con_x6531->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x233, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x6532 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6532->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x6532->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x6532->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_3 = _con_x6532->_fun_getInputStore;
      kk_std_core_hnd__clause1 _pat_4 = _con_x6532->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_5 = _con_x6532->_fun_getOutputStore;
      kk_std_core_hnd__clause1 _pat_6 = _con_x6532->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_7 = _con_x6532->_fun_getQueryCondition;
      kk_std_core_hnd__clause1 _pat_8 = _con_x6532->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_9 = _con_x6532->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_10 = _con_x6532->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _fun_setInputStore = _con_x6532->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_11 = _con_x6532->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_12 = _con_x6532->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_13 = _con_x6532->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_14 = _con_x6532->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_15 = _con_x6532->_fun_setTraversalSummary;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause2_drop(_pat_9, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_8, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_7, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_6, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_5, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_4, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_1_0, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_15, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_14, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_13, _ctx);
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
        kk_function_t _fun_unbox_x238 = _fun_setInputStore.clause;
        _x_x6530 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x238, (_fun_unbox_x238, m, evx_11294, kk_main__exp_box(exp, _ctx), kk_std_data_hashmap__hash_map_box(store, _ctx), _ctx), _ctx); /*1016*/
      }
    }
  }
  kk_unit_unbox(_x_x6530); return kk_Unit;
}
 
// select `getQueryCondition` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause1 kk_main__select_getQueryCondition(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause1<exp,absOp,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6533 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause1 _fun_getQueryCondition = _con_x6533->_fun_getQueryCondition;
    return kk_std_core_hnd__clause1_dup(_fun_getQueryCondition, _ctx);
  }
}
 
// Call the `fun getQueryCondition` operation of the effect `:attrGrammar`

static inline kk_main__absOp kk_main_getQueryCondition(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> attrGrammar absOp */ 
  kk_std_core_hnd__ev ev_11298 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x6534;
  {
    struct kk_std_core_hnd_Ev* _con_x6535 = kk_std_core_hnd__as_Ev(ev_11298, _ctx);
    kk_box_t _box_x243 = _con_x6535->hnd;
    int32_t m = _con_x6535->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x243, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x6536 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6536->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x6536->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x6536->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_3 = _con_x6536->_fun_getInputStore;
      kk_std_core_hnd__clause1 _pat_4 = _con_x6536->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_5 = _con_x6536->_fun_getOutputStore;
      kk_std_core_hnd__clause1 _pat_6 = _con_x6536->_fun_getPaths;
      kk_std_core_hnd__clause1 _fun_getQueryCondition = _con_x6536->_fun_getQueryCondition;
      kk_std_core_hnd__clause1 _pat_7 = _con_x6536->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_8 = _con_x6536->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_9 = _con_x6536->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_10 = _con_x6536->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_11 = _con_x6536->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_12 = _con_x6536->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_13 = _con_x6536->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_14 = _con_x6536->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_15 = _con_x6536->_fun_setTraversalSummary;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause2_drop(_pat_9, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_8, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_7, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_6, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_5, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_4, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_1_0, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_15, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_14, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_13, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_12, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_11, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_10, _ctx);
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_getQueryCondition, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x247 = _fun_getQueryCondition.clause;
        _x_x6534 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x247, (_fun_unbox_x247, m, ev_11298, kk_main__exp_box(exp, _ctx), _ctx), _ctx); /*1010*/
      }
    }
  }
  return kk_main__absOp_unbox(_x_x6534, KK_OWNED, _ctx);
}
 
// select `setQueryCondition` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause2 kk_main__select_setQueryCondition(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause2<exp,absOp,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6537 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause2 _fun_setQueryCondition = _con_x6537->_fun_setQueryCondition;
    return kk_std_core_hnd__clause2_dup(_fun_setQueryCondition, _ctx);
  }
}
 
// Call the `fun setQueryCondition` operation of the effect `:attrGrammar`

static inline kk_unit_t kk_main_setQueryCondition(kk_main__exp exp, kk_main__absOp absOp, kk_context_t* _ctx) { /* (exp : exp, absOp : absOp) -> attrGrammar () */ 
  kk_std_core_hnd__ev evx_11301 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x6538;
  {
    struct kk_std_core_hnd_Ev* _con_x6539 = kk_std_core_hnd__as_Ev(evx_11301, _ctx);
    kk_box_t _box_x251 = _con_x6539->hnd;
    int32_t m = _con_x6539->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x251, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x6540 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6540->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x6540->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x6540->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_3 = _con_x6540->_fun_getInputStore;
      kk_std_core_hnd__clause1 _pat_4 = _con_x6540->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_5 = _con_x6540->_fun_getOutputStore;
      kk_std_core_hnd__clause1 _pat_6 = _con_x6540->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_7 = _con_x6540->_fun_getQueryCondition;
      kk_std_core_hnd__clause1 _pat_8 = _con_x6540->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_9 = _con_x6540->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_10 = _con_x6540->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_11 = _con_x6540->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_12 = _con_x6540->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_13 = _con_x6540->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_14 = _con_x6540->_fun_setPaths;
      kk_std_core_hnd__clause2 _fun_setQueryCondition = _con_x6540->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_15 = _con_x6540->_fun_setTraversalSummary;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause2_drop(_pat_9, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_8, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_7, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_6, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_5, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_4, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_1_0, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_15, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_14, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_13, _ctx);
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
        kk_function_t _fun_unbox_x256 = _fun_setQueryCondition.clause;
        _x_x6538 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x256, (_fun_unbox_x256, m, evx_11301, kk_main__exp_box(exp, _ctx), kk_main__absOp_box(absOp, _ctx), _ctx), _ctx); /*1016*/
      }
    }
  }
  kk_unit_unbox(_x_x6538); return kk_Unit;
}
 
// select `getDataDependence` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause1 kk_main__select_getDataDependence(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause1<exp,bool,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6541 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause1 _fun_getDataDependence = _con_x6541->_fun_getDataDependence;
    return kk_std_core_hnd__clause1_dup(_fun_getDataDependence, _ctx);
  }
}
 
// Call the `fun getDataDependence` operation of the effect `:attrGrammar`

static inline bool kk_main_getDataDependence(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> attrGrammar bool */ 
  kk_std_core_hnd__ev ev_11305 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x6542;
  {
    struct kk_std_core_hnd_Ev* _con_x6543 = kk_std_core_hnd__as_Ev(ev_11305, _ctx);
    kk_box_t _box_x261 = _con_x6543->hnd;
    int32_t m = _con_x6543->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x261, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x6544 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6544->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x6544->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _fun_getDataDependence = _con_x6544->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x6544->_fun_getInputStore;
      kk_std_core_hnd__clause1 _pat_3 = _con_x6544->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_4 = _con_x6544->_fun_getOutputStore;
      kk_std_core_hnd__clause1 _pat_5 = _con_x6544->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_6 = _con_x6544->_fun_getQueryCondition;
      kk_std_core_hnd__clause1 _pat_7 = _con_x6544->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_8 = _con_x6544->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_9 = _con_x6544->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_10 = _con_x6544->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_11 = _con_x6544->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_12 = _con_x6544->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_13 = _con_x6544->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_14 = _con_x6544->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_15 = _con_x6544->_fun_setTraversalSummary;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause2_drop(_pat_9, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_8, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_7, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_6, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_5, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_4, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_1_0, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_15, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_14, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_13, _ctx);
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
        kk_function_t _fun_unbox_x265 = _fun_getDataDependence.clause;
        _x_x6542 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x265, (_fun_unbox_x265, m, ev_11305, kk_main__exp_box(exp, _ctx), _ctx), _ctx); /*1010*/
      }
    }
  }
  return kk_bool_unbox(_x_x6542);
}
 
// select `setDataDependence` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause2 kk_main__select_setDataDependence(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause2<exp,bool,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6545 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause2 _fun_setDataDependence = _con_x6545->_fun_setDataDependence;
    return kk_std_core_hnd__clause2_dup(_fun_setDataDependence, _ctx);
  }
}
 
// Call the `fun setDataDependence` operation of the effect `:attrGrammar`

static inline kk_unit_t kk_main_setDataDependence(kk_main__exp exp, bool dependence, kk_context_t* _ctx) { /* (exp : exp, dependence : bool) -> attrGrammar () */ 
  kk_std_core_hnd__ev evx_11308 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x6546;
  {
    struct kk_std_core_hnd_Ev* _con_x6547 = kk_std_core_hnd__as_Ev(evx_11308, _ctx);
    kk_box_t _box_x269 = _con_x6547->hnd;
    int32_t m = _con_x6547->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x269, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x6548 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6548->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x6548->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x6548->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_3 = _con_x6548->_fun_getInputStore;
      kk_std_core_hnd__clause1 _pat_4 = _con_x6548->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_5 = _con_x6548->_fun_getOutputStore;
      kk_std_core_hnd__clause1 _pat_6 = _con_x6548->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_7 = _con_x6548->_fun_getQueryCondition;
      kk_std_core_hnd__clause1 _pat_8 = _con_x6548->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_9 = _con_x6548->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _fun_setDataDependence = _con_x6548->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_10 = _con_x6548->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_11 = _con_x6548->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_12 = _con_x6548->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_13 = _con_x6548->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_14 = _con_x6548->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_15 = _con_x6548->_fun_setTraversalSummary;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause2_drop(_pat_9, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_8, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_7, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_6, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_5, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_4, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_1_0, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_15, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_14, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_13, _ctx);
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
        kk_function_t _fun_unbox_x274 = _fun_setDataDependence.clause;
        _x_x6546 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x274, (_fun_unbox_x274, m, evx_11308, kk_main__exp_box(exp, _ctx), kk_bool_box(dependence), _ctx), _ctx); /*1016*/
      }
    }
  }
  kk_unit_unbox(_x_x6546); return kk_Unit;
}
 
// select `getIteratorContext` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause1 kk_main__select_getIteratorContext(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause1<exp,list<path>,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6549 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause1 _fun_getIteratorContext = _con_x6549->_fun_getIteratorContext;
    return kk_std_core_hnd__clause1_dup(_fun_getIteratorContext, _ctx);
  }
}
 
// Call the `fun getIteratorContext` operation of the effect `:attrGrammar`

static inline kk_std_core_types__list kk_main_getIteratorContext(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> attrGrammar list<path> */ 
  kk_std_core_hnd__ev ev_11312 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x6550;
  {
    struct kk_std_core_hnd_Ev* _con_x6551 = kk_std_core_hnd__as_Ev(ev_11312, _ctx);
    kk_box_t _box_x279 = _con_x6551->hnd;
    int32_t m = _con_x6551->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x279, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x6552 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6552->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x6552->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x6552->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_3 = _con_x6552->_fun_getInputStore;
      kk_std_core_hnd__clause1 _fun_getIteratorContext = _con_x6552->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_4 = _con_x6552->_fun_getOutputStore;
      kk_std_core_hnd__clause1 _pat_5 = _con_x6552->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_6 = _con_x6552->_fun_getQueryCondition;
      kk_std_core_hnd__clause1 _pat_7 = _con_x6552->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_8 = _con_x6552->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_9 = _con_x6552->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_10 = _con_x6552->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_11 = _con_x6552->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_12 = _con_x6552->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_13 = _con_x6552->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_14 = _con_x6552->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_15 = _con_x6552->_fun_setTraversalSummary;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause2_drop(_pat_9, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_8, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_7, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_6, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_5, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_4, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_1_0, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_15, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_14, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_13, _ctx);
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
        kk_function_t _fun_unbox_x283 = _fun_getIteratorContext.clause;
        _x_x6550 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x283, (_fun_unbox_x283, m, ev_11312, kk_main__exp_box(exp, _ctx), _ctx), _ctx); /*1010*/
      }
    }
  }
  return kk_std_core_types__list_unbox(_x_x6550, KK_OWNED, _ctx);
}
 
// select `setIteratorContext` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause2 kk_main__select_setIteratorContext(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause2<exp,list<path>,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6553 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause2 _fun_setIteratorContext = _con_x6553->_fun_setIteratorContext;
    return kk_std_core_hnd__clause2_dup(_fun_setIteratorContext, _ctx);
  }
}
 
// Call the `fun setIteratorContext` operation of the effect `:attrGrammar`

static inline kk_unit_t kk_main_setIteratorContext(kk_main__exp exp, kk_std_core_types__list paths, kk_context_t* _ctx) { /* (exp : exp, paths : list<path>) -> attrGrammar () */ 
  kk_std_core_hnd__ev evx_11315 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x6554;
  {
    struct kk_std_core_hnd_Ev* _con_x6555 = kk_std_core_hnd__as_Ev(evx_11315, _ctx);
    kk_box_t _box_x287 = _con_x6555->hnd;
    int32_t m = _con_x6555->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x287, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x6556 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6556->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x6556->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x6556->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_3 = _con_x6556->_fun_getInputStore;
      kk_std_core_hnd__clause1 _pat_4 = _con_x6556->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_5 = _con_x6556->_fun_getOutputStore;
      kk_std_core_hnd__clause1 _pat_6 = _con_x6556->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_7 = _con_x6556->_fun_getQueryCondition;
      kk_std_core_hnd__clause1 _pat_8 = _con_x6556->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_9 = _con_x6556->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_10 = _con_x6556->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_11 = _con_x6556->_fun_setInputStore;
      kk_std_core_hnd__clause2 _fun_setIteratorContext = _con_x6556->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_12 = _con_x6556->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_13 = _con_x6556->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_14 = _con_x6556->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_15 = _con_x6556->_fun_setTraversalSummary;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause2_drop(_pat_9, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_8, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_7, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_6, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_5, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_4, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_1_0, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_15, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_14, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_13, _ctx);
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
        kk_function_t _fun_unbox_x292 = _fun_setIteratorContext.clause;
        _x_x6554 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x292, (_fun_unbox_x292, m, evx_11315, kk_main__exp_box(exp, _ctx), kk_std_core_types__list_box(paths, _ctx), _ctx), _ctx); /*1016*/
      }
    }
  }
  kk_unit_unbox(_x_x6554); return kk_Unit;
}
 
// select `getTraversalSummary` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause1 kk_main__select_getTraversalSummary(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause1<exp,std/data/hashset/hash-set<path>,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6557 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause1 _fun_getTraversalSummary = _con_x6557->_fun_getTraversalSummary;
    return kk_std_core_hnd__clause1_dup(_fun_getTraversalSummary, _ctx);
  }
}
 
// Call the `fun getTraversalSummary` operation of the effect `:attrGrammar`

static inline kk_std_data_hashset__hash_set kk_main_getTraversalSummary(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> attrGrammar std/data/hashset/hash-set<path> */ 
  kk_std_core_hnd__ev ev_11319 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x6558;
  {
    struct kk_std_core_hnd_Ev* _con_x6559 = kk_std_core_hnd__as_Ev(ev_11319, _ctx);
    kk_box_t _box_x297 = _con_x6559->hnd;
    int32_t m = _con_x6559->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x297, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x6560 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6560->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x6560->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x6560->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_3 = _con_x6560->_fun_getInputStore;
      kk_std_core_hnd__clause1 _pat_4 = _con_x6560->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_5 = _con_x6560->_fun_getOutputStore;
      kk_std_core_hnd__clause1 _pat_6 = _con_x6560->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_7 = _con_x6560->_fun_getQueryCondition;
      kk_std_core_hnd__clause1 _fun_getTraversalSummary = _con_x6560->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_8 = _con_x6560->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_9 = _con_x6560->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_10 = _con_x6560->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_11 = _con_x6560->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_12 = _con_x6560->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_13 = _con_x6560->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_14 = _con_x6560->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_15 = _con_x6560->_fun_setTraversalSummary;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause2_drop(_pat_9, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_8, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_7, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_6, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_5, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_4, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_1_0, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_15, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_14, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_13, _ctx);
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
        kk_function_t _fun_unbox_x301 = _fun_getTraversalSummary.clause;
        _x_x6558 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x301, (_fun_unbox_x301, m, ev_11319, kk_main__exp_box(exp, _ctx), _ctx), _ctx); /*1010*/
      }
    }
  }
  return kk_std_data_hashset__hash_set_unbox(_x_x6558, KK_OWNED, _ctx);
}
 
// select `setTraversalSummary` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause2 kk_main__select_setTraversalSummary(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause2<exp,std/data/hashset/hash-set<path>,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6561 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause2 _fun_setTraversalSummary = _con_x6561->_fun_setTraversalSummary;
    return kk_std_core_hnd__clause2_dup(_fun_setTraversalSummary, _ctx);
  }
}
 
// Call the `fun setTraversalSummary` operation of the effect `:attrGrammar`

static inline kk_unit_t kk_main_setTraversalSummary(kk_main__exp exp, kk_std_data_hashset__hash_set summary, kk_context_t* _ctx) { /* (exp : exp, summary : std/data/hashset/hash-set<path>) -> attrGrammar () */ 
  kk_std_core_hnd__ev evx_11322 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x6562;
  {
    struct kk_std_core_hnd_Ev* _con_x6563 = kk_std_core_hnd__as_Ev(evx_11322, _ctx);
    kk_box_t _box_x305 = _con_x6563->hnd;
    int32_t m = _con_x6563->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x305, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x6564 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6564->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x6564->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x6564->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_3 = _con_x6564->_fun_getInputStore;
      kk_std_core_hnd__clause1 _pat_4 = _con_x6564->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_5 = _con_x6564->_fun_getOutputStore;
      kk_std_core_hnd__clause1 _pat_6 = _con_x6564->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_7 = _con_x6564->_fun_getQueryCondition;
      kk_std_core_hnd__clause1 _pat_8 = _con_x6564->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_9 = _con_x6564->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_10 = _con_x6564->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_11 = _con_x6564->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_12 = _con_x6564->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_13 = _con_x6564->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_14 = _con_x6564->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_15 = _con_x6564->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _fun_setTraversalSummary = _con_x6564->_fun_setTraversalSummary;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause2_drop(_pat_9, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_8, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_7, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_6, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_5, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_4, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_1_0, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_15, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_14, _ctx);
        kk_std_core_hnd__clause2_drop(_pat_13, _ctx);
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
        kk_function_t _fun_unbox_x310 = _fun_setTraversalSummary.clause;
        _x_x6562 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x310, (_fun_unbox_x310, m, evx_11322, kk_main__exp_box(exp, _ctx), kk_std_data_hashset__hash_set_box(summary, _ctx), _ctx), _ctx); /*1016*/
      }
    }
  }
  kk_unit_unbox(_x_x6562); return kk_Unit;
}

extern kk_std_core_hnd__htag kk_main__tag_nondet;

kk_box_t kk_main__handle_nondet(kk_main__nondet hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (hnd : nondet<e,b>, ret : (res : a) -> e b, action : () -> <nondet|e> a) -> e b */ 
 
// select `choose` operation out of effect `:nondet`

static inline kk_std_core_hnd__clause2 kk_main__select_choose(kk_main__nondet hnd, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : nondet<e,b>) -> hnd/clause2<a,a,a,nondet,e,b> */ 
  {
    struct kk_main__Hnd_nondet* _con_x6568 = kk_main__as_Hnd_nondet(hnd, _ctx);
    kk_std_core_hnd__clause2 _ctl_choose = _con_x6568->_ctl_choose;
    return kk_std_core_hnd__clause2_dup(_ctl_choose, _ctx);
  }
}
 
// Call the `ctl choose` operation of the effect `:nondet`

static inline kk_box_t kk_main_choose(kk_box_t x, kk_box_t y, kk_context_t* _ctx) { /* forall<a> (x : a, y : a) -> nondet a */ 
  kk_std_core_hnd__ev evx_11327 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/nondet>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x6569 = kk_std_core_hnd__as_Ev(evx_11327, _ctx);
    kk_box_t _box_x323 = _con_x6569->hnd;
    int32_t m = _con_x6569->marker;
    kk_main__nondet h = kk_main__nondet_unbox(_box_x323, KK_BORROWED, _ctx);
    kk_main__nondet_dup(h, _ctx);
    {
      struct kk_main__Hnd_nondet* _con_x6570 = kk_main__as_Hnd_nondet(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6570->_cfc;
      kk_std_core_hnd__clause2 _ctl_choose = _con_x6570->_ctl_choose;
      kk_std_core_hnd__clause0 _pat_1_0 = _con_x6570->_brk_fail;
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
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), f, (f, m, evx_11327, x, y, _ctx), _ctx);
      }
    }
  }
}
 
// select `fail` operation out of effect `:nondet`

static inline kk_std_core_hnd__clause0 kk_main__select_fail(kk_main__nondet hnd, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : nondet<e,b>) -> hnd/clause0<a,nondet,e,b> */ 
  {
    struct kk_main__Hnd_nondet* _con_x6571 = kk_main__as_Hnd_nondet(hnd, _ctx);
    kk_std_core_hnd__clause0 _brk_fail = _con_x6571->_brk_fail;
    return kk_std_core_hnd__clause0_dup(_brk_fail, _ctx);
  }
}
 
// Call the `final ctl fail` operation of the effect `:nondet`

static inline kk_box_t kk_main_fail(kk_context_t* _ctx) { /* forall<a> () -> nondet a */ 
  kk_std_core_hnd__ev ev_11331 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/nondet>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x6572 = kk_std_core_hnd__as_Ev(ev_11331, _ctx);
    kk_box_t _box_x324 = _con_x6572->hnd;
    int32_t m = _con_x6572->marker;
    kk_main__nondet h = kk_main__nondet_unbox(_box_x324, KK_BORROWED, _ctx);
    kk_main__nondet_dup(h, _ctx);
    {
      struct kk_main__Hnd_nondet* _con_x6573 = kk_main__as_Hnd_nondet(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6573->_cfc;
      kk_std_core_hnd__clause2 _pat_1_0 = _con_x6573->_ctl_choose;
      kk_std_core_hnd__clause0 _brk_fail = _con_x6573->_brk_fail;
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
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), f, (f, m, ev_11331, _ctx), _ctx);
      }
    }
  }
}

kk_main__absValue kk_main__lp__dot__dot__rp_(kk_main__absValue value, kk_main__fieldName fieldName, kk_context_t* _ctx); /* (value : absValue, fieldName : fieldName) -> exn absValue */ 

kk_box_t kk_main_getOrThrow(kk_std_data_hashmap__hash_map map, kk_box_t key, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_context_t* _ctx); /* forall<a,b> (map : std/data/hashmap/hash-map<a,b>, key : a, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int) -> exn b */ 


// lift anonymous function
struct kk_main_hash_map_fs_insert_fun6638__t {
  struct kk_function_s _base;
};
extern bool kk_main_hash_map_fs_insert_fun6638(kk_function_t _fself, kk_integer_t _x1_x6636, kk_integer_t _x2_x6637, kk_context_t* _ctx);
static inline kk_function_t kk_main_hash_map_fs_new_insert_fun6638(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hash_map_fs_insert_fun6638, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main_hash_map_fs_insert_fun6641__t {
  struct kk_function_s _base;
};
extern kk_integer_t kk_main_hash_map_fs_insert_fun6641(kk_function_t _fself, kk_integer_t _x1_x6639, kk_integer_t _x2_x6640, kk_context_t* _ctx);
static inline kk_function_t kk_main_hash_map_fs_new_insert_fun6641(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hash_map_fs_insert_fun6641, _ctx)
  return kk_function_dup(_fself,kk_context());
}


static inline kk_std_data_hashmap__hash_map kk_main_hash_map_fs_insert(kk_std_data_hashmap__hash_map map, kk_box_t key, kk_box_t value, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_context_t* _ctx) { /* forall<a,b> (map : std/data/hashmap/hash-map<a,b>, key : a, value : b, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int) -> std/data/hashmap/hash-map<a,b> */ 
  return kk_std_data_hashmap_insert(map, key, value, _implicit_fs_hash, _implicit_fs__lp__eq__eq__rp_, kk_main_hash_map_fs_new_insert_fun6638(_ctx), kk_main_hash_map_fs_new_insert_fun6641(_ctx), _ctx);
}


// lift anonymous function
struct kk_main_hash_set_fs_insert_fun6644__t {
  struct kk_function_s _base;
};
extern bool kk_main_hash_set_fs_insert_fun6644(kk_function_t _fself, kk_integer_t _x1_x6642, kk_integer_t _x2_x6643, kk_context_t* _ctx);
static inline kk_function_t kk_main_hash_set_fs_new_insert_fun6644(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hash_set_fs_insert_fun6644, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main_hash_set_fs_insert_fun6647__t {
  struct kk_function_s _base;
};
extern kk_integer_t kk_main_hash_set_fs_insert_fun6647(kk_function_t _fself, kk_integer_t _x1_x6645, kk_integer_t _x2_x6646, kk_context_t* _ctx);
static inline kk_function_t kk_main_hash_set_fs_new_insert_fun6647(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hash_set_fs_insert_fun6647, _ctx)
  return kk_function_dup(_fself,kk_context());
}


static inline kk_std_data_hashset__hash_set kk_main_hash_set_fs_insert(kk_std_data_hashset__hash_set set, kk_box_t x, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_context_t* _ctx) { /* forall<a> (set : std/data/hashset/hash-set<a>, x : a, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int) -> std/data/hashset/hash-set<a> */ 
  return kk_std_data_hashset_insert(set, x, _implicit_fs_hash, _implicit_fs__lp__eq__eq__rp_, kk_main_hash_set_fs_new_insert_fun6644(_ctx), kk_main_hash_set_fs_new_insert_fun6647(_ctx), _ctx);
}

kk_unit_t kk_main_hashmap_fs__mlift_insertAll_11133(kk_std_data_hashmap__hash_map _y_x10311, kk_box_t key, kk_ref_t result, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_box_t _c_x10313, kk_context_t* _ctx); /* forall<h,a,b> (std/data/hashmap/hash-map<a,b>, key : a, result : local-var<h,std/data/hashmap/hash-map<a,b>>, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int, b) -> () */ 

kk_unit_t kk_main_hashmap_fs__mlift_insertAll_11134(kk_std_data_hashmap__hash_map b, kk_box_t key, kk_ref_t result, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_std_data_hashmap__hash_map _y_x10311, kk_context_t* _ctx); /* forall<h,a,b> (b : std/data/hashmap/hash-map<a,b>, key : a, result : local-var<h,std/data/hashmap/hash-map<a,b>>, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int, std/data/hashmap/hash-map<a,b>) -> <local<h>,exn,div> () */ 
 
// monadic lift

static inline kk_std_data_hashmap__hash_map kk_main_hashmap_fs__mlift_insertAll_11135(kk_ref_t result, kk_unit_t wild__, kk_context_t* _ctx) { /* forall<h,a,b> (result : local-var<h,std/data/hashmap/hash-map<a,b>>, wild_ : ()) -> <div,exn,local<h>> std/data/hashmap/hash-map<a,b> */ 
  kk_box_t _x_x6692 = kk_ref_get(result,kk_context()); /*11500*/
  return kk_std_data_hashmap__hash_map_unbox(_x_x6692, KK_OWNED, _ctx);
}

kk_std_data_hashmap__hash_map kk_main_hashmap_fs_insertAll(kk_std_data_hashmap__hash_map a, kk_std_data_hashmap__hash_map b, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_context_t* _ctx); /* forall<a,b> (a : std/data/hashmap/hash-map<a,b>, b : std/data/hashmap/hash-map<a,b>, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int) -> pure std/data/hashmap/hash-map<a,b> */ 


// lift anonymous function
struct kk_main_hashset_fs_singleton_fun6709__t {
  struct kk_function_s _base;
};
extern bool kk_main_hashset_fs_singleton_fun6709(kk_function_t _fself, kk_integer_t _x1_x6707, kk_integer_t _x2_x6708, kk_context_t* _ctx);
static inline kk_function_t kk_main_hashset_fs_new_singleton_fun6709(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hashset_fs_singleton_fun6709, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main_hashset_fs_singleton_fun6712__t {
  struct kk_function_s _base;
};
extern kk_integer_t kk_main_hashset_fs_singleton_fun6712(kk_function_t _fself, kk_integer_t _x1_x6710, kk_integer_t _x2_x6711, kk_context_t* _ctx);
static inline kk_function_t kk_main_hashset_fs_new_singleton_fun6712(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hashset_fs_singleton_fun6712, _ctx)
  return kk_function_dup(_fself,kk_context());
}


static inline kk_std_data_hashset__hash_set kk_main_hashset_fs_singleton(kk_box_t x, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_context_t* _ctx) { /* forall<a> (x : a, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int) -> std/data/hashset/hash-set<a> */ 
  kk_std_data_hashset__hash_set set_10185 = kk_std_data_hashset_thread_fs_hash_set(kk_std_core_types__new_None(_ctx), _ctx); /*std/data/hashset/hash-set<9576>*/;
  return kk_std_data_hashset_insert(set_10185, x, _implicit_fs_hash, _implicit_fs__lp__eq__eq__rp_, kk_main_hashset_fs_new_singleton_fun6709(_ctx), kk_main_hashset_fs_new_singleton_fun6712(_ctx), _ctx);
}

kk_main__absValue kk_main_applyOp(kk_main__op op, kk_main__absValue a, kk_main__absValue b, kk_context_t* _ctx); /* (op : op, a : absValue, b : absValue) -> absValue */ 

kk_std_data_hashset__hash_set kk_main_extractPaths(kk_main__absValue absValue, kk_context_t* _ctx); /* (absValue : absValue) -> std/data/hashset/hash-set<path> */ 

kk_unit_t kk_main__mlift_updateInputStore_11136(kk_main__exp s, kk_std_data_hashmap__hash_map _y_x10327, kk_context_t* _ctx); /* (s : exp, std/data/hashmap/hash-map<varName,absValue>) -> <div,exn,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateInputStore_11137(kk_std_data_hashmap__hash_map inputStorePlusV, kk_main__exp s_0, kk_std_data_hashmap__hash_map _y_x10326, kk_context_t* _ctx); /* (inputStorePlusV : std/data/hashmap/hash-map<varName,absValue>, s : exp, store) -> <attrGrammar,div,exn> () */ 

kk_unit_t kk_main__mlift_updateInputStore_11138(kk_std_data_hashmap__hash_map inputStore, kk_main__exp s_1, kk_main__varName v, kk_main__absValue _y_x10324, kk_context_t* _ctx); /* (inputStore : store, s : exp, v : varName, absValue) -> <exn,attrGrammar,div> () */ 

kk_unit_t kk_main__mlift_updateInputStore_11139(kk_std_data_hashmap__hash_map inputStore_0, kk_main__exp s_2, kk_main__varName v_0, kk_main__absValue _y_x10323, kk_context_t* _ctx); /* (inputStore : store, s : exp, v : varName, absValue) -> <attrGrammar,exn,div> () */ 

kk_unit_t kk_main__mlift_updateInputStore_11140(kk_main__exp e, kk_std_data_hashmap__hash_map inputStore_1, kk_main__exp s_3, kk_main__varName v_1, kk_unit_t wild___0, kk_context_t* _ctx); /* (e : exp, inputStore : store, s : exp, v : varName, wild_@0 : ()) -> <pure,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateInputStore_11141(kk_main__exp s2, kk_std_data_hashmap__hash_map _y_x10331, kk_context_t* _ctx); /* (s2 : exp, store) -> <attrGrammar,div,exn> () */ 

kk_unit_t kk_main__mlift_updateInputStore_11142(kk_main__exp s1, kk_main__exp s2_0, kk_unit_t wild___1, kk_context_t* _ctx); /* (s1 : exp, s2 : exp, wild_@1 : ()) -> <pure,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateInputStore_11143(kk_main__exp e2, kk_std_data_hashmap__hash_map inputStore_2, kk_unit_t wild___2, kk_context_t* _ctx); /* (e2 : exp, inputStore : store, wild_@2 : ()) -> <pure,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateInputStore_11144(kk_std_data_hashmap__hash_map inputStore_3, kk_main__exp s2_0_0, kk_unit_t wild___4, kk_context_t* _ctx); /* (inputStore : store, s2@0 : exp, wild_@4 : ()) -> <pure,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateInputStore_11145(kk_std_data_hashmap__hash_map inputStore_4, kk_main__exp s1_0, kk_main__exp s2_0_1, kk_unit_t wild___3, kk_context_t* _ctx); /* (inputStore : store, s1@0 : exp, s2@0 : exp, wild_@3 : ()) -> <pure,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateInputStore_11146(kk_main__exp exp, kk_std_data_hashmap__hash_map inputStore_5, kk_unit_t wild__, kk_context_t* _ctx); /* (exp : exp, inputStore : store, wild_ : ()) -> <attrGrammar,div,exn> () */ 

kk_unit_t kk_main_updateInputStore(kk_main__exp exp_0, kk_std_data_hashmap__hash_map inputStore_6, kk_context_t* _ctx); /* (exp : exp, inputStore : store) -> <pure,attrGrammar> () */ 

bool kk_main_isValidQueryCondition(kk_main__exp exp, kk_context_t* _ctx); /* (exp : exp) -> bool */ 

kk_main__absOp kk_main_absOp_fs__lp__amp__rp_(kk_main__absOp absOp, kk_main__absValue absValue, kk_context_t* _ctx); /* (absOp : absOp, absValue : absValue) -> absOp */ 

kk_main__absValue kk_main_absValue_fs_not(kk_main__absValue absValue, kk_context_t* _ctx); /* (absValue : absValue) -> absValue */ 

kk_unit_t kk_main__mlift_updateQueryCondition_11147(kk_main__absOp queryCondition, kk_main__exp s2, kk_main__absValue _y_x10346, kk_context_t* _ctx); /* (queryCondition : absOp, s2 : exp, absValue) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateQueryCondition_11148(kk_main__exp e, kk_main__absOp queryCondition_0, kk_main__exp s2_0, kk_unit_t wild___1, kk_context_t* _ctx); /* (e : exp, queryCondition : absOp, s2 : exp, wild_@1 : ()) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateQueryCondition_11149(kk_main__exp e_0, kk_main__absOp queryCondition_1, kk_main__exp s1, kk_main__exp s2_1, kk_main__absValue _y_x10344, kk_context_t* _ctx); /* (e : exp, queryCondition : absOp, s1 : exp, s2 : exp, absValue) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateQueryCondition_11150(kk_main__absOp queryCondition_2, kk_main__exp s2_2, kk_unit_t wild___2, kk_context_t* _ctx); /* (queryCondition : absOp, s2 : exp, wild_@2 : ()) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateQueryCondition_11151(kk_main__exp e_1, kk_main__absOp queryCondition_3, kk_main__exp s1_0, kk_main__exp s2_3, kk_unit_t wild___0, kk_context_t* _ctx); /* (e : exp, queryCondition : absOp, s1 : exp, s2 : exp, wild_@0 : ()) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateQueryCondition_11152(kk_main__exp e2, kk_main__absOp queryCondition_4, kk_unit_t wild___3, kk_context_t* _ctx); /* (e2 : exp, queryCondition : absOp, wild_@3 : ()) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateQueryCondition_11153(kk_main__absOp queryCondition_5, kk_main__exp s, kk_unit_t wild___4, kk_context_t* _ctx); /* (queryCondition : absOp, s : exp, wild_@4 : ()) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateQueryCondition_11154(kk_main__absOp queryCondition_6, kk_main__exp s2_0_0, kk_unit_t wild___5, kk_context_t* _ctx); /* (queryCondition : absOp, s2@0 : exp, wild_@5 : ()) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateQueryCondition_11155(kk_main__exp exp, kk_main__absOp queryCondition_7, kk_unit_t wild__, kk_context_t* _ctx); /* (exp : exp, queryCondition : absOp, wild_ : ()) -> attrGrammar () */ 

kk_unit_t kk_main_updateQueryCondition(kk_main__exp exp_0, kk_main__absOp queryCondition_8, kk_context_t* _ctx); /* (exp : exp, queryCondition : absOp) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateDataDependence_11156(bool dependence, kk_main__exp e2, kk_unit_t wild___0, kk_context_t* _ctx); /* (dependence : bool, e2 : exp, wild_@0 : ()) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateDataDependence_11157(bool dependence_0, kk_main__exp s2, kk_unit_t wild___2, kk_context_t* _ctx); /* (dependence : bool, s2 : exp, wild_@2 : ()) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateDataDependence_11158(bool dependence_1, kk_main__exp s1, kk_main__exp s2_0, kk_unit_t wild___1, kk_context_t* _ctx); /* (dependence : bool, s1 : exp, s2 : exp, wild_@1 : ()) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateDataDependence_11159(bool dependence_2, kk_main__exp s, kk_unit_t wild___3, kk_context_t* _ctx); /* (dependence : bool, s : exp, wild_@3 : ()) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateDataDependence_11160(bool dependence_3, kk_main__exp s2_0_0, kk_unit_t wild___4, kk_context_t* _ctx); /* (dependence : bool, s2@0 : exp, wild_@4 : ()) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateDataDependence_11161(bool dependence_4, kk_main__exp exp, kk_unit_t wild__, kk_context_t* _ctx); /* (dependence : bool, exp : exp, wild_ : ()) -> attrGrammar () */ 

kk_unit_t kk_main_updateDataDependence(kk_main__exp exp_0, bool parentDependence, kk_context_t* _ctx); /* (exp : exp, parentDependence : bool) -> attrGrammar () */ 

bool kk_main_extends(kk_main__absValue absValue, kk_std_core_types__list paths, kk_context_t* _ctx); /* (absValue : absValue, paths : list<path>) -> bool */ 

kk_unit_t kk_main__mlift_updateIteratorContext_11162(kk_std_core_types__list paths, kk_main__exp s, kk_main__absValue _y_x10383, kk_context_t* _ctx); /* (paths : list<path>, s : exp, absValue) -> <exn,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateIteratorContext_11163(kk_std_core_types__list paths_0, kk_main__exp s_0, kk_main__absValue _y_x10382, kk_context_t* _ctx); /* (paths : list<path>, s : exp, absValue) -> <attrGrammar,exn> () */ 

kk_unit_t kk_main__mlift_updateIteratorContext_11164(kk_main__exp e, kk_std_core_types__list paths_1, kk_main__exp s_1, kk_main__absValue _y_x10380, kk_context_t* _ctx); /* (e : exp, paths : list<path>, s : exp, absValue) -> <exn,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateIteratorContext_11165(kk_main__exp e_0, kk_std_core_types__list paths_3, kk_main__exp s_2, kk_main__absValue _y_x10379, kk_context_t* _ctx); /* (e : exp, paths : list<path>, s : exp, absValue) -> <attrGrammar,exn> () */ 

kk_unit_t kk_main__mlift_updateIteratorContext_11166(kk_main__exp e_1, kk_std_core_types__list paths_4, kk_main__exp s_3, kk_unit_t wild___0, kk_context_t* _ctx); /* (e : exp, paths : list<path>, s : exp, wild_@0 : ()) -> <exn,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateIteratorContext_11167(kk_std_core_types__list paths_5, kk_main__exp s2, kk_unit_t wild___1, kk_context_t* _ctx); /* (paths : list<path>, s2 : exp, wild_@1 : ()) -> <exn,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateIteratorContext_11168(kk_main__exp e2, kk_std_core_types__list paths_6, kk_unit_t wild___2, kk_context_t* _ctx); /* (e2 : exp, paths : list<path>, wild_@2 : ()) -> <exn,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateIteratorContext_11169(kk_std_core_types__list paths_7, kk_main__exp s2_0, kk_unit_t wild___4, kk_context_t* _ctx); /* (paths : list<path>, s2@0 : exp, wild_@4 : ()) -> <exn,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateIteratorContext_11170(kk_std_core_types__list paths_8, kk_main__exp s1_0, kk_main__exp s2_0_0, kk_unit_t wild___3, kk_context_t* _ctx); /* (paths : list<path>, s1@0 : exp, s2@0 : exp, wild_@3 : ()) -> <exn,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateIteratorContext_11171(kk_main__exp exp, kk_std_core_types__list paths_9, kk_unit_t wild__, kk_context_t* _ctx); /* (exp : exp, paths : list<path>, wild_ : ()) -> <attrGrammar,exn> () */ 

kk_unit_t kk_main_updateIteratorContext(kk_main__exp exp_0, kk_std_core_types__list paths_10, kk_context_t* _ctx); /* (exp : exp, paths : list<path>) -> <attrGrammar,exn> () */ 

static inline kk_box_t kk_main_getOrDefault(kk_std_data_hashmap__hash_map map, kk_box_t key, kk_box_t kkloc_default, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_context_t* _ctx) { /* forall<a,b> (map : std/data/hashmap/hash-map<a,b>, key : a, default : b, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int) -> b */ 
  kk_std_core_types__maybe _match_x5647 = kk_std_data_hashmap_get(map, key, _implicit_fs_hash, _implicit_fs__lp__eq__eq__rp_, _ctx); /*maybe<3177>*/;
  if (kk_std_core_types__is_Just(_match_x5647, _ctx)) {
    kk_box_t value = _match_x5647._cons.Just.value;
    kk_box_drop(kkloc_default, _ctx);
    return value;
  }
  {
    return kkloc_default;
  }
}

kk_main__absValue kk_main__mlift_updateAbstractValue_11172(kk_main__fieldName f, kk_main__absValue _y_x10399, kk_context_t* _ctx); /* (f : fieldName, absValue) -> <attrGrammar,exn> absValue */ 

kk_main__absValue kk_main__mlift_updateAbstractValue_11173(kk_main__absValue _y_x10402, kk_main__op op, kk_main__absValue _y_x10404, kk_context_t* _ctx); /* (absValue, op : op, absValue) -> <attrGrammar,exn> absValue */ 

kk_main__absValue kk_main__mlift_updateAbstractValue_11174(kk_main__op op, kk_main__exp rhs, kk_main__absValue _y_x10402, kk_context_t* _ctx); /* (op : op, rhs : exp, absValue) -> <attrGrammar,exn> absValue */ 

kk_main__absValue kk_main__mlift_updateAbstractValue_11175(kk_main__varName v, kk_std_data_hashmap__hash_map _y_x10406, kk_context_t* _ctx); /* (v : varName, store) -> <attrGrammar,exn> absValue */ 

kk_unit_t kk_main__mlift_updateAbstractValue_11176(kk_main__exp exp, kk_main__absValue _c_x10407, kk_context_t* _ctx); /* (exp : exp, absValue) -> () */ 

kk_unit_t kk_main_updateAbstractValue(kk_main__exp exp, kk_context_t* _ctx); /* (exp : exp) -> <attrGrammar,exn> () */ 

kk_std_data_hashset__hash_set kk_main__mlift_updatePaths_11177(kk_main__absValue _y_x10411, kk_context_t* _ctx); /* (absValue) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updatePaths_11178(kk_main__absValue _y_x10413, kk_context_t* _ctx); /* (absValue) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updatePaths_11179(kk_std_data_hashset__hash_set _y_x10415, kk_std_data_hashset__hash_set _y_x10417, kk_context_t* _ctx); /* (std/data/hashset/hash-set<path>, std/data/hashset/hash-set<path>) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updatePaths_11180(kk_main__exp rhs, kk_std_data_hashset__hash_set _y_x10415, kk_context_t* _ctx); /* (rhs : exp, std/data/hashset/hash-set<path>) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updatePaths_11181(kk_std_data_hashset__hash_set _y_x10421, kk_std_data_hashset__hash_set _y_x10423, kk_std_data_hashset__hash_set _y_x10425, kk_context_t* _ctx); /* (std/data/hashset/hash-set<path>, std/data/hashset/hash-set<path>, std/data/hashset/hash-set<path>) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updatePaths_11182(kk_std_data_hashset__hash_set _y_x10421, kk_main__exp s2, kk_std_data_hashset__hash_set _y_x10423, kk_context_t* _ctx); /* (std/data/hashset/hash-set<path>, s2 : exp, std/data/hashset/hash-set<path>) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updatePaths_11183(kk_main__exp s1, kk_main__exp s2, kk_std_data_hashset__hash_set _y_x10421, kk_context_t* _ctx); /* (s1 : exp, s2 : exp, std/data/hashset/hash-set<path>) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updatePaths_11184(kk_std_data_hashset__hash_set _y_x10427, kk_main__absValue _y_x10430, kk_std_data_hashset__hash_set _y_x10432, kk_context_t* _ctx); /* (std/data/hashset/hash-set<path>, absValue, std/data/hashset/hash-set<path>) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updatePaths_11185(kk_std_data_hashset__hash_set _y_x10427, kk_main__exp s, kk_main__absValue _y_x10430, kk_context_t* _ctx); /* (std/data/hashset/hash-set<path>, s : exp, absValue) -> <exn,attrGrammar> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updatePaths_11186(kk_std_data_hashset__hash_set _y_x10427, kk_main__exp s, kk_main__absValue _y_x10429, kk_context_t* _ctx); /* (std/data/hashset/hash-set<path>, s : exp, absValue) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updatePaths_11187(kk_main__exp e_1, kk_main__exp s, kk_std_data_hashset__hash_set _y_x10427, kk_context_t* _ctx); /* (e@1 : exp, s : exp, std/data/hashset/hash-set<path>) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updatePaths_11188(kk_std_data_hashset__hash_set _y_x10434, kk_std_data_hashset__hash_set _y_x10436, kk_context_t* _ctx); /* (std/data/hashset/hash-set<path>, std/data/hashset/hash-set<path>) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updatePaths_11189(kk_main__exp s2_0, kk_std_data_hashset__hash_set _y_x10434, kk_context_t* _ctx); /* (s2@0 : exp, std/data/hashset/hash-set<path>) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_unit_t kk_main__mlift_updatePaths_11190(kk_main__exp exp, kk_std_data_hashset__hash_set _c_x10439, kk_context_t* _ctx); /* (exp : exp, std/data/hashset/hash-set<path>) -> () */ 

kk_unit_t kk_main_updatePaths(kk_main__exp exp, kk_context_t* _ctx); /* (exp : exp) -> <attrGrammar,exn> () */ 

kk_main__absValue kk_main_absValue_fs_join(kk_main__absValue v1, kk_main__absValue v2, kk_context_t* _ctx); /* (v1 : absValue, v2 : absValue) -> exn absValue */ 

kk_std_data_hashmap__hash_map kk_main__mlift_updateOutputStore_11191(kk_std_data_hashmap__hash_map _y_x10447, kk_main__varName v, kk_main__absValue _y_x10450, kk_context_t* _ctx); /* (store, v : varName, absValue) -> <exn,attrGrammar,div> std/data/hashmap/hash-map<varName,absValue> */ 

kk_std_data_hashmap__hash_map kk_main__mlift_updateOutputStore_11192(kk_std_data_hashmap__hash_map _y_x10447, kk_main__absValue previousV, kk_main__varName v, kk_main__absValue _y_x10449, kk_context_t* _ctx); /* (store, previousV : absValue, v : varName, absValue) -> <attrGrammar,exn,div> std/data/hashmap/hash-map<varName,absValue> */ 

kk_std_data_hashmap__hash_map kk_main__mlift_updateOutputStore_11193(kk_main__exp e, kk_main__absValue previousV, kk_main__varName v, kk_std_data_hashmap__hash_map _y_x10447, kk_context_t* _ctx); /* (e : exp, previousV : absValue, v : varName, store) -> <attrGrammar,exn,div> std/data/hashmap/hash-map<varName,absValue> */ 

kk_std_data_hashmap__hash_map kk_main__mlift_updateOutputStore_11194(kk_main__exp e, kk_main__exp exp, kk_main__varName v, kk_std_data_hashmap__hash_map _y_x10445, kk_context_t* _ctx); /* (e : exp, exp : exp, v : varName, store) -> <attrGrammar,exn,div> std/data/hashmap/hash-map<varName,absValue> */ 

kk_std_data_hashmap__hash_map kk_main__mlift_updateOutputStore_11195(kk_std_data_hashmap__hash_map _y_x10452, kk_std_data_hashmap__hash_map _y_x10454, kk_context_t* _ctx); /* (store, store) -> <attrGrammar,div,exn> std/data/hashmap/hash-map<varName,absValue> */ 

kk_std_data_hashmap__hash_map kk_main__mlift_updateOutputStore_11196(kk_main__exp s2, kk_std_data_hashmap__hash_map _y_x10452, kk_context_t* _ctx); /* (s2 : exp, store) -> <attrGrammar,div,exn> std/data/hashmap/hash-map<varName,absValue> */ 

kk_std_data_hashmap__hash_map kk_main__mlift_updateOutputStore_11197(kk_main__varName v_0, kk_std_data_hashmap__hash_map _y_x10457, kk_context_t* _ctx); /* (v@0 : varName, store) -> <attrGrammar,div,exn> std/data/hashmap/hash-map<varName,absValue> */ 

kk_unit_t kk_main__mlift_updateOutputStore_11198(kk_main__exp exp, kk_std_data_hashmap__hash_map _c_x10462, kk_context_t* _ctx); /* (exp : exp, std/data/hashmap/hash-map<varName,absValue>) -> () */ 

kk_unit_t kk_main_updateOutputStore(kk_main__exp exp, kk_context_t* _ctx); /* (exp : exp) -> <pure,attrGrammar> () */ 

kk_box_t kk_main_firstOrThrow(kk_std_core_types__list l, kk_context_t* _ctx); /* forall<a> (l : list<a>) -> exn a */ 

kk_std_data_hashset__hash_set kk_main__mlift_iter_11199(kk_main__path latestIteratorContext, kk_main__absOp _y_x10468, kk_context_t* _ctx); /* (latestIteratorContext : path, absOp) -> attrGrammar std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_iter_11200(kk_main__exp exp, kk_std_core_types__list _y_x10467, kk_context_t* _ctx); /* (exp : exp, list<path>) -> attrGrammar std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main_iter(kk_main__exp exp, kk_context_t* _ctx); /* (exp : exp) -> attrGrammar std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updateTraversalSummary_11201(kk_std_core_types__list _y_x10476, kk_context_t* _ctx); /* (list<path>) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updateTraversalSummary_11202(kk_main__absOp queryCondition, kk_main__absValue _y_x10475, kk_context_t* _ctx); /* (queryCondition : absOp, absValue) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updateTraversalSummary_11203(kk_std_core_types__list _y_x10479, kk_context_t* _ctx); /* (list<path>) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updateTraversalSummary_11204(kk_main__absOp queryCondition, kk_std_data_hashset__hash_set _y_x10478, kk_context_t* _ctx); /* (queryCondition : absOp, std/data/hashset/hash-set<path>) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updateTraversalSummary_11205(kk_main__exp exp, kk_main__absOp queryCondition, bool _y_x10473, kk_context_t* _ctx); /* (exp : exp, queryCondition : absOp, bool) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updateTraversalSummary_11206(kk_main__exp exp, kk_main__absOp queryCondition, kk_context_t* _ctx); /* (exp : exp, queryCondition : absOp) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updateTraversalSummary_11207(kk_std_data_hashset__hash_set _y_x10482, kk_std_data_hashset__hash_set _y_x10483, kk_context_t* _ctx); /* (std/data/hashset/hash-set<path>, std/data/hashset/hash-set<path>) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updateTraversalSummary_11208(kk_main__exp exp, kk_std_data_hashset__hash_set _y_x10482, kk_context_t* _ctx); /* (exp : exp, std/data/hashset/hash-set<path>) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updateTraversalSummary_11209(kk_std_data_hashset__hash_set _y_x10485, kk_std_data_hashset__hash_set _c_x10489, kk_context_t* _ctx); /* (std/data/hashset/hash-set<path>, std/data/hashset/hash-set<path>) -> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updateTraversalSummary_11210(kk_std_data_hashset__hash_set _y_x10485, kk_main__exp exp, bool _y_x10487, kk_context_t* _ctx); /* (std/data/hashset/hash-set<path>, exp : exp, bool) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updateTraversalSummary_11211(kk_main__exp exp, kk_std_data_hashset__hash_set _y_x10485, kk_context_t* _ctx); /* (exp : exp, std/data/hashset/hash-set<path>) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_unit_t kk_main__mlift_updateTraversalSummary_11212(kk_main__exp exp, kk_std_data_hashset__hash_set _c_x10490, kk_context_t* _ctx); /* (exp : exp, std/data/hashset/hash-set<path>) -> () */ 

kk_unit_t kk_main_updateTraversalSummary(kk_main__exp exp, kk_context_t* _ctx); /* (exp : exp) -> <attrGrammar,exn> () */ 
 
// monadic lift

static inline kk_unit_t kk_main__mlift_updateSynthesizedAttrs_11213(kk_main__exp exp, kk_unit_t wild___1, kk_context_t* _ctx) { /* (exp : exp, wild_@1 : ()) -> <pure,attrGrammar> () */ 
  kk_main_updateTraversalSummary(exp, _ctx); return kk_Unit;
}

kk_unit_t kk_main__mlift_updateSynthesizedAttrs_11214(kk_main__exp exp, kk_unit_t wild___0, kk_context_t* _ctx); /* (exp : exp, wild_@0 : ()) -> <attrGrammar,exn> () */ 

kk_unit_t kk_main__mlift_updateSynthesizedAttrs_11215(kk_main__exp exp, kk_unit_t wild__, kk_context_t* _ctx); /* (exp : exp, wild_ : ()) -> <attrGrammar,exn> () */ 

kk_unit_t kk_main_updateSynthesizedAttrs(kk_main__exp exp, kk_context_t* _ctx); /* (exp : exp) -> <pure,attrGrammar> () */ 

kk_unit_t kk_main__mlift_visit_11216(kk_main__exp e2, kk_function_t f, kk_unit_t wild___0, kk_context_t* _ctx); /* forall<e> (e2 : exp, f : (exp) -> e (), wild_@0 : ()) -> e () */ 

kk_unit_t kk_main__mlift_visit_11217(kk_function_t f_0, kk_main__exp s2, kk_unit_t wild___2, kk_context_t* _ctx); /* forall<e> (f : (exp) -> e (), s2 : exp, wild_@2 : ()) -> e () */ 

kk_unit_t kk_main__mlift_visit_11218(kk_function_t f_1, kk_main__exp s1, kk_main__exp s2_0, kk_unit_t wild___1, kk_context_t* _ctx); /* forall<e> (f : (exp) -> e (), s1 : exp, s2 : exp, wild_@1 : ()) -> e () */ 

kk_unit_t kk_main__mlift_visit_11219(kk_function_t f_2, kk_main__exp s, kk_unit_t wild___3, kk_context_t* _ctx); /* forall<e> (f : (exp) -> e (), s : exp, wild_@3 : ()) -> e () */ 

kk_unit_t kk_main__mlift_visit_11220(kk_function_t f_3, kk_main__exp s2_0_0, kk_unit_t wild___4, kk_context_t* _ctx); /* forall<e> (f : (exp) -> e (), s2@0 : exp, wild_@4 : ()) -> e () */ 

kk_unit_t kk_main__mlift_visit_11221(kk_main__exp exp, kk_function_t f_4, kk_unit_t wild__, kk_context_t* _ctx); /* forall<e> (exp : exp, f : (exp) -> e (), wild_ : ()) -> e () */ 

kk_unit_t kk_main_visit(kk_main__exp exp_0, kk_function_t f_5, kk_context_t* _ctx); /* forall<e> (exp : exp, f : (exp) -> e ()) -> e () */ 
 
// monadic lift

static inline kk_unit_t kk_main__mlift_iterateAttributeGrammar_11222(kk_main__exp exp, kk_unit_t wild___2, kk_context_t* _ctx) { /* (exp : exp, wild_@2 : ()) -> <attrGrammar,exn,div> () */ 
  kk_main_updateIteratorContext(exp, kk_std_core_types__new_Nil(_ctx), _ctx); return kk_Unit;
}

kk_unit_t kk_main__mlift_iterateAttributeGrammar_11223(kk_main__exp exp, kk_unit_t wild___1, kk_context_t* _ctx); /* (exp : exp, wild_@1 : ()) -> <attrGrammar,exn,div> () */ 

kk_unit_t kk_main__mlift_iterateAttributeGrammar_11224(kk_main__exp exp, kk_unit_t wild___0, kk_context_t* _ctx); /* (exp : exp, wild_@0 : ()) -> <pure,attrGrammar> () */ 

kk_unit_t kk_main__mlift_iterateAttributeGrammar_11225(kk_main__exp exp, kk_unit_t wild__, kk_context_t* _ctx); /* (exp : exp, wild_ : ()) -> <attrGrammar,div,exn> () */ 

kk_unit_t kk_main_iterateAttributeGrammar(kk_main__exp exp, kk_context_t* _ctx); /* (exp : exp) -> <pure,attrGrammar> () */ 

extern kk_std_core_hnd__htag kk_main__tag_fixpoint;

kk_box_t kk_main__handle_fixpoint(kk_main__fixpoint hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (hnd : fixpoint<e,b>, ret : (res : a) -> e b, action : () -> <fixpoint|e> a) -> e b */ 
 
// select `modified` operation out of effect `:fixpoint`

static inline kk_std_core_hnd__clause0 kk_main__select_modified(kk_main__fixpoint hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : fixpoint<e,a>) -> hnd/clause0<(),fixpoint,e,a> */ 
  {
    struct kk_main__Hnd_fixpoint* _con_x8675 = kk_main__as_Hnd_fixpoint(hnd, _ctx);
    kk_std_core_hnd__clause0 _fun_modified = _con_x8675->_fun_modified;
    return kk_std_core_hnd__clause0_dup(_fun_modified, _ctx);
  }
}
 
// Call the `fun modified` operation of the effect `:fixpoint`

static inline kk_unit_t kk_main_modified(kk_context_t* _ctx) { /* () -> fixpoint () */ 
  kk_std_core_hnd__ev ev_11888 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/fixpoint>*/;
  kk_box_t _x_x8676;
  {
    struct kk_std_core_hnd_Ev* _con_x8677 = kk_std_core_hnd__as_Ev(ev_11888, _ctx);
    kk_box_t _box_x4057 = _con_x8677->hnd;
    int32_t m = _con_x8677->marker;
    kk_main__fixpoint h = kk_main__fixpoint_unbox(_box_x4057, KK_BORROWED, _ctx);
    kk_main__fixpoint_dup(h, _ctx);
    {
      struct kk_main__Hnd_fixpoint* _con_x8678 = kk_main__as_Hnd_fixpoint(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x8678->_cfc;
      kk_std_core_hnd__clause0 _fun_modified = _con_x8678->_fun_modified;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_fun_modified, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x4060 = _fun_modified.clause;
        _x_x8676 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x4060, (_fun_unbox_x4060, m, ev_11888, _ctx), _ctx); /*1005*/
      }
    }
  }
  kk_unit_unbox(_x_x8676); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift_update_11226_fun8680__t {
  struct kk_function_s _base;
  kk_box_t key;
  kk_std_data_hashmap__hash_map map;
  kk_box_t value;
  kk_function_t _implicit_fs__lp__eq__eq__rp_;
  kk_function_t _implicit_fs_hash;
};
extern kk_box_t kk_main__mlift_update_11226_fun8680(kk_function_t _fself, kk_context_t* _ctx);
static inline kk_function_t kk_main__new_mlift_update_11226_fun8680(kk_box_t key, kk_std_data_hashmap__hash_map map, kk_box_t value, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_context_t* _ctx) {
  struct kk_main__mlift_update_11226_fun8680__t* _self = kk_function_alloc_as(struct kk_main__mlift_update_11226_fun8680__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main__mlift_update_11226_fun8680, kk_context());
  _self->key = key;
  _self->map = map;
  _self->value = value;
  _self->_implicit_fs__lp__eq__eq__rp_ = _implicit_fs__lp__eq__eq__rp_;
  _self->_implicit_fs_hash = _implicit_fs_hash;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_main__mlift_update_11226_fun8684__t {
  struct kk_function_s _base;
};
extern bool kk_main__mlift_update_11226_fun8684(kk_function_t _fself, kk_integer_t _x1_x8682, kk_integer_t _x2_x8683, kk_context_t* _ctx);
static inline kk_function_t kk_main__new_mlift_update_11226_fun8684(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift_update_11226_fun8684, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main__mlift_update_11226_fun8687__t {
  struct kk_function_s _base;
};
extern kk_integer_t kk_main__mlift_update_11226_fun8687(kk_function_t _fself, kk_integer_t _x1_x8685, kk_integer_t _x2_x8686, kk_context_t* _ctx);
static inline kk_function_t kk_main__new_mlift_update_11226_fun8687(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift_update_11226_fun8687, _ctx)
  return kk_function_dup(_fself,kk_context());
}


static inline kk_std_data_hashmap__hash_map kk_main__mlift_update_11226(kk_box_t key, kk_std_data_hashmap__hash_map map, kk_box_t value, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_unit_t wild___1, kk_context_t* _ctx) { /* forall<a,b> (key : a, map : std/data/hashmap/hash-map<a,b>, value : b, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int, wild_@1 : ()) -> fixpoint std/data/hashmap/hash-map<a,b> */ 
  kk_box_t _x_x8679 = kk_std_core_hnd__open_none0(kk_main__new_mlift_update_11226_fun8680(key, map, value, _implicit_fs__lp__eq__eq__rp_, _implicit_fs_hash, _ctx), _ctx); /*1000*/
  return kk_std_data_hashmap__hash_map_unbox(_x_x8679, KK_OWNED, _ctx);
}

kk_std_data_hashmap__hash_map kk_main__mlift_update_11227(kk_box_t key, kk_std_data_hashmap__hash_map map, kk_box_t value, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_function_t _implicit_fs_show, kk_string_t _y_x10518, kk_context_t* _ctx); /* forall<a,b> (key : a, map : std/data/hashmap/hash-map<a,b>, value : b, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int, ?show : (b) -> string, string) -> fixpoint std/data/hashmap/hash-map<a,b> */ 

kk_std_data_hashmap__hash_map kk_main__mlift_update_11228(kk_box_t key, kk_std_data_hashmap__hash_map map, kk_box_t value, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_function_t _implicit_fs_show, bool _c_x10517, kk_context_t* _ctx); /* forall<a,b> (key : a, map : std/data/hashmap/hash-map<a,b>, value : b, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int, ?show : (b) -> string, bool) -> std/data/hashmap/hash-map<a,b> */ 

kk_std_data_hashmap__hash_map kk_main_update(kk_std_data_hashmap__hash_map map, kk_box_t key, kk_box_t value, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_function_t _implicit_fs_value_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_show, kk_context_t* _ctx); /* forall<a,b> (map : std/data/hashmap/hash-map<a,b>, key : a, value : b, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int, ?value/(==) : (b, b) -> bool, ?show : (b) -> string) -> fixpoint std/data/hashmap/hash-map<a,b> */ 

static inline kk_string_t kk_main_mapShow(kk_std_data_hashmap__hash_map map, kk_function_t _implicit_fs_keyShow, kk_function_t _implicit_fs_valueShow, kk_context_t* _ctx) { /* forall<a,b> (map : std/data/hashmap/hash-map<a,b>, ?keyShow : (a) -> string, ?valueShow : (b) -> string) -> string */ 
  return kk_main_hashmap_fs_show(map, _implicit_fs_keyShow, _implicit_fs_valueShow, _ctx);
}

kk_main__absValue kk_main__mlift_analyze_11229(kk_main__exp exp, kk_std_data_hashmap__hash_map _y_x10522, kk_context_t* _ctx); /* forall<h> (exp : exp, std/data/hashmap/hash-map<exp,absValue>) -> <local<h>,fixpoint,div,exn> absValue */ 

bool kk_main__mlift_analyze_11230(kk_main__exp exp_0, kk_std_data_hashmap__hash_map _y_x10523, kk_context_t* _ctx); /* forall<h> (exp@0 : exp, std/data/hashmap/hash-map<exp,bool>) -> <local<h>,fixpoint,div,exn> bool */ 

kk_std_data_hashmap__hash_map kk_main__mlift_analyze_11231(kk_main__exp exp_1, kk_std_data_hashmap__hash_map _y_x10524, kk_context_t* _ctx); /* forall<h> (exp@1 : exp, std/data/hashmap/hash-map<exp,store>) -> <local<h>,fixpoint,div,exn> store */ 

kk_std_core_types__list kk_main__mlift_analyze_11232(kk_main__exp exp_2, kk_std_data_hashmap__hash_map _y_x10525, kk_context_t* _ctx); /* forall<h> (exp@2 : exp, std/data/hashmap/hash-map<exp,list<path>>) -> <local<h>,fixpoint,div,exn> list<path> */ 

kk_std_data_hashmap__hash_map kk_main__mlift_analyze_11233(kk_main__exp exp_3, kk_std_data_hashmap__hash_map _y_x10526, kk_context_t* _ctx); /* forall<h> (exp@3 : exp, std/data/hashmap/hash-map<exp,store>) -> <local<h>,fixpoint,div,exn> store */ 

kk_std_data_hashset__hash_set kk_main__mlift_analyze_11234(kk_main__exp exp_4, kk_std_data_hashmap__hash_map _y_x10527, kk_context_t* _ctx); /* forall<h> (exp@4 : exp, std/data/hashmap/hash-map<exp,std/data/hashset/hash-set<path>>) -> <local<h>,fixpoint,div,exn> std/data/hashset/hash-set<path> */ 

kk_main__absOp kk_main__mlift_analyze_11235(kk_main__exp exp_5, kk_std_data_hashmap__hash_map _y_x10528, kk_context_t* _ctx); /* forall<h> (exp@5 : exp, std/data/hashmap/hash-map<exp,absOp>) -> <local<h>,fixpoint,div,exn> absOp */ 

kk_std_data_hashset__hash_set kk_main__mlift_analyze_11236(kk_main__exp exp_6, kk_std_data_hashmap__hash_map _y_x10529, kk_context_t* _ctx); /* forall<h> (exp@6 : exp, std/data/hashmap/hash-map<exp,std/data/hashset/hash-set<path>>) -> <local<h>,fixpoint,div,exn> std/data/hashset/hash-set<path> */ 
 
// monadic lift

static inline kk_unit_t kk_main__mlift_analyze_11237(kk_ref_t abstractValues, kk_std_data_hashmap__hash_map _y_x10531, kk_context_t* _ctx) { /* forall<h> (abstractValues : local-var<h,std/data/hashmap/hash-map<exp,absValue>>, std/data/hashmap/hash-map<exp,absValue>) -> <fixpoint,local<h>,div,exn> () */ 
  kk_unit_t _brw_x5553 = kk_Unit;
  kk_ref_set_borrow(abstractValues,(kk_std_data_hashmap__hash_map_box(_y_x10531, _ctx)),kk_context());
  kk_ref_drop(abstractValues, _ctx);
  _brw_x5553; return kk_Unit;
}

kk_unit_t kk_main__mlift_analyze_11238(kk_ref_t abstractValues, kk_main__absValue absValue, kk_main__exp exp_7, kk_std_data_hashmap__hash_map _y_x10530, kk_context_t* _ctx); /* forall<h> (abstractValues : local-var<h,std/data/hashmap/hash-map<exp,absValue>>, absValue : absValue, exp@7 : exp, std/data/hashmap/hash-map<exp,absValue>) -> <local<h>,fixpoint,div,exn> () */ 
 
// monadic lift

static inline kk_unit_t kk_main__mlift_analyze_11239(kk_ref_t dataDependences, kk_std_data_hashmap__hash_map _y_x10534, kk_context_t* _ctx) { /* forall<h> (dataDependences : local-var<h,std/data/hashmap/hash-map<exp,bool>>, std/data/hashmap/hash-map<exp,bool>) -> <fixpoint,local<h>,div,exn> () */ 
  kk_unit_t _brw_x5549 = kk_Unit;
  kk_ref_set_borrow(dataDependences,(kk_std_data_hashmap__hash_map_box(_y_x10534, _ctx)),kk_context());
  kk_ref_drop(dataDependences, _ctx);
  _brw_x5549; return kk_Unit;
}

kk_unit_t kk_main__mlift_analyze_11240(kk_ref_t dataDependences, bool dependence, kk_main__exp exp_8, kk_std_data_hashmap__hash_map _y_x10533, kk_context_t* _ctx); /* forall<h> (dataDependences : local-var<h,std/data/hashmap/hash-map<exp,bool>>, dependence : bool, exp@8 : exp, std/data/hashmap/hash-map<exp,bool>) -> <local<h>,fixpoint,div,exn> () */ 
 
// monadic lift

static inline kk_unit_t kk_main__mlift_analyze_11241(kk_ref_t inputStores, kk_std_data_hashmap__hash_map _y_x10537, kk_context_t* _ctx) { /* forall<h> (inputStores : local-var<h,std/data/hashmap/hash-map<exp,store>>, std/data/hashmap/hash-map<exp,store>) -> <fixpoint,local<h>,div,exn> () */ 
  kk_unit_t _brw_x5545 = kk_Unit;
  kk_ref_set_borrow(inputStores,(kk_std_data_hashmap__hash_map_box(_y_x10537, _ctx)),kk_context());
  kk_ref_drop(inputStores, _ctx);
  _brw_x5545; return kk_Unit;
}

kk_unit_t kk_main__mlift_analyze_11242(kk_main__exp exp_9, kk_std_data_hashmap__hash_map inputStore, kk_ref_t inputStores, kk_std_data_hashmap__hash_map _y_x10536, kk_context_t* _ctx); /* forall<h> (exp@9 : exp, inputStore : store, inputStores : local-var<h,std/data/hashmap/hash-map<exp,store>>, std/data/hashmap/hash-map<exp,store>) -> <local<h>,fixpoint,div,exn> () */ 
 
// monadic lift

static inline kk_unit_t kk_main__mlift_analyze_11243(kk_ref_t iteratorContexts, kk_std_data_hashmap__hash_map _y_x10540, kk_context_t* _ctx) { /* forall<h> (iteratorContexts : local-var<h,std/data/hashmap/hash-map<exp,list<path>>>, std/data/hashmap/hash-map<exp,list<path>>) -> <fixpoint,local<h>,div,exn> () */ 
  kk_unit_t _brw_x5541 = kk_Unit;
  kk_ref_set_borrow(iteratorContexts,(kk_std_data_hashmap__hash_map_box(_y_x10540, _ctx)),kk_context());
  kk_ref_drop(iteratorContexts, _ctx);
  _brw_x5541; return kk_Unit;
}

kk_unit_t kk_main__mlift_analyze_11244(kk_main__exp exp_10, kk_std_core_types__list iteratorContext, kk_ref_t iteratorContexts, kk_std_data_hashmap__hash_map _y_x10539, kk_context_t* _ctx); /* forall<h> (exp@10 : exp, iteratorContext : list<path>, iteratorContexts : local-var<h,std/data/hashmap/hash-map<exp,list<path>>>, std/data/hashmap/hash-map<exp,list<path>>) -> <local<h>,fixpoint,div,exn> () */ 
 
// monadic lift

static inline kk_unit_t kk_main__mlift_analyze_11245(kk_ref_t outputStores, kk_std_data_hashmap__hash_map _y_x10543, kk_context_t* _ctx) { /* forall<h> (outputStores : local-var<h,std/data/hashmap/hash-map<exp,store>>, std/data/hashmap/hash-map<exp,store>) -> <fixpoint,local<h>,div,exn> () */ 
  kk_unit_t _brw_x5537 = kk_Unit;
  kk_ref_set_borrow(outputStores,(kk_std_data_hashmap__hash_map_box(_y_x10543, _ctx)),kk_context());
  kk_ref_drop(outputStores, _ctx);
  _brw_x5537; return kk_Unit;
}

kk_unit_t kk_main__mlift_analyze_11246(kk_main__exp exp_11, kk_std_data_hashmap__hash_map outputStore, kk_ref_t outputStores, kk_std_data_hashmap__hash_map _y_x10542, kk_context_t* _ctx); /* forall<h> (exp@11 : exp, outputStore : store, outputStores : local-var<h,std/data/hashmap/hash-map<exp,store>>, std/data/hashmap/hash-map<exp,store>) -> <local<h>,fixpoint,div,exn> () */ 
 
// monadic lift

static inline kk_unit_t kk_main__mlift_analyze_11247(kk_ref_t pathsByExp, kk_std_data_hashmap__hash_map _y_x10546, kk_context_t* _ctx) { /* forall<h> (pathsByExp : local-var<h,std/data/hashmap/hash-map<exp,std/data/hashset/hash-set<path>>>, std/data/hashmap/hash-map<exp,std/data/hashset/hash-set<path>>) -> <fixpoint,local<h>,div,exn> () */ 
  kk_unit_t _brw_x5533 = kk_Unit;
  kk_ref_set_borrow(pathsByExp,(kk_std_data_hashmap__hash_map_box(_y_x10546, _ctx)),kk_context());
  kk_ref_drop(pathsByExp, _ctx);
  _brw_x5533; return kk_Unit;
}

kk_unit_t kk_main__mlift_analyze_11248(kk_main__exp exp_12, kk_std_data_hashset__hash_set paths, kk_ref_t pathsByExp, kk_std_data_hashmap__hash_map _y_x10545, kk_context_t* _ctx); /* forall<h> (exp@12 : exp, paths : std/data/hashset/hash-set<path>, pathsByExp : local-var<h,std/data/hashmap/hash-map<exp,std/data/hashset/hash-set<path>>>, std/data/hashmap/hash-map<exp,std/data/hashset/hash-set<path>>) -> <local<h>,fixpoint,div,exn> () */ 
 
// monadic lift

static inline kk_unit_t kk_main__mlift_analyze_11249(kk_ref_t queryConditions, kk_std_data_hashmap__hash_map _y_x10549, kk_context_t* _ctx) { /* forall<h> (queryConditions : local-var<h,std/data/hashmap/hash-map<exp,absOp>>, std/data/hashmap/hash-map<exp,absOp>) -> <fixpoint,local<h>,div,exn> () */ 
  kk_unit_t _brw_x5529 = kk_Unit;
  kk_ref_set_borrow(queryConditions,(kk_std_data_hashmap__hash_map_box(_y_x10549, _ctx)),kk_context());
  kk_ref_drop(queryConditions, _ctx);
  _brw_x5529; return kk_Unit;
}

kk_unit_t kk_main__mlift_analyze_11250(kk_main__exp exp_13, kk_main__absOp queryCondition, kk_ref_t queryConditions, kk_std_data_hashmap__hash_map _y_x10548, kk_context_t* _ctx); /* forall<h> (exp@13 : exp, queryCondition : absOp, queryConditions : local-var<h,std/data/hashmap/hash-map<exp,absOp>>, std/data/hashmap/hash-map<exp,absOp>) -> <local<h>,fixpoint,div,exn> () */ 
 
// monadic lift

static inline kk_unit_t kk_main__mlift_analyze_11251(kk_ref_t traversalSummaries, kk_std_data_hashmap__hash_map _y_x10552, kk_context_t* _ctx) { /* forall<h> (traversalSummaries : local-var<h,std/data/hashmap/hash-map<exp,std/data/hashset/hash-set<path>>>, std/data/hashmap/hash-map<exp,std/data/hashset/hash-set<path>>) -> <fixpoint,local<h>,div,exn> () */ 
  kk_unit_t _brw_x5525 = kk_Unit;
  kk_ref_set_borrow(traversalSummaries,(kk_std_data_hashmap__hash_map_box(_y_x10552, _ctx)),kk_context());
  kk_ref_drop(traversalSummaries, _ctx);
  _brw_x5525; return kk_Unit;
}

kk_unit_t kk_main__mlift_analyze_11252(kk_main__exp exp_14, kk_ref_t traversalSummaries, kk_std_data_hashset__hash_set traversalSummary, kk_std_data_hashmap__hash_map _y_x10551, kk_context_t* _ctx); /* forall<h> (exp@14 : exp, traversalSummaries : local-var<h,std/data/hashmap/hash-map<exp,std/data/hashset/hash-set<path>>>, traversalSummary : std/data/hashset/hash-set<path>, std/data/hashmap/hash-map<exp,std/data/hashset/hash-set<path>>) -> <local<h>,fixpoint,div,exn> () */ 

kk_std_data_hashset__hash_set kk_main__mlift_analyze_11253(kk_main__exp root, kk_unit_t _c_x10563, kk_context_t* _ctx); /* forall<h> (root : exp, ()) -> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_analyze_11254(kk_main__exp root, kk_integer_t _y_x10562, kk_context_t* _ctx); /* forall<h> (root : exp, int) -> <local<h>,attrGrammar,div,exn,fixpoint> std/data/hashset/hash-set<path> */ 
 
// monadic lift

static inline bool kk_main__mlift_analyze_11255(kk_integer_t _y_x10555, kk_context_t* _ctx) { /* forall<h> (int) -> <local<h>,div,attrGrammar,exn,fixpoint> bool */ 
  bool _brw_x5518 = kk_integer_gt_borrow(_y_x10555,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_y_x10555, _ctx);
  return _brw_x5518;
}

bool kk_main__mlift_analyze_11256(kk_ref_t gas, bool _y_x10554, kk_context_t* _ctx); /* forall<h> (gas : local-var<h,int>, bool) -> <local<h>,div,attrGrammar,exn,fixpoint> bool */ 

kk_unit_t kk_main__mlift_analyze_11257(kk_main__exp root, kk_unit_t wild___0, kk_context_t* _ctx); /* forall<h> (root : exp, wild_@0 : ()) -> <local<h>,attrGrammar,div,exn,fixpoint> () */ 

kk_unit_t kk_main__mlift_analyze_11258(kk_ref_t gas, kk_main__exp root, kk_integer_t _y_x10558, kk_context_t* _ctx); /* forall<h> (gas : local-var<h,int>, root : exp, int) -> <local<h>,attrGrammar,div,exn,fixpoint> () */ 

kk_unit_t kk_main__mlift_analyze_11259(kk_ref_t gas, kk_main__exp root, kk_unit_t wild__, kk_context_t* _ctx); /* forall<h> (gas : local-var<h,int>, root : exp, wild_ : ()) -> <local<h>,attrGrammar,div,exn,fixpoint> () */ 

kk_std_data_hashset__hash_set kk_main__mlift_analyze_11260(kk_ref_t gas, kk_main__exp root, kk_unit_t wild___1, kk_context_t* _ctx); /* forall<h> (gas : local-var<h,int>, root : exp, wild_@1 : ()) -> <div,local<h>,attrGrammar,exn,fixpoint> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main_analyze(kk_main__exp root, kk_context_t* _ctx); /* (root : exp) -> pure std/data/hashset/hash-set<path> */ 

extern kk_main__exp kk_main_line1;

extern kk_main__exp kk_main_paperExample;

kk_unit_t kk_main__mlift_check_11261(kk_box_t expected, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_show, kk_std_core_exn__error _y_x10579, kk_context_t* _ctx); /* forall<a,e> (expected : a, ?(==) : (a, a) -> div bool, ?show : (a) -> div string, error<a>) -> <console/console,div|e> () */ 

kk_unit_t kk_main_check(kk_box_t expected, kk_function_t f, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_string_t _implicit_fs_kk_file_line, kk_function_t _implicit_fs_show, kk_context_t* _ctx); /* forall<a,e> (expected : a, f : () -> <console/console,pure|e> a, ?(==) : (a, a) -> div bool, ?kk-file-line : string, ?show : (a) -> div string) -> <console/console,div|e> () */ 

kk_unit_t kk_main__mlift_main_11262(kk_std_data_hashset__hash_set _y_x10582, kk_context_t* _ctx); /* (std/data/hashset/hash-set<path>) -> pure () */ 

kk_unit_t kk_main_main(kk_context_t* _ctx); /* () -> <pure,console/console> () */ 

void kk_main__init(kk_context_t* _ctx);


void kk_main__done(kk_context_t* _ctx);

#endif // header
