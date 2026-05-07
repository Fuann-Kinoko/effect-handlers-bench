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

// type main/.hnd-emit
struct kk_main__hnd_emit_s {
  kk_block_t _block;
};
typedef struct kk_main__hnd_emit_s* kk_main__hnd_emit;
struct kk_main__Hnd_emit {
  struct kk_main__hnd_emit_s _base;
  kk_std_core_hnd__clause1 fun_emit;
};
static inline kk_main__hnd_emit kk_main__base_Hnd_emit(struct kk_main__Hnd_emit* _x) {
  return &_x->_base;
}
static inline kk_main__hnd_emit kk_main__new_Hnd_emit(kk_reuse_t _at, kk_std_core_hnd__clause1 fun_emit, kk_context_t* _ctx) {
  struct kk_main__Hnd_emit* _con = kk_block_alloc_at_as(struct kk_main__Hnd_emit, _at, 1 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->fun_emit = fun_emit;
  return kk_main__base_Hnd_emit(_con);
}
static inline struct kk_main__Hnd_emit* kk_main__as_Hnd_emit(kk_main__hnd_emit x) {
  return kk_basetype_as_assert(struct kk_main__Hnd_emit*, x, (kk_tag_t)(1) /* _tag */);
}
static inline bool kk_main__is_Hnd_emit(kk_main__hnd_emit x) {
  return (true);
}
static inline kk_main__hnd_emit kk_main__hnd_emit_dup(kk_main__hnd_emit _x) {
  return kk_basetype_dup_as(kk_main__hnd_emit, _x);
}
static inline void kk_main__hnd_emit_drop(kk_main__hnd_emit _x, kk_context_t* _ctx) {
  kk_basetype_drop(_x, _ctx);
}
static inline kk_main__hnd_emit kk_main__hnd_emit_hole() {
  return (kk_main__hnd_emit)(1);
}
static inline bool kk_main__hnd_emit_is_unique(kk_main__hnd_emit _x) {
  return kk_basetype_is_unique(_x);
}
static inline void kk_main__hnd_emit_free(kk_main__hnd_emit _x, kk_context_t* _ctx) {
  kk_basetype_free(_x, _ctx);
}
static inline void kk_main__hnd_emit_decref(kk_main__hnd_emit _x, kk_context_t* _ctx) {
  kk_basetype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_main__hnd_emit_dropn_reuse(kk_main__hnd_emit _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_basetype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_main__hnd_emit_dropn(kk_main__hnd_emit _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_basetype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_main__hnd_emit_reuse(kk_main__hnd_emit _x) {
  return kk_basetype_reuse(_x);
}
static inline kk_box_t kk_main__hnd_emit_box(kk_main__hnd_emit _x, kk_context_t* _ctx) {
  return kk_basetype_box(_x);
}
static inline kk_main__hnd_emit kk_main__hnd_emit_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_basetype_unbox_as(kk_main__hnd_emit, _x);
}

// type main/emit
struct kk_main__emit_s {
  kk_block_t _block;
};
typedef struct kk_main__emit_s* kk_main__emit;
struct kk_main_Emit {
  struct kk_main__emit_s _base;
  kk_main__hnd_emit _field1;
};
static inline kk_main__emit kk_main__base_Emit(struct kk_main_Emit* _x) {
  return &_x->_base;
}
static inline kk_main__emit kk_main__new_Emit(kk_reuse_t _at, kk_main__hnd_emit _field1, kk_context_t* _ctx) {
  struct kk_main_Emit* _con = kk_block_alloc_at_as(struct kk_main_Emit, _at, 1 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->_field1 = _field1;
  return kk_main__base_Emit(_con);
}
static inline struct kk_main_Emit* kk_main__as_Emit(kk_main__emit x) {
  return kk_basetype_as_assert(struct kk_main_Emit*, x, (kk_tag_t)(1) /* _tag */);
}
static inline bool kk_main__is_Emit(kk_main__emit x) {
  return (true);
}
static inline kk_main__emit kk_main__emit_dup(kk_main__emit _x) {
  return kk_basetype_dup_as(kk_main__emit, _x);
}
static inline void kk_main__emit_drop(kk_main__emit _x, kk_context_t* _ctx) {
  kk_basetype_drop(_x, _ctx);
}
static inline kk_main__emit kk_main__emit_hole() {
  return (kk_main__emit)(1);
}
static inline bool kk_main__emit_is_unique(kk_main__emit _x) {
  return kk_basetype_is_unique(_x);
}
static inline void kk_main__emit_free(kk_main__emit _x, kk_context_t* _ctx) {
  kk_basetype_free(_x, _ctx);
}
static inline void kk_main__emit_decref(kk_main__emit _x, kk_context_t* _ctx) {
  kk_basetype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_main__emit_dropn_reuse(kk_main__emit _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_basetype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_main__emit_dropn(kk_main__emit _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_basetype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_main__emit_reuse(kk_main__emit _x) {
  return kk_basetype_reuse(_x);
}
static inline kk_box_t kk_main__emit_box(kk_main__emit _x, kk_context_t* _ctx) {
  return kk_basetype_box(_x);
}
static inline kk_main__emit kk_main__emit_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_basetype_unbox_as(kk_main__emit, _x);
}

// value declarations

extern kk_std_core_hnd__htag kk_main__tag_emit;

kk_box_t kk_main__handle_emit(int32_t cfc, kk_main__hnd_emit hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (cfc : int32, hnd : .hnd-emit<e,b>, ret : (res : a) -> e b, action : () -> <emit|e> a) -> e b */ 
 
// select `emit` operation out of the `:emit` effect handler

static inline kk_std_core_hnd__clause1 kk_main__select_emit(kk_main__hnd_emit hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : .hnd-emit<e,a>) -> std/core/hnd/clause1<int,(),.hnd-emit,e,a> */ 
  {
    struct kk_main__Hnd_emit* _con605 = kk_main__as_Hnd_emit(hnd);
    kk_std_core_hnd__clause1 fun_emit = _con605->fun_emit;
    return kk_std_core_hnd__clause1_dup(fun_emit);
  }
}
 
// call `emit` operation of the `:emit` effect

static inline kk_unit_t kk_main_emit(kk_integer_t e, kk_context_t* _ctx) { /* (e : int) -> emit () */ 
  kk_std_core_hnd__ev ev_489;
  kk_ssize_t _x606 = (KK_IZ(0)); /*ssize_t*/
  ev_489 = kk_evv_at(_x606,kk_context()); /*std/core/hnd/ev<.hnd-emit>*/
  kk_box_t _x607;
  {
    struct kk_std_core_hnd_Ev* _con608 = kk_std_core_hnd__as_Ev(ev_489);
    kk_std_core_hnd__marker m0 = _con608->marker;
    kk_box_t _box_x518 = _con608->hnd;
    kk_main__hnd_emit h = kk_main__hnd_emit_unbox(_box_x518, NULL);
    kk_main__hnd_emit_dup(h);
    kk_std_core_hnd__clause1 _match_598;
    kk_std_core_hnd__clause1 _brw_599 = kk_main__select_emit(h, _ctx); /*std/core/hnd/clause1<int,(),.hnd-emit,102,103>*/;
    kk_main__hnd_emit_drop(h, _ctx);
    _match_598 = _brw_599; /*std/core/hnd/clause1<int,(),.hnd-emit,102,103>*/
    {
      kk_function_t _fun_unbox_x522 = _match_598.clause;
      _x607 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x522, (_fun_unbox_x522, m0, ev_489, kk_integer_box(e), _ctx)); /*1010*/
    }
  }
  kk_unit_unbox(_x607); return kk_Unit;
}

kk_unit_t kk_main__mlift486_range(kk_integer_t l, kk_integer_t u, kk_unit_t wild__, kk_context_t* _ctx); /* (l : int, u : int, wild_ : ()) -> emit () */ 

kk_unit_t kk_main_range(kk_integer_t l0, kk_integer_t u0, kk_context_t* _ctx); /* (l : int, u : int) -> <div,emit> () */ 
 
// monadic lift

static inline kk_integer_t kk_main__mlift487_run(kk_ref_t s, kk_unit_t wild__0, kk_context_t* _ctx) { /* forall<h> (s : local-var<h,int>, wild_0 : ()) -> <div,emit> int */ 
  kk_box_t _x621 = kk_ref_get(s,kk_context()); /*1000*/
  return kk_integer_unbox(_x621);
}

kk_integer_t kk_main_run(kk_integer_t n, kk_context_t* _ctx); /* (n : int) -> div int */ 

kk_unit_t kk_main_main(kk_context_t* _ctx); /* () -> <console,div,ndet> () */ 

void kk_main__init(kk_context_t* _ctx);


void kk_main__done(kk_context_t* _ctx);

#endif // header
