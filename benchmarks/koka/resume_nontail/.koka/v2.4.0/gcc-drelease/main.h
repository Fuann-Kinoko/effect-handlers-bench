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

// type main/.hnd-operator
struct kk_main__hnd_operator_s {
  kk_block_t _block;
};
typedef struct kk_main__hnd_operator_s* kk_main__hnd_operator;
struct kk_main__Hnd_operator {
  struct kk_main__hnd_operator_s _base;
  kk_std_core_hnd__clause1 ctl_operator;
};
static inline kk_main__hnd_operator kk_main__base_Hnd_operator(struct kk_main__Hnd_operator* _x) {
  return &_x->_base;
}
static inline kk_main__hnd_operator kk_main__new_Hnd_operator(kk_reuse_t _at, kk_std_core_hnd__clause1 ctl_operator, kk_context_t* _ctx) {
  struct kk_main__Hnd_operator* _con = kk_block_alloc_at_as(struct kk_main__Hnd_operator, _at, 1 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->ctl_operator = ctl_operator;
  return kk_main__base_Hnd_operator(_con);
}
static inline struct kk_main__Hnd_operator* kk_main__as_Hnd_operator(kk_main__hnd_operator x) {
  return kk_basetype_as_assert(struct kk_main__Hnd_operator*, x, (kk_tag_t)(1) /* _tag */);
}
static inline bool kk_main__is_Hnd_operator(kk_main__hnd_operator x) {
  return (true);
}
static inline kk_main__hnd_operator kk_main__hnd_operator_dup(kk_main__hnd_operator _x) {
  return kk_basetype_dup_as(kk_main__hnd_operator, _x);
}
static inline void kk_main__hnd_operator_drop(kk_main__hnd_operator _x, kk_context_t* _ctx) {
  kk_basetype_drop(_x, _ctx);
}
static inline kk_main__hnd_operator kk_main__hnd_operator_hole() {
  return (kk_main__hnd_operator)(1);
}
static inline bool kk_main__hnd_operator_is_unique(kk_main__hnd_operator _x) {
  return kk_basetype_is_unique(_x);
}
static inline void kk_main__hnd_operator_free(kk_main__hnd_operator _x, kk_context_t* _ctx) {
  kk_basetype_free(_x, _ctx);
}
static inline void kk_main__hnd_operator_decref(kk_main__hnd_operator _x, kk_context_t* _ctx) {
  kk_basetype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_main__hnd_operator_dropn_reuse(kk_main__hnd_operator _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_basetype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_main__hnd_operator_dropn(kk_main__hnd_operator _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_basetype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_main__hnd_operator_reuse(kk_main__hnd_operator _x) {
  return kk_basetype_reuse(_x);
}
static inline kk_box_t kk_main__hnd_operator_box(kk_main__hnd_operator _x, kk_context_t* _ctx) {
  return kk_basetype_box(_x);
}
static inline kk_main__hnd_operator kk_main__hnd_operator_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_basetype_unbox_as(kk_main__hnd_operator, _x);
}

// type main/operator
struct kk_main__operator_s {
  kk_block_t _block;
};
typedef struct kk_main__operator_s* kk_main__operator;
struct kk_main_Operator {
  struct kk_main__operator_s _base;
  kk_main__hnd_operator _field1;
};
static inline kk_main__operator kk_main__base_Operator(struct kk_main_Operator* _x) {
  return &_x->_base;
}
static inline kk_main__operator kk_main__new_Operator(kk_reuse_t _at, kk_main__hnd_operator _field1, kk_context_t* _ctx) {
  struct kk_main_Operator* _con = kk_block_alloc_at_as(struct kk_main_Operator, _at, 1 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->_field1 = _field1;
  return kk_main__base_Operator(_con);
}
static inline struct kk_main_Operator* kk_main__as_Operator(kk_main__operator x) {
  return kk_basetype_as_assert(struct kk_main_Operator*, x, (kk_tag_t)(1) /* _tag */);
}
static inline bool kk_main__is_Operator(kk_main__operator x) {
  return (true);
}
static inline kk_main__operator kk_main__operator_dup(kk_main__operator _x) {
  return kk_basetype_dup_as(kk_main__operator, _x);
}
static inline void kk_main__operator_drop(kk_main__operator _x, kk_context_t* _ctx) {
  kk_basetype_drop(_x, _ctx);
}
static inline kk_main__operator kk_main__operator_hole() {
  return (kk_main__operator)(1);
}
static inline bool kk_main__operator_is_unique(kk_main__operator _x) {
  return kk_basetype_is_unique(_x);
}
static inline void kk_main__operator_free(kk_main__operator _x, kk_context_t* _ctx) {
  kk_basetype_free(_x, _ctx);
}
static inline void kk_main__operator_decref(kk_main__operator _x, kk_context_t* _ctx) {
  kk_basetype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_main__operator_dropn_reuse(kk_main__operator _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_basetype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_main__operator_dropn(kk_main__operator _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_basetype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_main__operator_reuse(kk_main__operator _x) {
  return kk_basetype_reuse(_x);
}
static inline kk_box_t kk_main__operator_box(kk_main__operator _x, kk_context_t* _ctx) {
  return kk_basetype_box(_x);
}
static inline kk_main__operator kk_main__operator_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_basetype_unbox_as(kk_main__operator, _x);
}

// value declarations

extern kk_std_core_hnd__htag kk_main__tag_operator;

kk_box_t kk_main__handle_operator(int32_t cfc, kk_main__hnd_operator hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (cfc : int32, hnd : .hnd-operator<e,b>, ret : (res : a) -> e b, action : () -> <operator|e> a) -> e b */ 
 
// select `operator` operation out of the `:operator` effect handler

static inline kk_std_core_hnd__clause1 kk_main__select_operator(kk_main__hnd_operator hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : .hnd-operator<e,a>) -> std/core/hnd/clause1<int,(),.hnd-operator,e,a> */ 
  {
    struct kk_main__Hnd_operator* _con766 = kk_main__as_Hnd_operator(hnd);
    kk_std_core_hnd__clause1 ctl_operator = _con766->ctl_operator;
    return kk_std_core_hnd__clause1_dup(ctl_operator);
  }
}
 
// call `operator` operation of the `:operator` effect

static inline kk_unit_t kk_main_operator(kk_integer_t x, kk_context_t* _ctx) { /* (x : int) -> operator () */ 
  kk_std_core_hnd__ev ev_666;
  kk_ssize_t _x767 = (KK_IZ(0)); /*ssize_t*/
  ev_666 = kk_evv_at(_x767,kk_context()); /*std/core/hnd/ev<.hnd-operator>*/
  kk_box_t _x768;
  {
    struct kk_std_core_hnd_Ev* _con769 = kk_std_core_hnd__as_Ev(ev_666);
    kk_std_core_hnd__marker m0 = _con769->marker;
    kk_box_t _box_x688 = _con769->hnd;
    kk_main__hnd_operator h = kk_main__hnd_operator_unbox(_box_x688, NULL);
    kk_main__hnd_operator_dup(h);
    kk_std_core_hnd__clause1 _match_759;
    kk_std_core_hnd__clause1 _brw_760 = kk_main__select_operator(h, _ctx); /*std/core/hnd/clause1<int,(),.hnd-operator,97,98>*/;
    kk_main__hnd_operator_drop(h, _ctx);
    _match_759 = _brw_760; /*std/core/hnd/clause1<int,(),.hnd-operator,97,98>*/
    {
      kk_function_t _fun_unbox_x692 = _match_759.clause;
      _x768 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x692, (_fun_unbox_x692, m0, ev_666, kk_integer_box(x), _ctx)); /*1010*/
    }
  }
  kk_unit_unbox(_x768); return kk_Unit;
}

kk_integer_t kk_main__mlift664_loop(kk_integer_t i, kk_integer_t s, kk_unit_t wild__, kk_context_t* _ctx); /* (i : int, s : int, wild_ : ()) -> operator int */ 

kk_integer_t kk_main_loop(kk_integer_t i0, kk_integer_t s0, kk_context_t* _ctx); /* (i : int, s : int) -> <div,operator> int */ 

kk_integer_t kk_main_run(kk_integer_t n, kk_integer_t s, kk_context_t* _ctx); /* (n : int, s : int) -> div int */ 

kk_integer_t kk_main__lift553_repeat(kk_integer_t n, kk_integer_t l, kk_integer_t s, kk_context_t* _ctx); /* (n : int, l : int, s : int) -> div int */ 

static inline kk_integer_t kk_main_repeat(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> div int */ 
  return kk_main__lift553_repeat(n, kk_integer_from_small(1000), kk_integer_from_small(0), _ctx);
}

kk_unit_t kk_main_main(kk_context_t* _ctx); /* () -> <console,div,ndet> () */ 

void kk_main__init(kk_context_t* _ctx);


void kk_main__done(kk_context_t* _ctx);

#endif // header
