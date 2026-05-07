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

// type main/.hnd-fail
struct kk_main__hnd_fail_s {
  kk_block_t _block;
};
typedef struct kk_main__hnd_fail_s* kk_main__hnd_fail;
struct kk_main__Hnd_fail {
  struct kk_main__hnd_fail_s _base;
  kk_std_core_hnd__clause0 ctl_fail;
};
static inline kk_main__hnd_fail kk_main__base_Hnd_fail(struct kk_main__Hnd_fail* _x) {
  return &_x->_base;
}
static inline kk_main__hnd_fail kk_main__new_Hnd_fail(kk_reuse_t _at, kk_std_core_hnd__clause0 ctl_fail, kk_context_t* _ctx) {
  struct kk_main__Hnd_fail* _con = kk_block_alloc_at_as(struct kk_main__Hnd_fail, _at, 1 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->ctl_fail = ctl_fail;
  return kk_main__base_Hnd_fail(_con);
}
static inline struct kk_main__Hnd_fail* kk_main__as_Hnd_fail(kk_main__hnd_fail x) {
  return kk_basetype_as_assert(struct kk_main__Hnd_fail*, x, (kk_tag_t)(1) /* _tag */);
}
static inline bool kk_main__is_Hnd_fail(kk_main__hnd_fail x) {
  return (true);
}
static inline kk_main__hnd_fail kk_main__hnd_fail_dup(kk_main__hnd_fail _x) {
  return kk_basetype_dup_as(kk_main__hnd_fail, _x);
}
static inline void kk_main__hnd_fail_drop(kk_main__hnd_fail _x, kk_context_t* _ctx) {
  kk_basetype_drop(_x, _ctx);
}
static inline kk_main__hnd_fail kk_main__hnd_fail_hole() {
  return (kk_main__hnd_fail)(1);
}
static inline bool kk_main__hnd_fail_is_unique(kk_main__hnd_fail _x) {
  return kk_basetype_is_unique(_x);
}
static inline void kk_main__hnd_fail_free(kk_main__hnd_fail _x, kk_context_t* _ctx) {
  kk_basetype_free(_x, _ctx);
}
static inline void kk_main__hnd_fail_decref(kk_main__hnd_fail _x, kk_context_t* _ctx) {
  kk_basetype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_main__hnd_fail_dropn_reuse(kk_main__hnd_fail _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_basetype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_main__hnd_fail_dropn(kk_main__hnd_fail _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_basetype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_main__hnd_fail_reuse(kk_main__hnd_fail _x) {
  return kk_basetype_reuse(_x);
}
static inline kk_box_t kk_main__hnd_fail_box(kk_main__hnd_fail _x, kk_context_t* _ctx) {
  return kk_basetype_box(_x);
}
static inline kk_main__hnd_fail kk_main__hnd_fail_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_basetype_unbox_as(kk_main__hnd_fail, _x);
}

// type main/.hnd-flip
struct kk_main__hnd_flip_s {
  kk_block_t _block;
};
typedef struct kk_main__hnd_flip_s* kk_main__hnd_flip;
struct kk_main__Hnd_flip {
  struct kk_main__hnd_flip_s _base;
  kk_std_core_hnd__clause0 ctl_flip;
};
static inline kk_main__hnd_flip kk_main__base_Hnd_flip(struct kk_main__Hnd_flip* _x) {
  return &_x->_base;
}
static inline kk_main__hnd_flip kk_main__new_Hnd_flip(kk_reuse_t _at, kk_std_core_hnd__clause0 ctl_flip, kk_context_t* _ctx) {
  struct kk_main__Hnd_flip* _con = kk_block_alloc_at_as(struct kk_main__Hnd_flip, _at, 1 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->ctl_flip = ctl_flip;
  return kk_main__base_Hnd_flip(_con);
}
static inline struct kk_main__Hnd_flip* kk_main__as_Hnd_flip(kk_main__hnd_flip x) {
  return kk_basetype_as_assert(struct kk_main__Hnd_flip*, x, (kk_tag_t)(1) /* _tag */);
}
static inline bool kk_main__is_Hnd_flip(kk_main__hnd_flip x) {
  return (true);
}
static inline kk_main__hnd_flip kk_main__hnd_flip_dup(kk_main__hnd_flip _x) {
  return kk_basetype_dup_as(kk_main__hnd_flip, _x);
}
static inline void kk_main__hnd_flip_drop(kk_main__hnd_flip _x, kk_context_t* _ctx) {
  kk_basetype_drop(_x, _ctx);
}
static inline kk_main__hnd_flip kk_main__hnd_flip_hole() {
  return (kk_main__hnd_flip)(1);
}
static inline bool kk_main__hnd_flip_is_unique(kk_main__hnd_flip _x) {
  return kk_basetype_is_unique(_x);
}
static inline void kk_main__hnd_flip_free(kk_main__hnd_flip _x, kk_context_t* _ctx) {
  kk_basetype_free(_x, _ctx);
}
static inline void kk_main__hnd_flip_decref(kk_main__hnd_flip _x, kk_context_t* _ctx) {
  kk_basetype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_main__hnd_flip_dropn_reuse(kk_main__hnd_flip _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_basetype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_main__hnd_flip_dropn(kk_main__hnd_flip _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_basetype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_main__hnd_flip_reuse(kk_main__hnd_flip _x) {
  return kk_basetype_reuse(_x);
}
static inline kk_box_t kk_main__hnd_flip_box(kk_main__hnd_flip _x, kk_context_t* _ctx) {
  return kk_basetype_box(_x);
}
static inline kk_main__hnd_flip kk_main__hnd_flip_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_basetype_unbox_as(kk_main__hnd_flip, _x);
}

// type main/fail
struct kk_main__fail_s {
  kk_block_t _block;
};
typedef struct kk_main__fail_s* kk_main__fail;
struct kk_main_Fail {
  struct kk_main__fail_s _base;
  kk_main__hnd_fail _field1;
};
static inline kk_main__fail kk_main__base_Fail(struct kk_main_Fail* _x) {
  return &_x->_base;
}
static inline kk_main__fail kk_main__new_Fail(kk_reuse_t _at, kk_main__hnd_fail _field1, kk_context_t* _ctx) {
  struct kk_main_Fail* _con = kk_block_alloc_at_as(struct kk_main_Fail, _at, 1 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->_field1 = _field1;
  return kk_main__base_Fail(_con);
}
static inline struct kk_main_Fail* kk_main__as_Fail(kk_main__fail x) {
  return kk_basetype_as_assert(struct kk_main_Fail*, x, (kk_tag_t)(1) /* _tag */);
}
static inline bool kk_main__is_Fail(kk_main__fail x) {
  return (true);
}
static inline kk_main__fail kk_main__fail_dup(kk_main__fail _x) {
  return kk_basetype_dup_as(kk_main__fail, _x);
}
static inline void kk_main__fail_drop(kk_main__fail _x, kk_context_t* _ctx) {
  kk_basetype_drop(_x, _ctx);
}
static inline kk_main__fail kk_main__fail_hole() {
  return (kk_main__fail)(1);
}
static inline bool kk_main__fail_is_unique(kk_main__fail _x) {
  return kk_basetype_is_unique(_x);
}
static inline void kk_main__fail_free(kk_main__fail _x, kk_context_t* _ctx) {
  kk_basetype_free(_x, _ctx);
}
static inline void kk_main__fail_decref(kk_main__fail _x, kk_context_t* _ctx) {
  kk_basetype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_main__fail_dropn_reuse(kk_main__fail _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_basetype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_main__fail_dropn(kk_main__fail _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_basetype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_main__fail_reuse(kk_main__fail _x) {
  return kk_basetype_reuse(_x);
}
static inline kk_box_t kk_main__fail_box(kk_main__fail _x, kk_context_t* _ctx) {
  return kk_basetype_box(_x);
}
static inline kk_main__fail kk_main__fail_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_basetype_unbox_as(kk_main__fail, _x);
}

// type main/flip
struct kk_main__flip_s {
  kk_block_t _block;
};
typedef struct kk_main__flip_s* kk_main__flip;
struct kk_main_Flip {
  struct kk_main__flip_s _base;
  kk_main__hnd_flip _field1;
};
static inline kk_main__flip kk_main__base_Flip(struct kk_main_Flip* _x) {
  return &_x->_base;
}
static inline kk_main__flip kk_main__new_Flip(kk_reuse_t _at, kk_main__hnd_flip _field1, kk_context_t* _ctx) {
  struct kk_main_Flip* _con = kk_block_alloc_at_as(struct kk_main_Flip, _at, 1 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->_field1 = _field1;
  return kk_main__base_Flip(_con);
}
static inline struct kk_main_Flip* kk_main__as_Flip(kk_main__flip x) {
  return kk_basetype_as_assert(struct kk_main_Flip*, x, (kk_tag_t)(1) /* _tag */);
}
static inline bool kk_main__is_Flip(kk_main__flip x) {
  return (true);
}
static inline kk_main__flip kk_main__flip_dup(kk_main__flip _x) {
  return kk_basetype_dup_as(kk_main__flip, _x);
}
static inline void kk_main__flip_drop(kk_main__flip _x, kk_context_t* _ctx) {
  kk_basetype_drop(_x, _ctx);
}
static inline kk_main__flip kk_main__flip_hole() {
  return (kk_main__flip)(1);
}
static inline bool kk_main__flip_is_unique(kk_main__flip _x) {
  return kk_basetype_is_unique(_x);
}
static inline void kk_main__flip_free(kk_main__flip _x, kk_context_t* _ctx) {
  kk_basetype_free(_x, _ctx);
}
static inline void kk_main__flip_decref(kk_main__flip _x, kk_context_t* _ctx) {
  kk_basetype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_main__flip_dropn_reuse(kk_main__flip _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_basetype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_main__flip_dropn(kk_main__flip _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_basetype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_main__flip_reuse(kk_main__flip _x) {
  return kk_basetype_reuse(_x);
}
static inline kk_box_t kk_main__flip_box(kk_main__flip _x, kk_context_t* _ctx) {
  return kk_basetype_box(_x);
}
static inline kk_main__flip kk_main__flip_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_basetype_unbox_as(kk_main__flip, _x);
}

// value declarations

extern kk_std_core_hnd__htag kk_main__tag_fail;

kk_box_t kk_main__handle_fail(int32_t cfc, kk_main__hnd_fail hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (cfc : int32, hnd : .hnd-fail<e,b>, ret : (res : a) -> e b, action : () -> <fail|e> a) -> e b */ 

extern kk_std_core_hnd__htag kk_main__tag_flip;

kk_box_t kk_main__handle_flip(int32_t cfc, kk_main__hnd_flip hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (cfc : int32, hnd : .hnd-flip<e,b>, ret : (res : a) -> e b, action : () -> <flip|e> a) -> e b */ 
 
// select `fail` operation out of the `:fail` effect handler

static inline kk_std_core_hnd__clause0 kk_main__select_fail(kk_main__hnd_fail hnd, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : .hnd-fail<e,b>) -> std/core/hnd/clause0<a,.hnd-fail,e,b> */ 
  {
    struct kk_main__Hnd_fail* _con1242 = kk_main__as_Hnd_fail(hnd);
    kk_std_core_hnd__clause0 ctl_fail = _con1242->ctl_fail;
    return kk_std_core_hnd__clause0_dup(ctl_fail);
  }
}
 
// select `flip` operation out of the `:flip` effect handler

static inline kk_std_core_hnd__clause0 kk_main__select_flip(kk_main__hnd_flip hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : .hnd-flip<e,a>) -> std/core/hnd/clause0<bool,.hnd-flip,e,a> */ 
  {
    struct kk_main__Hnd_flip* _con1243 = kk_main__as_Hnd_flip(hnd);
    kk_std_core_hnd__clause0 ctl_flip = _con1243->ctl_flip;
    return kk_std_core_hnd__clause0_dup(ctl_flip);
  }
}

kk_integer_t kk_main_hash(kk_std_core_types__tuple3_ _pat__25__10, kk_context_t* _ctx); /* ((int, int, int)) -> int */ 
 
// call `fail` operation of the `:fail` effect

static inline kk_box_t kk_main_fail(kk_context_t* _ctx) { /* forall<a> () -> fail a */ 
  kk_std_core_hnd__ev ev_962;
  kk_ssize_t _x1248 = (KK_IZ(0)); /*ssize_t*/
  ev_962 = kk_evv_at(_x1248,kk_context()); /*std/core/hnd/ev<.hnd-fail>*/
  {
    struct kk_std_core_hnd_Ev* _con1249 = kk_std_core_hnd__as_Ev(ev_962);
    kk_std_core_hnd__marker m0 = _con1249->marker;
    kk_box_t _box_x1031 = _con1249->hnd;
    kk_main__hnd_fail h = kk_main__hnd_fail_unbox(_box_x1031, NULL);
    kk_main__hnd_fail_dup(h);
    kk_std_core_hnd__clause0 _match_1232;
    kk_std_core_hnd__clause0 _brw_1233 = kk_main__select_fail(h, _ctx); /*std/core/hnd/clause0<179,.hnd-fail,180,181>*/;
    kk_main__hnd_fail_drop(h, _ctx);
    _match_1232 = _brw_1233; /*std/core/hnd/clause0<179,.hnd-fail,180,181>*/
    {
      kk_function_t f = _match_1232.clause;
      return kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_context_t*), f, (f, m0, ev_962, _ctx));
    }
  }
}
 
// call `flip` operation of the `:flip` effect

static inline bool kk_main_flip(kk_context_t* _ctx) { /* () -> flip bool */ 
  kk_std_core_hnd__ev ev_964;
  kk_ssize_t _x1251 = (KK_IZ(0)); /*ssize_t*/
  ev_964 = kk_evv_at(_x1251,kk_context()); /*std/core/hnd/ev<.hnd-flip>*/
  kk_box_t _x1252;
  {
    struct kk_std_core_hnd_Ev* _con1253 = kk_std_core_hnd__as_Ev(ev_964);
    kk_std_core_hnd__marker m0 = _con1253->marker;
    kk_box_t _box_x1032 = _con1253->hnd;
    kk_main__hnd_flip h = kk_main__hnd_flip_unbox(_box_x1032, NULL);
    kk_main__hnd_flip_dup(h);
    kk_std_core_hnd__clause0 _match_1230;
    kk_std_core_hnd__clause0 _brw_1231 = kk_main__select_flip(h, _ctx); /*std/core/hnd/clause0<bool,.hnd-flip,197,198>*/;
    kk_main__hnd_flip_drop(h, _ctx);
    _match_1230 = _brw_1231; /*std/core/hnd/clause0<bool,.hnd-flip,197,198>*/
    {
      kk_function_t _fun_unbox_x1035 = _match_1230.clause;
      _x1252 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x1035, (_fun_unbox_x1035, m0, ev_964, _ctx)); /*1005*/
    }
  }
  return kk_bool_unbox(_x1252);
}

kk_integer_t kk_main__mlift955_choice(kk_integer_t n, bool _y_928, kk_context_t* _ctx); /* (n : int, bool) -> <flip,fail,div> int */ 

kk_integer_t kk_main_choice(kk_integer_t n0, kk_context_t* _ctx); /* (n : int) -> <div,fail,flip> int */ 

kk_std_core_types__tuple3_ kk_main__mlift956_triple(kk_integer_t i, kk_integer_t j, kk_integer_t s, kk_integer_t k, kk_context_t* _ctx); /* (i : int, j : int, s : int, k : int) -> <div,fail,flip> (int, int, int) */ 

kk_std_core_types__tuple3_ kk_main__mlift957_triple(kk_integer_t i, kk_integer_t s, kk_integer_t j, kk_context_t* _ctx); /* (i : int, s : int, j : int) -> <div,fail,flip> (int, int, int) */ 

kk_std_core_types__tuple3_ kk_main__mlift958_triple(kk_integer_t s, kk_integer_t i, kk_context_t* _ctx); /* (s : int, i : int) -> <div,fail,flip> (int, int, int) */ 

kk_std_core_types__tuple3_ kk_main_triple(kk_integer_t n, kk_integer_t s, kk_context_t* _ctx); /* (n : int, s : int) -> <div,fail,flip> (int, int, int) */ 

kk_integer_t kk_main__mlift959_run(kk_std_core_types__tuple3_ _y_938, kk_context_t* _ctx); /* ((int, int, int)) -> <div,fail,flip> int */ 

kk_integer_t kk_main_run(kk_integer_t n, kk_integer_t s, kk_context_t* _ctx); /* (n : int, s : int) -> div int */ 

kk_unit_t kk_main_main(kk_context_t* _ctx); /* () -> <console,div,ndet> () */ 

void kk_main__init(kk_context_t* _ctx);


void kk_main__done(kk_context_t* _ctx);

#endif // header
