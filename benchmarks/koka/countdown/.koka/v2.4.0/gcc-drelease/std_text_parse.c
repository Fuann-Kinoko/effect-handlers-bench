// Koka generated module: "std/text/parse", koka version: 2.4.0, platform: 64-bit
#include "std_text_parse.h"
 
// runtime tag for the `:parse` effect

kk_std_core_hnd__htag kk_std_text_parse__tag_parse;
 
// handler for the `:parse` effect

kk_box_t kk_std_text_parse__handle_parse(int32_t cfc, kk_std_text_parse__hnd_parse hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (cfc : int32, hnd : .hnd-parse<e,b>, ret : (res : a) -> e b, action : () -> <parse|e> a) -> e b */ 
  kk_std_core_hnd__htag _x5211 = kk_std_core_hnd__htag_dup(kk_std_text_parse__tag_parse); /*std/core/hnd/htag<std/text/parse/.hnd-parse>*/
  return kk_std_core_hnd__hhandle(_x5211, cfc, kk_std_text_parse__hnd_parse_box(hnd, _ctx), ret, action, _ctx);
}

kk_std_core_types__either kk_std_text_parse_either(kk_std_text_parse__parse_error perr, kk_context_t* _ctx) { /* forall<a> (perr : parse-error<a>) -> either<string,a> */ 
  if (kk_std_text_parse__is_ParseOk(perr)) {
    struct kk_std_text_parse_ParseOk* _con5216 = kk_std_text_parse__as_ParseOk(perr);
    kk_box_t x = _con5216->result;
    kk_std_core__sslice _pat0 = _con5216->rest;
    if (kk_likely(kk_std_text_parse__parse_error_is_unique(perr))) {
      kk_std_core__sslice_drop(_pat0, _ctx);
      kk_std_text_parse__parse_error_free(perr, _ctx);
    }
    else {
      kk_box_dup(x);
      kk_std_text_parse__parse_error_decref(perr, _ctx);
    }
    return kk_std_core_types__new_Right(x, _ctx);
  }
  {
    struct kk_std_text_parse_ParseError* _con5217 = kk_std_text_parse__as_ParseError(perr);
    kk_string_t msg = _con5217->msg;
    kk_std_core__sslice _pat5 = _con5217->rest;
    if (kk_likely(kk_std_text_parse__parse_error_is_unique(perr))) {
      kk_std_core__sslice_drop(_pat5, _ctx);
      kk_std_text_parse__parse_error_free(perr, _ctx);
    }
    else {
      kk_string_dup(msg);
      kk_std_text_parse__parse_error_decref(perr, _ctx);
    }
    return kk_std_core_types__new_Left(kk_string_box(msg), _ctx);
  }
}
extern kk_box_t kk_std_text_parse_satisfy_fun5225(kk_function_t _fself, kk_box_t _b_3292, kk_context_t* _ctx) {
  struct kk_std_text_parse_satisfy_fun5225__t* _self = kk_function_as(struct kk_std_text_parse_satisfy_fun5225__t*, _fself);
  kk_function_t pred = _self->pred; /* (sslice) -> total maybe<(516, sslice)> */
  kk_drop_match(_self, {kk_function_dup(pred);}, {}, _ctx)
  kk_std_core_types__maybe _x5226;
  kk_std_core__sslice _x5227 = kk_std_core__sslice_unbox(_b_3292, _ctx); /*sslice*/
  _x5226 = kk_function_call(kk_std_core_types__maybe, (kk_function_t, kk_std_core__sslice, kk_context_t*), pred, (pred, _x5227, _ctx)); /*maybe<(516, sslice)>*/
  return kk_std_core_types__maybe_box(_x5226, _ctx);
}
 
// monadic lift

kk_box_t kk_std_text_parse__mlift2671_satisfy_fail(kk_string_t msg, kk_std_core_types__maybe _y_2523, kk_context_t* _ctx) { /* forall<a> (msg : string, maybe<a>) -> parse a */ 
  if (kk_std_core_types__is_Nothing(_y_2523)) {
    kk_std_core_hnd__ev ev_2729;
    kk_ssize_t _x5228 = (KK_IZ(0)); /*ssize_t*/
    ev_2729 = kk_evv_at(_x5228,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    {
      struct kk_std_core_hnd_Ev* _con5229 = kk_std_core_hnd__as_Ev(ev_2729);
      kk_std_core_hnd__marker m0 = _con5229->marker;
      kk_box_t _box_x3293 = _con5229->hnd;
      kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x3293, NULL);
      kk_std_text_parse__hnd_parse_dup(h);
      kk_std_core_hnd__clause1 _match_5187;
      kk_std_core_hnd__clause1 _brw_5188 = kk_std_text_parse__select_fail(h, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
      kk_std_text_parse__hnd_parse_drop(h, _ctx);
      _match_5187 = _brw_5188; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
      {
        kk_function_t _fun_unbox_x3297 = _match_5187.clause;
        return kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x3297, (_fun_unbox_x3297, m0, ev_2729, kk_string_box(msg), _ctx));
      }
    }
  }
  {
    kk_box_t x0 = _y_2523._cons.Just.value;
    kk_string_drop(msg, _ctx);
    return x0;
  }
}


// lift anonymous function
struct kk_std_text_parse_satisfy_fail_fun5235__t {
  struct kk_function_s _base;
  kk_function_t pred;
};
static kk_box_t kk_std_text_parse_satisfy_fail_fun5235(kk_function_t _fself, kk_box_t _b_3314, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_satisfy_fail_fun5235(kk_function_t pred, kk_context_t* _ctx) {
  struct kk_std_text_parse_satisfy_fail_fun5235__t* _self = kk_function_alloc_as(struct kk_std_text_parse_satisfy_fail_fun5235__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_satisfy_fail_fun5235, kk_context());
  _self->pred = pred;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse_satisfy_fail_fun5235(kk_function_t _fself, kk_box_t _b_3314, kk_context_t* _ctx) {
  struct kk_std_text_parse_satisfy_fail_fun5235__t* _self = kk_function_as(struct kk_std_text_parse_satisfy_fail_fun5235__t*, _fself);
  kk_function_t pred = _self->pred; /* (sslice) -> maybe<(542, sslice)> */
  kk_drop_match(_self, {kk_function_dup(pred);}, {}, _ctx)
  kk_std_core_types__maybe _x5236;
  kk_std_core__sslice _x5237 = kk_std_core__sslice_unbox(_b_3314, _ctx); /*sslice*/
  _x5236 = kk_function_call(kk_std_core_types__maybe, (kk_function_t, kk_std_core__sslice, kk_context_t*), pred, (pred, _x5237, _ctx)); /*maybe<(542, sslice)>*/
  return kk_std_core_types__maybe_box(_x5236, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_satisfy_fail_fun5238__t {
  struct kk_function_s _base;
  kk_string_t msg;
};
static kk_box_t kk_std_text_parse_satisfy_fail_fun5238(kk_function_t _fself, kk_box_t _b_3316, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_satisfy_fail_fun5238(kk_string_t msg, kk_context_t* _ctx) {
  struct kk_std_text_parse_satisfy_fail_fun5238__t* _self = kk_function_alloc_as(struct kk_std_text_parse_satisfy_fail_fun5238__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_satisfy_fail_fun5238, kk_context());
  _self->msg = msg;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse_satisfy_fail_fun5238(kk_function_t _fself, kk_box_t _b_3316, kk_context_t* _ctx) {
  struct kk_std_text_parse_satisfy_fail_fun5238__t* _self = kk_function_as(struct kk_std_text_parse_satisfy_fail_fun5238__t*, _fself);
  kk_string_t msg = _self->msg; /* string */
  kk_drop_match(_self, {kk_string_dup(msg);}, {}, _ctx)
  kk_std_core_types__maybe _x5239 = kk_std_core_types__maybe_unbox(_b_3316, _ctx); /*maybe<542>*/
  return kk_std_text_parse__mlift2671_satisfy_fail(msg, _x5239, _ctx);
}

kk_box_t kk_std_text_parse_satisfy_fail(kk_string_t msg, kk_function_t pred, kk_context_t* _ctx) { /* forall<a> (msg : string, pred : (sslice) -> maybe<(a, sslice)>) -> parse a */ 
  kk_std_core_hnd__ev ev_2735;
  kk_ssize_t _x5231 = (KK_IZ(0)); /*ssize_t*/
  ev_2735 = kk_evv_at(_x5231,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
  kk_std_core_types__maybe x_2732;
  kk_box_t _x5232;
  {
    struct kk_std_core_hnd_Ev* _con5233 = kk_std_core_hnd__as_Ev(ev_2735);
    kk_std_core_hnd__marker m0 = _con5233->marker;
    kk_box_t _box_x3301 = _con5233->hnd;
    kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x3301, NULL);
    kk_std_text_parse__hnd_parse_dup(h);
    kk_std_core_hnd__clause1 _match_5185;
    kk_std_core_hnd__clause1 _brw_5186 = kk_std_text_parse__select_satisfy(h, _ctx); /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/;
    kk_std_text_parse__hnd_parse_drop(h, _ctx);
    _match_5185 = _brw_5186; /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/
    {
      kk_function_t _fun_unbox_x3308 = _match_5185.clause;
      _x5232 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x3308, (_fun_unbox_x3308, m0, ev_2735, kk_function_box(kk_std_text_parse_new_satisfy_fail_fun5235(pred, _ctx)), _ctx)); /*52*/
    }
  }
  x_2732 = kk_std_core_types__maybe_unbox(_x5232, _ctx); /*maybe<542>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_2732, _ctx);
    return kk_std_core_hnd_yield_extend(kk_std_text_parse_new_satisfy_fail_fun5238(msg, _ctx), _ctx);
  }
  if (kk_std_core_types__is_Nothing(x_2732)) {
    kk_std_core_hnd__ev ev0_2738;
    kk_ssize_t _x5240 = (KK_IZ(0)); /*ssize_t*/
    ev0_2738 = kk_evv_at(_x5240,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    {
      struct kk_std_core_hnd_Ev* _con5241 = kk_std_core_hnd__as_Ev(ev0_2738);
      kk_std_core_hnd__marker m00 = _con5241->marker;
      kk_box_t _box_x3317 = _con5241->hnd;
      kk_std_text_parse__hnd_parse h0 = kk_std_text_parse__hnd_parse_unbox(_box_x3317, NULL);
      kk_std_text_parse__hnd_parse_dup(h0);
      kk_std_core_hnd__clause1 _match_5183;
      kk_std_core_hnd__clause1 _brw_5184 = kk_std_text_parse__select_fail(h0, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
      kk_std_text_parse__hnd_parse_drop(h0, _ctx);
      _match_5183 = _brw_5184; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
      {
        kk_function_t _fun_unbox_x3321 = _match_5183.clause;
        return kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x3321, (_fun_unbox_x3321, m00, ev0_2738, kk_string_box(msg), _ctx));
      }
    }
  }
  {
    kk_box_t x2 = x_2732._cons.Just.value;
    kk_string_drop(msg, _ctx);
    return x2;
  }
}
 
// monadic lift

kk_char_t kk_std_text_parse__mlift2672_char_is(kk_string_t msg, kk_std_core_types__maybe _y_2526, kk_context_t* _ctx) { /* (msg : string, maybe<char>) -> parse char */ 
  if (kk_std_core_types__is_Nothing(_y_2526)) {
    kk_std_core_hnd__ev ev_2741;
    kk_ssize_t _x5243 = (KK_IZ(0)); /*ssize_t*/
    ev_2741 = kk_evv_at(_x5243,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_box_t _x5244;
    {
      struct kk_std_core_hnd_Ev* _con5245 = kk_std_core_hnd__as_Ev(ev_2741);
      kk_std_core_hnd__marker m0 = _con5245->marker;
      kk_box_t _box_x3327 = _con5245->hnd;
      kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x3327, NULL);
      kk_std_text_parse__hnd_parse_dup(h);
      kk_std_core_hnd__clause1 _match_5180;
      kk_std_core_hnd__clause1 _brw_5181 = kk_std_text_parse__select_fail(h, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
      kk_std_text_parse__hnd_parse_drop(h, _ctx);
      _match_5180 = _brw_5181; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
      {
        kk_function_t _fun_unbox_x3331 = _match_5180.clause;
        _x5244 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x3331, (_fun_unbox_x3331, m0, ev_2741, kk_string_box(msg), _ctx)); /*52*/
      }
    }
    return kk_char_unbox(_x5244, _ctx);
  }
  {
    kk_box_t _box_x3335 = _y_2526._cons.Just.value;
    kk_char_t x0 = kk_char_unbox(_box_x3335, NULL);
    kk_string_drop(msg, _ctx);
    return x0;
  }
}


// lift anonymous function
struct kk_std_text_parse_char_is_fun5252__t {
  struct kk_function_s _base;
  kk_function_t pred;
};
static kk_box_t kk_std_text_parse_char_is_fun5252(kk_function_t _fself, kk_box_t _b_3349, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_char_is_fun5252(kk_function_t pred, kk_context_t* _ctx) {
  struct kk_std_text_parse_char_is_fun5252__t* _self = kk_function_alloc_as(struct kk_std_text_parse_char_is_fun5252__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_char_is_fun5252, kk_context());
  _self->pred = pred;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse_char_is_fun5252(kk_function_t _fself, kk_box_t _b_3349, kk_context_t* _ctx) {
  struct kk_std_text_parse_char_is_fun5252__t* _self = kk_function_as(struct kk_std_text_parse_char_is_fun5252__t*, _fself);
  kk_function_t pred = _self->pred; /* (char) -> bool */
  kk_drop_match(_self, {kk_function_dup(pred);}, {}, _ctx)
  kk_std_core_types__maybe _x5253;
  kk_std_core_types__maybe _match_5178;
  kk_std_core__sslice _x5254 = kk_std_core__sslice_unbox(_b_3349, _ctx); /*sslice*/
  _match_5178 = kk_std_core_next(_x5254, _ctx); /*maybe<(char, sslice)>*/
  if (kk_std_core_types__is_Just(_match_5178)) {
    kk_box_t _box_x3350 = _match_5178._cons.Just.value;
    kk_std_core_types__tuple2_ _pat000 = kk_std_core_types__tuple2__unbox(_box_x3350, NULL);
    if (kk_std_core_types__is_dash__lp__comma__rp_(_pat000)) {
      kk_box_t _box_x3351 = _pat000.fst;
      kk_box_t _box_x3352 = _pat000.snd;
      kk_char_t c = kk_char_unbox(_box_x3351, NULL);
      kk_std_core__sslice rest0 = kk_std_core__sslice_unbox(_box_x3352, NULL);
      kk_function_t _x5259 = kk_function_dup(pred); /*(char) -> bool*/
      if (kk_function_call(bool, (kk_function_t, kk_char_t, kk_context_t*), _x5259, (_x5259, c, _ctx))) {
        kk_function_drop(pred, _ctx);
        kk_std_core__sslice_dup(rest0);
        kk_std_core_types__maybe_drop(_match_5178, _ctx);
        kk_box_t _x5260;
        kk_std_core_types__tuple2_ _x5261 = kk_std_core_types__new_dash__lp__comma__rp_(kk_char_box(c, _ctx), kk_std_core__sslice_box(rest0, _ctx), _ctx); /*(6, 7)*/
        _x5260 = kk_std_core_types__tuple2__box(_x5261, _ctx); /*107*/
        _x5253 = kk_std_core_types__new_Just(_x5260, _ctx); /*maybe<107>*/
        goto _match5255;
      }
    }
  }
  {
    kk_function_drop(pred, _ctx);
    kk_std_core_types__maybe_drop(_match_5178, _ctx);
    _x5253 = kk_std_core_types__new_Nothing(_ctx); /*maybe<107>*/
  }
  _match5255: ;
  return kk_std_core_types__maybe_box(_x5253, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_char_is_fun5263__t {
  struct kk_function_s _base;
  kk_string_t msg;
};
static kk_box_t kk_std_text_parse_char_is_fun5263(kk_function_t _fself, kk_box_t _b_3361, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_char_is_fun5263(kk_string_t msg, kk_context_t* _ctx) {
  struct kk_std_text_parse_char_is_fun5263__t* _self = kk_function_alloc_as(struct kk_std_text_parse_char_is_fun5263__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_char_is_fun5263, kk_context());
  _self->msg = msg;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse_char_is_fun5263(kk_function_t _fself, kk_box_t _b_3361, kk_context_t* _ctx) {
  struct kk_std_text_parse_char_is_fun5263__t* _self = kk_function_as(struct kk_std_text_parse_char_is_fun5263__t*, _fself);
  kk_string_t msg = _self->msg; /* string */
  kk_drop_match(_self, {kk_string_dup(msg);}, {}, _ctx)
  kk_std_core_types__maybe _y_3372_2526 = kk_std_core_types__maybe_unbox(_b_3361, _ctx); /*maybe<char>*/;
  kk_char_t _x5264 = kk_std_text_parse__mlift2672_char_is(msg, _y_3372_2526, _ctx); /*char*/
  return kk_char_box(_x5264, _ctx);
}

kk_char_t kk_std_text_parse_char_is(kk_string_t msg, kk_function_t pred, kk_context_t* _ctx) { /* (msg : string, pred : (char) -> bool) -> parse char */ 
  kk_std_core_hnd__ev ev_2747;
  kk_ssize_t _x5248 = (KK_IZ(0)); /*ssize_t*/
  ev_2747 = kk_evv_at(_x5248,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
  kk_std_core_types__maybe x_2744;
  kk_box_t _x5249;
  {
    struct kk_std_core_hnd_Ev* _con5250 = kk_std_core_hnd__as_Ev(ev_2747);
    kk_std_core_hnd__marker m0 = _con5250->marker;
    kk_box_t _box_x3336 = _con5250->hnd;
    kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x3336, NULL);
    kk_std_text_parse__hnd_parse_dup(h);
    kk_std_core_hnd__clause1 _match_5177;
    kk_std_core_hnd__clause1 _brw_5179 = kk_std_text_parse__select_satisfy(h, _ctx); /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/;
    kk_std_text_parse__hnd_parse_drop(h, _ctx);
    _match_5177 = _brw_5179; /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/
    {
      kk_function_t _fun_unbox_x3343 = _match_5177.clause;
      _x5249 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x3343, (_fun_unbox_x3343, m0, ev_2747, kk_function_box(kk_std_text_parse_new_char_is_fun5252(pred, _ctx)), _ctx)); /*52*/
    }
  }
  x_2744 = kk_std_core_types__maybe_unbox(_x5249, _ctx); /*maybe<char>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_2744, _ctx);
    kk_box_t _x5262 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_char_is_fun5263(msg, _ctx), _ctx); /*3926*/
    return kk_char_unbox(_x5262, _ctx);
  }
  if (kk_std_core_types__is_Nothing(x_2744)) {
    kk_std_core_hnd__ev ev0_2750;
    kk_ssize_t _x5265 = (KK_IZ(0)); /*ssize_t*/
    ev0_2750 = kk_evv_at(_x5265,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_box_t _x5266;
    {
      struct kk_std_core_hnd_Ev* _con5267 = kk_std_core_hnd__as_Ev(ev0_2750);
      kk_std_core_hnd__marker m00 = _con5267->marker;
      kk_box_t _box_x3362 = _con5267->hnd;
      kk_std_text_parse__hnd_parse h0 = kk_std_text_parse__hnd_parse_unbox(_box_x3362, NULL);
      kk_std_text_parse__hnd_parse_dup(h0);
      kk_std_core_hnd__clause1 _match_5175;
      kk_std_core_hnd__clause1 _brw_5176 = kk_std_text_parse__select_fail(h0, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
      kk_std_text_parse__hnd_parse_drop(h0, _ctx);
      _match_5175 = _brw_5176; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
      {
        kk_function_t _fun_unbox_x3366 = _match_5175.clause;
        _x5266 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x3366, (_fun_unbox_x3366, m00, ev0_2750, kk_string_box(msg), _ctx)); /*52*/
      }
    }
    return kk_char_unbox(_x5266, _ctx);
  }
  {
    kk_box_t _box_x3370 = x_2744._cons.Just.value;
    kk_char_t x2 = kk_char_unbox(_box_x3370, NULL);
    kk_string_drop(msg, _ctx);
    return x2;
  }
}
 
// monadic lift

kk_char_t kk_std_text_parse__mlift2673_alpha(kk_std_core_types__maybe _y_2529, kk_context_t* _ctx) { /* (maybe<char>) -> parse char */ 
  if (kk_std_core_types__is_Nothing(_y_2529)) {
    kk_std_core_hnd__ev ev_2753;
    kk_ssize_t _x5270 = (KK_IZ(0)); /*ssize_t*/
    ev_2753 = kk_evv_at(_x5270,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_box_t _x5271;
    {
      struct kk_std_core_hnd_Ev* _con5272 = kk_std_core_hnd__as_Ev(ev_2753);
      kk_std_core_hnd__marker m0 = _con5272->marker;
      kk_box_t _box_x3373 = _con5272->hnd;
      kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x3373, NULL);
      kk_std_text_parse__hnd_parse_dup(h);
      kk_std_core_hnd__clause1 _match_5172;
      kk_std_core_hnd__clause1 _brw_5173 = kk_std_text_parse__select_fail(h, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
      kk_std_text_parse__hnd_parse_drop(h, _ctx);
      _match_5172 = _brw_5173; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
      {
        kk_function_t _fun_unbox_x3377 = _match_5172.clause;
        kk_box_t _x5274;
        kk_string_t _x5275;
        kk_define_string_literal(, _s5276, 5, "alpha")
        _x5275 = kk_string_dup(_s5276); /*string*/
        _x5274 = kk_string_box(_x5275); /*51*/
        _x5271 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x3377, (_fun_unbox_x3377, m0, ev_2753, _x5274, _ctx)); /*52*/
      }
    }
    return kk_char_unbox(_x5271, _ctx);
  }
  {
    kk_box_t _box_x3381 = _y_2529._cons.Just.value;
    kk_char_t x0 = kk_char_unbox(_box_x3381, NULL);
    return x0;
  }
}


// lift anonymous function
struct kk_std_text_parse_alpha_fun5282__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_alpha_fun5282(kk_function_t _fself, kk_box_t _b_3395, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_alpha_fun5282(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_alpha_fun5282, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_alpha_fun5282(kk_function_t _fself, kk_box_t _b_3395, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x5283;
  kk_std_core_types__maybe _match_5170;
  kk_std_core__sslice _x5284 = kk_std_core__sslice_unbox(_b_3395, _ctx); /*sslice*/
  _match_5170 = kk_std_core_next(_x5284, _ctx); /*maybe<(char, sslice)>*/
  if (kk_std_core_types__is_Just(_match_5170)) {
    kk_box_t _box_x3396 = _match_5170._cons.Just.value;
    kk_std_core_types__tuple2_ _pat000 = kk_std_core_types__tuple2__unbox(_box_x3396, NULL);
    if (kk_std_core_types__is_dash__lp__comma__rp_(_pat000)) {
      kk_box_t _box_x3397 = _pat000.fst;
      kk_box_t _box_x3398 = _pat000.snd;
      kk_char_t c = kk_char_unbox(_box_x3397, NULL);
      kk_std_core__sslice rest0 = kk_std_core__sslice_unbox(_box_x3398, NULL);
      if (kk_std_core_is_alpha(c, _ctx)) {
        kk_std_core__sslice_dup(rest0);
        kk_std_core_types__maybe_drop(_match_5170, _ctx);
        kk_box_t _x5289;
        kk_std_core_types__tuple2_ _x5290 = kk_std_core_types__new_dash__lp__comma__rp_(kk_char_box(c, _ctx), kk_std_core__sslice_box(rest0, _ctx), _ctx); /*(6, 7)*/
        _x5289 = kk_std_core_types__tuple2__box(_x5290, _ctx); /*107*/
        _x5283 = kk_std_core_types__new_Just(_x5289, _ctx); /*maybe<107>*/
        goto _match5285;
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_5170, _ctx);
    _x5283 = kk_std_core_types__new_Nothing(_ctx); /*maybe<107>*/
  }
  _match5285: ;
  return kk_std_core_types__maybe_box(_x5283, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_alpha_fun5292__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_alpha_fun5292(kk_function_t _fself, kk_box_t _b_3407, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_alpha_fun5292(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_alpha_fun5292, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_alpha_fun5292(kk_function_t _fself, kk_box_t _b_3407, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t _x5293;
  kk_std_core_types__maybe _x5294 = kk_std_core_types__maybe_unbox(_b_3407, _ctx); /*maybe<char>*/
  _x5293 = kk_std_text_parse__mlift2673_alpha(_x5294, _ctx); /*char*/
  return kk_char_box(_x5293, _ctx);
}

kk_char_t kk_std_text_parse_alpha(kk_context_t* _ctx) { /* () -> parse char */ 
  kk_std_core_hnd__ev ev_2759;
  kk_ssize_t _x5278 = (KK_IZ(0)); /*ssize_t*/
  ev_2759 = kk_evv_at(_x5278,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
  kk_std_core_types__maybe x_2756;
  kk_box_t _x5279;
  {
    struct kk_std_core_hnd_Ev* _con5280 = kk_std_core_hnd__as_Ev(ev_2759);
    kk_std_core_hnd__marker m0 = _con5280->marker;
    kk_box_t _box_x3382 = _con5280->hnd;
    kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x3382, NULL);
    kk_std_text_parse__hnd_parse_dup(h);
    kk_std_core_hnd__clause1 _match_5169;
    kk_std_core_hnd__clause1 _brw_5171 = kk_std_text_parse__select_satisfy(h, _ctx); /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/;
    kk_std_text_parse__hnd_parse_drop(h, _ctx);
    _match_5169 = _brw_5171; /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/
    {
      kk_function_t _fun_unbox_x3389 = _match_5169.clause;
      _x5279 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x3389, (_fun_unbox_x3389, m0, ev_2759, kk_function_box(kk_std_text_parse_new_alpha_fun5282(_ctx)), _ctx)); /*52*/
    }
  }
  x_2756 = kk_std_core_types__maybe_unbox(_x5279, _ctx); /*maybe<char>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_2756, _ctx);
    kk_box_t _x5291 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_alpha_fun5292(_ctx), _ctx); /*3926*/
    return kk_char_unbox(_x5291, _ctx);
  }
  if (kk_std_core_types__is_Nothing(x_2756)) {
    kk_std_core_hnd__ev ev0_2762;
    kk_ssize_t _x5295 = (KK_IZ(0)); /*ssize_t*/
    ev0_2762 = kk_evv_at(_x5295,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_box_t _x5296;
    {
      struct kk_std_core_hnd_Ev* _con5297 = kk_std_core_hnd__as_Ev(ev0_2762);
      kk_std_core_hnd__marker m00 = _con5297->marker;
      kk_box_t _box_x3408 = _con5297->hnd;
      kk_std_text_parse__hnd_parse h0 = kk_std_text_parse__hnd_parse_unbox(_box_x3408, NULL);
      kk_std_text_parse__hnd_parse_dup(h0);
      kk_std_core_hnd__clause1 _match_5167;
      kk_std_core_hnd__clause1 _brw_5168 = kk_std_text_parse__select_fail(h0, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
      kk_std_text_parse__hnd_parse_drop(h0, _ctx);
      _match_5167 = _brw_5168; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
      {
        kk_function_t _fun_unbox_x3412 = _match_5167.clause;
        kk_box_t _x5299;
        kk_string_t _x5300;
        kk_define_string_literal(, _s5301, 5, "alpha")
        _x5300 = kk_string_dup(_s5301); /*string*/
        _x5299 = kk_string_box(_x5300); /*51*/
        _x5296 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x3412, (_fun_unbox_x3412, m00, ev0_2762, _x5299, _ctx)); /*52*/
      }
    }
    return kk_char_unbox(_x5296, _ctx);
  }
  {
    kk_box_t _box_x3416 = x_2756._cons.Just.value;
    kk_char_t x2 = kk_char_unbox(_box_x3416, NULL);
    return x2;
  }
}
 
// monadic lift

kk_char_t kk_std_text_parse__mlift2674_alpha_num(kk_std_core_types__maybe _y_2532, kk_context_t* _ctx) { /* (maybe<char>) -> parse char */ 
  if (kk_std_core_types__is_Nothing(_y_2532)) {
    kk_std_core_hnd__ev ev_2765;
    kk_ssize_t _x5303 = (KK_IZ(0)); /*ssize_t*/
    ev_2765 = kk_evv_at(_x5303,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_box_t _x5304;
    {
      struct kk_std_core_hnd_Ev* _con5305 = kk_std_core_hnd__as_Ev(ev_2765);
      kk_std_core_hnd__marker m0 = _con5305->marker;
      kk_box_t _box_x3418 = _con5305->hnd;
      kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x3418, NULL);
      kk_std_text_parse__hnd_parse_dup(h);
      kk_std_core_hnd__clause1 _match_5164;
      kk_std_core_hnd__clause1 _brw_5165 = kk_std_text_parse__select_fail(h, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
      kk_std_text_parse__hnd_parse_drop(h, _ctx);
      _match_5164 = _brw_5165; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
      {
        kk_function_t _fun_unbox_x3422 = _match_5164.clause;
        kk_box_t _x5307;
        kk_string_t _x5308;
        kk_define_string_literal(, _s5309, 9, "alpha-num")
        _x5308 = kk_string_dup(_s5309); /*string*/
        _x5307 = kk_string_box(_x5308); /*51*/
        _x5304 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x3422, (_fun_unbox_x3422, m0, ev_2765, _x5307, _ctx)); /*52*/
      }
    }
    return kk_char_unbox(_x5304, _ctx);
  }
  {
    kk_box_t _box_x3426 = _y_2532._cons.Just.value;
    kk_char_t x0 = kk_char_unbox(_box_x3426, NULL);
    return x0;
  }
}


// lift anonymous function
struct kk_std_text_parse_alpha_num_fun5315__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_alpha_num_fun5315(kk_function_t _fself, kk_box_t _b_3440, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_alpha_num_fun5315(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_alpha_num_fun5315, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_alpha_num_fun5315(kk_function_t _fself, kk_box_t _b_3440, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x5316;
  kk_std_core_types__maybe _match_5162;
  kk_std_core__sslice _x5317 = kk_std_core__sslice_unbox(_b_3440, _ctx); /*sslice*/
  _match_5162 = kk_std_core_next(_x5317, _ctx); /*maybe<(char, sslice)>*/
  if (kk_std_core_types__is_Just(_match_5162)) {
    kk_box_t _box_x3441 = _match_5162._cons.Just.value;
    kk_std_core_types__tuple2_ _pat000 = kk_std_core_types__tuple2__unbox(_box_x3441, NULL);
    if (kk_std_core_types__is_dash__lp__comma__rp_(_pat000)) {
      kk_box_t _box_x3442 = _pat000.fst;
      kk_box_t _box_x3443 = _pat000.snd;
      kk_char_t c = kk_char_unbox(_box_x3442, NULL);
      kk_std_core__sslice rest0 = kk_std_core__sslice_unbox(_box_x3443, NULL);
      if (kk_std_core_is_alpha_num(c, _ctx)) {
        kk_std_core__sslice_dup(rest0);
        kk_std_core_types__maybe_drop(_match_5162, _ctx);
        kk_box_t _x5322;
        kk_std_core_types__tuple2_ _x5323 = kk_std_core_types__new_dash__lp__comma__rp_(kk_char_box(c, _ctx), kk_std_core__sslice_box(rest0, _ctx), _ctx); /*(6, 7)*/
        _x5322 = kk_std_core_types__tuple2__box(_x5323, _ctx); /*107*/
        _x5316 = kk_std_core_types__new_Just(_x5322, _ctx); /*maybe<107>*/
        goto _match5318;
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_5162, _ctx);
    _x5316 = kk_std_core_types__new_Nothing(_ctx); /*maybe<107>*/
  }
  _match5318: ;
  return kk_std_core_types__maybe_box(_x5316, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_alpha_num_fun5325__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_alpha_num_fun5325(kk_function_t _fself, kk_box_t _b_3452, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_alpha_num_fun5325(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_alpha_num_fun5325, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_alpha_num_fun5325(kk_function_t _fself, kk_box_t _b_3452, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t _x5326;
  kk_std_core_types__maybe _x5327 = kk_std_core_types__maybe_unbox(_b_3452, _ctx); /*maybe<char>*/
  _x5326 = kk_std_text_parse__mlift2674_alpha_num(_x5327, _ctx); /*char*/
  return kk_char_box(_x5326, _ctx);
}

kk_char_t kk_std_text_parse_alpha_num(kk_context_t* _ctx) { /* () -> parse char */ 
  kk_std_core_hnd__ev ev_2771;
  kk_ssize_t _x5311 = (KK_IZ(0)); /*ssize_t*/
  ev_2771 = kk_evv_at(_x5311,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
  kk_std_core_types__maybe x_2768;
  kk_box_t _x5312;
  {
    struct kk_std_core_hnd_Ev* _con5313 = kk_std_core_hnd__as_Ev(ev_2771);
    kk_std_core_hnd__marker m0 = _con5313->marker;
    kk_box_t _box_x3427 = _con5313->hnd;
    kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x3427, NULL);
    kk_std_text_parse__hnd_parse_dup(h);
    kk_std_core_hnd__clause1 _match_5161;
    kk_std_core_hnd__clause1 _brw_5163 = kk_std_text_parse__select_satisfy(h, _ctx); /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/;
    kk_std_text_parse__hnd_parse_drop(h, _ctx);
    _match_5161 = _brw_5163; /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/
    {
      kk_function_t _fun_unbox_x3434 = _match_5161.clause;
      _x5312 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x3434, (_fun_unbox_x3434, m0, ev_2771, kk_function_box(kk_std_text_parse_new_alpha_num_fun5315(_ctx)), _ctx)); /*52*/
    }
  }
  x_2768 = kk_std_core_types__maybe_unbox(_x5312, _ctx); /*maybe<char>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_2768, _ctx);
    kk_box_t _x5324 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_alpha_num_fun5325(_ctx), _ctx); /*3926*/
    return kk_char_unbox(_x5324, _ctx);
  }
  if (kk_std_core_types__is_Nothing(x_2768)) {
    kk_std_core_hnd__ev ev0_2774;
    kk_ssize_t _x5328 = (KK_IZ(0)); /*ssize_t*/
    ev0_2774 = kk_evv_at(_x5328,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_box_t _x5329;
    {
      struct kk_std_core_hnd_Ev* _con5330 = kk_std_core_hnd__as_Ev(ev0_2774);
      kk_std_core_hnd__marker m00 = _con5330->marker;
      kk_box_t _box_x3453 = _con5330->hnd;
      kk_std_text_parse__hnd_parse h0 = kk_std_text_parse__hnd_parse_unbox(_box_x3453, NULL);
      kk_std_text_parse__hnd_parse_dup(h0);
      kk_std_core_hnd__clause1 _match_5159;
      kk_std_core_hnd__clause1 _brw_5160 = kk_std_text_parse__select_fail(h0, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
      kk_std_text_parse__hnd_parse_drop(h0, _ctx);
      _match_5159 = _brw_5160; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
      {
        kk_function_t _fun_unbox_x3457 = _match_5159.clause;
        kk_box_t _x5332;
        kk_string_t _x5333;
        kk_define_string_literal(, _s5334, 9, "alpha-num")
        _x5333 = kk_string_dup(_s5334); /*string*/
        _x5332 = kk_string_box(_x5333); /*51*/
        _x5329 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x3457, (_fun_unbox_x3457, m00, ev0_2774, _x5332, _ctx)); /*52*/
      }
    }
    return kk_char_unbox(_x5329, _ctx);
  }
  {
    kk_box_t _box_x3461 = x_2768._cons.Just.value;
    kk_char_t x2 = kk_char_unbox(_box_x3461, NULL);
    return x2;
  }
}
 
// monadic lift

kk_char_t kk_std_text_parse__mlift2675_char(kk_string_t msg_2264, kk_std_core_types__maybe _y_2535, kk_context_t* _ctx) { /* (msg.2264 : string, maybe<char>) -> parse char */ 
  if (kk_std_core_types__is_Nothing(_y_2535)) {
    kk_std_core_hnd__ev ev_2777;
    kk_ssize_t _x5336 = (KK_IZ(0)); /*ssize_t*/
    ev_2777 = kk_evv_at(_x5336,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_box_t _x5337;
    {
      struct kk_std_core_hnd_Ev* _con5338 = kk_std_core_hnd__as_Ev(ev_2777);
      kk_std_core_hnd__marker m0 = _con5338->marker;
      kk_box_t _box_x3463 = _con5338->hnd;
      kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x3463, NULL);
      kk_std_text_parse__hnd_parse_dup(h);
      kk_std_core_hnd__clause1 _match_5156;
      kk_std_core_hnd__clause1 _brw_5157 = kk_std_text_parse__select_fail(h, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
      kk_std_text_parse__hnd_parse_drop(h, _ctx);
      _match_5156 = _brw_5157; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
      {
        kk_function_t _fun_unbox_x3467 = _match_5156.clause;
        _x5337 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x3467, (_fun_unbox_x3467, m0, ev_2777, kk_string_box(msg_2264), _ctx)); /*52*/
      }
    }
    return kk_char_unbox(_x5337, _ctx);
  }
  {
    kk_box_t _box_x3471 = _y_2535._cons.Just.value;
    kk_char_t x0 = kk_char_unbox(_box_x3471, NULL);
    kk_string_drop(msg_2264, _ctx);
    return x0;
  }
}


// lift anonymous function
struct kk_std_text_parse_char_fun5351__t {
  struct kk_function_s _base;
  kk_char_t c;
};
static kk_box_t kk_std_text_parse_char_fun5351(kk_function_t _fself, kk_box_t _b_3485, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_char_fun5351(kk_char_t c, kk_context_t* _ctx) {
  struct kk_std_text_parse_char_fun5351__t* _self = kk_function_alloc_as(struct kk_std_text_parse_char_fun5351__t, 1, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_char_fun5351, kk_context());
  _self->c = c;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse_char_fun5351(kk_function_t _fself, kk_box_t _b_3485, kk_context_t* _ctx) {
  struct kk_std_text_parse_char_fun5351__t* _self = kk_function_as(struct kk_std_text_parse_char_fun5351__t*, _fself);
  kk_char_t c = _self->c; /* char */
  kk_drop_match(_self, {;}, {}, _ctx)
  kk_std_core_types__maybe _x5352;
  kk_std_core_types__maybe _match_5154;
  kk_std_core__sslice _x5353 = kk_std_core__sslice_unbox(_b_3485, _ctx); /*sslice*/
  _match_5154 = kk_std_core_next(_x5353, _ctx); /*maybe<(char, sslice)>*/
  if (kk_std_core_types__is_Just(_match_5154)) {
    kk_box_t _box_x3486 = _match_5154._cons.Just.value;
    kk_std_core_types__tuple2_ _pat000 = kk_std_core_types__tuple2__unbox(_box_x3486, NULL);
    if (kk_std_core_types__is_dash__lp__comma__rp_(_pat000)) {
      kk_box_t _box_x3487 = _pat000.fst;
      kk_box_t _box_x3488 = _pat000.snd;
      kk_char_t c0 = kk_char_unbox(_box_x3487, NULL);
      kk_std_core__sslice rest0 = kk_std_core__sslice_unbox(_box_x3488, NULL);
      if (c == c0) {
        kk_std_core__sslice_dup(rest0);
        kk_std_core_types__maybe_drop(_match_5154, _ctx);
        kk_box_t _x5358;
        kk_std_core_types__tuple2_ _x5359 = kk_std_core_types__new_dash__lp__comma__rp_(kk_char_box(c0, _ctx), kk_std_core__sslice_box(rest0, _ctx), _ctx); /*(6, 7)*/
        _x5358 = kk_std_core_types__tuple2__box(_x5359, _ctx); /*107*/
        _x5352 = kk_std_core_types__new_Just(_x5358, _ctx); /*maybe<107>*/
        goto _match5354;
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_5154, _ctx);
    _x5352 = kk_std_core_types__new_Nothing(_ctx); /*maybe<107>*/
  }
  _match5354: ;
  return kk_std_core_types__maybe_box(_x5352, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_char_fun5361__t {
  struct kk_function_s _base;
  kk_string_t msg_2264;
};
static kk_box_t kk_std_text_parse_char_fun5361(kk_function_t _fself, kk_box_t _b_3497, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_char_fun5361(kk_string_t msg_2264, kk_context_t* _ctx) {
  struct kk_std_text_parse_char_fun5361__t* _self = kk_function_alloc_as(struct kk_std_text_parse_char_fun5361__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_char_fun5361, kk_context());
  _self->msg_2264 = msg_2264;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse_char_fun5361(kk_function_t _fself, kk_box_t _b_3497, kk_context_t* _ctx) {
  struct kk_std_text_parse_char_fun5361__t* _self = kk_function_as(struct kk_std_text_parse_char_fun5361__t*, _fself);
  kk_string_t msg_2264 = _self->msg_2264; /* string */
  kk_drop_match(_self, {kk_string_dup(msg_2264);}, {}, _ctx)
  kk_std_core_types__maybe _y_3508_2535 = kk_std_core_types__maybe_unbox(_b_3497, _ctx); /*maybe<char>*/;
  kk_char_t _x5362 = kk_std_text_parse__mlift2675_char(msg_2264, _y_3508_2535, _ctx); /*char*/
  return kk_char_box(_x5362, _ctx);
}

kk_char_t kk_std_text_parse_char(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> parse char */ 
  kk_string_t msg_2264;
  kk_string_t _x5341;
  kk_define_string_literal(, _s5342, 1, "\'")
  _x5341 = kk_string_dup(_s5342); /*string*/
  kk_string_t _x5343;
  kk_string_t _x5344 = kk_std_core_show_char(c, _ctx); /*string*/
  kk_string_t _x5345;
  kk_define_string_literal(, _s5346, 1, "\'")
  _x5345 = kk_string_dup(_s5346); /*string*/
  _x5343 = kk_std_core__lp__plus__plus__1_rp_(_x5344, _x5345, _ctx); /*string*/
  msg_2264 = kk_std_core__lp__plus__plus__1_rp_(_x5341, _x5343, _ctx); /*string*/
  kk_std_core_hnd__ev ev_2783;
  kk_ssize_t _x5347 = (KK_IZ(0)); /*ssize_t*/
  ev_2783 = kk_evv_at(_x5347,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
  kk_std_core_types__maybe x_2780;
  kk_box_t _x5348;
  {
    struct kk_std_core_hnd_Ev* _con5349 = kk_std_core_hnd__as_Ev(ev_2783);
    kk_std_core_hnd__marker m0 = _con5349->marker;
    kk_box_t _box_x3472 = _con5349->hnd;
    kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x3472, NULL);
    kk_std_text_parse__hnd_parse_dup(h);
    kk_std_core_hnd__clause1 _match_5153;
    kk_std_core_hnd__clause1 _brw_5155 = kk_std_text_parse__select_satisfy(h, _ctx); /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/;
    kk_std_text_parse__hnd_parse_drop(h, _ctx);
    _match_5153 = _brw_5155; /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/
    {
      kk_function_t _fun_unbox_x3479 = _match_5153.clause;
      _x5348 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x3479, (_fun_unbox_x3479, m0, ev_2783, kk_function_box(kk_std_text_parse_new_char_fun5351(c, _ctx)), _ctx)); /*52*/
    }
  }
  x_2780 = kk_std_core_types__maybe_unbox(_x5348, _ctx); /*maybe<char>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_2780, _ctx);
    kk_box_t _x5360 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_char_fun5361(msg_2264, _ctx), _ctx); /*3926*/
    return kk_char_unbox(_x5360, _ctx);
  }
  if (kk_std_core_types__is_Nothing(x_2780)) {
    kk_std_core_hnd__ev ev0_2786;
    kk_ssize_t _x5363 = (KK_IZ(0)); /*ssize_t*/
    ev0_2786 = kk_evv_at(_x5363,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_box_t _x5364;
    {
      struct kk_std_core_hnd_Ev* _con5365 = kk_std_core_hnd__as_Ev(ev0_2786);
      kk_std_core_hnd__marker m00 = _con5365->marker;
      kk_box_t _box_x3498 = _con5365->hnd;
      kk_std_text_parse__hnd_parse h0 = kk_std_text_parse__hnd_parse_unbox(_box_x3498, NULL);
      kk_std_text_parse__hnd_parse_dup(h0);
      kk_std_core_hnd__clause1 _match_5151;
      kk_std_core_hnd__clause1 _brw_5152 = kk_std_text_parse__select_fail(h0, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
      kk_std_text_parse__hnd_parse_drop(h0, _ctx);
      _match_5151 = _brw_5152; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
      {
        kk_function_t _fun_unbox_x3502 = _match_5151.clause;
        _x5364 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x3502, (_fun_unbox_x3502, m00, ev0_2786, kk_string_box(msg_2264), _ctx)); /*52*/
      }
    }
    return kk_char_unbox(_x5364, _ctx);
  }
  {
    kk_box_t _box_x3506 = x_2780._cons.Just.value;
    kk_char_t x2 = kk_char_unbox(_box_x3506, NULL);
    kk_string_drop(msg_2264, _ctx);
    return x2;
  }
}

kk_std_core_types__tuple2_ kk_std_text_parse_next_while0(kk_std_core__sslice slice, kk_function_t pred, kk_std_core__list acc, kk_context_t* _ctx) { /* (slice : sslice, pred : (char) -> bool, acc : list<char>) -> (list<char>, sslice) */ 
  kk__tailcall: ;
  kk_std_core_types__maybe _match_5149;
  kk_std_core__sslice _x5368 = kk_std_core__sslice_dup(slice); /*sslice*/
  _match_5149 = kk_std_core_next(_x5368, _ctx); /*maybe<(char, sslice)>*/
  if (kk_std_core_types__is_Just(_match_5149)) {
    kk_box_t _box_x3509 = _match_5149._cons.Just.value;
    kk_std_core_types__tuple2_ _pat0 = kk_std_core_types__tuple2__unbox(_box_x3509, NULL);
    if (kk_std_core_types__is_dash__lp__comma__rp_(_pat0)) {
      kk_box_t _box_x3510 = _pat0.fst;
      kk_box_t _box_x3511 = _pat0.snd;
      kk_char_t c = kk_char_unbox(_box_x3510, NULL);
      kk_std_core__sslice rest0 = kk_std_core__sslice_unbox(_box_x3511, NULL);
      kk_function_t _x5372 = kk_function_dup(pred); /*(char) -> bool*/
      if (kk_function_call(bool, (kk_function_t, kk_char_t, kk_context_t*), _x5372, (_x5372, c, _ctx))) {
        kk_std_core__sslice_drop(slice, _ctx);
        kk_std_core__sslice_dup(rest0);
        kk_std_core_types__maybe_drop(_match_5149, _ctx);
        { // tailcall
          kk_std_core__list _x5373 = kk_std_core__new_Cons(kk_reuse_null, kk_char_box(c, _ctx), acc, _ctx); /*list<61>*/
          slice = rest0;
          acc = _x5373;
          goto kk__tailcall;
        }
      }
    }
  }
  {
    kk_function_drop(pred, _ctx);
    kk_std_core_types__maybe_drop(_match_5149, _ctx);
    kk_std_core__list _b_3518_3514 = kk_std_core__lift17288_reverse(kk_std_core__new_Nil(_ctx), acc, _ctx); /*list<char>*/;
    return kk_std_core_types__new_dash__lp__comma__rp_(kk_std_core__list_box(_b_3518_3514, _ctx), kk_std_core__sslice_box(slice, _ctx), _ctx);
  }
}
 
// monadic lift

kk_std_core__list kk_std_text_parse__mlift2676_chars_are(kk_string_t msg, kk_std_core_types__maybe _y_2538, kk_context_t* _ctx) { /* (msg : string, maybe<list<char>>) -> parse list<char> */ 
  if (kk_std_core_types__is_Nothing(_y_2538)) {
    kk_std_core_hnd__ev ev_2789;
    kk_ssize_t _x5374 = (KK_IZ(0)); /*ssize_t*/
    ev_2789 = kk_evv_at(_x5374,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_box_t _x5375;
    {
      struct kk_std_core_hnd_Ev* _con5376 = kk_std_core_hnd__as_Ev(ev_2789);
      kk_std_core_hnd__marker m0 = _con5376->marker;
      kk_box_t _box_x3520 = _con5376->hnd;
      kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x3520, NULL);
      kk_std_text_parse__hnd_parse_dup(h);
      kk_std_core_hnd__clause1 _match_5147;
      kk_std_core_hnd__clause1 _brw_5148 = kk_std_text_parse__select_fail(h, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
      kk_std_text_parse__hnd_parse_drop(h, _ctx);
      _match_5147 = _brw_5148; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
      {
        kk_function_t _fun_unbox_x3524 = _match_5147.clause;
        _x5375 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x3524, (_fun_unbox_x3524, m0, ev_2789, kk_string_box(msg), _ctx)); /*52*/
      }
    }
    return kk_std_core__list_unbox(_x5375, _ctx);
  }
  {
    kk_box_t _box_x3528 = _y_2538._cons.Just.value;
    kk_std_core__list x0 = kk_std_core__list_unbox(_box_x3528, NULL);
    kk_string_drop(msg, _ctx);
    return x0;
  }
}


// lift anonymous function
struct kk_std_text_parse_chars_are_fun5383__t {
  struct kk_function_s _base;
  kk_function_t pred;
};
static kk_box_t kk_std_text_parse_chars_are_fun5383(kk_function_t _fself, kk_box_t _b_3542, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_chars_are_fun5383(kk_function_t pred, kk_context_t* _ctx) {
  struct kk_std_text_parse_chars_are_fun5383__t* _self = kk_function_alloc_as(struct kk_std_text_parse_chars_are_fun5383__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_chars_are_fun5383, kk_context());
  _self->pred = pred;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse_chars_are_fun5383(kk_function_t _fself, kk_box_t _b_3542, kk_context_t* _ctx) {
  struct kk_std_text_parse_chars_are_fun5383__t* _self = kk_function_as(struct kk_std_text_parse_chars_are_fun5383__t*, _fself);
  kk_function_t pred = _self->pred; /* (char) -> bool */
  kk_drop_match(_self, {kk_function_dup(pred);}, {}, _ctx)
  kk_std_core_types__maybe _x5384;
  kk_std_core_types__tuple2_ _match_5145;
  kk_std_core__sslice _x5385 = kk_std_core__sslice_unbox(_b_3542, _ctx); /*sslice*/
  _match_5145 = kk_std_text_parse_next_while0(_x5385, pred, kk_std_core__new_Nil(_ctx), _ctx); /*(list<char>, sslice)*/
  {
    kk_box_t _box_x3543 = _match_5145.fst;
    kk_box_t _box_x3544 = _match_5145.snd;
    kk_std_core__list _pat000 = kk_std_core__list_unbox(_box_x3543, NULL);
    kk_std_core__sslice _pat100 = kk_std_core__sslice_unbox(_box_x3544, NULL);
    if (kk_std_core__is_Nil(_pat000)) {
      kk_std_core_types__tuple2__drop(_match_5145, _ctx);
      _x5384 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/
      goto _match5386;
    }
  }
  {
    kk_box_t _box_x3545 = _match_5145.fst;
    kk_box_t _box_x3546 = _match_5145.snd;
    kk_std_core__list xs = kk_std_core__list_unbox(_box_x3545, NULL);
    kk_std_core__sslice rest0 = kk_std_core__sslice_unbox(_box_x3546, NULL);
    kk_std_core__sslice_dup(rest0);
    kk_std_core__list_dup(xs);
    kk_std_core_types__tuple2__drop(_match_5145, _ctx);
    kk_box_t _x5391;
    kk_std_core_types__tuple2_ _x5392 = kk_std_core_types__new_dash__lp__comma__rp_(kk_std_core__list_box(xs, _ctx), kk_std_core__sslice_box(rest0, _ctx), _ctx); /*(6, 7)*/
    _x5391 = kk_std_core_types__tuple2__box(_x5392, _ctx); /*107*/
    _x5384 = kk_std_core_types__new_Just(_x5391, _ctx); /*forall<a> maybe<a>*/
  }
  _match5386: ;
  return kk_std_core_types__maybe_box(_x5384, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_chars_are_fun5394__t {
  struct kk_function_s _base;
  kk_string_t msg;
};
static kk_box_t kk_std_text_parse_chars_are_fun5394(kk_function_t _fself, kk_box_t _b_3555, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_chars_are_fun5394(kk_string_t msg, kk_context_t* _ctx) {
  struct kk_std_text_parse_chars_are_fun5394__t* _self = kk_function_alloc_as(struct kk_std_text_parse_chars_are_fun5394__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_chars_are_fun5394, kk_context());
  _self->msg = msg;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse_chars_are_fun5394(kk_function_t _fself, kk_box_t _b_3555, kk_context_t* _ctx) {
  struct kk_std_text_parse_chars_are_fun5394__t* _self = kk_function_as(struct kk_std_text_parse_chars_are_fun5394__t*, _fself);
  kk_string_t msg = _self->msg; /* string */
  kk_drop_match(_self, {kk_string_dup(msg);}, {}, _ctx)
  kk_std_core_types__maybe _y_3566_2538 = kk_std_core_types__maybe_unbox(_b_3555, _ctx); /*maybe<list<char>>*/;
  kk_std_core__list _x5395 = kk_std_text_parse__mlift2676_chars_are(msg, _y_3566_2538, _ctx); /*list<char>*/
  return kk_std_core__list_box(_x5395, _ctx);
}

kk_std_core__list kk_std_text_parse_chars_are(kk_string_t msg, kk_function_t pred, kk_context_t* _ctx) { /* (msg : string, pred : (char) -> bool) -> parse list<char> */ 
  kk_std_core_hnd__ev ev_2795;
  kk_ssize_t _x5379 = (KK_IZ(0)); /*ssize_t*/
  ev_2795 = kk_evv_at(_x5379,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
  kk_std_core_types__maybe x_2792;
  kk_box_t _x5380;
  {
    struct kk_std_core_hnd_Ev* _con5381 = kk_std_core_hnd__as_Ev(ev_2795);
    kk_std_core_hnd__marker m0 = _con5381->marker;
    kk_box_t _box_x3529 = _con5381->hnd;
    kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x3529, NULL);
    kk_std_text_parse__hnd_parse_dup(h);
    kk_std_core_hnd__clause1 _match_5144;
    kk_std_core_hnd__clause1 _brw_5146 = kk_std_text_parse__select_satisfy(h, _ctx); /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/;
    kk_std_text_parse__hnd_parse_drop(h, _ctx);
    _match_5144 = _brw_5146; /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/
    {
      kk_function_t _fun_unbox_x3536 = _match_5144.clause;
      _x5380 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x3536, (_fun_unbox_x3536, m0, ev_2795, kk_function_box(kk_std_text_parse_new_chars_are_fun5383(pred, _ctx)), _ctx)); /*52*/
    }
  }
  x_2792 = kk_std_core_types__maybe_unbox(_x5380, _ctx); /*maybe<list<char>>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_2792, _ctx);
    kk_box_t _x5393 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_chars_are_fun5394(msg, _ctx), _ctx); /*3926*/
    return kk_std_core__list_unbox(_x5393, _ctx);
  }
  if (kk_std_core_types__is_Nothing(x_2792)) {
    kk_std_core_hnd__ev ev0_2798;
    kk_ssize_t _x5396 = (KK_IZ(0)); /*ssize_t*/
    ev0_2798 = kk_evv_at(_x5396,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_box_t _x5397;
    {
      struct kk_std_core_hnd_Ev* _con5398 = kk_std_core_hnd__as_Ev(ev0_2798);
      kk_std_core_hnd__marker m00 = _con5398->marker;
      kk_box_t _box_x3556 = _con5398->hnd;
      kk_std_text_parse__hnd_parse h0 = kk_std_text_parse__hnd_parse_unbox(_box_x3556, NULL);
      kk_std_text_parse__hnd_parse_dup(h0);
      kk_std_core_hnd__clause1 _match_5142;
      kk_std_core_hnd__clause1 _brw_5143 = kk_std_text_parse__select_fail(h0, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
      kk_std_text_parse__hnd_parse_drop(h0, _ctx);
      _match_5142 = _brw_5143; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
      {
        kk_function_t _fun_unbox_x3560 = _match_5142.clause;
        _x5397 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x3560, (_fun_unbox_x3560, m00, ev0_2798, kk_string_box(msg), _ctx)); /*52*/
      }
    }
    return kk_std_core__list_unbox(_x5397, _ctx);
  }
  {
    kk_box_t _box_x3564 = x_2792._cons.Just.value;
    kk_std_core__list x2 = kk_std_core__list_unbox(_box_x3564, NULL);
    kk_string_drop(msg, _ctx);
    return x2;
  }
}
 
// monadic lift

kk_box_t kk_std_text_parse__mlift2677_choose(kk_function_t p0, kk_std_core__list pp, bool _y_2545, kk_context_t* _ctx) { /* forall<a,e> (p0 : parser<e,a>, pp : list<parser<e,a>>, bool) -> <parse|e> a */ 
  if (_y_2545) {
    kk_std_core__list_drop(pp, _ctx);
    return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p0, (p0, _ctx));
  }
  {
    kk_function_drop(p0, _ctx);
    return kk_std_text_parse_choose(pp, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_choose_fun5408__t {
  struct kk_function_s _base;
  kk_ssize_t i_2803;
};
static kk_box_t kk_std_text_parse_choose_fun5408(kk_function_t _fself, kk_function_t cont, kk_box_t res, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_choose_fun5408(kk_ssize_t i_2803, kk_context_t* _ctx) {
  struct kk_std_text_parse_choose_fun5408__t* _self = kk_function_alloc_as(struct kk_std_text_parse_choose_fun5408__t, 1, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_choose_fun5408, kk_context());
  _self->i_2803 = i_2803;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse_choose_fun5408(kk_function_t _fself, kk_function_t cont, kk_box_t res, kk_context_t* _ctx) {
  struct kk_std_text_parse_choose_fun5408__t* _self = kk_function_as(struct kk_std_text_parse_choose_fun5408__t*, _fself);
  kk_ssize_t i_2803 = _self->i_2803; /* std/core/hnd/ev-index */
  kk_drop_match(_self, {;}, {}, _ctx)
  return kk_std_core_hnd_open_at1(i_2803, cont, res, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_choose_fun5418__t {
  struct kk_function_s _base;
  kk_ssize_t i0_2809;
};
static kk_box_t kk_std_text_parse_choose_fun5418(kk_function_t _fself, kk_function_t _b_3590, kk_box_t _b_3591, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_choose_fun5418(kk_ssize_t i0_2809, kk_context_t* _ctx) {
  struct kk_std_text_parse_choose_fun5418__t* _self = kk_function_alloc_as(struct kk_std_text_parse_choose_fun5418__t, 1, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_choose_fun5418, kk_context());
  _self->i0_2809 = i0_2809;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse_choose_fun5418(kk_function_t _fself, kk_function_t _b_3590, kk_box_t _b_3591, kk_context_t* _ctx) {
  struct kk_std_text_parse_choose_fun5418__t* _self = kk_function_as(struct kk_std_text_parse_choose_fun5418__t*, _fself);
  kk_ssize_t i0_2809 = _self->i0_2809; /* std/core/hnd/ev-index */
  kk_drop_match(_self, {;}, {}, _ctx)
  return kk_std_core_hnd_open_at1(i0_2809, _b_3590, _b_3591, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_choose_fun5419__t {
  struct kk_function_s _base;
  kk_function_t p00;
  kk_std_core__list pp0;
};
static kk_box_t kk_std_text_parse_choose_fun5419(kk_function_t _fself, kk_box_t _b_3600, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_choose_fun5419(kk_function_t p00, kk_std_core__list pp0, kk_context_t* _ctx) {
  struct kk_std_text_parse_choose_fun5419__t* _self = kk_function_alloc_as(struct kk_std_text_parse_choose_fun5419__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_choose_fun5419, kk_context());
  _self->p00 = p00;
  _self->pp0 = pp0;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse_choose_fun5419(kk_function_t _fself, kk_box_t _b_3600, kk_context_t* _ctx) {
  struct kk_std_text_parse_choose_fun5419__t* _self = kk_function_as(struct kk_std_text_parse_choose_fun5419__t*, _fself);
  kk_function_t p00 = _self->p00; /* std/text/parse/parser<766,765> */
  kk_std_core__list pp0 = _self->pp0; /* list<std/text/parse/parser<766,765>> */
  kk_drop_match(_self, {kk_function_dup(p00);kk_std_core__list_dup(pp0);}, {}, _ctx)
  bool _x5420 = kk_bool_unbox(_b_3600); /*bool*/
  return kk_std_text_parse__mlift2677_choose(p00, pp0, _x5420, _ctx);
}

kk_box_t kk_std_text_parse_choose(kk_std_core__list ps, kk_context_t* _ctx) { /* forall<a,e> (ps : list<parser<e,a>>) -> <parse|e> a */ 
  kk__tailcall: ;
  if (kk_std_core__is_Nil(ps)) {
    kk_ssize_t i_2803;
    kk_std_core_hnd__htag _x5405 = kk_std_core_hnd__htag_dup(kk_std_text_parse__tag_parse); /*std/core/hnd/htag<std/text/parse/.hnd-parse>*/
    i_2803 = kk_std_core_hnd__evv_index(_x5405, _ctx); /*std/core/hnd/ev-index*/
    kk_evv_t w = kk_evv_swap_create1(i_2803,kk_context()); /*std/core/hnd/evv<<std/text/parse/parse|766>>*/;
    kk_box_t y;
    kk_string_t _x5406;
    kk_define_string_literal(, _s5407, 23, "no further alternatives")
    _x5406 = kk_string_dup(_s5407); /*string*/
    y = kk_std_text_parse_fail(_x5406, _ctx); /*765*/
    kk_unit_t __ = kk_Unit;
    kk_evv_set(w,kk_context());
    if (kk_yielding(kk_context())) {
      kk_box_drop(y, _ctx);
      return kk_std_core_hnd_yield_cont(kk_std_text_parse_new_choose_fun5408(i_2803, _ctx), _ctx);
    }
    {
      return y;
    }
  }
  {
    struct kk_std_core_Cons* _con5409 = kk_std_core__as_Cons(ps);
    kk_box_t _fun_unbox_x3574 = _con5409->head;
    kk_std_core__list _pat1 = _con5409->tail;
    if (kk_std_core__is_Nil(_pat1)) {
      if (kk_likely(kk_std_core__list_is_unique(ps))) {
        kk_std_core__list_free(ps, _ctx);
      }
      else {
        kk_box_dup(_fun_unbox_x3574);
        kk_std_core__list_decref(ps, _ctx);
      }
      kk_function_t _x5410 = kk_function_unbox(_fun_unbox_x3574); /*() -> <std/text/parse/parse|766> 3575*/
      return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), _x5410, (_x5410, _ctx));
    }
  }
  {
    struct kk_std_core_Cons* _con5411 = kk_std_core__as_Cons(ps);
    kk_box_t _fun_unbox_x3577 = _con5411->head;
    kk_std_core__list pp0 = _con5411->tail;
    if (kk_likely(kk_std_core__list_is_unique(ps))) {
      kk_std_core__list_free(ps, _ctx);
    }
    else {
      kk_box_dup(_fun_unbox_x3577);
      kk_std_core__list_dup(pp0);
      kk_std_core__list_decref(ps, _ctx);
    }
    kk_function_t p00 = kk_function_unbox(_fun_unbox_x3577); /*std/text/parse/parser<766,765>*/;
    kk_ssize_t i0_2809;
    kk_std_core_hnd__htag _x5412 = kk_std_core_hnd__htag_dup(kk_std_text_parse__tag_parse); /*std/core/hnd/htag<std/text/parse/.hnd-parse>*/
    i0_2809 = kk_std_core_hnd__evv_index(_x5412, _ctx); /*std/core/hnd/ev-index*/
    kk_evv_t w0 = kk_evv_swap_create1(i0_2809,kk_context()); /*std/core/hnd/evv<<std/text/parse/parse|766>>*/;
    kk_std_core_hnd__ev ev_2811;
    kk_ssize_t _x5413 = (KK_IZ(0)); /*ssize_t*/
    ev_2811 = kk_evv_at(_x5413,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    bool y0;
    kk_box_t _x5414;
    {
      struct kk_std_core_hnd_Ev* _con5415 = kk_std_core_hnd__as_Ev(ev_2811);
      kk_std_core_hnd__marker m0 = _con5415->marker;
      kk_box_t _box_x3579 = _con5415->hnd;
      kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x3579, NULL);
      kk_std_text_parse__hnd_parse_dup(h);
      kk_std_core_hnd__clause0 _match_5136;
      kk_std_core_hnd__clause0 _brw_5137 = kk_std_text_parse__select_pick(h, _ctx); /*std/core/hnd/clause0<bool,std/text/parse/.hnd-parse,412,413>*/;
      kk_std_text_parse__hnd_parse_drop(h, _ctx);
      _match_5136 = _brw_5137; /*std/core/hnd/clause0<bool,std/text/parse/.hnd-parse,412,413>*/
      {
        kk_function_t _fun_unbox_x3582 = _match_5136.clause;
        _x5414 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x3582, (_fun_unbox_x3582, m0, ev_2811, _ctx)); /*37*/
      }
    }
    y0 = kk_bool_unbox(_x5414); /*bool*/
    kk_unit_t __0 = kk_Unit;
    kk_evv_set(w0,kk_context());
    bool x0_2806;
    if (kk_yielding(kk_context())) {
      kk_box_t _x5417 = kk_std_core_hnd_yield_cont(kk_std_text_parse_new_choose_fun5418(i0_2809, _ctx), _ctx); /*3949*/
      x0_2806 = kk_bool_unbox(_x5417); /*bool*/
    }
    else {
      x0_2806 = y0; /*bool*/
    }
    if (kk_yielding(kk_context())) {
      return kk_std_core_hnd_yield_extend(kk_std_text_parse_new_choose_fun5419(p00, pp0, _ctx), _ctx);
    }
    if (x0_2806) {
      kk_std_core__list_drop(pp0, _ctx);
      return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p00, (p00, _ctx));
    }
    {
      kk_function_drop(p00, _ctx);
      { // tailcall
        ps = pp0;
        goto kk__tailcall;
      }
    }
  }
}
 
// monadic lift

kk_std_core__list kk_std_text_parse__mlift2678_count_acc(kk_std_core__list acc, kk_integer_t n, kk_function_t p, kk_box_t x, kk_context_t* _ctx) { /* forall<a,e> (acc : list<a>, n : int, p : parser<e,a>, x : a) -> <parse|e> list<a> */ 
  kk_integer_t _x5421 = kk_integer_add_small_const(n, -1, _ctx); /*int*/
  kk_std_core__list _x5422 = kk_std_core__new_Cons(kk_reuse_null, x, acc, _ctx); /*list<61>*/
  return kk_std_text_parse_count_acc(_x5421, _x5422, p, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_count_acc_fun5425__t {
  struct kk_function_s _base;
  kk_std_core__list acc0;
  kk_integer_t n0;
  kk_function_t p0;
};
static kk_box_t kk_std_text_parse_count_acc_fun5425(kk_function_t _fself, kk_box_t _b_3605, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_count_acc_fun5425(kk_std_core__list acc0, kk_integer_t n0, kk_function_t p0, kk_context_t* _ctx) {
  struct kk_std_text_parse_count_acc_fun5425__t* _self = kk_function_alloc_as(struct kk_std_text_parse_count_acc_fun5425__t, 4, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_count_acc_fun5425, kk_context());
  _self->acc0 = acc0;
  _self->n0 = n0;
  _self->p0 = p0;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse_count_acc_fun5425(kk_function_t _fself, kk_box_t _b_3605, kk_context_t* _ctx) {
  struct kk_std_text_parse_count_acc_fun5425__t* _self = kk_function_as(struct kk_std_text_parse_count_acc_fun5425__t*, _fself);
  kk_std_core__list acc0 = _self->acc0; /* list<820> */
  kk_integer_t n0 = _self->n0; /* int */
  kk_function_t p0 = _self->p0; /* std/text/parse/parser<821,820> */
  kk_drop_match(_self, {kk_std_core__list_dup(acc0);kk_integer_dup(n0);kk_function_dup(p0);}, {}, _ctx)
  kk_box_t x1_3607 = _b_3605; /*820*/;
  kk_std_core__list _x5426 = kk_std_text_parse__mlift2678_count_acc(acc0, n0, p0, x1_3607, _ctx); /*list<820>*/
  return kk_std_core__list_box(_x5426, _ctx);
}

kk_std_core__list kk_std_text_parse_count_acc(kk_integer_t n0, kk_std_core__list acc0, kk_function_t p0, kk_context_t* _ctx) { /* forall<a,e> (n : int, acc : list<a>, p : parser<e,a>) -> <parse|e> list<a> */ 
  kk__tailcall: ;
  bool _match_5132 = kk_integer_lte_borrow(n0,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_5132) {
    kk_function_drop(p0, _ctx);
    kk_integer_drop(n0, _ctx);
    return kk_std_core_reverse(acc0, _ctx);
  }
  {
    kk_box_t x0_2813;
    kk_function_t _x5423 = kk_function_dup(p0); /*std/text/parse/parser<821,820>*/
    x0_2813 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), _x5423, (_x5423, _ctx)); /*820*/
    if (kk_yielding(kk_context())) {
      kk_box_drop(x0_2813, _ctx);
      kk_box_t _x5424 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_count_acc_fun5425(acc0, n0, p0, _ctx), _ctx); /*3926*/
      return kk_std_core__list_unbox(_x5424, _ctx);
    }
    { // tailcall
      kk_integer_t _x5427 = kk_integer_add_small_const(n0, -1, _ctx); /*int*/
      kk_std_core__list _x5428 = kk_std_core__new_Cons(kk_reuse_null, x0_2813, acc0, _ctx); /*list<61>*/
      n0 = _x5427;
      acc0 = _x5428;
      goto kk__tailcall;
    }
  }
}
 
// monadic lift

kk_integer_t kk_std_text_parse__mlift2679_digit(kk_char_t _c_2557, kk_context_t* _ctx) { /* (char) -> int */ 
  kk_evv_t w = kk_evv_swap_create0(kk_context()); /*std/core/hnd/evv<std/text/parse/parse>*/;
  kk_integer_t x_16956 = kk_integer_from_int(_c_2557,kk_context()); /*int*/;
  kk_integer_t y_16957 = kk_integer_from_int(('0'),kk_context()); /*int*/;
  kk_char_t x;
  kk_integer_t _x5433 = kk_integer_sub(x_16956,y_16957,kk_context()); /*int*/
  x = kk_integer_clamp32(_x5433,kk_context()); /*char*/
  kk_unit_t keep = kk_Unit;
  kk_evv_set(w,kk_context());
  return kk_integer_from_int(x,kk_context());
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift2680_digit_fun5443__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift2680_digit_fun5443(kk_function_t _fself, kk_box_t _b_3624, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift2680_digit_fun5443(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift2680_digit_fun5443, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse__mlift2680_digit_fun5443(kk_function_t _fself, kk_box_t _b_3624, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x5444;
  kk_char_t _x5445 = kk_char_unbox(_b_3624, _ctx); /*char*/
  _x5444 = kk_std_text_parse__mlift2679_digit(_x5445, _ctx); /*int*/
  return kk_integer_box(_x5444);
}

kk_integer_t kk_std_text_parse__mlift2680_digit(kk_std_core_types__maybe _y_2555, kk_context_t* _ctx) { /* (maybe<char>) -> parse int */ 
  kk_char_t x_2821;
  if (kk_std_core_types__is_Nothing(_y_2555)) {
    kk_std_core_hnd__ev ev_2823;
    kk_ssize_t _x5434 = (KK_IZ(0)); /*ssize_t*/
    ev_2823 = kk_evv_at(_x5434,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_box_t _x5435;
    {
      struct kk_std_core_hnd_Ev* _con5436 = kk_std_core_hnd__as_Ev(ev_2823);
      kk_std_core_hnd__marker m0 = _con5436->marker;
      kk_box_t _box_x3614 = _con5436->hnd;
      kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x3614, NULL);
      kk_std_text_parse__hnd_parse_dup(h);
      kk_std_core_hnd__clause1 _match_5128;
      kk_std_core_hnd__clause1 _brw_5129 = kk_std_text_parse__select_fail(h, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
      kk_std_text_parse__hnd_parse_drop(h, _ctx);
      _match_5128 = _brw_5129; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
      {
        kk_function_t _fun_unbox_x3618 = _match_5128.clause;
        kk_box_t _x5438;
        kk_string_t _x5439;
        kk_define_string_literal(, _s5440, 5, "digit")
        _x5439 = kk_string_dup(_s5440); /*string*/
        _x5438 = kk_string_box(_x5439); /*51*/
        _x5435 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x3618, (_fun_unbox_x3618, m0, ev_2823, _x5438, _ctx)); /*52*/
      }
    }
    x_2821 = kk_char_unbox(_x5435, _ctx); /*char*/
  }
  else {
    kk_box_t _box_x3622 = _y_2555._cons.Just.value;
    kk_char_t x1 = kk_char_unbox(_box_x3622, NULL);
    x_2821 = x1; /*char*/
  }
  if (kk_yielding(kk_context())) {
    kk_box_t _x5442 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift2680_digit_fun5443(_ctx), _ctx); /*3926*/
    return kk_integer_unbox(_x5442);
  }
  {
    return kk_std_text_parse__mlift2679_digit(x_2821, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_digit_fun5450__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_digit_fun5450(kk_function_t _fself, kk_box_t _b_3639, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digit_fun5450(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digit_fun5450, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_digit_fun5450(kk_function_t _fself, kk_box_t _b_3639, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x5451;
  kk_std_core_types__maybe _match_5124;
  kk_std_core__sslice _x5452 = kk_std_core__sslice_unbox(_b_3639, _ctx); /*sslice*/
  _match_5124 = kk_std_core_next(_x5452, _ctx); /*maybe<(char, sslice)>*/
  if (kk_std_core_types__is_Just(_match_5124)) {
    kk_box_t _box_x3640 = _match_5124._cons.Just.value;
    kk_std_core_types__tuple2_ _pat000 = kk_std_core_types__tuple2__unbox(_box_x3640, NULL);
    if (kk_std_core_types__is_dash__lp__comma__rp_(_pat000)) {
      kk_box_t _box_x3641 = _pat000.fst;
      kk_box_t _box_x3642 = _pat000.snd;
      kk_char_t c = kk_char_unbox(_box_x3641, NULL);
      kk_std_core__sslice rest0 = kk_std_core__sslice_unbox(_box_x3642, NULL);
      bool _match_5125 = (c >= ('0')); /*bool*/;
      bool _x5457;
      if (_match_5125) {
        _x5457 = (c <= ('9')); /*bool*/
      }
      else {
        _x5457 = false; /*bool*/
      }
      if (_x5457) {
        kk_std_core__sslice_dup(rest0);
        kk_std_core_types__maybe_drop(_match_5124, _ctx);
        kk_box_t _x5458;
        kk_std_core_types__tuple2_ _x5459 = kk_std_core_types__new_dash__lp__comma__rp_(kk_char_box(c, _ctx), kk_std_core__sslice_box(rest0, _ctx), _ctx); /*(6, 7)*/
        _x5458 = kk_std_core_types__tuple2__box(_x5459, _ctx); /*107*/
        _x5451 = kk_std_core_types__new_Just(_x5458, _ctx); /*maybe<107>*/
        goto _match5453;
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_5124, _ctx);
    _x5451 = kk_std_core_types__new_Nothing(_ctx); /*maybe<107>*/
  }
  _match5453: ;
  return kk_std_core_types__maybe_box(_x5451, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_digit_fun5461__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_digit_fun5461(kk_function_t _fself, kk_box_t _b_3651, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digit_fun5461(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digit_fun5461, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_digit_fun5461(kk_function_t _fself, kk_box_t _b_3651, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x5462;
  kk_std_core_types__maybe _x5463 = kk_std_core_types__maybe_unbox(_b_3651, _ctx); /*maybe<char>*/
  _x5462 = kk_std_text_parse__mlift2680_digit(_x5463, _ctx); /*int*/
  return kk_integer_box(_x5462);
}


// lift anonymous function
struct kk_std_text_parse_digit_fun5473__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_digit_fun5473(kk_function_t _fself, kk_box_t _b_3662, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digit_fun5473(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digit_fun5473, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_digit_fun5473(kk_function_t _fself, kk_box_t _b_3662, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x5474;
  kk_char_t _x5475 = kk_char_unbox(_b_3662, _ctx); /*char*/
  _x5474 = kk_std_text_parse__mlift2679_digit(_x5475, _ctx); /*int*/
  return kk_integer_box(_x5474);
}

kk_integer_t kk_std_text_parse_digit(kk_context_t* _ctx) { /* () -> parse int */ 
  kk_std_core_hnd__ev ev_2829;
  kk_ssize_t _x5446 = (KK_IZ(0)); /*ssize_t*/
  ev_2829 = kk_evv_at(_x5446,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
  kk_std_core_types__maybe x_2826;
  kk_box_t _x5447;
  {
    struct kk_std_core_hnd_Ev* _con5448 = kk_std_core_hnd__as_Ev(ev_2829);
    kk_std_core_hnd__marker m0 = _con5448->marker;
    kk_box_t _box_x3626 = _con5448->hnd;
    kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x3626, NULL);
    kk_std_text_parse__hnd_parse_dup(h);
    kk_std_core_hnd__clause1 _match_5123;
    kk_std_core_hnd__clause1 _brw_5126 = kk_std_text_parse__select_satisfy(h, _ctx); /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/;
    kk_std_text_parse__hnd_parse_drop(h, _ctx);
    _match_5123 = _brw_5126; /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/
    {
      kk_function_t _fun_unbox_x3633 = _match_5123.clause;
      _x5447 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x3633, (_fun_unbox_x3633, m0, ev_2829, kk_function_box(kk_std_text_parse_new_digit_fun5450(_ctx)), _ctx)); /*52*/
    }
  }
  x_2826 = kk_std_core_types__maybe_unbox(_x5447, _ctx); /*maybe<char>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_2826, _ctx);
    kk_box_t _x5460 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_digit_fun5461(_ctx), _ctx); /*3926*/
    return kk_integer_unbox(_x5460);
  }
  {
    kk_char_t x1_2832;
    if (kk_std_core_types__is_Nothing(x_2826)) {
      kk_std_core_hnd__ev ev0_2835;
      kk_ssize_t _x5464 = (KK_IZ(0)); /*ssize_t*/
      ev0_2835 = kk_evv_at(_x5464,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
      kk_box_t _x5465;
      {
        struct kk_std_core_hnd_Ev* _con5466 = kk_std_core_hnd__as_Ev(ev0_2835);
        kk_std_core_hnd__marker m00 = _con5466->marker;
        kk_box_t _box_x3652 = _con5466->hnd;
        kk_std_text_parse__hnd_parse h0 = kk_std_text_parse__hnd_parse_unbox(_box_x3652, NULL);
        kk_std_text_parse__hnd_parse_dup(h0);
        kk_std_core_hnd__clause1 _match_5121;
        kk_std_core_hnd__clause1 _brw_5122 = kk_std_text_parse__select_fail(h0, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
        kk_std_text_parse__hnd_parse_drop(h0, _ctx);
        _match_5121 = _brw_5122; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
        {
          kk_function_t _fun_unbox_x3656 = _match_5121.clause;
          kk_box_t _x5468;
          kk_string_t _x5469;
          kk_define_string_literal(, _s5470, 5, "digit")
          _x5469 = kk_string_dup(_s5470); /*string*/
          _x5468 = kk_string_box(_x5469); /*51*/
          _x5465 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x3656, (_fun_unbox_x3656, m00, ev0_2835, _x5468, _ctx)); /*52*/
        }
      }
      x1_2832 = kk_char_unbox(_x5465, _ctx); /*char*/
    }
    else {
      kk_box_t _box_x3660 = x_2826._cons.Just.value;
      kk_char_t x3 = kk_char_unbox(_box_x3660, NULL);
      x1_2832 = x3; /*char*/
    }
    if (kk_yielding(kk_context())) {
      kk_box_t _x5472 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_digit_fun5473(_ctx), _ctx); /*3926*/
      return kk_integer_unbox(_x5472);
    }
    {
      kk_evv_t w = kk_evv_swap_create0(kk_context()); /*std/core/hnd/evv<std/text/parse/parse>*/;
      kk_integer_t x_16956 = kk_integer_from_int(x1_2832,kk_context()); /*int*/;
      kk_integer_t y_16957 = kk_integer_from_int(('0'),kk_context()); /*int*/;
      kk_char_t x4;
      kk_integer_t _x5476 = kk_integer_sub(x_16956,y_16957,kk_context()); /*int*/
      x4 = kk_integer_clamp32(_x5476,kk_context()); /*char*/
      kk_unit_t keep = kk_Unit;
      kk_evv_set(w,kk_context());
      return kk_integer_from_int(x4,kk_context());
    }
  }
}
 
// lifted local: digits, .spec.2501
// specialized: std/text/parse/next-while0, on parameters pred, using:
// pred = std/core/is-digit

kk_std_core_types__tuple2_ kk_std_text_parse__lift2509_digits(kk_std_core__sslice slice0, kk_std_core__list acc, kk_context_t* _ctx) { /* (slice0 : sslice, acc : list<char>) -> (list<char>, sslice) */ 
  kk__tailcall: ;
  kk_std_core_types__maybe _match_5118;
  kk_std_core__sslice _x5477 = kk_std_core__sslice_dup(slice0); /*sslice*/
  _match_5118 = kk_std_core_next(_x5477, _ctx); /*maybe<(char, sslice)>*/
  if (kk_std_core_types__is_Just(_match_5118)) {
    kk_box_t _box_x3665 = _match_5118._cons.Just.value;
    kk_std_core_types__tuple2_ _pat0 = kk_std_core_types__tuple2__unbox(_box_x3665, NULL);
    if (kk_std_core_types__is_dash__lp__comma__rp_(_pat0)) {
      kk_box_t _box_x3666 = _pat0.fst;
      kk_box_t _box_x3667 = _pat0.snd;
      kk_char_t c = kk_char_unbox(_box_x3666, NULL);
      kk_std_core__sslice rest0 = kk_std_core__sslice_unbox(_box_x3667, NULL);
      if (kk_std_core_is_digit(c, _ctx)) {
        kk_std_core__sslice_drop(slice0, _ctx);
        kk_std_core__sslice_dup(rest0);
        kk_std_core_types__maybe_drop(_match_5118, _ctx);
        { // tailcall
          kk_std_core__list _x5481 = kk_std_core__new_Cons(kk_reuse_null, kk_char_box(c, _ctx), acc, _ctx); /*list<61>*/
          slice0 = rest0;
          acc = _x5481;
          goto kk__tailcall;
        }
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_5118, _ctx);
    kk_std_core__list _b_3674_3670 = kk_std_core__lift17288_reverse(kk_std_core__new_Nil(_ctx), acc, _ctx); /*list<char>*/;
    return kk_std_core_types__new_dash__lp__comma__rp_(kk_std_core__list_box(_b_3674_3670, _ctx), kk_std_core__sslice_box(slice0, _ctx), _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift2681_digits_fun5491__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift2681_digits_fun5491(kk_function_t _fself, kk_box_t _b_3686, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift2681_digits_fun5491(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift2681_digits_fun5491, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse__mlift2681_digits_fun5491(kk_function_t _fself, kk_box_t _b_3686, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x5492;
  kk_std_core__list _x5493 = kk_std_core__list_unbox(_b_3686, _ctx); /*list<char>*/
  _x5492 = kk_std_core_string_2(_x5493, _ctx); /*string*/
  return kk_string_box(_x5492);
}

kk_string_t kk_std_text_parse__mlift2681_digits(kk_std_core_types__maybe _y_2558, kk_context_t* _ctx) { /* (maybe<list<char>>) -> parse string */ 
  kk_std_core__list x_2841;
  if (kk_std_core_types__is_Nothing(_y_2558)) {
    kk_std_core_hnd__ev ev_2843;
    kk_ssize_t _x5482 = (KK_IZ(0)); /*ssize_t*/
    ev_2843 = kk_evv_at(_x5482,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_box_t _x5483;
    {
      struct kk_std_core_hnd_Ev* _con5484 = kk_std_core_hnd__as_Ev(ev_2843);
      kk_std_core_hnd__marker m0 = _con5484->marker;
      kk_box_t _box_x3676 = _con5484->hnd;
      kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x3676, NULL);
      kk_std_text_parse__hnd_parse_dup(h);
      kk_std_core_hnd__clause1 _match_5116;
      kk_std_core_hnd__clause1 _brw_5117 = kk_std_text_parse__select_fail(h, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
      kk_std_text_parse__hnd_parse_drop(h, _ctx);
      _match_5116 = _brw_5117; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
      {
        kk_function_t _fun_unbox_x3680 = _match_5116.clause;
        kk_box_t _x5486;
        kk_string_t _x5487;
        kk_define_string_literal(, _s5488, 5, "digit")
        _x5487 = kk_string_dup(_s5488); /*string*/
        _x5486 = kk_string_box(_x5487); /*51*/
        _x5483 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x3680, (_fun_unbox_x3680, m0, ev_2843, _x5486, _ctx)); /*52*/
      }
    }
    x_2841 = kk_std_core__list_unbox(_x5483, _ctx); /*list<char>*/
  }
  else {
    kk_box_t _box_x3684 = _y_2558._cons.Just.value;
    kk_std_core__list x1 = kk_std_core__list_unbox(_box_x3684, NULL);
    x_2841 = x1; /*list<char>*/
  }
  if (kk_yielding(kk_context())) {
    kk_std_core__list_drop(x_2841, _ctx);
    kk_box_t _x5490 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift2681_digits_fun5491(_ctx), _ctx); /*3926*/
    return kk_string_unbox(_x5490);
  }
  {
    return kk_std_core_string_2(x_2841, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_digits_fun5498__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_digits_fun5498(kk_function_t _fself, kk_box_t _b_3701, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digits_fun5498(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digits_fun5498, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_digits_fun5498(kk_function_t _fself, kk_box_t _b_3701, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x5499;
  kk_std_core_types__tuple2_ _match_5113;
  kk_std_core__sslice _x5500 = kk_std_core__sslice_unbox(_b_3701, _ctx); /*sslice*/
  _match_5113 = kk_std_text_parse__lift2509_digits(_x5500, kk_std_core__new_Nil(_ctx), _ctx); /*(list<char>, sslice)*/
  {
    kk_box_t _box_x3702 = _match_5113.fst;
    kk_box_t _box_x3703 = _match_5113.snd;
    kk_std_core__list _pat000 = kk_std_core__list_unbox(_box_x3702, NULL);
    kk_std_core__sslice _pat1000 = kk_std_core__sslice_unbox(_box_x3703, NULL);
    if (kk_std_core__is_Nil(_pat000)) {
      kk_std_core_types__tuple2__drop(_match_5113, _ctx);
      _x5499 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/
      goto _match5501;
    }
  }
  {
    kk_box_t _box_x3704 = _match_5113.fst;
    kk_box_t _box_x3705 = _match_5113.snd;
    kk_std_core__list xs = kk_std_core__list_unbox(_box_x3704, NULL);
    kk_std_core__sslice rest00 = kk_std_core__sslice_unbox(_box_x3705, NULL);
    kk_std_core__sslice_dup(rest00);
    kk_std_core__list_dup(xs);
    kk_std_core_types__tuple2__drop(_match_5113, _ctx);
    kk_box_t _x5506;
    kk_std_core_types__tuple2_ _x5507 = kk_std_core_types__new_dash__lp__comma__rp_(kk_std_core__list_box(xs, _ctx), kk_std_core__sslice_box(rest00, _ctx), _ctx); /*(6, 7)*/
    _x5506 = kk_std_core_types__tuple2__box(_x5507, _ctx); /*107*/
    _x5499 = kk_std_core_types__new_Just(_x5506, _ctx); /*forall<a> maybe<a>*/
  }
  _match5501: ;
  return kk_std_core_types__maybe_box(_x5499, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_digits_fun5509__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_digits_fun5509(kk_function_t _fself, kk_box_t _b_3714, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digits_fun5509(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digits_fun5509, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_digits_fun5509(kk_function_t _fself, kk_box_t _b_3714, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x5510;
  kk_std_core_types__maybe _x5511 = kk_std_core_types__maybe_unbox(_b_3714, _ctx); /*maybe<list<char>>*/
  _x5510 = kk_std_text_parse__mlift2681_digits(_x5511, _ctx); /*string*/
  return kk_string_box(_x5510);
}


// lift anonymous function
struct kk_std_text_parse_digits_fun5521__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_digits_fun5521(kk_function_t _fself, kk_box_t _b_3725, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digits_fun5521(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digits_fun5521, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_digits_fun5521(kk_function_t _fself, kk_box_t _b_3725, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x5522;
  kk_std_core__list _x5523 = kk_std_core__list_unbox(_b_3725, _ctx); /*list<char>*/
  _x5522 = kk_std_core_string_2(_x5523, _ctx); /*string*/
  return kk_string_box(_x5522);
}

kk_string_t kk_std_text_parse_digits(kk_context_t* _ctx) { /* () -> parse string */ 
  kk_std_core_hnd__ev ev_2849;
  kk_ssize_t _x5494 = (KK_IZ(0)); /*ssize_t*/
  ev_2849 = kk_evv_at(_x5494,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
  kk_std_core_types__maybe x_2846;
  kk_box_t _x5495;
  {
    struct kk_std_core_hnd_Ev* _con5496 = kk_std_core_hnd__as_Ev(ev_2849);
    kk_std_core_hnd__marker m0 = _con5496->marker;
    kk_box_t _box_x3688 = _con5496->hnd;
    kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x3688, NULL);
    kk_std_text_parse__hnd_parse_dup(h);
    kk_std_core_hnd__clause1 _match_5112;
    kk_std_core_hnd__clause1 _brw_5114 = kk_std_text_parse__select_satisfy(h, _ctx); /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/;
    kk_std_text_parse__hnd_parse_drop(h, _ctx);
    _match_5112 = _brw_5114; /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/
    {
      kk_function_t _fun_unbox_x3695 = _match_5112.clause;
      _x5495 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x3695, (_fun_unbox_x3695, m0, ev_2849, kk_function_box(kk_std_text_parse_new_digits_fun5498(_ctx)), _ctx)); /*52*/
    }
  }
  x_2846 = kk_std_core_types__maybe_unbox(_x5495, _ctx); /*maybe<list<char>>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_2846, _ctx);
    kk_box_t _x5508 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_digits_fun5509(_ctx), _ctx); /*3926*/
    return kk_string_unbox(_x5508);
  }
  {
    kk_std_core__list x1_2852;
    if (kk_std_core_types__is_Nothing(x_2846)) {
      kk_std_core_hnd__ev ev0_2854;
      kk_ssize_t _x5512 = (KK_IZ(0)); /*ssize_t*/
      ev0_2854 = kk_evv_at(_x5512,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
      kk_box_t _x5513;
      {
        struct kk_std_core_hnd_Ev* _con5514 = kk_std_core_hnd__as_Ev(ev0_2854);
        kk_std_core_hnd__marker m00 = _con5514->marker;
        kk_box_t _box_x3715 = _con5514->hnd;
        kk_std_text_parse__hnd_parse h0 = kk_std_text_parse__hnd_parse_unbox(_box_x3715, NULL);
        kk_std_text_parse__hnd_parse_dup(h0);
        kk_std_core_hnd__clause1 _match_5110;
        kk_std_core_hnd__clause1 _brw_5111 = kk_std_text_parse__select_fail(h0, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
        kk_std_text_parse__hnd_parse_drop(h0, _ctx);
        _match_5110 = _brw_5111; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
        {
          kk_function_t _fun_unbox_x3719 = _match_5110.clause;
          kk_box_t _x5516;
          kk_string_t _x5517;
          kk_define_string_literal(, _s5518, 5, "digit")
          _x5517 = kk_string_dup(_s5518); /*string*/
          _x5516 = kk_string_box(_x5517); /*51*/
          _x5513 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x3719, (_fun_unbox_x3719, m00, ev0_2854, _x5516, _ctx)); /*52*/
        }
      }
      x1_2852 = kk_std_core__list_unbox(_x5513, _ctx); /*list<char>*/
    }
    else {
      kk_box_t _box_x3723 = x_2846._cons.Just.value;
      kk_std_core__list x3 = kk_std_core__list_unbox(_box_x3723, NULL);
      x1_2852 = x3; /*list<char>*/
    }
    if (kk_yielding(kk_context())) {
      kk_std_core__list_drop(x1_2852, _ctx);
      kk_box_t _x5520 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_digits_fun5521(_ctx), _ctx); /*3926*/
      return kk_string_unbox(_x5520);
    }
    {
      return kk_std_core_string_2(x1_2852, _ctx);
    }
  }
}


// lift anonymous function
struct kk_std_text_parse__lp__bar__bar__fun5530__t_rp_ {
  struct kk_function_s _base;
  kk_ssize_t i_2860;
};
static kk_box_t kk_std_text_parse__lp__bar__bar__fun5530_rp_(kk_function_t _fself, kk_function_t _b_3739, kk_box_t _b_3740, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_dash__bar__bar__fun5530(kk_ssize_t i_2860, kk_context_t* _ctx) {
  struct kk_std_text_parse__lp__bar__bar__fun5530__t_rp_* _self = kk_function_alloc_as(struct kk_std_text_parse__lp__bar__bar__fun5530__t_rp_, 1, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse__lp__bar__bar__fun5530_rp_, kk_context());
  _self->i_2860 = i_2860;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse__lp__bar__bar__fun5530_rp_(kk_function_t _fself, kk_function_t _b_3739, kk_box_t _b_3740, kk_context_t* _ctx) {
  struct kk_std_text_parse__lp__bar__bar__fun5530__t_rp_* _self = kk_function_as(struct kk_std_text_parse__lp__bar__bar__fun5530__t_rp_*, _fself);
  kk_ssize_t i_2860 = _self->i_2860; /* std/core/hnd/ev-index */
  kk_drop_match(_self, {;}, {}, _ctx)
  return kk_std_core_hnd_open_at1(i_2860, _b_3739, _b_3740, _ctx);
}


// lift anonymous function
struct kk_std_text_parse__lp__bar__bar__fun5531__t_rp_ {
  struct kk_function_s _base;
  kk_function_t p1;
  kk_function_t p2;
};
static kk_box_t kk_std_text_parse__lp__bar__bar__fun5531_rp_(kk_function_t _fself, kk_box_t _b_3749, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_dash__bar__bar__fun5531(kk_function_t p1, kk_function_t p2, kk_context_t* _ctx) {
  struct kk_std_text_parse__lp__bar__bar__fun5531__t_rp_* _self = kk_function_alloc_as(struct kk_std_text_parse__lp__bar__bar__fun5531__t_rp_, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse__lp__bar__bar__fun5531_rp_, kk_context());
  _self->p1 = p1;
  _self->p2 = p2;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse__lp__bar__bar__fun5531_rp_(kk_function_t _fself, kk_box_t _b_3749, kk_context_t* _ctx) {
  struct kk_std_text_parse__lp__bar__bar__fun5531__t_rp_* _self = kk_function_as(struct kk_std_text_parse__lp__bar__bar__fun5531__t_rp_*, _fself);
  kk_function_t p1 = _self->p1; /* std/text/parse/parser<945,944> */
  kk_function_t p2 = _self->p2; /* std/text/parse/parser<945,944> */
  kk_drop_match(_self, {kk_function_dup(p1);kk_function_dup(p2);}, {}, _ctx)
  bool _match_5104 = kk_bool_unbox(_b_3749); /*bool*/;
  if (_match_5104) {
    kk_function_drop(p2, _ctx);
    return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p1, (p1, _ctx));
  }
  {
    kk_function_drop(p1, _ctx);
    return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p2, (p2, _ctx));
  }
}

kk_box_t kk_std_text_parse__lp__bar__bar__rp_(kk_function_t p1, kk_function_t p2, kk_context_t* _ctx) { /* forall<a,e> (p1 : parser<e,a>, p2 : parser<e,a>) -> <parse|e> a */ 
  kk_ssize_t i_2860;
  kk_std_core_hnd__htag _x5524 = kk_std_core_hnd__htag_dup(kk_std_text_parse__tag_parse); /*std/core/hnd/htag<std/text/parse/.hnd-parse>*/
  i_2860 = kk_std_core_hnd__evv_index(_x5524, _ctx); /*std/core/hnd/ev-index*/
  kk_evv_t w = kk_evv_swap_create1(i_2860,kk_context()); /*std/core/hnd/evv<<std/text/parse/parse|945>>*/;
  kk_std_core_hnd__ev ev_2862;
  kk_ssize_t _x5525 = (KK_IZ(0)); /*ssize_t*/
  ev_2862 = kk_evv_at(_x5525,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
  bool y;
  kk_box_t _x5526;
  {
    struct kk_std_core_hnd_Ev* _con5527 = kk_std_core_hnd__as_Ev(ev_2862);
    kk_std_core_hnd__marker m0 = _con5527->marker;
    kk_box_t _box_x3728 = _con5527->hnd;
    kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x3728, NULL);
    kk_std_text_parse__hnd_parse_dup(h);
    kk_std_core_hnd__clause0 _match_5106;
    kk_std_core_hnd__clause0 _brw_5107 = kk_std_text_parse__select_pick(h, _ctx); /*std/core/hnd/clause0<bool,std/text/parse/.hnd-parse,412,413>*/;
    kk_std_text_parse__hnd_parse_drop(h, _ctx);
    _match_5106 = _brw_5107; /*std/core/hnd/clause0<bool,std/text/parse/.hnd-parse,412,413>*/
    {
      kk_function_t _fun_unbox_x3731 = _match_5106.clause;
      _x5526 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x3731, (_fun_unbox_x3731, m0, ev_2862, _ctx)); /*37*/
    }
  }
  y = kk_bool_unbox(_x5526); /*bool*/
  kk_unit_t __ = kk_Unit;
  kk_evv_set(w,kk_context());
  bool x_2857;
  if (kk_yielding(kk_context())) {
    kk_box_t _x5529 = kk_std_core_hnd_yield_cont(kk_std_text_parse_new_dash__bar__bar__fun5530(i_2860, _ctx), _ctx); /*3949*/
    x_2857 = kk_bool_unbox(_x5529); /*bool*/
  }
  else {
    x_2857 = y; /*bool*/
  }
  if (kk_yielding(kk_context())) {
    return kk_std_core_hnd_yield_extend(kk_std_text_parse_new_dash__bar__bar__fun5531(p1, p2, _ctx), _ctx);
  }
  if (x_2857) {
    kk_function_drop(p2, _ctx);
    return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p1, (p1, _ctx));
  }
  {
    kk_function_drop(p1, _ctx);
    return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p2, (p2, _ctx));
  }
}


// lift anonymous function
struct kk_std_text_parse_optional_fun5538__t {
  struct kk_function_s _base;
  kk_ssize_t i_2870;
};
static kk_box_t kk_std_text_parse_optional_fun5538(kk_function_t _fself, kk_function_t _b_3764, kk_box_t _b_3765, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_optional_fun5538(kk_ssize_t i_2870, kk_context_t* _ctx) {
  struct kk_std_text_parse_optional_fun5538__t* _self = kk_function_alloc_as(struct kk_std_text_parse_optional_fun5538__t, 1, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_optional_fun5538, kk_context());
  _self->i_2870 = i_2870;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse_optional_fun5538(kk_function_t _fself, kk_function_t _b_3764, kk_box_t _b_3765, kk_context_t* _ctx) {
  struct kk_std_text_parse_optional_fun5538__t* _self = kk_function_as(struct kk_std_text_parse_optional_fun5538__t*, _fself);
  kk_ssize_t i_2870 = _self->i_2870; /* std/core/hnd/ev-index */
  kk_drop_match(_self, {;}, {}, _ctx)
  return kk_std_core_hnd_open_at1(i_2870, _b_3764, _b_3765, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_optional_fun5539__t {
  struct kk_function_s _base;
  kk_box_t kkloc_default;
  kk_function_t p;
};
static kk_box_t kk_std_text_parse_optional_fun5539(kk_function_t _fself, kk_box_t _b_3774, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_optional_fun5539(kk_box_t kkloc_default, kk_function_t p, kk_context_t* _ctx) {
  struct kk_std_text_parse_optional_fun5539__t* _self = kk_function_alloc_as(struct kk_std_text_parse_optional_fun5539__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_optional_fun5539, kk_context());
  _self->kkloc_default = kkloc_default;
  _self->p = p;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse_optional_fun5539(kk_function_t _fself, kk_box_t _b_3774, kk_context_t* _ctx) {
  struct kk_std_text_parse_optional_fun5539__t* _self = kk_function_as(struct kk_std_text_parse_optional_fun5539__t*, _fself);
  kk_box_t kkloc_default = _self->kkloc_default; /* 986 */
  kk_function_t p = _self->p; /* std/text/parse/parser<987,986> */
  kk_drop_match(_self, {kk_box_dup(kkloc_default);kk_function_dup(p);}, {}, _ctx)
  bool _match_5099 = kk_bool_unbox(_b_3774); /*bool*/;
  if (_match_5099) {
    kk_box_drop(kkloc_default, _ctx);
    return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p, (p, _ctx));
  }
  {
    kk_function_drop(p, _ctx);
    return kkloc_default;
  }
}

kk_box_t kk_std_text_parse_optional(kk_box_t kkloc_default, kk_function_t p, kk_context_t* _ctx) { /* forall<a,e> (default : a, p : parser<e,a>) -> <parse|e> a */ 
  kk_ssize_t i_2870;
  kk_std_core_hnd__htag _x5532 = kk_std_core_hnd__htag_dup(kk_std_text_parse__tag_parse); /*std/core/hnd/htag<std/text/parse/.hnd-parse>*/
  i_2870 = kk_std_core_hnd__evv_index(_x5532, _ctx); /*std/core/hnd/ev-index*/
  kk_evv_t w = kk_evv_swap_create1(i_2870,kk_context()); /*std/core/hnd/evv<<std/text/parse/parse|987>>*/;
  kk_std_core_hnd__ev ev_2872;
  kk_ssize_t _x5533 = (KK_IZ(0)); /*ssize_t*/
  ev_2872 = kk_evv_at(_x5533,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
  bool y;
  kk_box_t _x5534;
  {
    struct kk_std_core_hnd_Ev* _con5535 = kk_std_core_hnd__as_Ev(ev_2872);
    kk_std_core_hnd__marker m0 = _con5535->marker;
    kk_box_t _box_x3753 = _con5535->hnd;
    kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x3753, NULL);
    kk_std_text_parse__hnd_parse_dup(h);
    kk_std_core_hnd__clause0 _match_5101;
    kk_std_core_hnd__clause0 _brw_5102 = kk_std_text_parse__select_pick(h, _ctx); /*std/core/hnd/clause0<bool,std/text/parse/.hnd-parse,412,413>*/;
    kk_std_text_parse__hnd_parse_drop(h, _ctx);
    _match_5101 = _brw_5102; /*std/core/hnd/clause0<bool,std/text/parse/.hnd-parse,412,413>*/
    {
      kk_function_t _fun_unbox_x3756 = _match_5101.clause;
      _x5534 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x3756, (_fun_unbox_x3756, m0, ev_2872, _ctx)); /*37*/
    }
  }
  y = kk_bool_unbox(_x5534); /*bool*/
  kk_unit_t __ = kk_Unit;
  kk_evv_set(w,kk_context());
  bool x_2867;
  if (kk_yielding(kk_context())) {
    kk_box_t _x5537 = kk_std_core_hnd_yield_cont(kk_std_text_parse_new_optional_fun5538(i_2870, _ctx), _ctx); /*3949*/
    x_2867 = kk_bool_unbox(_x5537); /*bool*/
  }
  else {
    x_2867 = y; /*bool*/
  }
  if (kk_yielding(kk_context())) {
    return kk_std_core_hnd_yield_extend(kk_std_text_parse_new_optional_fun5539(kkloc_default, p, _ctx), _ctx);
  }
  if (x_2867) {
    kk_box_drop(kkloc_default, _ctx);
    return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p, (p, _ctx));
  }
  {
    kk_function_drop(p, _ctx);
    return kkloc_default;
  }
}
 
// lifted local: digits0, .spec.2502
// specialized: std/text/parse/next-while0, on parameters pred, using:
// pred = std/core/is-digit

kk_std_core_types__tuple2_ kk_std_text_parse__lift2510_digits0(kk_std_core__sslice slice0, kk_std_core__list acc, kk_context_t* _ctx) { /* (slice0 : sslice, acc : list<char>) -> (list<char>, sslice) */ 
  kk__tailcall: ;
  kk_std_core_types__maybe _match_5097;
  kk_std_core__sslice _x5540 = kk_std_core__sslice_dup(slice0); /*sslice*/
  _match_5097 = kk_std_core_next(_x5540, _ctx); /*maybe<(char, sslice)>*/
  if (kk_std_core_types__is_Just(_match_5097)) {
    kk_box_t _box_x3778 = _match_5097._cons.Just.value;
    kk_std_core_types__tuple2_ _pat00 = kk_std_core_types__tuple2__unbox(_box_x3778, NULL);
    if (kk_std_core_types__is_dash__lp__comma__rp_(_pat00)) {
      kk_box_t _box_x3779 = _pat00.fst;
      kk_box_t _box_x3780 = _pat00.snd;
      kk_char_t c = kk_char_unbox(_box_x3779, NULL);
      kk_std_core__sslice rest0 = kk_std_core__sslice_unbox(_box_x3780, NULL);
      if (kk_std_core_is_digit(c, _ctx)) {
        kk_std_core__sslice_drop(slice0, _ctx);
        kk_std_core__sslice_dup(rest0);
        kk_std_core_types__maybe_drop(_match_5097, _ctx);
        { // tailcall
          kk_std_core__list _x5544 = kk_std_core__new_Cons(kk_reuse_null, kk_char_box(c, _ctx), acc, _ctx); /*list<61>*/
          slice0 = rest0;
          acc = _x5544;
          goto kk__tailcall;
        }
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_5097, _ctx);
    kk_std_core__list _b_3787_3783 = kk_std_core__lift17288_reverse(kk_std_core__new_Nil(_ctx), acc, _ctx); /*list<char>*/;
    return kk_std_core_types__new_dash__lp__comma__rp_(kk_std_core__list_box(_b_3787_3783, _ctx), kk_std_core__sslice_box(slice0, _ctx), _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift2684_digits0_fun5554__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift2684_digits0_fun5554(kk_function_t _fself, kk_box_t _b_3799, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift2684_digits0_fun5554(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift2684_digits0_fun5554, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse__mlift2684_digits0_fun5554(kk_function_t _fself, kk_box_t _b_3799, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x5555;
  kk_std_core__list _x5556 = kk_std_core__list_unbox(_b_3799, _ctx); /*list<char>*/
  _x5555 = kk_std_core_string_2(_x5556, _ctx); /*string*/
  return kk_string_box(_x5555);
}

kk_string_t kk_std_text_parse__mlift2684_digits0(kk_std_core_types__maybe _y_2571, kk_context_t* _ctx) { /* (maybe<list<char>>) -> parse string */ 
  kk_std_core__list x_2877;
  if (kk_std_core_types__is_Nothing(_y_2571)) {
    kk_std_core_hnd__ev ev_2879;
    kk_ssize_t _x5545 = (KK_IZ(0)); /*ssize_t*/
    ev_2879 = kk_evv_at(_x5545,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_box_t _x5546;
    {
      struct kk_std_core_hnd_Ev* _con5547 = kk_std_core_hnd__as_Ev(ev_2879);
      kk_std_core_hnd__marker m0 = _con5547->marker;
      kk_box_t _box_x3789 = _con5547->hnd;
      kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x3789, NULL);
      kk_std_text_parse__hnd_parse_dup(h);
      kk_std_core_hnd__clause1 _match_5095;
      kk_std_core_hnd__clause1 _brw_5096 = kk_std_text_parse__select_fail(h, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
      kk_std_text_parse__hnd_parse_drop(h, _ctx);
      _match_5095 = _brw_5096; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
      {
        kk_function_t _fun_unbox_x3793 = _match_5095.clause;
        kk_box_t _x5549;
        kk_string_t _x5550;
        kk_define_string_literal(, _s5551, 5, "digit")
        _x5550 = kk_string_dup(_s5551); /*string*/
        _x5549 = kk_string_box(_x5550); /*51*/
        _x5546 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x3793, (_fun_unbox_x3793, m0, ev_2879, _x5549, _ctx)); /*52*/
      }
    }
    x_2877 = kk_std_core__list_unbox(_x5546, _ctx); /*list<char>*/
  }
  else {
    kk_box_t _box_x3797 = _y_2571._cons.Just.value;
    kk_std_core__list x1 = kk_std_core__list_unbox(_box_x3797, NULL);
    x_2877 = x1; /*list<char>*/
  }
  if (kk_yielding(kk_context())) {
    kk_std_core__list_drop(x_2877, _ctx);
    kk_box_t _x5553 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift2684_digits0_fun5554(_ctx), _ctx); /*3926*/
    return kk_string_unbox(_x5553);
  }
  {
    return kk_std_core_string_2(x_2877, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift2685_digits0_fun5561__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift2685_digits0_fun5561(kk_function_t _fself, kk_box_t _b_3814, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift2685_digits0_fun5561(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift2685_digits0_fun5561, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse__mlift2685_digits0_fun5561(kk_function_t _fself, kk_box_t _b_3814, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x5562;
  kk_std_core_types__tuple2_ _match_5092;
  kk_std_core__sslice _x5563 = kk_std_core__sslice_unbox(_b_3814, _ctx); /*sslice*/
  _match_5092 = kk_std_text_parse__lift2510_digits0(_x5563, kk_std_core__new_Nil(_ctx), _ctx); /*(list<char>, sslice)*/
  {
    kk_box_t _box_x3815 = _match_5092.fst;
    kk_box_t _box_x3816 = _match_5092.snd;
    kk_std_core__list _pat010 = kk_std_core__list_unbox(_box_x3815, NULL);
    kk_std_core__sslice _pat100 = kk_std_core__sslice_unbox(_box_x3816, NULL);
    if (kk_std_core__is_Nil(_pat010)) {
      kk_std_core_types__tuple2__drop(_match_5092, _ctx);
      _x5562 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/
      goto _match5564;
    }
  }
  {
    kk_box_t _box_x3817 = _match_5092.fst;
    kk_box_t _box_x3818 = _match_5092.snd;
    kk_std_core__list xs = kk_std_core__list_unbox(_box_x3817, NULL);
    kk_std_core__sslice rest00 = kk_std_core__sslice_unbox(_box_x3818, NULL);
    kk_std_core__sslice_dup(rest00);
    kk_std_core__list_dup(xs);
    kk_std_core_types__tuple2__drop(_match_5092, _ctx);
    kk_box_t _x5569;
    kk_std_core_types__tuple2_ _x5570 = kk_std_core_types__new_dash__lp__comma__rp_(kk_std_core__list_box(xs, _ctx), kk_std_core__sslice_box(rest00, _ctx), _ctx); /*(6, 7)*/
    _x5569 = kk_std_core_types__tuple2__box(_x5570, _ctx); /*107*/
    _x5562 = kk_std_core_types__new_Just(_x5569, _ctx); /*forall<a> maybe<a>*/
  }
  _match5564: ;
  return kk_std_core_types__maybe_box(_x5562, _ctx);
}


// lift anonymous function
struct kk_std_text_parse__mlift2685_digits0_fun5572__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift2685_digits0_fun5572(kk_function_t _fself, kk_box_t _b_3827, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift2685_digits0_fun5572(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift2685_digits0_fun5572, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse__mlift2685_digits0_fun5572(kk_function_t _fself, kk_box_t _b_3827, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x5573;
  kk_std_core_types__maybe _x5574 = kk_std_core_types__maybe_unbox(_b_3827, _ctx); /*maybe<list<char>>*/
  _x5573 = kk_std_text_parse__mlift2684_digits0(_x5574, _ctx); /*string*/
  return kk_string_box(_x5573);
}

kk_string_t kk_std_text_parse__mlift2685_digits0(bool _y_2570, kk_context_t* _ctx) { /* (bool) -> parse string */ 
  if (_y_2570) {
    kk_std_core_hnd__ev ev_2884;
    kk_ssize_t _x5557 = (KK_IZ(0)); /*ssize_t*/
    ev_2884 = kk_evv_at(_x5557,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_std_core_types__maybe x_2882;
    kk_box_t _x5558;
    {
      struct kk_std_core_hnd_Ev* _con5559 = kk_std_core_hnd__as_Ev(ev_2884);
      kk_std_core_hnd__marker m0 = _con5559->marker;
      kk_box_t _box_x3801 = _con5559->hnd;
      kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x3801, NULL);
      kk_std_text_parse__hnd_parse_dup(h);
      kk_std_core_hnd__clause1 _match_5091;
      kk_std_core_hnd__clause1 _brw_5093 = kk_std_text_parse__select_satisfy(h, _ctx); /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/;
      kk_std_text_parse__hnd_parse_drop(h, _ctx);
      _match_5091 = _brw_5093; /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/
      {
        kk_function_t _fun_unbox_x3808 = _match_5091.clause;
        _x5558 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x3808, (_fun_unbox_x3808, m0, ev_2884, kk_function_box(kk_std_text_parse__new_mlift2685_digits0_fun5561(_ctx)), _ctx)); /*52*/
      }
    }
    x_2882 = kk_std_core_types__maybe_unbox(_x5558, _ctx); /*maybe<list<char>>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__maybe_drop(x_2882, _ctx);
      kk_box_t _x5571 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift2685_digits0_fun5572(_ctx), _ctx); /*3926*/
      return kk_string_unbox(_x5571);
    }
    {
      return kk_std_text_parse__mlift2684_digits0(x_2882, _ctx);
    }
  }
  {
    kk_define_string_literal(, _s5575, 1, "0")
    return kk_string_dup(_s5575);
  }
}


// lift anonymous function
struct kk_std_text_parse_digits0_fun5581__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_digits0_fun5581(kk_function_t _fself, kk_box_t _b_3836, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digits0_fun5581(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digits0_fun5581, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_digits0_fun5581(kk_function_t _fself, kk_box_t _b_3836, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x5582;
  bool _x5583 = kk_bool_unbox(_b_3836); /*bool*/
  _x5582 = kk_std_text_parse__mlift2685_digits0(_x5583, _ctx); /*string*/
  return kk_string_box(_x5582);
}


// lift anonymous function
struct kk_std_text_parse_digits0_fun5588__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_digits0_fun5588(kk_function_t _fself, kk_box_t _b_3850, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digits0_fun5588(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digits0_fun5588, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_digits0_fun5588(kk_function_t _fself, kk_box_t _b_3850, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x5589;
  kk_std_core_types__tuple2_ _match_5086;
  kk_std_core__sslice _x5590 = kk_std_core__sslice_unbox(_b_3850, _ctx); /*sslice*/
  _match_5086 = kk_std_text_parse__lift2510_digits0(_x5590, kk_std_core__new_Nil(_ctx), _ctx); /*(list<char>, sslice)*/
  {
    kk_box_t _box_x3851 = _match_5086.fst;
    kk_box_t _box_x3852 = _match_5086.snd;
    kk_std_core__list _pat010 = kk_std_core__list_unbox(_box_x3851, NULL);
    kk_std_core__sslice _pat100 = kk_std_core__sslice_unbox(_box_x3852, NULL);
    if (kk_std_core__is_Nil(_pat010)) {
      kk_std_core_types__tuple2__drop(_match_5086, _ctx);
      _x5589 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/
      goto _match5591;
    }
  }
  {
    kk_box_t _box_x3853 = _match_5086.fst;
    kk_box_t _box_x3854 = _match_5086.snd;
    kk_std_core__list xs = kk_std_core__list_unbox(_box_x3853, NULL);
    kk_std_core__sslice rest00 = kk_std_core__sslice_unbox(_box_x3854, NULL);
    kk_std_core__sslice_dup(rest00);
    kk_std_core__list_dup(xs);
    kk_std_core_types__tuple2__drop(_match_5086, _ctx);
    kk_box_t _x5596;
    kk_std_core_types__tuple2_ _x5597 = kk_std_core_types__new_dash__lp__comma__rp_(kk_std_core__list_box(xs, _ctx), kk_std_core__sslice_box(rest00, _ctx), _ctx); /*(6, 7)*/
    _x5596 = kk_std_core_types__tuple2__box(_x5597, _ctx); /*107*/
    _x5589 = kk_std_core_types__new_Just(_x5596, _ctx); /*forall<a> maybe<a>*/
  }
  _match5591: ;
  return kk_std_core_types__maybe_box(_x5589, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_digits0_fun5599__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_digits0_fun5599(kk_function_t _fself, kk_box_t _b_3863, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digits0_fun5599(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digits0_fun5599, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_digits0_fun5599(kk_function_t _fself, kk_box_t _b_3863, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x5600;
  kk_std_core_types__maybe _x5601 = kk_std_core_types__maybe_unbox(_b_3863, _ctx); /*maybe<list<char>>*/
  _x5600 = kk_std_text_parse__mlift2684_digits0(_x5601, _ctx); /*string*/
  return kk_string_box(_x5600);
}


// lift anonymous function
struct kk_std_text_parse_digits0_fun5611__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_digits0_fun5611(kk_function_t _fself, kk_box_t _b_3874, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digits0_fun5611(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digits0_fun5611, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_digits0_fun5611(kk_function_t _fself, kk_box_t _b_3874, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x5612;
  kk_std_core__list _x5613 = kk_std_core__list_unbox(_b_3874, _ctx); /*list<char>*/
  _x5612 = kk_std_core_string_2(_x5613, _ctx); /*string*/
  return kk_string_box(_x5612);
}

kk_string_t kk_std_text_parse_digits0(kk_context_t* _ctx) { /* () -> parse string */ 
  kk_std_core_hnd__ev ev_2890;
  kk_ssize_t _x5576 = (KK_IZ(0)); /*ssize_t*/
  ev_2890 = kk_evv_at(_x5576,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
  bool x_2887;
  kk_box_t _x5577;
  {
    struct kk_std_core_hnd_Ev* _con5578 = kk_std_core_hnd__as_Ev(ev_2890);
    kk_std_core_hnd__marker m0 = _con5578->marker;
    kk_box_t _box_x3829 = _con5578->hnd;
    kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x3829, NULL);
    kk_std_text_parse__hnd_parse_dup(h);
    kk_std_core_hnd__clause0 _match_5088;
    kk_std_core_hnd__clause0 _brw_5089 = kk_std_text_parse__select_pick(h, _ctx); /*std/core/hnd/clause0<bool,std/text/parse/.hnd-parse,412,413>*/;
    kk_std_text_parse__hnd_parse_drop(h, _ctx);
    _match_5088 = _brw_5089; /*std/core/hnd/clause0<bool,std/text/parse/.hnd-parse,412,413>*/
    {
      kk_function_t _fun_unbox_x3832 = _match_5088.clause;
      _x5577 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x3832, (_fun_unbox_x3832, m0, ev_2890, _ctx)); /*37*/
    }
  }
  x_2887 = kk_bool_unbox(_x5577); /*bool*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x5580 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_digits0_fun5581(_ctx), _ctx); /*3926*/
    return kk_string_unbox(_x5580);
  }
  if (x_2887) {
    kk_std_core_hnd__ev ev0_2895;
    kk_ssize_t _x5584 = (KK_IZ(0)); /*ssize_t*/
    ev0_2895 = kk_evv_at(_x5584,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_std_core_types__maybe x0_2892;
    kk_box_t _x5585;
    {
      struct kk_std_core_hnd_Ev* _con5586 = kk_std_core_hnd__as_Ev(ev0_2895);
      kk_std_core_hnd__marker m00 = _con5586->marker;
      kk_box_t _box_x3837 = _con5586->hnd;
      kk_std_text_parse__hnd_parse h0 = kk_std_text_parse__hnd_parse_unbox(_box_x3837, NULL);
      kk_std_text_parse__hnd_parse_dup(h0);
      kk_std_core_hnd__clause1 _match_5085;
      kk_std_core_hnd__clause1 _brw_5087 = kk_std_text_parse__select_satisfy(h0, _ctx); /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/;
      kk_std_text_parse__hnd_parse_drop(h0, _ctx);
      _match_5085 = _brw_5087; /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/
      {
        kk_function_t _fun_unbox_x3844 = _match_5085.clause;
        _x5585 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x3844, (_fun_unbox_x3844, m00, ev0_2895, kk_function_box(kk_std_text_parse_new_digits0_fun5588(_ctx)), _ctx)); /*52*/
      }
    }
    x0_2892 = kk_std_core_types__maybe_unbox(_x5585, _ctx); /*maybe<list<char>>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__maybe_drop(x0_2892, _ctx);
      kk_box_t _x5598 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_digits0_fun5599(_ctx), _ctx); /*3926*/
      return kk_string_unbox(_x5598);
    }
    {
      kk_std_core__list x2_2898;
      if (kk_std_core_types__is_Nothing(x0_2892)) {
        kk_std_core_hnd__ev ev1_2900;
        kk_ssize_t _x5602 = (KK_IZ(0)); /*ssize_t*/
        ev1_2900 = kk_evv_at(_x5602,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
        kk_box_t _x5603;
        {
          struct kk_std_core_hnd_Ev* _con5604 = kk_std_core_hnd__as_Ev(ev1_2900);
          kk_std_core_hnd__marker m01 = _con5604->marker;
          kk_box_t _box_x3864 = _con5604->hnd;
          kk_std_text_parse__hnd_parse h1 = kk_std_text_parse__hnd_parse_unbox(_box_x3864, NULL);
          kk_std_text_parse__hnd_parse_dup(h1);
          kk_std_core_hnd__clause1 _match_5083;
          kk_std_core_hnd__clause1 _brw_5084 = kk_std_text_parse__select_fail(h1, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
          kk_std_text_parse__hnd_parse_drop(h1, _ctx);
          _match_5083 = _brw_5084; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
          {
            kk_function_t _fun_unbox_x3868 = _match_5083.clause;
            kk_box_t _x5606;
            kk_string_t _x5607;
            kk_define_string_literal(, _s5608, 5, "digit")
            _x5607 = kk_string_dup(_s5608); /*string*/
            _x5606 = kk_string_box(_x5607); /*51*/
            _x5603 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x3868, (_fun_unbox_x3868, m01, ev1_2900, _x5606, _ctx)); /*52*/
          }
        }
        x2_2898 = kk_std_core__list_unbox(_x5603, _ctx); /*list<char>*/
      }
      else {
        kk_box_t _box_x3872 = x0_2892._cons.Just.value;
        kk_std_core__list x4 = kk_std_core__list_unbox(_box_x3872, NULL);
        x2_2898 = x4; /*list<char>*/
      }
      if (kk_yielding(kk_context())) {
        kk_std_core__list_drop(x2_2898, _ctx);
        kk_box_t _x5610 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_digits0_fun5611(_ctx), _ctx); /*3926*/
        return kk_string_unbox(_x5610);
      }
      {
        return kk_std_core_string_2(x2_2898, _ctx);
      }
    }
  }
  {
    kk_define_string_literal(, _s5614, 1, "0")
    return kk_string_dup(_s5614);
  }
}
 
// monadic lift

kk_unit_t kk_std_text_parse__mlift2686_eof(kk_std_core_types__maybe _y_2575, kk_context_t* _ctx) { /* (maybe<()>) -> parse () */ 
  if (kk_std_core_types__is_Nothing(_y_2575)) {
    kk_std_core_hnd__ev ev_2903;
    kk_ssize_t _x5615 = (KK_IZ(0)); /*ssize_t*/
    ev_2903 = kk_evv_at(_x5615,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_box_t _x5616;
    {
      struct kk_std_core_hnd_Ev* _con5617 = kk_std_core_hnd__as_Ev(ev_2903);
      kk_std_core_hnd__marker m0 = _con5617->marker;
      kk_box_t _box_x3878 = _con5617->hnd;
      kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x3878, NULL);
      kk_std_text_parse__hnd_parse_dup(h);
      kk_std_core_hnd__clause1 _match_5078;
      kk_std_core_hnd__clause1 _brw_5079 = kk_std_text_parse__select_fail(h, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
      kk_std_text_parse__hnd_parse_drop(h, _ctx);
      _match_5078 = _brw_5079; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
      {
        kk_function_t _fun_unbox_x3882 = _match_5078.clause;
        kk_box_t _x5619;
        kk_string_t _x5620;
        kk_define_string_literal(, _s5621, 22, "expecting end-of-input")
        _x5620 = kk_string_dup(_s5621); /*string*/
        _x5619 = kk_string_box(_x5620); /*51*/
        _x5616 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x3882, (_fun_unbox_x3882, m0, ev_2903, _x5619, _ctx)); /*52*/
      }
    }
    kk_unit_unbox(_x5616); return kk_Unit;
  }
  {
    kk_box_t _box_x3886 = _y_2575._cons.Just.value;
    kk_unit_t _pat30 = kk_unit_unbox(_box_x3886);
    kk_std_core_types__maybe_drop(_y_2575, _ctx);
    kk_Unit; return kk_Unit;
  }
}


// lift anonymous function
struct kk_std_text_parse_eof_fun5627__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_eof_fun5627(kk_function_t _fself, kk_box_t _b_3900, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_eof_fun5627(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_eof_fun5627, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_eof_fun5627(kk_function_t _fself, kk_box_t _b_3900, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool b_17030;
  kk_ssize_t _x5628;
  kk_std_core__sslice _match_5076;
  kk_box_t _x5629 = kk_box_dup(_b_3900); /*3898*/
  _match_5076 = kk_std_core__sslice_unbox(_x5629, _ctx); /*sslice*/
  {
    kk_ssize_t _x = _match_5076.len;
    kk_std_core__sslice_drop(_match_5076, _ctx);
    _x5628 = _x; /*ssize_t*/
  }
  b_17030 = (_x5628 > 0); /*bool*/
  kk_std_core_types__maybe _x5630;
  if (b_17030) {
    kk_box_drop(_b_3900, _ctx);
    _x5630 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/
  }
  else {
    kk_box_t _x5631;
    kk_std_core_types__tuple2_ _x5632 = kk_std_core_types__new_dash__lp__comma__rp_(kk_unit_box(kk_Unit), _b_3900, _ctx); /*(6, 7)*/
    _x5631 = kk_std_core_types__tuple2__box(_x5632, _ctx); /*107*/
    _x5630 = kk_std_core_types__new_Just(_x5631, _ctx); /*forall<a> maybe<a>*/
  }
  return kk_std_core_types__maybe_box(_x5630, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_eof_fun5634__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_eof_fun5634(kk_function_t _fself, kk_box_t _b_3909, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_eof_fun5634(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_eof_fun5634, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_eof_fun5634(kk_function_t _fself, kk_box_t _b_3909, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x5635 = kk_Unit;
  kk_std_core_types__maybe _x5636 = kk_std_core_types__maybe_unbox(_b_3909, _ctx); /*maybe<()>*/
  kk_std_text_parse__mlift2686_eof(_x5636, _ctx);
  return kk_unit_box(_x5635);
}

kk_unit_t kk_std_text_parse_eof(kk_context_t* _ctx) { /* () -> parse () */ 
  kk_std_core_hnd__ev ev_2909;
  kk_ssize_t _x5623 = (KK_IZ(0)); /*ssize_t*/
  ev_2909 = kk_evv_at(_x5623,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
  kk_std_core_types__maybe x_2906;
  kk_box_t _x5624;
  {
    struct kk_std_core_hnd_Ev* _con5625 = kk_std_core_hnd__as_Ev(ev_2909);
    kk_std_core_hnd__marker m0 = _con5625->marker;
    kk_box_t _box_x3887 = _con5625->hnd;
    kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x3887, NULL);
    kk_std_text_parse__hnd_parse_dup(h);
    kk_std_core_hnd__clause1 _match_5075;
    kk_std_core_hnd__clause1 _brw_5077 = kk_std_text_parse__select_satisfy(h, _ctx); /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/;
    kk_std_text_parse__hnd_parse_drop(h, _ctx);
    _match_5075 = _brw_5077; /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/
    {
      kk_function_t _fun_unbox_x3894 = _match_5075.clause;
      _x5624 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x3894, (_fun_unbox_x3894, m0, ev_2909, kk_function_box(kk_std_text_parse_new_eof_fun5627(_ctx)), _ctx)); /*52*/
    }
  }
  x_2906 = kk_std_core_types__maybe_unbox(_x5624, _ctx); /*maybe<()>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_2906, _ctx);
    kk_box_t _x5633 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_eof_fun5634(_ctx), _ctx); /*3926*/
    kk_unit_unbox(_x5633); return kk_Unit;
  }
  if (kk_std_core_types__is_Nothing(x_2906)) {
    kk_std_core_hnd__ev ev0_2912;
    kk_ssize_t _x5637 = (KK_IZ(0)); /*ssize_t*/
    ev0_2912 = kk_evv_at(_x5637,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_box_t _x5638;
    {
      struct kk_std_core_hnd_Ev* _con5639 = kk_std_core_hnd__as_Ev(ev0_2912);
      kk_std_core_hnd__marker m00 = _con5639->marker;
      kk_box_t _box_x3910 = _con5639->hnd;
      kk_std_text_parse__hnd_parse h0 = kk_std_text_parse__hnd_parse_unbox(_box_x3910, NULL);
      kk_std_text_parse__hnd_parse_dup(h0);
      kk_std_core_hnd__clause1 _match_5073;
      kk_std_core_hnd__clause1 _brw_5074 = kk_std_text_parse__select_fail(h0, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
      kk_std_text_parse__hnd_parse_drop(h0, _ctx);
      _match_5073 = _brw_5074; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
      {
        kk_function_t _fun_unbox_x3914 = _match_5073.clause;
        kk_box_t _x5641;
        kk_string_t _x5642;
        kk_define_string_literal(, _s5643, 22, "expecting end-of-input")
        _x5642 = kk_string_dup(_s5643); /*string*/
        _x5641 = kk_string_box(_x5642); /*51*/
        _x5638 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x3914, (_fun_unbox_x3914, m00, ev0_2912, _x5641, _ctx)); /*52*/
      }
    }
    kk_unit_unbox(_x5638); return kk_Unit;
  }
  {
    kk_box_t _box_x3918 = x_2906._cons.Just.value;
    kk_unit_t _pat31 = kk_unit_unbox(_box_x3918);
    kk_std_core_types__maybe_drop(x_2906, _ctx);
    kk_Unit; return kk_Unit;
  }
}
 
// lifted local: hex-digits, .spec.2503
// specialized: std/text/parse/next-while0, on parameters pred, using:
// pred = std/core/is-hex-digit

kk_std_core_types__tuple2_ kk_std_text_parse__lift2511_hex_digits(kk_std_core__sslice slice0, kk_std_core__list acc, kk_context_t* _ctx) { /* (slice0 : sslice, acc : list<char>) -> (list<char>, sslice) */ 
  kk__tailcall: ;
  kk_std_core_types__maybe _match_5071;
  kk_std_core__sslice _x5645 = kk_std_core__sslice_dup(slice0); /*sslice*/
  _match_5071 = kk_std_core_next(_x5645, _ctx); /*maybe<(char, sslice)>*/
  if (kk_std_core_types__is_Just(_match_5071)) {
    kk_box_t _box_x3920 = _match_5071._cons.Just.value;
    kk_std_core_types__tuple2_ _pat0 = kk_std_core_types__tuple2__unbox(_box_x3920, NULL);
    if (kk_std_core_types__is_dash__lp__comma__rp_(_pat0)) {
      kk_box_t _box_x3921 = _pat0.fst;
      kk_box_t _box_x3922 = _pat0.snd;
      kk_char_t c = kk_char_unbox(_box_x3921, NULL);
      kk_std_core__sslice rest0 = kk_std_core__sslice_unbox(_box_x3922, NULL);
      if (kk_std_core_is_hex_digit(c, _ctx)) {
        kk_std_core__sslice_drop(slice0, _ctx);
        kk_std_core__sslice_dup(rest0);
        kk_std_core_types__maybe_drop(_match_5071, _ctx);
        { // tailcall
          kk_std_core__list _x5649 = kk_std_core__new_Cons(kk_reuse_null, kk_char_box(c, _ctx), acc, _ctx); /*list<61>*/
          slice0 = rest0;
          acc = _x5649;
          goto kk__tailcall;
        }
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_5071, _ctx);
    kk_std_core__list _b_3929_3925 = kk_std_core__lift17288_reverse(kk_std_core__new_Nil(_ctx), acc, _ctx); /*list<char>*/;
    return kk_std_core_types__new_dash__lp__comma__rp_(kk_std_core__list_box(_b_3929_3925, _ctx), kk_std_core__sslice_box(slice0, _ctx), _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift2687_hex_digits_fun5659__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift2687_hex_digits_fun5659(kk_function_t _fself, kk_box_t _b_3941, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift2687_hex_digits_fun5659(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift2687_hex_digits_fun5659, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse__mlift2687_hex_digits_fun5659(kk_function_t _fself, kk_box_t _b_3941, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x5660;
  kk_std_core__list _x5661 = kk_std_core__list_unbox(_b_3941, _ctx); /*list<char>*/
  _x5660 = kk_std_core_string_2(_x5661, _ctx); /*string*/
  return kk_string_box(_x5660);
}

kk_string_t kk_std_text_parse__mlift2687_hex_digits(kk_std_core_types__maybe _y_2578, kk_context_t* _ctx) { /* (maybe<list<char>>) -> parse string */ 
  kk_std_core__list x_2915;
  if (kk_std_core_types__is_Nothing(_y_2578)) {
    kk_std_core_hnd__ev ev_2917;
    kk_ssize_t _x5650 = (KK_IZ(0)); /*ssize_t*/
    ev_2917 = kk_evv_at(_x5650,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_box_t _x5651;
    {
      struct kk_std_core_hnd_Ev* _con5652 = kk_std_core_hnd__as_Ev(ev_2917);
      kk_std_core_hnd__marker m0 = _con5652->marker;
      kk_box_t _box_x3931 = _con5652->hnd;
      kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x3931, NULL);
      kk_std_text_parse__hnd_parse_dup(h);
      kk_std_core_hnd__clause1 _match_5069;
      kk_std_core_hnd__clause1 _brw_5070 = kk_std_text_parse__select_fail(h, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
      kk_std_text_parse__hnd_parse_drop(h, _ctx);
      _match_5069 = _brw_5070; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
      {
        kk_function_t _fun_unbox_x3935 = _match_5069.clause;
        kk_box_t _x5654;
        kk_string_t _x5655;
        kk_define_string_literal(, _s5656, 5, "digit")
        _x5655 = kk_string_dup(_s5656); /*string*/
        _x5654 = kk_string_box(_x5655); /*51*/
        _x5651 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x3935, (_fun_unbox_x3935, m0, ev_2917, _x5654, _ctx)); /*52*/
      }
    }
    x_2915 = kk_std_core__list_unbox(_x5651, _ctx); /*list<char>*/
  }
  else {
    kk_box_t _box_x3939 = _y_2578._cons.Just.value;
    kk_std_core__list x1 = kk_std_core__list_unbox(_box_x3939, NULL);
    x_2915 = x1; /*list<char>*/
  }
  if (kk_yielding(kk_context())) {
    kk_std_core__list_drop(x_2915, _ctx);
    kk_box_t _x5658 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift2687_hex_digits_fun5659(_ctx), _ctx); /*3926*/
    return kk_string_unbox(_x5658);
  }
  {
    return kk_std_core_string_2(x_2915, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_hex_digits_fun5666__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_hex_digits_fun5666(kk_function_t _fself, kk_box_t _b_3956, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_hex_digits_fun5666(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_hex_digits_fun5666, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_hex_digits_fun5666(kk_function_t _fself, kk_box_t _b_3956, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x5667;
  kk_std_core_types__tuple2_ _match_5066;
  kk_std_core__sslice _x5668 = kk_std_core__sslice_unbox(_b_3956, _ctx); /*sslice*/
  _match_5066 = kk_std_text_parse__lift2511_hex_digits(_x5668, kk_std_core__new_Nil(_ctx), _ctx); /*(list<char>, sslice)*/
  {
    kk_box_t _box_x3957 = _match_5066.fst;
    kk_box_t _box_x3958 = _match_5066.snd;
    kk_std_core__list _pat000 = kk_std_core__list_unbox(_box_x3957, NULL);
    kk_std_core__sslice _pat1000 = kk_std_core__sslice_unbox(_box_x3958, NULL);
    if (kk_std_core__is_Nil(_pat000)) {
      kk_std_core_types__tuple2__drop(_match_5066, _ctx);
      _x5667 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/
      goto _match5669;
    }
  }
  {
    kk_box_t _box_x3959 = _match_5066.fst;
    kk_box_t _box_x3960 = _match_5066.snd;
    kk_std_core__list xs = kk_std_core__list_unbox(_box_x3959, NULL);
    kk_std_core__sslice rest00 = kk_std_core__sslice_unbox(_box_x3960, NULL);
    kk_std_core__sslice_dup(rest00);
    kk_std_core__list_dup(xs);
    kk_std_core_types__tuple2__drop(_match_5066, _ctx);
    kk_box_t _x5674;
    kk_std_core_types__tuple2_ _x5675 = kk_std_core_types__new_dash__lp__comma__rp_(kk_std_core__list_box(xs, _ctx), kk_std_core__sslice_box(rest00, _ctx), _ctx); /*(6, 7)*/
    _x5674 = kk_std_core_types__tuple2__box(_x5675, _ctx); /*107*/
    _x5667 = kk_std_core_types__new_Just(_x5674, _ctx); /*forall<a> maybe<a>*/
  }
  _match5669: ;
  return kk_std_core_types__maybe_box(_x5667, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_hex_digits_fun5677__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_hex_digits_fun5677(kk_function_t _fself, kk_box_t _b_3969, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_hex_digits_fun5677(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_hex_digits_fun5677, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_hex_digits_fun5677(kk_function_t _fself, kk_box_t _b_3969, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x5678;
  kk_std_core_types__maybe _x5679 = kk_std_core_types__maybe_unbox(_b_3969, _ctx); /*maybe<list<char>>*/
  _x5678 = kk_std_text_parse__mlift2687_hex_digits(_x5679, _ctx); /*string*/
  return kk_string_box(_x5678);
}


// lift anonymous function
struct kk_std_text_parse_hex_digits_fun5689__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_hex_digits_fun5689(kk_function_t _fself, kk_box_t _b_3980, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_hex_digits_fun5689(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_hex_digits_fun5689, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_hex_digits_fun5689(kk_function_t _fself, kk_box_t _b_3980, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x5690;
  kk_std_core__list _x5691 = kk_std_core__list_unbox(_b_3980, _ctx); /*list<char>*/
  _x5690 = kk_std_core_string_2(_x5691, _ctx); /*string*/
  return kk_string_box(_x5690);
}

kk_string_t kk_std_text_parse_hex_digits(kk_context_t* _ctx) { /* () -> parse string */ 
  kk_std_core_hnd__ev ev_2923;
  kk_ssize_t _x5662 = (KK_IZ(0)); /*ssize_t*/
  ev_2923 = kk_evv_at(_x5662,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
  kk_std_core_types__maybe x_2920;
  kk_box_t _x5663;
  {
    struct kk_std_core_hnd_Ev* _con5664 = kk_std_core_hnd__as_Ev(ev_2923);
    kk_std_core_hnd__marker m0 = _con5664->marker;
    kk_box_t _box_x3943 = _con5664->hnd;
    kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x3943, NULL);
    kk_std_text_parse__hnd_parse_dup(h);
    kk_std_core_hnd__clause1 _match_5065;
    kk_std_core_hnd__clause1 _brw_5067 = kk_std_text_parse__select_satisfy(h, _ctx); /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/;
    kk_std_text_parse__hnd_parse_drop(h, _ctx);
    _match_5065 = _brw_5067; /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/
    {
      kk_function_t _fun_unbox_x3950 = _match_5065.clause;
      _x5663 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x3950, (_fun_unbox_x3950, m0, ev_2923, kk_function_box(kk_std_text_parse_new_hex_digits_fun5666(_ctx)), _ctx)); /*52*/
    }
  }
  x_2920 = kk_std_core_types__maybe_unbox(_x5663, _ctx); /*maybe<list<char>>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_2920, _ctx);
    kk_box_t _x5676 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_hex_digits_fun5677(_ctx), _ctx); /*3926*/
    return kk_string_unbox(_x5676);
  }
  {
    kk_std_core__list x1_2926;
    if (kk_std_core_types__is_Nothing(x_2920)) {
      kk_std_core_hnd__ev ev0_2928;
      kk_ssize_t _x5680 = (KK_IZ(0)); /*ssize_t*/
      ev0_2928 = kk_evv_at(_x5680,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
      kk_box_t _x5681;
      {
        struct kk_std_core_hnd_Ev* _con5682 = kk_std_core_hnd__as_Ev(ev0_2928);
        kk_std_core_hnd__marker m00 = _con5682->marker;
        kk_box_t _box_x3970 = _con5682->hnd;
        kk_std_text_parse__hnd_parse h0 = kk_std_text_parse__hnd_parse_unbox(_box_x3970, NULL);
        kk_std_text_parse__hnd_parse_dup(h0);
        kk_std_core_hnd__clause1 _match_5063;
        kk_std_core_hnd__clause1 _brw_5064 = kk_std_text_parse__select_fail(h0, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
        kk_std_text_parse__hnd_parse_drop(h0, _ctx);
        _match_5063 = _brw_5064; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
        {
          kk_function_t _fun_unbox_x3974 = _match_5063.clause;
          kk_box_t _x5684;
          kk_string_t _x5685;
          kk_define_string_literal(, _s5686, 5, "digit")
          _x5685 = kk_string_dup(_s5686); /*string*/
          _x5684 = kk_string_box(_x5685); /*51*/
          _x5681 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x3974, (_fun_unbox_x3974, m00, ev0_2928, _x5684, _ctx)); /*52*/
        }
      }
      x1_2926 = kk_std_core__list_unbox(_x5681, _ctx); /*list<char>*/
    }
    else {
      kk_box_t _box_x3978 = x_2920._cons.Just.value;
      kk_std_core__list x3 = kk_std_core__list_unbox(_box_x3978, NULL);
      x1_2926 = x3; /*list<char>*/
    }
    if (kk_yielding(kk_context())) {
      kk_std_core__list_drop(x1_2926, _ctx);
      kk_box_t _x5688 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_hex_digits_fun5689(_ctx), _ctx); /*3926*/
      return kk_string_unbox(_x5688);
    }
    {
      return kk_std_core_string_2(x1_2926, _ctx);
    }
  }
}
 
// monadic lift

kk_std_core__list kk_std_text_parse__mlift2688_many_acc(kk_std_core__list acc, kk_function_t p, kk_box_t x, kk_context_t* _ctx) { /* forall<a,e> (acc : list<a>, p : parser<e,a>, x : a) -> <parse|e> list<a> */ 
  kk_std_core__list _x5692 = kk_std_core__new_Cons(kk_reuse_null, x, acc, _ctx); /*list<61>*/
  return kk_std_text_parse_many_acc(p, _x5692, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift2689_many_acc_fun5695__t {
  struct kk_function_s _base;
  kk_std_core__list acc0;
  kk_function_t p0;
};
static kk_box_t kk_std_text_parse__mlift2689_many_acc_fun5695(kk_function_t _fself, kk_box_t _b_3984, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift2689_many_acc_fun5695(kk_std_core__list acc0, kk_function_t p0, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift2689_many_acc_fun5695__t* _self = kk_function_alloc_as(struct kk_std_text_parse__mlift2689_many_acc_fun5695__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse__mlift2689_many_acc_fun5695, kk_context());
  _self->acc0 = acc0;
  _self->p0 = p0;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse__mlift2689_many_acc_fun5695(kk_function_t _fself, kk_box_t _b_3984, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift2689_many_acc_fun5695__t* _self = kk_function_as(struct kk_std_text_parse__mlift2689_many_acc_fun5695__t*, _fself);
  kk_std_core__list acc0 = _self->acc0; /* list<1147> */
  kk_function_t p0 = _self->p0; /* std/text/parse/parser<1148,1147> */
  kk_drop_match(_self, {kk_std_core__list_dup(acc0);kk_function_dup(p0);}, {}, _ctx)
  kk_box_t x1_3986 = _b_3984; /*1147*/;
  kk_std_core__list _x5696 = kk_std_text_parse__mlift2688_many_acc(acc0, p0, x1_3986, _ctx); /*list<1147>*/
  return kk_std_core__list_box(_x5696, _ctx);
}

kk_std_core__list kk_std_text_parse__mlift2689_many_acc(kk_std_core__list acc0, kk_function_t p0, bool _y_2582, kk_context_t* _ctx) { /* forall<a,e> (acc : list<a>, p : parser<e,a>, bool) -> <parse|e> list<a> */ 
  if (_y_2582) {
    kk_box_t x0_2931;
    kk_function_t _x5693 = kk_function_dup(p0); /*std/text/parse/parser<1148,1147>*/
    x0_2931 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), _x5693, (_x5693, _ctx)); /*1147*/
    if (kk_yielding(kk_context())) {
      kk_box_drop(x0_2931, _ctx);
      kk_box_t _x5694 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift2689_many_acc_fun5695(acc0, p0, _ctx), _ctx); /*3926*/
      return kk_std_core__list_unbox(_x5694, _ctx);
    }
    {
      return kk_std_text_parse__mlift2688_many_acc(acc0, p0, x0_2931, _ctx);
    }
  }
  {
    kk_function_drop(p0, _ctx);
    return kk_std_core_reverse(acc0, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_many_acc_fun5703__t {
  struct kk_function_s _base;
  kk_ssize_t i_2936;
};
static kk_box_t kk_std_text_parse_many_acc_fun5703(kk_function_t _fself, kk_function_t _b_3998, kk_box_t _b_3999, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_many_acc_fun5703(kk_ssize_t i_2936, kk_context_t* _ctx) {
  struct kk_std_text_parse_many_acc_fun5703__t* _self = kk_function_alloc_as(struct kk_std_text_parse_many_acc_fun5703__t, 1, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_many_acc_fun5703, kk_context());
  _self->i_2936 = i_2936;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse_many_acc_fun5703(kk_function_t _fself, kk_function_t _b_3998, kk_box_t _b_3999, kk_context_t* _ctx) {
  struct kk_std_text_parse_many_acc_fun5703__t* _self = kk_function_as(struct kk_std_text_parse_many_acc_fun5703__t*, _fself);
  kk_ssize_t i_2936 = _self->i_2936; /* std/core/hnd/ev-index */
  kk_drop_match(_self, {;}, {}, _ctx)
  return kk_std_core_hnd_open_at1(i_2936, _b_3998, _b_3999, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_many_acc_fun5705__t {
  struct kk_function_s _base;
  kk_std_core__list acc1;
  kk_function_t p1;
};
static kk_box_t kk_std_text_parse_many_acc_fun5705(kk_function_t _fself, kk_box_t _b_4008, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_many_acc_fun5705(kk_std_core__list acc1, kk_function_t p1, kk_context_t* _ctx) {
  struct kk_std_text_parse_many_acc_fun5705__t* _self = kk_function_alloc_as(struct kk_std_text_parse_many_acc_fun5705__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_many_acc_fun5705, kk_context());
  _self->acc1 = acc1;
  _self->p1 = p1;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse_many_acc_fun5705(kk_function_t _fself, kk_box_t _b_4008, kk_context_t* _ctx) {
  struct kk_std_text_parse_many_acc_fun5705__t* _self = kk_function_as(struct kk_std_text_parse_many_acc_fun5705__t*, _fself);
  kk_std_core__list acc1 = _self->acc1; /* list<1147> */
  kk_function_t p1 = _self->p1; /* std/text/parse/parser<1148,1147> */
  kk_drop_match(_self, {kk_std_core__list_dup(acc1);kk_function_dup(p1);}, {}, _ctx)
  bool _y_4014_25820 = kk_bool_unbox(_b_4008); /*bool*/;
  kk_std_core__list _x5706 = kk_std_text_parse__mlift2689_many_acc(acc1, p1, _y_4014_25820, _ctx); /*list<1147>*/
  return kk_std_core__list_box(_x5706, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_many_acc_fun5709__t {
  struct kk_function_s _base;
  kk_std_core__list acc1;
  kk_function_t p1;
};
static kk_box_t kk_std_text_parse_many_acc_fun5709(kk_function_t _fself, kk_box_t _b_4010, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_many_acc_fun5709(kk_std_core__list acc1, kk_function_t p1, kk_context_t* _ctx) {
  struct kk_std_text_parse_many_acc_fun5709__t* _self = kk_function_alloc_as(struct kk_std_text_parse_many_acc_fun5709__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_many_acc_fun5709, kk_context());
  _self->acc1 = acc1;
  _self->p1 = p1;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse_many_acc_fun5709(kk_function_t _fself, kk_box_t _b_4010, kk_context_t* _ctx) {
  struct kk_std_text_parse_many_acc_fun5709__t* _self = kk_function_as(struct kk_std_text_parse_many_acc_fun5709__t*, _fself);
  kk_std_core__list acc1 = _self->acc1; /* list<1147> */
  kk_function_t p1 = _self->p1; /* std/text/parse/parser<1148,1147> */
  kk_drop_match(_self, {kk_std_core__list_dup(acc1);kk_function_dup(p1);}, {}, _ctx)
  kk_box_t x4_4015 = _b_4010; /*1147*/;
  kk_std_core__list _x5710 = kk_std_text_parse__mlift2688_many_acc(acc1, p1, x4_4015, _ctx); /*list<1147>*/
  return kk_std_core__list_box(_x5710, _ctx);
}

kk_std_core__list kk_std_text_parse_many_acc(kk_function_t p1, kk_std_core__list acc1, kk_context_t* _ctx) { /* forall<a,e> (p : parser<e,a>, acc : list<a>) -> <parse|e> list<a> */ 
  kk__tailcall: ;
  kk_ssize_t i_2936;
  kk_std_core_hnd__htag _x5697 = kk_std_core_hnd__htag_dup(kk_std_text_parse__tag_parse); /*std/core/hnd/htag<std/text/parse/.hnd-parse>*/
  i_2936 = kk_std_core_hnd__evv_index(_x5697, _ctx); /*std/core/hnd/ev-index*/
  kk_evv_t w = kk_evv_swap_create1(i_2936,kk_context()); /*std/core/hnd/evv<<std/text/parse/parse|1148>>*/;
  kk_std_core_hnd__ev ev_2938;
  kk_ssize_t _x5698 = (KK_IZ(0)); /*ssize_t*/
  ev_2938 = kk_evv_at(_x5698,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
  bool y;
  kk_box_t _x5699;
  {
    struct kk_std_core_hnd_Ev* _con5700 = kk_std_core_hnd__as_Ev(ev_2938);
    kk_std_core_hnd__marker m0 = _con5700->marker;
    kk_box_t _box_x3987 = _con5700->hnd;
    kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x3987, NULL);
    kk_std_text_parse__hnd_parse_dup(h);
    kk_std_core_hnd__clause0 _match_5058;
    kk_std_core_hnd__clause0 _brw_5059 = kk_std_text_parse__select_pick(h, _ctx); /*std/core/hnd/clause0<bool,std/text/parse/.hnd-parse,412,413>*/;
    kk_std_text_parse__hnd_parse_drop(h, _ctx);
    _match_5058 = _brw_5059; /*std/core/hnd/clause0<bool,std/text/parse/.hnd-parse,412,413>*/
    {
      kk_function_t _fun_unbox_x3990 = _match_5058.clause;
      _x5699 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x3990, (_fun_unbox_x3990, m0, ev_2938, _ctx)); /*37*/
    }
  }
  y = kk_bool_unbox(_x5699); /*bool*/
  kk_unit_t __ = kk_Unit;
  kk_evv_set(w,kk_context());
  bool x2_2933;
  if (kk_yielding(kk_context())) {
    kk_box_t _x5702 = kk_std_core_hnd_yield_cont(kk_std_text_parse_new_many_acc_fun5703(i_2936, _ctx), _ctx); /*3949*/
    x2_2933 = kk_bool_unbox(_x5702); /*bool*/
  }
  else {
    x2_2933 = y; /*bool*/
  }
  if (kk_yielding(kk_context())) {
    kk_box_t _x5704 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_many_acc_fun5705(acc1, p1, _ctx), _ctx); /*3926*/
    return kk_std_core__list_unbox(_x5704, _ctx);
  }
  if (x2_2933) {
    kk_box_t x3_2940;
    kk_function_t _x5707 = kk_function_dup(p1); /*std/text/parse/parser<1148,1147>*/
    x3_2940 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), _x5707, (_x5707, _ctx)); /*1147*/
    if (kk_yielding(kk_context())) {
      kk_box_drop(x3_2940, _ctx);
      kk_box_t _x5708 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_many_acc_fun5709(acc1, p1, _ctx), _ctx); /*3926*/
      return kk_std_core__list_unbox(_x5708, _ctx);
    }
    { // tailcall
      kk_std_core__list _x5711 = kk_std_core__new_Cons(kk_reuse_null, x3_2940, acc1, _ctx); /*list<61>*/
      acc1 = _x5711;
      goto kk__tailcall;
    }
  }
  {
    kk_function_drop(p1, _ctx);
    return kk_std_core_reverse(acc1, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift2691_many1_fun5713__t {
  struct kk_function_s _base;
  kk_box_t _y_2587;
};
static kk_box_t kk_std_text_parse__mlift2691_many1_fun5713(kk_function_t _fself, kk_box_t _b_4017, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift2691_many1_fun5713(kk_box_t _y_2587, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift2691_many1_fun5713__t* _self = kk_function_alloc_as(struct kk_std_text_parse__mlift2691_many1_fun5713__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse__mlift2691_many1_fun5713, kk_context());
  _self->_y_2587 = _y_2587;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse__mlift2691_many1_fun5713(kk_function_t _fself, kk_box_t _b_4017, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift2691_many1_fun5713__t* _self = kk_function_as(struct kk_std_text_parse__mlift2691_many1_fun5713__t*, _fself);
  kk_box_t _y_2587 = _self->_y_2587; /* 1184 */
  kk_drop_match(_self, {kk_box_dup(_y_2587);}, {}, _ctx)
  kk_std_core__list _y_4019_2588 = kk_std_core__list_unbox(_b_4017, _ctx); /*list<1184>*/;
  kk_std_core__list _x5714 = kk_std_core__new_Cons(kk_reuse_null, _y_2587, _y_4019_2588, _ctx); /*list<61>*/
  return kk_std_core__list_box(_x5714, _ctx);
}

kk_std_core__list kk_std_text_parse__mlift2691_many1(kk_function_t p, kk_box_t _y_2587, kk_context_t* _ctx) { /* forall<a,e> (p : parser<e,a>, a) -> <parse|e> list<a> */ 
  kk_std_core__list x_2943 = kk_std_text_parse_many_acc(p, kk_std_core__new_Nil(_ctx), _ctx); /*list<1184>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core__list_drop(x_2943, _ctx);
    kk_box_t _x5712 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift2691_many1_fun5713(_y_2587, _ctx), _ctx); /*3926*/
    return kk_std_core__list_unbox(_x5712, _ctx);
  }
  {
    return kk_std_core__new_Cons(kk_reuse_null, _y_2587, x_2943, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_many1_fun5717__t {
  struct kk_function_s _base;
  kk_function_t p;
};
static kk_box_t kk_std_text_parse_many1_fun5717(kk_function_t _fself, kk_box_t _b_4021, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_many1_fun5717(kk_function_t p, kk_context_t* _ctx) {
  struct kk_std_text_parse_many1_fun5717__t* _self = kk_function_alloc_as(struct kk_std_text_parse_many1_fun5717__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_many1_fun5717, kk_context());
  _self->p = p;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse_many1_fun5717(kk_function_t _fself, kk_box_t _b_4021, kk_context_t* _ctx) {
  struct kk_std_text_parse_many1_fun5717__t* _self = kk_function_as(struct kk_std_text_parse_many1_fun5717__t*, _fself);
  kk_function_t p = _self->p; /* std/text/parse/parser<1185,1184> */
  kk_drop_match(_self, {kk_function_dup(p);}, {}, _ctx)
  kk_box_t _y_4026_2587 = _b_4021; /*1184*/;
  kk_std_core__list _x5718 = kk_std_text_parse__mlift2691_many1(p, _y_4026_2587, _ctx); /*list<1184>*/
  return kk_std_core__list_box(_x5718, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_many1_fun5720__t {
  struct kk_function_s _base;
  kk_box_t x_2947;
};
static kk_box_t kk_std_text_parse_many1_fun5720(kk_function_t _fself, kk_box_t _b_4023, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_many1_fun5720(kk_box_t x_2947, kk_context_t* _ctx) {
  struct kk_std_text_parse_many1_fun5720__t* _self = kk_function_alloc_as(struct kk_std_text_parse_many1_fun5720__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_many1_fun5720, kk_context());
  _self->x_2947 = x_2947;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse_many1_fun5720(kk_function_t _fself, kk_box_t _b_4023, kk_context_t* _ctx) {
  struct kk_std_text_parse_many1_fun5720__t* _self = kk_function_as(struct kk_std_text_parse_many1_fun5720__t*, _fself);
  kk_box_t x_2947 = _self->x_2947; /* 1184 */
  kk_drop_match(_self, {kk_box_dup(x_2947);}, {}, _ctx)
  kk_std_core__list _y_4027_2588 = kk_std_core__list_unbox(_b_4023, _ctx); /*list<1184>*/;
  kk_std_core__list _x5721 = kk_std_core__new_Cons(kk_reuse_null, x_2947, _y_4027_2588, _ctx); /*list<61>*/
  return kk_std_core__list_box(_x5721, _ctx);
}

kk_std_core__list kk_std_text_parse_many1(kk_function_t p, kk_context_t* _ctx) { /* forall<a,e> (p : parser<e,a>) -> <parse|e> list<a> */ 
  kk_box_t x_2947;
  kk_function_t _x5715 = kk_function_dup(p); /*std/text/parse/parser<1185,1184>*/
  x_2947 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), _x5715, (_x5715, _ctx)); /*1184*/
  if (kk_yielding(kk_context())) {
    kk_box_drop(x_2947, _ctx);
    kk_box_t _x5716 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_many1_fun5717(p, _ctx), _ctx); /*3926*/
    return kk_std_core__list_unbox(_x5716, _ctx);
  }
  {
    kk_std_core__list x0_2950 = kk_std_text_parse_many_acc(p, kk_std_core__new_Nil(_ctx), _ctx); /*list<1184>*/;
    if (kk_yielding(kk_context())) {
      kk_std_core__list_drop(x0_2950, _ctx);
      kk_box_t _x5719 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_many1_fun5720(x_2947, _ctx), _ctx); /*3926*/
      return kk_std_core__list_unbox(_x5719, _ctx);
    }
    {
      return kk_std_core__new_Cons(kk_reuse_null, x_2947, x0_2950, _ctx);
    }
  }
}

kk_std_core_types__maybe kk_std_text_parse_maybe(kk_std_text_parse__parse_error perr, kk_context_t* _ctx) { /* forall<a> (perr : parse-error<a>) -> maybe<a> */ 
  if (kk_std_text_parse__is_ParseOk(perr)) {
    struct kk_std_text_parse_ParseOk* _con5722 = kk_std_text_parse__as_ParseOk(perr);
    kk_box_t x0 = _con5722->result;
    kk_std_core__sslice _pat00 = _con5722->rest;
    if (kk_likely(kk_std_text_parse__parse_error_is_unique(perr))) {
      kk_std_core__sslice_drop(_pat00, _ctx);
      kk_std_text_parse__parse_error_free(perr, _ctx);
    }
    else {
      kk_box_dup(x0);
      kk_std_text_parse__parse_error_decref(perr, _ctx);
    }
    return kk_std_core_types__new_Just(x0, _ctx);
  }
  {
    struct kk_std_text_parse_ParseError* _con5723 = kk_std_text_parse__as_ParseError(perr);
    kk_string_t msg = _con5723->msg;
    kk_std_core__sslice _pat5 = _con5723->rest;
    if (kk_likely(kk_std_text_parse__parse_error_is_unique(perr))) {
      kk_string_drop(msg, _ctx);
      kk_std_core__sslice_drop(_pat5, _ctx);
      kk_std_text_parse__parse_error_free(perr, _ctx);
    }
    else {
      kk_std_text_parse__parse_error_decref(perr, _ctx);
    }
    return kk_std_core_types__new_Nothing(_ctx);
  }
}

kk_std_core_types__maybe kk_std_text_parse_next_match(kk_std_core__sslice slice, kk_std_core__list cs, kk_context_t* _ctx) { /* (slice : sslice, cs : list<char>) -> maybe<sslice> */ 
  kk__tailcall: ;
  if (kk_std_core__is_Nil(cs)) {
    return kk_std_core_types__new_Just(kk_std_core__sslice_box(slice, _ctx), _ctx);
  }
  {
    struct kk_std_core_Cons* _con5724 = kk_std_core__as_Cons(cs);
    kk_box_t _box_x4029 = _con5724->head;
    kk_std_core__list cc = _con5724->tail;
    kk_char_t c = kk_char_unbox(_box_x4029, NULL);
    if (kk_likely(kk_std_core__list_is_unique(cs))) {
      kk_std_core__list_free(cs, _ctx);
    }
    else {
      kk_std_core__list_dup(cc);
      kk_std_core__list_decref(cs, _ctx);
    }
    kk_std_core_types__maybe _match_5051 = kk_std_core_next(slice, _ctx); /*maybe<(char, sslice)>*/;
    if (kk_std_core_types__is_Just(_match_5051)) {
      kk_box_t _box_x4030 = _match_5051._cons.Just.value;
      kk_std_core_types__tuple2_ _pat2 = kk_std_core_types__tuple2__unbox(_box_x4030, NULL);
      if (kk_std_core_types__is_dash__lp__comma__rp_(_pat2)) {
        kk_box_t _box_x4031 = _pat2.fst;
        kk_box_t _box_x4032 = _pat2.snd;
        kk_char_t d = kk_char_unbox(_box_x4031, NULL);
        kk_std_core__sslice rest0 = kk_std_core__sslice_unbox(_box_x4032, NULL);
        if (c == d) {
          kk_std_core__sslice_dup(rest0);
          kk_std_core_types__maybe_drop(_match_5051, _ctx);
          { // tailcall
            slice = rest0;
            cs = cc;
            goto kk__tailcall;
          }
        }
      }
    }
    {
      kk_std_core__list_drop(cc, _ctx);
      kk_std_core_types__maybe_drop(_match_5051, _ctx);
      return kk_std_core_types__new_Nothing(_ctx);
    }
  }
}
 
// monadic lift

kk_char_t kk_std_text_parse__mlift2692_no_digit(kk_std_core_types__maybe _y_2589, kk_context_t* _ctx) { /* (maybe<char>) -> parse char */ 
  if (kk_std_core_types__is_Nothing(_y_2589)) {
    kk_std_core_hnd__ev ev_2955;
    kk_ssize_t _x5729 = (KK_IZ(0)); /*ssize_t*/
    ev_2955 = kk_evv_at(_x5729,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_box_t _x5730;
    {
      struct kk_std_core_hnd_Ev* _con5731 = kk_std_core_hnd__as_Ev(ev_2955);
      kk_std_core_hnd__marker m0 = _con5731->marker;
      kk_box_t _box_x4034 = _con5731->hnd;
      kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x4034, NULL);
      kk_std_text_parse__hnd_parse_dup(h);
      kk_std_core_hnd__clause1 _match_5049;
      kk_std_core_hnd__clause1 _brw_5050 = kk_std_text_parse__select_fail(h, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
      kk_std_text_parse__hnd_parse_drop(h, _ctx);
      _match_5049 = _brw_5050; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
      {
        kk_function_t _fun_unbox_x4038 = _match_5049.clause;
        kk_box_t _x5733;
        kk_string_t _x5734;
        kk_define_string_literal(, _s5735, 11, "not a digit")
        _x5734 = kk_string_dup(_s5735); /*string*/
        _x5733 = kk_string_box(_x5734); /*51*/
        _x5730 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x4038, (_fun_unbox_x4038, m0, ev_2955, _x5733, _ctx)); /*52*/
      }
    }
    return kk_char_unbox(_x5730, _ctx);
  }
  {
    kk_box_t _box_x4042 = _y_2589._cons.Just.value;
    kk_char_t x0 = kk_char_unbox(_box_x4042, NULL);
    return x0;
  }
}


// lift anonymous function
struct kk_std_text_parse_no_digit_fun5741__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_no_digit_fun5741(kk_function_t _fself, kk_box_t _b_4056, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_no_digit_fun5741(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_no_digit_fun5741, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_no_digit_fun5741(kk_function_t _fself, kk_box_t _b_4056, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x5742;
  kk_std_core_types__maybe _match_5046;
  kk_std_core__sslice _x5743 = kk_std_core__sslice_unbox(_b_4056, _ctx); /*sslice*/
  _match_5046 = kk_std_core_next(_x5743, _ctx); /*maybe<(char, sslice)>*/
  if (kk_std_core_types__is_Just(_match_5046)) {
    kk_box_t _box_x4057 = _match_5046._cons.Just.value;
    kk_std_core_types__tuple2_ _pat000 = kk_std_core_types__tuple2__unbox(_box_x4057, NULL);
    if (kk_std_core_types__is_dash__lp__comma__rp_(_pat000)) {
      kk_box_t _box_x4058 = _pat000.fst;
      kk_box_t _box_x4059 = _pat000.snd;
      kk_char_t c = kk_char_unbox(_box_x4058, NULL);
      kk_std_core__sslice rest0 = kk_std_core__sslice_unbox(_box_x4059, NULL);
      bool b_2315;
      bool _match_5047 = (c >= ('0')); /*bool*/;
      if (_match_5047) {
        b_2315 = (c <= ('9')); /*bool*/
      }
      else {
        b_2315 = false; /*bool*/
      }
      bool _x5748;
      if (b_2315) {
        _x5748 = false; /*bool*/
      }
      else {
        _x5748 = true; /*bool*/
      }
      if (_x5748) {
        kk_std_core__sslice_dup(rest0);
        kk_std_core_types__maybe_drop(_match_5046, _ctx);
        kk_box_t _x5749;
        kk_std_core_types__tuple2_ _x5750 = kk_std_core_types__new_dash__lp__comma__rp_(kk_char_box(c, _ctx), kk_std_core__sslice_box(rest0, _ctx), _ctx); /*(6, 7)*/
        _x5749 = kk_std_core_types__tuple2__box(_x5750, _ctx); /*107*/
        _x5742 = kk_std_core_types__new_Just(_x5749, _ctx); /*maybe<107>*/
        goto _match5744;
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_5046, _ctx);
    _x5742 = kk_std_core_types__new_Nothing(_ctx); /*maybe<107>*/
  }
  _match5744: ;
  return kk_std_core_types__maybe_box(_x5742, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_no_digit_fun5752__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_no_digit_fun5752(kk_function_t _fself, kk_box_t _b_4068, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_no_digit_fun5752(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_no_digit_fun5752, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_no_digit_fun5752(kk_function_t _fself, kk_box_t _b_4068, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t _x5753;
  kk_std_core_types__maybe _x5754 = kk_std_core_types__maybe_unbox(_b_4068, _ctx); /*maybe<char>*/
  _x5753 = kk_std_text_parse__mlift2692_no_digit(_x5754, _ctx); /*char*/
  return kk_char_box(_x5753, _ctx);
}

kk_char_t kk_std_text_parse_no_digit(kk_context_t* _ctx) { /* () -> parse char */ 
  kk_std_core_hnd__ev ev_2961;
  kk_ssize_t _x5737 = (KK_IZ(0)); /*ssize_t*/
  ev_2961 = kk_evv_at(_x5737,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
  kk_std_core_types__maybe x_2958;
  kk_box_t _x5738;
  {
    struct kk_std_core_hnd_Ev* _con5739 = kk_std_core_hnd__as_Ev(ev_2961);
    kk_std_core_hnd__marker m0 = _con5739->marker;
    kk_box_t _box_x4043 = _con5739->hnd;
    kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x4043, NULL);
    kk_std_text_parse__hnd_parse_dup(h);
    kk_std_core_hnd__clause1 _match_5045;
    kk_std_core_hnd__clause1 _brw_5048 = kk_std_text_parse__select_satisfy(h, _ctx); /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/;
    kk_std_text_parse__hnd_parse_drop(h, _ctx);
    _match_5045 = _brw_5048; /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/
    {
      kk_function_t _fun_unbox_x4050 = _match_5045.clause;
      _x5738 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x4050, (_fun_unbox_x4050, m0, ev_2961, kk_function_box(kk_std_text_parse_new_no_digit_fun5741(_ctx)), _ctx)); /*52*/
    }
  }
  x_2958 = kk_std_core_types__maybe_unbox(_x5738, _ctx); /*maybe<char>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_2958, _ctx);
    kk_box_t _x5751 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_no_digit_fun5752(_ctx), _ctx); /*3926*/
    return kk_char_unbox(_x5751, _ctx);
  }
  if (kk_std_core_types__is_Nothing(x_2958)) {
    kk_std_core_hnd__ev ev0_2964;
    kk_ssize_t _x5755 = (KK_IZ(0)); /*ssize_t*/
    ev0_2964 = kk_evv_at(_x5755,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_box_t _x5756;
    {
      struct kk_std_core_hnd_Ev* _con5757 = kk_std_core_hnd__as_Ev(ev0_2964);
      kk_std_core_hnd__marker m00 = _con5757->marker;
      kk_box_t _box_x4069 = _con5757->hnd;
      kk_std_text_parse__hnd_parse h0 = kk_std_text_parse__hnd_parse_unbox(_box_x4069, NULL);
      kk_std_text_parse__hnd_parse_dup(h0);
      kk_std_core_hnd__clause1 _match_5043;
      kk_std_core_hnd__clause1 _brw_5044 = kk_std_text_parse__select_fail(h0, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
      kk_std_text_parse__hnd_parse_drop(h0, _ctx);
      _match_5043 = _brw_5044; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
      {
        kk_function_t _fun_unbox_x4073 = _match_5043.clause;
        kk_box_t _x5759;
        kk_string_t _x5760;
        kk_define_string_literal(, _s5761, 11, "not a digit")
        _x5760 = kk_string_dup(_s5761); /*string*/
        _x5759 = kk_string_box(_x5760); /*51*/
        _x5756 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x4073, (_fun_unbox_x4073, m00, ev0_2964, _x5759, _ctx)); /*52*/
      }
    }
    return kk_char_unbox(_x5756, _ctx);
  }
  {
    kk_box_t _box_x4077 = x_2958._cons.Just.value;
    kk_char_t x2 = kk_char_unbox(_box_x4077, NULL);
    return x2;
  }
}
 
// monadic lift

kk_char_t kk_std_text_parse__mlift2693_none_of(kk_std_core_types__maybe _y_2592, kk_context_t* _ctx) { /* (maybe<char>) -> parse char */ 
  if (kk_std_core_types__is_Nothing(_y_2592)) {
    kk_std_core_hnd__ev ev_2967;
    kk_ssize_t _x5763 = (KK_IZ(0)); /*ssize_t*/
    ev_2967 = kk_evv_at(_x5763,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_box_t _x5764;
    {
      struct kk_std_core_hnd_Ev* _con5765 = kk_std_core_hnd__as_Ev(ev_2967);
      kk_std_core_hnd__marker m0 = _con5765->marker;
      kk_box_t _box_x4079 = _con5765->hnd;
      kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x4079, NULL);
      kk_std_text_parse__hnd_parse_dup(h);
      kk_std_core_hnd__clause1 _match_5040;
      kk_std_core_hnd__clause1 _brw_5041 = kk_std_text_parse__select_fail(h, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
      kk_std_text_parse__hnd_parse_drop(h, _ctx);
      _match_5040 = _brw_5041; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
      {
        kk_function_t _fun_unbox_x4083 = _match_5040.clause;
        kk_box_t _x5767;
        kk_string_t _x5768 = kk_string_empty(); /*string*/
        _x5767 = kk_string_box(_x5768); /*51*/
        _x5764 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x4083, (_fun_unbox_x4083, m0, ev_2967, _x5767, _ctx)); /*52*/
      }
    }
    return kk_char_unbox(_x5764, _ctx);
  }
  {
    kk_box_t _box_x4087 = _y_2592._cons.Just.value;
    kk_char_t x0 = kk_char_unbox(_box_x4087, NULL);
    return x0;
  }
}


// lift anonymous function
struct kk_std_text_parse_none_of_fun5775__t {
  struct kk_function_s _base;
  kk_string_t chars;
};
static kk_box_t kk_std_text_parse_none_of_fun5775(kk_function_t _fself, kk_box_t _b_4101, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_none_of_fun5775(kk_string_t chars, kk_context_t* _ctx) {
  struct kk_std_text_parse_none_of_fun5775__t* _self = kk_function_alloc_as(struct kk_std_text_parse_none_of_fun5775__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_none_of_fun5775, kk_context());
  _self->chars = chars;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse_none_of_fun5775(kk_function_t _fself, kk_box_t _b_4101, kk_context_t* _ctx) {
  struct kk_std_text_parse_none_of_fun5775__t* _self = kk_function_as(struct kk_std_text_parse_none_of_fun5775__t*, _fself);
  kk_string_t chars = _self->chars; /* string */
  kk_drop_match(_self, {kk_string_dup(chars);}, {}, _ctx)
  kk_std_core_types__maybe _x5776;
  kk_std_core_types__maybe _match_5038;
  kk_std_core__sslice _x5777 = kk_std_core__sslice_unbox(_b_4101, _ctx); /*sslice*/
  _match_5038 = kk_std_core_next(_x5777, _ctx); /*maybe<(char, sslice)>*/
  if (kk_std_core_types__is_Just(_match_5038)) {
    kk_box_t _box_x4102 = _match_5038._cons.Just.value;
    kk_std_core_types__tuple2_ _pat000 = kk_std_core_types__tuple2__unbox(_box_x4102, NULL);
    if (kk_std_core_types__is_dash__lp__comma__rp_(_pat000)) {
      kk_box_t _box_x4103 = _pat000.fst;
      kk_box_t _box_x4104 = _pat000.snd;
      kk_char_t c = kk_char_unbox(_box_x4103, NULL);
      kk_std_core__sslice rest0 = kk_std_core__sslice_unbox(_box_x4104, NULL);
      bool b_2323;
      kk_string_t _x5782 = kk_string_dup(chars); /*string*/
      kk_string_t _x5783 = kk_std_core_string(c, _ctx); /*string*/
      b_2323 = kk_string_contains(_x5782,_x5783,kk_context()); /*bool*/
      bool _x5784;
      if (b_2323) {
        _x5784 = false; /*bool*/
      }
      else {
        _x5784 = true; /*bool*/
      }
      if (_x5784) {
        kk_string_drop(chars, _ctx);
        kk_std_core__sslice_dup(rest0);
        kk_std_core_types__maybe_drop(_match_5038, _ctx);
        kk_box_t _x5785;
        kk_std_core_types__tuple2_ _x5786 = kk_std_core_types__new_dash__lp__comma__rp_(kk_char_box(c, _ctx), kk_std_core__sslice_box(rest0, _ctx), _ctx); /*(6, 7)*/
        _x5785 = kk_std_core_types__tuple2__box(_x5786, _ctx); /*107*/
        _x5776 = kk_std_core_types__new_Just(_x5785, _ctx); /*maybe<107>*/
        goto _match5778;
      }
    }
  }
  {
    kk_string_drop(chars, _ctx);
    kk_std_core_types__maybe_drop(_match_5038, _ctx);
    _x5776 = kk_std_core_types__new_Nothing(_ctx); /*maybe<107>*/
  }
  _match5778: ;
  return kk_std_core_types__maybe_box(_x5776, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_none_of_fun5788__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_none_of_fun5788(kk_function_t _fself, kk_box_t _b_4113, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_none_of_fun5788(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_none_of_fun5788, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_none_of_fun5788(kk_function_t _fself, kk_box_t _b_4113, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t _x5789;
  kk_std_core_types__maybe _x5790 = kk_std_core_types__maybe_unbox(_b_4113, _ctx); /*maybe<char>*/
  _x5789 = kk_std_text_parse__mlift2693_none_of(_x5790, _ctx); /*char*/
  return kk_char_box(_x5789, _ctx);
}

kk_char_t kk_std_text_parse_none_of(kk_string_t chars, kk_context_t* _ctx) { /* (chars : string) -> parse char */ 
  kk_std_core_hnd__ev ev_2973;
  kk_ssize_t _x5771 = (KK_IZ(0)); /*ssize_t*/
  ev_2973 = kk_evv_at(_x5771,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
  kk_std_core_types__maybe x_2970;
  kk_box_t _x5772;
  {
    struct kk_std_core_hnd_Ev* _con5773 = kk_std_core_hnd__as_Ev(ev_2973);
    kk_std_core_hnd__marker m0 = _con5773->marker;
    kk_box_t _box_x4088 = _con5773->hnd;
    kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x4088, NULL);
    kk_std_text_parse__hnd_parse_dup(h);
    kk_std_core_hnd__clause1 _match_5037;
    kk_std_core_hnd__clause1 _brw_5039 = kk_std_text_parse__select_satisfy(h, _ctx); /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/;
    kk_std_text_parse__hnd_parse_drop(h, _ctx);
    _match_5037 = _brw_5039; /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/
    {
      kk_function_t _fun_unbox_x4095 = _match_5037.clause;
      _x5772 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x4095, (_fun_unbox_x4095, m0, ev_2973, kk_function_box(kk_std_text_parse_new_none_of_fun5775(chars, _ctx)), _ctx)); /*52*/
    }
  }
  x_2970 = kk_std_core_types__maybe_unbox(_x5772, _ctx); /*maybe<char>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_2970, _ctx);
    kk_box_t _x5787 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_none_of_fun5788(_ctx), _ctx); /*3926*/
    return kk_char_unbox(_x5787, _ctx);
  }
  if (kk_std_core_types__is_Nothing(x_2970)) {
    kk_std_core_hnd__ev ev0_2976;
    kk_ssize_t _x5791 = (KK_IZ(0)); /*ssize_t*/
    ev0_2976 = kk_evv_at(_x5791,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_box_t _x5792;
    {
      struct kk_std_core_hnd_Ev* _con5793 = kk_std_core_hnd__as_Ev(ev0_2976);
      kk_std_core_hnd__marker m00 = _con5793->marker;
      kk_box_t _box_x4114 = _con5793->hnd;
      kk_std_text_parse__hnd_parse h0 = kk_std_text_parse__hnd_parse_unbox(_box_x4114, NULL);
      kk_std_text_parse__hnd_parse_dup(h0);
      kk_std_core_hnd__clause1 _match_5035;
      kk_std_core_hnd__clause1 _brw_5036 = kk_std_text_parse__select_fail(h0, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
      kk_std_text_parse__hnd_parse_drop(h0, _ctx);
      _match_5035 = _brw_5036; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
      {
        kk_function_t _fun_unbox_x4118 = _match_5035.clause;
        kk_box_t _x5795;
        kk_string_t _x5796 = kk_string_empty(); /*string*/
        _x5795 = kk_string_box(_x5796); /*51*/
        _x5792 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x4118, (_fun_unbox_x4118, m00, ev0_2976, _x5795, _ctx)); /*52*/
      }
    }
    return kk_char_unbox(_x5792, _ctx);
  }
  {
    kk_box_t _box_x4122 = x_2970._cons.Just.value;
    kk_char_t x2 = kk_char_unbox(_box_x4122, NULL);
    return x2;
  }
}
 
// lifted local: none-of-many1, .spec.2504
// specialized: std/text/parse/next-while0, on parameters pred, using:
// pred = fn(c: char){
//   val b.2330 : bool
//         = std/core/contains(chars, (std/core/string(c)));
//   match (b.2330) {
//     ((std/core/types/True() : bool ) as .pat9: bool)
//        -> std/core/types/False;
//     ((.skip std/core/types/False() : bool ) as .pat01: bool)
//        -> std/core/types/True;
//   };
// }

kk_std_core_types__tuple2_ kk_std_text_parse__lift2512_none_of_many1(kk_string_t chars, kk_std_core__sslice slice0, kk_std_core__list acc, kk_context_t* _ctx) { /* (chars : string, slice0 : sslice, acc : list<char>) -> (list<char>, sslice) */ 
  kk__tailcall: ;
  kk_std_core_types__maybe _match_5033;
  kk_std_core__sslice _x5799 = kk_std_core__sslice_dup(slice0); /*sslice*/
  _match_5033 = kk_std_core_next(_x5799, _ctx); /*maybe<(char, sslice)>*/
  if (kk_std_core_types__is_Just(_match_5033)) {
    kk_box_t _box_x4124 = _match_5033._cons.Just.value;
    kk_std_core_types__tuple2_ _pat0 = kk_std_core_types__tuple2__unbox(_box_x4124, NULL);
    if (kk_std_core_types__is_dash__lp__comma__rp_(_pat0)) {
      kk_box_t _box_x4125 = _pat0.fst;
      kk_box_t _box_x4126 = _pat0.snd;
      kk_char_t c0 = kk_char_unbox(_box_x4125, NULL);
      kk_std_core__sslice rest0 = kk_std_core__sslice_unbox(_box_x4126, NULL);
      bool b_2330;
      kk_string_t _x5803 = kk_string_dup(chars); /*string*/
      kk_string_t _x5804 = kk_std_core_string(c0, _ctx); /*string*/
      b_2330 = kk_string_contains(_x5803,_x5804,kk_context()); /*bool*/
      bool _x5805;
      if (b_2330) {
        _x5805 = false; /*bool*/
      }
      else {
        _x5805 = true; /*bool*/
      }
      if (_x5805) {
        kk_std_core__sslice_drop(slice0, _ctx);
        kk_std_core__sslice_dup(rest0);
        kk_std_core_types__maybe_drop(_match_5033, _ctx);
        { // tailcall
          kk_std_core__list _x5806 = kk_std_core__new_Cons(kk_reuse_null, kk_char_box(c0, _ctx), acc, _ctx); /*list<61>*/
          slice0 = rest0;
          acc = _x5806;
          goto kk__tailcall;
        }
      }
    }
  }
  {
    kk_string_drop(chars, _ctx);
    kk_std_core_types__maybe_drop(_match_5033, _ctx);
    kk_std_core__list _b_4133_4129 = kk_std_core__lift17288_reverse(kk_std_core__new_Nil(_ctx), acc, _ctx); /*list<char>*/;
    return kk_std_core_types__new_dash__lp__comma__rp_(kk_std_core__list_box(_b_4133_4129, _ctx), kk_std_core__sslice_box(slice0, _ctx), _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift2694_none_of_many1_fun5816__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift2694_none_of_many1_fun5816(kk_function_t _fself, kk_box_t _b_4145, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift2694_none_of_many1_fun5816(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift2694_none_of_many1_fun5816, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse__mlift2694_none_of_many1_fun5816(kk_function_t _fself, kk_box_t _b_4145, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x5817;
  kk_std_core__list _x5818 = kk_std_core__list_unbox(_b_4145, _ctx); /*list<char>*/
  _x5817 = kk_std_core_string_2(_x5818, _ctx); /*string*/
  return kk_string_box(_x5817);
}

kk_string_t kk_std_text_parse__mlift2694_none_of_many1(kk_std_core_types__maybe _y_2595, kk_context_t* _ctx) { /* (maybe<list<char>>) -> parse string */ 
  kk_std_core__list x_2979;
  if (kk_std_core_types__is_Nothing(_y_2595)) {
    kk_std_core_hnd__ev ev_2981;
    kk_ssize_t _x5807 = (KK_IZ(0)); /*ssize_t*/
    ev_2981 = kk_evv_at(_x5807,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_box_t _x5808;
    {
      struct kk_std_core_hnd_Ev* _con5809 = kk_std_core_hnd__as_Ev(ev_2981);
      kk_std_core_hnd__marker m0 = _con5809->marker;
      kk_box_t _box_x4135 = _con5809->hnd;
      kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x4135, NULL);
      kk_std_text_parse__hnd_parse_dup(h);
      kk_std_core_hnd__clause1 _match_5031;
      kk_std_core_hnd__clause1 _brw_5032 = kk_std_text_parse__select_fail(h, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
      kk_std_text_parse__hnd_parse_drop(h, _ctx);
      _match_5031 = _brw_5032; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
      {
        kk_function_t _fun_unbox_x4139 = _match_5031.clause;
        kk_box_t _x5811;
        kk_string_t _x5812 = kk_string_empty(); /*string*/
        _x5811 = kk_string_box(_x5812); /*51*/
        _x5808 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x4139, (_fun_unbox_x4139, m0, ev_2981, _x5811, _ctx)); /*52*/
      }
    }
    x_2979 = kk_std_core__list_unbox(_x5808, _ctx); /*list<char>*/
  }
  else {
    kk_box_t _box_x4143 = _y_2595._cons.Just.value;
    kk_std_core__list x1 = kk_std_core__list_unbox(_box_x4143, NULL);
    x_2979 = x1; /*list<char>*/
  }
  if (kk_yielding(kk_context())) {
    kk_std_core__list_drop(x_2979, _ctx);
    kk_box_t _x5815 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift2694_none_of_many1_fun5816(_ctx), _ctx); /*3926*/
    return kk_string_unbox(_x5815);
  }
  {
    return kk_std_core_string_2(x_2979, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_none_of_many1_fun5823__t {
  struct kk_function_s _base;
  kk_string_t chars;
};
static kk_box_t kk_std_text_parse_none_of_many1_fun5823(kk_function_t _fself, kk_box_t _b_4160, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_none_of_many1_fun5823(kk_string_t chars, kk_context_t* _ctx) {
  struct kk_std_text_parse_none_of_many1_fun5823__t* _self = kk_function_alloc_as(struct kk_std_text_parse_none_of_many1_fun5823__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_none_of_many1_fun5823, kk_context());
  _self->chars = chars;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse_none_of_many1_fun5823(kk_function_t _fself, kk_box_t _b_4160, kk_context_t* _ctx) {
  struct kk_std_text_parse_none_of_many1_fun5823__t* _self = kk_function_as(struct kk_std_text_parse_none_of_many1_fun5823__t*, _fself);
  kk_string_t chars = _self->chars; /* string */
  kk_drop_match(_self, {kk_string_dup(chars);}, {}, _ctx)
  kk_std_core_types__maybe _x5824;
  kk_std_core_types__tuple2_ _match_5028;
  kk_std_core__sslice _x5825 = kk_std_core__sslice_unbox(_b_4160, _ctx); /*sslice*/
  _match_5028 = kk_std_text_parse__lift2512_none_of_many1(chars, _x5825, kk_std_core__new_Nil(_ctx), _ctx); /*(list<char>, sslice)*/
  {
    kk_box_t _box_x4161 = _match_5028.fst;
    kk_box_t _box_x4162 = _match_5028.snd;
    kk_std_core__list _pat000 = kk_std_core__list_unbox(_box_x4161, NULL);
    kk_std_core__sslice _pat1000 = kk_std_core__sslice_unbox(_box_x4162, NULL);
    if (kk_std_core__is_Nil(_pat000)) {
      kk_std_core_types__tuple2__drop(_match_5028, _ctx);
      _x5824 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/
      goto _match5826;
    }
  }
  {
    kk_box_t _box_x4163 = _match_5028.fst;
    kk_box_t _box_x4164 = _match_5028.snd;
    kk_std_core__list xs = kk_std_core__list_unbox(_box_x4163, NULL);
    kk_std_core__sslice rest00 = kk_std_core__sslice_unbox(_box_x4164, NULL);
    kk_std_core__sslice_dup(rest00);
    kk_std_core__list_dup(xs);
    kk_std_core_types__tuple2__drop(_match_5028, _ctx);
    kk_box_t _x5831;
    kk_std_core_types__tuple2_ _x5832 = kk_std_core_types__new_dash__lp__comma__rp_(kk_std_core__list_box(xs, _ctx), kk_std_core__sslice_box(rest00, _ctx), _ctx); /*(6, 7)*/
    _x5831 = kk_std_core_types__tuple2__box(_x5832, _ctx); /*107*/
    _x5824 = kk_std_core_types__new_Just(_x5831, _ctx); /*forall<a> maybe<a>*/
  }
  _match5826: ;
  return kk_std_core_types__maybe_box(_x5824, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_none_of_many1_fun5834__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_none_of_many1_fun5834(kk_function_t _fself, kk_box_t _b_4173, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_none_of_many1_fun5834(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_none_of_many1_fun5834, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_none_of_many1_fun5834(kk_function_t _fself, kk_box_t _b_4173, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x5835;
  kk_std_core_types__maybe _x5836 = kk_std_core_types__maybe_unbox(_b_4173, _ctx); /*maybe<list<char>>*/
  _x5835 = kk_std_text_parse__mlift2694_none_of_many1(_x5836, _ctx); /*string*/
  return kk_string_box(_x5835);
}


// lift anonymous function
struct kk_std_text_parse_none_of_many1_fun5846__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_none_of_many1_fun5846(kk_function_t _fself, kk_box_t _b_4184, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_none_of_many1_fun5846(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_none_of_many1_fun5846, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_none_of_many1_fun5846(kk_function_t _fself, kk_box_t _b_4184, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x5847;
  kk_std_core__list _x5848 = kk_std_core__list_unbox(_b_4184, _ctx); /*list<char>*/
  _x5847 = kk_std_core_string_2(_x5848, _ctx); /*string*/
  return kk_string_box(_x5847);
}

kk_string_t kk_std_text_parse_none_of_many1(kk_string_t chars, kk_context_t* _ctx) { /* (chars : string) -> parse string */ 
  kk_std_core_hnd__ev ev_2987;
  kk_ssize_t _x5819 = (KK_IZ(0)); /*ssize_t*/
  ev_2987 = kk_evv_at(_x5819,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
  kk_std_core_types__maybe x_2984;
  kk_box_t _x5820;
  {
    struct kk_std_core_hnd_Ev* _con5821 = kk_std_core_hnd__as_Ev(ev_2987);
    kk_std_core_hnd__marker m0 = _con5821->marker;
    kk_box_t _box_x4147 = _con5821->hnd;
    kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x4147, NULL);
    kk_std_text_parse__hnd_parse_dup(h);
    kk_std_core_hnd__clause1 _match_5027;
    kk_std_core_hnd__clause1 _brw_5029 = kk_std_text_parse__select_satisfy(h, _ctx); /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/;
    kk_std_text_parse__hnd_parse_drop(h, _ctx);
    _match_5027 = _brw_5029; /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/
    {
      kk_function_t _fun_unbox_x4154 = _match_5027.clause;
      _x5820 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x4154, (_fun_unbox_x4154, m0, ev_2987, kk_function_box(kk_std_text_parse_new_none_of_many1_fun5823(chars, _ctx)), _ctx)); /*52*/
    }
  }
  x_2984 = kk_std_core_types__maybe_unbox(_x5820, _ctx); /*maybe<list<char>>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_2984, _ctx);
    kk_box_t _x5833 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_none_of_many1_fun5834(_ctx), _ctx); /*3926*/
    return kk_string_unbox(_x5833);
  }
  {
    kk_std_core__list x1_2990;
    if (kk_std_core_types__is_Nothing(x_2984)) {
      kk_std_core_hnd__ev ev0_2992;
      kk_ssize_t _x5837 = (KK_IZ(0)); /*ssize_t*/
      ev0_2992 = kk_evv_at(_x5837,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
      kk_box_t _x5838;
      {
        struct kk_std_core_hnd_Ev* _con5839 = kk_std_core_hnd__as_Ev(ev0_2992);
        kk_std_core_hnd__marker m00 = _con5839->marker;
        kk_box_t _box_x4174 = _con5839->hnd;
        kk_std_text_parse__hnd_parse h0 = kk_std_text_parse__hnd_parse_unbox(_box_x4174, NULL);
        kk_std_text_parse__hnd_parse_dup(h0);
        kk_std_core_hnd__clause1 _match_5025;
        kk_std_core_hnd__clause1 _brw_5026 = kk_std_text_parse__select_fail(h0, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
        kk_std_text_parse__hnd_parse_drop(h0, _ctx);
        _match_5025 = _brw_5026; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
        {
          kk_function_t _fun_unbox_x4178 = _match_5025.clause;
          kk_box_t _x5841;
          kk_string_t _x5842 = kk_string_empty(); /*string*/
          _x5841 = kk_string_box(_x5842); /*51*/
          _x5838 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x4178, (_fun_unbox_x4178, m00, ev0_2992, _x5841, _ctx)); /*52*/
        }
      }
      x1_2990 = kk_std_core__list_unbox(_x5838, _ctx); /*list<char>*/
    }
    else {
      kk_box_t _box_x4182 = x_2984._cons.Just.value;
      kk_std_core__list x3 = kk_std_core__list_unbox(_box_x4182, NULL);
      x1_2990 = x3; /*list<char>*/
    }
    if (kk_yielding(kk_context())) {
      kk_std_core__list_drop(x1_2990, _ctx);
      kk_box_t _x5845 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_none_of_many1_fun5846(_ctx), _ctx); /*3926*/
      return kk_string_unbox(_x5845);
    }
    {
      return kk_std_core_string_2(x1_2990, _ctx);
    }
  }
}
 
// monadic lift

kk_char_t kk_std_text_parse__mlift2695_one_of(kk_string_t chars, kk_std_core_types__maybe _y_2598, kk_context_t* _ctx) { /* (chars : string, maybe<char>) -> parse char */ 
  if (kk_std_core_types__is_Nothing(_y_2598)) {
    kk_std_core_hnd__ev ev_2995;
    kk_ssize_t _x5849 = (KK_IZ(0)); /*ssize_t*/
    ev_2995 = kk_evv_at(_x5849,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_box_t _x5850;
    {
      struct kk_std_core_hnd_Ev* _con5851 = kk_std_core_hnd__as_Ev(ev_2995);
      kk_std_core_hnd__marker m0 = _con5851->marker;
      kk_box_t _box_x4187 = _con5851->hnd;
      kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x4187, NULL);
      kk_std_text_parse__hnd_parse_dup(h);
      kk_std_core_hnd__clause1 _match_5021;
      kk_std_core_hnd__clause1 _brw_5022 = kk_std_text_parse__select_fail(h, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
      kk_std_text_parse__hnd_parse_drop(h, _ctx);
      _match_5021 = _brw_5022; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
      {
        kk_function_t _fun_unbox_x4191 = _match_5021.clause;
        _x5850 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x4191, (_fun_unbox_x4191, m0, ev_2995, kk_string_box(chars), _ctx)); /*52*/
      }
    }
    return kk_char_unbox(_x5850, _ctx);
  }
  {
    kk_box_t _box_x4195 = _y_2598._cons.Just.value;
    kk_char_t x0 = kk_char_unbox(_box_x4195, NULL);
    kk_string_drop(chars, _ctx);
    return x0;
  }
}


// lift anonymous function
struct kk_std_text_parse_one_of_fun5860__t {
  struct kk_function_s _base;
  kk_string_t chars;
};
static kk_box_t kk_std_text_parse_one_of_fun5860(kk_function_t _fself, kk_box_t _b_4209, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_one_of_fun5860(kk_string_t chars, kk_context_t* _ctx) {
  struct kk_std_text_parse_one_of_fun5860__t* _self = kk_function_alloc_as(struct kk_std_text_parse_one_of_fun5860__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_one_of_fun5860, kk_context());
  _self->chars = chars;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse_one_of_fun5860(kk_function_t _fself, kk_box_t _b_4209, kk_context_t* _ctx) {
  struct kk_std_text_parse_one_of_fun5860__t* _self = kk_function_as(struct kk_std_text_parse_one_of_fun5860__t*, _fself);
  kk_string_t chars = _self->chars; /* string */
  kk_drop_match(_self, {kk_string_dup(chars);}, {}, _ctx)
  kk_std_core_types__maybe _x5861;
  kk_std_core_types__maybe _match_5019;
  kk_std_core__sslice _x5862 = kk_std_core__sslice_unbox(_b_4209, _ctx); /*sslice*/
  _match_5019 = kk_std_core_next(_x5862, _ctx); /*maybe<(char, sslice)>*/
  if (kk_std_core_types__is_Just(_match_5019)) {
    kk_box_t _box_x4210 = _match_5019._cons.Just.value;
    kk_std_core_types__tuple2_ _pat000 = kk_std_core_types__tuple2__unbox(_box_x4210, NULL);
    if (kk_std_core_types__is_dash__lp__comma__rp_(_pat000)) {
      kk_box_t _box_x4211 = _pat000.fst;
      kk_box_t _box_x4212 = _pat000.snd;
      kk_char_t c = kk_char_unbox(_box_x4211, NULL);
      kk_std_core__sslice rest0 = kk_std_core__sslice_unbox(_box_x4212, NULL);
      kk_string_t _x5867 = kk_string_dup(chars); /*string*/
      kk_string_t _x5868 = kk_std_core_string(c, _ctx); /*string*/
      if (kk_string_contains(_x5867,_x5868,kk_context())) {
        kk_string_drop(chars, _ctx);
        kk_std_core__sslice_dup(rest0);
        kk_std_core_types__maybe_drop(_match_5019, _ctx);
        kk_box_t _x5869;
        kk_std_core_types__tuple2_ _x5870 = kk_std_core_types__new_dash__lp__comma__rp_(kk_char_box(c, _ctx), kk_std_core__sslice_box(rest0, _ctx), _ctx); /*(6, 7)*/
        _x5869 = kk_std_core_types__tuple2__box(_x5870, _ctx); /*107*/
        _x5861 = kk_std_core_types__new_Just(_x5869, _ctx); /*maybe<107>*/
        goto _match5863;
      }
    }
  }
  {
    kk_string_drop(chars, _ctx);
    kk_std_core_types__maybe_drop(_match_5019, _ctx);
    _x5861 = kk_std_core_types__new_Nothing(_ctx); /*maybe<107>*/
  }
  _match5863: ;
  return kk_std_core_types__maybe_box(_x5861, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_one_of_fun5872__t {
  struct kk_function_s _base;
  kk_string_t chars;
};
static kk_box_t kk_std_text_parse_one_of_fun5872(kk_function_t _fself, kk_box_t _b_4221, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_one_of_fun5872(kk_string_t chars, kk_context_t* _ctx) {
  struct kk_std_text_parse_one_of_fun5872__t* _self = kk_function_alloc_as(struct kk_std_text_parse_one_of_fun5872__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_one_of_fun5872, kk_context());
  _self->chars = chars;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse_one_of_fun5872(kk_function_t _fself, kk_box_t _b_4221, kk_context_t* _ctx) {
  struct kk_std_text_parse_one_of_fun5872__t* _self = kk_function_as(struct kk_std_text_parse_one_of_fun5872__t*, _fself);
  kk_string_t chars = _self->chars; /* string */
  kk_drop_match(_self, {kk_string_dup(chars);}, {}, _ctx)
  kk_std_core_types__maybe _y_4232_2598 = kk_std_core_types__maybe_unbox(_b_4221, _ctx); /*maybe<char>*/;
  kk_char_t _x5873 = kk_std_text_parse__mlift2695_one_of(chars, _y_4232_2598, _ctx); /*char*/
  return kk_char_box(_x5873, _ctx);
}

kk_char_t kk_std_text_parse_one_of(kk_string_t chars, kk_context_t* _ctx) { /* (chars : string) -> parse char */ 
  kk_std_core_hnd__ev ev_3001;
  kk_ssize_t _x5854 = (KK_IZ(0)); /*ssize_t*/
  ev_3001 = kk_evv_at(_x5854,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
  kk_std_core_types__maybe x_2998;
  kk_box_t _x5855;
  {
    struct kk_std_core_hnd_Ev* _con5856 = kk_std_core_hnd__as_Ev(ev_3001);
    kk_std_core_hnd__marker m0 = _con5856->marker;
    kk_box_t _box_x4196 = _con5856->hnd;
    kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x4196, NULL);
    kk_std_text_parse__hnd_parse_dup(h);
    kk_std_core_hnd__clause1 _match_5018;
    kk_std_core_hnd__clause1 _brw_5020 = kk_std_text_parse__select_satisfy(h, _ctx); /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/;
    kk_std_text_parse__hnd_parse_drop(h, _ctx);
    _match_5018 = _brw_5020; /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/
    {
      kk_function_t _fun_unbox_x4203 = _match_5018.clause;
      kk_box_t _x5858;
      kk_function_t _x5859;
      kk_string_dup(chars);
      _x5859 = kk_std_text_parse_new_one_of_fun5860(chars, _ctx); /*(4207) -> total 4208*/
      _x5858 = kk_function_box(_x5859); /*51*/
      _x5855 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x4203, (_fun_unbox_x4203, m0, ev_3001, _x5858, _ctx)); /*52*/
    }
  }
  x_2998 = kk_std_core_types__maybe_unbox(_x5855, _ctx); /*maybe<char>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_2998, _ctx);
    kk_box_t _x5871 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_one_of_fun5872(chars, _ctx), _ctx); /*3926*/
    return kk_char_unbox(_x5871, _ctx);
  }
  if (kk_std_core_types__is_Nothing(x_2998)) {
    kk_std_core_hnd__ev ev0_3004;
    kk_ssize_t _x5874 = (KK_IZ(0)); /*ssize_t*/
    ev0_3004 = kk_evv_at(_x5874,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_box_t _x5875;
    {
      struct kk_std_core_hnd_Ev* _con5876 = kk_std_core_hnd__as_Ev(ev0_3004);
      kk_std_core_hnd__marker m00 = _con5876->marker;
      kk_box_t _box_x4222 = _con5876->hnd;
      kk_std_text_parse__hnd_parse h0 = kk_std_text_parse__hnd_parse_unbox(_box_x4222, NULL);
      kk_std_text_parse__hnd_parse_dup(h0);
      kk_std_core_hnd__clause1 _match_5016;
      kk_std_core_hnd__clause1 _brw_5017 = kk_std_text_parse__select_fail(h0, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
      kk_std_text_parse__hnd_parse_drop(h0, _ctx);
      _match_5016 = _brw_5017; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
      {
        kk_function_t _fun_unbox_x4226 = _match_5016.clause;
        _x5875 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x4226, (_fun_unbox_x4226, m00, ev0_3004, kk_string_box(chars), _ctx)); /*52*/
      }
    }
    return kk_char_unbox(_x5875, _ctx);
  }
  {
    kk_box_t _box_x4230 = x_2998._cons.Just.value;
    kk_char_t x2 = kk_char_unbox(_box_x4230, NULL);
    kk_string_drop(chars, _ctx);
    return x2;
  }
}


// lift anonymous function
struct kk_std_text_parse_one_of_or_fun5884__t {
  struct kk_function_s _base;
  kk_string_t chars;
  kk_char_t kkloc_default;
};
static kk_box_t kk_std_text_parse_one_of_or_fun5884(kk_function_t _fself, kk_box_t _b_4240, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_one_of_or_fun5884(kk_string_t chars, kk_char_t kkloc_default, kk_context_t* _ctx) {
  struct kk_std_text_parse_one_of_or_fun5884__t* _self = kk_function_alloc_as(struct kk_std_text_parse_one_of_or_fun5884__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_one_of_or_fun5884, kk_context());
  _self->chars = chars;
  _self->kkloc_default = kkloc_default;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse_one_of_or_fun5884(kk_function_t _fself, kk_box_t _b_4240, kk_context_t* _ctx) {
  struct kk_std_text_parse_one_of_or_fun5884__t* _self = kk_function_as(struct kk_std_text_parse_one_of_or_fun5884__t*, _fself);
  kk_string_t chars = _self->chars; /* string */
  kk_char_t kkloc_default = _self->kkloc_default; /* char */
  kk_drop_match(_self, {kk_string_dup(chars);;}, {}, _ctx)
  bool _y_4242_2601 = kk_bool_unbox(_b_4240); /*bool*/;
  kk_char_t _x5885;
  if (_y_4242_2601) {
    _x5885 = kk_std_text_parse_one_of(chars, _ctx); /*char*/
  }
  else {
    kk_string_drop(chars, _ctx);
    _x5885 = kkloc_default; /*char*/
  }
  return kk_char_box(_x5885, _ctx);
}

kk_char_t kk_std_text_parse_one_of_or(kk_string_t chars, kk_char_t kkloc_default, kk_context_t* _ctx) { /* (chars : string, default : char) -> parse char */ 
  kk_std_core_hnd__ev ev_3010;
  kk_ssize_t _x5879 = (KK_IZ(0)); /*ssize_t*/
  ev_3010 = kk_evv_at(_x5879,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
  bool x_3007;
  kk_box_t _x5880;
  {
    struct kk_std_core_hnd_Ev* _con5881 = kk_std_core_hnd__as_Ev(ev_3010);
    kk_std_core_hnd__marker m0 = _con5881->marker;
    kk_box_t _box_x4233 = _con5881->hnd;
    kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x4233, NULL);
    kk_std_text_parse__hnd_parse_dup(h);
    kk_std_core_hnd__clause0 _match_5013;
    kk_std_core_hnd__clause0 _brw_5014 = kk_std_text_parse__select_pick(h, _ctx); /*std/core/hnd/clause0<bool,std/text/parse/.hnd-parse,412,413>*/;
    kk_std_text_parse__hnd_parse_drop(h, _ctx);
    _match_5013 = _brw_5014; /*std/core/hnd/clause0<bool,std/text/parse/.hnd-parse,412,413>*/
    {
      kk_function_t _fun_unbox_x4236 = _match_5013.clause;
      _x5880 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x4236, (_fun_unbox_x4236, m0, ev_3010, _ctx)); /*37*/
    }
  }
  x_3007 = kk_bool_unbox(_x5880); /*bool*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x5883 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_one_of_or_fun5884(chars, kkloc_default, _ctx), _ctx); /*3926*/
    return kk_char_unbox(_x5883, _ctx);
  }
  if (x_3007) {
    return kk_std_text_parse_one_of(chars, _ctx);
  }
  {
    kk_string_drop(chars, _ctx);
    return kkloc_default;
  }
}
 
// monadic lift

kk_std_text_parse__parse_error kk_std_text_parse__mlift2698_parse(kk_std_text_parse__parse_error err1, kk_std_text_parse__parse_error _y_2609, kk_context_t* _ctx) { /* forall<h,a,e> (err1 : parse-error<a>, parse-error<a>) -> <local<h>|e> parse-error<a> */ 
  if (kk_std_text_parse__is_ParseOk(_y_2609)) {
    struct kk_std_text_parse_ParseOk* _con5886 = kk_std_text_parse__as_ParseOk(_y_2609);
    kk_box_t x2 = _con5886->result;
    kk_std_core__sslice rest2 = _con5886->rest;
    kk_std_text_parse__parse_error_drop(err1, _ctx);
    kk_reuse_t _ru_5200 = kk_reuse_null; /*reuse*/;
    if (kk_likely(kk_std_text_parse__parse_error_is_unique(_y_2609))) {
      _ru_5200 = (kk_std_text_parse__parse_error_reuse(_y_2609));
    }
    else {
      kk_std_core__sslice_dup(rest2);
      kk_box_dup(x2);
      kk_std_text_parse__parse_error_decref(_y_2609, _ctx);
    }
    return kk_std_text_parse__new_ParseOk(_ru_5200, x2, rest2, _ctx);
  }
  {
    kk_std_text_parse__parse_error_drop(_y_2609, _ctx);
    return err1;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift2699_parse_fun5888__t {
  struct kk_function_s _base;
  kk_std_text_parse__parse_error err1;
};
static kk_box_t kk_std_text_parse__mlift2699_parse_fun5888(kk_function_t _fself, kk_box_t _b_4244, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift2699_parse_fun5888(kk_std_text_parse__parse_error err1, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift2699_parse_fun5888__t* _self = kk_function_alloc_as(struct kk_std_text_parse__mlift2699_parse_fun5888__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse__mlift2699_parse_fun5888, kk_context());
  _self->err1 = err1;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse__mlift2699_parse_fun5888(kk_function_t _fself, kk_box_t _b_4244, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift2699_parse_fun5888__t* _self = kk_function_as(struct kk_std_text_parse__mlift2699_parse_fun5888__t*, _fself);
  kk_std_text_parse__parse_error err1 = _self->err1; /* std/text/parse/parse-error<2020> */
  kk_drop_match(_self, {kk_std_text_parse__parse_error_dup(err1);}, {}, _ctx)
  kk_std_text_parse__parse_error _x5889;
  kk_std_text_parse__parse_error _y_4246_2609 = kk_std_text_parse__parse_error_unbox(_b_4244, _ctx); /*std/text/parse/parse-error<2020>*/;
  if (kk_std_text_parse__is_ParseOk(_y_4246_2609)) {
    struct kk_std_text_parse_ParseOk* _con5890 = kk_std_text_parse__as_ParseOk(_y_4246_2609);
    kk_box_t x2 = _con5890->result;
    kk_std_core__sslice rest2 = _con5890->rest;
    kk_std_text_parse__parse_error_drop(err1, _ctx);
    kk_reuse_t _ru_5201 = kk_reuse_null; /*reuse*/;
    if (kk_likely(kk_std_text_parse__parse_error_is_unique(_y_4246_2609))) {
      _ru_5201 = (kk_std_text_parse__parse_error_reuse(_y_4246_2609));
    }
    else {
      kk_std_core__sslice_dup(rest2);
      kk_box_dup(x2);
      kk_std_text_parse__parse_error_decref(_y_4246_2609, _ctx);
    }
    _x5889 = kk_std_text_parse__new_ParseOk(_ru_5201, x2, rest2, _ctx); /*std/text/parse/parse-error<39>*/
  }
  else {
    kk_std_text_parse__parse_error_drop(_y_4246_2609, _ctx);
    _x5889 = err1; /*std/text/parse/parse-error<39>*/
  }
  return kk_std_text_parse__parse_error_box(_x5889, _ctx);
}

kk_std_text_parse__parse_error kk_std_text_parse__mlift2699_parse(kk_std_text_parse__parse_error err1, kk_function_t resume, kk_unit_t wild__, kk_context_t* _ctx) { /* forall<h,a,e> (err1 : parse-error<a>, resume : (bool) -> <local<h>|e> parse-error<a>, wild_ : ()) -> <local<h>|e> parse-error<a> */ 
  kk_std_text_parse__parse_error x_3015 = kk_function_call(kk_std_text_parse__parse_error, (kk_function_t, bool, kk_context_t*), resume, (resume, false, _ctx)); /*std/text/parse/parse-error<2020>*/;
  if (kk_yielding(kk_context())) {
    kk_std_text_parse__parse_error_drop(x_3015, _ctx);
    kk_box_t _x5887 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift2699_parse_fun5888(err1, _ctx), _ctx); /*3926*/
    return kk_std_text_parse__parse_error_unbox(_x5887, _ctx);
  }
  {
    kk_std_text_parse__parse_error _y_4247_2609 = x_3015; /*std/text/parse/parse-error<2020>*/;
    if (kk_std_text_parse__is_ParseOk(_y_4247_2609)) {
      struct kk_std_text_parse_ParseOk* _con5891 = kk_std_text_parse__as_ParseOk(_y_4247_2609);
      kk_box_t x2 = _con5891->result;
      kk_std_core__sslice rest2 = _con5891->rest;
      kk_std_text_parse__parse_error_drop(err1, _ctx);
      kk_reuse_t _ru_5202 = kk_reuse_null; /*reuse*/;
      if (kk_likely(kk_std_text_parse__parse_error_is_unique(_y_4247_2609))) {
        _ru_5202 = (kk_std_text_parse__parse_error_reuse(_y_4247_2609));
      }
      else {
        kk_std_core__sslice_dup(rest2);
        kk_box_dup(x2);
        kk_std_text_parse__parse_error_decref(_y_4247_2609, _ctx);
      }
      return kk_std_text_parse__new_ParseOk(_ru_5202, x2, rest2, _ctx);
    }
    {
      kk_std_text_parse__parse_error_drop(_y_4247_2609, _ctx);
      return err1;
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift2700_parse_fun5894__t {
  struct kk_function_s _base;
  kk_std_text_parse__parse_error _y_2607;
  kk_function_t resume;
};
static kk_box_t kk_std_text_parse__mlift2700_parse_fun5894(kk_function_t _fself, kk_box_t _b_4253, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift2700_parse_fun5894(kk_std_text_parse__parse_error _y_2607, kk_function_t resume, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift2700_parse_fun5894__t* _self = kk_function_alloc_as(struct kk_std_text_parse__mlift2700_parse_fun5894__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse__mlift2700_parse_fun5894, kk_context());
  _self->_y_2607 = _y_2607;
  _self->resume = resume;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse__mlift2700_parse_fun5894(kk_function_t _fself, kk_box_t _b_4253, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift2700_parse_fun5894__t* _self = kk_function_as(struct kk_std_text_parse__mlift2700_parse_fun5894__t*, _fself);
  kk_std_text_parse__parse_error _y_2607 = _self->_y_2607; /* std/text/parse/parse-error<2020> */
  kk_function_t resume = _self->resume; /* (bool) -> <local<2014>|2021> std/text/parse/parse-error<2020> */
  kk_drop_match(_self, {kk_std_text_parse__parse_error_dup(_y_2607);kk_function_dup(resume);}, {}, _ctx)
  kk_unit_t wild___4255 = kk_Unit;
  kk_unit_unbox(_b_4253);
  kk_std_text_parse__parse_error _x5895 = kk_std_text_parse__mlift2699_parse(_y_2607, resume, wild___4255, _ctx); /*std/text/parse/parse-error<2020>*/
  return kk_std_text_parse__parse_error_box(_x5895, _ctx);
}

kk_std_text_parse__parse_error kk_std_text_parse__mlift2700_parse(kk_ref_t input, kk_function_t resume, kk_std_core__sslice save, kk_std_text_parse__parse_error _y_2607, kk_context_t* _ctx) { /* forall<h,a,e> (input : local-var<h,sslice>, resume : (bool) -> <local<h>|e> parse-error<a>, save : sslice, parse-error<a>) -> <local<h>|e> parse-error<a> */ 
  if (kk_std_text_parse__is_ParseOk(_y_2607)) {
    struct kk_std_text_parse_ParseOk* _con5892 = kk_std_text_parse__as_ParseOk(_y_2607);
    kk_box_t x1 = _con5892->result;
    kk_std_core__sslice rest1 = _con5892->rest;
    kk_std_core__sslice_drop(save, _ctx);
    kk_function_drop(resume, _ctx);
    kk_ref_drop(input, _ctx);
    kk_reuse_t _ru_5203 = kk_reuse_null; /*reuse*/;
    if (kk_likely(kk_std_text_parse__parse_error_is_unique(_y_2607))) {
      _ru_5203 = (kk_std_text_parse__parse_error_reuse(_y_2607));
    }
    else {
      kk_std_core__sslice_dup(rest1);
      kk_box_dup(x1);
      kk_std_text_parse__parse_error_decref(_y_2607, _ctx);
    }
    return kk_std_text_parse__new_ParseOk(_ru_5203, x1, rest1, _ctx);
  }
  {
    kk_unit_t x_3019 = kk_Unit;
    kk_unit_t _brw_5010 = kk_Unit;
    kk_ref_set_borrow(input,(kk_std_core__sslice_box(save, _ctx)),kk_context());
    kk_ref_drop(input, _ctx);
    _brw_5010;
    if (kk_yielding(kk_context())) {
      kk_box_t _x5893 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift2700_parse_fun5894(_y_2607, resume, _ctx), _ctx); /*3926*/
      return kk_std_text_parse__parse_error_unbox(_x5893, _ctx);
    }
    {
      return kk_std_text_parse__mlift2699_parse(_y_2607, resume, x_3019, _ctx);
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift2701_parse_fun5898__t {
  struct kk_function_s _base;
  kk_ref_t input;
  kk_function_t resume;
  kk_std_core__sslice save;
};
static kk_box_t kk_std_text_parse__mlift2701_parse_fun5898(kk_function_t _fself, kk_box_t _b_4257, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift2701_parse_fun5898(kk_ref_t input, kk_function_t resume, kk_std_core__sslice save, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift2701_parse_fun5898__t* _self = kk_function_alloc_as(struct kk_std_text_parse__mlift2701_parse_fun5898__t, 4, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse__mlift2701_parse_fun5898, kk_context());
  _self->input = input;
  _self->resume = resume;
  _self->save = save;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse__mlift2701_parse_fun5898(kk_function_t _fself, kk_box_t _b_4257, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift2701_parse_fun5898__t* _self = kk_function_as(struct kk_std_text_parse__mlift2701_parse_fun5898__t*, _fself);
  kk_ref_t input = _self->input; /* local-var<2014,sslice> */
  kk_function_t resume = _self->resume; /* (bool) -> <local<2014>|2021> std/text/parse/parse-error<2020> */
  kk_std_core__sslice save = _self->save; /* sslice */
  kk_drop_match(_self, {kk_ref_dup(input);kk_function_dup(resume);kk_std_core__sslice_dup(save);}, {}, _ctx)
  kk_std_text_parse__parse_error _y_4259_2607 = kk_std_text_parse__parse_error_unbox(_b_4257, _ctx); /*std/text/parse/parse-error<2020>*/;
  kk_std_text_parse__parse_error _x5899 = kk_std_text_parse__mlift2700_parse(input, resume, save, _y_4259_2607, _ctx); /*std/text/parse/parse-error<2020>*/
  return kk_std_text_parse__parse_error_box(_x5899, _ctx);
}

kk_std_text_parse__parse_error kk_std_text_parse__mlift2701_parse(kk_ref_t input, kk_function_t resume, kk_std_core__sslice save, kk_context_t* _ctx) { /* forall<h,a,e> (input : local-var<h,sslice>, resume : (bool) -> <local<h>|e> parse-error<a>, save : sslice) -> <local<h>|e> parse-error<a> */ 
  kk_std_text_parse__parse_error x_3021;
  kk_function_t _x5896 = kk_function_dup(resume); /*(bool) -> <local<2014>|2021> std/text/parse/parse-error<2020>*/
  x_3021 = kk_function_call(kk_std_text_parse__parse_error, (kk_function_t, bool, kk_context_t*), _x5896, (_x5896, true, _ctx)); /*std/text/parse/parse-error<2020>*/
  if (kk_yielding(kk_context())) {
    kk_std_text_parse__parse_error_drop(x_3021, _ctx);
    kk_box_t _x5897 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift2701_parse_fun5898(input, resume, save, _ctx), _ctx); /*3926*/
    return kk_std_text_parse__parse_error_unbox(_x5897, _ctx);
  }
  {
    return kk_std_text_parse__mlift2700_parse(input, resume, save, x_3021, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift2703_parse_fun5903__t {
  struct kk_function_s _base;
  kk_box_t x;
};
static kk_box_t kk_std_text_parse__mlift2703_parse_fun5903(kk_function_t _fself, kk_box_t _b_4267, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift2703_parse_fun5903(kk_box_t x, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift2703_parse_fun5903__t* _self = kk_function_alloc_as(struct kk_std_text_parse__mlift2703_parse_fun5903__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse__mlift2703_parse_fun5903, kk_context());
  _self->x = x;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse__mlift2703_parse_fun5903(kk_function_t _fself, kk_box_t _b_4267, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift2703_parse_fun5903__t* _self = kk_function_as(struct kk_std_text_parse__mlift2703_parse_fun5903__t*, _fself);
  kk_box_t x = _self->x; /* 1983 */
  kk_drop_match(_self, {kk_box_dup(x);}, {}, _ctx)
  kk_unit_t wild__0_4269 = kk_Unit;
  kk_unit_unbox(_b_4267);
  kk_std_core_types__maybe _x5904 = kk_std_core_types__new_Just(x, _ctx); /*maybe<107>*/
  return kk_std_core_types__maybe_box(_x5904, _ctx);
}

kk_std_core_types__maybe kk_std_text_parse__mlift2703_parse(kk_ref_t input, kk_function_t pred, kk_std_core__sslice inp, kk_context_t* _ctx) { /* forall<a,h,e> (input : local-var<h,sslice>, pred : (sslice) -> total maybe<(a, sslice)>, inp : sslice) -> <local<h>|e> maybe<a> */ 
  kk_std_core_types__maybe _match_5005 = kk_function_call(kk_std_core_types__maybe, (kk_function_t, kk_std_core__sslice, kk_context_t*), pred, (pred, inp, _ctx)); /*maybe<(1983, sslice)>*/;
  if (kk_std_core_types__is_Just(_match_5005)) {
    kk_box_t _box_x4260 = _match_5005._cons.Just.value;
    kk_std_core_types__tuple2_ _pat9 = kk_std_core_types__tuple2__unbox(_box_x4260, NULL);
    kk_box_t x = _pat9.fst;
    kk_box_t _box_x4261 = _pat9.snd;
    kk_std_core__sslice cap = kk_std_core__sslice_unbox(_box_x4261, NULL);
    kk_std_core__sslice_dup(cap);
    kk_box_dup(x);
    kk_std_core_types__maybe_drop(_match_5005, _ctx);
    kk_unit_t x0_3023 = kk_Unit;
    kk_unit_t _brw_5007 = kk_Unit;
    kk_ref_set_borrow(input,(kk_std_core__sslice_box(cap, _ctx)),kk_context());
    kk_ref_drop(input, _ctx);
    _brw_5007;
    if (kk_yielding(kk_context())) {
      kk_box_t _x5902 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift2703_parse_fun5903(x, _ctx), _ctx); /*3926*/
      return kk_std_core_types__maybe_unbox(_x5902, _ctx);
    }
    {
      return kk_std_core_types__new_Just(x, _ctx);
    }
  }
  {
    kk_ref_drop(input, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_parse_fun5907__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_std_text_parse_parse_fun5907(kk_function_t _fself, kk_std_core_hnd__marker _b_4274, kk_std_core_hnd__ev _b_4275, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun5907(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun5907__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun5907__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_parse_fun5907, kk_context());
  _self->loc = loc;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse_parse_fun5907(kk_function_t _fself, kk_std_core_hnd__marker _b_4274, kk_std_core_hnd__ev _b_4275, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun5907__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun5907__t*, _fself);
  kk_ref_t loc = _self->loc; /* local-var<2014,sslice> */
  kk_drop_match(_self, {kk_ref_dup(loc);}, {}, _ctx)
  kk_std_core_hnd__ev_dropn(_b_4275, (KK_I32(3)), _ctx);
  return kk_ref_get(loc,kk_context());
}


// lift anonymous function
struct kk_std_text_parse_parse_fun5910__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_std_text_parse_parse_fun5910(kk_function_t _fself, kk_std_core_hnd__marker _b_4285, kk_std_core_hnd__ev _b_4286, kk_box_t _b_4287, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun5910(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun5910__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun5910__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_parse_fun5910, kk_context());
  _self->loc = loc;
  return &_self->_base;
}



// lift anonymous function
struct kk_std_text_parse_parse_fun5911__t {
  struct kk_function_s _base;
  kk_box_t _b_4287;
  kk_ref_t loc;
};
static kk_box_t kk_std_text_parse_parse_fun5911(kk_function_t _fself, kk_function_t _b_4282, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun5911(kk_box_t _b_4287, kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun5911__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun5911__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_parse_fun5911, kk_context());
  _self->_b_4287 = _b_4287;
  _self->loc = loc;
  return &_self->_base;
}



// lift anonymous function
struct kk_std_text_parse_parse_fun5915__t {
  struct kk_function_s _base;
  kk_box_t _b_4287;
};
static kk_box_t kk_std_text_parse_parse_fun5915(kk_function_t _fself, kk_box_t _b_4279, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun5915(kk_box_t _b_4287, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun5915__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun5915__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_parse_fun5915, kk_context());
  _self->_b_4287 = _b_4287;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse_parse_fun5915(kk_function_t _fself, kk_box_t _b_4279, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun5915__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun5915__t*, _fself);
  kk_box_t _b_4287 = _self->_b_4287; /* 51 */
  kk_drop_match(_self, {kk_box_dup(_b_4287);}, {}, _ctx)
  kk_std_text_parse__parse_error _x5916;
  kk_string_t _x5917 = kk_string_unbox(_b_4287); /*string*/
  kk_std_core__sslice _x5918 = kk_std_core__sslice_unbox(_b_4279, _ctx); /*sslice*/
  _x5916 = kk_std_text_parse__new_ParseError(kk_reuse_null, _x5917, _x5918, _ctx); /*std/text/parse/parse-error<39>*/
  return kk_std_text_parse__parse_error_box(_x5916, _ctx);
}
static kk_box_t kk_std_text_parse_parse_fun5911(kk_function_t _fself, kk_function_t _b_4282, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun5911__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun5911__t*, _fself);
  kk_box_t _b_4287 = _self->_b_4287; /* 51 */
  kk_ref_t loc = _self->loc; /* local-var<2014,sslice> */
  kk_drop_match(_self, {kk_box_dup(_b_4287);kk_ref_dup(loc);}, {}, _ctx)
  kk_function_drop(_b_4282, _ctx);
  kk_std_core__sslice x0_3031;
  kk_box_t _x5912 = kk_ref_get(loc,kk_context()); /*260*/
  x0_3031 = kk_std_core__sslice_unbox(_x5912, _ctx); /*sslice*/
  kk_std_text_parse__parse_error _x5913;
  if (kk_yielding(kk_context())) {
    kk_std_core__sslice_drop(x0_3031, _ctx);
    kk_box_t _x5914 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_parse_fun5915(_b_4287, _ctx), _ctx); /*3926*/
    _x5913 = kk_std_text_parse__parse_error_unbox(_x5914, _ctx); /*std/text/parse/parse-error<2020>*/
  }
  else {
    kk_string_t _x5919 = kk_string_unbox(_b_4287); /*string*/
    _x5913 = kk_std_text_parse__new_ParseError(kk_reuse_null, _x5919, x0_3031, _ctx); /*std/text/parse/parse-error<2020>*/
  }
  return kk_std_text_parse__parse_error_box(_x5913, _ctx);
}
static kk_box_t kk_std_text_parse_parse_fun5910(kk_function_t _fself, kk_std_core_hnd__marker _b_4285, kk_std_core_hnd__ev _b_4286, kk_box_t _b_4287, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun5910__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun5910__t*, _fself);
  kk_ref_t loc = _self->loc; /* local-var<2014,sslice> */
  kk_drop_match(_self, {kk_ref_dup(loc);}, {}, _ctx)
  kk_std_core_hnd__ev_dropn(_b_4286, (KK_I32(3)), _ctx);
  return kk_std_core_hnd_yield_to_final(_b_4285, kk_std_text_parse_new_parse_fun5911(_b_4287, loc, _ctx), _ctx);
}


// lift anonymous function
struct kk_std_text_parse_parse_fun5922__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_std_text_parse_parse_fun5922(kk_function_t _fself, kk_function_t _b_4293, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun5922(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun5922__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun5922__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_parse_fun5922, kk_context());
  _self->loc = loc;
  return &_self->_base;
}



// lift anonymous function
struct kk_std_text_parse_parse_fun5923__t {
  struct kk_function_s _base;
  kk_function_t _b_4293;
};
static kk_std_text_parse__parse_error kk_std_text_parse_parse_fun5923(kk_function_t _fself, bool _b_4294, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun5923(kk_function_t _b_4293, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun5923__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun5923__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_parse_fun5923, kk_context());
  _self->_b_4293 = _b_4293;
  return &_self->_base;
}

static kk_std_text_parse__parse_error kk_std_text_parse_parse_fun5923(kk_function_t _fself, bool _b_4294, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun5923__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun5923__t*, _fself);
  kk_function_t _b_4293 = _self->_b_4293; /* (7284) -> 7285 7287 */
  kk_drop_match(_self, {kk_function_dup(_b_4293);}, {}, _ctx)
  kk_box_t _x5924 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _b_4293, (_b_4293, kk_bool_box(_b_4294), _ctx)); /*7287*/
  return kk_std_text_parse__parse_error_unbox(_x5924, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_parse_fun5929__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_function_t resume_4341;
};
static kk_box_t kk_std_text_parse_parse_fun5929(kk_function_t _fself, kk_box_t _b_4291, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun5929(kk_ref_t loc, kk_function_t resume_4341, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun5929__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun5929__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_parse_fun5929, kk_context());
  _self->loc = loc;
  _self->resume_4341 = resume_4341;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse_parse_fun5929(kk_function_t _fself, kk_box_t _b_4291, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun5929__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun5929__t*, _fself);
  kk_ref_t loc = _self->loc; /* local-var<2014,sslice> */
  kk_function_t resume_4341 = _self->resume_4341; /* (bool) -> <local<2014>|2021> std/text/parse/parse-error<2020> */
  kk_drop_match(_self, {kk_ref_dup(loc);kk_function_dup(resume_4341);}, {}, _ctx)
  kk_std_text_parse__parse_error _x5930;
  kk_std_core__sslice _x5931 = kk_std_core__sslice_unbox(_b_4291, _ctx); /*sslice*/
  _x5930 = kk_std_text_parse__mlift2701_parse(loc, resume_4341, _x5931, _ctx); /*std/text/parse/parse-error<2020>*/
  return kk_std_text_parse__parse_error_box(_x5930, _ctx);
}
static kk_box_t kk_std_text_parse_parse_fun5922(kk_function_t _fself, kk_function_t _b_4293, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun5922__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun5922__t*, _fself);
  kk_ref_t loc = _self->loc; /* local-var<2014,sslice> */
  kk_drop_match(_self, {kk_ref_dup(loc);}, {}, _ctx)
  kk_function_t resume_4341 = kk_std_text_parse_new_parse_fun5923(_b_4293, _ctx); /*(bool) -> <local<2014>|2021> std/text/parse/parse-error<2020>*/;
  kk_std_core__sslice x1_3035;
  kk_box_t _x5925;
  kk_ref_t _x5926 = kk_ref_dup(loc); /*local-var<2014,sslice>*/
  _x5925 = kk_ref_get(_x5926,kk_context()); /*260*/
  x1_3035 = kk_std_core__sslice_unbox(_x5925, _ctx); /*sslice*/
  kk_std_text_parse__parse_error _x5927;
  if (kk_yielding(kk_context())) {
    kk_std_core__sslice_drop(x1_3035, _ctx);
    kk_box_t _x5928 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_parse_fun5929(loc, resume_4341, _ctx), _ctx); /*3926*/
    _x5927 = kk_std_text_parse__parse_error_unbox(_x5928, _ctx); /*std/text/parse/parse-error<2020>*/
  }
  else {
    _x5927 = kk_std_text_parse__mlift2701_parse(loc, resume_4341, x1_3035, _ctx); /*std/text/parse/parse-error<2020>*/
  }
  return kk_std_text_parse__parse_error_box(_x5927, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_parse_fun5934__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_std_text_parse_parse_fun5934(kk_function_t _fself, kk_std_core_hnd__marker _b_4300, kk_std_core_hnd__ev _b_4301, kk_box_t _b_4302, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun5934(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun5934__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun5934__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_parse_fun5934, kk_context());
  _self->loc = loc;
  return &_self->_base;
}



// lift anonymous function
struct kk_std_text_parse_parse_fun5935__t {
  struct kk_function_s _base;
  kk_box_t _b_4302;
};
static kk_std_core_types__maybe kk_std_text_parse_parse_fun5935(kk_function_t _fself, kk_std_core__sslice _b_4305, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun5935(kk_box_t _b_4302, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun5935__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun5935__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_parse_fun5935, kk_context());
  _self->_b_4302 = _b_4302;
  return &_self->_base;
}

static kk_std_core_types__maybe kk_std_text_parse_parse_fun5935(kk_function_t _fself, kk_std_core__sslice _b_4305, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun5935__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun5935__t*, _fself);
  kk_box_t _b_4302 = _self->_b_4302; /* 51 */
  kk_drop_match(_self, {kk_box_dup(_b_4302);}, {}, _ctx)
  kk_box_t _x5936;
  kk_function_t _x5937 = kk_function_unbox(_b_4302); /*(4303) -> total 4304*/
  _x5936 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _x5937, (_x5937, kk_std_core__sslice_box(_b_4305, _ctx), _ctx)); /*4304*/
  return kk_std_core_types__maybe_unbox(_x5936, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_parse_fun5942__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_function_t x2_4344;
};
static kk_box_t kk_std_text_parse_parse_fun5942(kk_function_t _fself, kk_box_t _b_4298, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun5942(kk_ref_t loc, kk_function_t x2_4344, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun5942__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun5942__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_parse_fun5942, kk_context());
  _self->loc = loc;
  _self->x2_4344 = x2_4344;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse_parse_fun5942(kk_function_t _fself, kk_box_t _b_4298, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun5942__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun5942__t*, _fself);
  kk_ref_t loc = _self->loc; /* local-var<2014,sslice> */
  kk_function_t x2_4344 = _self->x2_4344; /* (sslice) -> total maybe<(1983, sslice)> */
  kk_drop_match(_self, {kk_ref_dup(loc);kk_function_dup(x2_4344);}, {}, _ctx)
  kk_std_core_types__maybe _x5943;
  kk_std_core__sslice _x5944 = kk_std_core__sslice_unbox(_b_4298, _ctx); /*sslice*/
  _x5943 = kk_std_text_parse__mlift2703_parse(loc, x2_4344, _x5944, _ctx); /*maybe<1983>*/
  return kk_std_core_types__maybe_box(_x5943, _ctx);
}
static kk_box_t kk_std_text_parse_parse_fun5934(kk_function_t _fself, kk_std_core_hnd__marker _b_4300, kk_std_core_hnd__ev _b_4301, kk_box_t _b_4302, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun5934__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun5934__t*, _fself);
  kk_ref_t loc = _self->loc; /* local-var<2014,sslice> */
  kk_drop_match(_self, {kk_ref_dup(loc);}, {}, _ctx)
  kk_std_core_hnd__ev_dropn(_b_4301, (KK_I32(3)), _ctx);
  kk_function_t x2_4344 = kk_std_text_parse_new_parse_fun5935(_b_4302, _ctx); /*(sslice) -> total maybe<(1983, sslice)>*/;
  kk_std_core__sslice x3_3038;
  kk_box_t _x5938;
  kk_ref_t _x5939 = kk_ref_dup(loc); /*local-var<2014,sslice>*/
  _x5938 = kk_ref_get(_x5939,kk_context()); /*260*/
  x3_3038 = kk_std_core__sslice_unbox(_x5938, _ctx); /*sslice*/
  kk_std_core_types__maybe _x5940;
  if (kk_yielding(kk_context())) {
    kk_std_core__sslice_drop(x3_3038, _ctx);
    kk_box_t _x5941 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_parse_fun5942(loc, x2_4344, _ctx), _ctx); /*3926*/
    _x5940 = kk_std_core_types__maybe_unbox(_x5941, _ctx); /*maybe<1983>*/
  }
  else {
    _x5940 = kk_std_text_parse__mlift2703_parse(loc, x2_4344, x3_3038, _ctx); /*maybe<1983>*/
  }
  return kk_std_core_types__maybe_box(_x5940, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_parse_fun5947__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_std_text_parse_parse_fun5947(kk_function_t _fself, kk_box_t _b_4314, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun5947(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun5947__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun5947__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_parse_fun5947, kk_context());
  _self->loc = loc;
  return &_self->_base;
}



// lift anonymous function
struct kk_std_text_parse_parse_fun5951__t {
  struct kk_function_s _base;
  kk_box_t _b_4314;
};
static kk_box_t kk_std_text_parse_parse_fun5951(kk_function_t _fself, kk_box_t _b_4309, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun5951(kk_box_t _b_4314, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun5951__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun5951__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_parse_fun5951, kk_context());
  _self->_b_4314 = _b_4314;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse_parse_fun5951(kk_function_t _fself, kk_box_t _b_4309, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun5951__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun5951__t*, _fself);
  kk_box_t _b_4314 = _self->_b_4314; /* 355 */
  kk_drop_match(_self, {kk_box_dup(_b_4314);}, {}, _ctx)
  kk_std_text_parse__parse_error _x5952;
  kk_std_core__sslice _x5953 = kk_std_core__sslice_unbox(_b_4309, _ctx); /*sslice*/
  _x5952 = kk_std_text_parse__new_ParseOk(kk_reuse_null, _b_4314, _x5953, _ctx); /*std/text/parse/parse-error<39>*/
  return kk_std_text_parse__parse_error_box(_x5952, _ctx);
}
static kk_box_t kk_std_text_parse_parse_fun5947(kk_function_t _fself, kk_box_t _b_4314, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun5947__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun5947__t*, _fself);
  kk_ref_t loc = _self->loc; /* local-var<2014,sslice> */
  kk_drop_match(_self, {kk_ref_dup(loc);}, {}, _ctx)
  kk_std_core__sslice x4_3040;
  kk_box_t _x5948 = kk_ref_get(loc,kk_context()); /*260*/
  x4_3040 = kk_std_core__sslice_unbox(_x5948, _ctx); /*sslice*/
  kk_std_text_parse__parse_error _x5949;
  if (kk_yielding(kk_context())) {
    kk_std_core__sslice_drop(x4_3040, _ctx);
    kk_box_t _x5950 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_parse_fun5951(_b_4314, _ctx), _ctx); /*3926*/
    _x5949 = kk_std_text_parse__parse_error_unbox(_x5950, _ctx); /*std/text/parse/parse-error<2020>*/
  }
  else {
    _x5949 = kk_std_text_parse__new_ParseOk(kk_reuse_null, _b_4314, x4_3040, _ctx); /*std/text/parse/parse-error<2020>*/
  }
  return kk_std_text_parse__parse_error_box(_x5949, _ctx);
}

kk_std_text_parse__parse_error kk_std_text_parse_parse(kk_std_core__sslice input0, kk_function_t p, kk_context_t* _ctx) { /* forall<a,e> (input0 : sslice, p : () -> <parse|e> a) -> e parse-error<a> */ 
  kk_ref_t loc = kk_ref_alloc((kk_std_core__sslice_box(input0, _ctx)),kk_context()); /*local-var<2014,sslice>*/;
  int32_t _b_4315_4310 = (KK_I32(3)); /*int32*/;
  kk_std_text_parse__hnd_parse _b_4316_4311;
  kk_std_core_hnd__clause0 _x5905;
  kk_function_t _x5906;
  kk_ref_dup(loc);
  _x5906 = kk_std_text_parse_new_parse_fun5907(loc, _ctx); /*(std/core/hnd/marker<39,40>, std/core/hnd/ev<38>) -> 39 260*/
  _x5905 = kk_std_core_hnd__new_Clause0(_x5906, _ctx); /*std/core/hnd/clause0<37,38,39,40>*/
  kk_std_core_hnd__clause1 _x5908;
  kk_function_t _x5909;
  kk_ref_dup(loc);
  _x5909 = kk_std_text_parse_new_parse_fun5910(loc, _ctx); /*(std/core/hnd/marker<54,55>, std/core/hnd/ev<53>, 51) -> 54 3990*/
  _x5908 = kk_std_core_hnd__new_Clause1(_x5909, _ctx); /*std/core/hnd/clause1<51,52,53,54,55>*/
  kk_std_core_hnd__clause0 _x5920;
  kk_function_t _x5921;
  kk_ref_dup(loc);
  _x5921 = kk_std_text_parse_new_parse_fun5922(loc, _ctx); /*((7284) -> 7285 7287) -> 7285 7287*/
  _x5920 = kk_std_core_hnd_clause_control0(_x5921, _ctx); /*std/core/hnd/clause0<7284,7286,7285,7287>*/
  kk_std_core_hnd__clause1 _x5932;
  kk_function_t _x5933;
  kk_ref_dup(loc);
  _x5933 = kk_std_text_parse_new_parse_fun5934(loc, _ctx); /*(std/core/hnd/marker<54,55>, std/core/hnd/ev<53>, 51) -> 54 52*/
  _x5932 = kk_std_core_hnd__new_Clause1(_x5933, _ctx); /*std/core/hnd/clause1<51,52,53,54,55>*/
  _b_4316_4311 = kk_std_text_parse__new_Hnd_parse(kk_reuse_null, _x5905, _x5908, _x5920, _x5932, _ctx); /*std/text/parse/.hnd-parse<<local<2014>|2021>,std/text/parse/parse-error<2020>>*/
  kk_std_text_parse__parse_error res;
  kk_box_t _x5945;
  kk_function_t _x5946;
  kk_ref_dup(loc);
  _x5946 = kk_std_text_parse_new_parse_fun5947(loc, _ctx); /*(355) -> 356 357*/
  _x5945 = kk_std_text_parse__handle_parse(_b_4315_4310, _b_4316_4311, _x5946, p, _ctx); /*357*/
  res = kk_std_text_parse__parse_error_unbox(_x5945, _ctx); /*std/text/parse/parse-error<2020>*/
  kk_box_t _x5954 = kk_std_core_hnd_prompt_local_var(loc, kk_std_text_parse__parse_error_box(res, _ctx), _ctx); /*10459*/
  return kk_std_text_parse__parse_error_unbox(_x5954, _ctx);
}
 
// monadic lift

kk_unit_t kk_std_text_parse__mlift2705_parse_eof(kk_std_core_types__maybe _y_2620, kk_context_t* _ctx) { /* (maybe<()>) -> parse () */ 
  if (kk_std_core_types__is_Nothing(_y_2620)) {
    kk_std_core_hnd__ev ev_3045;
    kk_ssize_t _x5955 = (KK_IZ(0)); /*ssize_t*/
    ev_3045 = kk_evv_at(_x5955,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_box_t _x5956;
    {
      struct kk_std_core_hnd_Ev* _con5957 = kk_std_core_hnd__as_Ev(ev_3045);
      kk_std_core_hnd__marker m0 = _con5957->marker;
      kk_box_t _box_x4349 = _con5957->hnd;
      kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x4349, NULL);
      kk_std_text_parse__hnd_parse_dup(h);
      kk_std_core_hnd__clause1 _match_4999;
      kk_std_core_hnd__clause1 _brw_5000 = kk_std_text_parse__select_fail(h, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
      kk_std_text_parse__hnd_parse_drop(h, _ctx);
      _match_4999 = _brw_5000; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
      {
        kk_function_t _fun_unbox_x4353 = _match_4999.clause;
        kk_box_t _x5959;
        kk_string_t _x5960;
        kk_define_string_literal(, _s5961, 22, "expecting end-of-input")
        _x5960 = kk_string_dup(_s5961); /*string*/
        _x5959 = kk_string_box(_x5960); /*51*/
        _x5956 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x4353, (_fun_unbox_x4353, m0, ev_3045, _x5959, _ctx)); /*52*/
      }
    }
    kk_unit_unbox(_x5956); return kk_Unit;
  }
  {
    kk_box_t _box_x4357 = _y_2620._cons.Just.value;
    kk_unit_t _pat30 = kk_unit_unbox(_box_x4357);
    kk_std_core_types__maybe_drop(_y_2620, _ctx);
    kk_Unit; return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift2707_parse_eof_fun5968__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift2707_parse_eof_fun5968(kk_function_t _fself, kk_box_t _b_4371, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift2707_parse_eof_fun5968(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift2707_parse_eof_fun5968, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse__mlift2707_parse_eof_fun5968(kk_function_t _fself, kk_box_t _b_4371, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool b_17030;
  kk_ssize_t _x5969;
  kk_std_core__sslice _match_4997;
  kk_box_t _x5970 = kk_box_dup(_b_4371); /*4369*/
  _match_4997 = kk_std_core__sslice_unbox(_x5970, _ctx); /*sslice*/
  {
    kk_ssize_t _x = _match_4997.len;
    kk_std_core__sslice_drop(_match_4997, _ctx);
    _x5969 = _x; /*ssize_t*/
  }
  b_17030 = (_x5969 > 0); /*bool*/
  kk_std_core_types__maybe _x5971;
  if (b_17030) {
    kk_box_drop(_b_4371, _ctx);
    _x5971 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/
  }
  else {
    kk_box_t _x5972;
    kk_std_core_types__tuple2_ _x5973 = kk_std_core_types__new_dash__lp__comma__rp_(kk_unit_box(kk_Unit), _b_4371, _ctx); /*(6, 7)*/
    _x5972 = kk_std_core_types__tuple2__box(_x5973, _ctx); /*107*/
    _x5971 = kk_std_core_types__new_Just(_x5972, _ctx); /*forall<a> maybe<a>*/
  }
  return kk_std_core_types__maybe_box(_x5971, _ctx);
}


// lift anonymous function
struct kk_std_text_parse__mlift2707_parse_eof_fun5975__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift2707_parse_eof_fun5975(kk_function_t _fself, kk_box_t _b_4380, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift2707_parse_eof_fun5975(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift2707_parse_eof_fun5975, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse__mlift2707_parse_eof_fun5975(kk_function_t _fself, kk_box_t _b_4380, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x5976 = kk_Unit;
  kk_std_core_types__maybe _x5977 = kk_std_core_types__maybe_unbox(_b_4380, _ctx); /*maybe<()>*/
  kk_std_text_parse__mlift2705_parse_eof(_x5977, _ctx);
  return kk_unit_box(_x5976);
}


// lift anonymous function
struct kk_std_text_parse__mlift2707_parse_eof_fun5979__t {
  struct kk_function_s _base;
  kk_ssize_t i_3050;
};
static kk_box_t kk_std_text_parse__mlift2707_parse_eof_fun5979(kk_function_t _fself, kk_function_t _b_4387, kk_box_t _b_4388, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift2707_parse_eof_fun5979(kk_ssize_t i_3050, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift2707_parse_eof_fun5979__t* _self = kk_function_alloc_as(struct kk_std_text_parse__mlift2707_parse_eof_fun5979__t, 1, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse__mlift2707_parse_eof_fun5979, kk_context());
  _self->i_3050 = i_3050;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse__mlift2707_parse_eof_fun5979(kk_function_t _fself, kk_function_t _b_4387, kk_box_t _b_4388, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift2707_parse_eof_fun5979__t* _self = kk_function_as(struct kk_std_text_parse__mlift2707_parse_eof_fun5979__t*, _fself);
  kk_ssize_t i_3050 = _self->i_3050; /* std/core/hnd/ev-index */
  kk_drop_match(_self, {;}, {}, _ctx)
  return kk_std_core_hnd_open_at1(i_3050, _b_4387, _b_4388, _ctx);
}


// lift anonymous function
struct kk_std_text_parse__mlift2707_parse_eof_fun5980__t {
  struct kk_function_s _base;
  kk_box_t x;
};
static kk_box_t kk_std_text_parse__mlift2707_parse_eof_fun5980(kk_function_t _fself, kk_box_t _b_4397, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift2707_parse_eof_fun5980(kk_box_t x, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift2707_parse_eof_fun5980__t* _self = kk_function_alloc_as(struct kk_std_text_parse__mlift2707_parse_eof_fun5980__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse__mlift2707_parse_eof_fun5980, kk_context());
  _self->x = x;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse__mlift2707_parse_eof_fun5980(kk_function_t _fself, kk_box_t _b_4397, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift2707_parse_eof_fun5980__t* _self = kk_function_as(struct kk_std_text_parse__mlift2707_parse_eof_fun5980__t*, _fself);
  kk_box_t x = _self->x; /* 2045 */
  kk_drop_match(_self, {kk_box_dup(x);}, {}, _ctx)
  kk_box_drop(_b_4397, _ctx);
  return x;
}

kk_box_t kk_std_text_parse__mlift2707_parse_eof(kk_box_t x, kk_context_t* _ctx) { /* forall<a,e> (x : a) -> <parse|e> a */ 
  kk_ssize_t i_3050;
  kk_std_core_hnd__htag _x5963 = kk_std_core_hnd__htag_dup(kk_std_text_parse__tag_parse); /*std/core/hnd/htag<std/text/parse/.hnd-parse>*/
  i_3050 = kk_std_core_hnd__evv_index(_x5963, _ctx); /*std/core/hnd/ev-index*/
  kk_evv_t w = kk_evv_swap_create1(i_3050,kk_context()); /*std/core/hnd/evv<<std/text/parse/parse|2046>>*/;
  kk_std_core_hnd__ev ev_3054;
  kk_ssize_t _x5964 = (KK_IZ(0)); /*ssize_t*/
  ev_3054 = kk_evv_at(_x5964,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
  kk_std_core_types__maybe x1_3052;
  kk_box_t _x5965;
  {
    struct kk_std_core_hnd_Ev* _con5966 = kk_std_core_hnd__as_Ev(ev_3054);
    kk_std_core_hnd__marker m0 = _con5966->marker;
    kk_box_t _box_x4358 = _con5966->hnd;
    kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x4358, NULL);
    kk_std_text_parse__hnd_parse_dup(h);
    kk_std_core_hnd__clause1 _match_4996;
    kk_std_core_hnd__clause1 _brw_4998 = kk_std_text_parse__select_satisfy(h, _ctx); /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/;
    kk_std_text_parse__hnd_parse_drop(h, _ctx);
    _match_4996 = _brw_4998; /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/
    {
      kk_function_t _fun_unbox_x4365 = _match_4996.clause;
      _x5965 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x4365, (_fun_unbox_x4365, m0, ev_3054, kk_function_box(kk_std_text_parse__new_mlift2707_parse_eof_fun5968(_ctx)), _ctx)); /*52*/
    }
  }
  x1_3052 = kk_std_core_types__maybe_unbox(_x5965, _ctx); /*maybe<()>*/
  kk_unit_t y = kk_Unit;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x1_3052, _ctx);
    kk_box_t _x5974 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift2707_parse_eof_fun5975(_ctx), _ctx); /*3926*/
    kk_unit_unbox(_x5974);
  }
  else {
    kk_std_text_parse__mlift2705_parse_eof(x1_3052, _ctx);
  }
  kk_unit_t __ = kk_Unit;
  kk_evv_set(w,kk_context());
  kk_unit_t x0_3048 = kk_Unit;
  if (kk_yielding(kk_context())) {
    kk_box_t _x5978 = kk_std_core_hnd_yield_cont(kk_std_text_parse__new_mlift2707_parse_eof_fun5979(i_3050, _ctx), _ctx); /*3949*/
    kk_unit_unbox(_x5978);
  }
  else {
    y;
  }
  if (kk_yielding(kk_context())) {
    return kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift2707_parse_eof_fun5980(x, _ctx), _ctx);
  }
  {
    return x;
  }
}


// lift anonymous function
struct kk_std_text_parse_parse_eof_fun5981__t {
  struct kk_function_s _base;
  kk_function_t p;
};
static kk_box_t kk_std_text_parse_parse_eof_fun5981(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_eof_fun5981(kk_function_t p, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_eof_fun5981__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_eof_fun5981__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_parse_eof_fun5981, kk_context());
  _self->p = p;
  return &_self->_base;
}



// lift anonymous function
struct kk_std_text_parse_parse_eof_fun5983__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_parse_eof_fun5983(kk_function_t _fself, kk_box_t _x15982, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_eof_fun5983(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_parse_eof_fun5983, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_parse_eof_fun5983(kk_function_t _fself, kk_box_t _x15982, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_text_parse__mlift2707_parse_eof(_x15982, _ctx);
}
static kk_box_t kk_std_text_parse_parse_eof_fun5981(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_eof_fun5981__t* _self = kk_function_as(struct kk_std_text_parse_parse_eof_fun5981__t*, _fself);
  kk_function_t p = _self->p; /* () -> <std/text/parse/parse|2046> 2045 */
  kk_drop_match(_self, {kk_function_dup(p);}, {}, _ctx)
  kk_box_t x_3059 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p, (p, _ctx)); /*2045*/;
  if (kk_yielding(kk_context())) {
    kk_box_drop(x_3059, _ctx);
    return kk_std_core_hnd_yield_extend(kk_std_text_parse_new_parse_eof_fun5983(_ctx), _ctx);
  }
  {
    return kk_std_text_parse__mlift2707_parse_eof(x_3059, _ctx);
  }
}

kk_std_text_parse__parse_error kk_std_text_parse_parse_eof(kk_std_core__sslice input, kk_function_t p, kk_context_t* _ctx) { /* forall<a,e> (input : sslice, p : () -> <parse|e> a) -> e parse-error<a> */ 
  return kk_std_text_parse_parse(input, kk_std_text_parse_new_parse_eof_fun5981(p, _ctx), _ctx);
}
 
// lifted local: pnat, .spec.2506
// specialized: std/text/parse/next-while0, on parameters pred, using:
// pred = std/core/is-digit

kk_std_core_types__tuple2_ kk_std_text_parse__lift2513_pnat(kk_std_core__sslice slice0, kk_std_core__list acc, kk_context_t* _ctx) { /* (slice0 : sslice, acc : list<char>) -> (list<char>, sslice) */ 
  kk__tailcall: ;
  kk_std_core_types__maybe _match_4991;
  kk_std_core__sslice _x5984 = kk_std_core__sslice_dup(slice0); /*sslice*/
  _match_4991 = kk_std_core_next(_x5984, _ctx); /*maybe<(char, sslice)>*/
  if (kk_std_core_types__is_Just(_match_4991)) {
    kk_box_t _box_x4401 = _match_4991._cons.Just.value;
    kk_std_core_types__tuple2_ _pat01 = kk_std_core_types__tuple2__unbox(_box_x4401, NULL);
    if (kk_std_core_types__is_dash__lp__comma__rp_(_pat01)) {
      kk_box_t _box_x4402 = _pat01.fst;
      kk_box_t _box_x4403 = _pat01.snd;
      kk_char_t c = kk_char_unbox(_box_x4402, NULL);
      kk_std_core__sslice rest0 = kk_std_core__sslice_unbox(_box_x4403, NULL);
      if (kk_std_core_is_digit(c, _ctx)) {
        kk_std_core__sslice_drop(slice0, _ctx);
        kk_std_core__sslice_dup(rest0);
        kk_std_core_types__maybe_drop(_match_4991, _ctx);
        { // tailcall
          kk_std_core__list _x5988 = kk_std_core__new_Cons(kk_reuse_null, kk_char_box(c, _ctx), acc, _ctx); /*list<61>*/
          slice0 = rest0;
          acc = _x5988;
          goto kk__tailcall;
        }
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_4991, _ctx);
    kk_std_core__list _b_4410_4406 = kk_std_core__lift17288_reverse(kk_std_core__new_Nil(_ctx), acc, _ctx); /*list<char>*/;
    return kk_std_core_types__new_dash__lp__comma__rp_(kk_std_core__list_box(_b_4410_4406, _ctx), kk_std_core__sslice_box(slice0, _ctx), _ctx);
  }
}
 
// monadic lift

kk_integer_t kk_std_text_parse__mlift2708_pnat(kk_std_core__list _c_2627, kk_context_t* _ctx) { /* (list<char>) -> int */ 
  kk_string_t _x1_2668 = kk_std_core_string_2(_c_2627, _ctx); /*string*/;
  kk_evv_t w = kk_evv_swap_create0(kk_context()); /*std/core/hnd/evv<std/text/parse/parse>*/;
  kk_std_core_types__optional default0 = kk_std_core_types__new_Optional(kk_integer_box(kk_integer_from_small(0)), _ctx); /*optional<int>*/;
  kk_integer_t x;
  bool _match_4989;
  kk_string_t _x5989 = kk_string_dup(_x1_2668); /*string*/
  kk_string_t _x5990 = kk_string_empty(); /*string*/
  _match_4989 = kk_string_is_eq(_x5989,_x5990,kk_context()); /*bool*/
  if (_match_4989) {
    kk_string_drop(_x1_2668, _ctx);
    if (kk_std_core_types__is_Optional(default0)) {
      kk_box_t _box_x4414 = default0._cons.Optional.value;
      kk_integer_t _default_15556 = kk_integer_unbox(_box_x4414);
      x = _default_15556; /*int*/
    }
    else {
      x = kk_integer_from_small(0); /*int*/
    }
  }
  else {
    kk_std_core_types__maybe m_17212;
    kk_string_t _x5993;
    kk_string_t _x5994 = kk_string_trim_left(_x1_2668,kk_context()); /*string*/
    _x5993 = kk_string_trim_right(_x5994,kk_context()); /*string*/
    bool _x5995;
    kk_std_core_types__optional _x5996 = kk_std_core_types__new_None(_ctx); /*forall<a> optional<a>*/
    if (kk_std_core_types__is_Optional(_x5996)) {
      kk_box_t _box_x4415 = _x5996._cons.Optional.value;
      bool _hex_15560 = kk_bool_unbox(_box_x4415);
      _x5995 = _hex_15560; /*bool*/
    }
    else {
      _x5995 = false; /*bool*/
    }
    m_17212 = kk_std_core_xparse_int(_x5993, _x5995, _ctx); /*maybe<int>*/
    if (kk_std_core_types__is_Nothing(m_17212)) {
      if (kk_std_core_types__is_Optional(default0)) {
        kk_box_t _box_x4416 = default0._cons.Optional.value;
        kk_integer_t _default_155560 = kk_integer_unbox(_box_x4416);
        x = _default_155560; /*int*/
      }
      else {
        x = kk_integer_from_small(0); /*int*/
      }
    }
    else {
      kk_box_t _box_x4417 = m_17212._cons.Just.value;
      kk_integer_t x0 = kk_integer_unbox(_box_x4417);
      kk_std_core_types__optional_drop(default0, _ctx);
      x = x0; /*int*/
    }
  }
  kk_unit_t keep = kk_Unit;
  kk_evv_set(w,kk_context());
  return x;
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift2709_pnat_fun6009__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift2709_pnat_fun6009(kk_function_t _fself, kk_box_t _b_4428, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift2709_pnat_fun6009(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift2709_pnat_fun6009, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse__mlift2709_pnat_fun6009(kk_function_t _fself, kk_box_t _b_4428, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x6010;
  kk_std_core__list _x6011 = kk_std_core__list_unbox(_b_4428, _ctx); /*list<char>*/
  _x6010 = kk_std_text_parse__mlift2708_pnat(_x6011, _ctx); /*int*/
  return kk_integer_box(_x6010);
}

kk_integer_t kk_std_text_parse__mlift2709_pnat(kk_std_core_types__maybe _y_2625, kk_context_t* _ctx) { /* (maybe<list<char>>) -> parse int */ 
  kk_std_core__list x_3065;
  if (kk_std_core_types__is_Nothing(_y_2625)) {
    kk_std_core_hnd__ev ev_3067;
    kk_ssize_t _x6000 = (KK_IZ(0)); /*ssize_t*/
    ev_3067 = kk_evv_at(_x6000,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_box_t _x6001;
    {
      struct kk_std_core_hnd_Ev* _con6002 = kk_std_core_hnd__as_Ev(ev_3067);
      kk_std_core_hnd__marker m0 = _con6002->marker;
      kk_box_t _box_x4418 = _con6002->hnd;
      kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x4418, NULL);
      kk_std_text_parse__hnd_parse_dup(h);
      kk_std_core_hnd__clause1 _match_4987;
      kk_std_core_hnd__clause1 _brw_4988 = kk_std_text_parse__select_fail(h, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
      kk_std_text_parse__hnd_parse_drop(h, _ctx);
      _match_4987 = _brw_4988; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
      {
        kk_function_t _fun_unbox_x4422 = _match_4987.clause;
        kk_box_t _x6004;
        kk_string_t _x6005;
        kk_define_string_literal(, _s6006, 5, "digit")
        _x6005 = kk_string_dup(_s6006); /*string*/
        _x6004 = kk_string_box(_x6005); /*51*/
        _x6001 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x4422, (_fun_unbox_x4422, m0, ev_3067, _x6004, _ctx)); /*52*/
      }
    }
    x_3065 = kk_std_core__list_unbox(_x6001, _ctx); /*list<char>*/
  }
  else {
    kk_box_t _box_x4426 = _y_2625._cons.Just.value;
    kk_std_core__list x00 = kk_std_core__list_unbox(_box_x4426, NULL);
    x_3065 = x00; /*list<char>*/
  }
  if (kk_yielding(kk_context())) {
    kk_std_core__list_drop(x_3065, _ctx);
    kk_box_t _x6008 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift2709_pnat_fun6009(_ctx), _ctx); /*3926*/
    return kk_integer_unbox(_x6008);
  }
  {
    return kk_std_text_parse__mlift2708_pnat(x_3065, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_pnat_fun6016__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_pnat_fun6016(kk_function_t _fself, kk_box_t _b_4443, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pnat_fun6016(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_pnat_fun6016, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_pnat_fun6016(kk_function_t _fself, kk_box_t _b_4443, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x6017;
  kk_std_core_types__tuple2_ _match_4984;
  kk_std_core__sslice _x6018 = kk_std_core__sslice_unbox(_b_4443, _ctx); /*sslice*/
  _match_4984 = kk_std_text_parse__lift2513_pnat(_x6018, kk_std_core__new_Nil(_ctx), _ctx); /*(list<char>, sslice)*/
  {
    kk_box_t _box_x4444 = _match_4984.fst;
    kk_box_t _box_x4445 = _match_4984.snd;
    kk_std_core__list _pat02 = kk_std_core__list_unbox(_box_x4444, NULL);
    kk_std_core__sslice _pat110 = kk_std_core__sslice_unbox(_box_x4445, NULL);
    if (kk_std_core__is_Nil(_pat02)) {
      kk_std_core_types__tuple2__drop(_match_4984, _ctx);
      _x6017 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/
      goto _match6019;
    }
  }
  {
    kk_box_t _box_x4446 = _match_4984.fst;
    kk_box_t _box_x4447 = _match_4984.snd;
    kk_std_core__list xs = kk_std_core__list_unbox(_box_x4446, NULL);
    kk_std_core__sslice rest00 = kk_std_core__sslice_unbox(_box_x4447, NULL);
    kk_std_core__sslice_dup(rest00);
    kk_std_core__list_dup(xs);
    kk_std_core_types__tuple2__drop(_match_4984, _ctx);
    kk_box_t _x6024;
    kk_std_core_types__tuple2_ _x6025 = kk_std_core_types__new_dash__lp__comma__rp_(kk_std_core__list_box(xs, _ctx), kk_std_core__sslice_box(rest00, _ctx), _ctx); /*(6, 7)*/
    _x6024 = kk_std_core_types__tuple2__box(_x6025, _ctx); /*107*/
    _x6017 = kk_std_core_types__new_Just(_x6024, _ctx); /*forall<a> maybe<a>*/
  }
  _match6019: ;
  return kk_std_core_types__maybe_box(_x6017, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_pnat_fun6027__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_pnat_fun6027(kk_function_t _fself, kk_box_t _b_4456, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pnat_fun6027(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_pnat_fun6027, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_pnat_fun6027(kk_function_t _fself, kk_box_t _b_4456, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x6028;
  kk_std_core_types__maybe _x6029 = kk_std_core_types__maybe_unbox(_b_4456, _ctx); /*maybe<list<char>>*/
  _x6028 = kk_std_text_parse__mlift2709_pnat(_x6029, _ctx); /*int*/
  return kk_integer_box(_x6028);
}


// lift anonymous function
struct kk_std_text_parse_pnat_fun6039__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_pnat_fun6039(kk_function_t _fself, kk_box_t _b_4467, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pnat_fun6039(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_pnat_fun6039, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_pnat_fun6039(kk_function_t _fself, kk_box_t _b_4467, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x6040;
  kk_std_core__list _x6041 = kk_std_core__list_unbox(_b_4467, _ctx); /*list<char>*/
  _x6040 = kk_std_text_parse__mlift2708_pnat(_x6041, _ctx); /*int*/
  return kk_integer_box(_x6040);
}

kk_integer_t kk_std_text_parse_pnat(kk_context_t* _ctx) { /* () -> parse int */ 
  kk_std_core_hnd__ev ev_3073;
  kk_ssize_t _x6012 = (KK_IZ(0)); /*ssize_t*/
  ev_3073 = kk_evv_at(_x6012,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
  kk_std_core_types__maybe x_3070;
  kk_box_t _x6013;
  {
    struct kk_std_core_hnd_Ev* _con6014 = kk_std_core_hnd__as_Ev(ev_3073);
    kk_std_core_hnd__marker m0 = _con6014->marker;
    kk_box_t _box_x4430 = _con6014->hnd;
    kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x4430, NULL);
    kk_std_text_parse__hnd_parse_dup(h);
    kk_std_core_hnd__clause1 _match_4983;
    kk_std_core_hnd__clause1 _brw_4985 = kk_std_text_parse__select_satisfy(h, _ctx); /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/;
    kk_std_text_parse__hnd_parse_drop(h, _ctx);
    _match_4983 = _brw_4985; /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/
    {
      kk_function_t _fun_unbox_x4437 = _match_4983.clause;
      _x6013 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x4437, (_fun_unbox_x4437, m0, ev_3073, kk_function_box(kk_std_text_parse_new_pnat_fun6016(_ctx)), _ctx)); /*52*/
    }
  }
  x_3070 = kk_std_core_types__maybe_unbox(_x6013, _ctx); /*maybe<list<char>>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_3070, _ctx);
    kk_box_t _x6026 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_pnat_fun6027(_ctx), _ctx); /*3926*/
    return kk_integer_unbox(_x6026);
  }
  {
    kk_std_core__list x1_3076;
    if (kk_std_core_types__is_Nothing(x_3070)) {
      kk_std_core_hnd__ev ev0_3079;
      kk_ssize_t _x6030 = (KK_IZ(0)); /*ssize_t*/
      ev0_3079 = kk_evv_at(_x6030,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
      kk_box_t _x6031;
      {
        struct kk_std_core_hnd_Ev* _con6032 = kk_std_core_hnd__as_Ev(ev0_3079);
        kk_std_core_hnd__marker m00 = _con6032->marker;
        kk_box_t _box_x4457 = _con6032->hnd;
        kk_std_text_parse__hnd_parse h0 = kk_std_text_parse__hnd_parse_unbox(_box_x4457, NULL);
        kk_std_text_parse__hnd_parse_dup(h0);
        kk_std_core_hnd__clause1 _match_4981;
        kk_std_core_hnd__clause1 _brw_4982 = kk_std_text_parse__select_fail(h0, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
        kk_std_text_parse__hnd_parse_drop(h0, _ctx);
        _match_4981 = _brw_4982; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
        {
          kk_function_t _fun_unbox_x4461 = _match_4981.clause;
          kk_box_t _x6034;
          kk_string_t _x6035;
          kk_define_string_literal(, _s6036, 5, "digit")
          _x6035 = kk_string_dup(_s6036); /*string*/
          _x6034 = kk_string_box(_x6035); /*51*/
          _x6031 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x4461, (_fun_unbox_x4461, m00, ev0_3079, _x6034, _ctx)); /*52*/
        }
      }
      x1_3076 = kk_std_core__list_unbox(_x6031, _ctx); /*list<char>*/
    }
    else {
      kk_box_t _box_x4465 = x_3070._cons.Just.value;
      kk_std_core__list x00 = kk_std_core__list_unbox(_box_x4465, NULL);
      x1_3076 = x00; /*list<char>*/
    }
    if (kk_yielding(kk_context())) {
      kk_std_core__list_drop(x1_3076, _ctx);
      kk_box_t _x6038 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_pnat_fun6039(_ctx), _ctx); /*3926*/
      return kk_integer_unbox(_x6038);
    }
    {
      kk_string_t _x1_2668 = kk_std_core_string_2(x1_3076, _ctx); /*string*/;
      kk_evv_t w = kk_evv_swap_create0(kk_context()); /*std/core/hnd/evv<std/text/parse/parse>*/;
      kk_std_core_types__optional default0 = kk_std_core_types__new_Optional(kk_integer_box(kk_integer_from_small(0)), _ctx); /*optional<int>*/;
      kk_integer_t x4;
      bool _match_4979;
      kk_string_t _x6042 = kk_string_dup(_x1_2668); /*string*/
      kk_string_t _x6043 = kk_string_empty(); /*string*/
      _match_4979 = kk_string_is_eq(_x6042,_x6043,kk_context()); /*bool*/
      if (_match_4979) {
        kk_string_drop(_x1_2668, _ctx);
        if (kk_std_core_types__is_Optional(default0)) {
          kk_box_t _box_x4470 = default0._cons.Optional.value;
          kk_integer_t _default_15556 = kk_integer_unbox(_box_x4470);
          x4 = _default_15556; /*int*/
        }
        else {
          x4 = kk_integer_from_small(0); /*int*/
        }
      }
      else {
        kk_std_core_types__maybe m_17212;
        kk_string_t _x6046;
        kk_string_t _x6047 = kk_string_trim_left(_x1_2668,kk_context()); /*string*/
        _x6046 = kk_string_trim_right(_x6047,kk_context()); /*string*/
        bool _x6048;
        kk_std_core_types__optional _x6049 = kk_std_core_types__new_None(_ctx); /*forall<a> optional<a>*/
        if (kk_std_core_types__is_Optional(_x6049)) {
          kk_box_t _box_x4471 = _x6049._cons.Optional.value;
          bool _hex_15560 = kk_bool_unbox(_box_x4471);
          _x6048 = _hex_15560; /*bool*/
        }
        else {
          _x6048 = false; /*bool*/
        }
        m_17212 = kk_std_core_xparse_int(_x6046, _x6048, _ctx); /*maybe<int>*/
        if (kk_std_core_types__is_Nothing(m_17212)) {
          if (kk_std_core_types__is_Optional(default0)) {
            kk_box_t _box_x4472 = default0._cons.Optional.value;
            kk_integer_t _default_155560 = kk_integer_unbox(_box_x4472);
            x4 = _default_155560; /*int*/
          }
          else {
            x4 = kk_integer_from_small(0); /*int*/
          }
        }
        else {
          kk_box_t _box_x4473 = m_17212._cons.Just.value;
          kk_integer_t x5 = kk_integer_unbox(_box_x4473);
          kk_std_core_types__optional_drop(default0, _ctx);
          x4 = x5; /*int*/
        }
      }
      kk_unit_t keep = kk_Unit;
      kk_evv_set(w,kk_context());
      return x4;
    }
  }
}
 
// monadic lift

kk_char_t kk_std_text_parse__mlift2710_sign(kk_std_core_types__maybe _y_2629, kk_context_t* _ctx) { /* (maybe<char>) -> parse char */ 
  if (kk_std_core_types__is_Nothing(_y_2629)) {
    kk_std_core_hnd__ev ev_3086;
    kk_ssize_t _x6053 = (KK_IZ(0)); /*ssize_t*/
    ev_3086 = kk_evv_at(_x6053,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_box_t _x6054;
    {
      struct kk_std_core_hnd_Ev* _con6055 = kk_std_core_hnd__as_Ev(ev_3086);
      kk_std_core_hnd__marker m0 = _con6055->marker;
      kk_box_t _box_x4476 = _con6055->hnd;
      kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x4476, NULL);
      kk_std_text_parse__hnd_parse_dup(h);
      kk_std_core_hnd__clause1 _match_4975;
      kk_std_core_hnd__clause1 _brw_4976 = kk_std_text_parse__select_fail(h, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
      kk_std_text_parse__hnd_parse_drop(h, _ctx);
      _match_4975 = _brw_4976; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
      {
        kk_function_t _fun_unbox_x4480 = _match_4975.clause;
        kk_box_t _x6057;
        kk_string_t _x6058;
        kk_define_string_literal(, _s6059, 2, "+-")
        _x6058 = kk_string_dup(_s6059); /*string*/
        _x6057 = kk_string_box(_x6058); /*51*/
        _x6054 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x4480, (_fun_unbox_x4480, m0, ev_3086, _x6057, _ctx)); /*52*/
      }
    }
    return kk_char_unbox(_x6054, _ctx);
  }
  {
    kk_box_t _box_x4484 = _y_2629._cons.Just.value;
    kk_char_t x0 = kk_char_unbox(_box_x4484, NULL);
    return x0;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift2712_sign_fun6065__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift2712_sign_fun6065(kk_function_t _fself, kk_box_t _b_4498, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift2712_sign_fun6065(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift2712_sign_fun6065, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse__mlift2712_sign_fun6065(kk_function_t _fself, kk_box_t _b_4498, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x6066;
  kk_std_core_types__maybe _match_4973;
  kk_std_core__sslice _x6067 = kk_std_core__sslice_unbox(_b_4498, _ctx); /*sslice*/
  _match_4973 = kk_std_core_next(_x6067, _ctx); /*maybe<(char, sslice)>*/
  if (kk_std_core_types__is_Just(_match_4973)) {
    kk_box_t _box_x4499 = _match_4973._cons.Just.value;
    kk_std_core_types__tuple2_ _pat000 = kk_std_core_types__tuple2__unbox(_box_x4499, NULL);
    if (kk_std_core_types__is_dash__lp__comma__rp_(_pat000)) {
      kk_box_t _box_x4500 = _pat000.fst;
      kk_box_t _box_x4501 = _pat000.snd;
      kk_char_t c = kk_char_unbox(_box_x4500, NULL);
      kk_std_core__sslice rest0 = kk_std_core__sslice_unbox(_box_x4501, NULL);
      kk_string_t _x6072;
      kk_define_string_literal(, _s6073, 2, "+-")
      _x6072 = kk_string_dup(_s6073); /*string*/
      kk_string_t _x6074 = kk_std_core_string(c, _ctx); /*string*/
      if (kk_string_contains(_x6072,_x6074,kk_context())) {
        kk_std_core__sslice_dup(rest0);
        kk_std_core_types__maybe_drop(_match_4973, _ctx);
        kk_box_t _x6075;
        kk_std_core_types__tuple2_ _x6076 = kk_std_core_types__new_dash__lp__comma__rp_(kk_char_box(c, _ctx), kk_std_core__sslice_box(rest0, _ctx), _ctx); /*(6, 7)*/
        _x6075 = kk_std_core_types__tuple2__box(_x6076, _ctx); /*107*/
        _x6066 = kk_std_core_types__new_Just(_x6075, _ctx); /*maybe<107>*/
        goto _match6068;
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_4973, _ctx);
    _x6066 = kk_std_core_types__new_Nothing(_ctx); /*maybe<107>*/
  }
  _match6068: ;
  return kk_std_core_types__maybe_box(_x6066, _ctx);
}


// lift anonymous function
struct kk_std_text_parse__mlift2712_sign_fun6078__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift2712_sign_fun6078(kk_function_t _fself, kk_box_t _b_4510, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift2712_sign_fun6078(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift2712_sign_fun6078, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse__mlift2712_sign_fun6078(kk_function_t _fself, kk_box_t _b_4510, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t _x6079;
  kk_std_core_types__maybe _x6080 = kk_std_core_types__maybe_unbox(_b_4510, _ctx); /*maybe<char>*/
  _x6079 = kk_std_text_parse__mlift2710_sign(_x6080, _ctx); /*char*/
  return kk_char_box(_x6079, _ctx);
}


// lift anonymous function
struct kk_std_text_parse__mlift2712_sign_fun6082__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift2712_sign_fun6082(kk_function_t _fself, kk_box_t _b_4513, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift2712_sign_fun6082(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift2712_sign_fun6082, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse__mlift2712_sign_fun6082(kk_function_t _fself, kk_box_t _b_4513, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x6083;
  kk_char_t _x6084 = kk_char_unbox(_b_4513, _ctx); /*char*/
  _x6083 = kk_std_text_parse__mlift2711_sign(_x6084, _ctx); /*bool*/
  return kk_bool_box(_x6083);
}

bool kk_std_text_parse__mlift2712_sign(bool _y_2628, kk_context_t* _ctx) { /* (bool) -> parse bool */ 
  kk_char_t x_3089;
  if (_y_2628) {
    kk_std_core_hnd__ev ev_3093;
    kk_ssize_t _x6061 = (KK_IZ(0)); /*ssize_t*/
    ev_3093 = kk_evv_at(_x6061,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_std_core_types__maybe x0_3091;
    kk_box_t _x6062;
    {
      struct kk_std_core_hnd_Ev* _con6063 = kk_std_core_hnd__as_Ev(ev_3093);
      kk_std_core_hnd__marker m0 = _con6063->marker;
      kk_box_t _box_x4485 = _con6063->hnd;
      kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x4485, NULL);
      kk_std_text_parse__hnd_parse_dup(h);
      kk_std_core_hnd__clause1 _match_4972;
      kk_std_core_hnd__clause1 _brw_4974 = kk_std_text_parse__select_satisfy(h, _ctx); /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/;
      kk_std_text_parse__hnd_parse_drop(h, _ctx);
      _match_4972 = _brw_4974; /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/
      {
        kk_function_t _fun_unbox_x4492 = _match_4972.clause;
        _x6062 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x4492, (_fun_unbox_x4492, m0, ev_3093, kk_function_box(kk_std_text_parse__new_mlift2712_sign_fun6065(_ctx)), _ctx)); /*52*/
      }
    }
    x0_3091 = kk_std_core_types__maybe_unbox(_x6062, _ctx); /*maybe<char>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__maybe_drop(x0_3091, _ctx);
      kk_box_t _x6077 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift2712_sign_fun6078(_ctx), _ctx); /*3926*/
      x_3089 = kk_char_unbox(_x6077, _ctx); /*char*/
    }
    else {
      x_3089 = kk_std_text_parse__mlift2710_sign(x0_3091, _ctx); /*char*/
    }
  }
  else {
    x_3089 = '+'; /*char*/
  }
  if (kk_yielding(kk_context())) {
    kk_box_t _x6081 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift2712_sign_fun6082(_ctx), _ctx); /*3926*/
    return kk_bool_unbox(_x6081);
  }
  {
    return (x_3089 == ('-'));
  }
}


// lift anonymous function
struct kk_std_text_parse_sign_fun6090__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_sign_fun6090(kk_function_t _fself, kk_box_t _b_4522, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_sign_fun6090(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_sign_fun6090, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_sign_fun6090(kk_function_t _fself, kk_box_t _b_4522, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x6091;
  bool _x6092 = kk_bool_unbox(_b_4522); /*bool*/
  _x6091 = kk_std_text_parse__mlift2712_sign(_x6092, _ctx); /*bool*/
  return kk_bool_box(_x6091);
}


// lift anonymous function
struct kk_std_text_parse_sign_fun6097__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_sign_fun6097(kk_function_t _fself, kk_box_t _b_4536, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_sign_fun6097(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_sign_fun6097, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_sign_fun6097(kk_function_t _fself, kk_box_t _b_4536, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x6098;
  kk_std_core_types__maybe _match_4966;
  kk_std_core__sslice _x6099 = kk_std_core__sslice_unbox(_b_4536, _ctx); /*sslice*/
  _match_4966 = kk_std_core_next(_x6099, _ctx); /*maybe<(char, sslice)>*/
  if (kk_std_core_types__is_Just(_match_4966)) {
    kk_box_t _box_x4537 = _match_4966._cons.Just.value;
    kk_std_core_types__tuple2_ _pat000 = kk_std_core_types__tuple2__unbox(_box_x4537, NULL);
    if (kk_std_core_types__is_dash__lp__comma__rp_(_pat000)) {
      kk_box_t _box_x4538 = _pat000.fst;
      kk_box_t _box_x4539 = _pat000.snd;
      kk_char_t c = kk_char_unbox(_box_x4538, NULL);
      kk_std_core__sslice rest0 = kk_std_core__sslice_unbox(_box_x4539, NULL);
      kk_string_t _x6104;
      kk_define_string_literal(, _s6105, 2, "+-")
      _x6104 = kk_string_dup(_s6105); /*string*/
      kk_string_t _x6106 = kk_std_core_string(c, _ctx); /*string*/
      if (kk_string_contains(_x6104,_x6106,kk_context())) {
        kk_std_core__sslice_dup(rest0);
        kk_std_core_types__maybe_drop(_match_4966, _ctx);
        kk_box_t _x6107;
        kk_std_core_types__tuple2_ _x6108 = kk_std_core_types__new_dash__lp__comma__rp_(kk_char_box(c, _ctx), kk_std_core__sslice_box(rest0, _ctx), _ctx); /*(6, 7)*/
        _x6107 = kk_std_core_types__tuple2__box(_x6108, _ctx); /*107*/
        _x6098 = kk_std_core_types__new_Just(_x6107, _ctx); /*maybe<107>*/
        goto _match6100;
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_4966, _ctx);
    _x6098 = kk_std_core_types__new_Nothing(_ctx); /*maybe<107>*/
  }
  _match6100: ;
  return kk_std_core_types__maybe_box(_x6098, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_sign_fun6110__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_sign_fun6110(kk_function_t _fself, kk_box_t _b_4548, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_sign_fun6110(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_sign_fun6110, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_sign_fun6110(kk_function_t _fself, kk_box_t _b_4548, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t _x6111;
  kk_std_core_types__maybe _x6112 = kk_std_core_types__maybe_unbox(_b_4548, _ctx); /*maybe<char>*/
  _x6111 = kk_std_text_parse__mlift2710_sign(_x6112, _ctx); /*char*/
  return kk_char_box(_x6111, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_sign_fun6114__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_sign_fun6114(kk_function_t _fself, kk_box_t _b_4551, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_sign_fun6114(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_sign_fun6114, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_sign_fun6114(kk_function_t _fself, kk_box_t _b_4551, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x6115;
  kk_char_t _x6116 = kk_char_unbox(_b_4551, _ctx); /*char*/
  _x6115 = kk_std_text_parse__mlift2711_sign(_x6116, _ctx); /*bool*/
  return kk_bool_box(_x6115);
}

bool kk_std_text_parse_sign(kk_context_t* _ctx) { /* () -> parse bool */ 
  kk_std_core_hnd__ev ev_3099;
  kk_ssize_t _x6085 = (KK_IZ(0)); /*ssize_t*/
  ev_3099 = kk_evv_at(_x6085,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
  bool x_3096;
  kk_box_t _x6086;
  {
    struct kk_std_core_hnd_Ev* _con6087 = kk_std_core_hnd__as_Ev(ev_3099);
    kk_std_core_hnd__marker m0 = _con6087->marker;
    kk_box_t _box_x4515 = _con6087->hnd;
    kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x4515, NULL);
    kk_std_text_parse__hnd_parse_dup(h);
    kk_std_core_hnd__clause0 _match_4968;
    kk_std_core_hnd__clause0 _brw_4969 = kk_std_text_parse__select_pick(h, _ctx); /*std/core/hnd/clause0<bool,std/text/parse/.hnd-parse,412,413>*/;
    kk_std_text_parse__hnd_parse_drop(h, _ctx);
    _match_4968 = _brw_4969; /*std/core/hnd/clause0<bool,std/text/parse/.hnd-parse,412,413>*/
    {
      kk_function_t _fun_unbox_x4518 = _match_4968.clause;
      _x6086 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x4518, (_fun_unbox_x4518, m0, ev_3099, _ctx)); /*37*/
    }
  }
  x_3096 = kk_bool_unbox(_x6086); /*bool*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x6089 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_sign_fun6090(_ctx), _ctx); /*3926*/
    return kk_bool_unbox(_x6089);
  }
  {
    kk_char_t x0_3101;
    if (x_3096) {
      kk_std_core_hnd__ev ev0_3106;
      kk_ssize_t _x6093 = (KK_IZ(0)); /*ssize_t*/
      ev0_3106 = kk_evv_at(_x6093,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
      kk_std_core_types__maybe x1_3104;
      kk_box_t _x6094;
      {
        struct kk_std_core_hnd_Ev* _con6095 = kk_std_core_hnd__as_Ev(ev0_3106);
        kk_std_core_hnd__marker m00 = _con6095->marker;
        kk_box_t _box_x4523 = _con6095->hnd;
        kk_std_text_parse__hnd_parse h0 = kk_std_text_parse__hnd_parse_unbox(_box_x4523, NULL);
        kk_std_text_parse__hnd_parse_dup(h0);
        kk_std_core_hnd__clause1 _match_4965;
        kk_std_core_hnd__clause1 _brw_4967 = kk_std_text_parse__select_satisfy(h0, _ctx); /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/;
        kk_std_text_parse__hnd_parse_drop(h0, _ctx);
        _match_4965 = _brw_4967; /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/
        {
          kk_function_t _fun_unbox_x4530 = _match_4965.clause;
          _x6094 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x4530, (_fun_unbox_x4530, m00, ev0_3106, kk_function_box(kk_std_text_parse_new_sign_fun6097(_ctx)), _ctx)); /*52*/
        }
      }
      x1_3104 = kk_std_core_types__maybe_unbox(_x6094, _ctx); /*maybe<char>*/
      if (kk_yielding(kk_context())) {
        kk_std_core_types__maybe_drop(x1_3104, _ctx);
        kk_box_t _x6109 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_sign_fun6110(_ctx), _ctx); /*3926*/
        x0_3101 = kk_char_unbox(_x6109, _ctx); /*char*/
      }
      else {
        x0_3101 = kk_std_text_parse__mlift2710_sign(x1_3104, _ctx); /*char*/
      }
    }
    else {
      x0_3101 = '+'; /*char*/
    }
    if (kk_yielding(kk_context())) {
      kk_box_t _x6113 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_sign_fun6114(_ctx), _ctx); /*3926*/
      return kk_bool_unbox(_x6113);
    }
    {
      return (x0_3101 == ('-'));
    }
  }
}
 
// monadic lift

kk_char_t kk_std_text_parse__mlift2714_pint(kk_std_core_types__maybe _y_2634, kk_context_t* _ctx) { /* (maybe<char>) -> parse char */ 
  if (kk_std_core_types__is_Nothing(_y_2634)) {
    kk_std_core_hnd__ev ev_3109;
    kk_ssize_t _x6117 = (KK_IZ(0)); /*ssize_t*/
    ev_3109 = kk_evv_at(_x6117,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_box_t _x6118;
    {
      struct kk_std_core_hnd_Ev* _con6119 = kk_std_core_hnd__as_Ev(ev_3109);
      kk_std_core_hnd__marker m0 = _con6119->marker;
      kk_box_t _box_x4554 = _con6119->hnd;
      kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x4554, NULL);
      kk_std_text_parse__hnd_parse_dup(h);
      kk_std_core_hnd__clause1 _match_4960;
      kk_std_core_hnd__clause1 _brw_4961 = kk_std_text_parse__select_fail(h, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
      kk_std_text_parse__hnd_parse_drop(h, _ctx);
      _match_4960 = _brw_4961; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
      {
        kk_function_t _fun_unbox_x4558 = _match_4960.clause;
        kk_box_t _x6121;
        kk_string_t _x6122;
        kk_define_string_literal(, _s6123, 2, "+-")
        _x6122 = kk_string_dup(_s6123); /*string*/
        _x6121 = kk_string_box(_x6122); /*51*/
        _x6118 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x4558, (_fun_unbox_x4558, m0, ev_3109, _x6121, _ctx)); /*52*/
      }
    }
    return kk_char_unbox(_x6118, _ctx);
  }
  {
    kk_box_t _box_x4562 = _y_2634._cons.Just.value;
    kk_char_t x0 = kk_char_unbox(_box_x4562, NULL);
    return x0;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift2715_pint_fun6126__t {
  struct kk_function_s _base;
  bool neg;
};
static kk_box_t kk_std_text_parse__mlift2715_pint_fun6126(kk_function_t _fself, kk_box_t _b_4564, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift2715_pint_fun6126(bool neg, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift2715_pint_fun6126__t* _self = kk_function_alloc_as(struct kk_std_text_parse__mlift2715_pint_fun6126__t, 1, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse__mlift2715_pint_fun6126, kk_context());
  _self->neg = neg;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse__mlift2715_pint_fun6126(kk_function_t _fself, kk_box_t _b_4564, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift2715_pint_fun6126__t* _self = kk_function_as(struct kk_std_text_parse__mlift2715_pint_fun6126__t*, _fself);
  bool neg = _self->neg; /* bool */
  kk_drop_match(_self, {;}, {}, _ctx)
  kk_integer_t _x6127;
  kk_integer_t i_4566 = kk_integer_unbox(_b_4564); /*int*/;
  if (neg) {
    _x6127 = kk_integer_neg(i_4566,kk_context()); /*int*/
  }
  else {
    _x6127 = i_4566; /*int*/
  }
  return kk_integer_box(_x6127);
}

kk_integer_t kk_std_text_parse__mlift2715_pint(kk_char_t _c_2637, kk_context_t* _ctx) { /* (char) -> int */ 
  bool neg = (_c_2637 == ('-')); /*bool*/;
  kk_integer_t x_3112 = kk_std_text_parse_pnat(_ctx); /*int*/;
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_3112, _ctx);
    kk_box_t _x6125 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift2715_pint_fun6126(neg, _ctx), _ctx); /*3926*/
    return kk_integer_unbox(_x6125);
  }
  {
    kk_integer_t i_4567 = x_3112; /*int*/;
    if (neg) {
      return kk_integer_neg(i_4567,kk_context());
    }
    {
      return i_4567;
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift2716_pint_fun6132__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift2716_pint_fun6132(kk_function_t _fself, kk_box_t _b_4581, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift2716_pint_fun6132(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift2716_pint_fun6132, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse__mlift2716_pint_fun6132(kk_function_t _fself, kk_box_t _b_4581, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x6133;
  kk_std_core_types__maybe _match_4957;
  kk_std_core__sslice _x6134 = kk_std_core__sslice_unbox(_b_4581, _ctx); /*sslice*/
  _match_4957 = kk_std_core_next(_x6134, _ctx); /*maybe<(char, sslice)>*/
  if (kk_std_core_types__is_Just(_match_4957)) {
    kk_box_t _box_x4582 = _match_4957._cons.Just.value;
    kk_std_core_types__tuple2_ _pat000 = kk_std_core_types__tuple2__unbox(_box_x4582, NULL);
    if (kk_std_core_types__is_dash__lp__comma__rp_(_pat000)) {
      kk_box_t _box_x4583 = _pat000.fst;
      kk_box_t _box_x4584 = _pat000.snd;
      kk_char_t c = kk_char_unbox(_box_x4583, NULL);
      kk_std_core__sslice rest0 = kk_std_core__sslice_unbox(_box_x4584, NULL);
      kk_string_t _x6139;
      kk_define_string_literal(, _s6140, 2, "+-")
      _x6139 = kk_string_dup(_s6140); /*string*/
      kk_string_t _x6141 = kk_std_core_string(c, _ctx); /*string*/
      if (kk_string_contains(_x6139,_x6141,kk_context())) {
        kk_std_core__sslice_dup(rest0);
        kk_std_core_types__maybe_drop(_match_4957, _ctx);
        kk_box_t _x6142;
        kk_std_core_types__tuple2_ _x6143 = kk_std_core_types__new_dash__lp__comma__rp_(kk_char_box(c, _ctx), kk_std_core__sslice_box(rest0, _ctx), _ctx); /*(6, 7)*/
        _x6142 = kk_std_core_types__tuple2__box(_x6143, _ctx); /*107*/
        _x6133 = kk_std_core_types__new_Just(_x6142, _ctx); /*maybe<107>*/
        goto _match6135;
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_4957, _ctx);
    _x6133 = kk_std_core_types__new_Nothing(_ctx); /*maybe<107>*/
  }
  _match6135: ;
  return kk_std_core_types__maybe_box(_x6133, _ctx);
}


// lift anonymous function
struct kk_std_text_parse__mlift2716_pint_fun6145__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift2716_pint_fun6145(kk_function_t _fself, kk_box_t _b_4593, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift2716_pint_fun6145(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift2716_pint_fun6145, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse__mlift2716_pint_fun6145(kk_function_t _fself, kk_box_t _b_4593, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t _x6146;
  kk_std_core_types__maybe _x6147 = kk_std_core_types__maybe_unbox(_b_4593, _ctx); /*maybe<char>*/
  _x6146 = kk_std_text_parse__mlift2714_pint(_x6147, _ctx); /*char*/
  return kk_char_box(_x6146, _ctx);
}


// lift anonymous function
struct kk_std_text_parse__mlift2716_pint_fun6149__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift2716_pint_fun6149(kk_function_t _fself, kk_box_t _b_4596, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift2716_pint_fun6149(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift2716_pint_fun6149, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse__mlift2716_pint_fun6149(kk_function_t _fself, kk_box_t _b_4596, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x6150;
  kk_char_t _x6151 = kk_char_unbox(_b_4596, _ctx); /*char*/
  _x6150 = kk_std_text_parse__mlift2715_pint(_x6151, _ctx); /*int*/
  return kk_integer_box(_x6150);
}

kk_integer_t kk_std_text_parse__mlift2716_pint(bool _y_2633, kk_context_t* _ctx) { /* (bool) -> parse int */ 
  kk_char_t x_3116;
  if (_y_2633) {
    kk_std_core_hnd__ev ev_3120;
    kk_ssize_t _x6128 = (KK_IZ(0)); /*ssize_t*/
    ev_3120 = kk_evv_at(_x6128,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_std_core_types__maybe x0_3118;
    kk_box_t _x6129;
    {
      struct kk_std_core_hnd_Ev* _con6130 = kk_std_core_hnd__as_Ev(ev_3120);
      kk_std_core_hnd__marker m0 = _con6130->marker;
      kk_box_t _box_x4568 = _con6130->hnd;
      kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x4568, NULL);
      kk_std_text_parse__hnd_parse_dup(h);
      kk_std_core_hnd__clause1 _match_4956;
      kk_std_core_hnd__clause1 _brw_4958 = kk_std_text_parse__select_satisfy(h, _ctx); /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/;
      kk_std_text_parse__hnd_parse_drop(h, _ctx);
      _match_4956 = _brw_4958; /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/
      {
        kk_function_t _fun_unbox_x4575 = _match_4956.clause;
        _x6129 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x4575, (_fun_unbox_x4575, m0, ev_3120, kk_function_box(kk_std_text_parse__new_mlift2716_pint_fun6132(_ctx)), _ctx)); /*52*/
      }
    }
    x0_3118 = kk_std_core_types__maybe_unbox(_x6129, _ctx); /*maybe<char>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__maybe_drop(x0_3118, _ctx);
      kk_box_t _x6144 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift2716_pint_fun6145(_ctx), _ctx); /*3926*/
      x_3116 = kk_char_unbox(_x6144, _ctx); /*char*/
    }
    else {
      x_3116 = kk_std_text_parse__mlift2714_pint(x0_3118, _ctx); /*char*/
    }
  }
  else {
    x_3116 = '+'; /*char*/
  }
  if (kk_yielding(kk_context())) {
    kk_box_t _x6148 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift2716_pint_fun6149(_ctx), _ctx); /*3926*/
    return kk_integer_unbox(_x6148);
  }
  {
    return kk_std_text_parse__mlift2715_pint(x_3116, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_pint_fun6157__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_pint_fun6157(kk_function_t _fself, kk_box_t _b_4605, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pint_fun6157(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_pint_fun6157, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_pint_fun6157(kk_function_t _fself, kk_box_t _b_4605, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x6158;
  bool _x6159 = kk_bool_unbox(_b_4605); /*bool*/
  _x6158 = kk_std_text_parse__mlift2716_pint(_x6159, _ctx); /*int*/
  return kk_integer_box(_x6158);
}


// lift anonymous function
struct kk_std_text_parse_pint_fun6164__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_pint_fun6164(kk_function_t _fself, kk_box_t _b_4619, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pint_fun6164(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_pint_fun6164, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_pint_fun6164(kk_function_t _fself, kk_box_t _b_4619, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x6165;
  kk_std_core_types__maybe _match_4950;
  kk_std_core__sslice _x6166 = kk_std_core__sslice_unbox(_b_4619, _ctx); /*sslice*/
  _match_4950 = kk_std_core_next(_x6166, _ctx); /*maybe<(char, sslice)>*/
  if (kk_std_core_types__is_Just(_match_4950)) {
    kk_box_t _box_x4620 = _match_4950._cons.Just.value;
    kk_std_core_types__tuple2_ _pat000 = kk_std_core_types__tuple2__unbox(_box_x4620, NULL);
    if (kk_std_core_types__is_dash__lp__comma__rp_(_pat000)) {
      kk_box_t _box_x4621 = _pat000.fst;
      kk_box_t _box_x4622 = _pat000.snd;
      kk_char_t c = kk_char_unbox(_box_x4621, NULL);
      kk_std_core__sslice rest0 = kk_std_core__sslice_unbox(_box_x4622, NULL);
      kk_string_t _x6171;
      kk_define_string_literal(, _s6172, 2, "+-")
      _x6171 = kk_string_dup(_s6172); /*string*/
      kk_string_t _x6173 = kk_std_core_string(c, _ctx); /*string*/
      if (kk_string_contains(_x6171,_x6173,kk_context())) {
        kk_std_core__sslice_dup(rest0);
        kk_std_core_types__maybe_drop(_match_4950, _ctx);
        kk_box_t _x6174;
        kk_std_core_types__tuple2_ _x6175 = kk_std_core_types__new_dash__lp__comma__rp_(kk_char_box(c, _ctx), kk_std_core__sslice_box(rest0, _ctx), _ctx); /*(6, 7)*/
        _x6174 = kk_std_core_types__tuple2__box(_x6175, _ctx); /*107*/
        _x6165 = kk_std_core_types__new_Just(_x6174, _ctx); /*maybe<107>*/
        goto _match6167;
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_4950, _ctx);
    _x6165 = kk_std_core_types__new_Nothing(_ctx); /*maybe<107>*/
  }
  _match6167: ;
  return kk_std_core_types__maybe_box(_x6165, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_pint_fun6177__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_pint_fun6177(kk_function_t _fself, kk_box_t _b_4631, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pint_fun6177(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_pint_fun6177, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_pint_fun6177(kk_function_t _fself, kk_box_t _b_4631, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t _x6178;
  kk_std_core_types__maybe _x6179 = kk_std_core_types__maybe_unbox(_b_4631, _ctx); /*maybe<char>*/
  _x6178 = kk_std_text_parse__mlift2714_pint(_x6179, _ctx); /*char*/
  return kk_char_box(_x6178, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_pint_fun6181__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_pint_fun6181(kk_function_t _fself, kk_box_t _b_4634, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pint_fun6181(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_pint_fun6181, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_pint_fun6181(kk_function_t _fself, kk_box_t _b_4634, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x6182;
  kk_char_t _x6183 = kk_char_unbox(_b_4634, _ctx); /*char*/
  _x6182 = kk_std_text_parse__mlift2715_pint(_x6183, _ctx); /*int*/
  return kk_integer_box(_x6182);
}


// lift anonymous function
struct kk_std_text_parse_pint_fun6185__t {
  struct kk_function_s _base;
  bool neg;
};
static kk_box_t kk_std_text_parse_pint_fun6185(kk_function_t _fself, kk_box_t _b_4636, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pint_fun6185(bool neg, kk_context_t* _ctx) {
  struct kk_std_text_parse_pint_fun6185__t* _self = kk_function_alloc_as(struct kk_std_text_parse_pint_fun6185__t, 1, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_pint_fun6185, kk_context());
  _self->neg = neg;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse_pint_fun6185(kk_function_t _fself, kk_box_t _b_4636, kk_context_t* _ctx) {
  struct kk_std_text_parse_pint_fun6185__t* _self = kk_function_as(struct kk_std_text_parse_pint_fun6185__t*, _fself);
  bool neg = _self->neg; /* bool */
  kk_drop_match(_self, {;}, {}, _ctx)
  kk_integer_t i_4640 = kk_integer_unbox(_b_4636); /*int*/;
  kk_integer_t _x6186;
  if (neg) {
    _x6186 = kk_integer_neg(i_4640,kk_context()); /*int*/
  }
  else {
    _x6186 = i_4640; /*int*/
  }
  return kk_integer_box(_x6186);
}

kk_integer_t kk_std_text_parse_pint(kk_context_t* _ctx) { /* () -> parse int */ 
  kk_std_core_hnd__ev ev_3126;
  kk_ssize_t _x6152 = (KK_IZ(0)); /*ssize_t*/
  ev_3126 = kk_evv_at(_x6152,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
  bool x_3123;
  kk_box_t _x6153;
  {
    struct kk_std_core_hnd_Ev* _con6154 = kk_std_core_hnd__as_Ev(ev_3126);
    kk_std_core_hnd__marker m0 = _con6154->marker;
    kk_box_t _box_x4598 = _con6154->hnd;
    kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x4598, NULL);
    kk_std_text_parse__hnd_parse_dup(h);
    kk_std_core_hnd__clause0 _match_4952;
    kk_std_core_hnd__clause0 _brw_4953 = kk_std_text_parse__select_pick(h, _ctx); /*std/core/hnd/clause0<bool,std/text/parse/.hnd-parse,412,413>*/;
    kk_std_text_parse__hnd_parse_drop(h, _ctx);
    _match_4952 = _brw_4953; /*std/core/hnd/clause0<bool,std/text/parse/.hnd-parse,412,413>*/
    {
      kk_function_t _fun_unbox_x4601 = _match_4952.clause;
      _x6153 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x4601, (_fun_unbox_x4601, m0, ev_3126, _ctx)); /*37*/
    }
  }
  x_3123 = kk_bool_unbox(_x6153); /*bool*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x6156 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_pint_fun6157(_ctx), _ctx); /*3926*/
    return kk_integer_unbox(_x6156);
  }
  {
    kk_char_t x0_3128;
    if (x_3123) {
      kk_std_core_hnd__ev ev0_3133;
      kk_ssize_t _x6160 = (KK_IZ(0)); /*ssize_t*/
      ev0_3133 = kk_evv_at(_x6160,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
      kk_std_core_types__maybe x1_3131;
      kk_box_t _x6161;
      {
        struct kk_std_core_hnd_Ev* _con6162 = kk_std_core_hnd__as_Ev(ev0_3133);
        kk_std_core_hnd__marker m00 = _con6162->marker;
        kk_box_t _box_x4606 = _con6162->hnd;
        kk_std_text_parse__hnd_parse h0 = kk_std_text_parse__hnd_parse_unbox(_box_x4606, NULL);
        kk_std_text_parse__hnd_parse_dup(h0);
        kk_std_core_hnd__clause1 _match_4949;
        kk_std_core_hnd__clause1 _brw_4951 = kk_std_text_parse__select_satisfy(h0, _ctx); /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/;
        kk_std_text_parse__hnd_parse_drop(h0, _ctx);
        _match_4949 = _brw_4951; /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/
        {
          kk_function_t _fun_unbox_x4613 = _match_4949.clause;
          _x6161 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x4613, (_fun_unbox_x4613, m00, ev0_3133, kk_function_box(kk_std_text_parse_new_pint_fun6164(_ctx)), _ctx)); /*52*/
        }
      }
      x1_3131 = kk_std_core_types__maybe_unbox(_x6161, _ctx); /*maybe<char>*/
      if (kk_yielding(kk_context())) {
        kk_std_core_types__maybe_drop(x1_3131, _ctx);
        kk_box_t _x6176 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_pint_fun6177(_ctx), _ctx); /*3926*/
        x0_3128 = kk_char_unbox(_x6176, _ctx); /*char*/
      }
      else {
        x0_3128 = kk_std_text_parse__mlift2714_pint(x1_3131, _ctx); /*char*/
      }
    }
    else {
      x0_3128 = '+'; /*char*/
    }
    if (kk_yielding(kk_context())) {
      kk_box_t _x6180 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_pint_fun6181(_ctx), _ctx); /*3926*/
      return kk_integer_unbox(_x6180);
    }
    {
      bool neg = (x0_3128 == ('-')); /*bool*/;
      kk_integer_t x3_3136 = kk_std_text_parse_pnat(_ctx); /*int*/;
      if (kk_yielding(kk_context())) {
        kk_integer_drop(x3_3136, _ctx);
        kk_box_t _x6184 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_pint_fun6185(neg, _ctx), _ctx); /*3926*/
        return kk_integer_unbox(_x6184);
      }
      if (neg) {
        return kk_integer_neg(x3_3136,kk_context());
      }
      {
        return x3_3136;
      }
    }
  }
}
 
// monadic lift

kk_string_t kk_std_text_parse__mlift2717_pstring(kk_string_t s, kk_std_core_types__maybe _y_2640, kk_context_t* _ctx) { /* (s : string, maybe<string>) -> parse string */ 
  if (kk_std_core_types__is_Nothing(_y_2640)) {
    kk_std_core_hnd__ev ev_3141;
    kk_ssize_t _x6187 = (KK_IZ(0)); /*ssize_t*/
    ev_3141 = kk_evv_at(_x6187,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_box_t _x6188;
    {
      struct kk_std_core_hnd_Ev* _con6189 = kk_std_core_hnd__as_Ev(ev_3141);
      kk_std_core_hnd__marker m0 = _con6189->marker;
      kk_box_t _box_x4641 = _con6189->hnd;
      kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x4641, NULL);
      kk_std_text_parse__hnd_parse_dup(h);
      kk_std_core_hnd__clause1 _match_4943;
      kk_std_core_hnd__clause1 _brw_4944 = kk_std_text_parse__select_fail(h, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
      kk_std_text_parse__hnd_parse_drop(h, _ctx);
      _match_4943 = _brw_4944; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
      {
        kk_function_t _fun_unbox_x4645 = _match_4943.clause;
        _x6188 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x4645, (_fun_unbox_x4645, m0, ev_3141, kk_string_box(s), _ctx)); /*52*/
      }
    }
    return kk_string_unbox(_x6188);
  }
  {
    kk_box_t _box_x4649 = _y_2640._cons.Just.value;
    kk_string_t x0 = kk_string_unbox(_box_x4649);
    kk_string_drop(s, _ctx);
    return x0;
  }
}


// lift anonymous function
struct kk_std_text_parse_pstring_fun6198__t {
  struct kk_function_s _base;
  kk_string_t s;
};
static kk_box_t kk_std_text_parse_pstring_fun6198(kk_function_t _fself, kk_box_t _b_4663, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pstring_fun6198(kk_string_t s, kk_context_t* _ctx) {
  struct kk_std_text_parse_pstring_fun6198__t* _self = kk_function_alloc_as(struct kk_std_text_parse_pstring_fun6198__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_pstring_fun6198, kk_context());
  _self->s = s;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse_pstring_fun6198(kk_function_t _fself, kk_box_t _b_4663, kk_context_t* _ctx) {
  struct kk_std_text_parse_pstring_fun6198__t* _self = kk_function_as(struct kk_std_text_parse_pstring_fun6198__t*, _fself);
  kk_string_t s = _self->s; /* string */
  kk_drop_match(_self, {kk_string_dup(s);}, {}, _ctx)
  kk_std_core_types__maybe _x6199;
  kk_std_core_types__maybe _match_4941;
  kk_std_core__sslice _x6200 = kk_std_core__sslice_unbox(_b_4663, _ctx); /*sslice*/
  kk_std_core__list _x6201;
  kk_string_t _x6202 = kk_string_dup(s); /*string*/
  _x6201 = kk_std_core_list_6(_x6202, _ctx); /*list<char>*/
  _match_4941 = kk_std_text_parse_next_match(_x6200, _x6201, _ctx); /*maybe<sslice>*/
  if (kk_std_core_types__is_Just(_match_4941)) {
    kk_box_t _box_x4664 = _match_4941._cons.Just.value;
    kk_std_core__sslice rest0 = kk_std_core__sslice_unbox(_box_x4664, NULL);
    kk_std_core__sslice_dup(rest0);
    kk_std_core_types__maybe_drop(_match_4941, _ctx);
    kk_box_t _x6204;
    kk_std_core_types__tuple2_ _x6205 = kk_std_core_types__new_dash__lp__comma__rp_(kk_string_box(s), kk_std_core__sslice_box(rest0, _ctx), _ctx); /*(6, 7)*/
    _x6204 = kk_std_core_types__tuple2__box(_x6205, _ctx); /*107*/
    _x6199 = kk_std_core_types__new_Just(_x6204, _ctx); /*maybe<107>*/
  }
  else {
    kk_string_drop(s, _ctx);
    _x6199 = kk_std_core_types__new_Nothing(_ctx); /*maybe<107>*/
  }
  return kk_std_core_types__maybe_box(_x6199, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_pstring_fun6207__t {
  struct kk_function_s _base;
  kk_string_t s;
};
static kk_box_t kk_std_text_parse_pstring_fun6207(kk_function_t _fself, kk_box_t _b_4673, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pstring_fun6207(kk_string_t s, kk_context_t* _ctx) {
  struct kk_std_text_parse_pstring_fun6207__t* _self = kk_function_alloc_as(struct kk_std_text_parse_pstring_fun6207__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_text_parse_pstring_fun6207, kk_context());
  _self->s = s;
  return &_self->_base;
}

static kk_box_t kk_std_text_parse_pstring_fun6207(kk_function_t _fself, kk_box_t _b_4673, kk_context_t* _ctx) {
  struct kk_std_text_parse_pstring_fun6207__t* _self = kk_function_as(struct kk_std_text_parse_pstring_fun6207__t*, _fself);
  kk_string_t s = _self->s; /* string */
  kk_drop_match(_self, {kk_string_dup(s);}, {}, _ctx)
  kk_std_core_types__maybe _y_4684_2640 = kk_std_core_types__maybe_unbox(_b_4673, _ctx); /*maybe<string>*/;
  kk_string_t _x6208 = kk_std_text_parse__mlift2717_pstring(s, _y_4684_2640, _ctx); /*string*/
  return kk_string_box(_x6208);
}

kk_string_t kk_std_text_parse_pstring(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> parse string */ 
  kk_std_core_hnd__ev ev_3147;
  kk_ssize_t _x6192 = (KK_IZ(0)); /*ssize_t*/
  ev_3147 = kk_evv_at(_x6192,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
  kk_std_core_types__maybe x_3144;
  kk_box_t _x6193;
  {
    struct kk_std_core_hnd_Ev* _con6194 = kk_std_core_hnd__as_Ev(ev_3147);
    kk_std_core_hnd__marker m0 = _con6194->marker;
    kk_box_t _box_x4650 = _con6194->hnd;
    kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x4650, NULL);
    kk_std_text_parse__hnd_parse_dup(h);
    kk_std_core_hnd__clause1 _match_4940;
    kk_std_core_hnd__clause1 _brw_4942 = kk_std_text_parse__select_satisfy(h, _ctx); /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/;
    kk_std_text_parse__hnd_parse_drop(h, _ctx);
    _match_4940 = _brw_4942; /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/
    {
      kk_function_t _fun_unbox_x4657 = _match_4940.clause;
      kk_box_t _x6196;
      kk_function_t _x6197;
      kk_string_dup(s);
      _x6197 = kk_std_text_parse_new_pstring_fun6198(s, _ctx); /*(4661) -> total 4662*/
      _x6196 = kk_function_box(_x6197); /*51*/
      _x6193 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x4657, (_fun_unbox_x4657, m0, ev_3147, _x6196, _ctx)); /*52*/
    }
  }
  x_3144 = kk_std_core_types__maybe_unbox(_x6193, _ctx); /*maybe<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_3144, _ctx);
    kk_box_t _x6206 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_pstring_fun6207(s, _ctx), _ctx); /*3926*/
    return kk_string_unbox(_x6206);
  }
  if (kk_std_core_types__is_Nothing(x_3144)) {
    kk_std_core_hnd__ev ev0_3150;
    kk_ssize_t _x6209 = (KK_IZ(0)); /*ssize_t*/
    ev0_3150 = kk_evv_at(_x6209,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_box_t _x6210;
    {
      struct kk_std_core_hnd_Ev* _con6211 = kk_std_core_hnd__as_Ev(ev0_3150);
      kk_std_core_hnd__marker m00 = _con6211->marker;
      kk_box_t _box_x4674 = _con6211->hnd;
      kk_std_text_parse__hnd_parse h0 = kk_std_text_parse__hnd_parse_unbox(_box_x4674, NULL);
      kk_std_text_parse__hnd_parse_dup(h0);
      kk_std_core_hnd__clause1 _match_4938;
      kk_std_core_hnd__clause1 _brw_4939 = kk_std_text_parse__select_fail(h0, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
      kk_std_text_parse__hnd_parse_drop(h0, _ctx);
      _match_4938 = _brw_4939; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
      {
        kk_function_t _fun_unbox_x4678 = _match_4938.clause;
        _x6210 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x4678, (_fun_unbox_x4678, m00, ev0_3150, kk_string_box(s), _ctx)); /*52*/
      }
    }
    return kk_string_unbox(_x6210);
  }
  {
    kk_box_t _box_x4682 = x_3144._cons.Just.value;
    kk_string_t x2 = kk_string_unbox(_box_x4682);
    kk_string_drop(s, _ctx);
    return x2;
  }
}

kk_std_core_types__maybe kk_std_text_parse_starts_with(kk_string_t s, kk_function_t p, kk_context_t* _ctx) { /* forall<a> (s : string, p : () -> parse a) -> maybe<(a, sslice)> */ 
  kk_std_text_parse__parse_error _match_4936;
  kk_std_core__sslice _x6214;
  kk_string_t _x6215 = kk_string_dup(s); /*string*/
  kk_ssize_t _x6216 = (KK_IZ(0)); /*ssize_t*/
  kk_ssize_t _x6217 = kk_string_len(s,kk_context()); /*ssize_t*/
  _x6214 = kk_std_core__new_Sslice(_x6215, _x6216, _x6217, _ctx); /*sslice*/
  _match_4936 = kk_std_text_parse_parse(_x6214, p, _ctx); /*std/text/parse/parse-error<2020>*/
  if (kk_std_text_parse__is_ParseOk(_match_4936)) {
    struct kk_std_text_parse_ParseOk* _con6218 = kk_std_text_parse__as_ParseOk(_match_4936);
    kk_box_t x = _con6218->result;
    kk_std_core__sslice rest0 = _con6218->rest;
    if (kk_likely(kk_std_text_parse__parse_error_is_unique(_match_4936))) {
      kk_std_text_parse__parse_error_free(_match_4936, _ctx);
    }
    else {
      kk_std_core__sslice_dup(rest0);
      kk_box_dup(x);
      kk_std_text_parse__parse_error_decref(_match_4936, _ctx);
    }
    kk_box_t _x6219;
    kk_std_core_types__tuple2_ _x6220 = kk_std_core_types__new_dash__lp__comma__rp_(x, kk_std_core__sslice_box(rest0, _ctx), _ctx); /*(6, 7)*/
    _x6219 = kk_std_core_types__tuple2__box(_x6220, _ctx); /*107*/
    return kk_std_core_types__new_Just(_x6219, _ctx);
  }
  {
    kk_std_text_parse__parse_error_drop(_match_4936, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}
 
// monadic lift

kk_char_t kk_std_text_parse__mlift2718_white(kk_std_core_types__maybe _y_2643, kk_context_t* _ctx) { /* (maybe<char>) -> parse char */ 
  if (kk_std_core_types__is_Nothing(_y_2643)) {
    kk_std_core_hnd__ev ev_3153;
    kk_ssize_t _x6221 = (KK_IZ(0)); /*ssize_t*/
    ev_3153 = kk_evv_at(_x6221,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_box_t _x6222;
    {
      struct kk_std_core_hnd_Ev* _con6223 = kk_std_core_hnd__as_Ev(ev_3153);
      kk_std_core_hnd__marker m0 = _con6223->marker;
      kk_box_t _box_x4691 = _con6223->hnd;
      kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x4691, NULL);
      kk_std_text_parse__hnd_parse_dup(h);
      kk_std_core_hnd__clause1 _match_4934;
      kk_std_core_hnd__clause1 _brw_4935 = kk_std_text_parse__select_fail(h, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
      kk_std_text_parse__hnd_parse_drop(h, _ctx);
      _match_4934 = _brw_4935; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
      {
        kk_function_t _fun_unbox_x4695 = _match_4934.clause;
        kk_box_t _x6225;
        kk_string_t _x6226 = kk_string_empty(); /*string*/
        _x6225 = kk_string_box(_x6226); /*51*/
        _x6222 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x4695, (_fun_unbox_x4695, m0, ev_3153, _x6225, _ctx)); /*52*/
      }
    }
    return kk_char_unbox(_x6222, _ctx);
  }
  {
    kk_box_t _box_x4699 = _y_2643._cons.Just.value;
    kk_char_t x0 = kk_char_unbox(_box_x4699, NULL);
    return x0;
  }
}


// lift anonymous function
struct kk_std_text_parse_white_fun6233__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_white_fun6233(kk_function_t _fself, kk_box_t _b_4713, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_white_fun6233(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_white_fun6233, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_white_fun6233(kk_function_t _fself, kk_box_t _b_4713, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x6234;
  kk_std_core_types__maybe _match_4932;
  kk_std_core__sslice _x6235 = kk_std_core__sslice_unbox(_b_4713, _ctx); /*sslice*/
  _match_4932 = kk_std_core_next(_x6235, _ctx); /*maybe<(char, sslice)>*/
  if (kk_std_core_types__is_Just(_match_4932)) {
    kk_box_t _box_x4714 = _match_4932._cons.Just.value;
    kk_std_core_types__tuple2_ _pat000 = kk_std_core_types__tuple2__unbox(_box_x4714, NULL);
    if (kk_std_core_types__is_dash__lp__comma__rp_(_pat000)) {
      kk_box_t _box_x4715 = _pat000.fst;
      kk_box_t _box_x4716 = _pat000.snd;
      kk_char_t c = kk_char_unbox(_box_x4715, NULL);
      kk_std_core__sslice rest0 = kk_std_core__sslice_unbox(_box_x4716, NULL);
      if (kk_std_core_is_white(c, _ctx)) {
        kk_std_core__sslice_dup(rest0);
        kk_std_core_types__maybe_drop(_match_4932, _ctx);
        kk_box_t _x6240;
        kk_std_core_types__tuple2_ _x6241 = kk_std_core_types__new_dash__lp__comma__rp_(kk_char_box(c, _ctx), kk_std_core__sslice_box(rest0, _ctx), _ctx); /*(6, 7)*/
        _x6240 = kk_std_core_types__tuple2__box(_x6241, _ctx); /*107*/
        _x6234 = kk_std_core_types__new_Just(_x6240, _ctx); /*maybe<107>*/
        goto _match6236;
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_4932, _ctx);
    _x6234 = kk_std_core_types__new_Nothing(_ctx); /*maybe<107>*/
  }
  _match6236: ;
  return kk_std_core_types__maybe_box(_x6234, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_white_fun6243__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_white_fun6243(kk_function_t _fself, kk_box_t _b_4725, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_white_fun6243(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_white_fun6243, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_white_fun6243(kk_function_t _fself, kk_box_t _b_4725, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t _x6244;
  kk_std_core_types__maybe _x6245 = kk_std_core_types__maybe_unbox(_b_4725, _ctx); /*maybe<char>*/
  _x6244 = kk_std_text_parse__mlift2718_white(_x6245, _ctx); /*char*/
  return kk_char_box(_x6244, _ctx);
}

kk_char_t kk_std_text_parse_white(kk_context_t* _ctx) { /* () -> parse char */ 
  kk_std_core_hnd__ev ev_3159;
  kk_ssize_t _x6229 = (KK_IZ(0)); /*ssize_t*/
  ev_3159 = kk_evv_at(_x6229,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
  kk_std_core_types__maybe x_3156;
  kk_box_t _x6230;
  {
    struct kk_std_core_hnd_Ev* _con6231 = kk_std_core_hnd__as_Ev(ev_3159);
    kk_std_core_hnd__marker m0 = _con6231->marker;
    kk_box_t _box_x4700 = _con6231->hnd;
    kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x4700, NULL);
    kk_std_text_parse__hnd_parse_dup(h);
    kk_std_core_hnd__clause1 _match_4931;
    kk_std_core_hnd__clause1 _brw_4933 = kk_std_text_parse__select_satisfy(h, _ctx); /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/;
    kk_std_text_parse__hnd_parse_drop(h, _ctx);
    _match_4931 = _brw_4933; /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/
    {
      kk_function_t _fun_unbox_x4707 = _match_4931.clause;
      _x6230 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x4707, (_fun_unbox_x4707, m0, ev_3159, kk_function_box(kk_std_text_parse_new_white_fun6233(_ctx)), _ctx)); /*52*/
    }
  }
  x_3156 = kk_std_core_types__maybe_unbox(_x6230, _ctx); /*maybe<char>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_3156, _ctx);
    kk_box_t _x6242 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_white_fun6243(_ctx), _ctx); /*3926*/
    return kk_char_unbox(_x6242, _ctx);
  }
  if (kk_std_core_types__is_Nothing(x_3156)) {
    kk_std_core_hnd__ev ev0_3162;
    kk_ssize_t _x6246 = (KK_IZ(0)); /*ssize_t*/
    ev0_3162 = kk_evv_at(_x6246,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_box_t _x6247;
    {
      struct kk_std_core_hnd_Ev* _con6248 = kk_std_core_hnd__as_Ev(ev0_3162);
      kk_std_core_hnd__marker m00 = _con6248->marker;
      kk_box_t _box_x4726 = _con6248->hnd;
      kk_std_text_parse__hnd_parse h0 = kk_std_text_parse__hnd_parse_unbox(_box_x4726, NULL);
      kk_std_text_parse__hnd_parse_dup(h0);
      kk_std_core_hnd__clause1 _match_4929;
      kk_std_core_hnd__clause1 _brw_4930 = kk_std_text_parse__select_fail(h0, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
      kk_std_text_parse__hnd_parse_drop(h0, _ctx);
      _match_4929 = _brw_4930; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
      {
        kk_function_t _fun_unbox_x4730 = _match_4929.clause;
        kk_box_t _x6250;
        kk_string_t _x6251 = kk_string_empty(); /*string*/
        _x6250 = kk_string_box(_x6251); /*51*/
        _x6247 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x4730, (_fun_unbox_x4730, m00, ev0_3162, _x6250, _ctx)); /*52*/
      }
    }
    return kk_char_unbox(_x6247, _ctx);
  }
  {
    kk_box_t _box_x4734 = x_3156._cons.Just.value;
    kk_char_t x2 = kk_char_unbox(_box_x4734, NULL);
    return x2;
  }
}
 
// lifted local: whitespace, .spec.2507
// specialized: std/text/parse/next-while0, on parameters pred, using:
// pred = std/core/is-white

kk_std_core_types__tuple2_ kk_std_text_parse__lift2514_whitespace(kk_std_core__sslice slice0, kk_std_core__list acc, kk_context_t* _ctx) { /* (slice0 : sslice, acc : list<char>) -> (list<char>, sslice) */ 
  kk__tailcall: ;
  kk_std_core_types__maybe _match_4927;
  kk_std_core__sslice _x6254 = kk_std_core__sslice_dup(slice0); /*sslice*/
  _match_4927 = kk_std_core_next(_x6254, _ctx); /*maybe<(char, sslice)>*/
  if (kk_std_core_types__is_Just(_match_4927)) {
    kk_box_t _box_x4736 = _match_4927._cons.Just.value;
    kk_std_core_types__tuple2_ _pat0 = kk_std_core_types__tuple2__unbox(_box_x4736, NULL);
    if (kk_std_core_types__is_dash__lp__comma__rp_(_pat0)) {
      kk_box_t _box_x4737 = _pat0.fst;
      kk_box_t _box_x4738 = _pat0.snd;
      kk_char_t c = kk_char_unbox(_box_x4737, NULL);
      kk_std_core__sslice rest0 = kk_std_core__sslice_unbox(_box_x4738, NULL);
      if (kk_std_core_is_white(c, _ctx)) {
        kk_std_core__sslice_drop(slice0, _ctx);
        kk_std_core__sslice_dup(rest0);
        kk_std_core_types__maybe_drop(_match_4927, _ctx);
        { // tailcall
          kk_std_core__list _x6258 = kk_std_core__new_Cons(kk_reuse_null, kk_char_box(c, _ctx), acc, _ctx); /*list<61>*/
          slice0 = rest0;
          acc = _x6258;
          goto kk__tailcall;
        }
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_4927, _ctx);
    kk_std_core__list _b_4745_4741 = kk_std_core__lift17288_reverse(kk_std_core__new_Nil(_ctx), acc, _ctx); /*list<char>*/;
    return kk_std_core_types__new_dash__lp__comma__rp_(kk_std_core__list_box(_b_4745_4741, _ctx), kk_std_core__sslice_box(slice0, _ctx), _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift2719_whitespace_fun6268__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift2719_whitespace_fun6268(kk_function_t _fself, kk_box_t _b_4757, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift2719_whitespace_fun6268(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift2719_whitespace_fun6268, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse__mlift2719_whitespace_fun6268(kk_function_t _fself, kk_box_t _b_4757, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x6269;
  kk_std_core__list _x6270 = kk_std_core__list_unbox(_b_4757, _ctx); /*list<char>*/
  _x6269 = kk_std_core_string_2(_x6270, _ctx); /*string*/
  return kk_string_box(_x6269);
}

kk_string_t kk_std_text_parse__mlift2719_whitespace(kk_std_core_types__maybe _y_2646, kk_context_t* _ctx) { /* (maybe<list<char>>) -> parse string */ 
  kk_std_core__list x_3165;
  if (kk_std_core_types__is_Nothing(_y_2646)) {
    kk_std_core_hnd__ev ev_3167;
    kk_ssize_t _x6259 = (KK_IZ(0)); /*ssize_t*/
    ev_3167 = kk_evv_at(_x6259,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_box_t _x6260;
    {
      struct kk_std_core_hnd_Ev* _con6261 = kk_std_core_hnd__as_Ev(ev_3167);
      kk_std_core_hnd__marker m0 = _con6261->marker;
      kk_box_t _box_x4747 = _con6261->hnd;
      kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x4747, NULL);
      kk_std_text_parse__hnd_parse_dup(h);
      kk_std_core_hnd__clause1 _match_4925;
      kk_std_core_hnd__clause1 _brw_4926 = kk_std_text_parse__select_fail(h, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
      kk_std_text_parse__hnd_parse_drop(h, _ctx);
      _match_4925 = _brw_4926; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
      {
        kk_function_t _fun_unbox_x4751 = _match_4925.clause;
        kk_box_t _x6263;
        kk_string_t _x6264 = kk_string_empty(); /*string*/
        _x6263 = kk_string_box(_x6264); /*51*/
        _x6260 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x4751, (_fun_unbox_x4751, m0, ev_3167, _x6263, _ctx)); /*52*/
      }
    }
    x_3165 = kk_std_core__list_unbox(_x6260, _ctx); /*list<char>*/
  }
  else {
    kk_box_t _box_x4755 = _y_2646._cons.Just.value;
    kk_std_core__list x1 = kk_std_core__list_unbox(_box_x4755, NULL);
    x_3165 = x1; /*list<char>*/
  }
  if (kk_yielding(kk_context())) {
    kk_std_core__list_drop(x_3165, _ctx);
    kk_box_t _x6267 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift2719_whitespace_fun6268(_ctx), _ctx); /*3926*/
    return kk_string_unbox(_x6267);
  }
  {
    return kk_std_core_string_2(x_3165, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_whitespace_fun6275__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_whitespace_fun6275(kk_function_t _fself, kk_box_t _b_4772, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_whitespace_fun6275(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_whitespace_fun6275, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_whitespace_fun6275(kk_function_t _fself, kk_box_t _b_4772, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x6276;
  kk_std_core_types__tuple2_ _match_4922;
  kk_std_core__sslice _x6277 = kk_std_core__sslice_unbox(_b_4772, _ctx); /*sslice*/
  _match_4922 = kk_std_text_parse__lift2514_whitespace(_x6277, kk_std_core__new_Nil(_ctx), _ctx); /*(list<char>, sslice)*/
  {
    kk_box_t _box_x4773 = _match_4922.fst;
    kk_box_t _box_x4774 = _match_4922.snd;
    kk_std_core__list _pat000 = kk_std_core__list_unbox(_box_x4773, NULL);
    kk_std_core__sslice _pat1000 = kk_std_core__sslice_unbox(_box_x4774, NULL);
    if (kk_std_core__is_Nil(_pat000)) {
      kk_std_core_types__tuple2__drop(_match_4922, _ctx);
      _x6276 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/
      goto _match6278;
    }
  }
  {
    kk_box_t _box_x4775 = _match_4922.fst;
    kk_box_t _box_x4776 = _match_4922.snd;
    kk_std_core__list xs = kk_std_core__list_unbox(_box_x4775, NULL);
    kk_std_core__sslice rest00 = kk_std_core__sslice_unbox(_box_x4776, NULL);
    kk_std_core__sslice_dup(rest00);
    kk_std_core__list_dup(xs);
    kk_std_core_types__tuple2__drop(_match_4922, _ctx);
    kk_box_t _x6283;
    kk_std_core_types__tuple2_ _x6284 = kk_std_core_types__new_dash__lp__comma__rp_(kk_std_core__list_box(xs, _ctx), kk_std_core__sslice_box(rest00, _ctx), _ctx); /*(6, 7)*/
    _x6283 = kk_std_core_types__tuple2__box(_x6284, _ctx); /*107*/
    _x6276 = kk_std_core_types__new_Just(_x6283, _ctx); /*forall<a> maybe<a>*/
  }
  _match6278: ;
  return kk_std_core_types__maybe_box(_x6276, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_whitespace_fun6286__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_whitespace_fun6286(kk_function_t _fself, kk_box_t _b_4785, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_whitespace_fun6286(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_whitespace_fun6286, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_whitespace_fun6286(kk_function_t _fself, kk_box_t _b_4785, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x6287;
  kk_std_core_types__maybe _x6288 = kk_std_core_types__maybe_unbox(_b_4785, _ctx); /*maybe<list<char>>*/
  _x6287 = kk_std_text_parse__mlift2719_whitespace(_x6288, _ctx); /*string*/
  return kk_string_box(_x6287);
}


// lift anonymous function
struct kk_std_text_parse_whitespace_fun6298__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_whitespace_fun6298(kk_function_t _fself, kk_box_t _b_4796, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_whitespace_fun6298(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_whitespace_fun6298, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_whitespace_fun6298(kk_function_t _fself, kk_box_t _b_4796, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x6299;
  kk_std_core__list _x6300 = kk_std_core__list_unbox(_b_4796, _ctx); /*list<char>*/
  _x6299 = kk_std_core_string_2(_x6300, _ctx); /*string*/
  return kk_string_box(_x6299);
}

kk_string_t kk_std_text_parse_whitespace(kk_context_t* _ctx) { /* () -> parse string */ 
  kk_std_core_hnd__ev ev_3173;
  kk_ssize_t _x6271 = (KK_IZ(0)); /*ssize_t*/
  ev_3173 = kk_evv_at(_x6271,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
  kk_std_core_types__maybe x_3170;
  kk_box_t _x6272;
  {
    struct kk_std_core_hnd_Ev* _con6273 = kk_std_core_hnd__as_Ev(ev_3173);
    kk_std_core_hnd__marker m0 = _con6273->marker;
    kk_box_t _box_x4759 = _con6273->hnd;
    kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x4759, NULL);
    kk_std_text_parse__hnd_parse_dup(h);
    kk_std_core_hnd__clause1 _match_4921;
    kk_std_core_hnd__clause1 _brw_4923 = kk_std_text_parse__select_satisfy(h, _ctx); /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/;
    kk_std_text_parse__hnd_parse_drop(h, _ctx);
    _match_4921 = _brw_4923; /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/
    {
      kk_function_t _fun_unbox_x4766 = _match_4921.clause;
      _x6272 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x4766, (_fun_unbox_x4766, m0, ev_3173, kk_function_box(kk_std_text_parse_new_whitespace_fun6275(_ctx)), _ctx)); /*52*/
    }
  }
  x_3170 = kk_std_core_types__maybe_unbox(_x6272, _ctx); /*maybe<list<char>>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_3170, _ctx);
    kk_box_t _x6285 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_whitespace_fun6286(_ctx), _ctx); /*3926*/
    return kk_string_unbox(_x6285);
  }
  {
    kk_std_core__list x1_3176;
    if (kk_std_core_types__is_Nothing(x_3170)) {
      kk_std_core_hnd__ev ev0_3178;
      kk_ssize_t _x6289 = (KK_IZ(0)); /*ssize_t*/
      ev0_3178 = kk_evv_at(_x6289,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
      kk_box_t _x6290;
      {
        struct kk_std_core_hnd_Ev* _con6291 = kk_std_core_hnd__as_Ev(ev0_3178);
        kk_std_core_hnd__marker m00 = _con6291->marker;
        kk_box_t _box_x4786 = _con6291->hnd;
        kk_std_text_parse__hnd_parse h0 = kk_std_text_parse__hnd_parse_unbox(_box_x4786, NULL);
        kk_std_text_parse__hnd_parse_dup(h0);
        kk_std_core_hnd__clause1 _match_4919;
        kk_std_core_hnd__clause1 _brw_4920 = kk_std_text_parse__select_fail(h0, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
        kk_std_text_parse__hnd_parse_drop(h0, _ctx);
        _match_4919 = _brw_4920; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
        {
          kk_function_t _fun_unbox_x4790 = _match_4919.clause;
          kk_box_t _x6293;
          kk_string_t _x6294 = kk_string_empty(); /*string*/
          _x6293 = kk_string_box(_x6294); /*51*/
          _x6290 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x4790, (_fun_unbox_x4790, m00, ev0_3178, _x6293, _ctx)); /*52*/
        }
      }
      x1_3176 = kk_std_core__list_unbox(_x6290, _ctx); /*list<char>*/
    }
    else {
      kk_box_t _box_x4794 = x_3170._cons.Just.value;
      kk_std_core__list x3 = kk_std_core__list_unbox(_box_x4794, NULL);
      x1_3176 = x3; /*list<char>*/
    }
    if (kk_yielding(kk_context())) {
      kk_std_core__list_drop(x1_3176, _ctx);
      kk_box_t _x6297 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_whitespace_fun6298(_ctx), _ctx); /*3926*/
      return kk_string_unbox(_x6297);
    }
    {
      return kk_std_core_string_2(x1_3176, _ctx);
    }
  }
}
 
// lifted local: whitespace0, .spec.2508
// specialized: std/text/parse/next-while0, on parameters pred, using:
// pred = std/core/is-white

kk_std_core_types__tuple2_ kk_std_text_parse__lift2515_whitespace0(kk_std_core__sslice slice0, kk_std_core__list acc, kk_context_t* _ctx) { /* (slice0 : sslice, acc : list<char>) -> (list<char>, sslice) */ 
  kk__tailcall: ;
  kk_std_core_types__maybe _match_4916;
  kk_std_core__sslice _x6301 = kk_std_core__sslice_dup(slice0); /*sslice*/
  _match_4916 = kk_std_core_next(_x6301, _ctx); /*maybe<(char, sslice)>*/
  if (kk_std_core_types__is_Just(_match_4916)) {
    kk_box_t _box_x4799 = _match_4916._cons.Just.value;
    kk_std_core_types__tuple2_ _pat00 = kk_std_core_types__tuple2__unbox(_box_x4799, NULL);
    if (kk_std_core_types__is_dash__lp__comma__rp_(_pat00)) {
      kk_box_t _box_x4800 = _pat00.fst;
      kk_box_t _box_x4801 = _pat00.snd;
      kk_char_t c = kk_char_unbox(_box_x4800, NULL);
      kk_std_core__sslice rest0 = kk_std_core__sslice_unbox(_box_x4801, NULL);
      if (kk_std_core_is_white(c, _ctx)) {
        kk_std_core__sslice_drop(slice0, _ctx);
        kk_std_core__sslice_dup(rest0);
        kk_std_core_types__maybe_drop(_match_4916, _ctx);
        { // tailcall
          kk_std_core__list _x6305 = kk_std_core__new_Cons(kk_reuse_null, kk_char_box(c, _ctx), acc, _ctx); /*list<61>*/
          slice0 = rest0;
          acc = _x6305;
          goto kk__tailcall;
        }
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_4916, _ctx);
    kk_std_core__list _b_4808_4804 = kk_std_core__lift17288_reverse(kk_std_core__new_Nil(_ctx), acc, _ctx); /*list<char>*/;
    return kk_std_core_types__new_dash__lp__comma__rp_(kk_std_core__list_box(_b_4808_4804, _ctx), kk_std_core__sslice_box(slice0, _ctx), _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift2720_whitespace0_fun6315__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift2720_whitespace0_fun6315(kk_function_t _fself, kk_box_t _b_4820, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift2720_whitespace0_fun6315(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift2720_whitespace0_fun6315, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse__mlift2720_whitespace0_fun6315(kk_function_t _fself, kk_box_t _b_4820, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x6316;
  kk_std_core__list _x6317 = kk_std_core__list_unbox(_b_4820, _ctx); /*list<char>*/
  _x6316 = kk_std_core_string_2(_x6317, _ctx); /*string*/
  return kk_string_box(_x6316);
}

kk_string_t kk_std_text_parse__mlift2720_whitespace0(kk_std_core_types__maybe _y_2650, kk_context_t* _ctx) { /* (maybe<list<char>>) -> parse string */ 
  kk_std_core__list x_3181;
  if (kk_std_core_types__is_Nothing(_y_2650)) {
    kk_std_core_hnd__ev ev_3183;
    kk_ssize_t _x6306 = (KK_IZ(0)); /*ssize_t*/
    ev_3183 = kk_evv_at(_x6306,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_box_t _x6307;
    {
      struct kk_std_core_hnd_Ev* _con6308 = kk_std_core_hnd__as_Ev(ev_3183);
      kk_std_core_hnd__marker m0 = _con6308->marker;
      kk_box_t _box_x4810 = _con6308->hnd;
      kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x4810, NULL);
      kk_std_text_parse__hnd_parse_dup(h);
      kk_std_core_hnd__clause1 _match_4914;
      kk_std_core_hnd__clause1 _brw_4915 = kk_std_text_parse__select_fail(h, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
      kk_std_text_parse__hnd_parse_drop(h, _ctx);
      _match_4914 = _brw_4915; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
      {
        kk_function_t _fun_unbox_x4814 = _match_4914.clause;
        kk_box_t _x6310;
        kk_string_t _x6311 = kk_string_empty(); /*string*/
        _x6310 = kk_string_box(_x6311); /*51*/
        _x6307 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x4814, (_fun_unbox_x4814, m0, ev_3183, _x6310, _ctx)); /*52*/
      }
    }
    x_3181 = kk_std_core__list_unbox(_x6307, _ctx); /*list<char>*/
  }
  else {
    kk_box_t _box_x4818 = _y_2650._cons.Just.value;
    kk_std_core__list x1 = kk_std_core__list_unbox(_box_x4818, NULL);
    x_3181 = x1; /*list<char>*/
  }
  if (kk_yielding(kk_context())) {
    kk_std_core__list_drop(x_3181, _ctx);
    kk_box_t _x6314 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift2720_whitespace0_fun6315(_ctx), _ctx); /*3926*/
    return kk_string_unbox(_x6314);
  }
  {
    return kk_std_core_string_2(x_3181, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift2721_whitespace0_fun6322__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift2721_whitespace0_fun6322(kk_function_t _fself, kk_box_t _b_4835, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift2721_whitespace0_fun6322(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift2721_whitespace0_fun6322, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse__mlift2721_whitespace0_fun6322(kk_function_t _fself, kk_box_t _b_4835, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x6323;
  kk_std_core_types__tuple2_ _match_4911;
  kk_std_core__sslice _x6324 = kk_std_core__sslice_unbox(_b_4835, _ctx); /*sslice*/
  _match_4911 = kk_std_text_parse__lift2515_whitespace0(_x6324, kk_std_core__new_Nil(_ctx), _ctx); /*(list<char>, sslice)*/
  {
    kk_box_t _box_x4836 = _match_4911.fst;
    kk_box_t _box_x4837 = _match_4911.snd;
    kk_std_core__list _pat010 = kk_std_core__list_unbox(_box_x4836, NULL);
    kk_std_core__sslice _pat100 = kk_std_core__sslice_unbox(_box_x4837, NULL);
    if (kk_std_core__is_Nil(_pat010)) {
      kk_std_core_types__tuple2__drop(_match_4911, _ctx);
      _x6323 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/
      goto _match6325;
    }
  }
  {
    kk_box_t _box_x4838 = _match_4911.fst;
    kk_box_t _box_x4839 = _match_4911.snd;
    kk_std_core__list xs = kk_std_core__list_unbox(_box_x4838, NULL);
    kk_std_core__sslice rest00 = kk_std_core__sslice_unbox(_box_x4839, NULL);
    kk_std_core__sslice_dup(rest00);
    kk_std_core__list_dup(xs);
    kk_std_core_types__tuple2__drop(_match_4911, _ctx);
    kk_box_t _x6330;
    kk_std_core_types__tuple2_ _x6331 = kk_std_core_types__new_dash__lp__comma__rp_(kk_std_core__list_box(xs, _ctx), kk_std_core__sslice_box(rest00, _ctx), _ctx); /*(6, 7)*/
    _x6330 = kk_std_core_types__tuple2__box(_x6331, _ctx); /*107*/
    _x6323 = kk_std_core_types__new_Just(_x6330, _ctx); /*forall<a> maybe<a>*/
  }
  _match6325: ;
  return kk_std_core_types__maybe_box(_x6323, _ctx);
}


// lift anonymous function
struct kk_std_text_parse__mlift2721_whitespace0_fun6333__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift2721_whitespace0_fun6333(kk_function_t _fself, kk_box_t _b_4848, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift2721_whitespace0_fun6333(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift2721_whitespace0_fun6333, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse__mlift2721_whitespace0_fun6333(kk_function_t _fself, kk_box_t _b_4848, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x6334;
  kk_std_core_types__maybe _x6335 = kk_std_core_types__maybe_unbox(_b_4848, _ctx); /*maybe<list<char>>*/
  _x6334 = kk_std_text_parse__mlift2720_whitespace0(_x6335, _ctx); /*string*/
  return kk_string_box(_x6334);
}

kk_string_t kk_std_text_parse__mlift2721_whitespace0(bool _y_2649, kk_context_t* _ctx) { /* (bool) -> parse string */ 
  if (_y_2649) {
    kk_std_core_hnd__ev ev_3188;
    kk_ssize_t _x6318 = (KK_IZ(0)); /*ssize_t*/
    ev_3188 = kk_evv_at(_x6318,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_std_core_types__maybe x_3186;
    kk_box_t _x6319;
    {
      struct kk_std_core_hnd_Ev* _con6320 = kk_std_core_hnd__as_Ev(ev_3188);
      kk_std_core_hnd__marker m0 = _con6320->marker;
      kk_box_t _box_x4822 = _con6320->hnd;
      kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x4822, NULL);
      kk_std_text_parse__hnd_parse_dup(h);
      kk_std_core_hnd__clause1 _match_4910;
      kk_std_core_hnd__clause1 _brw_4912 = kk_std_text_parse__select_satisfy(h, _ctx); /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/;
      kk_std_text_parse__hnd_parse_drop(h, _ctx);
      _match_4910 = _brw_4912; /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/
      {
        kk_function_t _fun_unbox_x4829 = _match_4910.clause;
        _x6319 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x4829, (_fun_unbox_x4829, m0, ev_3188, kk_function_box(kk_std_text_parse__new_mlift2721_whitespace0_fun6322(_ctx)), _ctx)); /*52*/
      }
    }
    x_3186 = kk_std_core_types__maybe_unbox(_x6319, _ctx); /*maybe<list<char>>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__maybe_drop(x_3186, _ctx);
      kk_box_t _x6332 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift2721_whitespace0_fun6333(_ctx), _ctx); /*3926*/
      return kk_string_unbox(_x6332);
    }
    {
      return kk_std_text_parse__mlift2720_whitespace0(x_3186, _ctx);
    }
  }
  {
    return kk_string_empty();
  }
}


// lift anonymous function
struct kk_std_text_parse_whitespace0_fun6342__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_whitespace0_fun6342(kk_function_t _fself, kk_box_t _b_4857, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_whitespace0_fun6342(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_whitespace0_fun6342, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_whitespace0_fun6342(kk_function_t _fself, kk_box_t _b_4857, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x6343;
  bool _x6344 = kk_bool_unbox(_b_4857); /*bool*/
  _x6343 = kk_std_text_parse__mlift2721_whitespace0(_x6344, _ctx); /*string*/
  return kk_string_box(_x6343);
}


// lift anonymous function
struct kk_std_text_parse_whitespace0_fun6349__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_whitespace0_fun6349(kk_function_t _fself, kk_box_t _b_4871, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_whitespace0_fun6349(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_whitespace0_fun6349, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_whitespace0_fun6349(kk_function_t _fself, kk_box_t _b_4871, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x6350;
  kk_std_core_types__tuple2_ _match_4905;
  kk_std_core__sslice _x6351 = kk_std_core__sslice_unbox(_b_4871, _ctx); /*sslice*/
  _match_4905 = kk_std_text_parse__lift2515_whitespace0(_x6351, kk_std_core__new_Nil(_ctx), _ctx); /*(list<char>, sslice)*/
  {
    kk_box_t _box_x4872 = _match_4905.fst;
    kk_box_t _box_x4873 = _match_4905.snd;
    kk_std_core__list _pat010 = kk_std_core__list_unbox(_box_x4872, NULL);
    kk_std_core__sslice _pat100 = kk_std_core__sslice_unbox(_box_x4873, NULL);
    if (kk_std_core__is_Nil(_pat010)) {
      kk_std_core_types__tuple2__drop(_match_4905, _ctx);
      _x6350 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/
      goto _match6352;
    }
  }
  {
    kk_box_t _box_x4874 = _match_4905.fst;
    kk_box_t _box_x4875 = _match_4905.snd;
    kk_std_core__list xs = kk_std_core__list_unbox(_box_x4874, NULL);
    kk_std_core__sslice rest00 = kk_std_core__sslice_unbox(_box_x4875, NULL);
    kk_std_core__sslice_dup(rest00);
    kk_std_core__list_dup(xs);
    kk_std_core_types__tuple2__drop(_match_4905, _ctx);
    kk_box_t _x6357;
    kk_std_core_types__tuple2_ _x6358 = kk_std_core_types__new_dash__lp__comma__rp_(kk_std_core__list_box(xs, _ctx), kk_std_core__sslice_box(rest00, _ctx), _ctx); /*(6, 7)*/
    _x6357 = kk_std_core_types__tuple2__box(_x6358, _ctx); /*107*/
    _x6350 = kk_std_core_types__new_Just(_x6357, _ctx); /*forall<a> maybe<a>*/
  }
  _match6352: ;
  return kk_std_core_types__maybe_box(_x6350, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_whitespace0_fun6360__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_whitespace0_fun6360(kk_function_t _fself, kk_box_t _b_4884, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_whitespace0_fun6360(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_whitespace0_fun6360, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_whitespace0_fun6360(kk_function_t _fself, kk_box_t _b_4884, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x6361;
  kk_std_core_types__maybe _x6362 = kk_std_core_types__maybe_unbox(_b_4884, _ctx); /*maybe<list<char>>*/
  _x6361 = kk_std_text_parse__mlift2720_whitespace0(_x6362, _ctx); /*string*/
  return kk_string_box(_x6361);
}


// lift anonymous function
struct kk_std_text_parse_whitespace0_fun6372__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_whitespace0_fun6372(kk_function_t _fself, kk_box_t _b_4895, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_whitespace0_fun6372(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_whitespace0_fun6372, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_text_parse_whitespace0_fun6372(kk_function_t _fself, kk_box_t _b_4895, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x6373;
  kk_std_core__list _x6374 = kk_std_core__list_unbox(_b_4895, _ctx); /*list<char>*/
  _x6373 = kk_std_core_string_2(_x6374, _ctx); /*string*/
  return kk_string_box(_x6373);
}

kk_string_t kk_std_text_parse_whitespace0(kk_context_t* _ctx) { /* () -> parse string */ 
  kk_std_core_hnd__ev ev_3194;
  kk_ssize_t _x6337 = (KK_IZ(0)); /*ssize_t*/
  ev_3194 = kk_evv_at(_x6337,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
  bool x_3191;
  kk_box_t _x6338;
  {
    struct kk_std_core_hnd_Ev* _con6339 = kk_std_core_hnd__as_Ev(ev_3194);
    kk_std_core_hnd__marker m0 = _con6339->marker;
    kk_box_t _box_x4850 = _con6339->hnd;
    kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x4850, NULL);
    kk_std_text_parse__hnd_parse_dup(h);
    kk_std_core_hnd__clause0 _match_4907;
    kk_std_core_hnd__clause0 _brw_4908 = kk_std_text_parse__select_pick(h, _ctx); /*std/core/hnd/clause0<bool,std/text/parse/.hnd-parse,412,413>*/;
    kk_std_text_parse__hnd_parse_drop(h, _ctx);
    _match_4907 = _brw_4908; /*std/core/hnd/clause0<bool,std/text/parse/.hnd-parse,412,413>*/
    {
      kk_function_t _fun_unbox_x4853 = _match_4907.clause;
      _x6338 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x4853, (_fun_unbox_x4853, m0, ev_3194, _ctx)); /*37*/
    }
  }
  x_3191 = kk_bool_unbox(_x6338); /*bool*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x6341 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_whitespace0_fun6342(_ctx), _ctx); /*3926*/
    return kk_string_unbox(_x6341);
  }
  if (x_3191) {
    kk_std_core_hnd__ev ev0_3199;
    kk_ssize_t _x6345 = (KK_IZ(0)); /*ssize_t*/
    ev0_3199 = kk_evv_at(_x6345,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
    kk_std_core_types__maybe x0_3196;
    kk_box_t _x6346;
    {
      struct kk_std_core_hnd_Ev* _con6347 = kk_std_core_hnd__as_Ev(ev0_3199);
      kk_std_core_hnd__marker m00 = _con6347->marker;
      kk_box_t _box_x4858 = _con6347->hnd;
      kk_std_text_parse__hnd_parse h0 = kk_std_text_parse__hnd_parse_unbox(_box_x4858, NULL);
      kk_std_text_parse__hnd_parse_dup(h0);
      kk_std_core_hnd__clause1 _match_4904;
      kk_std_core_hnd__clause1 _brw_4906 = kk_std_text_parse__select_satisfy(h0, _ctx); /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/;
      kk_std_text_parse__hnd_parse_drop(h0, _ctx);
      _match_4904 = _brw_4906; /*std/core/hnd/clause1<(sslice) -> total maybe<(433, sslice)>,maybe<433>,std/text/parse/.hnd-parse,434,435>*/
      {
        kk_function_t _fun_unbox_x4865 = _match_4904.clause;
        _x6346 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x4865, (_fun_unbox_x4865, m00, ev0_3199, kk_function_box(kk_std_text_parse_new_whitespace0_fun6349(_ctx)), _ctx)); /*52*/
      }
    }
    x0_3196 = kk_std_core_types__maybe_unbox(_x6346, _ctx); /*maybe<list<char>>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__maybe_drop(x0_3196, _ctx);
      kk_box_t _x6359 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_whitespace0_fun6360(_ctx), _ctx); /*3926*/
      return kk_string_unbox(_x6359);
    }
    {
      kk_std_core__list x2_3202;
      if (kk_std_core_types__is_Nothing(x0_3196)) {
        kk_std_core_hnd__ev ev1_3204;
        kk_ssize_t _x6363 = (KK_IZ(0)); /*ssize_t*/
        ev1_3204 = kk_evv_at(_x6363,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
        kk_box_t _x6364;
        {
          struct kk_std_core_hnd_Ev* _con6365 = kk_std_core_hnd__as_Ev(ev1_3204);
          kk_std_core_hnd__marker m01 = _con6365->marker;
          kk_box_t _box_x4885 = _con6365->hnd;
          kk_std_text_parse__hnd_parse h1 = kk_std_text_parse__hnd_parse_unbox(_box_x4885, NULL);
          kk_std_text_parse__hnd_parse_dup(h1);
          kk_std_core_hnd__clause1 _match_4902;
          kk_std_core_hnd__clause1 _brw_4903 = kk_std_text_parse__select_fail(h1, _ctx); /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/;
          kk_std_text_parse__hnd_parse_drop(h1, _ctx);
          _match_4902 = _brw_4903; /*std/core/hnd/clause1<string,394,std/text/parse/.hnd-parse,395,396>*/
          {
            kk_function_t _fun_unbox_x4889 = _match_4902.clause;
            kk_box_t _x6367;
            kk_string_t _x6368 = kk_string_empty(); /*string*/
            _x6367 = kk_string_box(_x6368); /*51*/
            _x6364 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x4889, (_fun_unbox_x4889, m01, ev1_3204, _x6367, _ctx)); /*52*/
          }
        }
        x2_3202 = kk_std_core__list_unbox(_x6364, _ctx); /*list<char>*/
      }
      else {
        kk_box_t _box_x4893 = x0_3196._cons.Just.value;
        kk_std_core__list x4 = kk_std_core__list_unbox(_box_x4893, NULL);
        x2_3202 = x4; /*list<char>*/
      }
      if (kk_yielding(kk_context())) {
        kk_std_core__list_drop(x2_3202, _ctx);
        kk_box_t _x6371 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_whitespace0_fun6372(_ctx), _ctx); /*3926*/
        return kk_string_unbox(_x6371);
      }
      {
        return kk_std_core_string_2(x2_3202, _ctx);
      }
    }
  }
  {
    return kk_string_empty();
  }
}

// initialization
void kk_std_text_parse__init(kk_context_t* _ctx){
  static bool _kk_initialized = false;
  if (_kk_initialized) return;
  _kk_initialized = true;
  kk_std_core_types__init(_ctx);
  kk_std_core_hnd__init(_ctx);
  kk_std_core__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
  {
    kk_string_t _x5209;
    kk_define_string_literal(, _s5210, 11, "parse.parse")
    _x5209 = kk_string_dup(_s5210); /*string*/
    kk_std_text_parse__tag_parse = kk_std_core_hnd__new_Htag(_x5209, _ctx); /*std/core/hnd/htag<std/text/parse/.hnd-parse>*/
  }
}

// termination
void kk_std_text_parse__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_core_hnd__htag_drop(kk_std_text_parse__tag_parse, _ctx);
  kk_std_core__done(_ctx);
  kk_std_core_hnd__done(_ctx);
  kk_std_core_types__done(_ctx);
}
