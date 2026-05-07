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

// type main/.hnd-choose
struct kk_main__hnd_choose_s {
  kk_block_t _block;
};
typedef struct kk_main__hnd_choose_s* kk_main__hnd_choose;
struct kk_main__Hnd_choose {
  struct kk_main__hnd_choose_s _base;
  kk_std_core_hnd__clause0 ctl_choose;
};
static inline kk_main__hnd_choose kk_main__base_Hnd_choose(struct kk_main__Hnd_choose* _x) {
  return &_x->_base;
}
static inline kk_main__hnd_choose kk_main__new_Hnd_choose(kk_reuse_t _at, kk_std_core_hnd__clause0 ctl_choose, kk_context_t* _ctx) {
  struct kk_main__Hnd_choose* _con = kk_block_alloc_at_as(struct kk_main__Hnd_choose, _at, 1 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->ctl_choose = ctl_choose;
  return kk_main__base_Hnd_choose(_con);
}
static inline struct kk_main__Hnd_choose* kk_main__as_Hnd_choose(kk_main__hnd_choose x) {
  return kk_basetype_as_assert(struct kk_main__Hnd_choose*, x, (kk_tag_t)(1) /* _tag */);
}
static inline bool kk_main__is_Hnd_choose(kk_main__hnd_choose x) {
  return (true);
}
static inline kk_main__hnd_choose kk_main__hnd_choose_dup(kk_main__hnd_choose _x) {
  return kk_basetype_dup_as(kk_main__hnd_choose, _x);
}
static inline void kk_main__hnd_choose_drop(kk_main__hnd_choose _x, kk_context_t* _ctx) {
  kk_basetype_drop(_x, _ctx);
}
static inline kk_main__hnd_choose kk_main__hnd_choose_hole() {
  return (kk_main__hnd_choose)(1);
}
static inline bool kk_main__hnd_choose_is_unique(kk_main__hnd_choose _x) {
  return kk_basetype_is_unique(_x);
}
static inline void kk_main__hnd_choose_free(kk_main__hnd_choose _x, kk_context_t* _ctx) {
  kk_basetype_free(_x, _ctx);
}
static inline void kk_main__hnd_choose_decref(kk_main__hnd_choose _x, kk_context_t* _ctx) {
  kk_basetype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_main__hnd_choose_dropn_reuse(kk_main__hnd_choose _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_basetype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_main__hnd_choose_dropn(kk_main__hnd_choose _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_basetype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_main__hnd_choose_reuse(kk_main__hnd_choose _x) {
  return kk_basetype_reuse(_x);
}
static inline kk_box_t kk_main__hnd_choose_box(kk_main__hnd_choose _x, kk_context_t* _ctx) {
  return kk_basetype_box(_x);
}
static inline kk_main__hnd_choose kk_main__hnd_choose_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_basetype_unbox_as(kk_main__hnd_choose, _x);
}

// type main/choose
struct kk_main__choose_s {
  kk_block_t _block;
};
typedef struct kk_main__choose_s* kk_main__choose;
struct kk_main_Choose {
  struct kk_main__choose_s _base;
  kk_main__hnd_choose _field1;
};
static inline kk_main__choose kk_main__base_Choose(struct kk_main_Choose* _x) {
  return &_x->_base;
}
static inline kk_main__choose kk_main__new_Choose(kk_reuse_t _at, kk_main__hnd_choose _field1, kk_context_t* _ctx) {
  struct kk_main_Choose* _con = kk_block_alloc_at_as(struct kk_main_Choose, _at, 1 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->_field1 = _field1;
  return kk_main__base_Choose(_con);
}
static inline struct kk_main_Choose* kk_main__as_Choose(kk_main__choose x) {
  return kk_basetype_as_assert(struct kk_main_Choose*, x, (kk_tag_t)(1) /* _tag */);
}
static inline bool kk_main__is_Choose(kk_main__choose x) {
  return (true);
}
static inline kk_main__choose kk_main__choose_dup(kk_main__choose _x) {
  return kk_basetype_dup_as(kk_main__choose, _x);
}
static inline void kk_main__choose_drop(kk_main__choose _x, kk_context_t* _ctx) {
  kk_basetype_drop(_x, _ctx);
}
static inline kk_main__choose kk_main__choose_hole() {
  return (kk_main__choose)(1);
}
static inline bool kk_main__choose_is_unique(kk_main__choose _x) {
  return kk_basetype_is_unique(_x);
}
static inline void kk_main__choose_free(kk_main__choose _x, kk_context_t* _ctx) {
  kk_basetype_free(_x, _ctx);
}
static inline void kk_main__choose_decref(kk_main__choose _x, kk_context_t* _ctx) {
  kk_basetype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_main__choose_dropn_reuse(kk_main__choose _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_basetype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_main__choose_dropn(kk_main__choose _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_basetype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_main__choose_reuse(kk_main__choose _x) {
  return kk_basetype_reuse(_x);
}
static inline kk_box_t kk_main__choose_box(kk_main__choose _x, kk_context_t* _ctx) {
  return kk_basetype_box(_x);
}
static inline kk_main__choose kk_main__choose_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_basetype_unbox_as(kk_main__choose, _x);
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

// value declarations
 
// Automatically generated. Tests for the `Leaf` constructor of the `:tree` type.

static inline bool kk_main_is_leaf(kk_main__tree tree, kk_context_t* _ctx) { /* (tree : tree) -> bool */ 
  if (kk_main__is_Leaf(tree)) {
    return true;
  }
  {
    struct kk_main_Node* _con1048 = kk_main__as_Node(tree);
    return false;
  }
}
 
// Automatically generated. Tests for the `Node` constructor of the `:tree` type.

static inline bool kk_main_is_node(kk_main__tree tree, kk_context_t* _ctx) { /* (tree : tree) -> bool */ 
  if (kk_main__is_Node(tree)) {
    struct kk_main_Node* _con1049 = kk_main__as_Node(tree);
    return true;
  }
  {
    return false;
  }
}

extern kk_std_core_hnd__htag kk_main__tag_choose;

kk_box_t kk_main__handle_choose(int32_t cfc, kk_main__hnd_choose hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (cfc : int32, hnd : .hnd-choose<e,b>, ret : (res : a) -> e b, action : () -> <choose|e> a) -> e b */ 
 
// select `choose` operation out of the `:choose` effect handler

static inline kk_std_core_hnd__clause0 kk_main__select_choose(kk_main__hnd_choose hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : .hnd-choose<e,a>) -> std/core/hnd/clause0<bool,.hnd-choose,e,a> */ 
  {
    struct kk_main__Hnd_choose* _con1053 = kk_main__as_Hnd_choose(hnd);
    kk_std_core_hnd__clause0 ctl_choose = _con1053->ctl_choose;
    return kk_std_core_hnd__clause0_dup(ctl_choose);
  }
}

static inline kk_integer_t kk_main_operator(kk_integer_t x, kk_integer_t y, kk_context_t* _ctx) { /* (x : int, y : int) -> int */ 
  kk_integer_t y1_726 = kk_integer_mul((kk_integer_from_small(503)),y,kk_context()); /*int*/;
  kk_integer_t x0_723 = kk_integer_sub(x,y1_726,kk_context()); /*int*/;
  kk_integer_t _x1054;
  kk_integer_t _x1055 = kk_integer_add_small_const(x0_723, 37, _ctx); /*int*/
  _x1054 = kk_integer_abs(_x1055,kk_context()); /*int*/
  return kk_integer_mod(_x1054,(kk_integer_from_small(1009)),kk_context());
}
 
// call `choose` operation of the `:choose` effect

static inline bool kk_main_choose(kk_context_t* _ctx) { /* () -> choose bool */ 
  kk_std_core_hnd__ev ev_876;
  kk_ssize_t _x1056 = (KK_IZ(0)); /*ssize_t*/
  ev_876 = kk_evv_at(_x1056,kk_context()); /*std/core/hnd/ev<.hnd-choose>*/
  kk_box_t _x1057;
  {
    struct kk_std_core_hnd_Ev* _con1058 = kk_std_core_hnd__as_Ev(ev_876);
    kk_std_core_hnd__marker m0 = _con1058->marker;
    kk_box_t _box_x929 = _con1058->hnd;
    kk_main__hnd_choose h = kk_main__hnd_choose_unbox(_box_x929, NULL);
    kk_main__hnd_choose_dup(h);
    kk_std_core_hnd__clause0 _match_1042;
    kk_std_core_hnd__clause0 _brw_1043 = kk_main__select_choose(h, _ctx); /*std/core/hnd/clause0<bool,.hnd-choose,129,130>*/;
    kk_main__hnd_choose_drop(h, _ctx);
    _match_1042 = _brw_1043; /*std/core/hnd/clause0<bool,.hnd-choose,129,130>*/
    {
      kk_function_t _fun_unbox_x932 = _match_1042.clause;
      _x1057 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x932, (_fun_unbox_x932, m0, ev_876, _ctx)); /*1005*/
    }
  }
  return kk_bool_unbox(_x1057);
}

kk_main__tree kk_main_make(kk_integer_t n, kk_context_t* _ctx); /* (n : int) -> div tree */ 

kk_integer_t kk_main__mlift871_op(kk_integer_t v, kk_integer_t _y_860, kk_context_t* _ctx); /* forall<h> (v : int, int) -> <local<h>,choose,div> int */ 

kk_integer_t kk_main__mlift872_op(bool _y_857, kk_main__tree l, kk_main__tree r, kk_ref_t state, kk_integer_t v0, kk_unit_t wild__, kk_context_t* _ctx); /* forall<h> (bool, l : tree, r : tree, state : local-var<h,int>, v : int, wild_ : ()) -> <local<h>,choose,div> int */ 

kk_integer_t kk_main__mlift873_op(bool _y_8570, kk_main__tree l0, kk_main__tree r0, kk_ref_t state0, kk_integer_t v1, kk_integer_t _y_858, kk_context_t* _ctx); /* forall<h> (bool, l : tree, r : tree, state : local-var<h,int>, v : int, int) -> <local<h>,choose,div> int */ 

kk_integer_t kk_main__mlift874_op(kk_main__tree l1, kk_main__tree r1, kk_ref_t state1, kk_integer_t v2, bool _y_8571, kk_context_t* _ctx); /* forall<h> (l : tree, r : tree, state : local-var<h,int>, v : int, bool) -> choose int */ 

kk_integer_t kk_main__lift750_run(kk_ref_t state2, kk_main__tree t, kk_context_t* _ctx); /* forall<h> (state : local-var<h,int>, t : tree) -> <local<h>,choose,div> int */ 

kk_integer_t kk_main__lift751_run(kk_function_t explore, kk_ref_t state, kk_main__tree tree, kk_integer_t i, kk_context_t* _ctx); /* forall<h> (explore : (t : tree) -> <choose,div,local<h>> int, state : local-var<h,int>, tree : tree, i : int) -> <div,local<h>> int */ 

kk_integer_t kk_main_run(kk_integer_t n, kk_context_t* _ctx); /* (n : int) -> div int */ 

kk_unit_t kk_main_main(kk_context_t* _ctx); /* () -> <console,div,ndet> () */ 

void kk_main__init(kk_context_t* _ctx);


void kk_main__done(kk_context_t* _ctx);

#endif // header
