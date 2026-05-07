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

// type main/.hnd-search
struct kk_main__hnd_search_s {
  kk_block_t _block;
};
typedef struct kk_main__hnd_search_s* kk_main__hnd_search;
struct kk_main__Hnd_search {
  struct kk_main__hnd_search_s _base;
  kk_std_core_hnd__clause0 ctl_fail;
  kk_std_core_hnd__clause1 ctl_pick;
};
static inline kk_main__hnd_search kk_main__base_Hnd_search(struct kk_main__Hnd_search* _x) {
  return &_x->_base;
}
static inline kk_main__hnd_search kk_main__new_Hnd_search(kk_reuse_t _at, kk_std_core_hnd__clause0 ctl_fail, kk_std_core_hnd__clause1 ctl_pick, kk_context_t* _ctx) {
  struct kk_main__Hnd_search* _con = kk_block_alloc_at_as(struct kk_main__Hnd_search, _at, 2 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->ctl_fail = ctl_fail;
  _con->ctl_pick = ctl_pick;
  return kk_main__base_Hnd_search(_con);
}
static inline struct kk_main__Hnd_search* kk_main__as_Hnd_search(kk_main__hnd_search x) {
  return kk_basetype_as_assert(struct kk_main__Hnd_search*, x, (kk_tag_t)(1) /* _tag */);
}
static inline bool kk_main__is_Hnd_search(kk_main__hnd_search x) {
  return (true);
}
static inline kk_main__hnd_search kk_main__hnd_search_dup(kk_main__hnd_search _x) {
  return kk_basetype_dup_as(kk_main__hnd_search, _x);
}
static inline void kk_main__hnd_search_drop(kk_main__hnd_search _x, kk_context_t* _ctx) {
  kk_basetype_drop(_x, _ctx);
}
static inline kk_main__hnd_search kk_main__hnd_search_hole() {
  return (kk_main__hnd_search)(1);
}
static inline bool kk_main__hnd_search_is_unique(kk_main__hnd_search _x) {
  return kk_basetype_is_unique(_x);
}
static inline void kk_main__hnd_search_free(kk_main__hnd_search _x, kk_context_t* _ctx) {
  kk_basetype_free(_x, _ctx);
}
static inline void kk_main__hnd_search_decref(kk_main__hnd_search _x, kk_context_t* _ctx) {
  kk_basetype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_main__hnd_search_dropn_reuse(kk_main__hnd_search _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_basetype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_main__hnd_search_dropn(kk_main__hnd_search _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_basetype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_main__hnd_search_reuse(kk_main__hnd_search _x) {
  return kk_basetype_reuse(_x);
}
static inline kk_box_t kk_main__hnd_search_box(kk_main__hnd_search _x, kk_context_t* _ctx) {
  return kk_basetype_box(_x);
}
static inline kk_main__hnd_search kk_main__hnd_search_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_basetype_unbox_as(kk_main__hnd_search, _x);
}

// type main/search
struct kk_main__search_s {
  kk_block_t _block;
};
typedef struct kk_main__search_s* kk_main__search;
struct kk_main_Search {
  struct kk_main__search_s _base;
  kk_main__hnd_search _field1;
};
static inline kk_main__search kk_main__base_Search(struct kk_main_Search* _x) {
  return &_x->_base;
}
static inline kk_main__search kk_main__new_Search(kk_reuse_t _at, kk_main__hnd_search _field1, kk_context_t* _ctx) {
  struct kk_main_Search* _con = kk_block_alloc_at_as(struct kk_main_Search, _at, 1 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->_field1 = _field1;
  return kk_main__base_Search(_con);
}
static inline struct kk_main_Search* kk_main__as_Search(kk_main__search x) {
  return kk_basetype_as_assert(struct kk_main_Search*, x, (kk_tag_t)(1) /* _tag */);
}
static inline bool kk_main__is_Search(kk_main__search x) {
  return (true);
}
static inline kk_main__search kk_main__search_dup(kk_main__search _x) {
  return kk_basetype_dup_as(kk_main__search, _x);
}
static inline void kk_main__search_drop(kk_main__search _x, kk_context_t* _ctx) {
  kk_basetype_drop(_x, _ctx);
}
static inline kk_main__search kk_main__search_hole() {
  return (kk_main__search)(1);
}
static inline bool kk_main__search_is_unique(kk_main__search _x) {
  return kk_basetype_is_unique(_x);
}
static inline void kk_main__search_free(kk_main__search _x, kk_context_t* _ctx) {
  kk_basetype_free(_x, _ctx);
}
static inline void kk_main__search_decref(kk_main__search _x, kk_context_t* _ctx) {
  kk_basetype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_main__search_dropn_reuse(kk_main__search _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_basetype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_main__search_dropn(kk_main__search _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_basetype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_main__search_reuse(kk_main__search _x) {
  return kk_basetype_reuse(_x);
}
static inline kk_box_t kk_main__search_box(kk_main__search _x, kk_context_t* _ctx) {
  return kk_basetype_box(_x);
}
static inline kk_main__search kk_main__search_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_basetype_unbox_as(kk_main__search, _x);
}

// value declarations

extern kk_std_core_hnd__htag kk_main__tag_search;

kk_box_t kk_main__handle_search(int32_t cfc, kk_main__hnd_search hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (cfc : int32, hnd : .hnd-search<e,b>, ret : (res : a) -> e b, action : () -> <search|e> a) -> e b */ 
 
// select `fail` operation out of the `:search` effect handler

static inline kk_std_core_hnd__clause0 kk_main__select_fail(kk_main__hnd_search hnd, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : .hnd-search<e,b>) -> std/core/hnd/clause0<a,.hnd-search,e,b> */ 
  {
    struct kk_main__Hnd_search* _con885 = kk_main__as_Hnd_search(hnd);
    kk_std_core_hnd__clause0 ctl_fail = _con885->ctl_fail;
    return kk_std_core_hnd__clause0_dup(ctl_fail);
  }
}
 
// select `pick` operation out of the `:search` effect handler

static inline kk_std_core_hnd__clause1 kk_main__select_pick(kk_main__hnd_search hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : .hnd-search<e,a>) -> std/core/hnd/clause1<int,int,.hnd-search,e,a> */ 
  {
    struct kk_main__Hnd_search* _con886 = kk_main__as_Hnd_search(hnd);
    kk_std_core_hnd__clause1 ctl_pick = _con886->ctl_pick;
    return kk_std_core_hnd__clause1_dup(ctl_pick);
  }
}
 
// call `fail` operation of the `:search` effect

static inline kk_box_t kk_main_fail(kk_context_t* _ctx) { /* forall<a> () -> search a */ 
  kk_std_core_hnd__ev ev_698;
  kk_ssize_t _x887 = (KK_IZ(0)); /*ssize_t*/
  ev_698 = kk_evv_at(_x887,kk_context()); /*std/core/hnd/ev<.hnd-search>*/
  {
    struct kk_std_core_hnd_Ev* _con888 = kk_std_core_hnd__as_Ev(ev_698);
    kk_std_core_hnd__marker m0 = _con888->marker;
    kk_box_t _box_x743 = _con888->hnd;
    kk_main__hnd_search h = kk_main__hnd_search_unbox(_box_x743, NULL);
    kk_main__hnd_search_dup(h);
    kk_std_core_hnd__clause0 _match_877;
    kk_std_core_hnd__clause0 _brw_878 = kk_main__select_fail(h, _ctx); /*std/core/hnd/clause0<135,.hnd-search,136,137>*/;
    kk_main__hnd_search_drop(h, _ctx);
    _match_877 = _brw_878; /*std/core/hnd/clause0<135,.hnd-search,136,137>*/
    {
      kk_function_t f = _match_877.clause;
      return kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_context_t*), f, (f, m0, ev_698, _ctx));
    }
  }
}
 
// call `pick` operation of the `:search` effect

static inline kk_integer_t kk_main_pick(kk_integer_t size, kk_context_t* _ctx) { /* (size : int) -> search int */ 
  kk_std_core_hnd__ev ev_700;
  kk_ssize_t _x890 = (KK_IZ(0)); /*ssize_t*/
  ev_700 = kk_evv_at(_x890,kk_context()); /*std/core/hnd/ev<.hnd-search>*/
  kk_box_t _x891;
  {
    struct kk_std_core_hnd_Ev* _con892 = kk_std_core_hnd__as_Ev(ev_700);
    kk_std_core_hnd__marker m0 = _con892->marker;
    kk_box_t _box_x744 = _con892->hnd;
    kk_main__hnd_search h = kk_main__hnd_search_unbox(_box_x744, NULL);
    kk_main__hnd_search_dup(h);
    kk_std_core_hnd__clause1 _match_875;
    kk_std_core_hnd__clause1 _brw_876 = kk_main__select_pick(h, _ctx); /*std/core/hnd/clause1<int,int,.hnd-search,153,154>*/;
    kk_main__hnd_search_drop(h, _ctx);
    _match_875 = _brw_876; /*std/core/hnd/clause1<int,int,.hnd-search,153,154>*/
    {
      kk_function_t _fun_unbox_x748 = _match_875.clause;
      _x891 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x748, (_fun_unbox_x748, m0, ev_700, kk_integer_box(size), _ctx)); /*1010*/
    }
  }
  return kk_integer_unbox(_x891);
}

bool kk_main_safe(kk_integer_t queen, kk_integer_t diag, kk_std_core__list xs, kk_context_t* _ctx); /* (queen : int, diag : int, xs : solution) -> bool */ 

kk_std_core__list kk_main__mlift695_place(kk_std_core__list rest, kk_integer_t next, kk_context_t* _ctx); /* (rest : solution, next : int) -> search list<int> */ 

kk_std_core__list kk_main__mlift696_place(kk_integer_t size, kk_std_core__list rest0, kk_context_t* _ctx); /* (size : int, rest : solution) -> <div,search> list<int> */ 

kk_std_core__list kk_main_place(kk_integer_t size0, kk_integer_t column, kk_context_t* _ctx); /* (size : int, column : int) -> <div,search> solution */ 

kk_integer_t kk_main__lift577_run(kk_function_t resume0, kk_integer_t size, kk_integer_t i, kk_integer_t a, kk_context_t* _ctx); /* (resume0 : (int) -> div int, size : int, i : int, a : int) -> div int */ 

kk_integer_t kk_main_run(kk_integer_t n, kk_context_t* _ctx); /* (n : int) -> div int */ 

kk_unit_t kk_main_main(kk_context_t* _ctx); /* () -> <console,div,ndet> () */ 

void kk_main__init(kk_context_t* _ctx);


void kk_main__done(kk_context_t* _ctx);

#endif // header
