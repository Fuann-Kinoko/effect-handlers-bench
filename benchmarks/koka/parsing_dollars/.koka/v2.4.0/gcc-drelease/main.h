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

// type main/.hnd-read
struct kk_main__hnd_read_s {
  kk_block_t _block;
};
typedef struct kk_main__hnd_read_s* kk_main__hnd_read;
struct kk_main__Hnd_read {
  struct kk_main__hnd_read_s _base;
  kk_std_core_hnd__clause0 fun_read;
};
static inline kk_main__hnd_read kk_main__base_Hnd_read(struct kk_main__Hnd_read* _x) {
  return &_x->_base;
}
static inline kk_main__hnd_read kk_main__new_Hnd_read(kk_reuse_t _at, kk_std_core_hnd__clause0 fun_read, kk_context_t* _ctx) {
  struct kk_main__Hnd_read* _con = kk_block_alloc_at_as(struct kk_main__Hnd_read, _at, 1 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->fun_read = fun_read;
  return kk_main__base_Hnd_read(_con);
}
static inline struct kk_main__Hnd_read* kk_main__as_Hnd_read(kk_main__hnd_read x) {
  return kk_basetype_as_assert(struct kk_main__Hnd_read*, x, (kk_tag_t)(1) /* _tag */);
}
static inline bool kk_main__is_Hnd_read(kk_main__hnd_read x) {
  return (true);
}
static inline kk_main__hnd_read kk_main__hnd_read_dup(kk_main__hnd_read _x) {
  return kk_basetype_dup_as(kk_main__hnd_read, _x);
}
static inline void kk_main__hnd_read_drop(kk_main__hnd_read _x, kk_context_t* _ctx) {
  kk_basetype_drop(_x, _ctx);
}
static inline kk_main__hnd_read kk_main__hnd_read_hole() {
  return (kk_main__hnd_read)(1);
}
static inline bool kk_main__hnd_read_is_unique(kk_main__hnd_read _x) {
  return kk_basetype_is_unique(_x);
}
static inline void kk_main__hnd_read_free(kk_main__hnd_read _x, kk_context_t* _ctx) {
  kk_basetype_free(_x, _ctx);
}
static inline void kk_main__hnd_read_decref(kk_main__hnd_read _x, kk_context_t* _ctx) {
  kk_basetype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_main__hnd_read_dropn_reuse(kk_main__hnd_read _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_basetype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_main__hnd_read_dropn(kk_main__hnd_read _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_basetype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_main__hnd_read_reuse(kk_main__hnd_read _x) {
  return kk_basetype_reuse(_x);
}
static inline kk_box_t kk_main__hnd_read_box(kk_main__hnd_read _x, kk_context_t* _ctx) {
  return kk_basetype_box(_x);
}
static inline kk_main__hnd_read kk_main__hnd_read_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_basetype_unbox_as(kk_main__hnd_read, _x);
}

// type main/.hnd-stop
struct kk_main__hnd_stop_s {
  kk_block_t _block;
};
typedef struct kk_main__hnd_stop_s* kk_main__hnd_stop;
struct kk_main__Hnd_stop {
  struct kk_main__hnd_stop_s _base;
  kk_std_core_hnd__clause0 ctl_stop;
};
static inline kk_main__hnd_stop kk_main__base_Hnd_stop(struct kk_main__Hnd_stop* _x) {
  return &_x->_base;
}
static inline kk_main__hnd_stop kk_main__new_Hnd_stop(kk_reuse_t _at, kk_std_core_hnd__clause0 ctl_stop, kk_context_t* _ctx) {
  struct kk_main__Hnd_stop* _con = kk_block_alloc_at_as(struct kk_main__Hnd_stop, _at, 1 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->ctl_stop = ctl_stop;
  return kk_main__base_Hnd_stop(_con);
}
static inline struct kk_main__Hnd_stop* kk_main__as_Hnd_stop(kk_main__hnd_stop x) {
  return kk_basetype_as_assert(struct kk_main__Hnd_stop*, x, (kk_tag_t)(1) /* _tag */);
}
static inline bool kk_main__is_Hnd_stop(kk_main__hnd_stop x) {
  return (true);
}
static inline kk_main__hnd_stop kk_main__hnd_stop_dup(kk_main__hnd_stop _x) {
  return kk_basetype_dup_as(kk_main__hnd_stop, _x);
}
static inline void kk_main__hnd_stop_drop(kk_main__hnd_stop _x, kk_context_t* _ctx) {
  kk_basetype_drop(_x, _ctx);
}
static inline kk_main__hnd_stop kk_main__hnd_stop_hole() {
  return (kk_main__hnd_stop)(1);
}
static inline bool kk_main__hnd_stop_is_unique(kk_main__hnd_stop _x) {
  return kk_basetype_is_unique(_x);
}
static inline void kk_main__hnd_stop_free(kk_main__hnd_stop _x, kk_context_t* _ctx) {
  kk_basetype_free(_x, _ctx);
}
static inline void kk_main__hnd_stop_decref(kk_main__hnd_stop _x, kk_context_t* _ctx) {
  kk_basetype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_main__hnd_stop_dropn_reuse(kk_main__hnd_stop _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_basetype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_main__hnd_stop_dropn(kk_main__hnd_stop _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_basetype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_main__hnd_stop_reuse(kk_main__hnd_stop _x) {
  return kk_basetype_reuse(_x);
}
static inline kk_box_t kk_main__hnd_stop_box(kk_main__hnd_stop _x, kk_context_t* _ctx) {
  return kk_basetype_box(_x);
}
static inline kk_main__hnd_stop kk_main__hnd_stop_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_basetype_unbox_as(kk_main__hnd_stop, _x);
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

// type main/read
struct kk_main__read_s {
  kk_block_t _block;
};
typedef struct kk_main__read_s* kk_main__read;
struct kk_main_Read {
  struct kk_main__read_s _base;
  kk_main__hnd_read _field1;
};
static inline kk_main__read kk_main__base_Read(struct kk_main_Read* _x) {
  return &_x->_base;
}
static inline kk_main__read kk_main__new_Read(kk_reuse_t _at, kk_main__hnd_read _field1, kk_context_t* _ctx) {
  struct kk_main_Read* _con = kk_block_alloc_at_as(struct kk_main_Read, _at, 1 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->_field1 = _field1;
  return kk_main__base_Read(_con);
}
static inline struct kk_main_Read* kk_main__as_Read(kk_main__read x) {
  return kk_basetype_as_assert(struct kk_main_Read*, x, (kk_tag_t)(1) /* _tag */);
}
static inline bool kk_main__is_Read(kk_main__read x) {
  return (true);
}
static inline kk_main__read kk_main__read_dup(kk_main__read _x) {
  return kk_basetype_dup_as(kk_main__read, _x);
}
static inline void kk_main__read_drop(kk_main__read _x, kk_context_t* _ctx) {
  kk_basetype_drop(_x, _ctx);
}
static inline kk_main__read kk_main__read_hole() {
  return (kk_main__read)(1);
}
static inline bool kk_main__read_is_unique(kk_main__read _x) {
  return kk_basetype_is_unique(_x);
}
static inline void kk_main__read_free(kk_main__read _x, kk_context_t* _ctx) {
  kk_basetype_free(_x, _ctx);
}
static inline void kk_main__read_decref(kk_main__read _x, kk_context_t* _ctx) {
  kk_basetype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_main__read_dropn_reuse(kk_main__read _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_basetype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_main__read_dropn(kk_main__read _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_basetype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_main__read_reuse(kk_main__read _x) {
  return kk_basetype_reuse(_x);
}
static inline kk_box_t kk_main__read_box(kk_main__read _x, kk_context_t* _ctx) {
  return kk_basetype_box(_x);
}
static inline kk_main__read kk_main__read_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_basetype_unbox_as(kk_main__read, _x);
}

// type main/stop
struct kk_main__stop_s {
  kk_block_t _block;
};
typedef struct kk_main__stop_s* kk_main__stop;
struct kk_main_Stop {
  struct kk_main__stop_s _base;
  kk_main__hnd_stop _field1;
};
static inline kk_main__stop kk_main__base_Stop(struct kk_main_Stop* _x) {
  return &_x->_base;
}
static inline kk_main__stop kk_main__new_Stop(kk_reuse_t _at, kk_main__hnd_stop _field1, kk_context_t* _ctx) {
  struct kk_main_Stop* _con = kk_block_alloc_at_as(struct kk_main_Stop, _at, 1 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->_field1 = _field1;
  return kk_main__base_Stop(_con);
}
static inline struct kk_main_Stop* kk_main__as_Stop(kk_main__stop x) {
  return kk_basetype_as_assert(struct kk_main_Stop*, x, (kk_tag_t)(1) /* _tag */);
}
static inline bool kk_main__is_Stop(kk_main__stop x) {
  return (true);
}
static inline kk_main__stop kk_main__stop_dup(kk_main__stop _x) {
  return kk_basetype_dup_as(kk_main__stop, _x);
}
static inline void kk_main__stop_drop(kk_main__stop _x, kk_context_t* _ctx) {
  kk_basetype_drop(_x, _ctx);
}
static inline kk_main__stop kk_main__stop_hole() {
  return (kk_main__stop)(1);
}
static inline bool kk_main__stop_is_unique(kk_main__stop _x) {
  return kk_basetype_is_unique(_x);
}
static inline void kk_main__stop_free(kk_main__stop _x, kk_context_t* _ctx) {
  kk_basetype_free(_x, _ctx);
}
static inline void kk_main__stop_decref(kk_main__stop _x, kk_context_t* _ctx) {
  kk_basetype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_main__stop_dropn_reuse(kk_main__stop _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_basetype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_main__stop_dropn(kk_main__stop _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_basetype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_main__stop_reuse(kk_main__stop _x) {
  return kk_basetype_reuse(_x);
}
static inline kk_box_t kk_main__stop_box(kk_main__stop _x, kk_context_t* _ctx) {
  return kk_basetype_box(_x);
}
static inline kk_main__stop kk_main__stop_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_basetype_unbox_as(kk_main__stop, _x);
}

// value declarations

extern kk_std_core_hnd__htag kk_main__tag_emit;

kk_box_t kk_main__handle_emit(int32_t cfc, kk_main__hnd_emit hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (cfc : int32, hnd : .hnd-emit<e,b>, ret : (res : a) -> e b, action : () -> <emit|e> a) -> e b */ 

extern kk_std_core_hnd__htag kk_main__tag_read;

kk_box_t kk_main__handle_read(int32_t cfc, kk_main__hnd_read hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (cfc : int32, hnd : .hnd-read<e,b>, ret : (res : a) -> e b, action : () -> <read|e> a) -> e b */ 

extern kk_std_core_hnd__htag kk_main__tag_stop;

kk_box_t kk_main__handle_stop(int32_t cfc, kk_main__hnd_stop hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (cfc : int32, hnd : .hnd-stop<e,b>, ret : (res : a) -> e b, action : () -> <stop|e> a) -> e b */ 
 
// select `emit` operation out of the `:emit` effect handler

static inline kk_std_core_hnd__clause1 kk_main__select_emit(kk_main__hnd_emit hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : .hnd-emit<e,a>) -> std/core/hnd/clause1<int,(),.hnd-emit,e,a> */ 
  {
    struct kk_main__Hnd_emit* _con1939 = kk_main__as_Hnd_emit(hnd);
    kk_std_core_hnd__clause1 fun_emit = _con1939->fun_emit;
    return kk_std_core_hnd__clause1_dup(fun_emit);
  }
}
 
// select `read` operation out of the `:read` effect handler

static inline kk_std_core_hnd__clause0 kk_main__select_read(kk_main__hnd_read hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : .hnd-read<e,a>) -> std/core/hnd/clause0<chr,.hnd-read,e,a> */ 
  {
    struct kk_main__Hnd_read* _con1940 = kk_main__as_Hnd_read(hnd);
    kk_std_core_hnd__clause0 fun_read = _con1940->fun_read;
    return kk_std_core_hnd__clause0_dup(fun_read);
  }
}
 
// select `stop` operation out of the `:stop` effect handler

static inline kk_std_core_hnd__clause0 kk_main__select_stop(kk_main__hnd_stop hnd, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : .hnd-stop<e,b>) -> std/core/hnd/clause0<a,.hnd-stop,e,b> */ 
  {
    struct kk_main__Hnd_stop* _con1941 = kk_main__as_Hnd_stop(hnd);
    kk_std_core_hnd__clause0 ctl_stop = _con1941->ctl_stop;
    return kk_std_core_hnd__clause0_dup(ctl_stop);
  }
}

static inline kk_integer_t kk_main_dollar(kk_context_t* _ctx) { /* () -> chr */ 
  return kk_integer_from_small(36);
}

static inline kk_integer_t kk_main_newline(kk_context_t* _ctx) { /* () -> chr */ 
  return kk_integer_from_small(10);
}

static inline bool kk_main_is_dollar(kk_integer_t c, kk_context_t* _ctx) { /* (c : chr) -> bool */ 
  bool _brw_1927 = kk_integer_eq_borrow(c,(kk_integer_from_small(36)),kk_context()); /*bool*/;
  kk_integer_drop(c, _ctx);
  return _brw_1927;
}

static inline bool kk_main_is_newline(kk_integer_t c, kk_context_t* _ctx) { /* (c : chr) -> bool */ 
  bool _brw_1926 = kk_integer_eq_borrow(c,(kk_integer_from_small(10)),kk_context()); /*bool*/;
  kk_integer_drop(c, _ctx);
  return _brw_1926;
}
 
// call `stop` operation of the `:stop` effect

static inline kk_box_t kk_main_stop(kk_context_t* _ctx) { /* forall<a> () -> stop a */ 
  kk_std_core_hnd__ev ev_1417;
  kk_ssize_t _x1942 = (KK_IZ(0)); /*ssize_t*/
  ev_1417 = kk_evv_at(_x1942,kk_context()); /*std/core/hnd/ev<.hnd-stop>*/
  {
    struct kk_std_core_hnd_Ev* _con1943 = kk_std_core_hnd__as_Ev(ev_1417);
    kk_std_core_hnd__marker m0 = _con1943->marker;
    kk_box_t _box_x1548 = _con1943->hnd;
    kk_main__hnd_stop h = kk_main__hnd_stop_unbox(_box_x1548, NULL);
    kk_main__hnd_stop_dup(h);
    kk_std_core_hnd__clause0 _match_1924;
    kk_std_core_hnd__clause0 _brw_1925 = kk_main__select_stop(h, _ctx); /*std/core/hnd/clause0<312,.hnd-stop,313,314>*/;
    kk_main__hnd_stop_drop(h, _ctx);
    _match_1924 = _brw_1925; /*std/core/hnd/clause0<312,.hnd-stop,313,314>*/
    {
      kk_function_t f = _match_1924.clause;
      return kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_context_t*), f, (f, m0, ev_1417, _ctx));
    }
  }
}

kk_unit_t kk_main_catch(kk_function_t action, kk_context_t* _ctx); /* forall<e> (action : () -> <stop|e> ()) -> e () */ 
 
// call `emit` operation of the `:emit` effect

static inline kk_unit_t kk_main_emit(kk_integer_t e, kk_context_t* _ctx) { /* (e : int) -> emit () */ 
  kk_std_core_hnd__ev ev_1419;
  kk_ssize_t _x1954 = (KK_IZ(0)); /*ssize_t*/
  ev_1419 = kk_evv_at(_x1954,kk_context()); /*std/core/hnd/ev<.hnd-emit>*/
  kk_box_t _x1955;
  {
    struct kk_std_core_hnd_Ev* _con1956 = kk_std_core_hnd__as_Ev(ev_1419);
    kk_std_core_hnd__marker m0 = _con1956->marker;
    kk_box_t _box_x1564 = _con1956->hnd;
    kk_main__hnd_emit h = kk_main__hnd_emit_unbox(_box_x1564, NULL);
    kk_main__hnd_emit_dup(h);
    kk_std_core_hnd__clause1 _match_1922;
    kk_std_core_hnd__clause1 _brw_1923 = kk_main__select_emit(h, _ctx); /*std/core/hnd/clause1<int,(),.hnd-emit,274,275>*/;
    kk_main__hnd_emit_drop(h, _ctx);
    _match_1922 = _brw_1923; /*std/core/hnd/clause1<int,(),.hnd-emit,274,275>*/
    {
      kk_function_t _fun_unbox_x1568 = _match_1922.clause;
      _x1955 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1568, (_fun_unbox_x1568, m0, ev_1419, kk_integer_box(e), _ctx)); /*1010*/
    }
  }
  kk_unit_unbox(_x1955); return kk_Unit;
}
 
// call `read` operation of the `:read` effect

static inline kk_integer_t kk_main_read(kk_context_t* _ctx) { /* () -> read chr */ 
  kk_std_core_hnd__ev ev_1422;
  kk_ssize_t _x1958 = (KK_IZ(0)); /*ssize_t*/
  ev_1422 = kk_evv_at(_x1958,kk_context()); /*std/core/hnd/ev<.hnd-read>*/
  kk_box_t _x1959;
  {
    struct kk_std_core_hnd_Ev* _con1960 = kk_std_core_hnd__as_Ev(ev_1422);
    kk_std_core_hnd__marker m0 = _con1960->marker;
    kk_box_t _box_x1572 = _con1960->hnd;
    kk_main__hnd_read h = kk_main__hnd_read_unbox(_box_x1572, NULL);
    kk_main__hnd_read_dup(h);
    kk_std_core_hnd__clause0 _match_1920;
    kk_std_core_hnd__clause0 _brw_1921 = kk_main__select_read(h, _ctx); /*std/core/hnd/clause0<chr,.hnd-read,291,292>*/;
    kk_main__hnd_read_drop(h, _ctx);
    _match_1920 = _brw_1921; /*std/core/hnd/clause0<chr,.hnd-read,291,292>*/
    {
      kk_function_t _fun_unbox_x1575 = _match_1920.clause;
      _x1959 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x1575, (_fun_unbox_x1575, m0, ev_1422, _ctx)); /*1005*/
    }
  }
  return kk_integer_unbox(_x1959);
}
 
// monadic lift

static inline kk_integer_t kk_main__mlift1401_feed(kk_unit_t wild__0, kk_context_t* _ctx) { /* forall<h,e> (wild_0 : ()) -> <local<h>,stop|e> int */ 
  return kk_integer_from_small(10);
}

kk_integer_t kk_main__mlift1402_feed(kk_ref_t j, kk_integer_t _y_1353, kk_context_t* _ctx); /* forall<h,e> (j : local-var<h,int>, int) -> <local<h>,stop|e> chr */ 

kk_integer_t kk_main__mlift1403_feed(kk_ref_t i, kk_ref_t j, kk_unit_t wild__, kk_context_t* _ctx); /* forall<h,e> (i : local-var<h,int>, j : local-var<h,int>, wild_ : ()) -> <local<h>,stop|e> chr */ 

kk_integer_t kk_main__mlift1404_feed(kk_ref_t i, kk_ref_t j, kk_integer_t _y_1351, kk_context_t* _ctx); /* forall<h,e> (i : local-var<h,int>, j : local-var<h,int>, int) -> <local<h>,stop|e> chr */ 
 
// monadic lift

static inline kk_integer_t kk_main__mlift1405_feed(kk_unit_t wild__1, kk_context_t* _ctx) { /* forall<h,e> (wild_1 : ()) -> <local<h>,stop|e> int */ 
  return kk_integer_from_small(36);
}

kk_integer_t kk_main__mlift1406_feed(kk_ref_t j, kk_integer_t _y_1355, kk_context_t* _ctx); /* forall<h,e> (j : local-var<h,int>, int) -> <local<h>,stop|e> chr */ 

kk_integer_t kk_main__mlift1407_feed(kk_ref_t i, kk_ref_t j, kk_integer_t _y_1350, kk_context_t* _ctx); /* forall<h,e> (i : local-var<h,int>, j : local-var<h,int>, int) -> <local<h>,stop|e> chr */ 

kk_integer_t kk_main__mlift1408_feed(kk_ref_t i, kk_ref_t j, kk_integer_t n, kk_integer_t _y_1347, kk_context_t* _ctx); /* forall<h,e> (i : local-var<h,int>, j : local-var<h,int>, n : int, int) -> <local<h>,stop|e> chr */ 

kk_unit_t kk_main_feed(kk_integer_t n, kk_function_t action, kk_context_t* _ctx); /* forall<e> (n : int, action : () -> <read,stop|e> ()) -> <stop|e> () */ 

kk_box_t kk_main__mlift1409_parse(kk_unit_t wild__, kk_context_t* _ctx); /* (wild_ : ()) -> <emit,stop,read,div> 146 */ 

kk_box_t kk_main__mlift1410_parse(kk_integer_t a, kk_integer_t c, kk_context_t* _ctx); /* forall<a> (a : int, c : chr) -> <read,emit,stop,div> a */ 

kk_box_t kk_main_parse(kk_integer_t a0, kk_context_t* _ctx); /* forall<a> (a : int) -> <div,emit,read,stop> a */ 
 
// monadic lift

static inline kk_unit_t kk_main__mlift1411_sum(kk_integer_t e, kk_ref_t s, kk_integer_t _y_1374, kk_context_t* _ctx) { /* forall<h,e> (e : int, s : local-var<h,int>, int) -> <local<h>|e> () */ 
  kk_integer_t _b_1758_1756 = kk_integer_add(_y_1374,e,kk_context()); /*int*/;
  kk_unit_t _brw_1878 = kk_Unit;
  kk_ref_set_borrow(s,(kk_integer_box(_b_1758_1756)),kk_context());
  kk_ref_drop(s, _ctx);
  _brw_1878; return kk_Unit;
}
 
// monadic lift

static inline kk_integer_t kk_main__mlift1412_sum(kk_ref_t s, kk_unit_t wild__, kk_context_t* _ctx) { /* forall<h,e> (s : local-var<h,int>, wild_ : ()) -> <local<h>,emit|e> int */ 
  kk_box_t _x2050 = kk_ref_get(s,kk_context()); /*1000*/
  return kk_integer_unbox(_x2050);
}

kk_integer_t kk_main_sum(kk_function_t action, kk_context_t* _ctx); /* forall<e> (action : () -> <emit|e> ()) -> e int */ 
 
// monadic lift

static inline kk_integer_t kk_main__mlift1413_run(kk_ref_t s, kk_unit_t wild__, kk_context_t* _ctx) { /* forall<h> (s : local-var<h,int>, wild_ : ()) -> <local<h>,emit,div> int */ 
  kk_box_t _x2069 = kk_ref_get(s,kk_context()); /*1000*/
  return kk_integer_unbox(_x2069);
}

kk_integer_t kk_main_run(kk_integer_t n, kk_context_t* _ctx); /* (n : int) -> div int */ 

kk_unit_t kk_main_main(kk_context_t* _ctx); /* () -> <console,div,ndet> () */ 

void kk_main__init(kk_context_t* _ctx);


void kk_main__done(kk_context_t* _ctx);

#endif // header
