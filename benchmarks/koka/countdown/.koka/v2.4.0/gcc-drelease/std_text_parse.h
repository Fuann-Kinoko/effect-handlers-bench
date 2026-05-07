#pragma once
#ifndef kk_std_text_parse_H
#define kk_std_text_parse_H
// Koka generated module: "std/text/parse", koka version: 2.4.0, platform: 64-bit
#include <kklib.h>
#include "std_core_types.h"
#include "std_core_hnd.h"
#include "std_core.h"

// type declarations

// type std/text/parse/.hnd-parse
struct kk_std_text_parse__hnd_parse_s {
  kk_block_t _block;
};
typedef struct kk_std_text_parse__hnd_parse_s* kk_std_text_parse__hnd_parse;
struct kk_std_text_parse__Hnd_parse {
  struct kk_std_text_parse__hnd_parse_s _base;
  kk_std_core_hnd__clause0 fun_current_input;
  kk_std_core_hnd__clause1 ctl_fail;
  kk_std_core_hnd__clause0 ctl_pick;
  kk_std_core_hnd__clause1 fun_satisfy;
};
static inline kk_std_text_parse__hnd_parse kk_std_text_parse__base_Hnd_parse(struct kk_std_text_parse__Hnd_parse* _x) {
  return &_x->_base;
}
static inline kk_std_text_parse__hnd_parse kk_std_text_parse__new_Hnd_parse(kk_reuse_t _at, kk_std_core_hnd__clause0 fun_current_input, kk_std_core_hnd__clause1 ctl_fail, kk_std_core_hnd__clause0 ctl_pick, kk_std_core_hnd__clause1 fun_satisfy, kk_context_t* _ctx) {
  struct kk_std_text_parse__Hnd_parse* _con = kk_block_alloc_at_as(struct kk_std_text_parse__Hnd_parse, _at, 4 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->fun_current_input = fun_current_input;
  _con->ctl_fail = ctl_fail;
  _con->ctl_pick = ctl_pick;
  _con->fun_satisfy = fun_satisfy;
  return kk_std_text_parse__base_Hnd_parse(_con);
}
static inline struct kk_std_text_parse__Hnd_parse* kk_std_text_parse__as_Hnd_parse(kk_std_text_parse__hnd_parse x) {
  return kk_basetype_as_assert(struct kk_std_text_parse__Hnd_parse*, x, (kk_tag_t)(1) /* _tag */);
}
static inline bool kk_std_text_parse__is_Hnd_parse(kk_std_text_parse__hnd_parse x) {
  return (true);
}
static inline kk_std_text_parse__hnd_parse kk_std_text_parse__hnd_parse_dup(kk_std_text_parse__hnd_parse _x) {
  return kk_basetype_dup_as(kk_std_text_parse__hnd_parse, _x);
}
static inline void kk_std_text_parse__hnd_parse_drop(kk_std_text_parse__hnd_parse _x, kk_context_t* _ctx) {
  kk_basetype_drop(_x, _ctx);
}
static inline kk_std_text_parse__hnd_parse kk_std_text_parse__hnd_parse_hole() {
  return (kk_std_text_parse__hnd_parse)(1);
}
static inline bool kk_std_text_parse__hnd_parse_is_unique(kk_std_text_parse__hnd_parse _x) {
  return kk_basetype_is_unique(_x);
}
static inline void kk_std_text_parse__hnd_parse_free(kk_std_text_parse__hnd_parse _x, kk_context_t* _ctx) {
  kk_basetype_free(_x, _ctx);
}
static inline void kk_std_text_parse__hnd_parse_decref(kk_std_text_parse__hnd_parse _x, kk_context_t* _ctx) {
  kk_basetype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_std_text_parse__hnd_parse_dropn_reuse(kk_std_text_parse__hnd_parse _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_basetype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_std_text_parse__hnd_parse_dropn(kk_std_text_parse__hnd_parse _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_basetype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_std_text_parse__hnd_parse_reuse(kk_std_text_parse__hnd_parse _x) {
  return kk_basetype_reuse(_x);
}
static inline kk_box_t kk_std_text_parse__hnd_parse_box(kk_std_text_parse__hnd_parse _x, kk_context_t* _ctx) {
  return kk_basetype_box(_x);
}
static inline kk_std_text_parse__hnd_parse kk_std_text_parse__hnd_parse_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_basetype_unbox_as(kk_std_text_parse__hnd_parse, _x);
}

// type std/text/parse/parse
struct kk_std_text_parse__parse_s {
  kk_block_t _block;
};
typedef struct kk_std_text_parse__parse_s* kk_std_text_parse__parse;
struct kk_std_text_parse_Parse {
  struct kk_std_text_parse__parse_s _base;
  kk_std_text_parse__hnd_parse _field1;
};
static inline kk_std_text_parse__parse kk_std_text_parse__base_Parse(struct kk_std_text_parse_Parse* _x) {
  return &_x->_base;
}
static inline kk_std_text_parse__parse kk_std_text_parse__new_Parse(kk_reuse_t _at, kk_std_text_parse__hnd_parse _field1, kk_context_t* _ctx) {
  struct kk_std_text_parse_Parse* _con = kk_block_alloc_at_as(struct kk_std_text_parse_Parse, _at, 1 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->_field1 = _field1;
  return kk_std_text_parse__base_Parse(_con);
}
static inline struct kk_std_text_parse_Parse* kk_std_text_parse__as_Parse(kk_std_text_parse__parse x) {
  return kk_basetype_as_assert(struct kk_std_text_parse_Parse*, x, (kk_tag_t)(1) /* _tag */);
}
static inline bool kk_std_text_parse__is_Parse(kk_std_text_parse__parse x) {
  return (true);
}
static inline kk_std_text_parse__parse kk_std_text_parse__parse_dup(kk_std_text_parse__parse _x) {
  return kk_basetype_dup_as(kk_std_text_parse__parse, _x);
}
static inline void kk_std_text_parse__parse_drop(kk_std_text_parse__parse _x, kk_context_t* _ctx) {
  kk_basetype_drop(_x, _ctx);
}
static inline kk_std_text_parse__parse kk_std_text_parse__parse_hole() {
  return (kk_std_text_parse__parse)(1);
}
static inline bool kk_std_text_parse__parse_is_unique(kk_std_text_parse__parse _x) {
  return kk_basetype_is_unique(_x);
}
static inline void kk_std_text_parse__parse_free(kk_std_text_parse__parse _x, kk_context_t* _ctx) {
  kk_basetype_free(_x, _ctx);
}
static inline void kk_std_text_parse__parse_decref(kk_std_text_parse__parse _x, kk_context_t* _ctx) {
  kk_basetype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_std_text_parse__parse_dropn_reuse(kk_std_text_parse__parse _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_basetype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_std_text_parse__parse_dropn(kk_std_text_parse__parse _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_basetype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_std_text_parse__parse_reuse(kk_std_text_parse__parse _x) {
  return kk_basetype_reuse(_x);
}
static inline kk_box_t kk_std_text_parse__parse_box(kk_std_text_parse__parse _x, kk_context_t* _ctx) {
  return kk_basetype_box(_x);
}
static inline kk_std_text_parse__parse kk_std_text_parse__parse_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_basetype_unbox_as(kk_std_text_parse__parse, _x);
}

// type std/text/parse/parse-error
struct kk_std_text_parse__parse_error_s {
  kk_block_t _block;
};
typedef struct kk_std_text_parse__parse_error_s* kk_std_text_parse__parse_error;
struct kk_std_text_parse_ParseOk {
  struct kk_std_text_parse__parse_error_s _base;
  kk_box_t result;
  kk_std_core__sslice rest;
};
struct kk_std_text_parse_ParseError {
  struct kk_std_text_parse__parse_error_s _base;
  kk_string_t msg;
  kk_std_core__sslice rest;
};
static inline kk_std_text_parse__parse_error kk_std_text_parse__base_ParseOk(struct kk_std_text_parse_ParseOk* _x) {
  return &_x->_base;
}
static inline kk_std_text_parse__parse_error kk_std_text_parse__new_ParseOk(kk_reuse_t _at, kk_box_t result, kk_std_core__sslice rest, kk_context_t* _ctx) {
  struct kk_std_text_parse_ParseOk* _con = kk_block_alloc_at_as(struct kk_std_text_parse_ParseOk, _at, 2 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->result = result;
  _con->rest = rest;
  return kk_std_text_parse__base_ParseOk(_con);
}
static inline struct kk_std_text_parse_ParseOk* kk_std_text_parse__as_ParseOk(kk_std_text_parse__parse_error x) {
  return kk_basetype_as_assert(struct kk_std_text_parse_ParseOk*, x, (kk_tag_t)(1) /* _tag */);
}
static inline kk_std_text_parse__parse_error kk_std_text_parse__base_ParseError(struct kk_std_text_parse_ParseError* _x) {
  return &_x->_base;
}
static inline kk_std_text_parse__parse_error kk_std_text_parse__new_ParseError(kk_reuse_t _at, kk_string_t msg, kk_std_core__sslice rest, kk_context_t* _ctx) {
  struct kk_std_text_parse_ParseError* _con = kk_block_alloc_at_as(struct kk_std_text_parse_ParseError, _at, 2 /* scan count */, (kk_tag_t)(2), _ctx);
  _con->msg = msg;
  _con->rest = rest;
  return kk_std_text_parse__base_ParseError(_con);
}
static inline struct kk_std_text_parse_ParseError* kk_std_text_parse__as_ParseError(kk_std_text_parse__parse_error x) {
  return kk_basetype_as_assert(struct kk_std_text_parse_ParseError*, x, (kk_tag_t)(2) /* _tag */);
}
static inline bool kk_std_text_parse__is_ParseOk(kk_std_text_parse__parse_error x) {
  return (kk_basetype_has_tag(x, (kk_tag_t)(1)));
}
static inline bool kk_std_text_parse__is_ParseError(kk_std_text_parse__parse_error x) {
  return (kk_basetype_has_tag(x, (kk_tag_t)(2)));
}
static inline kk_std_text_parse__parse_error kk_std_text_parse__parse_error_dup(kk_std_text_parse__parse_error _x) {
  return kk_basetype_dup_as(kk_std_text_parse__parse_error, _x);
}
static inline void kk_std_text_parse__parse_error_drop(kk_std_text_parse__parse_error _x, kk_context_t* _ctx) {
  kk_basetype_drop(_x, _ctx);
}
static inline kk_std_text_parse__parse_error kk_std_text_parse__parse_error_hole() {
  return (kk_std_text_parse__parse_error)(1);
}
static inline bool kk_std_text_parse__parse_error_is_unique(kk_std_text_parse__parse_error _x) {
  return kk_basetype_is_unique(_x);
}
static inline void kk_std_text_parse__parse_error_free(kk_std_text_parse__parse_error _x, kk_context_t* _ctx) {
  kk_basetype_free(_x, _ctx);
}
static inline void kk_std_text_parse__parse_error_decref(kk_std_text_parse__parse_error _x, kk_context_t* _ctx) {
  kk_basetype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_std_text_parse__parse_error_dropn_reuse(kk_std_text_parse__parse_error _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_basetype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_std_text_parse__parse_error_dropn(kk_std_text_parse__parse_error _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_basetype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_std_text_parse__parse_error_reuse(kk_std_text_parse__parse_error _x) {
  return kk_basetype_reuse(_x);
}
static inline kk_box_t kk_std_text_parse__parse_error_box(kk_std_text_parse__parse_error _x, kk_context_t* _ctx) {
  return kk_basetype_box(_x);
}
static inline kk_std_text_parse__parse_error kk_std_text_parse__parse_error_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_basetype_unbox_as(kk_std_text_parse__parse_error, _x);
}

// value declarations
 
// Automatically generated. Retrieves the `rest` constructor field of the `:parse-error` type.

static inline kk_std_core__sslice kk_std_text_parse_rest(kk_std_text_parse__parse_error _this, kk_context_t* _ctx) { /* forall<a> (parse-error<a>) -> sslice */ 
  if (kk_std_text_parse__is_ParseOk(_this)) {
    struct kk_std_text_parse_ParseOk* _con5205 = kk_std_text_parse__as_ParseOk(_this);
    kk_std_core__sslice _x = _con5205->rest;
    return kk_std_core__sslice_dup(_x);
  }
  {
    struct kk_std_text_parse_ParseError* _con5206 = kk_std_text_parse__as_ParseError(_this);
    kk_std_core__sslice _x0 = _con5206->rest;
    return kk_std_core__sslice_dup(_x0);
  }
}
 
// Automatically generated. Tests for the `ParseOk` constructor of the `:parse-error` type.

static inline bool kk_std_text_parse_is_parseOk(kk_std_text_parse__parse_error parse_error, kk_context_t* _ctx) { /* forall<a> (parse-error : parse-error<a>) -> bool */ 
  if (kk_std_text_parse__is_ParseOk(parse_error)) {
    struct kk_std_text_parse_ParseOk* _con5207 = kk_std_text_parse__as_ParseOk(parse_error);
    kk_std_core__sslice _pat1 = _con5207->rest;
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `ParseError` constructor of the `:parse-error` type.

static inline bool kk_std_text_parse_is_parseError(kk_std_text_parse__parse_error parse_error, kk_context_t* _ctx) { /* forall<a> (parse-error : parse-error<a>) -> bool */ 
  if (kk_std_text_parse__is_ParseError(parse_error)) {
    struct kk_std_text_parse_ParseError* _con5208 = kk_std_text_parse__as_ParseError(parse_error);
    kk_std_core__sslice _pat1 = _con5208->rest;
    return true;
  }
  {
    return false;
  }
}

extern kk_std_core_hnd__htag kk_std_text_parse__tag_parse;

kk_box_t kk_std_text_parse__handle_parse(int32_t cfc, kk_std_text_parse__hnd_parse hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (cfc : int32, hnd : .hnd-parse<e,b>, ret : (res : a) -> e b, action : () -> <parse|e> a) -> e b */ 
 
// select `current-input` operation out of the `:parse` effect handler

static inline kk_std_core_hnd__clause0 kk_std_text_parse__select_current_input(kk_std_text_parse__hnd_parse hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : .hnd-parse<e,a>) -> std/core/hnd/clause0<sslice,.hnd-parse,e,a> */ 
  {
    struct kk_std_text_parse__Hnd_parse* _con5212 = kk_std_text_parse__as_Hnd_parse(hnd);
    kk_std_core_hnd__clause0 fun_current_input = _con5212->fun_current_input;
    return kk_std_core_hnd__clause0_dup(fun_current_input);
  }
}
 
// select `fail` operation out of the `:parse` effect handler

static inline kk_std_core_hnd__clause1 kk_std_text_parse__select_fail(kk_std_text_parse__hnd_parse hnd, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : .hnd-parse<e,b>) -> std/core/hnd/clause1<string,a,.hnd-parse,e,b> */ 
  {
    struct kk_std_text_parse__Hnd_parse* _con5213 = kk_std_text_parse__as_Hnd_parse(hnd);
    kk_std_core_hnd__clause1 ctl_fail = _con5213->ctl_fail;
    return kk_std_core_hnd__clause1_dup(ctl_fail);
  }
}
 
// select `pick` operation out of the `:parse` effect handler

static inline kk_std_core_hnd__clause0 kk_std_text_parse__select_pick(kk_std_text_parse__hnd_parse hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : .hnd-parse<e,a>) -> std/core/hnd/clause0<bool,.hnd-parse,e,a> */ 
  {
    struct kk_std_text_parse__Hnd_parse* _con5214 = kk_std_text_parse__as_Hnd_parse(hnd);
    kk_std_core_hnd__clause0 ctl_pick = _con5214->ctl_pick;
    return kk_std_core_hnd__clause0_dup(ctl_pick);
  }
}
 
// select `satisfy` operation out of the `:parse` effect handler

static inline kk_std_core_hnd__clause1 kk_std_text_parse__select_satisfy(kk_std_text_parse__hnd_parse hnd, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : .hnd-parse<e,b>) -> std/core/hnd/clause1<(sslice) -> total maybe<(a, sslice)>,maybe<a>,.hnd-parse,e,b> */ 
  {
    struct kk_std_text_parse__Hnd_parse* _con5215 = kk_std_text_parse__as_Hnd_parse(hnd);
    kk_std_core_hnd__clause1 fun_satisfy = _con5215->fun_satisfy;
    return kk_std_core_hnd__clause1_dup(fun_satisfy);
  }
}

kk_std_core_types__either kk_std_text_parse_either(kk_std_text_parse__parse_error perr, kk_context_t* _ctx); /* forall<a> (perr : parse-error<a>) -> either<string,a> */ 
 
// call `fail` operation of the `:parse` effect

static inline kk_box_t kk_std_text_parse_fail(kk_string_t msg, kk_context_t* _ctx) { /* forall<a> (msg : string) -> parse a */ 
  kk_std_core_hnd__ev ev_2723;
  kk_ssize_t _x5218 = (KK_IZ(0)); /*ssize_t*/
  ev_2723 = kk_evv_at(_x5218,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
  {
    struct kk_std_core_hnd_Ev* _con5219 = kk_std_core_hnd__as_Ev(ev_2723);
    kk_std_core_hnd__marker m0 = _con5219->marker;
    kk_box_t _box_x3271 = _con5219->hnd;
    kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x3271, NULL);
    kk_std_text_parse__hnd_parse_dup(h);
    kk_std_core_hnd__clause1 _match_5191;
    kk_std_core_hnd__clause1 _brw_5192 = kk_std_text_parse__select_fail(h, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
    kk_std_text_parse__hnd_parse_drop(h, _ctx);
    _match_5191 = _brw_5192; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
    {
      kk_function_t _fun_unbox_x3275 = _match_5191.clause;
      return kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x3275, (_fun_unbox_x3275, m0, ev_2723, kk_string_box(msg), _ctx));
    }
  }
}
 
// call `satisfy` operation of the `:parse` effect


// lift anonymous function
struct kk_std_text_parse_satisfy_fun5225__t {
  struct kk_function_s _base;
  kk_function_t pred;
};
extern kk_box_t kk_std_text_parse_satisfy_fun5225(kk_function_t _fself, kk_box_t _b_3292, kk_context_t* _ctx);
static inline kk_function_t kk_std_text_parse_new_satisfy_fun5225(kk_function_t pred, kk_context_t* _ctx) {
  struct kk_std_text_parse_satisfy_fun5225__t* _self = kk_function_alloc_as(struct kk_std_text_parse_satisfy_fun5225__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_satisfy_fun5225, kk_context());
  _self->pred = pred;
  return &_self->_base;
}


static inline kk_std_core_types__maybe kk_std_text_parse_satisfy(kk_function_t pred, kk_context_t* _ctx) { /* forall<a> (pred : (sslice) -> total maybe<(a, sslice)>) -> parse maybe<a> */ 
  kk_std_core_hnd__ev ev_2726;
  kk_ssize_t _x5221 = (KK_IZ(0)); /*ssize_t*/
  ev_2726 = kk_evv_at(_x5221,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
  kk_box_t _x5222;
  {
    struct kk_std_core_hnd_Ev* _con5223 = kk_std_core_hnd__as_Ev(ev_2726);
    kk_std_core_hnd__marker m0 = _con5223->marker;
    kk_box_t _box_x3279 = _con5223->hnd;
    kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x3279, NULL);
    kk_std_text_parse__hnd_parse_dup(h);
    kk_std_core_hnd__clause1 _match_5189;
    kk_std_core_hnd__clause1 _brw_5190 = kk_std_text_parse__select_satisfy(h, _ctx); /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/;
    kk_std_text_parse__hnd_parse_drop(h, _ctx);
    _match_5189 = _brw_5190; /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/
    {
      kk_function_t _fun_unbox_x3286 = _match_5189.clause;
      _x5222 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x3286, (_fun_unbox_x3286, m0, ev_2726, kk_function_box(kk_std_text_parse_new_satisfy_fun5225(pred, _ctx)), _ctx)); /*52*/
    }
  }
  return kk_std_core_types__maybe_unbox(_x5222, _ctx);
}

kk_box_t kk_std_text_parse__mlift2671_satisfy_fail(kk_string_t msg, kk_std_core_types__maybe _y_2523, kk_context_t* _ctx); /* forall<a> (msg : string, maybe<a>) -> parse a */ 

kk_box_t kk_std_text_parse_satisfy_fail(kk_string_t msg, kk_function_t pred, kk_context_t* _ctx); /* forall<a> (msg : string, pred : (sslice) -> maybe<(a, sslice)>) -> parse a */ 

kk_char_t kk_std_text_parse__mlift2672_char_is(kk_string_t msg, kk_std_core_types__maybe _y_2526, kk_context_t* _ctx); /* (msg : string, maybe<char>) -> parse char */ 

kk_char_t kk_std_text_parse_char_is(kk_string_t msg, kk_function_t pred, kk_context_t* _ctx); /* (msg : string, pred : (char) -> bool) -> parse char */ 

kk_char_t kk_std_text_parse__mlift2673_alpha(kk_std_core_types__maybe _y_2529, kk_context_t* _ctx); /* (maybe<char>) -> parse char */ 

kk_char_t kk_std_text_parse_alpha(kk_context_t* _ctx); /* () -> parse char */ 

kk_char_t kk_std_text_parse__mlift2674_alpha_num(kk_std_core_types__maybe _y_2532, kk_context_t* _ctx); /* (maybe<char>) -> parse char */ 

kk_char_t kk_std_text_parse_alpha_num(kk_context_t* _ctx); /* () -> parse char */ 

kk_char_t kk_std_text_parse__mlift2675_char(kk_string_t msg_2264, kk_std_core_types__maybe _y_2535, kk_context_t* _ctx); /* (msg.2264 : string, maybe<char>) -> parse char */ 

kk_char_t kk_std_text_parse_char(kk_char_t c, kk_context_t* _ctx); /* (c : char) -> parse char */ 

kk_std_core_types__tuple2_ kk_std_text_parse_next_while0(kk_std_core__sslice slice, kk_function_t pred, kk_std_core__list acc, kk_context_t* _ctx); /* (slice : sslice, pred : (char) -> bool, acc : list<char>) -> (list<char>, sslice) */ 

kk_std_core__list kk_std_text_parse__mlift2676_chars_are(kk_string_t msg, kk_std_core_types__maybe _y_2538, kk_context_t* _ctx); /* (msg : string, maybe<list<char>>) -> parse list<char> */ 

kk_std_core__list kk_std_text_parse_chars_are(kk_string_t msg, kk_function_t pred, kk_context_t* _ctx); /* (msg : string, pred : (char) -> bool) -> parse list<char> */ 
 
// call `pick` operation of the `:parse` effect

static inline bool kk_std_text_parse_pick(kk_context_t* _ctx) { /* () -> parse bool */ 
  kk_std_core_hnd__ev ev_2801;
  kk_ssize_t _x5401 = (KK_IZ(0)); /*ssize_t*/
  ev_2801 = kk_evv_at(_x5401,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
  kk_box_t _x5402;
  {
    struct kk_std_core_hnd_Ev* _con5403 = kk_std_core_hnd__as_Ev(ev_2801);
    kk_std_core_hnd__marker m0 = _con5403->marker;
    kk_box_t _box_x3567 = _con5403->hnd;
    kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x3567, NULL);
    kk_std_text_parse__hnd_parse_dup(h);
    kk_std_core_hnd__clause0 _match_5139;
    kk_std_core_hnd__clause0 _brw_5140 = kk_std_text_parse__select_pick(h, _ctx); /*std/core/hnd/clause0<bool,std/text/parse/.hnd-parse,412,413>*/;
    kk_std_text_parse__hnd_parse_drop(h, _ctx);
    _match_5139 = _brw_5140; /*std/core/hnd/clause0<bool,std/text/parse/.hnd-parse,412,413>*/
    {
      kk_function_t _fun_unbox_x3570 = _match_5139.clause;
      _x5402 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x3570, (_fun_unbox_x3570, m0, ev_2801, _ctx)); /*37*/
    }
  }
  return kk_bool_unbox(_x5402);
}

kk_box_t kk_std_text_parse__mlift2677_choose(kk_function_t p0, kk_std_core__list pp, bool _y_2545, kk_context_t* _ctx); /* forall<a,e> (p0 : parser<e,a>, pp : list<parser<e,a>>, bool) -> <parse|e> a */ 

kk_box_t kk_std_text_parse_choose(kk_std_core__list ps, kk_context_t* _ctx); /* forall<a,e> (ps : list<parser<e,a>>) -> <parse|e> a */ 

kk_std_core__list kk_std_text_parse__mlift2678_count_acc(kk_std_core__list acc, kk_integer_t n, kk_function_t p, kk_box_t x, kk_context_t* _ctx); /* forall<a,e> (acc : list<a>, n : int, p : parser<e,a>, x : a) -> <parse|e> list<a> */ 

kk_std_core__list kk_std_text_parse_count_acc(kk_integer_t n0, kk_std_core__list acc0, kk_function_t p0, kk_context_t* _ctx); /* forall<a,e> (n : int, acc : list<a>, p : parser<e,a>) -> <parse|e> list<a> */ 

static inline kk_std_core__list kk_std_text_parse_count(kk_integer_t n, kk_function_t p, kk_context_t* _ctx) { /* forall<a,e> (n : int, p : parser<e,a>) -> <parse|e> list<a> */ 
  return kk_std_text_parse_count_acc(n, kk_std_core__new_Nil(_ctx), p, _ctx);
}
 
// call `current-input` operation of the `:parse` effect

static inline kk_std_core__sslice kk_std_text_parse_current_input(kk_context_t* _ctx) { /* () -> parse sslice */ 
  kk_std_core_hnd__ev ev_2816;
  kk_ssize_t _x5429 = (KK_IZ(0)); /*ssize_t*/
  ev_2816 = kk_evv_at(_x5429,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
  kk_box_t _x5430;
  {
    struct kk_std_core_hnd_Ev* _con5431 = kk_std_core_hnd__as_Ev(ev_2816);
    kk_std_core_hnd__marker m0 = _con5431->marker;
    kk_box_t _box_x3608 = _con5431->hnd;
    kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x3608, NULL);
    kk_std_text_parse__hnd_parse_dup(h);
    kk_std_core_hnd__clause0 _match_5130;
    kk_std_core_hnd__clause0 _brw_5131 = kk_std_text_parse__select_current_input(h, _ctx); /*std/core/hnd/clause0<sslice,std/text/parse/.hnd-parse,373,374>*/;
    kk_std_text_parse__hnd_parse_drop(h, _ctx);
    _match_5130 = _brw_5131; /*std/core/hnd/clause0<sslice,std/text/parse/.hnd-parse,373,374>*/
    {
      kk_function_t _fun_unbox_x3611 = _match_5130.clause;
      _x5430 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x3611, (_fun_unbox_x3611, m0, ev_2816, _ctx)); /*37*/
    }
  }
  return kk_std_core__sslice_unbox(_x5430, _ctx);
}

kk_integer_t kk_std_text_parse__mlift2679_digit(kk_char_t _c_2557, kk_context_t* _ctx); /* (char) -> int */ 

kk_integer_t kk_std_text_parse__mlift2680_digit(kk_std_core_types__maybe _y_2555, kk_context_t* _ctx); /* (maybe<char>) -> parse int */ 

kk_integer_t kk_std_text_parse_digit(kk_context_t* _ctx); /* () -> parse int */ 

kk_std_core_types__tuple2_ kk_std_text_parse__lift2509_digits(kk_std_core__sslice slice0, kk_std_core__list acc, kk_context_t* _ctx); /* (slice0 : sslice, acc : list<char>) -> (list<char>, sslice) */ 

kk_string_t kk_std_text_parse__mlift2681_digits(kk_std_core_types__maybe _y_2558, kk_context_t* _ctx); /* (maybe<list<char>>) -> parse string */ 

kk_string_t kk_std_text_parse_digits(kk_context_t* _ctx); /* () -> parse string */ 
 
// monadic lift

static inline kk_box_t kk_std_text_parse__mlift2682_op(kk_function_t p1, kk_function_t p2, bool _y_2562, kk_context_t* _ctx) { /* forall<a,e> (p1 : parser<e,a>, p2 : parser<e,a>, bool) -> <parse|e> a */ 
  if (_y_2562) {
    kk_function_drop(p2, _ctx);
    return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p1, (p1, _ctx));
  }
  {
    kk_function_drop(p1, _ctx);
    return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p2, (p2, _ctx));
  }
}

kk_box_t kk_std_text_parse__lp__bar__bar__rp_(kk_function_t p1, kk_function_t p2, kk_context_t* _ctx); /* forall<a,e> (p1 : parser<e,a>, p2 : parser<e,a>) -> <parse|e> a */ 
 
// monadic lift

static inline kk_box_t kk_std_text_parse__mlift2683_optional(kk_box_t kkloc_default, kk_function_t p, bool _y_2567, kk_context_t* _ctx) { /* forall<a,e> (default : a, p : parser<e,a>, bool) -> <parse|e> a */ 
  if (_y_2567) {
    kk_box_drop(kkloc_default, _ctx);
    return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p, (p, _ctx));
  }
  {
    kk_function_drop(p, _ctx);
    return kkloc_default;
  }
}

kk_box_t kk_std_text_parse_optional(kk_box_t kkloc_default, kk_function_t p, kk_context_t* _ctx); /* forall<a,e> (default : a, p : parser<e,a>) -> <parse|e> a */ 

kk_std_core_types__tuple2_ kk_std_text_parse__lift2510_digits0(kk_std_core__sslice slice0, kk_std_core__list acc, kk_context_t* _ctx); /* (slice0 : sslice, acc : list<char>) -> (list<char>, sslice) */ 

kk_string_t kk_std_text_parse__mlift2684_digits0(kk_std_core_types__maybe _y_2571, kk_context_t* _ctx); /* (maybe<list<char>>) -> parse string */ 

kk_string_t kk_std_text_parse__mlift2685_digits0(bool _y_2570, kk_context_t* _ctx); /* (bool) -> parse string */ 

kk_string_t kk_std_text_parse_digits0(kk_context_t* _ctx); /* () -> parse string */ 

kk_unit_t kk_std_text_parse__mlift2686_eof(kk_std_core_types__maybe _y_2575, kk_context_t* _ctx); /* (maybe<()>) -> parse () */ 

kk_unit_t kk_std_text_parse_eof(kk_context_t* _ctx); /* () -> parse () */ 

kk_std_core_types__tuple2_ kk_std_text_parse__lift2511_hex_digits(kk_std_core__sslice slice0, kk_std_core__list acc, kk_context_t* _ctx); /* (slice0 : sslice, acc : list<char>) -> (list<char>, sslice) */ 

kk_string_t kk_std_text_parse__mlift2687_hex_digits(kk_std_core_types__maybe _y_2578, kk_context_t* _ctx); /* (maybe<list<char>>) -> parse string */ 

kk_string_t kk_std_text_parse_hex_digits(kk_context_t* _ctx); /* () -> parse string */ 

kk_std_core__list kk_std_text_parse__mlift2688_many_acc(kk_std_core__list acc, kk_function_t p, kk_box_t x, kk_context_t* _ctx); /* forall<a,e> (acc : list<a>, p : parser<e,a>, x : a) -> <parse|e> list<a> */ 

kk_std_core__list kk_std_text_parse__mlift2689_many_acc(kk_std_core__list acc0, kk_function_t p0, bool _y_2582, kk_context_t* _ctx); /* forall<a,e> (acc : list<a>, p : parser<e,a>, bool) -> <parse|e> list<a> */ 

kk_std_core__list kk_std_text_parse_many_acc(kk_function_t p1, kk_std_core__list acc1, kk_context_t* _ctx); /* forall<a,e> (p : parser<e,a>, acc : list<a>) -> <parse|e> list<a> */ 

static inline kk_std_core__list kk_std_text_parse_many(kk_function_t p, kk_context_t* _ctx) { /* forall<a,e> (p : parser<e,a>) -> <parse|e> list<a> */ 
  return kk_std_text_parse_many_acc(p, kk_std_core__new_Nil(_ctx), _ctx);
}
 
// monadic lift

static inline kk_std_core__list kk_std_text_parse__mlift2690_many1(kk_box_t _y_2587, kk_std_core__list _y_2588, kk_context_t* _ctx) { /* forall<a,e> (a, list<a>) -> <parse|e> list<a> */ 
  return kk_std_core__new_Cons(kk_reuse_null, _y_2587, _y_2588, _ctx);
}

kk_std_core__list kk_std_text_parse__mlift2691_many1(kk_function_t p, kk_box_t _y_2587, kk_context_t* _ctx); /* forall<a,e> (p : parser<e,a>, a) -> <parse|e> list<a> */ 

kk_std_core__list kk_std_text_parse_many1(kk_function_t p, kk_context_t* _ctx); /* forall<a,e> (p : parser<e,a>) -> <parse|e> list<a> */ 

kk_std_core_types__maybe kk_std_text_parse_maybe(kk_std_text_parse__parse_error perr, kk_context_t* _ctx); /* forall<a> (perr : parse-error<a>) -> maybe<a> */ 

kk_std_core_types__maybe kk_std_text_parse_next_match(kk_std_core__sslice slice, kk_std_core__list cs, kk_context_t* _ctx); /* (slice : sslice, cs : list<char>) -> maybe<sslice> */ 

kk_char_t kk_std_text_parse__mlift2692_no_digit(kk_std_core_types__maybe _y_2589, kk_context_t* _ctx); /* (maybe<char>) -> parse char */ 

kk_char_t kk_std_text_parse_no_digit(kk_context_t* _ctx); /* () -> parse char */ 

kk_char_t kk_std_text_parse__mlift2693_none_of(kk_std_core_types__maybe _y_2592, kk_context_t* _ctx); /* (maybe<char>) -> parse char */ 

kk_char_t kk_std_text_parse_none_of(kk_string_t chars, kk_context_t* _ctx); /* (chars : string) -> parse char */ 

kk_std_core_types__tuple2_ kk_std_text_parse__lift2512_none_of_many1(kk_string_t chars, kk_std_core__sslice slice0, kk_std_core__list acc, kk_context_t* _ctx); /* (chars : string, slice0 : sslice, acc : list<char>) -> (list<char>, sslice) */ 

kk_string_t kk_std_text_parse__mlift2694_none_of_many1(kk_std_core_types__maybe _y_2595, kk_context_t* _ctx); /* (maybe<list<char>>) -> parse string */ 

kk_string_t kk_std_text_parse_none_of_many1(kk_string_t chars, kk_context_t* _ctx); /* (chars : string) -> parse string */ 

kk_char_t kk_std_text_parse__mlift2695_one_of(kk_string_t chars, kk_std_core_types__maybe _y_2598, kk_context_t* _ctx); /* (chars : string, maybe<char>) -> parse char */ 

kk_char_t kk_std_text_parse_one_of(kk_string_t chars, kk_context_t* _ctx); /* (chars : string) -> parse char */ 
 
// monadic lift

static inline kk_char_t kk_std_text_parse__mlift2696_one_of_or(kk_string_t chars, kk_char_t kkloc_default, bool _y_2601, kk_context_t* _ctx) { /* (chars : string, default : char, bool) -> parse char */ 
  if (_y_2601) {
    return kk_std_text_parse_one_of(chars, _ctx);
  }
  {
    kk_string_drop(chars, _ctx);
    return kkloc_default;
  }
}

kk_char_t kk_std_text_parse_one_of_or(kk_string_t chars, kk_char_t kkloc_default, kk_context_t* _ctx); /* (chars : string, default : char) -> parse char */ 
 
// monadic lift

static inline kk_std_text_parse__parse_error kk_std_text_parse__mlift2697_parse(kk_string_t msg, kk_std_core__sslice _y_2605, kk_context_t* _ctx) { /* forall<h,a,e> (msg : string, sslice) -> <local<h>|e> parse-error<a> */ 
  return kk_std_text_parse__new_ParseError(kk_reuse_null, msg, _y_2605, _ctx);
}

kk_std_text_parse__parse_error kk_std_text_parse__mlift2698_parse(kk_std_text_parse__parse_error err1, kk_std_text_parse__parse_error _y_2609, kk_context_t* _ctx); /* forall<h,a,e> (err1 : parse-error<a>, parse-error<a>) -> <local<h>|e> parse-error<a> */ 

kk_std_text_parse__parse_error kk_std_text_parse__mlift2699_parse(kk_std_text_parse__parse_error err1, kk_function_t resume, kk_unit_t wild__, kk_context_t* _ctx); /* forall<h,a,e> (err1 : parse-error<a>, resume : (bool) -> <local<h>|e> parse-error<a>, wild_ : ()) -> <local<h>|e> parse-error<a> */ 

kk_std_text_parse__parse_error kk_std_text_parse__mlift2700_parse(kk_ref_t input, kk_function_t resume, kk_std_core__sslice save, kk_std_text_parse__parse_error _y_2607, kk_context_t* _ctx); /* forall<h,a,e> (input : local-var<h,sslice>, resume : (bool) -> <local<h>|e> parse-error<a>, save : sslice, parse-error<a>) -> <local<h>|e> parse-error<a> */ 

kk_std_text_parse__parse_error kk_std_text_parse__mlift2701_parse(kk_ref_t input, kk_function_t resume, kk_std_core__sslice save, kk_context_t* _ctx); /* forall<h,a,e> (input : local-var<h,sslice>, resume : (bool) -> <local<h>|e> parse-error<a>, save : sslice) -> <local<h>|e> parse-error<a> */ 
 
// monadic lift

static inline kk_std_core_types__maybe kk_std_text_parse__mlift2702_parse(kk_box_t x, kk_unit_t wild__0, kk_context_t* _ctx) { /* forall<a,h,e> (x : a, wild_0 : ()) -> <local<h>|e> maybe<a> */ 
  return kk_std_core_types__new_Just(x, _ctx);
}

kk_std_core_types__maybe kk_std_text_parse__mlift2703_parse(kk_ref_t input, kk_function_t pred, kk_std_core__sslice inp, kk_context_t* _ctx); /* forall<a,h,e> (input : local-var<h,sslice>, pred : (sslice) -> total maybe<(a, sslice)>, inp : sslice) -> <local<h>|e> maybe<a> */ 
 
// monadic lift

static inline kk_std_text_parse__parse_error kk_std_text_parse__mlift2704_parse(kk_box_t x0, kk_std_core__sslice _y_2614, kk_context_t* _ctx) { /* forall<h,a,e> (x0 : a, sslice) -> <local<h>|e> parse-error<a> */ 
  return kk_std_text_parse__new_ParseOk(kk_reuse_null, x0, _y_2614, _ctx);
}

kk_std_text_parse__parse_error kk_std_text_parse_parse(kk_std_core__sslice input0, kk_function_t p, kk_context_t* _ctx); /* forall<a,e> (input0 : sslice, p : () -> <parse|e> a) -> e parse-error<a> */ 

kk_unit_t kk_std_text_parse__mlift2705_parse_eof(kk_std_core_types__maybe _y_2620, kk_context_t* _ctx); /* (maybe<()>) -> parse () */ 
 
// monadic lift

static inline kk_box_t kk_std_text_parse__mlift2706_parse_eof(kk_box_t x, kk_unit_t wild__, kk_context_t* _ctx) { /* forall<a,e> (x : a, wild_ : ()) -> <parse|e> a */ 
  return x;
}

kk_box_t kk_std_text_parse__mlift2707_parse_eof(kk_box_t x, kk_context_t* _ctx); /* forall<a,e> (x : a) -> <parse|e> a */ 

kk_std_text_parse__parse_error kk_std_text_parse_parse_eof(kk_std_core__sslice input, kk_function_t p, kk_context_t* _ctx); /* forall<a,e> (input : sslice, p : () -> <parse|e> a) -> e parse-error<a> */ 

kk_std_core_types__tuple2_ kk_std_text_parse__lift2513_pnat(kk_std_core__sslice slice0, kk_std_core__list acc, kk_context_t* _ctx); /* (slice0 : sslice, acc : list<char>) -> (list<char>, sslice) */ 

kk_integer_t kk_std_text_parse__mlift2708_pnat(kk_std_core__list _c_2627, kk_context_t* _ctx); /* (list<char>) -> int */ 

kk_integer_t kk_std_text_parse__mlift2709_pnat(kk_std_core_types__maybe _y_2625, kk_context_t* _ctx); /* (maybe<list<char>>) -> parse int */ 

kk_integer_t kk_std_text_parse_pnat(kk_context_t* _ctx); /* () -> parse int */ 

kk_char_t kk_std_text_parse__mlift2710_sign(kk_std_core_types__maybe _y_2629, kk_context_t* _ctx); /* (maybe<char>) -> parse char */ 
 
// monadic lift

static inline bool kk_std_text_parse__mlift2711_sign(kk_char_t _c_2632, kk_context_t* _ctx) { /* (char) -> bool */ 
  return (_c_2632 == ('-'));
}

bool kk_std_text_parse__mlift2712_sign(bool _y_2628, kk_context_t* _ctx); /* (bool) -> parse bool */ 

bool kk_std_text_parse_sign(kk_context_t* _ctx); /* () -> parse bool */ 
 
// monadic lift

static inline kk_integer_t kk_std_text_parse__mlift2713_pint(bool neg, kk_integer_t i, kk_context_t* _ctx) { /* (neg : bool, i : int) -> parse int */ 
  if (neg) {
    return kk_integer_neg(i,kk_context());
  }
  {
    return i;
  }
}

kk_char_t kk_std_text_parse__mlift2714_pint(kk_std_core_types__maybe _y_2634, kk_context_t* _ctx); /* (maybe<char>) -> parse char */ 

kk_integer_t kk_std_text_parse__mlift2715_pint(kk_char_t _c_2637, kk_context_t* _ctx); /* (char) -> int */ 

kk_integer_t kk_std_text_parse__mlift2716_pint(bool _y_2633, kk_context_t* _ctx); /* (bool) -> parse int */ 

kk_integer_t kk_std_text_parse_pint(kk_context_t* _ctx); /* () -> parse int */ 

kk_string_t kk_std_text_parse__mlift2717_pstring(kk_string_t s, kk_std_core_types__maybe _y_2640, kk_context_t* _ctx); /* (s : string, maybe<string>) -> parse string */ 

kk_string_t kk_std_text_parse_pstring(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> parse string */ 

kk_std_core_types__maybe kk_std_text_parse_starts_with(kk_string_t s, kk_function_t p, kk_context_t* _ctx); /* forall<a> (s : string, p : () -> parse a) -> maybe<(a, sslice)> */ 

kk_char_t kk_std_text_parse__mlift2718_white(kk_std_core_types__maybe _y_2643, kk_context_t* _ctx); /* (maybe<char>) -> parse char */ 

kk_char_t kk_std_text_parse_white(kk_context_t* _ctx); /* () -> parse char */ 

kk_std_core_types__tuple2_ kk_std_text_parse__lift2514_whitespace(kk_std_core__sslice slice0, kk_std_core__list acc, kk_context_t* _ctx); /* (slice0 : sslice, acc : list<char>) -> (list<char>, sslice) */ 

kk_string_t kk_std_text_parse__mlift2719_whitespace(kk_std_core_types__maybe _y_2646, kk_context_t* _ctx); /* (maybe<list<char>>) -> parse string */ 

kk_string_t kk_std_text_parse_whitespace(kk_context_t* _ctx); /* () -> parse string */ 

kk_std_core_types__tuple2_ kk_std_text_parse__lift2515_whitespace0(kk_std_core__sslice slice0, kk_std_core__list acc, kk_context_t* _ctx); /* (slice0 : sslice, acc : list<char>) -> (list<char>, sslice) */ 

kk_string_t kk_std_text_parse__mlift2720_whitespace0(kk_std_core_types__maybe _y_2650, kk_context_t* _ctx); /* (maybe<list<char>>) -> parse string */ 

kk_string_t kk_std_text_parse__mlift2721_whitespace0(bool _y_2649, kk_context_t* _ctx); /* (bool) -> parse string */ 

kk_string_t kk_std_text_parse_whitespace0(kk_context_t* _ctx); /* () -> parse string */ 

void kk_std_text_parse__init(kk_context_t* _ctx);


void kk_std_text_parse__done(kk_context_t* _ctx);

#endif // header
