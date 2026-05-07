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

// type main/.hnd-prime
struct kk_main__hnd_prime_s {
  kk_block_t _block;
};
typedef struct kk_main__hnd_prime_s* kk_main__hnd_prime;
struct kk_main__Hnd_prime {
  struct kk_main__hnd_prime_s _base;
  kk_std_core_hnd__clause1 fun_prime;
};
static inline kk_main__hnd_prime kk_main__base_Hnd_prime(struct kk_main__Hnd_prime* _x) {
  return &_x->_base;
}
static inline kk_main__hnd_prime kk_main__new_Hnd_prime(kk_reuse_t _at, kk_std_core_hnd__clause1 fun_prime, kk_context_t* _ctx) {
  struct kk_main__Hnd_prime* _con = kk_block_alloc_at_as(struct kk_main__Hnd_prime, _at, 1 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->fun_prime = fun_prime;
  return kk_main__base_Hnd_prime(_con);
}
static inline struct kk_main__Hnd_prime* kk_main__as_Hnd_prime(kk_main__hnd_prime x) {
  return kk_basetype_as_assert(struct kk_main__Hnd_prime*, x, (kk_tag_t)(1) /* _tag */);
}
static inline bool kk_main__is_Hnd_prime(kk_main__hnd_prime x) {
  return (true);
}
static inline kk_main__hnd_prime kk_main__hnd_prime_dup(kk_main__hnd_prime _x) {
  return kk_basetype_dup_as(kk_main__hnd_prime, _x);
}
static inline void kk_main__hnd_prime_drop(kk_main__hnd_prime _x, kk_context_t* _ctx) {
  kk_basetype_drop(_x, _ctx);
}
static inline kk_main__hnd_prime kk_main__hnd_prime_hole() {
  return (kk_main__hnd_prime)(1);
}
static inline bool kk_main__hnd_prime_is_unique(kk_main__hnd_prime _x) {
  return kk_basetype_is_unique(_x);
}
static inline void kk_main__hnd_prime_free(kk_main__hnd_prime _x, kk_context_t* _ctx) {
  kk_basetype_free(_x, _ctx);
}
static inline void kk_main__hnd_prime_decref(kk_main__hnd_prime _x, kk_context_t* _ctx) {
  kk_basetype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_main__hnd_prime_dropn_reuse(kk_main__hnd_prime _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_basetype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_main__hnd_prime_dropn(kk_main__hnd_prime _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_basetype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_main__hnd_prime_reuse(kk_main__hnd_prime _x) {
  return kk_basetype_reuse(_x);
}
static inline kk_box_t kk_main__hnd_prime_box(kk_main__hnd_prime _x, kk_context_t* _ctx) {
  return kk_basetype_box(_x);
}
static inline kk_main__hnd_prime kk_main__hnd_prime_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_basetype_unbox_as(kk_main__hnd_prime, _x);
}

// type main/prime
struct kk_main__prime_s {
  kk_block_t _block;
};
typedef struct kk_main__prime_s* kk_main__prime;
struct kk_main_Prime {
  struct kk_main__prime_s _base;
  kk_main__hnd_prime _field1;
};
static inline kk_main__prime kk_main__base_Prime(struct kk_main_Prime* _x) {
  return &_x->_base;
}
static inline kk_main__prime kk_main__new_Prime(kk_reuse_t _at, kk_main__hnd_prime _field1, kk_context_t* _ctx) {
  struct kk_main_Prime* _con = kk_block_alloc_at_as(struct kk_main_Prime, _at, 1 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->_field1 = _field1;
  return kk_main__base_Prime(_con);
}
static inline struct kk_main_Prime* kk_main__as_Prime(kk_main__prime x) {
  return kk_basetype_as_assert(struct kk_main_Prime*, x, (kk_tag_t)(1) /* _tag */);
}
static inline bool kk_main__is_Prime(kk_main__prime x) {
  return (true);
}
static inline kk_main__prime kk_main__prime_dup(kk_main__prime _x) {
  return kk_basetype_dup_as(kk_main__prime, _x);
}
static inline void kk_main__prime_drop(kk_main__prime _x, kk_context_t* _ctx) {
  kk_basetype_drop(_x, _ctx);
}
static inline kk_main__prime kk_main__prime_hole() {
  return (kk_main__prime)(1);
}
static inline bool kk_main__prime_is_unique(kk_main__prime _x) {
  return kk_basetype_is_unique(_x);
}
static inline void kk_main__prime_free(kk_main__prime _x, kk_context_t* _ctx) {
  kk_basetype_free(_x, _ctx);
}
static inline void kk_main__prime_decref(kk_main__prime _x, kk_context_t* _ctx) {
  kk_basetype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_main__prime_dropn_reuse(kk_main__prime _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_basetype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_main__prime_dropn(kk_main__prime _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_basetype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_main__prime_reuse(kk_main__prime _x) {
  return kk_basetype_reuse(_x);
}
static inline kk_box_t kk_main__prime_box(kk_main__prime _x, kk_context_t* _ctx) {
  return kk_basetype_box(_x);
}
static inline kk_main__prime kk_main__prime_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_basetype_unbox_as(kk_main__prime, _x);
}

// value declarations

extern kk_std_core_hnd__htag kk_main__tag_prime;

kk_box_t kk_main__handle_prime(int32_t cfc, kk_main__hnd_prime hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (cfc : int32, hnd : .hnd-prime<e,b>, ret : (res : a) -> e b, action : () -> <prime|e> a) -> e b */ 
 
// select `prime` operation out of the `:prime` effect handler

static inline kk_std_core_hnd__clause1 kk_main__select_prime(kk_main__hnd_prime hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : .hnd-prime<e,a>) -> std/core/hnd/clause1<int,bool,.hnd-prime,e,a> */ 
  {
    struct kk_main__Hnd_prime* _con762 = kk_main__as_Hnd_prime(hnd);
    kk_std_core_hnd__clause1 fun_prime = _con762->fun_prime;
    return kk_std_core_hnd__clause1_dup(fun_prime);
  }
}
 
// call `prime` operation of the `:prime` effect

static inline bool kk_main_prime(kk_integer_t e, kk_context_t* _ctx) { /* (e : int) -> prime bool */ 
  kk_std_core_hnd__ev ev_544;
  kk_ssize_t _x763 = (KK_IZ(0)); /*ssize_t*/
  ev_544 = kk_evv_at(_x763,kk_context()); /*std/core/hnd/ev<.hnd-prime>*/
  kk_box_t _x764;
  {
    struct kk_std_core_hnd_Ev* _con765 = kk_std_core_hnd__as_Ev(ev_544);
    kk_std_core_hnd__marker m0 = _con765->marker;
    kk_box_t _box_x586 = _con765->hnd;
    kk_main__hnd_prime h = kk_main__hnd_prime_unbox(_box_x586, NULL);
    kk_main__hnd_prime_dup(h);
    kk_std_core_hnd__clause1 _match_755;
    kk_std_core_hnd__clause1 _brw_756 = kk_main__select_prime(h, _ctx); /*std/core/hnd/clause1<int,bool,.hnd-prime,100,101>*/;
    kk_main__hnd_prime_drop(h, _ctx);
    _match_755 = _brw_756; /*std/core/hnd/clause1<int,bool,.hnd-prime,100,101>*/
    {
      kk_function_t _fun_unbox_x590 = _match_755.clause;
      _x764 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x590, (_fun_unbox_x590, m0, ev_544, kk_integer_box(e), _ctx)); /*1010*/
    }
  }
  return kk_bool_unbox(_x764);
}

kk_integer_t kk_main__mlift542_primes(kk_integer_t a, kk_integer_t i, kk_integer_t n, bool _y_523, kk_context_t* _ctx); /* (a : int, i : int, n : int, bool) -> prime int */ 

kk_integer_t kk_main_primes(kk_integer_t i1, kk_integer_t n0, kk_integer_t a0, kk_context_t* _ctx); /* (i : int, n : int, a : int) -> <div,prime> int */ 

kk_integer_t kk_main_run(kk_integer_t n, kk_context_t* _ctx); /* (n : int) -> div int */ 

kk_unit_t kk_main_main(kk_context_t* _ctx); /* () -> <console,div,ndet> () */ 

void kk_main__init(kk_context_t* _ctx);


void kk_main__done(kk_context_t* _ctx);

#endif // header
