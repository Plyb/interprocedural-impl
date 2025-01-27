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
typedef kk_datatype_t kk_main__exp;
struct kk_main_LitE {
  struct kk_main__exp_s _base;
  kk_main__literal lit;
};
struct kk_main_DotE {
  struct kk_main__exp_s _base;
  kk_main__exp e;
  kk_main__fieldName f;
};
struct kk_main_OpE {
  struct kk_main__exp_s _base;
  kk_main__exp lhs;
  kk_main__exp rhs;
  kk_main__op op;
};
struct kk_main_VarE {
  struct kk_main__exp_s _base;
  kk_main__varName v;
};
struct kk_main_AsgnE {
  struct kk_main__exp_s _base;
  kk_main__varName v;
  kk_main__exp rhs;
};
struct kk_main_IfE {
  struct kk_main__exp_s _base;
  kk_main__exp cont;
  kk_main__exp thn;
  kk_main__exp els;
};
struct kk_main_ForE {
  struct kk_main__exp_s _base;
  kk_main__varName v;
  kk_main__exp from;
  kk_main__exp body;
};
struct kk_main_SeqE {
  struct kk_main__exp_s _base;
  kk_main__exp first;
  kk_main__exp second;
};
struct kk_main_PrintE {
  struct kk_main__exp_s _base;
  kk_main__exp e;
};
static inline kk_main__exp kk_main__new_NullE(kk_context_t* _ctx) {
  return kk_datatype_from_tag((kk_tag_t)(1));
}
static inline kk_main__exp kk_main__new_RootE(kk_context_t* _ctx) {
  return kk_datatype_from_tag((kk_tag_t)(3));
}
static inline kk_main__exp kk_main__base_LitE(struct kk_main_LitE* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__exp kk_main__new_LitE(kk_reuse_t _at, int32_t _cpath, kk_main__literal lit, kk_context_t* _ctx) {
  struct kk_main_LitE* _con = kk_block_alloc_at_as(struct kk_main_LitE, _at, 2 /* scan count */, _cpath, (kk_tag_t)(2), _ctx);
  _con->lit = lit;
  return kk_main__base_LitE(_con, _ctx);
}
static inline struct kk_main_LitE* kk_main__as_LitE(kk_main__exp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_LitE*, x, (kk_tag_t)(2), _ctx);
}
static inline kk_main__exp kk_main__base_VarE(struct kk_main_VarE* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__exp kk_main__new_VarE(kk_reuse_t _at, int32_t _cpath, kk_main__varName v, kk_context_t* _ctx) {
  struct kk_main_VarE* _con = kk_block_alloc_at_as(struct kk_main_VarE, _at, 1 /* scan count */, _cpath, (kk_tag_t)(6), _ctx);
  _con->v = v;
  return kk_main__base_VarE(_con, _ctx);
}
static inline struct kk_main_VarE* kk_main__as_VarE(kk_main__exp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_VarE*, x, (kk_tag_t)(6), _ctx);
}
static inline kk_main__exp kk_main__base_PrintE(struct kk_main_PrintE* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__exp kk_main__new_PrintE(kk_reuse_t _at, int32_t _cpath, kk_main__exp e, kk_context_t* _ctx) {
  struct kk_main_PrintE* _con = kk_block_alloc_at_as(struct kk_main_PrintE, _at, 1 /* scan count */, _cpath, (kk_tag_t)(11), _ctx);
  _con->e = e;
  return kk_main__base_PrintE(_con, _ctx);
}
static inline struct kk_main_PrintE* kk_main__as_PrintE(kk_main__exp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_PrintE*, x, (kk_tag_t)(11), _ctx);
}
static inline kk_main__exp kk_main__base_DotE(struct kk_main_DotE* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__exp kk_main__new_DotE(kk_reuse_t _at, int32_t _cpath, kk_main__exp e, kk_main__fieldName f, kk_context_t* _ctx) {
  struct kk_main_DotE* _con = kk_block_alloc_at_as(struct kk_main_DotE, _at, 3 /* scan count */, _cpath, (kk_tag_t)(4), _ctx);
  _con->e = e;
  _con->f = f;
  return kk_main__base_DotE(_con, _ctx);
}
static inline struct kk_main_DotE* kk_main__as_DotE(kk_main__exp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_DotE*, x, (kk_tag_t)(4), _ctx);
}
static inline kk_main__exp kk_main__base_AsgnE(struct kk_main_AsgnE* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__exp kk_main__new_AsgnE(kk_reuse_t _at, int32_t _cpath, kk_main__varName v, kk_main__exp rhs, kk_context_t* _ctx) {
  struct kk_main_AsgnE* _con = kk_block_alloc_at_as(struct kk_main_AsgnE, _at, 2 /* scan count */, _cpath, (kk_tag_t)(7), _ctx);
  _con->v = v;
  _con->rhs = rhs;
  return kk_main__base_AsgnE(_con, _ctx);
}
static inline struct kk_main_AsgnE* kk_main__as_AsgnE(kk_main__exp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_AsgnE*, x, (kk_tag_t)(7), _ctx);
}
static inline kk_main__exp kk_main__base_SeqE(struct kk_main_SeqE* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__exp kk_main__new_SeqE(kk_reuse_t _at, int32_t _cpath, kk_main__exp first, kk_main__exp second, kk_context_t* _ctx) {
  struct kk_main_SeqE* _con = kk_block_alloc_at_as(struct kk_main_SeqE, _at, 2 /* scan count */, _cpath, (kk_tag_t)(10), _ctx);
  _con->first = first;
  _con->second = second;
  return kk_main__base_SeqE(_con, _ctx);
}
static inline struct kk_main_SeqE* kk_main__as_SeqE(kk_main__exp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_SeqE*, x, (kk_tag_t)(10), _ctx);
}
static inline kk_main__exp kk_main__base_OpE(struct kk_main_OpE* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__exp kk_main__new_OpE(kk_reuse_t _at, int32_t _cpath, kk_main__op op, kk_main__exp lhs, kk_main__exp rhs, kk_context_t* _ctx) {
  struct kk_main_OpE* _con = kk_block_alloc_at_as(struct kk_main_OpE, _at, 2 /* scan count */, _cpath, (kk_tag_t)(5), _ctx);
  _con->lhs = lhs;
  _con->rhs = rhs;
  _con->op = op;
  return kk_main__base_OpE(_con, _ctx);
}
static inline struct kk_main_OpE* kk_main__as_OpE(kk_main__exp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_OpE*, x, (kk_tag_t)(5), _ctx);
}
static inline kk_main__exp kk_main__base_IfE(struct kk_main_IfE* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__exp kk_main__new_IfE(kk_reuse_t _at, int32_t _cpath, kk_main__exp cont, kk_main__exp thn, kk_main__exp els, kk_context_t* _ctx) {
  struct kk_main_IfE* _con = kk_block_alloc_at_as(struct kk_main_IfE, _at, 3 /* scan count */, _cpath, (kk_tag_t)(8), _ctx);
  _con->cont = cont;
  _con->thn = thn;
  _con->els = els;
  return kk_main__base_IfE(_con, _ctx);
}
static inline struct kk_main_IfE* kk_main__as_IfE(kk_main__exp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_IfE*, x, (kk_tag_t)(8), _ctx);
}
static inline kk_main__exp kk_main__base_ForE(struct kk_main_ForE* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_main__exp kk_main__new_ForE(kk_reuse_t _at, int32_t _cpath, kk_main__varName v, kk_main__exp from, kk_main__exp body, kk_context_t* _ctx) {
  struct kk_main_ForE* _con = kk_block_alloc_at_as(struct kk_main_ForE, _at, 3 /* scan count */, _cpath, (kk_tag_t)(9), _ctx);
  _con->v = v;
  _con->from = from;
  _con->body = body;
  return kk_main__base_ForE(_con, _ctx);
}
static inline struct kk_main_ForE* kk_main__as_ForE(kk_main__exp x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_main_ForE*, x, (kk_tag_t)(9), _ctx);
}
static inline bool kk_main__is_NullE(kk_main__exp x, kk_context_t* _ctx) {
  return (kk_datatype_has_singleton_tag(x, (kk_tag_t)(1)));
}
static inline bool kk_main__is_RootE(kk_main__exp x, kk_context_t* _ctx) {
  return (kk_datatype_has_singleton_tag(x, (kk_tag_t)(3)));
}
static inline bool kk_main__is_LitE(kk_main__exp x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(2), _ctx));
}
static inline bool kk_main__is_VarE(kk_main__exp x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(6), _ctx));
}
static inline bool kk_main__is_PrintE(kk_main__exp x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(11), _ctx));
}
static inline bool kk_main__is_DotE(kk_main__exp x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(4), _ctx));
}
static inline bool kk_main__is_AsgnE(kk_main__exp x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(7), _ctx));
}
static inline bool kk_main__is_SeqE(kk_main__exp x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(10), _ctx));
}
static inline bool kk_main__is_OpE(kk_main__exp x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(5), _ctx));
}
static inline bool kk_main__is_IfE(kk_main__exp x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(8), _ctx));
}
static inline bool kk_main__is_ForE(kk_main__exp x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(9), _ctx));
}
static inline kk_main__exp kk_main__exp_dup(kk_main__exp _x, kk_context_t* _ctx) {
  return kk_datatype_dup(_x, _ctx);
}
static inline void kk_main__exp_drop(kk_main__exp _x, kk_context_t* _ctx) {
  kk_datatype_drop(_x, _ctx);
}
static inline kk_box_t kk_main__exp_box(kk_main__exp _x, kk_context_t* _ctx) {
  return kk_datatype_box(_x);
}
static inline kk_main__exp kk_main__exp_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
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
    struct kk_main_AOOp* _con_x5962 = kk_main__as_AOOp(absOp, _ctx);
    return false;
  }
}
 
// Automatically generated. Tests for the `AOOp` constructor of the `:absOp` type.

static inline bool kk_main_is_aoop(kk_main__absOp absOp, kk_context_t* _ctx) { /* (absOp : absOp) -> bool */ 
  if (kk_main__is_AOOp(absOp, _ctx)) {
    struct kk_main_AOOp* _con_x5963 = kk_main__as_AOOp(absOp, _ctx);
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
    struct kk_main_AVLit* _con_x5964 = kk_main__as_AVLit(absValue, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `AVOp` constructor of the `:absValue` type.

static inline bool kk_main_is_avop(kk_main__absValue absValue, kk_context_t* _ctx) { /* (absValue : absValue) -> bool */ 
  if (kk_main__is_AVOp(absValue, _ctx)) {
    struct kk_main_AVOp* _con_x5965 = kk_main__as_AVOp(absValue, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `AVPath` constructor of the `:absValue` type.

static inline bool kk_main_is_avpath(kk_main__absValue absValue, kk_context_t* _ctx) { /* (absValue : absValue) -> bool */ 
  if (kk_main__is_AVPath(absValue, _ctx)) {
    struct kk_main_AVPath* _con_x5966 = kk_main__as_AVPath(absValue, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Retrieves the `names` constructor field of the `:path` type.

static inline kk_std_core_types__list kk_main_path_fs_names(kk_main__path path, kk_context_t* _ctx) { /* (path : path) -> list<fieldName> */ 
  {
    struct kk_main_Path* _con_x5967 = kk_main__as_Path(path, _ctx);
    kk_std_core_types__list _x = _con_x5967->names;
    return kk_std_core_types__list_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `absOp` constructor field of the `:path` type.

static inline kk_main__absOp kk_main_path_fs_absOp(kk_main__path path, kk_context_t* _ctx) { /* (path : path) -> absOp */ 
  {
    struct kk_main_Path* _con_x5968 = kk_main__as_Path(path, _ctx);
    kk_main__absOp _x = _con_x5968->absOp;
    return kk_main__absOp_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `dependence` constructor field of the `:path` type.

static inline bool kk_main_path_fs_dependence(kk_main__path path, kk_context_t* _ctx) { /* (path : path) -> bool */ 
  {
    struct kk_main_Path* _con_x5969 = kk_main__as_Path(path, _ctx);
    bool _x = _con_x5969->dependence;
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
 
// Automatically generated. Tests for the `NullE` constructor of the `:exp` type.

static inline bool kk_main_is_nullE(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> bool */ 
  if (kk_main__is_NullE(exp, _ctx)) {
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `LitE` constructor of the `:exp` type.

static inline bool kk_main_is_litE(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> bool */ 
  if (kk_main__is_LitE(exp, _ctx)) {
    struct kk_main_LitE* _con_x5977 = kk_main__as_LitE(exp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `RootE` constructor of the `:exp` type.

static inline bool kk_main_is_rootE(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> bool */ 
  if (kk_main__is_RootE(exp, _ctx)) {
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `DotE` constructor of the `:exp` type.

static inline bool kk_main_is_dotE(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> bool */ 
  if (kk_main__is_DotE(exp, _ctx)) {
    struct kk_main_DotE* _con_x5978 = kk_main__as_DotE(exp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `OpE` constructor of the `:exp` type.

static inline bool kk_main_is_opE(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> bool */ 
  if (kk_main__is_OpE(exp, _ctx)) {
    struct kk_main_OpE* _con_x5979 = kk_main__as_OpE(exp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `VarE` constructor of the `:exp` type.

static inline bool kk_main_is_varE(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> bool */ 
  if (kk_main__is_VarE(exp, _ctx)) {
    struct kk_main_VarE* _con_x5980 = kk_main__as_VarE(exp, _ctx);
    kk_main__varName _pat_0 = _con_x5980->v;
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `AsgnE` constructor of the `:exp` type.

static inline bool kk_main_is_asgnE(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> bool */ 
  if (kk_main__is_AsgnE(exp, _ctx)) {
    struct kk_main_AsgnE* _con_x5981 = kk_main__as_AsgnE(exp, _ctx);
    kk_main__varName _pat_0 = _con_x5981->v;
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `IfE` constructor of the `:exp` type.

static inline bool kk_main_is_ifE(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> bool */ 
  if (kk_main__is_IfE(exp, _ctx)) {
    struct kk_main_IfE* _con_x5982 = kk_main__as_IfE(exp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `ForE` constructor of the `:exp` type.

static inline bool kk_main_is_forE(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> bool */ 
  if (kk_main__is_ForE(exp, _ctx)) {
    struct kk_main_ForE* _con_x5983 = kk_main__as_ForE(exp, _ctx);
    kk_main__varName _pat_0 = _con_x5983->v;
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `SeqE` constructor of the `:exp` type.

static inline bool kk_main_is_seqE(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> bool */ 
  if (kk_main__is_SeqE(exp, _ctx)) {
    struct kk_main_SeqE* _con_x5984 = kk_main__as_SeqE(exp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `PrintE` constructor of the `:exp` type.

static inline bool kk_main_is_printE(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> bool */ 
  if (kk_main__is_PrintE(exp, _ctx)) {
    struct kk_main_PrintE* _con_x5985 = kk_main__as_PrintE(exp, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Retrieves the `@cfc` constructor field of the `:attrGrammar` type.

static inline kk_integer_t kk_main_attrGrammar_fs__cfc(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> int */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x5986 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_integer_t _x = _con_x5986->_cfc;
    return kk_integer_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-getAbstractValue` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause1 kk_main_attrGrammar_fs__fun_getAbstractValue(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause1<exp,absValue,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x5987 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause1 _x = _con_x5987->_fun_getAbstractValue;
    return kk_std_core_hnd__clause1_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-getDataDependence` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause1 kk_main_attrGrammar_fs__fun_getDataDependence(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause1<exp,bool,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x5988 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause1 _x = _con_x5988->_fun_getDataDependence;
    return kk_std_core_hnd__clause1_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-getInputStore` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause1 kk_main_attrGrammar_fs__fun_getInputStore(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause1<exp,store,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x5989 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause1 _x = _con_x5989->_fun_getInputStore;
    return kk_std_core_hnd__clause1_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-getIteratorContext` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause1 kk_main_attrGrammar_fs__fun_getIteratorContext(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause1<exp,list<path>,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x5990 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause1 _x = _con_x5990->_fun_getIteratorContext;
    return kk_std_core_hnd__clause1_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-getOutputStore` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause1 kk_main_attrGrammar_fs__fun_getOutputStore(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause1<exp,store,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x5991 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause1 _x = _con_x5991->_fun_getOutputStore;
    return kk_std_core_hnd__clause1_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-getPaths` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause1 kk_main_attrGrammar_fs__fun_getPaths(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause1<exp,std/data/hashset/hash-set<path>,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x5992 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause1 _x = _con_x5992->_fun_getPaths;
    return kk_std_core_hnd__clause1_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-getQueryCondition` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause1 kk_main_attrGrammar_fs__fun_getQueryCondition(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause1<exp,absOp,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x5993 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause1 _x = _con_x5993->_fun_getQueryCondition;
    return kk_std_core_hnd__clause1_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-getTraversalSummary` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause1 kk_main_attrGrammar_fs__fun_getTraversalSummary(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause1<exp,std/data/hashset/hash-set<path>,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x5994 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause1 _x = _con_x5994->_fun_getTraversalSummary;
    return kk_std_core_hnd__clause1_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-setAbstractValue` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause2 kk_main_attrGrammar_fs__fun_setAbstractValue(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause2<exp,absValue,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x5995 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause2 _x = _con_x5995->_fun_setAbstractValue;
    return kk_std_core_hnd__clause2_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-setDataDependence` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause2 kk_main_attrGrammar_fs__fun_setDataDependence(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause2<exp,bool,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x5996 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause2 _x = _con_x5996->_fun_setDataDependence;
    return kk_std_core_hnd__clause2_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-setInputStore` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause2 kk_main_attrGrammar_fs__fun_setInputStore(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause2<exp,store,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x5997 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause2 _x = _con_x5997->_fun_setInputStore;
    return kk_std_core_hnd__clause2_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-setIteratorContext` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause2 kk_main_attrGrammar_fs__fun_setIteratorContext(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause2<exp,list<path>,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x5998 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause2 _x = _con_x5998->_fun_setIteratorContext;
    return kk_std_core_hnd__clause2_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-setOutputStore` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause2 kk_main_attrGrammar_fs__fun_setOutputStore(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause2<exp,store,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x5999 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause2 _x = _con_x5999->_fun_setOutputStore;
    return kk_std_core_hnd__clause2_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-setPaths` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause2 kk_main_attrGrammar_fs__fun_setPaths(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause2<exp,std/data/hashset/hash-set<path>,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6000 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause2 _x = _con_x6000->_fun_setPaths;
    return kk_std_core_hnd__clause2_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-setQueryCondition` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause2 kk_main_attrGrammar_fs__fun_setQueryCondition(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause2<exp,absOp,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6001 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause2 _x = _con_x6001->_fun_setQueryCondition;
    return kk_std_core_hnd__clause2_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-setTraversalSummary` constructor field of the `:attrGrammar` type.

static inline kk_std_core_hnd__clause2 kk_main_attrGrammar_fs__fun_setTraversalSummary(kk_main__attrGrammar attrGrammar, kk_context_t* _ctx) { /* forall<e,a> (attrGrammar : attrGrammar<e,a>) -> hnd/clause2<exp,std/data/hashset/hash-set<path>,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6002 = kk_main__as_Hnd_attrGrammar(attrGrammar, _ctx);
    kk_std_core_hnd__clause2 _x = _con_x6002->_fun_setTraversalSummary;
    return kk_std_core_hnd__clause2_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@cfc` constructor field of the `:fixpoint` type.

static inline kk_integer_t kk_main_fixpoint_fs__cfc(kk_main__fixpoint fixpoint, kk_context_t* _ctx) { /* forall<e,a> (fixpoint : fixpoint<e,a>) -> int */ 
  {
    struct kk_main__Hnd_fixpoint* _con_x6003 = kk_main__as_Hnd_fixpoint(fixpoint, _ctx);
    kk_integer_t _x = _con_x6003->_cfc;
    return kk_integer_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-modified` constructor field of the `:fixpoint` type.

static inline kk_std_core_hnd__clause0 kk_main_fixpoint_fs__fun_modified(kk_main__fixpoint fixpoint, kk_context_t* _ctx) { /* forall<e,a> (fixpoint : fixpoint<e,a>) -> hnd/clause0<(),fixpoint,e,a> */ 
  {
    struct kk_main__Hnd_fixpoint* _con_x6004 = kk_main__as_Hnd_fixpoint(fixpoint, _ctx);
    kk_std_core_hnd__clause0 _x = _con_x6004->_fun_modified;
    return kk_std_core_hnd__clause0_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@cfc` constructor field of the `:nondet` type.

static inline kk_integer_t kk_main_nondet_fs__cfc(kk_main__nondet nondet, kk_context_t* _ctx) { /* forall<e,a> (nondet : nondet<e,a>) -> int */ 
  {
    struct kk_main__Hnd_nondet* _con_x6005 = kk_main__as_Hnd_nondet(nondet, _ctx);
    kk_integer_t _x = _con_x6005->_cfc;
    return kk_integer_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@ctl-choose` constructor field of the `:nondet` type.

static inline kk_std_core_hnd__clause2 kk_main_nondet_fs__ctl_choose(kk_main__nondet nondet, kk_context_t* _ctx) { /* forall<e,a,b> (nondet : nondet<e,a>) -> hnd/clause2<b,b,b,nondet,e,a> */ 
  {
    struct kk_main__Hnd_nondet* _con_x6006 = kk_main__as_Hnd_nondet(nondet, _ctx);
    kk_std_core_hnd__clause2 _x = _con_x6006->_ctl_choose;
    return kk_std_core_hnd__clause2_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@brk-fail` constructor field of the `:nondet` type.

static inline kk_std_core_hnd__clause0 kk_main_nondet_fs__brk_fail(kk_main__nondet nondet, kk_context_t* _ctx) { /* forall<e,a,b> (nondet : nondet<e,a>) -> hnd/clause0<b,nondet,e,a> */ 
  {
    struct kk_main__Hnd_nondet* _con_x6007 = kk_main__as_Hnd_nondet(nondet, _ctx);
    kk_std_core_hnd__clause0 _x = _con_x6007->_brk_fail;
    return kk_std_core_hnd__clause0_dup(_x, _ctx);
  }
}

kk_std_core_types__list kk_main_hashset_fs_list(kk_std_data_hashset__hash_set set, kk_context_t* _ctx); /* forall<a> (set : std/data/hashset/hash-set<a>) -> list<a> */ 

static inline kk_string_t kk_main_fieldName_fs_show(kk_main__fieldName fieldName, kk_context_t* _ctx) { /* (fieldName : fieldName) -> string */ 
  if (kk_main__is_FNNamed(fieldName, _ctx)) {
    kk_string_t name = fieldName._cons.FNNamed.name;
    kk_string_t _x_x6016;
    kk_define_string_literal(, _s_x6017, 8, "FNNamed(", _ctx)
    _x_x6016 = kk_string_dup(_s_x6017, _ctx); /*string*/
    kk_string_t _x_x6018;
    kk_string_t _x_x6019;
    kk_define_string_literal(, _s_x6020, 1, ")", _ctx)
    _x_x6019 = kk_string_dup(_s_x6020, _ctx); /*string*/
    _x_x6018 = kk_std_core_types__lp__plus__plus__rp_(name, _x_x6019, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x6016, _x_x6018, _ctx);
  }
  {
    kk_define_string_literal(, _s_x6021, 3, "FNL", _ctx)
    return kk_string_dup(_s_x6021, _ctx);
  }
}

static inline kk_string_t kk_main_varName_fs_show(kk_main__varName varName, kk_context_t* _ctx) { /* (varName : varName) -> string */ 
  kk_string_t _x_x6022;
  kk_define_string_literal(, _s_x6023, 8, "VarName(", _ctx)
  _x_x6022 = kk_string_dup(_s_x6023, _ctx); /*string*/
  kk_string_t _x_x6024;
  kk_string_t _x_x6025;
  {
    kk_string_t _x = varName.name;
    _x_x6025 = _x; /*string*/
  }
  kk_string_t _x_x6026;
  kk_define_string_literal(, _s_x6027, 1, ")", _ctx)
  _x_x6026 = kk_string_dup(_s_x6027, _ctx); /*string*/
  _x_x6024 = kk_std_core_types__lp__plus__plus__rp_(_x_x6025, _x_x6026, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x6022, _x_x6024, _ctx);
}

static inline kk_string_t kk_main_op_fs_show(kk_main__op op, kk_context_t* _ctx) { /* (op : op) -> string */ 
  if (kk_main__is_AndOp(op, _ctx)) {
    kk_define_string_literal(, _s_x6028, 5, "AndOp", _ctx)
    return kk_string_dup(_s_x6028, _ctx);
  }
  if (kk_main__is_NotOp(op, _ctx)) {
    kk_define_string_literal(, _s_x6029, 5, "NotOp", _ctx)
    return kk_string_dup(_s_x6029, _ctx);
  }
  if (kk_main__is_EqOp(op, _ctx)) {
    kk_define_string_literal(, _s_x6030, 4, "EqOp", _ctx)
    return kk_string_dup(_s_x6030, _ctx);
  }
  if (kk_main__is_GtOp(op, _ctx)) {
    kk_define_string_literal(, _s_x6031, 4, "GtOp", _ctx)
    return kk_string_dup(_s_x6031, _ctx);
  }
  {
    kk_define_string_literal(, _s_x6032, 6, "PlusOp", _ctx)
    return kk_string_dup(_s_x6032, _ctx);
  }
}

static inline kk_string_t kk_main_hashset_fs_show(kk_std_data_hashset__hash_set set, kk_function_t _implicit_fs_show, kk_context_t* _ctx) { /* forall<a> (set : std/data/hashset/hash-set<a>, ?show : (a) -> string) -> string */ 
  kk_std_core_types__list _x_x6033 = kk_main_hashset_fs_list(set, _ctx); /*list<1732>*/
  return kk_std_core_list_show(_x_x6033, _implicit_fs_show, _ctx);
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

static inline kk_string_t kk_main_path_fs_show(kk_main__path path, kk_context_t* _ctx) { /* (path : path) -> string */ 
  return kk_main_path_fs_showDiv(path, _ctx);
}


// lift anonymous function
struct kk_main_store_fs_show_fun6143__t {
  struct kk_function_s _base;
};
extern kk_string_t kk_main_store_fs_show_fun6143(kk_function_t _fself, kk_box_t _b_x60, kk_context_t* _ctx);
static inline kk_function_t kk_main_store_fs_new_show_fun6143(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_store_fs_show_fun6143, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main_store_fs_show_fun6145__t {
  struct kk_function_s _base;
};
extern kk_string_t kk_main_store_fs_show_fun6145(kk_function_t _fself, kk_box_t _b_x61, kk_context_t* _ctx);
static inline kk_function_t kk_main_store_fs_new_show_fun6145(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_store_fs_show_fun6145, _ctx)
  return kk_function_dup(_fself,kk_context());
}


static inline kk_string_t kk_main_store_fs_show(kk_std_data_hashmap__hash_map store, kk_context_t* _ctx) { /* (store : store) -> string */ 
  return kk_main_hashmap_fs_show(store, kk_main_store_fs_new_show_fun6143(_ctx), kk_main_store_fs_new_show_fun6145(_ctx), _ctx);
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
  kk_std_core_types__list _x_x6147 = kk_main_hashset_fs_list(a, _ctx); /*list<1732>*/
  kk_std_core_types__list _x_x6148 = kk_main_hashset_fs_list(b, _ctx); /*list<1732>*/
  return kk_std_core_list__lp__eq__eq__rp_(_x_x6147, _x_x6148, _implicit_fs__lp__eq__eq__rp_, _ctx);
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
  kk_string_t _x_x6183;
  {
    kk_string_t _x = a.name;
    _x_x6183 = _x; /*string*/
  }
  kk_string_t _x_x6184;
  {
    kk_string_t _x_0 = b.name;
    _x_x6184 = _x_0; /*string*/
  }
  return kk_string_is_eq(_x_x6183,_x_x6184,kk_context());
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
  kk_std_core_types__list xs_10069 = kk_main_hashset_fs_list(a, _ctx); /*list<4563>*/;
  kk_std_core_types__list ys_10070 = kk_main_hashset_fs_list(b, _ctx); /*list<4563>*/;
  kk_std_core_types__list _x_x6218 = kk_std_core_list_append(xs_10069, ys_10070, _ctx); /*list<6564>*/
  return kk_std_data_hashset_thread_fs_list_fs_hash_set(_x_x6218, _implicit_fs_hash, _implicit_fs__lp__eq__eq__rp_, _ctx);
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
  kk_string_t _x_x6240;
  {
    kk_string_t _x = varName.name;
    _x_x6240 = _x; /*string*/
  }
  return kk_string_hash(_x_x6240,x,kk_context());
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
    struct kk_main__Hnd_attrGrammar* _con_x6258 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause1 _fun_getAbstractValue = _con_x6258->_fun_getAbstractValue;
    return kk_std_core_hnd__clause1_dup(_fun_getAbstractValue, _ctx);
  }
}
 
// Call the `fun getAbstractValue` operation of the effect `:attrGrammar`

static inline kk_main__absValue kk_main_getAbstractValue(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> attrGrammar absValue */ 
  kk_std_core_hnd__ev ev_11211 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x6259;
  {
    struct kk_std_core_hnd_Ev* _con_x6260 = kk_std_core_hnd__as_Ev(ev_11211, _ctx);
    kk_box_t _box_x171 = _con_x6260->hnd;
    int32_t m = _con_x6260->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x171, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x6261 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6261->_cfc;
      kk_std_core_hnd__clause1 _fun_getAbstractValue = _con_x6261->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x6261->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x6261->_fun_getInputStore;
      kk_std_core_hnd__clause1 _pat_3 = _con_x6261->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_4 = _con_x6261->_fun_getOutputStore;
      kk_std_core_hnd__clause1 _pat_5 = _con_x6261->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_6 = _con_x6261->_fun_getQueryCondition;
      kk_std_core_hnd__clause1 _pat_7 = _con_x6261->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_8 = _con_x6261->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_9 = _con_x6261->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_10 = _con_x6261->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_11 = _con_x6261->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_12 = _con_x6261->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_13 = _con_x6261->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_14 = _con_x6261->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_15 = _con_x6261->_fun_setTraversalSummary;
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
        _x_x6259 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x175, (_fun_unbox_x175, m, ev_11211, kk_main__exp_box(exp, _ctx), _ctx), _ctx); /*1010*/
      }
    }
  }
  return kk_main__absValue_unbox(_x_x6259, KK_OWNED, _ctx);
}
 
// select `setAbstractValue` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause2 kk_main__select_setAbstractValue(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause2<exp,absValue,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6262 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause2 _fun_setAbstractValue = _con_x6262->_fun_setAbstractValue;
    return kk_std_core_hnd__clause2_dup(_fun_setAbstractValue, _ctx);
  }
}
 
// Call the `fun setAbstractValue` operation of the effect `:attrGrammar`

static inline kk_unit_t kk_main_setAbstractValue(kk_main__exp exp, kk_main__absValue absValue, kk_context_t* _ctx) { /* (exp : exp, absValue : absValue) -> attrGrammar () */ 
  kk_std_core_hnd__ev evx_11214 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x6263;
  {
    struct kk_std_core_hnd_Ev* _con_x6264 = kk_std_core_hnd__as_Ev(evx_11214, _ctx);
    kk_box_t _box_x179 = _con_x6264->hnd;
    int32_t m = _con_x6264->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x179, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x6265 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6265->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x6265->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x6265->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_3 = _con_x6265->_fun_getInputStore;
      kk_std_core_hnd__clause1 _pat_4 = _con_x6265->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_5 = _con_x6265->_fun_getOutputStore;
      kk_std_core_hnd__clause1 _pat_6 = _con_x6265->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_7 = _con_x6265->_fun_getQueryCondition;
      kk_std_core_hnd__clause1 _pat_8 = _con_x6265->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _fun_setAbstractValue = _con_x6265->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_9 = _con_x6265->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_10 = _con_x6265->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_11 = _con_x6265->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_12 = _con_x6265->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_13 = _con_x6265->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_14 = _con_x6265->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_15 = _con_x6265->_fun_setTraversalSummary;
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
        _x_x6263 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x184, (_fun_unbox_x184, m, evx_11214, kk_main__exp_box(exp, _ctx), kk_main__absValue_box(absValue, _ctx), _ctx), _ctx); /*1016*/
      }
    }
  }
  kk_unit_unbox(_x_x6263); return kk_Unit;
}
 
// select `getPaths` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause1 kk_main__select_getPaths(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause1<exp,std/data/hashset/hash-set<path>,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6266 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause1 _fun_getPaths = _con_x6266->_fun_getPaths;
    return kk_std_core_hnd__clause1_dup(_fun_getPaths, _ctx);
  }
}
 
// Call the `fun getPaths` operation of the effect `:attrGrammar`

static inline kk_std_data_hashset__hash_set kk_main_getPaths(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> attrGrammar std/data/hashset/hash-set<path> */ 
  kk_std_core_hnd__ev ev_11218 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x6267;
  {
    struct kk_std_core_hnd_Ev* _con_x6268 = kk_std_core_hnd__as_Ev(ev_11218, _ctx);
    kk_box_t _box_x189 = _con_x6268->hnd;
    int32_t m = _con_x6268->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x189, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x6269 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6269->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x6269->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x6269->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_3 = _con_x6269->_fun_getInputStore;
      kk_std_core_hnd__clause1 _pat_4 = _con_x6269->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_5 = _con_x6269->_fun_getOutputStore;
      kk_std_core_hnd__clause1 _fun_getPaths = _con_x6269->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_6 = _con_x6269->_fun_getQueryCondition;
      kk_std_core_hnd__clause1 _pat_7 = _con_x6269->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_8 = _con_x6269->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_9 = _con_x6269->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_10 = _con_x6269->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_11 = _con_x6269->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_12 = _con_x6269->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_13 = _con_x6269->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_14 = _con_x6269->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_15 = _con_x6269->_fun_setTraversalSummary;
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
        _x_x6267 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x193, (_fun_unbox_x193, m, ev_11218, kk_main__exp_box(exp, _ctx), _ctx), _ctx); /*1010*/
      }
    }
  }
  return kk_std_data_hashset__hash_set_unbox(_x_x6267, KK_OWNED, _ctx);
}
 
// select `setPaths` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause2 kk_main__select_setPaths(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause2<exp,std/data/hashset/hash-set<path>,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6270 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause2 _fun_setPaths = _con_x6270->_fun_setPaths;
    return kk_std_core_hnd__clause2_dup(_fun_setPaths, _ctx);
  }
}
 
// Call the `fun setPaths` operation of the effect `:attrGrammar`

static inline kk_unit_t kk_main_setPaths(kk_main__exp exp, kk_std_data_hashset__hash_set paths, kk_context_t* _ctx) { /* (exp : exp, paths : std/data/hashset/hash-set<path>) -> attrGrammar () */ 
  kk_std_core_hnd__ev evx_11221 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x6271;
  {
    struct kk_std_core_hnd_Ev* _con_x6272 = kk_std_core_hnd__as_Ev(evx_11221, _ctx);
    kk_box_t _box_x197 = _con_x6272->hnd;
    int32_t m = _con_x6272->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x197, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x6273 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6273->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x6273->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x6273->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_3 = _con_x6273->_fun_getInputStore;
      kk_std_core_hnd__clause1 _pat_4 = _con_x6273->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_5 = _con_x6273->_fun_getOutputStore;
      kk_std_core_hnd__clause1 _pat_6 = _con_x6273->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_7 = _con_x6273->_fun_getQueryCondition;
      kk_std_core_hnd__clause1 _pat_8 = _con_x6273->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_9 = _con_x6273->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_10 = _con_x6273->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_11 = _con_x6273->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_12 = _con_x6273->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_13 = _con_x6273->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _fun_setPaths = _con_x6273->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_14 = _con_x6273->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_15 = _con_x6273->_fun_setTraversalSummary;
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
        _x_x6271 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x202, (_fun_unbox_x202, m, evx_11221, kk_main__exp_box(exp, _ctx), kk_std_data_hashset__hash_set_box(paths, _ctx), _ctx), _ctx); /*1016*/
      }
    }
  }
  kk_unit_unbox(_x_x6271); return kk_Unit;
}
 
// select `getOutputStore` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause1 kk_main__select_getOutputStore(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause1<exp,store,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6274 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause1 _fun_getOutputStore = _con_x6274->_fun_getOutputStore;
    return kk_std_core_hnd__clause1_dup(_fun_getOutputStore, _ctx);
  }
}
 
// Call the `fun getOutputStore` operation of the effect `:attrGrammar`

static inline kk_std_data_hashmap__hash_map kk_main_getOutputStore(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> attrGrammar store */ 
  kk_std_core_hnd__ev ev_11225 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x6275;
  {
    struct kk_std_core_hnd_Ev* _con_x6276 = kk_std_core_hnd__as_Ev(ev_11225, _ctx);
    kk_box_t _box_x207 = _con_x6276->hnd;
    int32_t m = _con_x6276->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x207, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x6277 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6277->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x6277->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x6277->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_3 = _con_x6277->_fun_getInputStore;
      kk_std_core_hnd__clause1 _pat_4 = _con_x6277->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _fun_getOutputStore = _con_x6277->_fun_getOutputStore;
      kk_std_core_hnd__clause1 _pat_5 = _con_x6277->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_6 = _con_x6277->_fun_getQueryCondition;
      kk_std_core_hnd__clause1 _pat_7 = _con_x6277->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_8 = _con_x6277->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_9 = _con_x6277->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_10 = _con_x6277->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_11 = _con_x6277->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_12 = _con_x6277->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_13 = _con_x6277->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_14 = _con_x6277->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_15 = _con_x6277->_fun_setTraversalSummary;
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
        _x_x6275 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x211, (_fun_unbox_x211, m, ev_11225, kk_main__exp_box(exp, _ctx), _ctx), _ctx); /*1010*/
      }
    }
  }
  return kk_std_data_hashmap__hash_map_unbox(_x_x6275, KK_OWNED, _ctx);
}
 
// select `setOutputStore` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause2 kk_main__select_setOutputStore(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause2<exp,store,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6278 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause2 _fun_setOutputStore = _con_x6278->_fun_setOutputStore;
    return kk_std_core_hnd__clause2_dup(_fun_setOutputStore, _ctx);
  }
}
 
// Call the `fun setOutputStore` operation of the effect `:attrGrammar`

static inline kk_unit_t kk_main_setOutputStore(kk_main__exp exp, kk_std_data_hashmap__hash_map store, kk_context_t* _ctx) { /* (exp : exp, store : store) -> attrGrammar () */ 
  kk_std_core_hnd__ev evx_11228 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x6279;
  {
    struct kk_std_core_hnd_Ev* _con_x6280 = kk_std_core_hnd__as_Ev(evx_11228, _ctx);
    kk_box_t _box_x215 = _con_x6280->hnd;
    int32_t m = _con_x6280->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x215, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x6281 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6281->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x6281->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x6281->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_3 = _con_x6281->_fun_getInputStore;
      kk_std_core_hnd__clause1 _pat_4 = _con_x6281->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_5 = _con_x6281->_fun_getOutputStore;
      kk_std_core_hnd__clause1 _pat_6 = _con_x6281->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_7 = _con_x6281->_fun_getQueryCondition;
      kk_std_core_hnd__clause1 _pat_8 = _con_x6281->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_9 = _con_x6281->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_10 = _con_x6281->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_11 = _con_x6281->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_12 = _con_x6281->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _fun_setOutputStore = _con_x6281->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_13 = _con_x6281->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_14 = _con_x6281->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_15 = _con_x6281->_fun_setTraversalSummary;
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
        _x_x6279 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x220, (_fun_unbox_x220, m, evx_11228, kk_main__exp_box(exp, _ctx), kk_std_data_hashmap__hash_map_box(store, _ctx), _ctx), _ctx); /*1016*/
      }
    }
  }
  kk_unit_unbox(_x_x6279); return kk_Unit;
}
 
// select `getInputStore` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause1 kk_main__select_getInputStore(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause1<exp,store,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6282 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause1 _fun_getInputStore = _con_x6282->_fun_getInputStore;
    return kk_std_core_hnd__clause1_dup(_fun_getInputStore, _ctx);
  }
}
 
// Call the `fun getInputStore` operation of the effect `:attrGrammar`

static inline kk_std_data_hashmap__hash_map kk_main_getInputStore(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> attrGrammar store */ 
  kk_std_core_hnd__ev ev_11232 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x6283;
  {
    struct kk_std_core_hnd_Ev* _con_x6284 = kk_std_core_hnd__as_Ev(ev_11232, _ctx);
    kk_box_t _box_x225 = _con_x6284->hnd;
    int32_t m = _con_x6284->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x225, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x6285 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6285->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x6285->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x6285->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _fun_getInputStore = _con_x6285->_fun_getInputStore;
      kk_std_core_hnd__clause1 _pat_3 = _con_x6285->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_4 = _con_x6285->_fun_getOutputStore;
      kk_std_core_hnd__clause1 _pat_5 = _con_x6285->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_6 = _con_x6285->_fun_getQueryCondition;
      kk_std_core_hnd__clause1 _pat_7 = _con_x6285->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_8 = _con_x6285->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_9 = _con_x6285->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_10 = _con_x6285->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_11 = _con_x6285->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_12 = _con_x6285->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_13 = _con_x6285->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_14 = _con_x6285->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_15 = _con_x6285->_fun_setTraversalSummary;
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
        _x_x6283 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x229, (_fun_unbox_x229, m, ev_11232, kk_main__exp_box(exp, _ctx), _ctx), _ctx); /*1010*/
      }
    }
  }
  return kk_std_data_hashmap__hash_map_unbox(_x_x6283, KK_OWNED, _ctx);
}
 
// select `setInputStore` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause2 kk_main__select_setInputStore(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause2<exp,store,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6286 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause2 _fun_setInputStore = _con_x6286->_fun_setInputStore;
    return kk_std_core_hnd__clause2_dup(_fun_setInputStore, _ctx);
  }
}
 
// Call the `fun setInputStore` operation of the effect `:attrGrammar`

static inline kk_unit_t kk_main_setInputStore(kk_main__exp exp, kk_std_data_hashmap__hash_map store, kk_context_t* _ctx) { /* (exp : exp, store : store) -> attrGrammar () */ 
  kk_std_core_hnd__ev evx_11235 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x6287;
  {
    struct kk_std_core_hnd_Ev* _con_x6288 = kk_std_core_hnd__as_Ev(evx_11235, _ctx);
    kk_box_t _box_x233 = _con_x6288->hnd;
    int32_t m = _con_x6288->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x233, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x6289 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6289->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x6289->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x6289->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_3 = _con_x6289->_fun_getInputStore;
      kk_std_core_hnd__clause1 _pat_4 = _con_x6289->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_5 = _con_x6289->_fun_getOutputStore;
      kk_std_core_hnd__clause1 _pat_6 = _con_x6289->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_7 = _con_x6289->_fun_getQueryCondition;
      kk_std_core_hnd__clause1 _pat_8 = _con_x6289->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_9 = _con_x6289->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_10 = _con_x6289->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _fun_setInputStore = _con_x6289->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_11 = _con_x6289->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_12 = _con_x6289->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_13 = _con_x6289->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_14 = _con_x6289->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_15 = _con_x6289->_fun_setTraversalSummary;
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
        _x_x6287 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x238, (_fun_unbox_x238, m, evx_11235, kk_main__exp_box(exp, _ctx), kk_std_data_hashmap__hash_map_box(store, _ctx), _ctx), _ctx); /*1016*/
      }
    }
  }
  kk_unit_unbox(_x_x6287); return kk_Unit;
}
 
// select `getQueryCondition` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause1 kk_main__select_getQueryCondition(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause1<exp,absOp,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6290 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause1 _fun_getQueryCondition = _con_x6290->_fun_getQueryCondition;
    return kk_std_core_hnd__clause1_dup(_fun_getQueryCondition, _ctx);
  }
}
 
// Call the `fun getQueryCondition` operation of the effect `:attrGrammar`

static inline kk_main__absOp kk_main_getQueryCondition(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> attrGrammar absOp */ 
  kk_std_core_hnd__ev ev_11239 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x6291;
  {
    struct kk_std_core_hnd_Ev* _con_x6292 = kk_std_core_hnd__as_Ev(ev_11239, _ctx);
    kk_box_t _box_x243 = _con_x6292->hnd;
    int32_t m = _con_x6292->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x243, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x6293 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6293->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x6293->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x6293->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_3 = _con_x6293->_fun_getInputStore;
      kk_std_core_hnd__clause1 _pat_4 = _con_x6293->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_5 = _con_x6293->_fun_getOutputStore;
      kk_std_core_hnd__clause1 _pat_6 = _con_x6293->_fun_getPaths;
      kk_std_core_hnd__clause1 _fun_getQueryCondition = _con_x6293->_fun_getQueryCondition;
      kk_std_core_hnd__clause1 _pat_7 = _con_x6293->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_8 = _con_x6293->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_9 = _con_x6293->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_10 = _con_x6293->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_11 = _con_x6293->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_12 = _con_x6293->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_13 = _con_x6293->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_14 = _con_x6293->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_15 = _con_x6293->_fun_setTraversalSummary;
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
        _x_x6291 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x247, (_fun_unbox_x247, m, ev_11239, kk_main__exp_box(exp, _ctx), _ctx), _ctx); /*1010*/
      }
    }
  }
  return kk_main__absOp_unbox(_x_x6291, KK_OWNED, _ctx);
}
 
// select `setQueryCondition` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause2 kk_main__select_setQueryCondition(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause2<exp,absOp,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6294 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause2 _fun_setQueryCondition = _con_x6294->_fun_setQueryCondition;
    return kk_std_core_hnd__clause2_dup(_fun_setQueryCondition, _ctx);
  }
}
 
// Call the `fun setQueryCondition` operation of the effect `:attrGrammar`

static inline kk_unit_t kk_main_setQueryCondition(kk_main__exp exp, kk_main__absOp absOp, kk_context_t* _ctx) { /* (exp : exp, absOp : absOp) -> attrGrammar () */ 
  kk_std_core_hnd__ev evx_11242 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x6295;
  {
    struct kk_std_core_hnd_Ev* _con_x6296 = kk_std_core_hnd__as_Ev(evx_11242, _ctx);
    kk_box_t _box_x251 = _con_x6296->hnd;
    int32_t m = _con_x6296->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x251, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x6297 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6297->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x6297->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x6297->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_3 = _con_x6297->_fun_getInputStore;
      kk_std_core_hnd__clause1 _pat_4 = _con_x6297->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_5 = _con_x6297->_fun_getOutputStore;
      kk_std_core_hnd__clause1 _pat_6 = _con_x6297->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_7 = _con_x6297->_fun_getQueryCondition;
      kk_std_core_hnd__clause1 _pat_8 = _con_x6297->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_9 = _con_x6297->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_10 = _con_x6297->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_11 = _con_x6297->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_12 = _con_x6297->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_13 = _con_x6297->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_14 = _con_x6297->_fun_setPaths;
      kk_std_core_hnd__clause2 _fun_setQueryCondition = _con_x6297->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_15 = _con_x6297->_fun_setTraversalSummary;
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
        _x_x6295 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x256, (_fun_unbox_x256, m, evx_11242, kk_main__exp_box(exp, _ctx), kk_main__absOp_box(absOp, _ctx), _ctx), _ctx); /*1016*/
      }
    }
  }
  kk_unit_unbox(_x_x6295); return kk_Unit;
}
 
// select `getDataDependence` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause1 kk_main__select_getDataDependence(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause1<exp,bool,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6298 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause1 _fun_getDataDependence = _con_x6298->_fun_getDataDependence;
    return kk_std_core_hnd__clause1_dup(_fun_getDataDependence, _ctx);
  }
}
 
// Call the `fun getDataDependence` operation of the effect `:attrGrammar`

static inline bool kk_main_getDataDependence(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> attrGrammar bool */ 
  kk_std_core_hnd__ev ev_11246 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x6299;
  {
    struct kk_std_core_hnd_Ev* _con_x6300 = kk_std_core_hnd__as_Ev(ev_11246, _ctx);
    kk_box_t _box_x261 = _con_x6300->hnd;
    int32_t m = _con_x6300->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x261, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x6301 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6301->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x6301->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _fun_getDataDependence = _con_x6301->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x6301->_fun_getInputStore;
      kk_std_core_hnd__clause1 _pat_3 = _con_x6301->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_4 = _con_x6301->_fun_getOutputStore;
      kk_std_core_hnd__clause1 _pat_5 = _con_x6301->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_6 = _con_x6301->_fun_getQueryCondition;
      kk_std_core_hnd__clause1 _pat_7 = _con_x6301->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_8 = _con_x6301->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_9 = _con_x6301->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_10 = _con_x6301->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_11 = _con_x6301->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_12 = _con_x6301->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_13 = _con_x6301->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_14 = _con_x6301->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_15 = _con_x6301->_fun_setTraversalSummary;
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
        _x_x6299 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x265, (_fun_unbox_x265, m, ev_11246, kk_main__exp_box(exp, _ctx), _ctx), _ctx); /*1010*/
      }
    }
  }
  return kk_bool_unbox(_x_x6299);
}
 
// select `setDataDependence` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause2 kk_main__select_setDataDependence(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause2<exp,bool,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6302 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause2 _fun_setDataDependence = _con_x6302->_fun_setDataDependence;
    return kk_std_core_hnd__clause2_dup(_fun_setDataDependence, _ctx);
  }
}
 
// Call the `fun setDataDependence` operation of the effect `:attrGrammar`

static inline kk_unit_t kk_main_setDataDependence(kk_main__exp exp, bool dependence, kk_context_t* _ctx) { /* (exp : exp, dependence : bool) -> attrGrammar () */ 
  kk_std_core_hnd__ev evx_11249 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x6303;
  {
    struct kk_std_core_hnd_Ev* _con_x6304 = kk_std_core_hnd__as_Ev(evx_11249, _ctx);
    kk_box_t _box_x269 = _con_x6304->hnd;
    int32_t m = _con_x6304->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x269, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x6305 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6305->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x6305->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x6305->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_3 = _con_x6305->_fun_getInputStore;
      kk_std_core_hnd__clause1 _pat_4 = _con_x6305->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_5 = _con_x6305->_fun_getOutputStore;
      kk_std_core_hnd__clause1 _pat_6 = _con_x6305->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_7 = _con_x6305->_fun_getQueryCondition;
      kk_std_core_hnd__clause1 _pat_8 = _con_x6305->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_9 = _con_x6305->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _fun_setDataDependence = _con_x6305->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_10 = _con_x6305->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_11 = _con_x6305->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_12 = _con_x6305->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_13 = _con_x6305->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_14 = _con_x6305->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_15 = _con_x6305->_fun_setTraversalSummary;
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
        _x_x6303 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x274, (_fun_unbox_x274, m, evx_11249, kk_main__exp_box(exp, _ctx), kk_bool_box(dependence), _ctx), _ctx); /*1016*/
      }
    }
  }
  kk_unit_unbox(_x_x6303); return kk_Unit;
}
 
// select `getIteratorContext` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause1 kk_main__select_getIteratorContext(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause1<exp,list<path>,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6306 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause1 _fun_getIteratorContext = _con_x6306->_fun_getIteratorContext;
    return kk_std_core_hnd__clause1_dup(_fun_getIteratorContext, _ctx);
  }
}
 
// Call the `fun getIteratorContext` operation of the effect `:attrGrammar`

static inline kk_std_core_types__list kk_main_getIteratorContext(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> attrGrammar list<path> */ 
  kk_std_core_hnd__ev ev_11253 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x6307;
  {
    struct kk_std_core_hnd_Ev* _con_x6308 = kk_std_core_hnd__as_Ev(ev_11253, _ctx);
    kk_box_t _box_x279 = _con_x6308->hnd;
    int32_t m = _con_x6308->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x279, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x6309 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6309->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x6309->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x6309->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_3 = _con_x6309->_fun_getInputStore;
      kk_std_core_hnd__clause1 _fun_getIteratorContext = _con_x6309->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_4 = _con_x6309->_fun_getOutputStore;
      kk_std_core_hnd__clause1 _pat_5 = _con_x6309->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_6 = _con_x6309->_fun_getQueryCondition;
      kk_std_core_hnd__clause1 _pat_7 = _con_x6309->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_8 = _con_x6309->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_9 = _con_x6309->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_10 = _con_x6309->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_11 = _con_x6309->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_12 = _con_x6309->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_13 = _con_x6309->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_14 = _con_x6309->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_15 = _con_x6309->_fun_setTraversalSummary;
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
        _x_x6307 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x283, (_fun_unbox_x283, m, ev_11253, kk_main__exp_box(exp, _ctx), _ctx), _ctx); /*1010*/
      }
    }
  }
  return kk_std_core_types__list_unbox(_x_x6307, KK_OWNED, _ctx);
}
 
// select `setIteratorContext` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause2 kk_main__select_setIteratorContext(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause2<exp,list<path>,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6310 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause2 _fun_setIteratorContext = _con_x6310->_fun_setIteratorContext;
    return kk_std_core_hnd__clause2_dup(_fun_setIteratorContext, _ctx);
  }
}
 
// Call the `fun setIteratorContext` operation of the effect `:attrGrammar`

static inline kk_unit_t kk_main_setIteratorContext(kk_main__exp exp, kk_std_core_types__list paths, kk_context_t* _ctx) { /* (exp : exp, paths : list<path>) -> attrGrammar () */ 
  kk_std_core_hnd__ev evx_11256 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x6311;
  {
    struct kk_std_core_hnd_Ev* _con_x6312 = kk_std_core_hnd__as_Ev(evx_11256, _ctx);
    kk_box_t _box_x287 = _con_x6312->hnd;
    int32_t m = _con_x6312->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x287, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x6313 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6313->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x6313->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x6313->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_3 = _con_x6313->_fun_getInputStore;
      kk_std_core_hnd__clause1 _pat_4 = _con_x6313->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_5 = _con_x6313->_fun_getOutputStore;
      kk_std_core_hnd__clause1 _pat_6 = _con_x6313->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_7 = _con_x6313->_fun_getQueryCondition;
      kk_std_core_hnd__clause1 _pat_8 = _con_x6313->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_9 = _con_x6313->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_10 = _con_x6313->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_11 = _con_x6313->_fun_setInputStore;
      kk_std_core_hnd__clause2 _fun_setIteratorContext = _con_x6313->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_12 = _con_x6313->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_13 = _con_x6313->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_14 = _con_x6313->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_15 = _con_x6313->_fun_setTraversalSummary;
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
        _x_x6311 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x292, (_fun_unbox_x292, m, evx_11256, kk_main__exp_box(exp, _ctx), kk_std_core_types__list_box(paths, _ctx), _ctx), _ctx); /*1016*/
      }
    }
  }
  kk_unit_unbox(_x_x6311); return kk_Unit;
}
 
// select `getTraversalSummary` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause1 kk_main__select_getTraversalSummary(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause1<exp,std/data/hashset/hash-set<path>,attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6314 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause1 _fun_getTraversalSummary = _con_x6314->_fun_getTraversalSummary;
    return kk_std_core_hnd__clause1_dup(_fun_getTraversalSummary, _ctx);
  }
}
 
// Call the `fun getTraversalSummary` operation of the effect `:attrGrammar`

static inline kk_std_data_hashset__hash_set kk_main_getTraversalSummary(kk_main__exp exp, kk_context_t* _ctx) { /* (exp : exp) -> attrGrammar std/data/hashset/hash-set<path> */ 
  kk_std_core_hnd__ev ev_11260 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x6315;
  {
    struct kk_std_core_hnd_Ev* _con_x6316 = kk_std_core_hnd__as_Ev(ev_11260, _ctx);
    kk_box_t _box_x297 = _con_x6316->hnd;
    int32_t m = _con_x6316->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x297, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x6317 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6317->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x6317->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x6317->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_3 = _con_x6317->_fun_getInputStore;
      kk_std_core_hnd__clause1 _pat_4 = _con_x6317->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_5 = _con_x6317->_fun_getOutputStore;
      kk_std_core_hnd__clause1 _pat_6 = _con_x6317->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_7 = _con_x6317->_fun_getQueryCondition;
      kk_std_core_hnd__clause1 _fun_getTraversalSummary = _con_x6317->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_8 = _con_x6317->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_9 = _con_x6317->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_10 = _con_x6317->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_11 = _con_x6317->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_12 = _con_x6317->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_13 = _con_x6317->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_14 = _con_x6317->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _pat_15 = _con_x6317->_fun_setTraversalSummary;
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
        _x_x6315 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x301, (_fun_unbox_x301, m, ev_11260, kk_main__exp_box(exp, _ctx), _ctx), _ctx); /*1010*/
      }
    }
  }
  return kk_std_data_hashset__hash_set_unbox(_x_x6315, KK_OWNED, _ctx);
}
 
// select `setTraversalSummary` operation out of effect `:attrGrammar`

static inline kk_std_core_hnd__clause2 kk_main__select_setTraversalSummary(kk_main__attrGrammar hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : attrGrammar<e,a>) -> hnd/clause2<exp,std/data/hashset/hash-set<path>,(),attrGrammar,e,a> */ 
  {
    struct kk_main__Hnd_attrGrammar* _con_x6318 = kk_main__as_Hnd_attrGrammar(hnd, _ctx);
    kk_std_core_hnd__clause2 _fun_setTraversalSummary = _con_x6318->_fun_setTraversalSummary;
    return kk_std_core_hnd__clause2_dup(_fun_setTraversalSummary, _ctx);
  }
}
 
// Call the `fun setTraversalSummary` operation of the effect `:attrGrammar`

static inline kk_unit_t kk_main_setTraversalSummary(kk_main__exp exp, kk_std_data_hashset__hash_set summary, kk_context_t* _ctx) { /* (exp : exp, summary : std/data/hashset/hash-set<path>) -> attrGrammar () */ 
  kk_std_core_hnd__ev evx_11263 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/attrGrammar>*/;
  kk_box_t _x_x6319;
  {
    struct kk_std_core_hnd_Ev* _con_x6320 = kk_std_core_hnd__as_Ev(evx_11263, _ctx);
    kk_box_t _box_x305 = _con_x6320->hnd;
    int32_t m = _con_x6320->marker;
    kk_main__attrGrammar h = kk_main__attrGrammar_unbox(_box_x305, KK_BORROWED, _ctx);
    kk_main__attrGrammar_dup(h, _ctx);
    {
      struct kk_main__Hnd_attrGrammar* _con_x6321 = kk_main__as_Hnd_attrGrammar(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6321->_cfc;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x6321->_fun_getAbstractValue;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x6321->_fun_getDataDependence;
      kk_std_core_hnd__clause1 _pat_3 = _con_x6321->_fun_getInputStore;
      kk_std_core_hnd__clause1 _pat_4 = _con_x6321->_fun_getIteratorContext;
      kk_std_core_hnd__clause1 _pat_5 = _con_x6321->_fun_getOutputStore;
      kk_std_core_hnd__clause1 _pat_6 = _con_x6321->_fun_getPaths;
      kk_std_core_hnd__clause1 _pat_7 = _con_x6321->_fun_getQueryCondition;
      kk_std_core_hnd__clause1 _pat_8 = _con_x6321->_fun_getTraversalSummary;
      kk_std_core_hnd__clause2 _pat_9 = _con_x6321->_fun_setAbstractValue;
      kk_std_core_hnd__clause2 _pat_10 = _con_x6321->_fun_setDataDependence;
      kk_std_core_hnd__clause2 _pat_11 = _con_x6321->_fun_setInputStore;
      kk_std_core_hnd__clause2 _pat_12 = _con_x6321->_fun_setIteratorContext;
      kk_std_core_hnd__clause2 _pat_13 = _con_x6321->_fun_setOutputStore;
      kk_std_core_hnd__clause2 _pat_14 = _con_x6321->_fun_setPaths;
      kk_std_core_hnd__clause2 _pat_15 = _con_x6321->_fun_setQueryCondition;
      kk_std_core_hnd__clause2 _fun_setTraversalSummary = _con_x6321->_fun_setTraversalSummary;
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
        _x_x6319 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x310, (_fun_unbox_x310, m, evx_11263, kk_main__exp_box(exp, _ctx), kk_std_data_hashset__hash_set_box(summary, _ctx), _ctx), _ctx); /*1016*/
      }
    }
  }
  kk_unit_unbox(_x_x6319); return kk_Unit;
}

extern kk_std_core_hnd__htag kk_main__tag_nondet;

kk_box_t kk_main__handle_nondet(kk_main__nondet hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (hnd : nondet<e,b>, ret : (res : a) -> e b, action : () -> <nondet|e> a) -> e b */ 
 
// select `choose` operation out of effect `:nondet`

static inline kk_std_core_hnd__clause2 kk_main__select_choose(kk_main__nondet hnd, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : nondet<e,b>) -> hnd/clause2<a,a,a,nondet,e,b> */ 
  {
    struct kk_main__Hnd_nondet* _con_x6325 = kk_main__as_Hnd_nondet(hnd, _ctx);
    kk_std_core_hnd__clause2 _ctl_choose = _con_x6325->_ctl_choose;
    return kk_std_core_hnd__clause2_dup(_ctl_choose, _ctx);
  }
}
 
// Call the `ctl choose` operation of the effect `:nondet`

static inline kk_box_t kk_main_choose(kk_box_t x, kk_box_t y, kk_context_t* _ctx) { /* forall<a> (x : a, y : a) -> nondet a */ 
  kk_std_core_hnd__ev evx_11268 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/nondet>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x6326 = kk_std_core_hnd__as_Ev(evx_11268, _ctx);
    kk_box_t _box_x323 = _con_x6326->hnd;
    int32_t m = _con_x6326->marker;
    kk_main__nondet h = kk_main__nondet_unbox(_box_x323, KK_BORROWED, _ctx);
    kk_main__nondet_dup(h, _ctx);
    {
      struct kk_main__Hnd_nondet* _con_x6327 = kk_main__as_Hnd_nondet(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6327->_cfc;
      kk_std_core_hnd__clause2 _ctl_choose = _con_x6327->_ctl_choose;
      kk_std_core_hnd__clause0 _pat_1_0 = _con_x6327->_brk_fail;
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
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), f, (f, m, evx_11268, x, y, _ctx), _ctx);
      }
    }
  }
}
 
// select `fail` operation out of effect `:nondet`

static inline kk_std_core_hnd__clause0 kk_main__select_fail(kk_main__nondet hnd, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : nondet<e,b>) -> hnd/clause0<a,nondet,e,b> */ 
  {
    struct kk_main__Hnd_nondet* _con_x6328 = kk_main__as_Hnd_nondet(hnd, _ctx);
    kk_std_core_hnd__clause0 _brk_fail = _con_x6328->_brk_fail;
    return kk_std_core_hnd__clause0_dup(_brk_fail, _ctx);
  }
}
 
// Call the `final ctl fail` operation of the effect `:nondet`

static inline kk_box_t kk_main_fail(kk_context_t* _ctx) { /* forall<a> () -> nondet a */ 
  kk_std_core_hnd__ev ev_11272 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/nondet>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x6329 = kk_std_core_hnd__as_Ev(ev_11272, _ctx);
    kk_box_t _box_x324 = _con_x6329->hnd;
    int32_t m = _con_x6329->marker;
    kk_main__nondet h = kk_main__nondet_unbox(_box_x324, KK_BORROWED, _ctx);
    kk_main__nondet_dup(h, _ctx);
    {
      struct kk_main__Hnd_nondet* _con_x6330 = kk_main__as_Hnd_nondet(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x6330->_cfc;
      kk_std_core_hnd__clause2 _pat_1_0 = _con_x6330->_ctl_choose;
      kk_std_core_hnd__clause0 _brk_fail = _con_x6330->_brk_fail;
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
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), f, (f, m, ev_11272, _ctx), _ctx);
      }
    }
  }
}

kk_main__absValue kk_main__lp__dot__dot__rp_(kk_main__absValue value, kk_main__fieldName fieldName, kk_context_t* _ctx); /* (value : absValue, fieldName : fieldName) -> exn absValue */ 

kk_box_t kk_main_getOrThrow(kk_std_data_hashmap__hash_map map, kk_box_t key, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_context_t* _ctx); /* forall<a,b> (map : std/data/hashmap/hash-map<a,b>, key : a, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int) -> exn b */ 


// lift anonymous function
struct kk_main_hash_map_fs_insert_fun6395__t {
  struct kk_function_s _base;
};
extern bool kk_main_hash_map_fs_insert_fun6395(kk_function_t _fself, kk_integer_t _x1_x6393, kk_integer_t _x2_x6394, kk_context_t* _ctx);
static inline kk_function_t kk_main_hash_map_fs_new_insert_fun6395(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hash_map_fs_insert_fun6395, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main_hash_map_fs_insert_fun6398__t {
  struct kk_function_s _base;
};
extern kk_integer_t kk_main_hash_map_fs_insert_fun6398(kk_function_t _fself, kk_integer_t _x1_x6396, kk_integer_t _x2_x6397, kk_context_t* _ctx);
static inline kk_function_t kk_main_hash_map_fs_new_insert_fun6398(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hash_map_fs_insert_fun6398, _ctx)
  return kk_function_dup(_fself,kk_context());
}


static inline kk_std_data_hashmap__hash_map kk_main_hash_map_fs_insert(kk_std_data_hashmap__hash_map map, kk_box_t key, kk_box_t value, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_context_t* _ctx) { /* forall<a,b> (map : std/data/hashmap/hash-map<a,b>, key : a, value : b, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int) -> std/data/hashmap/hash-map<a,b> */ 
  return kk_std_data_hashmap_insert(map, key, value, _implicit_fs_hash, _implicit_fs__lp__eq__eq__rp_, kk_main_hash_map_fs_new_insert_fun6395(_ctx), kk_main_hash_map_fs_new_insert_fun6398(_ctx), _ctx);
}


// lift anonymous function
struct kk_main_hash_set_fs_insert_fun6401__t {
  struct kk_function_s _base;
};
extern bool kk_main_hash_set_fs_insert_fun6401(kk_function_t _fself, kk_integer_t _x1_x6399, kk_integer_t _x2_x6400, kk_context_t* _ctx);
static inline kk_function_t kk_main_hash_set_fs_new_insert_fun6401(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hash_set_fs_insert_fun6401, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main_hash_set_fs_insert_fun6404__t {
  struct kk_function_s _base;
};
extern kk_integer_t kk_main_hash_set_fs_insert_fun6404(kk_function_t _fself, kk_integer_t _x1_x6402, kk_integer_t _x2_x6403, kk_context_t* _ctx);
static inline kk_function_t kk_main_hash_set_fs_new_insert_fun6404(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hash_set_fs_insert_fun6404, _ctx)
  return kk_function_dup(_fself,kk_context());
}


static inline kk_std_data_hashset__hash_set kk_main_hash_set_fs_insert(kk_std_data_hashset__hash_set set, kk_box_t x, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_context_t* _ctx) { /* forall<a> (set : std/data/hashset/hash-set<a>, x : a, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int) -> std/data/hashset/hash-set<a> */ 
  return kk_std_data_hashset_insert(set, x, _implicit_fs_hash, _implicit_fs__lp__eq__eq__rp_, kk_main_hash_set_fs_new_insert_fun6401(_ctx), kk_main_hash_set_fs_new_insert_fun6404(_ctx), _ctx);
}

kk_unit_t kk_main_hashmap_fs__mlift_insertAll_11076(kk_std_data_hashmap__hash_map _y_x10259, kk_box_t key, kk_ref_t result, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_box_t _y_x10262, kk_context_t* _ctx); /* forall<_e,h,a,b> (std/data/hashmap/hash-map<a,b>, key : a, result : local-var<h,std/data/hashmap/hash-map<a,b>>, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int, b) -> <exn,local<h>,div|_e> () */ 

kk_unit_t kk_main_hashmap_fs__mlift_insertAll_11077(kk_std_data_hashmap__hash_map b, kk_box_t key, kk_ref_t result, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_std_data_hashmap__hash_map _y_x10259, kk_context_t* _ctx); /* forall<_e,h,a,b> (b : std/data/hashmap/hash-map<a,b>, key : a, result : local-var<h,std/data/hashmap/hash-map<a,b>>, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int, std/data/hashmap/hash-map<a,b>) -> <local<h>,exn,div|_e> () */ 
 
// monadic lift

static inline kk_std_data_hashmap__hash_map kk_main_hashmap_fs__mlift_insertAll_11078(kk_ref_t result, kk_unit_t wild__, kk_context_t* _ctx) { /* forall<_e,h,a,b> (result : local-var<h,std/data/hashmap/hash-map<a,b>>, wild_ : ()) -> <div,exn,local<h>|_e> std/data/hashmap/hash-map<a,b> */ 
  kk_box_t _x_x6455 = kk_ref_get(result,kk_context()); /*9648*/
  return kk_std_data_hashmap__hash_map_unbox(_x_x6455, KK_OWNED, _ctx);
}

kk_std_data_hashmap__hash_map kk_main_hashmap_fs_insertAll(kk_std_data_hashmap__hash_map a, kk_std_data_hashmap__hash_map b, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_context_t* _ctx); /* forall<a,b> (a : std/data/hashmap/hash-map<a,b>, b : std/data/hashmap/hash-map<a,b>, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int) -> std/data/hashmap/hash-map<a,b> */ 


// lift anonymous function
struct kk_main_hashset_fs_singleton_fun6472__t {
  struct kk_function_s _base;
};
extern bool kk_main_hashset_fs_singleton_fun6472(kk_function_t _fself, kk_integer_t _x1_x6470, kk_integer_t _x2_x6471, kk_context_t* _ctx);
static inline kk_function_t kk_main_hashset_fs_new_singleton_fun6472(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hashset_fs_singleton_fun6472, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main_hashset_fs_singleton_fun6475__t {
  struct kk_function_s _base;
};
extern kk_integer_t kk_main_hashset_fs_singleton_fun6475(kk_function_t _fself, kk_integer_t _x1_x6473, kk_integer_t _x2_x6474, kk_context_t* _ctx);
static inline kk_function_t kk_main_hashset_fs_new_singleton_fun6475(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hashset_fs_singleton_fun6475, _ctx)
  return kk_function_dup(_fself,kk_context());
}


static inline kk_std_data_hashset__hash_set kk_main_hashset_fs_singleton(kk_box_t x, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_context_t* _ctx) { /* forall<a> (x : a, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int) -> std/data/hashset/hash-set<a> */ 
  kk_std_data_hashset__hash_set set_10133 = kk_std_data_hashset_thread_fs_hash_set(kk_std_core_types__new_None(_ctx), _ctx); /*std/data/hashset/hash-set<7725>*/;
  return kk_std_data_hashset_insert(set_10133, x, _implicit_fs_hash, _implicit_fs__lp__eq__eq__rp_, kk_main_hashset_fs_new_singleton_fun6472(_ctx), kk_main_hashset_fs_new_singleton_fun6475(_ctx), _ctx);
}

kk_main__absValue kk_main_applyOp(kk_main__op op, kk_main__absValue a, kk_main__absValue b, kk_context_t* _ctx); /* (op : op, a : absValue, b : absValue) -> absValue */ 

kk_std_data_hashset__hash_set kk_main_extractPaths(kk_main__absValue absValue, kk_context_t* _ctx); /* (absValue : absValue) -> std/data/hashset/hash-set<path> */ 

kk_unit_t kk_main__mlift_updateInputStore_11079(kk_std_data_hashmap__hash_map inputStorePlusV, kk_main__exp s, kk_std_data_hashmap__hash_map _y_x10275, kk_context_t* _ctx); /* (inputStorePlusV : std/data/hashmap/hash-map<varName,absValue>, s : exp, store) -> <attrGrammar,exn> () */ 

kk_unit_t kk_main__mlift_updateInputStore_11080(kk_std_data_hashmap__hash_map inputStore, kk_main__exp s_0, kk_main__varName v, kk_main__absValue _y_x10273, kk_context_t* _ctx); /* (inputStore : store, s : exp, v : varName, absValue) -> <exn,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateInputStore_11081(kk_std_data_hashmap__hash_map inputStore_0, kk_main__exp s_1, kk_main__varName v_0, kk_main__absValue _y_x10272, kk_context_t* _ctx); /* (inputStore : store, s : exp, v : varName, absValue) -> <attrGrammar,exn> () */ 

kk_unit_t kk_main__mlift_updateInputStore_11082(kk_main__exp e, kk_std_data_hashmap__hash_map inputStore_1, kk_main__exp s_2, kk_main__varName v_1, kk_unit_t wild___0, kk_context_t* _ctx); /* (e : exp, inputStore : store, s : exp, v : varName, wild_@0 : ()) -> <exn,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateInputStore_11083(kk_main__exp s2, kk_std_data_hashmap__hash_map _y_x10279, kk_context_t* _ctx); /* (s2 : exp, store) -> <attrGrammar,exn> () */ 

kk_unit_t kk_main__mlift_updateInputStore_11084(kk_main__exp s1, kk_main__exp s2_0, kk_unit_t wild___1, kk_context_t* _ctx); /* (s1 : exp, s2 : exp, wild_@1 : ()) -> <exn,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateInputStore_11085(kk_main__exp e2, kk_std_data_hashmap__hash_map inputStore_2, kk_unit_t wild___2, kk_context_t* _ctx); /* (e2 : exp, inputStore : store, wild_@2 : ()) -> <exn,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateInputStore_11086(kk_std_data_hashmap__hash_map inputStore_3, kk_main__exp s2_0_0, kk_unit_t wild___4, kk_context_t* _ctx); /* (inputStore : store, s2@0 : exp, wild_@4 : ()) -> <exn,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateInputStore_11087(kk_std_data_hashmap__hash_map inputStore_4, kk_main__exp s1_0, kk_main__exp s2_0_1, kk_unit_t wild___3, kk_context_t* _ctx); /* (inputStore : store, s1@0 : exp, s2@0 : exp, wild_@3 : ()) -> <exn,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateInputStore_11088(kk_main__exp exp, kk_std_data_hashmap__hash_map inputStore_5, kk_unit_t wild__, kk_context_t* _ctx); /* (exp : exp, inputStore : store, wild_ : ()) -> <attrGrammar,exn> () */ 

kk_unit_t kk_main_updateInputStore(kk_main__exp exp_0, kk_std_data_hashmap__hash_map inputStore_6, kk_context_t* _ctx); /* (exp : exp, inputStore : store) -> <attrGrammar,exn> () */ 

bool kk_main_isValidQueryCondition(kk_main__exp exp, kk_context_t* _ctx); /* (exp : exp) -> bool */ 

kk_main__absOp kk_main_absOp_fs__lp__amp__rp_(kk_main__absOp absOp, kk_main__absValue absValue, kk_context_t* _ctx); /* (absOp : absOp, absValue : absValue) -> absOp */ 

kk_main__absValue kk_main_absValue_fs_not(kk_main__absValue absValue, kk_context_t* _ctx); /* (absValue : absValue) -> absValue */ 

kk_unit_t kk_main__mlift_updateQueryCondition_11089(kk_main__absOp queryCondition, kk_main__exp s2, kk_main__absValue _y_x10294, kk_context_t* _ctx); /* (queryCondition : absOp, s2 : exp, absValue) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateQueryCondition_11090(kk_main__exp e, kk_main__absOp queryCondition_0, kk_main__exp s2_0, kk_unit_t wild___1, kk_context_t* _ctx); /* (e : exp, queryCondition : absOp, s2 : exp, wild_@1 : ()) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateQueryCondition_11091(kk_main__exp e_0, kk_main__absOp queryCondition_1, kk_main__exp s1, kk_main__exp s2_1, kk_main__absValue _y_x10292, kk_context_t* _ctx); /* (e : exp, queryCondition : absOp, s1 : exp, s2 : exp, absValue) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateQueryCondition_11092(kk_main__absOp queryCondition_2, kk_main__exp s2_2, kk_unit_t wild___2, kk_context_t* _ctx); /* (queryCondition : absOp, s2 : exp, wild_@2 : ()) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateQueryCondition_11093(kk_main__exp e_1, kk_main__absOp queryCondition_3, kk_main__exp s1_0, kk_main__exp s2_3, kk_unit_t wild___0, kk_context_t* _ctx); /* (e : exp, queryCondition : absOp, s1 : exp, s2 : exp, wild_@0 : ()) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateQueryCondition_11094(kk_main__exp e2, kk_main__absOp queryCondition_4, kk_unit_t wild___3, kk_context_t* _ctx); /* (e2 : exp, queryCondition : absOp, wild_@3 : ()) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateQueryCondition_11095(kk_main__absOp queryCondition_5, kk_main__exp s, kk_unit_t wild___4, kk_context_t* _ctx); /* (queryCondition : absOp, s : exp, wild_@4 : ()) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateQueryCondition_11096(kk_main__absOp queryCondition_6, kk_main__exp s2_0_0, kk_unit_t wild___5, kk_context_t* _ctx); /* (queryCondition : absOp, s2@0 : exp, wild_@5 : ()) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateQueryCondition_11097(kk_main__exp exp, kk_main__absOp queryCondition_7, kk_unit_t wild__, kk_context_t* _ctx); /* (exp : exp, queryCondition : absOp, wild_ : ()) -> attrGrammar () */ 

kk_unit_t kk_main_updateQueryCondition(kk_main__exp exp_0, kk_main__absOp queryCondition_8, kk_context_t* _ctx); /* (exp : exp, queryCondition : absOp) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateDataDependence_11098(bool dependence, kk_main__exp e2, kk_unit_t wild___0, kk_context_t* _ctx); /* (dependence : bool, e2 : exp, wild_@0 : ()) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateDataDependence_11099(bool dependence_0, kk_main__exp s2, kk_unit_t wild___2, kk_context_t* _ctx); /* (dependence : bool, s2 : exp, wild_@2 : ()) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateDataDependence_11100(bool dependence_1, kk_main__exp s1, kk_main__exp s2_0, kk_unit_t wild___1, kk_context_t* _ctx); /* (dependence : bool, s1 : exp, s2 : exp, wild_@1 : ()) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateDataDependence_11101(bool dependence_2, kk_main__exp s, kk_unit_t wild___3, kk_context_t* _ctx); /* (dependence : bool, s : exp, wild_@3 : ()) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateDataDependence_11102(bool dependence_3, kk_main__exp s2_0_0, kk_unit_t wild___4, kk_context_t* _ctx); /* (dependence : bool, s2@0 : exp, wild_@4 : ()) -> attrGrammar () */ 

kk_unit_t kk_main__mlift_updateDataDependence_11103(bool dependence_4, kk_main__exp exp, kk_unit_t wild__, kk_context_t* _ctx); /* (dependence : bool, exp : exp, wild_ : ()) -> attrGrammar () */ 

kk_unit_t kk_main_updateDataDependence(kk_main__exp exp_0, bool parentDependence, kk_context_t* _ctx); /* (exp : exp, parentDependence : bool) -> attrGrammar () */ 

bool kk_main_extends(kk_main__absValue absValue, kk_std_core_types__list paths, kk_context_t* _ctx); /* (absValue : absValue, paths : list<path>) -> bool */ 

kk_unit_t kk_main__mlift_updateIteratorContext_11104(kk_std_core_types__list paths, kk_main__exp s, kk_main__absValue _y_x10331, kk_context_t* _ctx); /* (paths : list<path>, s : exp, absValue) -> <exn,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateIteratorContext_11105(kk_std_core_types__list paths_0, kk_main__exp s_0, kk_main__absValue _y_x10330, kk_context_t* _ctx); /* (paths : list<path>, s : exp, absValue) -> <attrGrammar,exn> () */ 

kk_unit_t kk_main__mlift_updateIteratorContext_11106(kk_main__exp e, kk_std_core_types__list paths_1, kk_main__exp s_1, kk_main__absValue _y_x10328, kk_context_t* _ctx); /* (e : exp, paths : list<path>, s : exp, absValue) -> <exn,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateIteratorContext_11107(kk_main__exp e_0, kk_std_core_types__list paths_3, kk_main__exp s_2, kk_main__absValue _y_x10327, kk_context_t* _ctx); /* (e : exp, paths : list<path>, s : exp, absValue) -> <attrGrammar,exn> () */ 

kk_unit_t kk_main__mlift_updateIteratorContext_11108(kk_main__exp e_1, kk_std_core_types__list paths_4, kk_main__exp s_3, kk_unit_t wild___0, kk_context_t* _ctx); /* (e : exp, paths : list<path>, s : exp, wild_@0 : ()) -> <exn,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateIteratorContext_11109(kk_std_core_types__list paths_5, kk_main__exp s2, kk_unit_t wild___1, kk_context_t* _ctx); /* (paths : list<path>, s2 : exp, wild_@1 : ()) -> <exn,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateIteratorContext_11110(kk_main__exp e2, kk_std_core_types__list paths_6, kk_unit_t wild___2, kk_context_t* _ctx); /* (e2 : exp, paths : list<path>, wild_@2 : ()) -> <exn,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateIteratorContext_11111(kk_std_core_types__list paths_7, kk_main__exp s2_0, kk_unit_t wild___4, kk_context_t* _ctx); /* (paths : list<path>, s2@0 : exp, wild_@4 : ()) -> <exn,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateIteratorContext_11112(kk_std_core_types__list paths_8, kk_main__exp s1_0, kk_main__exp s2_0_0, kk_unit_t wild___3, kk_context_t* _ctx); /* (paths : list<path>, s1@0 : exp, s2@0 : exp, wild_@3 : ()) -> <exn,attrGrammar> () */ 

kk_unit_t kk_main__mlift_updateIteratorContext_11113(kk_main__exp exp, kk_std_core_types__list paths_9, kk_unit_t wild__, kk_context_t* _ctx); /* (exp : exp, paths : list<path>, wild_ : ()) -> <attrGrammar,exn> () */ 

kk_unit_t kk_main_updateIteratorContext(kk_main__exp exp_0, kk_std_core_types__list paths_10, kk_context_t* _ctx); /* (exp : exp, paths : list<path>) -> <attrGrammar,exn> () */ 

static inline kk_box_t kk_main_getOrDefault(kk_std_data_hashmap__hash_map map, kk_box_t key, kk_box_t kkloc_default, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_context_t* _ctx) { /* forall<a,b> (map : std/data/hashmap/hash-map<a,b>, key : a, default : b, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int) -> b */ 
  kk_std_core_types__maybe _match_x5608 = kk_std_data_hashmap_get(map, key, _implicit_fs_hash, _implicit_fs__lp__eq__eq__rp_, _ctx); /*maybe<3177>*/;
  if (kk_std_core_types__is_Just(_match_x5608, _ctx)) {
    kk_box_t value = _match_x5608._cons.Just.value;
    kk_box_drop(kkloc_default, _ctx);
    return value;
  }
  {
    return kkloc_default;
  }
}

kk_main__absValue kk_main__mlift_updateAbstractValue_11114(kk_main__fieldName f, kk_main__absValue _y_x10347, kk_context_t* _ctx); /* (f : fieldName, absValue) -> <attrGrammar,exn> absValue */ 

kk_main__absValue kk_main__mlift_updateAbstractValue_11115(kk_main__absValue _y_x10350, kk_main__op op, kk_main__absValue _y_x10352, kk_context_t* _ctx); /* (absValue, op : op, absValue) -> <attrGrammar,exn> absValue */ 

kk_main__absValue kk_main__mlift_updateAbstractValue_11116(kk_main__op op, kk_main__exp rhs, kk_main__absValue _y_x10350, kk_context_t* _ctx); /* (op : op, rhs : exp, absValue) -> <attrGrammar,exn> absValue */ 

kk_main__absValue kk_main__mlift_updateAbstractValue_11117(kk_main__varName v, kk_std_data_hashmap__hash_map _y_x10354, kk_context_t* _ctx); /* (v : varName, store) -> <attrGrammar,exn> absValue */ 

kk_unit_t kk_main__mlift_updateAbstractValue_11118(kk_main__exp exp, kk_main__absValue _c_x10355, kk_context_t* _ctx); /* (exp : exp, absValue) -> () */ 

kk_unit_t kk_main_updateAbstractValue(kk_main__exp exp, kk_context_t* _ctx); /* (exp : exp) -> <attrGrammar,exn> () */ 

kk_std_data_hashset__hash_set kk_main__mlift_updatePaths_11119(kk_main__absValue _y_x10359, kk_context_t* _ctx); /* (absValue) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updatePaths_11120(kk_main__absValue _y_x10361, kk_context_t* _ctx); /* (absValue) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updatePaths_11121(kk_std_data_hashset__hash_set _y_x10363, kk_std_data_hashset__hash_set _y_x10365, kk_context_t* _ctx); /* (std/data/hashset/hash-set<path>, std/data/hashset/hash-set<path>) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updatePaths_11122(kk_main__exp rhs, kk_std_data_hashset__hash_set _y_x10363, kk_context_t* _ctx); /* (rhs : exp, std/data/hashset/hash-set<path>) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updatePaths_11123(kk_std_data_hashset__hash_set _y_x10369, kk_std_data_hashset__hash_set _y_x10371, kk_std_data_hashset__hash_set _y_x10373, kk_context_t* _ctx); /* (std/data/hashset/hash-set<path>, std/data/hashset/hash-set<path>, std/data/hashset/hash-set<path>) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updatePaths_11124(kk_std_data_hashset__hash_set _y_x10369, kk_main__exp s2, kk_std_data_hashset__hash_set _y_x10371, kk_context_t* _ctx); /* (std/data/hashset/hash-set<path>, s2 : exp, std/data/hashset/hash-set<path>) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updatePaths_11125(kk_main__exp s1, kk_main__exp s2, kk_std_data_hashset__hash_set _y_x10369, kk_context_t* _ctx); /* (s1 : exp, s2 : exp, std/data/hashset/hash-set<path>) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updatePaths_11126(kk_std_data_hashset__hash_set _y_x10375, kk_main__absValue _y_x10378, kk_std_data_hashset__hash_set _y_x10380, kk_context_t* _ctx); /* (std/data/hashset/hash-set<path>, absValue, std/data/hashset/hash-set<path>) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updatePaths_11127(kk_std_data_hashset__hash_set _y_x10375, kk_main__exp s, kk_main__absValue _y_x10378, kk_context_t* _ctx); /* (std/data/hashset/hash-set<path>, s : exp, absValue) -> <exn,attrGrammar> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updatePaths_11128(kk_std_data_hashset__hash_set _y_x10375, kk_main__exp s, kk_main__absValue _y_x10377, kk_context_t* _ctx); /* (std/data/hashset/hash-set<path>, s : exp, absValue) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updatePaths_11129(kk_main__exp e_1, kk_main__exp s, kk_std_data_hashset__hash_set _y_x10375, kk_context_t* _ctx); /* (e@1 : exp, s : exp, std/data/hashset/hash-set<path>) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updatePaths_11130(kk_std_data_hashset__hash_set _y_x10382, kk_std_data_hashset__hash_set _y_x10384, kk_context_t* _ctx); /* (std/data/hashset/hash-set<path>, std/data/hashset/hash-set<path>) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updatePaths_11131(kk_main__exp s2_0, kk_std_data_hashset__hash_set _y_x10382, kk_context_t* _ctx); /* (s2@0 : exp, std/data/hashset/hash-set<path>) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_unit_t kk_main__mlift_updatePaths_11132(kk_main__exp exp, kk_std_data_hashset__hash_set _c_x10387, kk_context_t* _ctx); /* (exp : exp, std/data/hashset/hash-set<path>) -> () */ 

kk_unit_t kk_main_updatePaths(kk_main__exp exp, kk_context_t* _ctx); /* (exp : exp) -> <attrGrammar,exn> () */ 

kk_main__absValue kk_main_absValue_fs_join(kk_main__absValue v1, kk_main__absValue v2, kk_context_t* _ctx); /* (v1 : absValue, v2 : absValue) -> exn absValue */ 

kk_std_data_hashmap__hash_map kk_main__mlift_updateOutputStore_11133(kk_std_data_hashmap__hash_map _y_x10395, kk_main__varName v, kk_main__absValue _y_x10398, kk_context_t* _ctx); /* (store, v : varName, absValue) -> <exn,attrGrammar> std/data/hashmap/hash-map<varName,absValue> */ 

kk_std_data_hashmap__hash_map kk_main__mlift_updateOutputStore_11134(kk_std_data_hashmap__hash_map _y_x10395, kk_main__absValue previousV, kk_main__varName v, kk_main__absValue _y_x10397, kk_context_t* _ctx); /* (store, previousV : absValue, v : varName, absValue) -> <attrGrammar,exn> std/data/hashmap/hash-map<varName,absValue> */ 

kk_std_data_hashmap__hash_map kk_main__mlift_updateOutputStore_11135(kk_main__exp e, kk_main__absValue previousV, kk_main__varName v, kk_std_data_hashmap__hash_map _y_x10395, kk_context_t* _ctx); /* (e : exp, previousV : absValue, v : varName, store) -> <attrGrammar,exn> std/data/hashmap/hash-map<varName,absValue> */ 

kk_std_data_hashmap__hash_map kk_main__mlift_updateOutputStore_11136(kk_main__exp e, kk_main__exp exp, kk_main__varName v, kk_std_data_hashmap__hash_map _y_x10393, kk_context_t* _ctx); /* (e : exp, exp : exp, v : varName, store) -> <attrGrammar,exn> std/data/hashmap/hash-map<varName,absValue> */ 

kk_std_data_hashmap__hash_map kk_main__mlift_updateOutputStore_11137(kk_std_data_hashmap__hash_map _y_x10400, kk_std_data_hashmap__hash_map _y_x10402, kk_context_t* _ctx); /* (store, store) -> <attrGrammar,exn> std/data/hashmap/hash-map<varName,absValue> */ 

kk_std_data_hashmap__hash_map kk_main__mlift_updateOutputStore_11138(kk_main__exp s2, kk_std_data_hashmap__hash_map _y_x10400, kk_context_t* _ctx); /* (s2 : exp, store) -> <attrGrammar,exn> std/data/hashmap/hash-map<varName,absValue> */ 

kk_std_data_hashmap__hash_map kk_main__mlift_updateOutputStore_11139(kk_main__varName v_0, kk_std_data_hashmap__hash_map _y_x10404, kk_context_t* _ctx); /* (v@0 : varName, store) -> <attrGrammar,exn> std/data/hashmap/hash-map<varName,absValue> */ 

kk_unit_t kk_main__mlift_updateOutputStore_11140(kk_main__exp exp, kk_std_data_hashmap__hash_map _c_x10409, kk_context_t* _ctx); /* (exp : exp, std/data/hashmap/hash-map<varName,absValue>) -> () */ 

kk_unit_t kk_main_updateOutputStore(kk_main__exp exp, kk_context_t* _ctx); /* (exp : exp) -> <attrGrammar,exn> () */ 

kk_box_t kk_main_firstOrThrow(kk_std_core_types__list l, kk_context_t* _ctx); /* forall<a> (l : list<a>) -> exn a */ 

kk_std_data_hashset__hash_set kk_main__mlift_iter_11141(kk_main__path latestIteratorContext, kk_main__absOp _y_x10415, kk_context_t* _ctx); /* (latestIteratorContext : path, absOp) -> attrGrammar std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_iter_11142(kk_main__exp exp, kk_std_core_types__list _y_x10414, kk_context_t* _ctx); /* (exp : exp, list<path>) -> attrGrammar std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main_iter(kk_main__exp exp, kk_context_t* _ctx); /* (exp : exp) -> attrGrammar std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updateTraversalSummary_11143(kk_std_core_types__list _y_x10423, kk_context_t* _ctx); /* (list<path>) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updateTraversalSummary_11144(kk_main__absOp queryCondition, kk_main__absValue _y_x10422, kk_context_t* _ctx); /* (queryCondition : absOp, absValue) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updateTraversalSummary_11145(kk_std_core_types__list _y_x10426, kk_context_t* _ctx); /* (list<path>) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updateTraversalSummary_11146(kk_main__absOp queryCondition, kk_std_data_hashset__hash_set _y_x10425, kk_context_t* _ctx); /* (queryCondition : absOp, std/data/hashset/hash-set<path>) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updateTraversalSummary_11147(kk_main__exp exp, kk_main__absOp queryCondition, bool _y_x10420, kk_context_t* _ctx); /* (exp : exp, queryCondition : absOp, bool) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updateTraversalSummary_11148(kk_main__exp exp, kk_main__absOp queryCondition, kk_context_t* _ctx); /* (exp : exp, queryCondition : absOp) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updateTraversalSummary_11149(kk_std_data_hashset__hash_set _y_x10429, kk_std_data_hashset__hash_set _y_x10430, kk_context_t* _ctx); /* (std/data/hashset/hash-set<path>, std/data/hashset/hash-set<path>) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updateTraversalSummary_11150(kk_main__exp exp, kk_std_data_hashset__hash_set _y_x10429, kk_context_t* _ctx); /* (exp : exp, std/data/hashset/hash-set<path>) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updateTraversalSummary_11151(kk_std_data_hashset__hash_set _y_x10432, kk_std_data_hashset__hash_set _c_x10436, kk_context_t* _ctx); /* (std/data/hashset/hash-set<path>, std/data/hashset/hash-set<path>) -> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updateTraversalSummary_11152(kk_std_data_hashset__hash_set _y_x10432, kk_main__exp exp, bool _y_x10434, kk_context_t* _ctx); /* (std/data/hashset/hash-set<path>, exp : exp, bool) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_updateTraversalSummary_11153(kk_main__exp exp, kk_std_data_hashset__hash_set _y_x10432, kk_context_t* _ctx); /* (exp : exp, std/data/hashset/hash-set<path>) -> <attrGrammar,exn> std/data/hashset/hash-set<path> */ 

kk_unit_t kk_main__mlift_updateTraversalSummary_11154(kk_main__exp exp, kk_std_data_hashset__hash_set _c_x10437, kk_context_t* _ctx); /* (exp : exp, std/data/hashset/hash-set<path>) -> () */ 

kk_unit_t kk_main_updateTraversalSummary(kk_main__exp exp, kk_context_t* _ctx); /* (exp : exp) -> <attrGrammar,exn> () */ 
 
// monadic lift

static inline kk_unit_t kk_main__mlift_updateSynthesizedAttrs_11155(kk_main__exp exp, kk_unit_t wild___1, kk_context_t* _ctx) { /* (exp : exp, wild_@1 : ()) -> <attrGrammar,exn> () */ 
  kk_main_updateTraversalSummary(exp, _ctx); return kk_Unit;
}

kk_unit_t kk_main__mlift_updateSynthesizedAttrs_11156(kk_main__exp exp, kk_unit_t wild___0, kk_context_t* _ctx); /* (exp : exp, wild_@0 : ()) -> <attrGrammar,exn> () */ 

kk_unit_t kk_main__mlift_updateSynthesizedAttrs_11157(kk_main__exp exp, kk_unit_t wild__, kk_context_t* _ctx); /* (exp : exp, wild_ : ()) -> <attrGrammar,exn> () */ 

kk_unit_t kk_main_updateSynthesizedAttrs(kk_main__exp exp, kk_context_t* _ctx); /* (exp : exp) -> <attrGrammar,exn> () */ 

kk_unit_t kk_main__mlift_visit_11158(kk_main__exp e2, kk_function_t f, kk_unit_t wild___0, kk_context_t* _ctx); /* forall<e> (e2 : exp, f : (exp) -> e (), wild_@0 : ()) -> e () */ 

kk_unit_t kk_main__mlift_visit_11159(kk_function_t f_0, kk_main__exp s2, kk_unit_t wild___2, kk_context_t* _ctx); /* forall<e> (f : (exp) -> e (), s2 : exp, wild_@2 : ()) -> e () */ 

kk_unit_t kk_main__mlift_visit_11160(kk_function_t f_1, kk_main__exp s1, kk_main__exp s2_0, kk_unit_t wild___1, kk_context_t* _ctx); /* forall<e> (f : (exp) -> e (), s1 : exp, s2 : exp, wild_@1 : ()) -> e () */ 

kk_unit_t kk_main__mlift_visit_11161(kk_function_t f_2, kk_main__exp s, kk_unit_t wild___3, kk_context_t* _ctx); /* forall<e> (f : (exp) -> e (), s : exp, wild_@3 : ()) -> e () */ 

kk_unit_t kk_main__mlift_visit_11162(kk_function_t f_3, kk_main__exp s2_0_0, kk_unit_t wild___4, kk_context_t* _ctx); /* forall<e> (f : (exp) -> e (), s2@0 : exp, wild_@4 : ()) -> e () */ 

kk_unit_t kk_main__mlift_visit_11163(kk_main__exp exp, kk_function_t f_4, kk_unit_t wild__, kk_context_t* _ctx); /* forall<e> (exp : exp, f : (exp) -> e (), wild_ : ()) -> e () */ 

kk_unit_t kk_main_visit(kk_main__exp exp_0, kk_function_t f_5, kk_context_t* _ctx); /* forall<e> (exp : exp, f : (exp) -> e ()) -> e () */ 
 
// monadic lift

static inline kk_unit_t kk_main__mlift_iterateAttributeGrammar_11164(kk_main__exp exp, kk_unit_t wild___3, kk_context_t* _ctx) { /* (exp : exp, wild_@3 : ()) -> <attrGrammar,exn> () */ 
  kk_main_updateIteratorContext(exp, kk_std_core_types__new_Nil(_ctx), _ctx); return kk_Unit;
}

kk_unit_t kk_main__mlift_iterateAttributeGrammar_11165(kk_main__exp exp, kk_unit_t wild___2, kk_context_t* _ctx); /* (exp : exp, wild_@2 : ()) -> <attrGrammar,exn> () */ 

kk_unit_t kk_main__mlift_iterateAttributeGrammar_11166(kk_main__exp exp, kk_unit_t wild___1, kk_context_t* _ctx); /* (exp : exp, wild_@1 : ()) -> <attrGrammar,exn> () */ 

kk_unit_t kk_main__mlift_iterateAttributeGrammar_11167(kk_main__exp exp, kk_unit_t wild___0, kk_context_t* _ctx); /* (exp : exp, wild_@0 : ()) -> <attrGrammar,exn> () */ 

kk_unit_t kk_main_iterateAttributeGrammar(kk_main__exp exp, kk_context_t* _ctx); /* (exp : exp) -> <attrGrammar,exn> () */ 

extern kk_std_core_hnd__htag kk_main__tag_fixpoint;

kk_box_t kk_main__handle_fixpoint(kk_main__fixpoint hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (hnd : fixpoint<e,b>, ret : (res : a) -> e b, action : () -> <fixpoint|e> a) -> e b */ 
 
// select `modified` operation out of effect `:fixpoint`

static inline kk_std_core_hnd__clause0 kk_main__select_modified(kk_main__fixpoint hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : fixpoint<e,a>) -> hnd/clause0<(),fixpoint,e,a> */ 
  {
    struct kk_main__Hnd_fixpoint* _con_x8467 = kk_main__as_Hnd_fixpoint(hnd, _ctx);
    kk_std_core_hnd__clause0 _fun_modified = _con_x8467->_fun_modified;
    return kk_std_core_hnd__clause0_dup(_fun_modified, _ctx);
  }
}
 
// Call the `fun modified` operation of the effect `:fixpoint`

static inline kk_unit_t kk_main_modified(kk_context_t* _ctx) { /* () -> fixpoint () */ 
  kk_std_core_hnd__ev ev_11824 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<main/fixpoint>*/;
  kk_box_t _x_x8468;
  {
    struct kk_std_core_hnd_Ev* _con_x8469 = kk_std_core_hnd__as_Ev(ev_11824, _ctx);
    kk_box_t _box_x4116 = _con_x8469->hnd;
    int32_t m = _con_x8469->marker;
    kk_main__fixpoint h = kk_main__fixpoint_unbox(_box_x4116, KK_BORROWED, _ctx);
    kk_main__fixpoint_dup(h, _ctx);
    {
      struct kk_main__Hnd_fixpoint* _con_x8470 = kk_main__as_Hnd_fixpoint(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x8470->_cfc;
      kk_std_core_hnd__clause0 _fun_modified = _con_x8470->_fun_modified;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_fun_modified, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x4119 = _fun_modified.clause;
        _x_x8468 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x4119, (_fun_unbox_x4119, m, ev_11824, _ctx), _ctx); /*1005*/
      }
    }
  }
  kk_unit_unbox(_x_x8468); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift_update_11168_fun8472__t {
  struct kk_function_s _base;
  kk_box_t key;
  kk_std_data_hashmap__hash_map map;
  kk_box_t value;
  kk_function_t _implicit_fs__lp__eq__eq__rp_;
  kk_function_t _implicit_fs_hash;
};
extern kk_box_t kk_main__mlift_update_11168_fun8472(kk_function_t _fself, kk_context_t* _ctx);
static inline kk_function_t kk_main__new_mlift_update_11168_fun8472(kk_box_t key, kk_std_data_hashmap__hash_map map, kk_box_t value, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_context_t* _ctx) {
  struct kk_main__mlift_update_11168_fun8472__t* _self = kk_function_alloc_as(struct kk_main__mlift_update_11168_fun8472__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main__mlift_update_11168_fun8472, kk_context());
  _self->key = key;
  _self->map = map;
  _self->value = value;
  _self->_implicit_fs__lp__eq__eq__rp_ = _implicit_fs__lp__eq__eq__rp_;
  _self->_implicit_fs_hash = _implicit_fs_hash;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_main__mlift_update_11168_fun8476__t {
  struct kk_function_s _base;
};
extern bool kk_main__mlift_update_11168_fun8476(kk_function_t _fself, kk_integer_t _x1_x8474, kk_integer_t _x2_x8475, kk_context_t* _ctx);
static inline kk_function_t kk_main__new_mlift_update_11168_fun8476(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift_update_11168_fun8476, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main__mlift_update_11168_fun8479__t {
  struct kk_function_s _base;
};
extern kk_integer_t kk_main__mlift_update_11168_fun8479(kk_function_t _fself, kk_integer_t _x1_x8477, kk_integer_t _x2_x8478, kk_context_t* _ctx);
static inline kk_function_t kk_main__new_mlift_update_11168_fun8479(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift_update_11168_fun8479, _ctx)
  return kk_function_dup(_fself,kk_context());
}


static inline kk_std_data_hashmap__hash_map kk_main__mlift_update_11168(kk_box_t key, kk_std_data_hashmap__hash_map map, kk_box_t value, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_unit_t wild__, kk_context_t* _ctx) { /* forall<a,b> (key : a, map : std/data/hashmap/hash-map<a,b>, value : b, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int, wild_ : ()) -> fixpoint std/data/hashmap/hash-map<a,b> */ 
  kk_box_t _x_x8471 = kk_std_core_hnd__open_none0(kk_main__new_mlift_update_11168_fun8472(key, map, value, _implicit_fs__lp__eq__eq__rp_, _implicit_fs_hash, _ctx), _ctx); /*1000*/
  return kk_std_data_hashmap__hash_map_unbox(_x_x8471, KK_OWNED, _ctx);
}

kk_std_data_hashmap__hash_map kk_main__mlift_update_11169(kk_box_t key, kk_std_data_hashmap__hash_map map, kk_box_t value, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, bool _c_x10464, kk_context_t* _ctx); /* forall<a,b> (key : a, map : std/data/hashmap/hash-map<a,b>, value : b, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int, bool) -> std/data/hashmap/hash-map<a,b> */ 

kk_std_data_hashmap__hash_map kk_main_update(kk_std_data_hashmap__hash_map map, kk_box_t key, kk_box_t value, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_hash, kk_function_t _implicit_fs_value_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_show, kk_context_t* _ctx); /* forall<a,b> (map : std/data/hashmap/hash-map<a,b>, key : a, value : b, ?(==) : (a, a) -> bool, ?hash : (a, int64) -> int, ?value/(==) : (b, b) -> bool, ?show : (b) -> string) -> fixpoint std/data/hashmap/hash-map<a,b> */ 

kk_main__absValue kk_main__mlift_analyze_11170(kk_main__exp exp, kk_std_data_hashmap__hash_map _y_x10468, kk_context_t* _ctx); /* forall<h> (exp : exp, std/data/hashmap/hash-map<exp,absValue>) -> <local<h>,fixpoint,div,exn> absValue */ 

bool kk_main__mlift_analyze_11171(kk_main__exp exp_0, kk_std_data_hashmap__hash_map _y_x10469, kk_context_t* _ctx); /* forall<h> (exp@0 : exp, std/data/hashmap/hash-map<exp,bool>) -> <local<h>,fixpoint,div,exn> bool */ 

kk_std_data_hashmap__hash_map kk_main__mlift_analyze_11172(kk_main__exp exp_1, kk_std_data_hashmap__hash_map _y_x10470, kk_context_t* _ctx); /* forall<h> (exp@1 : exp, std/data/hashmap/hash-map<exp,store>) -> <local<h>,fixpoint,div,exn> store */ 

kk_std_core_types__list kk_main__mlift_analyze_11173(kk_main__exp exp_2, kk_std_data_hashmap__hash_map _y_x10471, kk_context_t* _ctx); /* forall<h> (exp@2 : exp, std/data/hashmap/hash-map<exp,list<path>>) -> <local<h>,fixpoint,div,exn> list<path> */ 

kk_std_data_hashmap__hash_map kk_main__mlift_analyze_11174(kk_main__exp exp_3, kk_std_data_hashmap__hash_map _y_x10472, kk_context_t* _ctx); /* forall<h> (exp@3 : exp, std/data/hashmap/hash-map<exp,store>) -> <local<h>,fixpoint,div,exn> store */ 

kk_std_data_hashset__hash_set kk_main__mlift_analyze_11175(kk_main__exp exp_4, kk_std_data_hashmap__hash_map _y_x10473, kk_context_t* _ctx); /* forall<h> (exp@4 : exp, std/data/hashmap/hash-map<exp,std/data/hashset/hash-set<path>>) -> <local<h>,fixpoint,div,exn> std/data/hashset/hash-set<path> */ 

kk_main__absOp kk_main__mlift_analyze_11176(kk_main__exp exp_5, kk_std_data_hashmap__hash_map _y_x10474, kk_context_t* _ctx); /* forall<h> (exp@5 : exp, std/data/hashmap/hash-map<exp,absOp>) -> <local<h>,fixpoint,div,exn> absOp */ 

kk_std_data_hashset__hash_set kk_main__mlift_analyze_11177(kk_main__exp exp_6, kk_std_data_hashmap__hash_map _y_x10475, kk_context_t* _ctx); /* forall<h> (exp@6 : exp, std/data/hashmap/hash-map<exp,std/data/hashset/hash-set<path>>) -> <local<h>,fixpoint,div,exn> std/data/hashset/hash-set<path> */ 
 
// monadic lift

static inline kk_unit_t kk_main__mlift_analyze_11178(kk_ref_t abstractValues, kk_std_data_hashmap__hash_map _y_x10477, kk_context_t* _ctx) { /* forall<h> (abstractValues : local-var<h,std/data/hashmap/hash-map<exp,absValue>>, std/data/hashmap/hash-map<exp,absValue>) -> <fixpoint,local<h>,div,exn> () */ 
  kk_unit_t _brw_x5516 = kk_Unit;
  kk_ref_set_borrow(abstractValues,(kk_std_data_hashmap__hash_map_box(_y_x10477, _ctx)),kk_context());
  kk_ref_drop(abstractValues, _ctx);
  _brw_x5516; return kk_Unit;
}

kk_unit_t kk_main__mlift_analyze_11179(kk_ref_t abstractValues, kk_main__absValue absValue, kk_main__exp exp_7, kk_std_data_hashmap__hash_map _y_x10476, kk_context_t* _ctx); /* forall<h> (abstractValues : local-var<h,std/data/hashmap/hash-map<exp,absValue>>, absValue : absValue, exp@7 : exp, std/data/hashmap/hash-map<exp,absValue>) -> <local<h>,fixpoint,div,exn> () */ 
 
// monadic lift

static inline kk_unit_t kk_main__mlift_analyze_11180(kk_ref_t dataDependences, kk_std_data_hashmap__hash_map _y_x10480, kk_context_t* _ctx) { /* forall<h> (dataDependences : local-var<h,std/data/hashmap/hash-map<exp,bool>>, std/data/hashmap/hash-map<exp,bool>) -> <fixpoint,local<h>,div,exn> () */ 
  kk_unit_t _brw_x5512 = kk_Unit;
  kk_ref_set_borrow(dataDependences,(kk_std_data_hashmap__hash_map_box(_y_x10480, _ctx)),kk_context());
  kk_ref_drop(dataDependences, _ctx);
  _brw_x5512; return kk_Unit;
}

kk_unit_t kk_main__mlift_analyze_11181(kk_ref_t dataDependences, bool dependence, kk_main__exp exp_8, kk_std_data_hashmap__hash_map _y_x10479, kk_context_t* _ctx); /* forall<h> (dataDependences : local-var<h,std/data/hashmap/hash-map<exp,bool>>, dependence : bool, exp@8 : exp, std/data/hashmap/hash-map<exp,bool>) -> <local<h>,fixpoint,div,exn> () */ 
 
// monadic lift

static inline kk_unit_t kk_main__mlift_analyze_11182(kk_ref_t inputStores, kk_std_data_hashmap__hash_map _y_x10483, kk_context_t* _ctx) { /* forall<h> (inputStores : local-var<h,std/data/hashmap/hash-map<exp,store>>, std/data/hashmap/hash-map<exp,store>) -> <fixpoint,local<h>,div,exn> () */ 
  kk_unit_t _brw_x5508 = kk_Unit;
  kk_ref_set_borrow(inputStores,(kk_std_data_hashmap__hash_map_box(_y_x10483, _ctx)),kk_context());
  kk_ref_drop(inputStores, _ctx);
  _brw_x5508; return kk_Unit;
}

kk_unit_t kk_main__mlift_analyze_11183(kk_main__exp exp_9, kk_std_data_hashmap__hash_map inputStore, kk_ref_t inputStores, kk_std_data_hashmap__hash_map _y_x10482, kk_context_t* _ctx); /* forall<h> (exp@9 : exp, inputStore : store, inputStores : local-var<h,std/data/hashmap/hash-map<exp,store>>, std/data/hashmap/hash-map<exp,store>) -> <local<h>,fixpoint,div,exn> () */ 
 
// monadic lift

static inline kk_unit_t kk_main__mlift_analyze_11184(kk_ref_t iteratorContexts, kk_std_data_hashmap__hash_map _y_x10486, kk_context_t* _ctx) { /* forall<h> (iteratorContexts : local-var<h,std/data/hashmap/hash-map<exp,list<path>>>, std/data/hashmap/hash-map<exp,list<path>>) -> <fixpoint,local<h>,div,exn> () */ 
  kk_unit_t _brw_x5504 = kk_Unit;
  kk_ref_set_borrow(iteratorContexts,(kk_std_data_hashmap__hash_map_box(_y_x10486, _ctx)),kk_context());
  kk_ref_drop(iteratorContexts, _ctx);
  _brw_x5504; return kk_Unit;
}

kk_unit_t kk_main__mlift_analyze_11185(kk_main__exp exp_10, kk_std_core_types__list iteratorContext, kk_ref_t iteratorContexts, kk_std_data_hashmap__hash_map _y_x10485, kk_context_t* _ctx); /* forall<h> (exp@10 : exp, iteratorContext : list<path>, iteratorContexts : local-var<h,std/data/hashmap/hash-map<exp,list<path>>>, std/data/hashmap/hash-map<exp,list<path>>) -> <local<h>,fixpoint,div,exn> () */ 
 
// monadic lift

static inline kk_unit_t kk_main__mlift_analyze_11186(kk_ref_t outputStores, kk_std_data_hashmap__hash_map _y_x10489, kk_context_t* _ctx) { /* forall<h> (outputStores : local-var<h,std/data/hashmap/hash-map<exp,store>>, std/data/hashmap/hash-map<exp,store>) -> <fixpoint,local<h>,div,exn> () */ 
  kk_unit_t _brw_x5500 = kk_Unit;
  kk_ref_set_borrow(outputStores,(kk_std_data_hashmap__hash_map_box(_y_x10489, _ctx)),kk_context());
  kk_ref_drop(outputStores, _ctx);
  _brw_x5500; return kk_Unit;
}

kk_unit_t kk_main__mlift_analyze_11187(kk_main__exp exp_11, kk_std_data_hashmap__hash_map outputStore, kk_ref_t outputStores, kk_std_data_hashmap__hash_map _y_x10488, kk_context_t* _ctx); /* forall<h> (exp@11 : exp, outputStore : store, outputStores : local-var<h,std/data/hashmap/hash-map<exp,store>>, std/data/hashmap/hash-map<exp,store>) -> <local<h>,fixpoint,div,exn> () */ 
 
// monadic lift

static inline kk_unit_t kk_main__mlift_analyze_11188(kk_ref_t pathsByExp, kk_std_data_hashmap__hash_map _y_x10492, kk_context_t* _ctx) { /* forall<h> (pathsByExp : local-var<h,std/data/hashmap/hash-map<exp,std/data/hashset/hash-set<path>>>, std/data/hashmap/hash-map<exp,std/data/hashset/hash-set<path>>) -> <fixpoint,local<h>,div,exn> () */ 
  kk_unit_t _brw_x5496 = kk_Unit;
  kk_ref_set_borrow(pathsByExp,(kk_std_data_hashmap__hash_map_box(_y_x10492, _ctx)),kk_context());
  kk_ref_drop(pathsByExp, _ctx);
  _brw_x5496; return kk_Unit;
}

kk_unit_t kk_main__mlift_analyze_11189(kk_main__exp exp_12, kk_std_data_hashset__hash_set paths, kk_ref_t pathsByExp, kk_std_data_hashmap__hash_map _y_x10491, kk_context_t* _ctx); /* forall<h> (exp@12 : exp, paths : std/data/hashset/hash-set<path>, pathsByExp : local-var<h,std/data/hashmap/hash-map<exp,std/data/hashset/hash-set<path>>>, std/data/hashmap/hash-map<exp,std/data/hashset/hash-set<path>>) -> <local<h>,fixpoint,div,exn> () */ 
 
// monadic lift

static inline kk_unit_t kk_main__mlift_analyze_11190(kk_ref_t queryConditions, kk_std_data_hashmap__hash_map _y_x10495, kk_context_t* _ctx) { /* forall<h> (queryConditions : local-var<h,std/data/hashmap/hash-map<exp,absOp>>, std/data/hashmap/hash-map<exp,absOp>) -> <fixpoint,local<h>,div,exn> () */ 
  kk_unit_t _brw_x5492 = kk_Unit;
  kk_ref_set_borrow(queryConditions,(kk_std_data_hashmap__hash_map_box(_y_x10495, _ctx)),kk_context());
  kk_ref_drop(queryConditions, _ctx);
  _brw_x5492; return kk_Unit;
}

kk_unit_t kk_main__mlift_analyze_11191(kk_main__exp exp_13, kk_main__absOp queryCondition, kk_ref_t queryConditions, kk_std_data_hashmap__hash_map _y_x10494, kk_context_t* _ctx); /* forall<h> (exp@13 : exp, queryCondition : absOp, queryConditions : local-var<h,std/data/hashmap/hash-map<exp,absOp>>, std/data/hashmap/hash-map<exp,absOp>) -> <local<h>,fixpoint,div,exn> () */ 
 
// monadic lift

static inline kk_unit_t kk_main__mlift_analyze_11192(kk_ref_t traversalSummaries, kk_std_data_hashmap__hash_map _y_x10498, kk_context_t* _ctx) { /* forall<h> (traversalSummaries : local-var<h,std/data/hashmap/hash-map<exp,std/data/hashset/hash-set<path>>>, std/data/hashmap/hash-map<exp,std/data/hashset/hash-set<path>>) -> <fixpoint,local<h>,div,exn> () */ 
  kk_unit_t _brw_x5488 = kk_Unit;
  kk_ref_set_borrow(traversalSummaries,(kk_std_data_hashmap__hash_map_box(_y_x10498, _ctx)),kk_context());
  kk_ref_drop(traversalSummaries, _ctx);
  _brw_x5488; return kk_Unit;
}

kk_unit_t kk_main__mlift_analyze_11193(kk_main__exp exp_14, kk_ref_t traversalSummaries, kk_std_data_hashset__hash_set traversalSummary, kk_std_data_hashmap__hash_map _y_x10497, kk_context_t* _ctx); /* forall<h> (exp@14 : exp, traversalSummaries : local-var<h,std/data/hashmap/hash-map<exp,std/data/hashset/hash-set<path>>>, traversalSummary : std/data/hashset/hash-set<path>, std/data/hashmap/hash-map<exp,std/data/hashset/hash-set<path>>) -> <local<h>,fixpoint,div,exn> () */ 

kk_std_data_hashset__hash_set kk_main__mlift_analyze_11194(kk_main__exp root, kk_unit_t _c_x10509, kk_context_t* _ctx); /* forall<h> (root : exp, ()) -> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main__mlift_analyze_11195(kk_main__exp root, kk_integer_t _y_x10508, kk_context_t* _ctx); /* forall<h> (root : exp, int) -> <local<h>,attrGrammar,div,exn,fixpoint> std/data/hashset/hash-set<path> */ 
 
// monadic lift

static inline bool kk_main__mlift_analyze_11196(kk_integer_t _y_x10501, kk_context_t* _ctx) { /* forall<h> (int) -> <local<h>,div,attrGrammar,exn,fixpoint> bool */ 
  bool _brw_x5481 = kk_integer_gt_borrow(_y_x10501,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_y_x10501, _ctx);
  return _brw_x5481;
}

bool kk_main__mlift_analyze_11197(kk_ref_t gas, bool _y_x10500, kk_context_t* _ctx); /* forall<h> (gas : local-var<h,int>, bool) -> <local<h>,div,attrGrammar,exn,fixpoint> bool */ 

kk_unit_t kk_main__mlift_analyze_11198(kk_main__exp root, kk_unit_t wild___0, kk_context_t* _ctx); /* forall<h> (root : exp, wild_@0 : ()) -> <local<h>,attrGrammar,exn,div,fixpoint> () */ 

kk_unit_t kk_main__mlift_analyze_11199(kk_ref_t gas, kk_main__exp root, kk_integer_t _y_x10504, kk_context_t* _ctx); /* forall<h> (gas : local-var<h,int>, root : exp, int) -> <local<h>,attrGrammar,exn,div,fixpoint> () */ 

kk_unit_t kk_main__mlift_analyze_11200(kk_ref_t gas, kk_main__exp root, kk_unit_t wild__, kk_context_t* _ctx); /* forall<h> (gas : local-var<h,int>, root : exp, wild_ : ()) -> <local<h>,attrGrammar,exn,div,fixpoint> () */ 

kk_std_data_hashset__hash_set kk_main__mlift_analyze_11201(kk_ref_t gas, kk_main__exp root, kk_unit_t wild___1, kk_context_t* _ctx); /* forall<h> (gas : local-var<h,int>, root : exp, wild_@1 : ()) -> <div,local<h>,attrGrammar,exn,fixpoint> std/data/hashset/hash-set<path> */ 

kk_std_data_hashset__hash_set kk_main_analyze(kk_main__exp root, kk_context_t* _ctx); /* (root : exp) -> pure std/data/hashset/hash-set<path> */ 

extern kk_main__exp kk_main_line1;

extern kk_main__exp kk_main_paperExample;

kk_unit_t kk_main__mlift_check_11202(kk_box_t expected, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_show, kk_std_core_exn__error _y_x10525, kk_context_t* _ctx); /* forall<a,e> (expected : a, ?(==) : (a, a) -> div bool, ?show : (a) -> div string, error<a>) -> <console/console,div|e> () */ 

kk_unit_t kk_main_check(kk_box_t expected, kk_function_t f, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_string_t _implicit_fs_kk_file_line, kk_function_t _implicit_fs_show, kk_context_t* _ctx); /* forall<a,e> (expected : a, f : () -> <console/console,pure|e> a, ?(==) : (a, a) -> div bool, ?kk-file-line : string, ?show : (a) -> div string) -> <console/console,div|e> () */ 

kk_unit_t kk_main__mlift_main_11203(kk_std_data_hashset__hash_set _y_x10528, kk_context_t* _ctx); /* (std/data/hashset/hash-set<path>) -> pure () */ 

kk_unit_t kk_main_main(kk_context_t* _ctx); /* () -> <pure,console/console> () */ 

void kk_main__init(kk_context_t* _ctx);


void kk_main__done(kk_context_t* _ctx);

#endif // header
