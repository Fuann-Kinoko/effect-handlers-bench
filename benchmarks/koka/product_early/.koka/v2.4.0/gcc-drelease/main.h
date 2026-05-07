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

// type main/.hnd-abort
struct kk_main__hnd_abort_s {
  kk_block_t _block;
};
typedef struct kk_main__hnd_abort_s* kk_main__hnd_abort;
struct kk_main__Hnd_abort {
  struct kk_main__hnd_abort_s _base;
  kk_std_core_hnd__clause1 ctl_done;
};
static inline kk_main__hnd_abort kk_main__base_Hnd_abort(struct kk_main__Hnd_abort* _x) {
  return &_x->_base;
}
static inline kk_main__hnd_abort kk_main__new_Hnd_abort(kk_reuse_t _at, kk_std_core_hnd__clause1 ctl_done, kk_context_t* _ctx) {
  struct kk_main__Hnd_abort* _con = kk_block_alloc_at_as(struct kk_main__Hnd_abort, _at, 1 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->ctl_done = ctl_done;
  return kk_main__base_Hnd_abort(_con);
}
static inline struct kk_main__Hnd_abort* kk_main__as_Hnd_abort(kk_main__hnd_abort x) {
  return kk_basetype_as_assert(struct kk_main__Hnd_abort*, x, (kk_tag_t)(1) /* _tag */);
}
static inline bool kk_main__is_Hnd_abort(kk_main__hnd_abort x) {
  return (true);
}
static inline kk_main__hnd_abort kk_main__hnd_abort_dup(kk_main__hnd_abort _x) {
  return kk_basetype_dup_as(kk_main__hnd_abort, _x);
}
static inline void kk_main__hnd_abort_drop(kk_main__hnd_abort _x, kk_context_t* _ctx) {
  kk_basetype_drop(_x, _ctx);
}
static inline kk_main__hnd_abort kk_main__hnd_abort_hole() {
  return (kk_main__hnd_abort)(1);
}
static inline bool kk_main__hnd_abort_is_unique(kk_main__hnd_abort _x) {
  return kk_basetype_is_unique(_x);
}
static inline void kk_main__hnd_abort_free(kk_main__hnd_abort _x, kk_context_t* _ctx) {
  kk_basetype_free(_x, _ctx);
}
static inline void kk_main__hnd_abort_decref(kk_main__hnd_abort _x, kk_context_t* _ctx) {
  kk_basetype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_main__hnd_abort_dropn_reuse(kk_main__hnd_abort _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_basetype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_main__hnd_abort_dropn(kk_main__hnd_abort _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_basetype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_main__hnd_abort_reuse(kk_main__hnd_abort _x) {
  return kk_basetype_reuse(_x);
}
static inline kk_box_t kk_main__hnd_abort_box(kk_main__hnd_abort _x, kk_context_t* _ctx) {
  return kk_basetype_box(_x);
}
static inline kk_main__hnd_abort kk_main__hnd_abort_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_basetype_unbox_as(kk_main__hnd_abort, _x);
}

// type main/abort
struct kk_main__abort_s {
  kk_block_t _block;
};
typedef struct kk_main__abort_s* kk_main__abort;
struct kk_main_Abort {
  struct kk_main__abort_s _base;
  kk_main__hnd_abort _field1;
};
static inline kk_main__abort kk_main__base_Abort(struct kk_main_Abort* _x) {
  return &_x->_base;
}
static inline kk_main__abort kk_main__new_Abort(kk_reuse_t _at, kk_main__hnd_abort _field1, kk_context_t* _ctx) {
  struct kk_main_Abort* _con = kk_block_alloc_at_as(struct kk_main_Abort, _at, 1 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->_field1 = _field1;
  return kk_main__base_Abort(_con);
}
static inline struct kk_main_Abort* kk_main__as_Abort(kk_main__abort x) {
  return kk_basetype_as_assert(struct kk_main_Abort*, x, (kk_tag_t)(1) /* _tag */);
}
static inline bool kk_main__is_Abort(kk_main__abort x) {
  return (true);
}
static inline kk_main__abort kk_main__abort_dup(kk_main__abort _x) {
  return kk_basetype_dup_as(kk_main__abort, _x);
}
static inline void kk_main__abort_drop(kk_main__abort _x, kk_context_t* _ctx) {
  kk_basetype_drop(_x, _ctx);
}
static inline kk_main__abort kk_main__abort_hole() {
  return (kk_main__abort)(1);
}
static inline bool kk_main__abort_is_unique(kk_main__abort _x) {
  return kk_basetype_is_unique(_x);
}
static inline void kk_main__abort_free(kk_main__abort _x, kk_context_t* _ctx) {
  kk_basetype_free(_x, _ctx);
}
static inline void kk_main__abort_decref(kk_main__abort _x, kk_context_t* _ctx) {
  kk_basetype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_main__abort_dropn_reuse(kk_main__abort _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_basetype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_main__abort_dropn(kk_main__abort _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_basetype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_main__abort_reuse(kk_main__abort _x) {
  return kk_basetype_reuse(_x);
}
static inline kk_box_t kk_main__abort_box(kk_main__abort _x, kk_context_t* _ctx) {
  return kk_basetype_box(_x);
}
static inline kk_main__abort kk_main__abort_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_basetype_unbox_as(kk_main__abort, _x);
}

// value declarations

extern kk_std_core_hnd__htag kk_main__tag_abort;

kk_box_t kk_main__handle_abort(int32_t cfc, kk_main__hnd_abort hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (cfc : int32, hnd : .hnd-abort<e,b>, ret : (res : a) -> e b, action : () -> <abort|e> a) -> e b */ 
 
// select `done` operation out of the `:abort` effect handler

static inline kk_std_core_hnd__clause1 kk_main__select_done(kk_main__hnd_abort hnd, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : .hnd-abort<e,b>) -> std/core/hnd/clause1<int,a,.hnd-abort,e,b> */ 
  {
    struct kk_main__Hnd_abort* _con670 = kk_main__as_Hnd_abort(hnd);
    kk_std_core_hnd__clause1 ctl_done = _con670->ctl_done;
    return kk_std_core_hnd__clause1_dup(ctl_done);
  }
}
 
// call `done` operation of the `:abort` effect

static inline kk_box_t kk_main_done(kk_integer_t i, kk_context_t* _ctx) { /* forall<a> (i : int) -> abort a */ 
  kk_std_core_hnd__ev ev_547;
  kk_ssize_t _x671 = (KK_IZ(0)); /*ssize_t*/
  ev_547 = kk_evv_at(_x671,kk_context()); /*std/core/hnd/ev<.hnd-abort>*/
  {
    struct kk_std_core_hnd_Ev* _con672 = kk_std_core_hnd__as_Ev(ev_547);
    kk_std_core_hnd__marker m0 = _con672->marker;
    kk_box_t _box_x569 = _con672->hnd;
    kk_main__hnd_abort h = kk_main__hnd_abort_unbox(_box_x569, NULL);
    kk_main__hnd_abort_dup(h);
    kk_std_core_hnd__clause1 _match_662;
    kk_std_core_hnd__clause1 _brw_663 = kk_main__select_done(h, _ctx); /*std/core/hnd/clause1<int,129,.hnd-abort,130,131>*/;
    kk_main__hnd_abort_drop(h, _ctx);
    _match_662 = _brw_663; /*std/core/hnd/clause1<int,129,.hnd-abort,130,131>*/
    {
      kk_function_t _fun_unbox_x573 = _match_662.clause;
      return kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x573, (_fun_unbox_x573, m0, ev_547, kk_integer_box(i), _ctx));
    }
  }
}

kk_std_core__list kk_main__ctail_enumerate(kk_integer_t i, kk_std_core_types__ctail _acc, kk_context_t* _ctx); /* (i : int, ctail<list<int>>) -> div list<int> */ 

kk_std_core__list kk_main_enumerate(kk_integer_t i0, kk_context_t* _ctx); /* (i : int) -> div list<int> */ 

kk_integer_t kk_main__mlift545_product(kk_integer_t y, kk_integer_t _y_541, kk_context_t* _ctx); /* (y : int, int) -> abort int */ 

kk_integer_t kk_main_product(kk_std_core__list xs, kk_context_t* _ctx); /* (xs : list<int>) -> abort int */ 

kk_integer_t kk_main_run_product(kk_std_core__list xs, kk_context_t* _ctx); /* (xs : list<int>) -> int */ 

kk_integer_t kk_main__lift431_run(kk_std_core__list xs, kk_integer_t i, kk_integer_t a, kk_context_t* _ctx); /* (xs : list<int>, i : int, a : int) -> div int */ 

static inline kk_integer_t kk_main_run(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> div int */ 
  kk_std_core__list xs = kk_main_enumerate(kk_integer_from_small(1000), _ctx); /*list<int>*/;
  return kk_main__lift431_run(xs, n, kk_integer_from_small(0), _ctx);
}

kk_unit_t kk_main_main(kk_context_t* _ctx); /* () -> <console,div,ndet> () */ 

void kk_main__init(kk_context_t* _ctx);


void kk_main__done(kk_context_t* _ctx);

#endif // header
