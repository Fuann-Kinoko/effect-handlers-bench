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

// type main/.hnd-state
struct kk_main__hnd_state_s {
  kk_block_t _block;
};
typedef struct kk_main__hnd_state_s* kk_main__hnd_state;
struct kk_main__Hnd_state {
  struct kk_main__hnd_state_s _base;
  kk_std_core_hnd__clause0 fun_get;
  kk_std_core_hnd__clause1 fun_set;
};
static inline kk_main__hnd_state kk_main__base_Hnd_state(struct kk_main__Hnd_state* _x) {
  return &_x->_base;
}
static inline kk_main__hnd_state kk_main__new_Hnd_state(kk_reuse_t _at, kk_std_core_hnd__clause0 fun_get, kk_std_core_hnd__clause1 fun_set, kk_context_t* _ctx) {
  struct kk_main__Hnd_state* _con = kk_block_alloc_at_as(struct kk_main__Hnd_state, _at, 2 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->fun_get = fun_get;
  _con->fun_set = fun_set;
  return kk_main__base_Hnd_state(_con);
}
static inline struct kk_main__Hnd_state* kk_main__as_Hnd_state(kk_main__hnd_state x) {
  return kk_basetype_as_assert(struct kk_main__Hnd_state*, x, (kk_tag_t)(1) /* _tag */);
}
static inline bool kk_main__is_Hnd_state(kk_main__hnd_state x) {
  return (true);
}
static inline kk_main__hnd_state kk_main__hnd_state_dup(kk_main__hnd_state _x) {
  return kk_basetype_dup_as(kk_main__hnd_state, _x);
}
static inline void kk_main__hnd_state_drop(kk_main__hnd_state _x, kk_context_t* _ctx) {
  kk_basetype_drop(_x, _ctx);
}
static inline kk_main__hnd_state kk_main__hnd_state_hole() {
  return (kk_main__hnd_state)(1);
}
static inline bool kk_main__hnd_state_is_unique(kk_main__hnd_state _x) {
  return kk_basetype_is_unique(_x);
}
static inline void kk_main__hnd_state_free(kk_main__hnd_state _x, kk_context_t* _ctx) {
  kk_basetype_free(_x, _ctx);
}
static inline void kk_main__hnd_state_decref(kk_main__hnd_state _x, kk_context_t* _ctx) {
  kk_basetype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_main__hnd_state_dropn_reuse(kk_main__hnd_state _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_basetype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_main__hnd_state_dropn(kk_main__hnd_state _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_basetype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_main__hnd_state_reuse(kk_main__hnd_state _x) {
  return kk_basetype_reuse(_x);
}
static inline kk_box_t kk_main__hnd_state_box(kk_main__hnd_state _x, kk_context_t* _ctx) {
  return kk_basetype_box(_x);
}
static inline kk_main__hnd_state kk_main__hnd_state_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_basetype_unbox_as(kk_main__hnd_state, _x);
}

// type main/state
struct kk_main__state_s {
  kk_block_t _block;
};
typedef struct kk_main__state_s* kk_main__state;
struct kk_main_State {
  struct kk_main__state_s _base;
  kk_main__hnd_state _field1;
};
static inline kk_main__state kk_main__base_State(struct kk_main_State* _x) {
  return &_x->_base;
}
static inline kk_main__state kk_main__new_State(kk_reuse_t _at, kk_main__hnd_state _field1, kk_context_t* _ctx) {
  struct kk_main_State* _con = kk_block_alloc_at_as(struct kk_main_State, _at, 1 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->_field1 = _field1;
  return kk_main__base_State(_con);
}
static inline struct kk_main_State* kk_main__as_State(kk_main__state x) {
  return kk_basetype_as_assert(struct kk_main_State*, x, (kk_tag_t)(1) /* _tag */);
}
static inline bool kk_main__is_State(kk_main__state x) {
  return (true);
}
static inline kk_main__state kk_main__state_dup(kk_main__state _x) {
  return kk_basetype_dup_as(kk_main__state, _x);
}
static inline void kk_main__state_drop(kk_main__state _x, kk_context_t* _ctx) {
  kk_basetype_drop(_x, _ctx);
}
static inline kk_main__state kk_main__state_hole() {
  return (kk_main__state)(1);
}
static inline bool kk_main__state_is_unique(kk_main__state _x) {
  return kk_basetype_is_unique(_x);
}
static inline void kk_main__state_free(kk_main__state _x, kk_context_t* _ctx) {
  kk_basetype_free(_x, _ctx);
}
static inline void kk_main__state_decref(kk_main__state _x, kk_context_t* _ctx) {
  kk_basetype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_main__state_dropn_reuse(kk_main__state _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_basetype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_main__state_dropn(kk_main__state _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_basetype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_main__state_reuse(kk_main__state _x) {
  return kk_basetype_reuse(_x);
}
static inline kk_box_t kk_main__state_box(kk_main__state _x, kk_context_t* _ctx) {
  return kk_basetype_box(_x);
}
static inline kk_main__state kk_main__state_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_basetype_unbox_as(kk_main__state, _x);
}

// value declarations

extern kk_std_core_hnd__htag kk_main__tag_state;

kk_box_t kk_main__handle_state(int32_t cfc, kk_main__hnd_state hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (cfc : int32, hnd : .hnd-state<e,b>, ret : (res : a) -> e b, action : () -> <state|e> a) -> e b */ 
 
// select `get` operation out of the `:state` effect handler

static inline kk_std_core_hnd__clause0 kk_main__select_get(kk_main__hnd_state hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : .hnd-state<e,a>) -> std/core/hnd/clause0<int,.hnd-state,e,a> */ 
  {
    struct kk_main__Hnd_state* _con737 = kk_main__as_Hnd_state(hnd);
    kk_std_core_hnd__clause0 fun_get = _con737->fun_get;
    return kk_std_core_hnd__clause0_dup(fun_get);
  }
}
 
// select `set` operation out of the `:state` effect handler

static inline kk_std_core_hnd__clause1 kk_main__select_set(kk_main__hnd_state hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : .hnd-state<e,a>) -> std/core/hnd/clause1<int,(),.hnd-state,e,a> */ 
  {
    struct kk_main__Hnd_state* _con738 = kk_main__as_Hnd_state(hnd);
    kk_std_core_hnd__clause1 fun_set = _con738->fun_set;
    return kk_std_core_hnd__clause1_dup(fun_set);
  }
}
 
// call `get` operation of the `:state` effect

static inline kk_integer_t kk_main_get(kk_context_t* _ctx) { /* () -> state int */ 
  kk_std_core_hnd__ev ev_582;
  kk_ssize_t _x739 = (KK_IZ(0)); /*ssize_t*/
  ev_582 = kk_evv_at(_x739,kk_context()); /*std/core/hnd/ev<.hnd-state>*/
  kk_box_t _x740;
  {
    struct kk_std_core_hnd_Ev* _con741 = kk_std_core_hnd__as_Ev(ev_582);
    kk_std_core_hnd__marker m0 = _con741->marker;
    kk_box_t _box_x621 = _con741->hnd;
    kk_main__hnd_state h = kk_main__hnd_state_unbox(_box_x621, NULL);
    kk_main__hnd_state_dup(h);
    kk_std_core_hnd__clause0 _match_730;
    kk_std_core_hnd__clause0 _brw_731 = kk_main__select_get(h, _ctx); /*std/core/hnd/clause0<int,.hnd-state,113,114>*/;
    kk_main__hnd_state_drop(h, _ctx);
    _match_730 = _brw_731; /*std/core/hnd/clause0<int,.hnd-state,113,114>*/
    {
      kk_function_t _fun_unbox_x624 = _match_730.clause;
      _x740 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x624, (_fun_unbox_x624, m0, ev_582, _ctx)); /*1005*/
    }
  }
  return kk_integer_unbox(_x740);
}
 
// call `set` operation of the `:state` effect

static inline kk_unit_t kk_main_set(kk_integer_t i, kk_context_t* _ctx) { /* (i : int) -> state () */ 
  kk_std_core_hnd__ev ev_584;
  kk_ssize_t _x743 = (KK_IZ(0)); /*ssize_t*/
  ev_584 = kk_evv_at(_x743,kk_context()); /*std/core/hnd/ev<.hnd-state>*/
  kk_box_t _x744;
  {
    struct kk_std_core_hnd_Ev* _con745 = kk_std_core_hnd__as_Ev(ev_584);
    kk_std_core_hnd__marker m0 = _con745->marker;
    kk_box_t _box_x627 = _con745->hnd;
    kk_main__hnd_state h = kk_main__hnd_state_unbox(_box_x627, NULL);
    kk_main__hnd_state_dup(h);
    kk_std_core_hnd__clause1 _match_728;
    kk_std_core_hnd__clause1 _brw_729 = kk_main__select_set(h, _ctx); /*std/core/hnd/clause1<int,(),.hnd-state,130,131>*/;
    kk_main__hnd_state_drop(h, _ctx);
    _match_728 = _brw_729; /*std/core/hnd/clause1<int,(),.hnd-state,130,131>*/
    {
      kk_function_t _fun_unbox_x631 = _match_728.clause;
      _x744 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x631, (_fun_unbox_x631, m0, ev_584, kk_integer_box(i), _ctx)); /*1010*/
    }
  }
  kk_unit_unbox(_x744); return kk_Unit;
}

kk_integer_t kk_main__mlift579_countdown(kk_unit_t wild__, kk_context_t* _ctx); /* (wild_ : ()) -> state int */ 

kk_integer_t kk_main__mlift580_countdown(kk_integer_t i, kk_context_t* _ctx); /* (i : int) -> state int */ 

kk_integer_t kk_main_countdown(kk_context_t* _ctx); /* () -> <div,state> int */ 

kk_integer_t kk_main_run(kk_integer_t n, kk_context_t* _ctx); /* (n : int) -> div int */ 

kk_unit_t kk_main_main(kk_context_t* _ctx); /* () -> <console,div,ndet> () */ 

void kk_main__init(kk_context_t* _ctx);


void kk_main__done(kk_context_t* _ctx);

#endif // header
