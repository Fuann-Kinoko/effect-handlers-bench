#pragma once
#ifndef kk_main_H
#define kk_main_H
// Koka generated module: "main", koka version: 2.4.0, platform: 64-bit
#include <kklib.h>
#include "std_core_types.h"
#include "std_core_hnd.h"
#include "std_core.h"
#include "std_os_path.h"
#include "std_os_env.h"

// type declarations

// type main/.hnd-yield
struct kk_main__hnd_yield_s {
  kk_block_t _block;
};
typedef struct kk_main__hnd_yield_s* kk_main__hnd_yield;
struct kk_main__Hnd_yield {
  struct kk_main__hnd_yield_s _base;
  kk_std_core_hnd__clause1 ctl_yield;
};
static inline kk_main__hnd_yield kk_main__base_Hnd_yield(struct kk_main__Hnd_yield* _x) {
  return &_x->_base;
}
static inline kk_main__hnd_yield kk_main__new_Hnd_yield(kk_reuse_t _at, kk_std_core_hnd__clause1 ctl_yield, kk_context_t* _ctx) {
  struct kk_main__Hnd_yield* _con = kk_block_alloc_at_as(struct kk_main__Hnd_yield, _at, 1 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->ctl_yield = ctl_yield;
  return kk_main__base_Hnd_yield(_con);
}
static inline struct kk_main__Hnd_yield* kk_main__as_Hnd_yield(kk_main__hnd_yield x) {
  return kk_basetype_as_assert(struct kk_main__Hnd_yield*, x, (kk_tag_t)(1) /* _tag */);
}
static inline bool kk_main__is_Hnd_yield(kk_main__hnd_yield x) {
  return (true);
}
static inline kk_main__hnd_yield kk_main__hnd_yield_dup(kk_main__hnd_yield _x) {
  return kk_basetype_dup_as(kk_main__hnd_yield, _x);
}
static inline void kk_main__hnd_yield_drop(kk_main__hnd_yield _x, kk_context_t* _ctx) {
  kk_basetype_drop(_x, _ctx);
}
static inline kk_main__hnd_yield kk_main__hnd_yield_hole() {
  return (kk_main__hnd_yield)(1);
}
static inline bool kk_main__hnd_yield_is_unique(kk_main__hnd_yield _x) {
  return kk_basetype_is_unique(_x);
}
static inline void kk_main__hnd_yield_free(kk_main__hnd_yield _x, kk_context_t* _ctx) {
  kk_basetype_free(_x, _ctx);
}
static inline void kk_main__hnd_yield_decref(kk_main__hnd_yield _x, kk_context_t* _ctx) {
  kk_basetype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_main__hnd_yield_dropn_reuse(kk_main__hnd_yield _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_basetype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_main__hnd_yield_dropn(kk_main__hnd_yield _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_basetype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_main__hnd_yield_reuse(kk_main__hnd_yield _x) {
  return kk_basetype_reuse(_x);
}
static inline kk_box_t kk_main__hnd_yield_box(kk_main__hnd_yield _x, kk_context_t* _ctx) {
  return kk_basetype_box(_x);
}
static inline kk_main__hnd_yield kk_main__hnd_yield_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_basetype_unbox_as(kk_main__hnd_yield, _x);
}

// type main/generator
struct kk_main__generator_s {
  kk_block_t _block;
};
typedef kk_datatype_t kk_main__generator;
struct kk_main_Thunk {
  struct kk_main__generator_s _base;
  kk_integer_t value;
  kk_function_t next;
};
static inline kk_main__generator kk_main__new_Empty(kk_context_t* _ctx) {
  return kk_datatype_from_tag((kk_tag_t)(1));
}
static inline kk_main__generator kk_main__base_Thunk(struct kk_main_Thunk* _x) {
  return kk_datatype_from_base(&_x->_base);
}
static inline kk_main__generator kk_main__new_Thunk(kk_reuse_t _at, kk_integer_t value, kk_function_t next, kk_context_t* _ctx) {
  struct kk_main_Thunk* _con = kk_block_alloc_at_as(struct kk_main_Thunk, _at, 2 /* scan count */, (kk_tag_t)(2), _ctx);
  _con->value = value;
  _con->next = next;
  return kk_main__base_Thunk(_con);
}
static inline struct kk_main_Thunk* kk_main__as_Thunk(kk_main__generator x) {
  return kk_datatype_as_assert(struct kk_main_Thunk*, x, (kk_tag_t)(2) /* _tag */);
}
static inline bool kk_main__is_Empty(kk_main__generator x) {
  return (kk_datatype_has_singleton_tag(x, (kk_tag_t)(1)));
}
static inline bool kk_main__is_Thunk(kk_main__generator x) {
  return (!kk_main__is_Empty(x));
}
static inline kk_main__generator kk_main__generator_dup(kk_main__generator _x) {
  return kk_datatype_dup(_x);
}
static inline void kk_main__generator_drop(kk_main__generator _x, kk_context_t* _ctx) {
  kk_datatype_drop(_x, _ctx);
}
static inline kk_main__generator kk_main__generator_hole() {
  return kk_datatype_from_tag((kk_tag_t)0);
}
static inline bool kk_main__generator_is_unique(kk_main__generator _x) {
  return kk_datatype_is_unique(_x);
}
static inline void kk_main__generator_free(kk_main__generator _x, kk_context_t* _ctx) {
  kk_datatype_free(_x, _ctx);
}
static inline void kk_main__generator_decref(kk_main__generator _x, kk_context_t* _ctx) {
  kk_datatype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_main__generator_dropn_reuse(kk_main__generator _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_datatype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_main__generator_dropn(kk_main__generator _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_datatype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_main__generator_reuse(kk_main__generator _x) {
  return kk_datatype_reuse(_x);
}
static inline kk_box_t kk_main__generator_box(kk_main__generator _x, kk_context_t* _ctx) {
  return kk_datatype_box(_x);
}
static inline kk_main__generator kk_main__generator_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_datatype_unbox(_x);
}

// type main/tree
struct kk_main__tree_s {
  kk_block_t _block;
};
typedef kk_datatype_t kk_main__tree;
struct kk_main_Node {
  struct kk_main__tree_s _base;
  kk_main__tree left;
  kk_integer_t value;
  kk_main__tree right;
};
static inline kk_main__tree kk_main__new_Leaf(kk_context_t* _ctx) {
  return kk_datatype_from_tag((kk_tag_t)(1));
}
static inline kk_main__tree kk_main__base_Node(struct kk_main_Node* _x) {
  return kk_datatype_from_base(&_x->_base);
}
static inline kk_main__tree kk_main__new_Node(kk_reuse_t _at, kk_main__tree left, kk_integer_t value, kk_main__tree right, kk_context_t* _ctx) {
  struct kk_main_Node* _con = kk_block_alloc_at_as(struct kk_main_Node, _at, 3 /* scan count */, (kk_tag_t)(2), _ctx);
  _con->left = left;
  _con->value = value;
  _con->right = right;
  return kk_main__base_Node(_con);
}
static inline struct kk_main_Node* kk_main__as_Node(kk_main__tree x) {
  return kk_datatype_as_assert(struct kk_main_Node*, x, (kk_tag_t)(2) /* _tag */);
}
static inline bool kk_main__is_Leaf(kk_main__tree x) {
  return (kk_datatype_has_singleton_tag(x, (kk_tag_t)(1)));
}
static inline bool kk_main__is_Node(kk_main__tree x) {
  return (!kk_main__is_Leaf(x));
}
static inline kk_main__tree kk_main__tree_dup(kk_main__tree _x) {
  return kk_datatype_dup(_x);
}
static inline void kk_main__tree_drop(kk_main__tree _x, kk_context_t* _ctx) {
  kk_datatype_drop(_x, _ctx);
}
static inline kk_main__tree kk_main__tree_hole() {
  return kk_datatype_from_tag((kk_tag_t)0);
}
static inline bool kk_main__tree_is_unique(kk_main__tree _x) {
  return kk_datatype_is_unique(_x);
}
static inline void kk_main__tree_free(kk_main__tree _x, kk_context_t* _ctx) {
  kk_datatype_free(_x, _ctx);
}
static inline void kk_main__tree_decref(kk_main__tree _x, kk_context_t* _ctx) {
  kk_datatype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_main__tree_dropn_reuse(kk_main__tree _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_datatype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_main__tree_dropn(kk_main__tree _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_datatype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_main__tree_reuse(kk_main__tree _x) {
  return kk_datatype_reuse(_x);
}
static inline kk_box_t kk_main__tree_box(kk_main__tree _x, kk_context_t* _ctx) {
  return kk_datatype_box(_x);
}
static inline kk_main__tree kk_main__tree_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_datatype_unbox(_x);
}

// type main/yield
struct kk_main__yield_s {
  kk_block_t _block;
};
typedef struct kk_main__yield_s* kk_main__yield;
struct kk_main_Yield {
  struct kk_main__yield_s _base;
  kk_main__hnd_yield _field1;
};
static inline kk_main__yield kk_main__base_Yield(struct kk_main_Yield* _x) {
  return &_x->_base;
}
static inline kk_main__yield kk_main__new_Yield(kk_reuse_t _at, kk_main__hnd_yield _field1, kk_context_t* _ctx) {
  struct kk_main_Yield* _con = kk_block_alloc_at_as(struct kk_main_Yield, _at, 1 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->_field1 = _field1;
  return kk_main__base_Yield(_con);
}
static inline struct kk_main_Yield* kk_main__as_Yield(kk_main__yield x) {
  return kk_basetype_as_assert(struct kk_main_Yield*, x, (kk_tag_t)(1) /* _tag */);
}
static inline bool kk_main__is_Yield(kk_main__yield x) {
  return (true);
}
static inline kk_main__yield kk_main__yield_dup(kk_main__yield _x) {
  return kk_basetype_dup_as(kk_main__yield, _x);
}
static inline void kk_main__yield_drop(kk_main__yield _x, kk_context_t* _ctx) {
  kk_basetype_drop(_x, _ctx);
}
static inline kk_main__yield kk_main__yield_hole() {
  return (kk_main__yield)(1);
}
static inline bool kk_main__yield_is_unique(kk_main__yield _x) {
  return kk_basetype_is_unique(_x);
}
static inline void kk_main__yield_free(kk_main__yield _x, kk_context_t* _ctx) {
  kk_basetype_free(_x, _ctx);
}
static inline void kk_main__yield_decref(kk_main__yield _x, kk_context_t* _ctx) {
  kk_basetype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_main__yield_dropn_reuse(kk_main__yield _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_basetype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_main__yield_dropn(kk_main__yield _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_basetype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_main__yield_reuse(kk_main__yield _x) {
  return kk_basetype_reuse(_x);
}
static inline kk_box_t kk_main__yield_box(kk_main__yield _x, kk_context_t* _ctx) {
  return kk_basetype_box(_x);
}
static inline kk_main__yield kk_main__yield_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_basetype_unbox_as(kk_main__yield, _x);
}

// value declarations
 
// Automatically generated. Tests for the `Empty` constructor of the `:generator` type.

static inline bool kk_main_is_empty(kk_main__generator generator, kk_context_t* _ctx) { /* (generator : generator) -> bool */ 
  if (kk_main__is_Empty(generator)) {
    return true;
  }
  {
    struct kk_main_Thunk* _con720 = kk_main__as_Thunk(generator);
    return false;
  }
}
 
// Automatically generated. Tests for the `Thunk` constructor of the `:generator` type.

static inline bool kk_main_is_thunk(kk_main__generator generator, kk_context_t* _ctx) { /* (generator : generator) -> bool */ 
  if (kk_main__is_Thunk(generator)) {
    struct kk_main_Thunk* _con721 = kk_main__as_Thunk(generator);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Leaf` constructor of the `:tree` type.

static inline bool kk_main_is_leaf(kk_main__tree tree, kk_context_t* _ctx) { /* (tree : tree) -> bool */ 
  if (kk_main__is_Leaf(tree)) {
    return true;
  }
  {
    struct kk_main_Node* _con722 = kk_main__as_Node(tree);
    return false;
  }
}
 
// Automatically generated. Tests for the `Node` constructor of the `:tree` type.

static inline bool kk_main_is_node(kk_main__tree tree, kk_context_t* _ctx) { /* (tree : tree) -> bool */ 
  if (kk_main__is_Node(tree)) {
    struct kk_main_Node* _con723 = kk_main__as_Node(tree);
    return true;
  }
  {
    return false;
  }
}

extern kk_std_core_hnd__htag kk_main__tag_yield;

kk_box_t kk_main__handle_yield(int32_t cfc, kk_main__hnd_yield hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (cfc : int32, hnd : .hnd-yield<e,b>, ret : (res : a) -> e b, action : () -> <yield|e> a) -> e b */ 
 
// select `yield` operation out of the `:yield` effect handler

static inline kk_std_core_hnd__clause1 kk_main__select_yield(kk_main__hnd_yield hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : .hnd-yield<e,a>) -> std/core/hnd/clause1<int,(),.hnd-yield,e,a> */ 
  {
    struct kk_main__Hnd_yield* _con727 = kk_main__as_Hnd_yield(hnd);
    kk_std_core_hnd__clause1 ctl_yield = _con727->ctl_yield;
    return kk_std_core_hnd__clause1_dup(ctl_yield);
  }
}
 
// call `yield` operation of the `:yield` effect

static inline kk_unit_t kk_main_yield(kk_integer_t x, kk_context_t* _ctx) { /* (x : int) -> yield () */ 
  kk_std_core_hnd__ev ev_552;
  kk_ssize_t _x728 = (KK_IZ(0)); /*ssize_t*/
  ev_552 = kk_evv_at(_x728,kk_context()); /*std/core/hnd/ev<.hnd-yield>*/
  kk_box_t _x729;
  {
    struct kk_std_core_hnd_Ev* _con730 = kk_std_core_hnd__as_Ev(ev_552);
    kk_std_core_hnd__marker m0 = _con730->marker;
    kk_box_t _box_x584 = _con730->hnd;
    kk_main__hnd_yield h = kk_main__hnd_yield_unbox(_box_x584, NULL);
    kk_main__hnd_yield_dup(h);
    kk_std_core_hnd__clause1 _match_714;
    kk_std_core_hnd__clause1 _brw_715 = kk_main__select_yield(h, _ctx); /*std/core/hnd/clause1<int,(),.hnd-yield,147,148>*/;
    kk_main__hnd_yield_drop(h, _ctx);
    _match_714 = _brw_715; /*std/core/hnd/clause1<int,(),.hnd-yield,147,148>*/
    {
      kk_function_t _fun_unbox_x588 = _match_714.clause;
      _x729 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x588, (_fun_unbox_x588, m0, ev_552, kk_integer_box(x), _ctx)); /*1010*/
    }
  }
  kk_unit_unbox(_x729); return kk_Unit;
}

kk_main__generator kk_main_generate(kk_function_t f, kk_context_t* _ctx); /* (f : () -> <div,yield> ()) -> div generator */ 

kk_unit_t kk_main__mlift549_iterate(kk_main__tree r, kk_unit_t wild__0, kk_context_t* _ctx); /* (r : tree, wild_0 : ()) -> yield () */ 

kk_unit_t kk_main__mlift550_iterate(kk_main__tree r0, kk_integer_t v, kk_unit_t wild__, kk_context_t* _ctx); /* (r : tree, v : int, wild_ : ()) -> yield () */ 

kk_unit_t kk_main_iterate(kk_main__tree t, kk_context_t* _ctx); /* (t : tree) -> yield () */ 

kk_main__tree kk_main_make(kk_integer_t n, kk_context_t* _ctx); /* (n : int) -> div tree */ 

kk_integer_t kk_main_sum(kk_integer_t a, kk_main__generator g, kk_context_t* _ctx); /* (a : int, g : generator) -> div int */ 

kk_integer_t kk_main_run(kk_integer_t n, kk_context_t* _ctx); /* (n : int) -> div int */ 

kk_unit_t kk_main_main(kk_context_t* _ctx); /* () -> <console,div,ndet> () */ 

void kk_main__init(kk_context_t* _ctx);


void kk_main__done(kk_context_t* _ctx);

#endif // header
