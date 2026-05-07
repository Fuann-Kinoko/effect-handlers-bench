// Koka generated module: "main", koka version: 2.4.0, platform: 64-bit
#include "main.h"
 
// runtime tag for the `:fail` effect

kk_std_core_hnd__htag kk_main__tag_fail;
 
// handler for the `:fail` effect

kk_box_t kk_main__handle_fail(int32_t cfc, kk_main__hnd_fail hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (cfc : int32, hnd : .hnd-fail<e,b>, ret : (res : a) -> e b, action : () -> <fail|e> a) -> e b */ 
  kk_std_core_hnd__htag _x1238 = kk_std_core_hnd__htag_dup(kk_main__tag_fail); /*std/core/hnd/htag<.hnd-fail>*/
  return kk_std_core_hnd__hhandle(_x1238, cfc, kk_main__hnd_fail_box(hnd, _ctx), ret, action, _ctx);
}
 
// runtime tag for the `:flip` effect

kk_std_core_hnd__htag kk_main__tag_flip;
 
// handler for the `:flip` effect

kk_box_t kk_main__handle_flip(int32_t cfc, kk_main__hnd_flip hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (cfc : int32, hnd : .hnd-flip<e,b>, ret : (res : a) -> e b, action : () -> <flip|e> a) -> e b */ 
  kk_std_core_hnd__htag _x1241 = kk_std_core_hnd__htag_dup(kk_main__tag_flip); /*std/core/hnd/htag<.hnd-flip>*/
  return kk_std_core_hnd__hhandle(_x1241, cfc, kk_main__hnd_flip_box(hnd, _ctx), ret, action, _ctx);
}

kk_integer_t kk_main_hash(kk_std_core_types__tuple3_ _pat__25__10, kk_context_t* _ctx) { /* ((int, int, int)) -> int */ 
  {
    kk_box_t _box_x1028 = _pat__25__10.fst;
    kk_box_t _box_x1029 = _pat__25__10.snd;
    kk_box_t _box_x1030 = _pat__25__10.thd;
    kk_integer_t a = kk_integer_unbox(_box_x1028);
    kk_integer_t b = kk_integer_unbox(_box_x1029);
    kk_integer_t c = kk_integer_unbox(_box_x1030);
    kk_integer_dup(a);
    kk_integer_dup(b);
    kk_integer_dup(c);
    kk_std_core_types__tuple3__drop(_pat__25__10, _ctx);
    kk_integer_t x0_807 = kk_integer_mul((kk_integer_from_small(53)),a,kk_context()); /*int*/;
    kk_integer_t y0_808 = kk_integer_mul((kk_integer_from_small(2809)),b,kk_context()); /*int*/;
    kk_integer_t x_805 = kk_integer_add(x0_807,y0_808,kk_context()); /*int*/;
    kk_integer_t y_806 = kk_integer_mul((kk_integer_from_int(148877, _ctx)),c,kk_context()); /*int*/;
    kk_integer_t _x1247 = kk_integer_add(x_805,y_806,kk_context()); /*int*/
    return kk_integer_mod(_x1247,(kk_integer_from_int(1000000007, _ctx)),kk_context());
  }
}
 
// monadic lift

kk_integer_t kk_main__mlift955_choice(kk_integer_t n, bool _y_928, kk_context_t* _ctx) { /* (n : int, bool) -> <flip,fail,div> int */ 
  if (_y_928) {
    return n;
  }
  {
    kk_integer_t _x1255 = kk_integer_add_small_const(n, -1, _ctx); /*int*/
    return kk_main_choice(_x1255, _ctx);
  }
}


// lift anonymous function
struct kk_main_choice_fun1261__t {
  struct kk_function_s _base;
  kk_ssize_t i_966;
};
static kk_box_t kk_main_choice_fun1261(kk_function_t _fself, kk_function_t _b_1049, kk_box_t _b_1050, kk_context_t* _ctx);
static kk_function_t kk_main_new_choice_fun1261(kk_ssize_t i_966, kk_context_t* _ctx) {
  struct kk_main_choice_fun1261__t* _self = kk_function_alloc_as(struct kk_main_choice_fun1261__t, 1, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_choice_fun1261, kk_context());
  _self->i_966 = i_966;
  return &_self->_base;
}



// lift anonymous function
struct kk_main_choice_fun1262__t {
  struct kk_function_s _base;
  kk_function_t _b_1049;
};
static kk_integer_t kk_main_choice_fun1262(kk_function_t _fself, kk_box_t _b_1051, kk_context_t* _ctx);
static kk_function_t kk_main_new_choice_fun1262(kk_function_t _b_1049, kk_context_t* _ctx) {
  struct kk_main_choice_fun1262__t* _self = kk_function_alloc_as(struct kk_main_choice_fun1262__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_choice_fun1262, kk_context());
  _self->_b_1049 = _b_1049;
  return &_self->_base;
}

static kk_integer_t kk_main_choice_fun1262(kk_function_t _fself, kk_box_t _b_1051, kk_context_t* _ctx) {
  struct kk_main_choice_fun1262__t* _self = kk_function_as(struct kk_main_choice_fun1262__t*, _fself);
  kk_function_t _b_1049 = _self->_b_1049; /* (1003) -> 1001 1000 */
  kk_drop_match(_self, {kk_function_dup(_b_1049);}, {}, _ctx)
  kk_box_t _x1263 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _b_1049, (_b_1049, _b_1051, _ctx)); /*1000*/
  return kk_integer_unbox(_x1263);
}


// lift anonymous function
struct kk_main_choice_fun1264__t {
  struct kk_function_s _base;
  kk_function_t _b_1076_1045;
};
static kk_box_t kk_main_choice_fun1264(kk_function_t _fself, kk_box_t _b_1047, kk_context_t* _ctx);
static kk_function_t kk_main_new_choice_fun1264(kk_function_t _b_1076_1045, kk_context_t* _ctx) {
  struct kk_main_choice_fun1264__t* _self = kk_function_alloc_as(struct kk_main_choice_fun1264__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_choice_fun1264, kk_context());
  _self->_b_1076_1045 = _b_1076_1045;
  return &_self->_base;
}

static kk_box_t kk_main_choice_fun1264(kk_function_t _fself, kk_box_t _b_1047, kk_context_t* _ctx) {
  struct kk_main_choice_fun1264__t* _self = kk_function_as(struct kk_main_choice_fun1264__t*, _fself);
  kk_function_t _b_1076_1045 = _self->_b_1076_1045; /* (1009) -> <fail,flip,div> int */
  kk_drop_match(_self, {kk_function_dup(_b_1076_1045);}, {}, _ctx)
  kk_integer_t _x1265 = kk_function_call(kk_integer_t, (kk_function_t, kk_box_t, kk_context_t*), _b_1076_1045, (_b_1076_1045, _b_1047, _ctx)); /*int*/
  return kk_integer_box(_x1265);
}
static kk_box_t kk_main_choice_fun1261(kk_function_t _fself, kk_function_t _b_1049, kk_box_t _b_1050, kk_context_t* _ctx) {
  struct kk_main_choice_fun1261__t* _self = kk_function_as(struct kk_main_choice_fun1261__t*, _fself);
  kk_ssize_t i_966 = _self->i_966; /* std/core/hnd/ev-index */
  kk_drop_match(_self, {;}, {}, _ctx)
  kk_function_t cont_1080 = kk_main_new_choice_fun1262(_b_1049, _ctx); /*(1009) -> <fail,flip,div> int*/;
  kk_box_t res_1081 = _b_1050; /*1009*/;
  kk_ssize_t _b_1075_1044 = i_966; /*std/core/hnd/ev-index*/;
  kk_function_t _b_1076_1045 = cont_1080; /*(1009) -> <fail,flip,div> int*/;
  kk_box_t _b_1077_1046 = res_1081; /*1009*/;
  return kk_std_core_hnd_open_at1(_b_1075_1044, kk_main_new_choice_fun1264(_b_1076_1045, _ctx), _b_1077_1046, _ctx);
}


// lift anonymous function
struct kk_main_choice_fun1271__t {
  struct kk_function_s _base;
  kk_ssize_t i0_973;
};
static kk_box_t kk_main_choice_fun1271(kk_function_t _fself, kk_function_t _b_1063, kk_box_t _b_1064, kk_context_t* _ctx);
static kk_function_t kk_main_new_choice_fun1271(kk_ssize_t i0_973, kk_context_t* _ctx) {
  struct kk_main_choice_fun1271__t* _self = kk_function_alloc_as(struct kk_main_choice_fun1271__t, 1, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_choice_fun1271, kk_context());
  _self->i0_973 = i0_973;
  return &_self->_base;
}

static kk_box_t kk_main_choice_fun1271(kk_function_t _fself, kk_function_t _b_1063, kk_box_t _b_1064, kk_context_t* _ctx) {
  struct kk_main_choice_fun1271__t* _self = kk_function_as(struct kk_main_choice_fun1271__t*, _fself);
  kk_ssize_t i0_973 = _self->i0_973; /* std/core/hnd/ev-index */
  kk_drop_match(_self, {;}, {}, _ctx)
  return kk_std_core_hnd_open_at1(i0_973, _b_1063, _b_1064, _ctx);
}


// lift anonymous function
struct kk_main_choice_fun1273__t {
  struct kk_function_s _base;
  kk_integer_t n0;
};
static kk_box_t kk_main_choice_fun1273(kk_function_t _fself, kk_box_t _b_1073, kk_context_t* _ctx);
static kk_function_t kk_main_new_choice_fun1273(kk_integer_t n0, kk_context_t* _ctx) {
  struct kk_main_choice_fun1273__t* _self = kk_function_alloc_as(struct kk_main_choice_fun1273__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_choice_fun1273, kk_context());
  _self->n0 = n0;
  return &_self->_base;
}

static kk_box_t kk_main_choice_fun1273(kk_function_t _fself, kk_box_t _b_1073, kk_context_t* _ctx) {
  struct kk_main_choice_fun1273__t* _self = kk_function_as(struct kk_main_choice_fun1273__t*, _fself);
  kk_integer_t n0 = _self->n0; /* int */
  kk_drop_match(_self, {kk_integer_dup(n0);}, {}, _ctx)
  bool _y_1082_9280 = kk_bool_unbox(_b_1073); /*bool*/;
  kk_integer_t _x1274 = kk_main__mlift955_choice(n0, _y_1082_9280, _ctx); /*int*/
  return kk_integer_box(_x1274);
}

kk_integer_t kk_main_choice(kk_integer_t n0, kk_context_t* _ctx) { /* (n : int) -> <div,fail,flip> int */ 
  kk__tailcall: ;
  bool _match_1222 = kk_integer_lt_borrow(n0,(kk_integer_from_small(1)),kk_context()); /*bool*/;
  if (_match_1222) {
    kk_integer_drop(n0, _ctx);
    kk_ssize_t i_966 = (KK_IZ(0)); /*std/core/hnd/ev-index*/;
    kk_evv_t w = kk_evv_swap_create1(i_966,kk_context()); /*std/core/hnd/evv<<fail,flip,div>>*/;
    kk_std_core_hnd__ev ev_968;
    kk_ssize_t _x1256 = (KK_IZ(0)); /*ssize_t*/
    ev_968 = kk_evv_at(_x1256,kk_context()); /*std/core/hnd/ev<.hnd-fail>*/
    kk_integer_t y;
    kk_box_t _x1257;
    {
      struct kk_std_core_hnd_Ev* _con1258 = kk_std_core_hnd__as_Ev(ev_968);
      kk_std_core_hnd__marker m0 = _con1258->marker;
      kk_box_t _box_x1038 = _con1258->hnd;
      kk_main__hnd_fail h = kk_main__hnd_fail_unbox(_box_x1038, NULL);
      kk_main__hnd_fail_dup(h);
      kk_std_core_hnd__clause0 _match_1228;
      kk_std_core_hnd__clause0 _brw_1229 = kk_main__select_fail(h, _ctx); /*std/core/hnd/clause0<179,.hnd-fail,180,181>*/;
      kk_main__hnd_fail_drop(h, _ctx);
      _match_1228 = _brw_1229; /*std/core/hnd/clause0<179,.hnd-fail,180,181>*/
      {
        kk_function_t _fun_unbox_x1041 = _match_1228.clause;
        _x1257 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x1041, (_fun_unbox_x1041, m0, ev_968, _ctx)); /*1005*/
      }
    }
    y = kk_integer_unbox(_x1257); /*int*/
    kk_evv_set(w,kk_context());
    if (kk_yielding(kk_context())) {
      kk_integer_drop(y, _ctx);
      kk_box_t _x1260 = kk_std_core_hnd_yield_cont(kk_main_new_choice_fun1261(i_966, _ctx), _ctx); /*1002*/
      return kk_integer_unbox(_x1260);
    }
    {
      return y;
    }
  }
  {
    kk_ssize_t i0_973 = (KK_IZ(1)); /*std/core/hnd/ev-index*/;
    kk_evv_t w0 = kk_evv_swap_create1(i0_973,kk_context()); /*std/core/hnd/evv<<flip,fail,div>>*/;
    kk_std_core_hnd__ev ev0_975;
    kk_ssize_t _x1266 = (KK_IZ(0)); /*ssize_t*/
    ev0_975 = kk_evv_at(_x1266,kk_context()); /*std/core/hnd/ev<.hnd-flip>*/
    bool y0;
    kk_box_t _x1267;
    {
      struct kk_std_core_hnd_Ev* _con1268 = kk_std_core_hnd__as_Ev(ev0_975);
      kk_std_core_hnd__marker m00 = _con1268->marker;
      kk_box_t _box_x1052 = _con1268->hnd;
      kk_main__hnd_flip h0 = kk_main__hnd_flip_unbox(_box_x1052, NULL);
      kk_main__hnd_flip_dup(h0);
      kk_std_core_hnd__clause0 _match_1225;
      kk_std_core_hnd__clause0 _brw_1226 = kk_main__select_flip(h0, _ctx); /*std/core/hnd/clause0<bool,.hnd-flip,197,198>*/;
      kk_main__hnd_flip_drop(h0, _ctx);
      _match_1225 = _brw_1226; /*std/core/hnd/clause0<bool,.hnd-flip,197,198>*/
      {
        kk_function_t _fun_unbox_x1055 = _match_1225.clause;
        _x1267 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x1055, (_fun_unbox_x1055, m00, ev0_975, _ctx)); /*1005*/
      }
    }
    y0 = kk_bool_unbox(_x1267); /*bool*/
    kk_evv_set(w0,kk_context());
    bool x_970;
    if (kk_yielding(kk_context())) {
      kk_box_t _x1270 = kk_std_core_hnd_yield_cont(kk_main_new_choice_fun1271(i0_973, _ctx), _ctx); /*1002*/
      x_970 = kk_bool_unbox(_x1270); /*bool*/
    }
    else {
      x_970 = y0; /*bool*/
    }
    if (kk_yielding(kk_context())) {
      kk_box_t _x1272 = kk_std_core_hnd_yield_extend(kk_main_new_choice_fun1273(n0, _ctx), _ctx); /*1001*/
      return kk_integer_unbox(_x1272);
    }
    if (x_970) {
      return n0;
    }
    { // tailcall
      kk_integer_t _x1275 = kk_integer_add_small_const(n0, -1, _ctx); /*int*/
      n0 = _x1275;
      goto kk__tailcall;
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift956_triple_fun1284__t {
  struct kk_function_s _base;
  kk_ssize_t i0_977;
};
static kk_box_t kk_main__mlift956_triple_fun1284(kk_function_t _fself, kk_function_t _b_1097, kk_box_t _b_1098, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift956_triple_fun1284(kk_ssize_t i0_977, kk_context_t* _ctx) {
  struct kk_main__mlift956_triple_fun1284__t* _self = kk_function_alloc_as(struct kk_main__mlift956_triple_fun1284__t, 1, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift956_triple_fun1284, kk_context());
  _self->i0_977 = i0_977;
  return &_self->_base;
}



// lift anonymous function
struct kk_main__mlift956_triple_fun1285__t {
  struct kk_function_s _base;
  kk_function_t _b_1097;
};
static kk_std_core_types__tuple3_ kk_main__mlift956_triple_fun1285(kk_function_t _fself, kk_box_t _b_1099, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift956_triple_fun1285(kk_function_t _b_1097, kk_context_t* _ctx) {
  struct kk_main__mlift956_triple_fun1285__t* _self = kk_function_alloc_as(struct kk_main__mlift956_triple_fun1285__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift956_triple_fun1285, kk_context());
  _self->_b_1097 = _b_1097;
  return &_self->_base;
}

static kk_std_core_types__tuple3_ kk_main__mlift956_triple_fun1285(kk_function_t _fself, kk_box_t _b_1099, kk_context_t* _ctx) {
  struct kk_main__mlift956_triple_fun1285__t* _self = kk_function_as(struct kk_main__mlift956_triple_fun1285__t*, _fself);
  kk_function_t _b_1097 = _self->_b_1097; /* (1003) -> 1001 1000 */
  kk_drop_match(_self, {kk_function_dup(_b_1097);}, {}, _ctx)
  kk_box_t _x1286 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _b_1097, (_b_1097, _b_1099, _ctx)); /*1000*/
  return kk_std_core_types__tuple3__unbox(_x1286, _ctx);
}


// lift anonymous function
struct kk_main__mlift956_triple_fun1287__t {
  struct kk_function_s _base;
  kk_function_t _b_1105_1093;
};
static kk_box_t kk_main__mlift956_triple_fun1287(kk_function_t _fself, kk_box_t _b_1095, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift956_triple_fun1287(kk_function_t _b_1105_1093, kk_context_t* _ctx) {
  struct kk_main__mlift956_triple_fun1287__t* _self = kk_function_alloc_as(struct kk_main__mlift956_triple_fun1287__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift956_triple_fun1287, kk_context());
  _self->_b_1105_1093 = _b_1105_1093;
  return &_self->_base;
}

static kk_box_t kk_main__mlift956_triple_fun1287(kk_function_t _fself, kk_box_t _b_1095, kk_context_t* _ctx) {
  struct kk_main__mlift956_triple_fun1287__t* _self = kk_function_as(struct kk_main__mlift956_triple_fun1287__t*, _fself);
  kk_function_t _b_1105_1093 = _self->_b_1105_1093; /* (1009) -> <fail,div,flip> (int, int, int) */
  kk_drop_match(_self, {kk_function_dup(_b_1105_1093);}, {}, _ctx)
  kk_std_core_types__tuple3_ _x1288 = kk_function_call(kk_std_core_types__tuple3_, (kk_function_t, kk_box_t, kk_context_t*), _b_1105_1093, (_b_1105_1093, _b_1095, _ctx)); /*(int, int, int)*/
  return kk_std_core_types__tuple3__box(_x1288, _ctx);
}
static kk_box_t kk_main__mlift956_triple_fun1284(kk_function_t _fself, kk_function_t _b_1097, kk_box_t _b_1098, kk_context_t* _ctx) {
  struct kk_main__mlift956_triple_fun1284__t* _self = kk_function_as(struct kk_main__mlift956_triple_fun1284__t*, _fself);
  kk_ssize_t i0_977 = _self->i0_977; /* std/core/hnd/ev-index */
  kk_drop_match(_self, {;}, {}, _ctx)
  kk_function_t cont_1107 = kk_main__new_mlift956_triple_fun1285(_b_1097, _ctx); /*(1009) -> <fail,div,flip> (int, int, int)*/;
  kk_box_t res_1108 = _b_1098; /*1009*/;
  kk_ssize_t _b_1104_1092 = i0_977; /*std/core/hnd/ev-index*/;
  kk_function_t _b_1105_1093 = cont_1107; /*(1009) -> <fail,div,flip> (int, int, int)*/;
  kk_box_t _b_1106_1094 = res_1108; /*1009*/;
  return kk_std_core_hnd_open_at1(_b_1104_1092, kk_main__new_mlift956_triple_fun1287(_b_1105_1093, _ctx), _b_1106_1094, _ctx);
}

kk_std_core_types__tuple3_ kk_main__mlift956_triple(kk_integer_t i, kk_integer_t j, kk_integer_t s, kk_integer_t k, kk_context_t* _ctx) { /* (i : int, j : int, s : int, k : int) -> <div,fail,flip> (int, int, int) */ 
  kk_integer_t x1_948;
  kk_integer_t _x1276 = kk_integer_dup(i); /*int*/
  kk_integer_t _x1277 = kk_integer_dup(j); /*int*/
  x1_948 = kk_integer_add(_x1276,_x1277,kk_context()); /*int*/
  bool _match_1216;
  kk_integer_t _brw_1220;
  kk_integer_t _x1278 = kk_integer_dup(k); /*int*/
  _brw_1220 = kk_integer_add(x1_948,_x1278,kk_context()); /*int*/
  bool _brw_1221 = kk_integer_eq_borrow(_brw_1220,s,kk_context()); /*bool*/;
  kk_integer_drop(_brw_1220, _ctx);
  kk_integer_drop(s, _ctx);
  _match_1216 = _brw_1221; /*bool*/
  if (_match_1216) {
    return kk_std_core_types__new_dash__lp__comma__comma__rp_(kk_integer_box(i), kk_integer_box(j), kk_integer_box(k), _ctx);
  }
  {
    kk_integer_drop(k, _ctx);
    kk_integer_drop(j, _ctx);
    kk_integer_drop(i, _ctx);
    kk_ssize_t i0_977 = (KK_IZ(0)); /*std/core/hnd/ev-index*/;
    kk_evv_t w = kk_evv_swap_create1(i0_977,kk_context()); /*std/core/hnd/evv<<fail,div,flip>>*/;
    kk_std_core_hnd__ev ev_979;
    kk_ssize_t _x1279 = (KK_IZ(0)); /*ssize_t*/
    ev_979 = kk_evv_at(_x1279,kk_context()); /*std/core/hnd/ev<.hnd-fail>*/
    kk_std_core_types__tuple3_ y;
    kk_box_t _x1280;
    {
      struct kk_std_core_hnd_Ev* _con1281 = kk_std_core_hnd__as_Ev(ev_979);
      kk_std_core_hnd__marker m0 = _con1281->marker;
      kk_box_t _box_x1086 = _con1281->hnd;
      kk_main__hnd_fail h = kk_main__hnd_fail_unbox(_box_x1086, NULL);
      kk_main__hnd_fail_dup(h);
      kk_std_core_hnd__clause0 _match_1218;
      kk_std_core_hnd__clause0 _brw_1219 = kk_main__select_fail(h, _ctx); /*std/core/hnd/clause0<179,.hnd-fail,180,181>*/;
      kk_main__hnd_fail_drop(h, _ctx);
      _match_1218 = _brw_1219; /*std/core/hnd/clause0<179,.hnd-fail,180,181>*/
      {
        kk_function_t _fun_unbox_x1089 = _match_1218.clause;
        _x1280 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x1089, (_fun_unbox_x1089, m0, ev_979, _ctx)); /*1005*/
      }
    }
    y = kk_std_core_types__tuple3__unbox(_x1280, _ctx); /*(int, int, int)*/
    kk_evv_set(w,kk_context());
    if (kk_yielding(kk_context())) {
      kk_std_core_types__tuple3__drop(y, _ctx);
      kk_box_t _x1283 = kk_std_core_hnd_yield_cont(kk_main__new_mlift956_triple_fun1284(i0_977, _ctx), _ctx); /*1002*/
      return kk_std_core_types__tuple3__unbox(_x1283, _ctx);
    }
    {
      return y;
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift957_triple_fun1292__t {
  struct kk_function_s _base;
  kk_integer_t i;
  kk_integer_t j;
  kk_integer_t s;
};
static kk_box_t kk_main__mlift957_triple_fun1292(kk_function_t _fself, kk_box_t _b_1110, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift957_triple_fun1292(kk_integer_t i, kk_integer_t j, kk_integer_t s, kk_context_t* _ctx) {
  struct kk_main__mlift957_triple_fun1292__t* _self = kk_function_alloc_as(struct kk_main__mlift957_triple_fun1292__t, 4, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift957_triple_fun1292, kk_context());
  _self->i = i;
  _self->j = j;
  _self->s = s;
  return &_self->_base;
}

static kk_box_t kk_main__mlift957_triple_fun1292(kk_function_t _fself, kk_box_t _b_1110, kk_context_t* _ctx) {
  struct kk_main__mlift957_triple_fun1292__t* _self = kk_function_as(struct kk_main__mlift957_triple_fun1292__t*, _fself);
  kk_integer_t i = _self->i; /* int */
  kk_integer_t j = _self->j; /* int */
  kk_integer_t s = _self->s; /* int */
  kk_drop_match(_self, {kk_integer_dup(i);kk_integer_dup(j);kk_integer_dup(s);}, {}, _ctx)
  kk_integer_t k_1112 = kk_integer_unbox(_b_1110); /*int*/;
  kk_std_core_types__tuple3_ _x1293 = kk_main__mlift956_triple(i, j, s, k_1112, _ctx); /*(int, int, int)*/
  return kk_std_core_types__tuple3__box(_x1293, _ctx);
}

kk_std_core_types__tuple3_ kk_main__mlift957_triple(kk_integer_t i, kk_integer_t s, kk_integer_t j, kk_context_t* _ctx) { /* (i : int, s : int, j : int) -> <div,fail,flip> (int, int, int) */ 
  kk_integer_t x_981;
  kk_integer_t _x1289;
  kk_integer_t _x1290 = kk_integer_dup(j); /*int*/
  _x1289 = kk_integer_add_small_const(_x1290, -1, _ctx); /*int*/
  x_981 = kk_main_choice(_x1289, _ctx); /*int*/
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_981, _ctx);
    kk_box_t _x1291 = kk_std_core_hnd_yield_extend(kk_main__new_mlift957_triple_fun1292(i, j, s, _ctx), _ctx); /*1001*/
    return kk_std_core_types__tuple3__unbox(_x1291, _ctx);
  }
  {
    return kk_main__mlift956_triple(i, j, s, x_981, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift958_triple_fun1297__t {
  struct kk_function_s _base;
  kk_integer_t i;
  kk_integer_t s;
};
static kk_box_t kk_main__mlift958_triple_fun1297(kk_function_t _fself, kk_box_t _b_1114, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift958_triple_fun1297(kk_integer_t i, kk_integer_t s, kk_context_t* _ctx) {
  struct kk_main__mlift958_triple_fun1297__t* _self = kk_function_alloc_as(struct kk_main__mlift958_triple_fun1297__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift958_triple_fun1297, kk_context());
  _self->i = i;
  _self->s = s;
  return &_self->_base;
}

static kk_box_t kk_main__mlift958_triple_fun1297(kk_function_t _fself, kk_box_t _b_1114, kk_context_t* _ctx) {
  struct kk_main__mlift958_triple_fun1297__t* _self = kk_function_as(struct kk_main__mlift958_triple_fun1297__t*, _fself);
  kk_integer_t i = _self->i; /* int */
  kk_integer_t s = _self->s; /* int */
  kk_drop_match(_self, {kk_integer_dup(i);kk_integer_dup(s);}, {}, _ctx)
  kk_integer_t j_1116 = kk_integer_unbox(_b_1114); /*int*/;
  kk_std_core_types__tuple3_ _x1298 = kk_main__mlift957_triple(i, s, j_1116, _ctx); /*(int, int, int)*/
  return kk_std_core_types__tuple3__box(_x1298, _ctx);
}

kk_std_core_types__tuple3_ kk_main__mlift958_triple(kk_integer_t s, kk_integer_t i, kk_context_t* _ctx) { /* (s : int, i : int) -> <div,fail,flip> (int, int, int) */ 
  kk_integer_t x_983;
  kk_integer_t _x1294;
  kk_integer_t _x1295 = kk_integer_dup(i); /*int*/
  _x1294 = kk_integer_add_small_const(_x1295, -1, _ctx); /*int*/
  x_983 = kk_main_choice(_x1294, _ctx); /*int*/
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_983, _ctx);
    kk_box_t _x1296 = kk_std_core_hnd_yield_extend(kk_main__new_mlift958_triple_fun1297(i, s, _ctx), _ctx); /*1001*/
    return kk_std_core_types__tuple3__unbox(_x1296, _ctx);
  }
  {
    return kk_main__mlift957_triple(i, s, x_983, _ctx);
  }
}


// lift anonymous function
struct kk_main_triple_fun1300__t {
  struct kk_function_s _base;
  kk_integer_t s;
};
static kk_box_t kk_main_triple_fun1300(kk_function_t _fself, kk_box_t _b_1118, kk_context_t* _ctx);
static kk_function_t kk_main_new_triple_fun1300(kk_integer_t s, kk_context_t* _ctx) {
  struct kk_main_triple_fun1300__t* _self = kk_function_alloc_as(struct kk_main_triple_fun1300__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_triple_fun1300, kk_context());
  _self->s = s;
  return &_self->_base;
}

static kk_box_t kk_main_triple_fun1300(kk_function_t _fself, kk_box_t _b_1118, kk_context_t* _ctx) {
  struct kk_main_triple_fun1300__t* _self = kk_function_as(struct kk_main_triple_fun1300__t*, _fself);
  kk_integer_t s = _self->s; /* int */
  kk_drop_match(_self, {kk_integer_dup(s);}, {}, _ctx)
  kk_integer_t i_1150 = kk_integer_unbox(_b_1118); /*int*/;
  kk_std_core_types__tuple3_ _x1301 = kk_main__mlift958_triple(s, i_1150, _ctx); /*(int, int, int)*/
  return kk_std_core_types__tuple3__box(_x1301, _ctx);
}


// lift anonymous function
struct kk_main_triple_fun1305__t {
  struct kk_function_s _base;
  kk_integer_t s;
  kk_integer_t x_985;
};
static kk_box_t kk_main_triple_fun1305(kk_function_t _fself, kk_box_t _b_1120, kk_context_t* _ctx);
static kk_function_t kk_main_new_triple_fun1305(kk_integer_t s, kk_integer_t x_985, kk_context_t* _ctx) {
  struct kk_main_triple_fun1305__t* _self = kk_function_alloc_as(struct kk_main_triple_fun1305__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_triple_fun1305, kk_context());
  _self->s = s;
  _self->x_985 = x_985;
  return &_self->_base;
}

static kk_box_t kk_main_triple_fun1305(kk_function_t _fself, kk_box_t _b_1120, kk_context_t* _ctx) {
  struct kk_main_triple_fun1305__t* _self = kk_function_as(struct kk_main_triple_fun1305__t*, _fself);
  kk_integer_t s = _self->s; /* int */
  kk_integer_t x_985 = _self->x_985; /* int */
  kk_drop_match(_self, {kk_integer_dup(s);kk_integer_dup(x_985);}, {}, _ctx)
  kk_integer_t j_1151 = kk_integer_unbox(_b_1120); /*int*/;
  kk_std_core_types__tuple3_ _x1306 = kk_main__mlift957_triple(x_985, s, j_1151, _ctx); /*(int, int, int)*/
  return kk_std_core_types__tuple3__box(_x1306, _ctx);
}


// lift anonymous function
struct kk_main_triple_fun1310__t {
  struct kk_function_s _base;
  kk_integer_t s;
  kk_integer_t x_985;
  kk_integer_t x0_988;
};
static kk_box_t kk_main_triple_fun1310(kk_function_t _fself, kk_box_t _b_1122, kk_context_t* _ctx);
static kk_function_t kk_main_new_triple_fun1310(kk_integer_t s, kk_integer_t x_985, kk_integer_t x0_988, kk_context_t* _ctx) {
  struct kk_main_triple_fun1310__t* _self = kk_function_alloc_as(struct kk_main_triple_fun1310__t, 4, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_triple_fun1310, kk_context());
  _self->s = s;
  _self->x_985 = x_985;
  _self->x0_988 = x0_988;
  return &_self->_base;
}

static kk_box_t kk_main_triple_fun1310(kk_function_t _fself, kk_box_t _b_1122, kk_context_t* _ctx) {
  struct kk_main_triple_fun1310__t* _self = kk_function_as(struct kk_main_triple_fun1310__t*, _fself);
  kk_integer_t s = _self->s; /* int */
  kk_integer_t x_985 = _self->x_985; /* int */
  kk_integer_t x0_988 = _self->x0_988; /* int */
  kk_drop_match(_self, {kk_integer_dup(s);kk_integer_dup(x_985);kk_integer_dup(x0_988);}, {}, _ctx)
  kk_integer_t k_1152 = kk_integer_unbox(_b_1122); /*int*/;
  kk_std_core_types__tuple3_ _x1311 = kk_main__mlift956_triple(x_985, x0_988, s, k_1152, _ctx); /*(int, int, int)*/
  return kk_std_core_types__tuple3__box(_x1311, _ctx);
}


// lift anonymous function
struct kk_main_triple_fun1320__t {
  struct kk_function_s _base;
  kk_ssize_t i1_994;
};
static kk_box_t kk_main_triple_fun1320(kk_function_t _fself, kk_function_t _b_1137, kk_box_t _b_1138, kk_context_t* _ctx);
static kk_function_t kk_main_new_triple_fun1320(kk_ssize_t i1_994, kk_context_t* _ctx) {
  struct kk_main_triple_fun1320__t* _self = kk_function_alloc_as(struct kk_main_triple_fun1320__t, 1, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_triple_fun1320, kk_context());
  _self->i1_994 = i1_994;
  return &_self->_base;
}



// lift anonymous function
struct kk_main_triple_fun1321__t {
  struct kk_function_s _base;
  kk_function_t _b_1137;
};
static kk_std_core_types__tuple3_ kk_main_triple_fun1321(kk_function_t _fself, kk_box_t _b_1139, kk_context_t* _ctx);
static kk_function_t kk_main_new_triple_fun1321(kk_function_t _b_1137, kk_context_t* _ctx) {
  struct kk_main_triple_fun1321__t* _self = kk_function_alloc_as(struct kk_main_triple_fun1321__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_triple_fun1321, kk_context());
  _self->_b_1137 = _b_1137;
  return &_self->_base;
}

static kk_std_core_types__tuple3_ kk_main_triple_fun1321(kk_function_t _fself, kk_box_t _b_1139, kk_context_t* _ctx) {
  struct kk_main_triple_fun1321__t* _self = kk_function_as(struct kk_main_triple_fun1321__t*, _fself);
  kk_function_t _b_1137 = _self->_b_1137; /* (1003) -> 1001 1000 */
  kk_drop_match(_self, {kk_function_dup(_b_1137);}, {}, _ctx)
  kk_box_t _x1322 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _b_1137, (_b_1137, _b_1139, _ctx)); /*1000*/
  return kk_std_core_types__tuple3__unbox(_x1322, _ctx);
}


// lift anonymous function
struct kk_main_triple_fun1323__t {
  struct kk_function_s _base;
  kk_function_t _b_1148_1133;
};
static kk_box_t kk_main_triple_fun1323(kk_function_t _fself, kk_box_t _b_1135, kk_context_t* _ctx);
static kk_function_t kk_main_new_triple_fun1323(kk_function_t _b_1148_1133, kk_context_t* _ctx) {
  struct kk_main_triple_fun1323__t* _self = kk_function_alloc_as(struct kk_main_triple_fun1323__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_triple_fun1323, kk_context());
  _self->_b_1148_1133 = _b_1148_1133;
  return &_self->_base;
}

static kk_box_t kk_main_triple_fun1323(kk_function_t _fself, kk_box_t _b_1135, kk_context_t* _ctx) {
  struct kk_main_triple_fun1323__t* _self = kk_function_as(struct kk_main_triple_fun1323__t*, _fself);
  kk_function_t _b_1148_1133 = _self->_b_1148_1133; /* (1009) -> <fail,div,flip> (int, int, int) */
  kk_drop_match(_self, {kk_function_dup(_b_1148_1133);}, {}, _ctx)
  kk_std_core_types__tuple3_ _x1324 = kk_function_call(kk_std_core_types__tuple3_, (kk_function_t, kk_box_t, kk_context_t*), _b_1148_1133, (_b_1148_1133, _b_1135, _ctx)); /*(int, int, int)*/
  return kk_std_core_types__tuple3__box(_x1324, _ctx);
}
static kk_box_t kk_main_triple_fun1320(kk_function_t _fself, kk_function_t _b_1137, kk_box_t _b_1138, kk_context_t* _ctx) {
  struct kk_main_triple_fun1320__t* _self = kk_function_as(struct kk_main_triple_fun1320__t*, _fself);
  kk_ssize_t i1_994 = _self->i1_994; /* std/core/hnd/ev-index */
  kk_drop_match(_self, {;}, {}, _ctx)
  kk_function_t cont_1153 = kk_main_new_triple_fun1321(_b_1137, _ctx); /*(1009) -> <fail,div,flip> (int, int, int)*/;
  kk_box_t res_1154 = _b_1138; /*1009*/;
  kk_ssize_t _b_1147_1132 = i1_994; /*std/core/hnd/ev-index*/;
  kk_function_t _b_1148_1133 = cont_1153; /*(1009) -> <fail,div,flip> (int, int, int)*/;
  kk_box_t _b_1149_1134 = res_1154; /*1009*/;
  return kk_std_core_hnd_open_at1(_b_1147_1132, kk_main_new_triple_fun1323(_b_1148_1133, _ctx), _b_1149_1134, _ctx);
}

kk_std_core_types__tuple3_ kk_main_triple(kk_integer_t n, kk_integer_t s, kk_context_t* _ctx) { /* (n : int, s : int) -> <div,fail,flip> (int, int, int) */ 
  kk_integer_t x_985 = kk_main_choice(n, _ctx); /*int*/;
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_985, _ctx);
    kk_box_t _x1299 = kk_std_core_hnd_yield_extend(kk_main_new_triple_fun1300(s, _ctx), _ctx); /*1001*/
    return kk_std_core_types__tuple3__unbox(_x1299, _ctx);
  }
  {
    kk_integer_t x0_988;
    kk_integer_t _x1302;
    kk_integer_t _x1303 = kk_integer_dup(x_985); /*int*/
    _x1302 = kk_integer_add_small_const(_x1303, -1, _ctx); /*int*/
    x0_988 = kk_main_choice(_x1302, _ctx); /*int*/
    if (kk_yielding(kk_context())) {
      kk_integer_drop(x0_988, _ctx);
      kk_box_t _x1304 = kk_std_core_hnd_yield_extend(kk_main_new_triple_fun1305(s, x_985, _ctx), _ctx); /*1001*/
      return kk_std_core_types__tuple3__unbox(_x1304, _ctx);
    }
    {
      kk_integer_t x1_991;
      kk_integer_t _x1307;
      kk_integer_t _x1308 = kk_integer_dup(x0_988); /*int*/
      _x1307 = kk_integer_add_small_const(_x1308, -1, _ctx); /*int*/
      x1_991 = kk_main_choice(_x1307, _ctx); /*int*/
      if (kk_yielding(kk_context())) {
        kk_integer_drop(x1_991, _ctx);
        kk_box_t _x1309 = kk_std_core_hnd_yield_extend(kk_main_new_triple_fun1310(s, x_985, x0_988, _ctx), _ctx); /*1001*/
        return kk_std_core_types__tuple3__unbox(_x1309, _ctx);
      }
      {
        kk_integer_t x1_948;
        kk_integer_t _x1312 = kk_integer_dup(x_985); /*int*/
        kk_integer_t _x1313 = kk_integer_dup(x0_988); /*int*/
        x1_948 = kk_integer_add(_x1312,_x1313,kk_context()); /*int*/
        bool _match_1208;
        kk_integer_t _brw_1212;
        kk_integer_t _x1314 = kk_integer_dup(x1_991); /*int*/
        _brw_1212 = kk_integer_add(x1_948,_x1314,kk_context()); /*int*/
        bool _brw_1213 = kk_integer_eq_borrow(_brw_1212,s,kk_context()); /*bool*/;
        kk_integer_drop(_brw_1212, _ctx);
        kk_integer_drop(s, _ctx);
        _match_1208 = _brw_1213; /*bool*/
        if (_match_1208) {
          return kk_std_core_types__new_dash__lp__comma__comma__rp_(kk_integer_box(x_985), kk_integer_box(x0_988), kk_integer_box(x1_991), _ctx);
        }
        {
          kk_integer_drop(x1_991, _ctx);
          kk_integer_drop(x0_988, _ctx);
          kk_integer_drop(x_985, _ctx);
          kk_ssize_t i1_994 = (KK_IZ(0)); /*std/core/hnd/ev-index*/;
          kk_evv_t w = kk_evv_swap_create1(i1_994,kk_context()); /*std/core/hnd/evv<<fail,div,flip>>*/;
          kk_std_core_hnd__ev ev_996;
          kk_ssize_t _x1315 = (KK_IZ(0)); /*ssize_t*/
          ev_996 = kk_evv_at(_x1315,kk_context()); /*std/core/hnd/ev<.hnd-fail>*/
          kk_std_core_types__tuple3_ y;
          kk_box_t _x1316;
          {
            struct kk_std_core_hnd_Ev* _con1317 = kk_std_core_hnd__as_Ev(ev_996);
            kk_std_core_hnd__marker m0 = _con1317->marker;
            kk_box_t _box_x1126 = _con1317->hnd;
            kk_main__hnd_fail h = kk_main__hnd_fail_unbox(_box_x1126, NULL);
            kk_main__hnd_fail_dup(h);
            kk_std_core_hnd__clause0 _match_1210;
            kk_std_core_hnd__clause0 _brw_1211 = kk_main__select_fail(h, _ctx); /*std/core/hnd/clause0<179,.hnd-fail,180,181>*/;
            kk_main__hnd_fail_drop(h, _ctx);
            _match_1210 = _brw_1211; /*std/core/hnd/clause0<179,.hnd-fail,180,181>*/
            {
              kk_function_t _fun_unbox_x1129 = _match_1210.clause;
              _x1316 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x1129, (_fun_unbox_x1129, m0, ev_996, _ctx)); /*1005*/
            }
          }
          y = kk_std_core_types__tuple3__unbox(_x1316, _ctx); /*(int, int, int)*/
          kk_evv_set(w,kk_context());
          if (kk_yielding(kk_context())) {
            kk_std_core_types__tuple3__drop(y, _ctx);
            kk_box_t _x1319 = kk_std_core_hnd_yield_cont(kk_main_new_triple_fun1320(i1_994, _ctx), _ctx); /*1002*/
            return kk_std_core_types__tuple3__unbox(_x1319, _ctx);
          }
          {
            return y;
          }
        }
      }
    }
  }
}
 
// monadic lift

kk_integer_t kk_main__mlift959_run(kk_std_core_types__tuple3_ _y_938, kk_context_t* _ctx) { /* ((int, int, int)) -> <div,fail,flip> int */ 
  kk_evv_t w = kk_evv_swap_create0(kk_context()); /*std/core/hnd/evv<<div,fail,flip>>*/;
  kk_integer_t x;
  {
    kk_box_t _box_x1155 = _y_938.fst;
    kk_box_t _box_x1156 = _y_938.snd;
    kk_box_t _box_x1157 = _y_938.thd;
    kk_integer_t a = kk_integer_unbox(_box_x1155);
    kk_integer_t b = kk_integer_unbox(_box_x1156);
    kk_integer_t c = kk_integer_unbox(_box_x1157);
    kk_integer_dup(a);
    kk_integer_dup(b);
    kk_integer_dup(c);
    kk_std_core_types__tuple3__drop(_y_938, _ctx);
    kk_integer_t x1_813 = kk_integer_mul((kk_integer_from_small(53)),a,kk_context()); /*int*/;
    kk_integer_t y1_814 = kk_integer_mul((kk_integer_from_small(2809)),b,kk_context()); /*int*/;
    kk_integer_t x0_811 = kk_integer_add(x1_813,y1_814,kk_context()); /*int*/;
    kk_integer_t y0_812 = kk_integer_mul((kk_integer_from_int(148877, _ctx)),c,kk_context()); /*int*/;
    kk_integer_t _x1328 = kk_integer_add(x0_811,y0_812,kk_context()); /*int*/
    x = kk_integer_mod(_x1328,(kk_integer_from_int(1000000007, _ctx)),kk_context()); /*int*/
  }
  kk_unit_t keep = kk_Unit;
  kk_evv_set(w,kk_context());
  return x;
}


// lift anonymous function
struct kk_main_run_fun1330__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_run_fun1330(kk_function_t _fself, kk_function_t _b_1159, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun1330(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_run_fun1330, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_main_run_fun1332__t {
  struct kk_function_s _base;
  kk_function_t _b_1159;
};
static kk_integer_t kk_main_run_fun1332(kk_function_t _fself, bool _b_1160, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun1332(kk_function_t _b_1159, kk_context_t* _ctx) {
  struct kk_main_run_fun1332__t* _self = kk_function_alloc_as(struct kk_main_run_fun1332__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun1332, kk_context());
  _self->_b_1159 = _b_1159;
  return &_self->_base;
}

static kk_integer_t kk_main_run_fun1332(kk_function_t _fself, bool _b_1160, kk_context_t* _ctx) {
  struct kk_main_run_fun1332__t* _self = kk_function_as(struct kk_main_run_fun1332__t*, _fself);
  kk_function_t _b_1159 = _self->_b_1159; /* (1000) -> 1001 1003 */
  kk_drop_match(_self, {kk_function_dup(_b_1159);}, {}, _ctx)
  kk_box_t _x1333 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _b_1159, (_b_1159, kk_bool_box(_b_1160), _ctx)); /*1003*/
  return kk_integer_unbox(_x1333);
}
static kk_box_t kk_main_run_fun1330(kk_function_t _fself, kk_function_t _b_1159, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x1331;
  kk_function_t resume_1188 = kk_main_new_run_fun1332(_b_1159, _ctx); /*(bool) -> div int*/;
  kk_integer_t x_809;
  kk_function_t _x1334 = kk_function_dup(resume_1188); /*(bool) -> div int*/
  x_809 = kk_function_call(kk_integer_t, (kk_function_t, bool, kk_context_t*), _x1334, (_x1334, true, _ctx)); /*int*/
  kk_integer_t y_810 = kk_function_call(kk_integer_t, (kk_function_t, bool, kk_context_t*), resume_1188, (resume_1188, false, _ctx)); /*int*/;
  kk_integer_t _x1335 = kk_integer_add(x_809,y_810,kk_context()); /*int*/
  _x1331 = kk_integer_mod(_x1335,(kk_integer_from_int(1000000007, _ctx)),kk_context()); /*int*/
  return kk_integer_box(_x1331);
}


// lift anonymous function
struct kk_main_run_fun1337__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_run_fun1337(kk_function_t _fself, kk_box_t _b_1175, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun1337(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_run_fun1337, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main_run_fun1337(kk_function_t _fself, kk_box_t _b_1175, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_1187 = kk_integer_unbox(_b_1175); /*int*/;
  return kk_integer_box(_x_1187);
}


// lift anonymous function
struct kk_main_run_fun1338__t {
  struct kk_function_s _base;
  kk_integer_t n;
  kk_integer_t s;
};
static kk_box_t kk_main_run_fun1338(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun1338(kk_integer_t n, kk_integer_t s, kk_context_t* _ctx) {
  struct kk_main_run_fun1338__t* _self = kk_function_alloc_as(struct kk_main_run_fun1338__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun1338, kk_context());
  _self->n = n;
  _self->s = s;
  return &_self->_base;
}



// lift anonymous function
struct kk_main_run_fun1340__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_run_fun1340(kk_function_t _fself, kk_function_t _b_1162, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun1340(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_run_fun1340, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_main_run_fun1342__t {
  struct kk_function_s _base;
  kk_function_t _b_1162;
};
static kk_integer_t kk_main_run_fun1342(kk_function_t _fself, kk_box_t _b_1163, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun1342(kk_function_t _b_1162, kk_context_t* _ctx) {
  struct kk_main_run_fun1342__t* _self = kk_function_alloc_as(struct kk_main_run_fun1342__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun1342, kk_context());
  _self->_b_1162 = _b_1162;
  return &_self->_base;
}

static kk_integer_t kk_main_run_fun1342(kk_function_t _fself, kk_box_t _b_1163, kk_context_t* _ctx) {
  struct kk_main_run_fun1342__t* _self = kk_function_as(struct kk_main_run_fun1342__t*, _fself);
  kk_function_t _b_1162 = _self->_b_1162; /* (1000) -> 1001 1003 */
  kk_drop_match(_self, {kk_function_dup(_b_1162);}, {}, _ctx)
  kk_box_t _x1343 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _b_1162, (_b_1162, _b_1163, _ctx)); /*1003*/
  return kk_integer_unbox(_x1343);
}
static kk_box_t kk_main_run_fun1340(kk_function_t _fself, kk_function_t _b_1162, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x1341;
  kk_function_t resume0_1189 = kk_main_new_run_fun1342(_b_1162, _ctx); /*(708) -> <div,flip> int*/;
  kk_function_drop(resume0_1189, _ctx);
  _x1341 = kk_integer_from_small(0); /*int*/
  return kk_integer_box(_x1341);
}


// lift anonymous function
struct kk_main_run_fun1344__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_main_run_fun1344(kk_function_t _fself, kk_integer_t _x0, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun1344(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_run_fun1344, _ctx)
  return kk_function_dup(_fself);
}

static kk_integer_t kk_main_run_fun1344(kk_function_t _fself, kk_integer_t _x0, kk_context_t* _ctx) {
  kk_unused(_fself);
  return _x0;
}


// lift anonymous function
struct kk_main_run_fun1345__t {
  struct kk_function_s _base;
  kk_integer_t n;
  kk_integer_t s;
};
static kk_integer_t kk_main_run_fun1345(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun1345(kk_integer_t n, kk_integer_t s, kk_context_t* _ctx) {
  struct kk_main_run_fun1345__t* _self = kk_function_alloc_as(struct kk_main_run_fun1345__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun1345, kk_context());
  _self->n = n;
  _self->s = s;
  return &_self->_base;
}



// lift anonymous function
struct kk_main_run_fun1347__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_run_fun1347(kk_function_t _fself, kk_box_t _b_1165, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun1347(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_run_fun1347, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main_run_fun1347(kk_function_t _fself, kk_box_t _b_1165, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x1348;
  kk_std_core_types__tuple3_ _x1349 = kk_std_core_types__tuple3__unbox(_b_1165, _ctx); /*(int, int, int)*/
  _x1348 = kk_main__mlift959_run(_x1349, _ctx); /*int*/
  return kk_integer_box(_x1348);
}
static kk_integer_t kk_main_run_fun1345(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_main_run_fun1345__t* _self = kk_function_as(struct kk_main_run_fun1345__t*, _fself);
  kk_integer_t n = _self->n; /* int */
  kk_integer_t s = _self->s; /* int */
  kk_drop_match(_self, {kk_integer_dup(n);kk_integer_dup(s);}, {}, _ctx)
  kk_std_core_types__tuple3_ x_1000 = kk_main_triple(n, s, _ctx); /*(int, int, int)*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__tuple3__drop(x_1000, _ctx);
    kk_box_t _x1346 = kk_std_core_hnd_yield_extend(kk_main_new_run_fun1347(_ctx), _ctx); /*1001*/
    return kk_integer_unbox(_x1346);
  }
  {
    return kk_main__mlift959_run(x_1000, _ctx);
  }
}


// lift anonymous function
struct kk_main_run_fun1350__t {
  struct kk_function_s _base;
  kk_function_t _b_1183_1168;
};
static kk_box_t kk_main_run_fun1350(kk_function_t _fself, kk_box_t _b_1170, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun1350(kk_function_t _b_1183_1168, kk_context_t* _ctx) {
  struct kk_main_run_fun1350__t* _self = kk_function_alloc_as(struct kk_main_run_fun1350__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun1350, kk_context());
  _self->_b_1183_1168 = _b_1183_1168;
  return &_self->_base;
}

static kk_box_t kk_main_run_fun1350(kk_function_t _fself, kk_box_t _b_1170, kk_context_t* _ctx) {
  struct kk_main_run_fun1350__t* _self = kk_function_as(struct kk_main_run_fun1350__t*, _fself);
  kk_function_t _b_1183_1168 = _self->_b_1183_1168; /* (int) -> <div,flip> int */
  kk_drop_match(_self, {kk_function_dup(_b_1183_1168);}, {}, _ctx)
  kk_integer_t _x1351;
  kk_integer_t _x1352 = kk_integer_unbox(_b_1170); /*int*/
  _x1351 = kk_function_call(kk_integer_t, (kk_function_t, kk_integer_t, kk_context_t*), _b_1183_1168, (_b_1183_1168, _x1352, _ctx)); /*int*/
  return kk_integer_box(_x1351);
}


// lift anonymous function
struct kk_main_run_fun1353__t {
  struct kk_function_s _base;
  kk_function_t _b_1184_1169;
};
static kk_box_t kk_main_run_fun1353(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun1353(kk_function_t _b_1184_1169, kk_context_t* _ctx) {
  struct kk_main_run_fun1353__t* _self = kk_function_alloc_as(struct kk_main_run_fun1353__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun1353, kk_context());
  _self->_b_1184_1169 = _b_1184_1169;
  return &_self->_base;
}

static kk_box_t kk_main_run_fun1353(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_main_run_fun1353__t* _self = kk_function_as(struct kk_main_run_fun1353__t*, _fself);
  kk_function_t _b_1184_1169 = _self->_b_1184_1169; /* () -> <fail,div,flip> int */
  kk_drop_match(_self, {kk_function_dup(_b_1184_1169);}, {}, _ctx)
  kk_integer_t _x1354 = kk_function_call(kk_integer_t, (kk_function_t, kk_context_t*), _b_1184_1169, (_b_1184_1169, _ctx)); /*int*/
  return kk_integer_box(_x1354);
}
static kk_box_t kk_main_run_fun1338(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_main_run_fun1338__t* _self = kk_function_as(struct kk_main_run_fun1338__t*, _fself);
  kk_integer_t n = _self->n; /* int */
  kk_integer_t s = _self->s; /* int */
  kk_drop_match(_self, {kk_integer_dup(n);kk_integer_dup(s);}, {}, _ctx)
  int32_t _b_1181_1166 = (KK_I32(3)); /*int32*/;
  kk_main__hnd_fail _b_1182_1167;
  kk_std_core_hnd__clause0 _x1339 = kk_std_core_hnd_clause_control0(kk_main_new_run_fun1340(_ctx), _ctx); /*std/core/hnd/clause0<1000,1002,1001,1003>*/
  _b_1182_1167 = kk_main__new_Hnd_fail(kk_reuse_null, _x1339, _ctx); /*.hnd-fail<<div,flip>,int>*/
  kk_function_t _b_1183_1168 = kk_main_new_run_fun1344(_ctx); /*(int) -> <div,flip> int*/;
  kk_function_t _b_1184_1169 = kk_main_new_run_fun1345(n, s, _ctx); /*() -> <fail,div,flip> int*/;
  return kk_main__handle_fail(_b_1181_1166, _b_1182_1167, kk_main_new_run_fun1350(_b_1183_1168, _ctx), kk_main_new_run_fun1353(_b_1184_1169, _ctx), _ctx);
}

kk_integer_t kk_main_run(kk_integer_t n, kk_integer_t s, kk_context_t* _ctx) { /* (n : int, s : int) -> div int */ 
  int32_t _b_1176_1171 = (KK_I32(3)); /*int32*/;
  kk_main__hnd_flip _b_1177_1172;
  kk_std_core_hnd__clause0 _x1329 = kk_std_core_hnd_clause_control0(kk_main_new_run_fun1330(_ctx), _ctx); /*std/core/hnd/clause0<1000,1002,1001,1003>*/
  _b_1177_1172 = kk_main__new_Hnd_flip(kk_reuse_null, _x1329, _ctx); /*.hnd-flip<div,int>*/
  kk_box_t _x1336 = kk_main__handle_flip(_b_1176_1171, _b_1177_1172, kk_main_new_run_fun1337(_ctx), kk_main_new_run_fun1338(n, s, _ctx), _ctx); /*159*/
  return kk_integer_unbox(_x1336);
}

kk_unit_t kk_main_main(kk_context_t* _ctx) { /* () -> <console,div,ndet> () */ 
  bool is_node;
  kk_string_t _x1355 = kk_std_core_host(_ctx); /*string*/
  kk_string_t _x1356;
  kk_define_string_literal(, _s1357, 4, "node")
  _x1356 = kk_string_dup(_s1357); /*string*/
  is_node = kk_string_is_eq(_x1355,_x1356,kk_context()); /*bool*/
  kk_std_core__list xs_818;
  kk_std_core__list _match_1203;
  kk_box_t _x1358;
  kk_std_core__delayed _x1359 = kk_std_core__delayed_dup(kk_std_os_env_argv); /*delayed<ndet,list<string>>*/
  _x1358 = kk_std_core_force(_x1359, _ctx); /*1001*/
  _match_1203 = kk_std_core__list_unbox(_x1358, _ctx); /*list<string>*/
  if (kk_std_core__is_Cons(_match_1203)) {
    struct kk_std_core_Cons* _con1361 = kk_std_core__as_Cons(_match_1203);
    kk_box_t _box_x1191 = _con1361->head;
    kk_std_core__list xx = _con1361->tail;
    kk_string_t x1 = kk_string_unbox(_box_x1191);
    bool _x1363;
    if (is_node) {
      kk_string_t _x1364;
      kk_std_os_path__path _x1365;
      kk_string_t _x1366 = kk_string_dup(x1); /*string*/
      _x1365 = kk_std_os_path_path(_x1366, _ctx); /*std/os/path/path*/
      _x1364 = kk_std_os_path_stemname(_x1365, _ctx); /*string*/
      kk_string_t _x1367;
      kk_define_string_literal(, _s1368, 4, "node")
      _x1367 = kk_string_dup(_s1368); /*string*/
      _x1363 = kk_string_is_eq(_x1364,_x1367,kk_context()); /*bool*/
    }
    else {
      _x1363 = false; /*bool*/
    }
    if (_x1363) {
      if (kk_likely(kk_std_core__list_is_unique(_match_1203))) {
        kk_box_drop(_box_x1191, _ctx);
        kk_std_core__list_free(_match_1203, _ctx);
      }
      else {
        kk_std_core__list_dup(xx);
        kk_std_core__list_decref(_match_1203, _ctx);
      }
      xs_818 = kk_std_core_drop(xx, kk_integer_from_small(1), _ctx); /*list<string>*/
      goto _match1360;
    }
  }
  {
    xs_818 = kk_std_core_drop(_match_1203, kk_integer_from_small(1), _ctx); /*list<string>*/
  }
  _match1360: ;
  kk_std_core_types__optional default0_816 = kk_std_core_types__new_Optional(kk_integer_box(kk_integer_from_small(10)), _ctx); /*optional<int>*/;
  kk_integer_t n;
  bool _match_1201;
  kk_string_t _x1369;
  if (kk_std_core__is_Cons(xs_818)) {
    struct kk_std_core_Cons* _con1370 = kk_std_core__as_Cons(xs_818);
    kk_box_t _box_x1195 = _con1370->head;
    kk_string_t x0 = kk_string_unbox(_box_x1195);
    kk_string_dup(x0);
    _x1369 = x0; /*string*/
  }
  else {
    _x1369 = kk_string_empty(); /*string*/
  }
  kk_string_t _x1373 = kk_string_empty(); /*string*/
  _match_1201 = kk_string_is_eq(_x1369,_x1373,kk_context()); /*bool*/
  if (_match_1201) {
    kk_std_core__list_drop(xs_818, _ctx);
    if (kk_std_core_types__is_Optional(default0_816)) {
      kk_box_t _box_x1196 = default0_816._cons.Optional.value;
      kk_integer_t _default_15556 = kk_integer_unbox(_box_x1196);
      n = _default_15556; /*int*/
    }
    else {
      n = kk_integer_from_small(0); /*int*/
    }
  }
  else {
    kk_std_core_types__maybe m_17212;
    kk_string_t _x1376;
    kk_string_t _x1377;
    kk_string_t _x1378;
    if (kk_std_core__is_Cons(xs_818)) {
      struct kk_std_core_Cons* _con1379 = kk_std_core__as_Cons(xs_818);
      kk_box_t _box_x1197 = _con1379->head;
      kk_std_core__list _pat010 = _con1379->tail;
      kk_string_t x00 = kk_string_unbox(_box_x1197);
      if (kk_likely(kk_std_core__list_is_unique(xs_818))) {
        kk_std_core__list_drop(_pat010, _ctx);
        kk_std_core__list_free(xs_818, _ctx);
      }
      else {
        kk_string_dup(x00);
        kk_std_core__list_decref(xs_818, _ctx);
      }
      _x1378 = x00; /*string*/
    }
    else {
      _x1378 = kk_string_empty(); /*string*/
    }
    _x1377 = kk_string_trim_left(_x1378,kk_context()); /*string*/
    _x1376 = kk_string_trim_right(_x1377,kk_context()); /*string*/
    bool _x1382;
    kk_std_core_types__optional _x1383 = kk_std_core_types__new_None(_ctx); /*forall<a> optional<a>*/
    if (kk_std_core_types__is_Optional(_x1383)) {
      kk_box_t _box_x1198 = _x1383._cons.Optional.value;
      bool _hex_15560 = kk_bool_unbox(_box_x1198);
      _x1382 = _hex_15560; /*bool*/
    }
    else {
      _x1382 = false; /*bool*/
    }
    m_17212 = kk_std_core_xparse_int(_x1376, _x1382, _ctx); /*maybe<int>*/
    if (kk_std_core_types__is_Nothing(m_17212)) {
      if (kk_std_core_types__is_Optional(default0_816)) {
        kk_box_t _box_x1199 = default0_816._cons.Optional.value;
        kk_integer_t _default_155560 = kk_integer_unbox(_box_x1199);
        n = _default_155560; /*int*/
      }
      else {
        n = kk_integer_from_small(0); /*int*/
      }
    }
    else {
      kk_box_t _box_x1200 = m_17212._cons.Just.value;
      kk_integer_t x = kk_integer_unbox(_box_x1200);
      kk_std_core_types__optional_drop(default0_816, _ctx);
      n = x; /*int*/
    }
  }
  kk_integer_t r;
  kk_integer_t _x1387 = kk_integer_dup(n); /*int*/
  r = kk_main_run(_x1387, n, _ctx); /*int*/
  kk_string_t _x1388 = kk_std_core_show(r, _ctx); /*string*/
  kk_std_core_printsln(_x1388, _ctx); return kk_Unit;
}

// main exit
static void _kk_main_exit(void) {
  kk_context_t* _ctx = kk_get_context();
  kk_main__done(_ctx);
}

// main entry
int main(int argc, char** argv) {
  kk_assert(sizeof(size_t)==8 && sizeof(void*)==8);
  kk_context_t* _ctx = kk_main_start(argc, argv);
  kk_main__init(_ctx);
  atexit(&_kk_main_exit);
  kk_main_main(_ctx);
  kk_main__done(_ctx);
  kk_main_end(_ctx);
  return 0;
}

// initialization
void kk_main__init(kk_context_t* _ctx){
  static bool _kk_initialized = false;
  if (_kk_initialized) return;
  _kk_initialized = true;
  kk_std_core_types__init(_ctx);
  kk_std_core_hnd__init(_ctx);
  kk_std_core__init(_ctx);
  kk_std_os_path__init(_ctx);
  kk_std_os_env__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
  {
    kk_string_t _x1236;
    kk_define_string_literal(, _s1237, 9, "fail.main")
    _x1236 = kk_string_dup(_s1237); /*string*/
    kk_main__tag_fail = kk_std_core_hnd__new_Htag(_x1236, _ctx); /*std/core/hnd/htag<.hnd-fail>*/
  }
  {
    kk_string_t _x1239;
    kk_define_string_literal(, _s1240, 9, "flip.main")
    _x1239 = kk_string_dup(_s1240); /*string*/
    kk_main__tag_flip = kk_std_core_hnd__new_Htag(_x1239, _ctx); /*std/core/hnd/htag<.hnd-flip>*/
  }
}

// termination
void kk_main__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_core_hnd__htag_drop(kk_main__tag_flip, _ctx);
  kk_std_core_hnd__htag_drop(kk_main__tag_fail, _ctx);
  kk_std_os_env__done(_ctx);
  kk_std_os_path__done(_ctx);
  kk_std_core__done(_ctx);
  kk_std_core_hnd__done(_ctx);
  kk_std_core_types__done(_ctx);
}
