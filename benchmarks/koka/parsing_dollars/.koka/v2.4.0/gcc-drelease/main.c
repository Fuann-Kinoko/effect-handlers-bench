// Koka generated module: "main", koka version: 2.4.0, platform: 64-bit
#include "main.h"
 
// runtime tag for the `:emit` effect

kk_std_core_hnd__htag kk_main__tag_emit;
 
// handler for the `:emit` effect

kk_box_t kk_main__handle_emit(int32_t cfc, kk_main__hnd_emit hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (cfc : int32, hnd : .hnd-emit<e,b>, ret : (res : a) -> e b, action : () -> <emit|e> a) -> e b */ 
  kk_std_core_hnd__htag _x1932 = kk_std_core_hnd__htag_dup(kk_main__tag_emit); /*std/core/hnd/htag<.hnd-emit>*/
  return kk_std_core_hnd__hhandle(_x1932, cfc, kk_main__hnd_emit_box(hnd, _ctx), ret, action, _ctx);
}
 
// runtime tag for the `:read` effect

kk_std_core_hnd__htag kk_main__tag_read;
 
// handler for the `:read` effect

kk_box_t kk_main__handle_read(int32_t cfc, kk_main__hnd_read hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (cfc : int32, hnd : .hnd-read<e,b>, ret : (res : a) -> e b, action : () -> <read|e> a) -> e b */ 
  kk_std_core_hnd__htag _x1935 = kk_std_core_hnd__htag_dup(kk_main__tag_read); /*std/core/hnd/htag<.hnd-read>*/
  return kk_std_core_hnd__hhandle(_x1935, cfc, kk_main__hnd_read_box(hnd, _ctx), ret, action, _ctx);
}
 
// runtime tag for the `:stop` effect

kk_std_core_hnd__htag kk_main__tag_stop;
 
// handler for the `:stop` effect

kk_box_t kk_main__handle_stop(int32_t cfc, kk_main__hnd_stop hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (cfc : int32, hnd : .hnd-stop<e,b>, ret : (res : a) -> e b, action : () -> <stop|e> a) -> e b */ 
  kk_std_core_hnd__htag _x1938 = kk_std_core_hnd__htag_dup(kk_main__tag_stop); /*std/core/hnd/htag<.hnd-stop>*/
  return kk_std_core_hnd__hhandle(_x1938, cfc, kk_main__hnd_stop_box(hnd, _ctx), ret, action, _ctx);
}


// lift anonymous function
struct kk_main_catch_fun1946__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_catch_fun1946(kk_function_t _fself, kk_function_t _b_1550, kk_context_t* _ctx);
static kk_function_t kk_main_new_catch_fun1946(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_catch_fun1946, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_main_catch_fun1948__t {
  struct kk_function_s _base;
  kk_function_t _b_1550;
};
static kk_unit_t kk_main_catch_fun1948(kk_function_t _fself, kk_box_t _b_1551, kk_context_t* _ctx);
static kk_function_t kk_main_new_catch_fun1948(kk_function_t _b_1550, kk_context_t* _ctx) {
  struct kk_main_catch_fun1948__t* _self = kk_function_alloc_as(struct kk_main_catch_fun1948__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_catch_fun1948, kk_context());
  _self->_b_1550 = _b_1550;
  return &_self->_base;
}

static kk_unit_t kk_main_catch_fun1948(kk_function_t _fself, kk_box_t _b_1551, kk_context_t* _ctx) {
  struct kk_main_catch_fun1948__t* _self = kk_function_as(struct kk_main_catch_fun1948__t*, _fself);
  kk_function_t _b_1550 = _self->_b_1550; /* (1000) -> 1001 1003 */
  kk_drop_match(_self, {kk_function_dup(_b_1550);}, {}, _ctx)
  kk_box_t _x1949 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _b_1550, (_b_1550, _b_1551, _ctx)); /*1003*/
  return kk_unit_unbox(_x1949);
}
static kk_box_t kk_main_catch_fun1946(kk_function_t _fself, kk_function_t _b_1550, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x1947 = kk_Unit;
  kk_function_t resume_1563 = kk_main_new_catch_fun1948(_b_1550, _ctx); /*(411) -> 422 ()*/;
  kk_function_drop(resume_1563, _ctx);
  return kk_unit_box(_x1947);
}


// lift anonymous function
struct kk_main_catch_fun1951__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_catch_fun1951(kk_function_t _fself, kk_box_t _b_1556, kk_context_t* _ctx);
static kk_function_t kk_main_new_catch_fun1951(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_catch_fun1951, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main_catch_fun1951(kk_function_t _fself, kk_box_t _b_1556, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_1562 = kk_Unit;
  kk_unit_unbox(_b_1556);
  return kk_unit_box(_x_1562);
}


// lift anonymous function
struct kk_main_catch_fun1952__t {
  struct kk_function_s _base;
  kk_function_t action;
};
static kk_box_t kk_main_catch_fun1952(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_catch_fun1952(kk_function_t action, kk_context_t* _ctx) {
  struct kk_main_catch_fun1952__t* _self = kk_function_alloc_as(struct kk_main_catch_fun1952__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_catch_fun1952, kk_context());
  _self->action = action;
  return &_self->_base;
}

static kk_box_t kk_main_catch_fun1952(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_main_catch_fun1952__t* _self = kk_function_as(struct kk_main_catch_fun1952__t*, _fself);
  kk_function_t action = _self->action; /* () -> <stop|422> () */
  kk_drop_match(_self, {kk_function_dup(action);}, {}, _ctx)
  kk_unit_t _x1953 = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), action, (action, _ctx));
  return kk_unit_box(_x1953);
}

kk_unit_t kk_main_catch(kk_function_t action, kk_context_t* _ctx) { /* forall<e> (action : () -> <stop|e> ()) -> e () */ 
  int32_t _b_1557_1552 = (KK_I32(3)); /*int32*/;
  kk_main__hnd_stop _b_1558_1553;
  kk_std_core_hnd__clause0 _x1945 = kk_std_core_hnd_clause_control0(kk_main_new_catch_fun1946(_ctx), _ctx); /*std/core/hnd/clause0<1000,1002,1001,1003>*/
  _b_1558_1553 = kk_main__new_Hnd_stop(kk_reuse_null, _x1945, _ctx); /*.hnd-stop<422,()>*/
  kk_box_t _x1950 = kk_main__handle_stop(_b_1557_1552, _b_1558_1553, kk_main_new_catch_fun1951(_ctx), kk_main_new_catch_fun1952(action, _ctx), _ctx); /*258*/
  kk_unit_unbox(_x1950); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift1402_feed_fun1963__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main__mlift1402_feed_fun1963(kk_function_t _fself, kk_box_t _b_1583, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift1402_feed_fun1963(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift1402_feed_fun1963, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main__mlift1402_feed_fun1963(kk_function_t _fself, kk_box_t _b_1583, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t wild__0_1585 = kk_Unit;
  kk_unit_unbox(_b_1583);
  return kk_integer_box(kk_integer_from_small(10));
}

kk_integer_t kk_main__mlift1402_feed(kk_ref_t j, kk_integer_t _y_1353, kk_context_t* _ctx) { /* forall<h,e> (j : local-var<h,int>, int) -> <local<h>,stop|e> chr */ 
  kk_unit_t x_1424 = kk_Unit;
  kk_unit_t _brw_1919 = kk_Unit;
  kk_ref_set_borrow(j,(kk_integer_box(_y_1353)),kk_context());
  kk_ref_drop(j, _ctx);
  _brw_1919;
  if (kk_yielding(kk_context())) {
    kk_box_t _x1962 = kk_std_core_hnd_yield_extend(kk_main__new_mlift1402_feed_fun1963(_ctx), _ctx); /*1001*/
    return kk_integer_unbox(_x1962);
  }
  {
    return kk_integer_from_small(10);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift1403_feed_fun1966__t {
  struct kk_function_s _base;
  kk_ref_t j;
};
static kk_box_t kk_main__mlift1403_feed_fun1966(kk_function_t _fself, kk_box_t _b_1589, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift1403_feed_fun1966(kk_ref_t j, kk_context_t* _ctx) {
  struct kk_main__mlift1403_feed_fun1966__t* _self = kk_function_alloc_as(struct kk_main__mlift1403_feed_fun1966__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift1403_feed_fun1966, kk_context());
  _self->j = j;
  return &_self->_base;
}

static kk_box_t kk_main__mlift1403_feed_fun1966(kk_function_t _fself, kk_box_t _b_1589, kk_context_t* _ctx) {
  struct kk_main__mlift1403_feed_fun1966__t* _self = kk_function_as(struct kk_main__mlift1403_feed_fun1966__t*, _fself);
  kk_ref_t j = _self->j; /* local-var<892,int> */
  kk_drop_match(_self, {kk_ref_dup(j);}, {}, _ctx)
  kk_integer_t _y_1591_1353 = kk_integer_unbox(_b_1589); /*int*/;
  kk_integer_t _x1967 = kk_main__mlift1402_feed(j, _y_1591_1353, _ctx); /*chr*/
  return kk_integer_box(_x1967);
}

kk_integer_t kk_main__mlift1403_feed(kk_ref_t i, kk_ref_t j, kk_unit_t wild__, kk_context_t* _ctx) { /* forall<h,e> (i : local-var<h,int>, j : local-var<h,int>, wild_ : ()) -> <local<h>,stop|e> chr */ 
  kk_integer_t x_1427;
  kk_box_t _x1964 = kk_ref_get(i,kk_context()); /*1000*/
  x_1427 = kk_integer_unbox(_x1964); /*int*/
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_1427, _ctx);
    kk_box_t _x1965 = kk_std_core_hnd_yield_extend(kk_main__new_mlift1403_feed_fun1966(j, _ctx), _ctx); /*1001*/
    return kk_integer_unbox(_x1965);
  }
  {
    return kk_main__mlift1402_feed(j, x_1427, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift1404_feed_fun1969__t {
  struct kk_function_s _base;
  kk_ref_t i;
  kk_ref_t j;
};
static kk_box_t kk_main__mlift1404_feed_fun1969(kk_function_t _fself, kk_box_t _b_1597, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift1404_feed_fun1969(kk_ref_t i, kk_ref_t j, kk_context_t* _ctx) {
  struct kk_main__mlift1404_feed_fun1969__t* _self = kk_function_alloc_as(struct kk_main__mlift1404_feed_fun1969__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift1404_feed_fun1969, kk_context());
  _self->i = i;
  _self->j = j;
  return &_self->_base;
}

static kk_box_t kk_main__mlift1404_feed_fun1969(kk_function_t _fself, kk_box_t _b_1597, kk_context_t* _ctx) {
  struct kk_main__mlift1404_feed_fun1969__t* _self = kk_function_as(struct kk_main__mlift1404_feed_fun1969__t*, _fself);
  kk_ref_t i = _self->i; /* local-var<892,int> */
  kk_ref_t j = _self->j; /* local-var<892,int> */
  kk_drop_match(_self, {kk_ref_dup(i);kk_ref_dup(j);}, {}, _ctx)
  kk_unit_t wild___1599 = kk_Unit;
  kk_unit_unbox(_b_1597);
  kk_integer_t _x1970 = kk_main__mlift1403_feed(i, j, wild___1599, _ctx); /*chr*/
  return kk_integer_box(_x1970);
}

kk_integer_t kk_main__mlift1404_feed(kk_ref_t i, kk_ref_t j, kk_integer_t _y_1351, kk_context_t* _ctx) { /* forall<h,e> (i : local-var<h,int>, j : local-var<h,int>, int) -> <local<h>,stop|e> chr */ 
  kk_integer_t _b_1595_1593 = kk_integer_add_small_const(_y_1351, 1, _ctx); /*int*/;
  kk_unit_t x_1429 = kk_Unit;
  kk_ref_set_borrow(i,(kk_integer_box(_b_1595_1593)),kk_context());
  if (kk_yielding(kk_context())) {
    kk_box_t _x1968 = kk_std_core_hnd_yield_extend(kk_main__new_mlift1404_feed_fun1969(i, j, _ctx), _ctx); /*1001*/
    return kk_integer_unbox(_x1968);
  }
  {
    return kk_main__mlift1403_feed(i, j, x_1429, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift1406_feed_fun1972__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main__mlift1406_feed_fun1972(kk_function_t _fself, kk_box_t _b_1605, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift1406_feed_fun1972(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift1406_feed_fun1972, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main__mlift1406_feed_fun1972(kk_function_t _fself, kk_box_t _b_1605, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t wild__1_1607 = kk_Unit;
  kk_unit_unbox(_b_1605);
  return kk_integer_box(kk_integer_from_small(36));
}

kk_integer_t kk_main__mlift1406_feed(kk_ref_t j, kk_integer_t _y_1355, kk_context_t* _ctx) { /* forall<h,e> (j : local-var<h,int>, int) -> <local<h>,stop|e> chr */ 
  kk_integer_t _b_1603_1601 = kk_integer_add_small_const(_y_1355, -1, _ctx); /*int*/;
  kk_unit_t x_1431 = kk_Unit;
  kk_unit_t _brw_1915 = kk_Unit;
  kk_ref_set_borrow(j,(kk_integer_box(_b_1603_1601)),kk_context());
  kk_ref_drop(j, _ctx);
  _brw_1915;
  if (kk_yielding(kk_context())) {
    kk_box_t _x1971 = kk_std_core_hnd_yield_extend(kk_main__new_mlift1406_feed_fun1972(_ctx), _ctx); /*1001*/
    return kk_integer_unbox(_x1971);
  }
  {
    return kk_integer_from_small(36);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift1407_feed_fun1976__t {
  struct kk_function_s _base;
  kk_ref_t i;
  kk_ref_t j;
};
static kk_box_t kk_main__mlift1407_feed_fun1976(kk_function_t _fself, kk_box_t _b_1611, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift1407_feed_fun1976(kk_ref_t i, kk_ref_t j, kk_context_t* _ctx) {
  struct kk_main__mlift1407_feed_fun1976__t* _self = kk_function_alloc_as(struct kk_main__mlift1407_feed_fun1976__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift1407_feed_fun1976, kk_context());
  _self->i = i;
  _self->j = j;
  return &_self->_base;
}

static kk_box_t kk_main__mlift1407_feed_fun1976(kk_function_t _fself, kk_box_t _b_1611, kk_context_t* _ctx) {
  struct kk_main__mlift1407_feed_fun1976__t* _self = kk_function_as(struct kk_main__mlift1407_feed_fun1976__t*, _fself);
  kk_ref_t i = _self->i; /* local-var<892,int> */
  kk_ref_t j = _self->j; /* local-var<892,int> */
  kk_drop_match(_self, {kk_ref_dup(i);kk_ref_dup(j);}, {}, _ctx)
  kk_integer_t _y_1618_1351 = kk_integer_unbox(_b_1611); /*int*/;
  kk_integer_t _x1977 = kk_main__mlift1404_feed(i, j, _y_1618_1351, _ctx); /*chr*/
  return kk_integer_box(_x1977);
}


// lift anonymous function
struct kk_main__mlift1407_feed_fun1981__t {
  struct kk_function_s _base;
  kk_ref_t j;
};
static kk_box_t kk_main__mlift1407_feed_fun1981(kk_function_t _fself, kk_box_t _b_1615, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift1407_feed_fun1981(kk_ref_t j, kk_context_t* _ctx) {
  struct kk_main__mlift1407_feed_fun1981__t* _self = kk_function_alloc_as(struct kk_main__mlift1407_feed_fun1981__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift1407_feed_fun1981, kk_context());
  _self->j = j;
  return &_self->_base;
}

static kk_box_t kk_main__mlift1407_feed_fun1981(kk_function_t _fself, kk_box_t _b_1615, kk_context_t* _ctx) {
  struct kk_main__mlift1407_feed_fun1981__t* _self = kk_function_as(struct kk_main__mlift1407_feed_fun1981__t*, _fself);
  kk_ref_t j = _self->j; /* local-var<892,int> */
  kk_drop_match(_self, {kk_ref_dup(j);}, {}, _ctx)
  kk_integer_t _y_1619_1355 = kk_integer_unbox(_b_1615); /*int*/;
  kk_integer_t _x1982 = kk_main__mlift1406_feed(j, _y_1619_1355, _ctx); /*chr*/
  return kk_integer_box(_x1982);
}

kk_integer_t kk_main__mlift1407_feed(kk_ref_t i, kk_ref_t j, kk_integer_t _y_1350, kk_context_t* _ctx) { /* forall<h,e> (i : local-var<h,int>, j : local-var<h,int>, int) -> <local<h>,stop|e> chr */ 
  bool _match_1910;
  bool _brw_1913 = kk_integer_eq_borrow(_y_1350,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_y_1350, _ctx);
  _match_1910 = _brw_1913; /*bool*/
  if (_match_1910) {
    kk_integer_t x_1434;
    kk_box_t _x1973;
    kk_ref_t _x1974 = kk_ref_dup(i); /*local-var<892,int>*/
    _x1973 = kk_ref_get(_x1974,kk_context()); /*1000*/
    x_1434 = kk_integer_unbox(_x1973); /*int*/
    if (kk_yielding(kk_context())) {
      kk_integer_drop(x_1434, _ctx);
      kk_box_t _x1975 = kk_std_core_hnd_yield_extend(kk_main__new_mlift1407_feed_fun1976(i, j, _ctx), _ctx); /*1001*/
      return kk_integer_unbox(_x1975);
    }
    {
      return kk_main__mlift1404_feed(i, j, x_1434, _ctx);
    }
  }
  {
    kk_ref_drop(i, _ctx);
    kk_integer_t x0_1436;
    kk_box_t _x1978;
    kk_ref_t _x1979 = kk_ref_dup(j); /*local-var<892,int>*/
    _x1978 = kk_ref_get(_x1979,kk_context()); /*1000*/
    x0_1436 = kk_integer_unbox(_x1978); /*int*/
    if (kk_yielding(kk_context())) {
      kk_integer_drop(x0_1436, _ctx);
      kk_box_t _x1980 = kk_std_core_hnd_yield_extend(kk_main__new_mlift1407_feed_fun1981(j, _ctx), _ctx); /*1001*/
      return kk_integer_unbox(_x1980);
    }
    {
      return kk_main__mlift1406_feed(j, x0_1436, _ctx);
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift1408_feed_fun1989__t {
  struct kk_function_s _base;
  kk_ssize_t i0_1438;
};
static kk_box_t kk_main__mlift1408_feed_fun1989(kk_function_t _fself, kk_function_t _b_1631, kk_box_t _b_1632, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift1408_feed_fun1989(kk_ssize_t i0_1438, kk_context_t* _ctx) {
  struct kk_main__mlift1408_feed_fun1989__t* _self = kk_function_alloc_as(struct kk_main__mlift1408_feed_fun1989__t, 1, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift1408_feed_fun1989, kk_context());
  _self->i0_1438 = i0_1438;
  return &_self->_base;
}



// lift anonymous function
struct kk_main__mlift1408_feed_fun1990__t {
  struct kk_function_s _base;
  kk_function_t _b_1631;
};
static kk_integer_t kk_main__mlift1408_feed_fun1990(kk_function_t _fself, kk_box_t _b_1633, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift1408_feed_fun1990(kk_function_t _b_1631, kk_context_t* _ctx) {
  struct kk_main__mlift1408_feed_fun1990__t* _self = kk_function_alloc_as(struct kk_main__mlift1408_feed_fun1990__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift1408_feed_fun1990, kk_context());
  _self->_b_1631 = _b_1631;
  return &_self->_base;
}

static kk_integer_t kk_main__mlift1408_feed_fun1990(kk_function_t _fself, kk_box_t _b_1633, kk_context_t* _ctx) {
  struct kk_main__mlift1408_feed_fun1990__t* _self = kk_function_as(struct kk_main__mlift1408_feed_fun1990__t*, _fself);
  kk_function_t _b_1631 = _self->_b_1631; /* (1003) -> 1001 1000 */
  kk_drop_match(_self, {kk_function_dup(_b_1631);}, {}, _ctx)
  kk_box_t _x1991 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _b_1631, (_b_1631, _b_1633, _ctx)); /*1000*/
  return kk_integer_unbox(_x1991);
}


// lift anonymous function
struct kk_main__mlift1408_feed_fun1992__t {
  struct kk_function_s _base;
  kk_function_t _b_1640_1627;
};
static kk_box_t kk_main__mlift1408_feed_fun1992(kk_function_t _fself, kk_box_t _b_1629, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift1408_feed_fun1992(kk_function_t _b_1640_1627, kk_context_t* _ctx) {
  struct kk_main__mlift1408_feed_fun1992__t* _self = kk_function_alloc_as(struct kk_main__mlift1408_feed_fun1992__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift1408_feed_fun1992, kk_context());
  _self->_b_1640_1627 = _b_1640_1627;
  return &_self->_base;
}

static kk_box_t kk_main__mlift1408_feed_fun1992(kk_function_t _fself, kk_box_t _b_1629, kk_context_t* _ctx) {
  struct kk_main__mlift1408_feed_fun1992__t* _self = kk_function_as(struct kk_main__mlift1408_feed_fun1992__t*, _fself);
  kk_function_t _b_1640_1627 = _self->_b_1640_1627; /* (1009) -> <stop,local<892>|897> chr */
  kk_drop_match(_self, {kk_function_dup(_b_1640_1627);}, {}, _ctx)
  kk_integer_t _x1993 = kk_function_call(kk_integer_t, (kk_function_t, kk_box_t, kk_context_t*), _b_1640_1627, (_b_1640_1627, _b_1629, _ctx)); /*chr*/
  return kk_integer_box(_x1993);
}
static kk_box_t kk_main__mlift1408_feed_fun1989(kk_function_t _fself, kk_function_t _b_1631, kk_box_t _b_1632, kk_context_t* _ctx) {
  struct kk_main__mlift1408_feed_fun1989__t* _self = kk_function_as(struct kk_main__mlift1408_feed_fun1989__t*, _fself);
  kk_ssize_t i0_1438 = _self->i0_1438; /* std/core/hnd/ev-index */
  kk_drop_match(_self, {;}, {}, _ctx)
  kk_function_t cont_1643 = kk_main__new_mlift1408_feed_fun1990(_b_1631, _ctx); /*(1009) -> <stop,local<892>|897> chr*/;
  kk_box_t res_1644 = _b_1632; /*1009*/;
  kk_ssize_t _b_1639_1626 = i0_1438; /*std/core/hnd/ev-index*/;
  kk_function_t _b_1640_1627 = cont_1643; /*(1009) -> <stop,local<892>|897> chr*/;
  kk_box_t _b_1641_1628 = res_1644; /*1009*/;
  return kk_std_core_hnd_open_at1(_b_1639_1626, kk_main__new_mlift1408_feed_fun1992(_b_1640_1627, _ctx), _b_1641_1628, _ctx);
}


// lift anonymous function
struct kk_main__mlift1408_feed_fun1997__t {
  struct kk_function_s _base;
  kk_ref_t i;
  kk_ref_t j;
};
static kk_box_t kk_main__mlift1408_feed_fun1997(kk_function_t _fself, kk_box_t _b_1637, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift1408_feed_fun1997(kk_ref_t i, kk_ref_t j, kk_context_t* _ctx) {
  struct kk_main__mlift1408_feed_fun1997__t* _self = kk_function_alloc_as(struct kk_main__mlift1408_feed_fun1997__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift1408_feed_fun1997, kk_context());
  _self->i = i;
  _self->j = j;
  return &_self->_base;
}

static kk_box_t kk_main__mlift1408_feed_fun1997(kk_function_t _fself, kk_box_t _b_1637, kk_context_t* _ctx) {
  struct kk_main__mlift1408_feed_fun1997__t* _self = kk_function_as(struct kk_main__mlift1408_feed_fun1997__t*, _fself);
  kk_ref_t i = _self->i; /* local-var<892,int> */
  kk_ref_t j = _self->j; /* local-var<892,int> */
  kk_drop_match(_self, {kk_ref_dup(i);kk_ref_dup(j);}, {}, _ctx)
  kk_integer_t _y_1645_1350 = kk_integer_unbox(_b_1637); /*int*/;
  kk_integer_t _x1998 = kk_main__mlift1407_feed(i, j, _y_1645_1350, _ctx); /*chr*/
  return kk_integer_box(_x1998);
}

kk_integer_t kk_main__mlift1408_feed(kk_ref_t i, kk_ref_t j, kk_integer_t n, kk_integer_t _y_1347, kk_context_t* _ctx) { /* forall<h,e> (i : local-var<h,int>, j : local-var<h,int>, n : int, int) -> <local<h>,stop|e> chr */ 
  bool _match_1904;
  bool _brw_1909 = kk_integer_gt_borrow(_y_1347,n,kk_context()); /*bool*/;
  kk_integer_drop(_y_1347, _ctx);
  kk_integer_drop(n, _ctx);
  _match_1904 = _brw_1909; /*bool*/
  if (_match_1904) {
    kk_ref_drop(j, _ctx);
    kk_ref_drop(i, _ctx);
    kk_ssize_t i0_1438;
    kk_std_core_hnd__htag _x1983 = kk_std_core_hnd__htag_dup(kk_main__tag_stop); /*std/core/hnd/htag<.hnd-stop>*/
    i0_1438 = kk_std_core_hnd__evv_index(_x1983, _ctx); /*std/core/hnd/ev-index*/
    kk_evv_t w = kk_evv_swap_create1(i0_1438,kk_context()); /*std/core/hnd/evv<<stop,local<892>|897>>*/;
    kk_std_core_hnd__ev ev_1440;
    kk_ssize_t _x1984 = (KK_IZ(0)); /*ssize_t*/
    ev_1440 = kk_evv_at(_x1984,kk_context()); /*std/core/hnd/ev<.hnd-stop>*/
    kk_integer_t y;
    kk_box_t _x1985;
    {
      struct kk_std_core_hnd_Ev* _con1986 = kk_std_core_hnd__as_Ev(ev_1440);
      kk_std_core_hnd__marker m0 = _con1986->marker;
      kk_box_t _box_x1620 = _con1986->hnd;
      kk_main__hnd_stop h = kk_main__hnd_stop_unbox(_box_x1620, NULL);
      kk_main__hnd_stop_dup(h);
      kk_std_core_hnd__clause0 _match_1907;
      kk_std_core_hnd__clause0 _brw_1908 = kk_main__select_stop(h, _ctx); /*std/core/hnd/clause0<312,.hnd-stop,313,314>*/;
      kk_main__hnd_stop_drop(h, _ctx);
      _match_1907 = _brw_1908; /*std/core/hnd/clause0<312,.hnd-stop,313,314>*/
      {
        kk_function_t _fun_unbox_x1623 = _match_1907.clause;
        _x1985 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x1623, (_fun_unbox_x1623, m0, ev_1440, _ctx)); /*1005*/
      }
    }
    y = kk_integer_unbox(_x1985); /*chr*/
    kk_evv_set(w,kk_context());
    if (kk_yielding(kk_context())) {
      kk_integer_drop(y, _ctx);
      kk_box_t _x1988 = kk_std_core_hnd_yield_cont(kk_main__new_mlift1408_feed_fun1989(i0_1438, _ctx), _ctx); /*1002*/
      return kk_integer_unbox(_x1988);
    }
    {
      return y;
    }
  }
  {
    kk_integer_t x_1442;
    kk_box_t _x1994;
    kk_ref_t _x1995 = kk_ref_dup(j); /*local-var<892,int>*/
    _x1994 = kk_ref_get(_x1995,kk_context()); /*1000*/
    x_1442 = kk_integer_unbox(_x1994); /*int*/
    if (kk_yielding(kk_context())) {
      kk_integer_drop(x_1442, _ctx);
      kk_box_t _x1996 = kk_std_core_hnd_yield_extend(kk_main__new_mlift1408_feed_fun1997(i, j, _ctx), _ctx); /*1001*/
      return kk_integer_unbox(_x1996);
    }
    {
      return kk_main__mlift1407_feed(i, j, x_1442, _ctx);
    }
  }
}


// lift anonymous function
struct kk_main_feed_fun2001__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_ref_t loc0;
  kk_integer_t n;
};
static kk_box_t kk_main_feed_fun2001(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_feed_fun2001(kk_ref_t loc, kk_ref_t loc0, kk_integer_t n, kk_context_t* _ctx) {
  struct kk_main_feed_fun2001__t* _self = kk_function_alloc_as(struct kk_main_feed_fun2001__t, 4, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_feed_fun2001, kk_context());
  _self->loc = loc;
  _self->loc0 = loc0;
  _self->n = n;
  return &_self->_base;
}



// lift anonymous function
struct kk_main_feed_fun2006__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_ref_t loc0;
  kk_integer_t n;
};
static kk_box_t kk_main_feed_fun2006(kk_function_t _fself, kk_box_t _b_1653, kk_context_t* _ctx);
static kk_function_t kk_main_new_feed_fun2006(kk_ref_t loc, kk_ref_t loc0, kk_integer_t n, kk_context_t* _ctx) {
  struct kk_main_feed_fun2006__t* _self = kk_function_alloc_as(struct kk_main_feed_fun2006__t, 4, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_feed_fun2006, kk_context());
  _self->loc = loc;
  _self->loc0 = loc0;
  _self->n = n;
  return &_self->_base;
}

static kk_box_t kk_main_feed_fun2006(kk_function_t _fself, kk_box_t _b_1653, kk_context_t* _ctx) {
  struct kk_main_feed_fun2006__t* _self = kk_function_as(struct kk_main_feed_fun2006__t*, _fself);
  kk_ref_t loc = _self->loc; /* local-var<892,int> */
  kk_ref_t loc0 = _self->loc0; /* local-var<892,int> */
  kk_integer_t n = _self->n; /* int */
  kk_drop_match(_self, {kk_ref_dup(loc);kk_ref_dup(loc0);kk_integer_dup(n);}, {}, _ctx)
  kk_integer_t _x2007;
  kk_integer_t _x2008 = kk_integer_unbox(_b_1653); /*int*/
  _x2007 = kk_main__mlift1408_feed(loc, loc0, n, _x2008, _ctx); /*chr*/
  return kk_integer_box(_x2007);
}
static kk_box_t kk_main_feed_fun2001(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_main_feed_fun2001__t* _self = kk_function_as(struct kk_main_feed_fun2001__t*, _fself);
  kk_ref_t loc = _self->loc; /* local-var<892,int> */
  kk_ref_t loc0 = _self->loc0; /* local-var<892,int> */
  kk_integer_t n = _self->n; /* int */
  kk_drop_match(_self, {kk_ref_dup(loc);kk_ref_dup(loc0);kk_integer_dup(n);}, {}, _ctx)
  kk_integer_t x_1448;
  kk_box_t _x2002;
  kk_ref_t _x2003 = kk_ref_dup(loc); /*local-var<892,int>*/
  _x2002 = kk_ref_get(_x2003,kk_context()); /*1000*/
  x_1448 = kk_integer_unbox(_x2002); /*int*/
  kk_integer_t _x2004;
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_1448, _ctx);
    kk_box_t _x2005 = kk_std_core_hnd_yield_extend(kk_main_new_feed_fun2006(loc, loc0, n, _ctx), _ctx); /*1001*/
    _x2004 = kk_integer_unbox(_x2005); /*chr*/
  }
  else {
    _x2004 = kk_main__mlift1408_feed(loc, loc0, n, x_1448, _ctx); /*chr*/
  }
  return kk_integer_box(_x2004);
}


// lift anonymous function
struct kk_main_feed_fun2010__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_feed_fun2010(kk_function_t _fself, kk_box_t _b_1659, kk_context_t* _ctx);
static kk_function_t kk_main_new_feed_fun2010(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_feed_fun2010, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main_feed_fun2010(kk_function_t _fself, kk_box_t _b_1659, kk_context_t* _ctx) {
  kk_unused(_fself);
  return _b_1659;
}


// lift anonymous function
struct kk_main_feed_fun2011__t {
  struct kk_function_s _base;
  kk_function_t action;
};
static kk_box_t kk_main_feed_fun2011(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_feed_fun2011(kk_function_t action, kk_context_t* _ctx) {
  struct kk_main_feed_fun2011__t* _self = kk_function_alloc_as(struct kk_main_feed_fun2011__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_feed_fun2011, kk_context());
  _self->action = action;
  return &_self->_base;
}

static kk_box_t kk_main_feed_fun2011(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_main_feed_fun2011__t* _self = kk_function_as(struct kk_main_feed_fun2011__t*, _fself);
  kk_function_t action = _self->action; /* () -> <read,stop|897> () */
  kk_drop_match(_self, {kk_function_dup(action);}, {}, _ctx)
  kk_unit_t _x2012 = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), action, (action, _ctx));
  return kk_unit_box(_x2012);
}

kk_unit_t kk_main_feed(kk_integer_t n, kk_function_t action, kk_context_t* _ctx) { /* forall<e> (n : int, action : () -> <read,stop|e> ()) -> <stop|e> () */ 
  kk_ref_t loc = kk_ref_alloc((kk_integer_box(kk_integer_from_small(0))),kk_context()); /*local-var<892,int>*/;
  kk_ref_t loc0 = kk_ref_alloc((kk_integer_box(kk_integer_from_small(0))),kk_context()); /*local-var<892,int>*/;
  int32_t _b_1660_1655 = (KK_I32(1)); /*int32*/;
  kk_main__hnd_read _b_1661_1656;
  kk_std_core_hnd__clause0 _x1999;
  kk_function_t _x2000;
  kk_ref_dup(loc);
  kk_ref_dup(loc0);
  _x2000 = kk_main_new_feed_fun2001(loc, loc0, n, _ctx); /*() -> 1000 1002*/
  _x1999 = kk_std_core_hnd_clause_tail0(_x2000, _ctx); /*std/core/hnd/clause0<1002,1003,1000,1001>*/
  _b_1661_1656 = kk_main__new_Hnd_read(kk_reuse_null, _x1999, _ctx); /*.hnd-read<<local<892>,stop|897>,()>*/
  kk_unit_t res0 = kk_Unit;
  kk_box_t _x2009 = kk_main__handle_read(_b_1660_1655, _b_1661_1656, kk_main_new_feed_fun2010(_ctx), kk_main_new_feed_fun2011(action, _ctx), _ctx); /*229*/
  kk_unit_unbox(_x2009);
  kk_unit_t res = kk_Unit;
  kk_box_t _x2013 = kk_std_core_hnd_prompt_local_var(loc0, kk_unit_box(res0), _ctx); /*1001*/
  kk_unit_unbox(_x2013);
  kk_box_t _x2014 = kk_std_core_hnd_prompt_local_var(loc, kk_unit_box(res), _ctx); /*1001*/
  kk_unit_unbox(_x2014); return kk_Unit;
}
 
// monadic lift

kk_box_t kk_main__mlift1409_parse(kk_unit_t wild__, kk_context_t* _ctx) { /* (wild_ : ()) -> <emit,stop,read,div> 146 */ 
  return kk_main_parse(kk_integer_from_small(0), _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift1410_parse_fun2021__t {
  struct kk_function_s _base;
  kk_ssize_t i_1453;
};
static kk_box_t kk_main__mlift1410_parse_fun2021(kk_function_t _fself, kk_function_t _b_1689, kk_box_t _b_1690, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift1410_parse_fun2021(kk_ssize_t i_1453, kk_context_t* _ctx) {
  struct kk_main__mlift1410_parse_fun2021__t* _self = kk_function_alloc_as(struct kk_main__mlift1410_parse_fun2021__t, 1, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift1410_parse_fun2021, kk_context());
  _self->i_1453 = i_1453;
  return &_self->_base;
}

static kk_box_t kk_main__mlift1410_parse_fun2021(kk_function_t _fself, kk_function_t _b_1689, kk_box_t _b_1690, kk_context_t* _ctx) {
  struct kk_main__mlift1410_parse_fun2021__t* _self = kk_function_as(struct kk_main__mlift1410_parse_fun2021__t*, _fself);
  kk_ssize_t i_1453 = _self->i_1453; /* std/core/hnd/ev-index */
  kk_drop_match(_self, {;}, {}, _ctx)
  return kk_std_core_hnd_open_at1(i_1453, _b_1689, _b_1690, _ctx);
}


// lift anonymous function
struct kk_main__mlift1410_parse_fun2022__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main__mlift1410_parse_fun2022(kk_function_t _fself, kk_box_t _b_1699, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift1410_parse_fun2022(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift1410_parse_fun2022, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main__mlift1410_parse_fun2022(kk_function_t _fself, kk_box_t _b_1699, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x2023 = kk_Unit;
  kk_unit_unbox(_b_1699);
  return kk_main__mlift1409_parse(_x2023, _ctx);
}


// lift anonymous function
struct kk_main__mlift1410_parse_fun2027__t {
  struct kk_function_s _base;
  kk_ssize_t i0_1459;
};
static kk_box_t kk_main__mlift1410_parse_fun2027(kk_function_t _fself, kk_function_t cont0, kk_box_t res0, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift1410_parse_fun2027(kk_ssize_t i0_1459, kk_context_t* _ctx) {
  struct kk_main__mlift1410_parse_fun2027__t* _self = kk_function_alloc_as(struct kk_main__mlift1410_parse_fun2027__t, 1, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift1410_parse_fun2027, kk_context());
  _self->i0_1459 = i0_1459;
  return &_self->_base;
}

static kk_box_t kk_main__mlift1410_parse_fun2027(kk_function_t _fself, kk_function_t cont0, kk_box_t res0, kk_context_t* _ctx) {
  struct kk_main__mlift1410_parse_fun2027__t* _self = kk_function_as(struct kk_main__mlift1410_parse_fun2027__t*, _fself);
  kk_ssize_t i0_1459 = _self->i0_1459; /* std/core/hnd/ev-index */
  kk_drop_match(_self, {;}, {}, _ctx)
  return kk_std_core_hnd_open_at1(i0_1459, cont0, res0, _ctx);
}

kk_box_t kk_main__mlift1410_parse(kk_integer_t a, kk_integer_t c, kk_context_t* _ctx) { /* forall<a> (a : int, c : chr) -> <read,emit,stop,div> a */ 
  bool _match_1893 = kk_integer_eq_borrow(c,(kk_integer_from_small(36)),kk_context()); /*bool*/;
  if (_match_1893) {
    kk_integer_drop(c, _ctx);
    kk_integer_t _x2015 = kk_integer_add_small_const(a, 1, _ctx); /*int*/
    return kk_main_parse(_x2015, _ctx);
  }
  {
    bool _match_1894;
    bool _brw_1902 = kk_integer_eq_borrow(c,(kk_integer_from_small(10)),kk_context()); /*bool*/;
    kk_integer_drop(c, _ctx);
    _match_1894 = _brw_1902; /*bool*/
    if (_match_1894) {
      kk_ssize_t i_1453 = (KK_IZ(0)); /*std/core/hnd/ev-index*/;
      kk_evv_t w = kk_evv_swap_create1(i_1453,kk_context()); /*std/core/hnd/evv<<emit,stop,read,div>>*/;
      kk_std_core_hnd__ev ev_1456;
      kk_ssize_t _x2016 = (KK_IZ(0)); /*ssize_t*/
      ev_1456 = kk_evv_at(_x2016,kk_context()); /*std/core/hnd/ev<.hnd-emit>*/
      kk_unit_t y = kk_Unit;
      kk_box_t _x2017;
      {
        struct kk_std_core_hnd_Ev* _con2018 = kk_std_core_hnd__as_Ev(ev_1456);
        kk_std_core_hnd__marker m0 = _con2018->marker;
        kk_box_t _box_x1676 = _con2018->hnd;
        kk_main__hnd_emit h = kk_main__hnd_emit_unbox(_box_x1676, NULL);
        kk_main__hnd_emit_dup(h);
        kk_std_core_hnd__clause1 _match_1900;
        kk_std_core_hnd__clause1 _brw_1901 = kk_main__select_emit(h, _ctx); /*std/core/hnd/clause1<int,(),.hnd-emit,274,275>*/;
        kk_main__hnd_emit_drop(h, _ctx);
        _match_1900 = _brw_1901; /*std/core/hnd/clause1<int,(),.hnd-emit,274,275>*/
        {
          kk_function_t _fun_unbox_x1680 = _match_1900.clause;
          _x2017 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1680, (_fun_unbox_x1680, m0, ev_1456, kk_integer_box(a), _ctx)); /*1010*/
        }
      }
      kk_unit_unbox(_x2017);
      kk_evv_set(w,kk_context());
      kk_unit_t x_1451 = kk_Unit;
      if (kk_yielding(kk_context())) {
        kk_box_t _x2020 = kk_std_core_hnd_yield_cont(kk_main__new_mlift1410_parse_fun2021(i_1453, _ctx), _ctx); /*1002*/
        kk_unit_unbox(_x2020);
      }
      else {
        y;
      }
      if (kk_yielding(kk_context())) {
        return kk_std_core_hnd_yield_extend(kk_main__new_mlift1410_parse_fun2022(_ctx), _ctx);
      }
      {
        return kk_main__mlift1409_parse(x_1451, _ctx);
      }
    }
    {
      kk_integer_drop(a, _ctx);
      kk_ssize_t i0_1459 = (KK_IZ(2)); /*std/core/hnd/ev-index*/;
      kk_evv_t w0 = kk_evv_swap_create1(i0_1459,kk_context()); /*std/core/hnd/evv<<stop,emit,read,div>>*/;
      kk_std_core_hnd__ev ev0_1461;
      kk_ssize_t _x2024 = (KK_IZ(0)); /*ssize_t*/
      ev0_1461 = kk_evv_at(_x2024,kk_context()); /*std/core/hnd/ev<.hnd-stop>*/
      kk_box_t y0;
      {
        struct kk_std_core_hnd_Ev* _con2025 = kk_std_core_hnd__as_Ev(ev0_1461);
        kk_std_core_hnd__marker m00 = _con2025->marker;
        kk_box_t _box_x1700 = _con2025->hnd;
        kk_main__hnd_stop h0 = kk_main__hnd_stop_unbox(_box_x1700, NULL);
        kk_main__hnd_stop_dup(h0);
        kk_std_core_hnd__clause0 _match_1896;
        kk_std_core_hnd__clause0 _brw_1897 = kk_main__select_stop(h0, _ctx); /*std/core/hnd/clause0<312,.hnd-stop,313,314>*/;
        kk_main__hnd_stop_drop(h0, _ctx);
        _match_1896 = _brw_1897; /*std/core/hnd/clause0<312,.hnd-stop,313,314>*/
        {
          kk_function_t f2 = _match_1896.clause;
          y0 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_context_t*), f2, (f2, m00, ev0_1461, _ctx)); /*146*/
        }
      }
      kk_evv_set(w0,kk_context());
      if (kk_yielding(kk_context())) {
        kk_box_drop(y0, _ctx);
        return kk_std_core_hnd_yield_cont(kk_main__new_mlift1410_parse_fun2027(i0_1459, _ctx), _ctx);
      }
      {
        return y0;
      }
    }
  }
}


// lift anonymous function
struct kk_main_parse_fun2033__t {
  struct kk_function_s _base;
  kk_ssize_t i1_1466;
};
static kk_box_t kk_main_parse_fun2033(kk_function_t _fself, kk_function_t _b_1714, kk_box_t _b_1715, kk_context_t* _ctx);
static kk_function_t kk_main_new_parse_fun2033(kk_ssize_t i1_1466, kk_context_t* _ctx) {
  struct kk_main_parse_fun2033__t* _self = kk_function_alloc_as(struct kk_main_parse_fun2033__t, 1, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_parse_fun2033, kk_context());
  _self->i1_1466 = i1_1466;
  return &_self->_base;
}

static kk_box_t kk_main_parse_fun2033(kk_function_t _fself, kk_function_t _b_1714, kk_box_t _b_1715, kk_context_t* _ctx) {
  struct kk_main_parse_fun2033__t* _self = kk_function_as(struct kk_main_parse_fun2033__t*, _fself);
  kk_ssize_t i1_1466 = _self->i1_1466; /* std/core/hnd/ev-index */
  kk_drop_match(_self, {;}, {}, _ctx)
  return kk_std_core_hnd_open_at1(i1_1466, _b_1714, _b_1715, _ctx);
}


// lift anonymous function
struct kk_main_parse_fun2034__t {
  struct kk_function_s _base;
  kk_integer_t a0;
};
static kk_box_t kk_main_parse_fun2034(kk_function_t _fself, kk_box_t _b_1724, kk_context_t* _ctx);
static kk_function_t kk_main_new_parse_fun2034(kk_integer_t a0, kk_context_t* _ctx) {
  struct kk_main_parse_fun2034__t* _self = kk_function_alloc_as(struct kk_main_parse_fun2034__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_parse_fun2034, kk_context());
  _self->a0 = a0;
  return &_self->_base;
}

static kk_box_t kk_main_parse_fun2034(kk_function_t _fself, kk_box_t _b_1724, kk_context_t* _ctx) {
  struct kk_main_parse_fun2034__t* _self = kk_function_as(struct kk_main_parse_fun2034__t*, _fself);
  kk_integer_t a0 = _self->a0; /* int */
  kk_drop_match(_self, {kk_integer_dup(a0);}, {}, _ctx)
  kk_integer_t _x2035 = kk_integer_unbox(_b_1724); /*chr*/
  return kk_main__mlift1410_parse(a0, _x2035, _ctx);
}


// lift anonymous function
struct kk_main_parse_fun2042__t {
  struct kk_function_s _base;
  kk_ssize_t i2_1473;
};
static kk_box_t kk_main_parse_fun2042(kk_function_t _fself, kk_function_t _b_1738, kk_box_t _b_1739, kk_context_t* _ctx);
static kk_function_t kk_main_new_parse_fun2042(kk_ssize_t i2_1473, kk_context_t* _ctx) {
  struct kk_main_parse_fun2042__t* _self = kk_function_alloc_as(struct kk_main_parse_fun2042__t, 1, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_parse_fun2042, kk_context());
  _self->i2_1473 = i2_1473;
  return &_self->_base;
}

static kk_box_t kk_main_parse_fun2042(kk_function_t _fself, kk_function_t _b_1738, kk_box_t _b_1739, kk_context_t* _ctx) {
  struct kk_main_parse_fun2042__t* _self = kk_function_as(struct kk_main_parse_fun2042__t*, _fself);
  kk_ssize_t i2_1473 = _self->i2_1473; /* std/core/hnd/ev-index */
  kk_drop_match(_self, {;}, {}, _ctx)
  return kk_std_core_hnd_open_at1(i2_1473, _b_1738, _b_1739, _ctx);
}


// lift anonymous function
struct kk_main_parse_fun2043__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_parse_fun2043(kk_function_t _fself, kk_box_t _b_1748, kk_context_t* _ctx);
static kk_function_t kk_main_new_parse_fun2043(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_parse_fun2043, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main_parse_fun2043(kk_function_t _fself, kk_box_t _b_1748, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x2044 = kk_Unit;
  kk_unit_unbox(_b_1748);
  return kk_main__mlift1409_parse(_x2044, _ctx);
}


// lift anonymous function
struct kk_main_parse_fun2049__t {
  struct kk_function_s _base;
  kk_ssize_t i3_1479;
};
static kk_box_t kk_main_parse_fun2049(kk_function_t _fself, kk_function_t cont3, kk_box_t res3, kk_context_t* _ctx);
static kk_function_t kk_main_new_parse_fun2049(kk_ssize_t i3_1479, kk_context_t* _ctx) {
  struct kk_main_parse_fun2049__t* _self = kk_function_alloc_as(struct kk_main_parse_fun2049__t, 1, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_parse_fun2049, kk_context());
  _self->i3_1479 = i3_1479;
  return &_self->_base;
}

static kk_box_t kk_main_parse_fun2049(kk_function_t _fself, kk_function_t cont3, kk_box_t res3, kk_context_t* _ctx) {
  struct kk_main_parse_fun2049__t* _self = kk_function_as(struct kk_main_parse_fun2049__t*, _fself);
  kk_ssize_t i3_1479 = _self->i3_1479; /* std/core/hnd/ev-index */
  kk_drop_match(_self, {;}, {}, _ctx)
  return kk_std_core_hnd_open_at1(i3_1479, cont3, res3, _ctx);
}

kk_box_t kk_main_parse(kk_integer_t a0, kk_context_t* _ctx) { /* forall<a> (a : int) -> <div,emit,read,stop> a */ 
  kk__tailcall: ;
  kk_ssize_t i1_1466 = (KK_IZ(1)); /*std/core/hnd/ev-index*/;
  kk_evv_t w1 = kk_evv_swap_create1(i1_1466,kk_context()); /*std/core/hnd/evv<<read,emit,stop,div>>*/;
  kk_std_core_hnd__ev ev1_1468;
  kk_ssize_t _x2028 = (KK_IZ(0)); /*ssize_t*/
  ev1_1468 = kk_evv_at(_x2028,kk_context()); /*std/core/hnd/ev<.hnd-read>*/
  kk_integer_t y1;
  kk_box_t _x2029;
  {
    struct kk_std_core_hnd_Ev* _con2030 = kk_std_core_hnd__as_Ev(ev1_1468);
    kk_std_core_hnd__marker m01 = _con2030->marker;
    kk_box_t _box_x1703 = _con2030->hnd;
    kk_main__hnd_read h1 = kk_main__hnd_read_unbox(_box_x1703, NULL);
    kk_main__hnd_read_dup(h1);
    kk_std_core_hnd__clause0 _match_1891;
    kk_std_core_hnd__clause0 _brw_1892 = kk_main__select_read(h1, _ctx); /*std/core/hnd/clause0<chr,.hnd-read,291,292>*/;
    kk_main__hnd_read_drop(h1, _ctx);
    _match_1891 = _brw_1892; /*std/core/hnd/clause0<chr,.hnd-read,291,292>*/
    {
      kk_function_t _fun_unbox_x1706 = _match_1891.clause;
      _x2029 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x1706, (_fun_unbox_x1706, m01, ev1_1468, _ctx)); /*1005*/
    }
  }
  y1 = kk_integer_unbox(_x2029); /*chr*/
  kk_evv_set(w1,kk_context());
  kk_integer_t x2_1463;
  if (kk_yielding(kk_context())) {
    kk_integer_drop(y1, _ctx);
    kk_box_t _x2032 = kk_std_core_hnd_yield_cont(kk_main_new_parse_fun2033(i1_1466, _ctx), _ctx); /*1002*/
    x2_1463 = kk_integer_unbox(_x2032); /*chr*/
  }
  else {
    x2_1463 = y1; /*chr*/
  }
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x2_1463, _ctx);
    return kk_std_core_hnd_yield_extend(kk_main_new_parse_fun2034(a0, _ctx), _ctx);
  }
  {
    bool _match_1880 = kk_integer_eq_borrow(x2_1463,(kk_integer_from_small(36)),kk_context()); /*bool*/;
    if (_match_1880) {
      kk_integer_drop(x2_1463, _ctx);
      { // tailcall
        kk_integer_t _x2036 = kk_integer_add_small_const(a0, 1, _ctx); /*int*/
        a0 = _x2036;
        goto kk__tailcall;
      }
    }
    {
      bool _match_1881;
      bool _brw_1889 = kk_integer_eq_borrow(x2_1463,(kk_integer_from_small(10)),kk_context()); /*bool*/;
      kk_integer_drop(x2_1463, _ctx);
      _match_1881 = _brw_1889; /*bool*/
      if (_match_1881) {
        kk_ssize_t i2_1473 = (KK_IZ(0)); /*std/core/hnd/ev-index*/;
        kk_evv_t w2 = kk_evv_swap_create1(i2_1473,kk_context()); /*std/core/hnd/evv<<emit,stop,read,div>>*/;
        kk_std_core_hnd__ev ev2_1476;
        kk_ssize_t _x2037 = (KK_IZ(0)); /*ssize_t*/
        ev2_1476 = kk_evv_at(_x2037,kk_context()); /*std/core/hnd/ev<.hnd-emit>*/
        kk_unit_t y2 = kk_Unit;
        kk_box_t _x2038;
        {
          struct kk_std_core_hnd_Ev* _con2039 = kk_std_core_hnd__as_Ev(ev2_1476);
          kk_std_core_hnd__marker m02 = _con2039->marker;
          kk_box_t _box_x1725 = _con2039->hnd;
          kk_main__hnd_emit h2 = kk_main__hnd_emit_unbox(_box_x1725, NULL);
          kk_main__hnd_emit_dup(h2);
          kk_std_core_hnd__clause1 _match_1887;
          kk_std_core_hnd__clause1 _brw_1888 = kk_main__select_emit(h2, _ctx); /*std/core/hnd/clause1<int,(),.hnd-emit,274,275>*/;
          kk_main__hnd_emit_drop(h2, _ctx);
          _match_1887 = _brw_1888; /*std/core/hnd/clause1<int,(),.hnd-emit,274,275>*/
          {
            kk_function_t _fun_unbox_x1729 = _match_1887.clause;
            _x2038 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1729, (_fun_unbox_x1729, m02, ev2_1476, kk_integer_box(a0), _ctx)); /*1010*/
          }
        }
        kk_unit_unbox(_x2038);
        kk_evv_set(w2,kk_context());
        kk_unit_t x3_1470 = kk_Unit;
        if (kk_yielding(kk_context())) {
          kk_box_t _x2041 = kk_std_core_hnd_yield_cont(kk_main_new_parse_fun2042(i2_1473, _ctx), _ctx); /*1002*/
          kk_unit_unbox(_x2041);
        }
        else {
          y2;
        }
        if (kk_yielding(kk_context())) {
          return kk_std_core_hnd_yield_extend(kk_main_new_parse_fun2043(_ctx), _ctx);
        }
        { // tailcall
          kk_integer_t _x2045 = kk_integer_from_small(0); /*int*/
          a0 = _x2045;
          goto kk__tailcall;
        }
      }
      {
        kk_integer_drop(a0, _ctx);
        kk_ssize_t i3_1479 = (KK_IZ(2)); /*std/core/hnd/ev-index*/;
        kk_evv_t w3 = kk_evv_swap_create1(i3_1479,kk_context()); /*std/core/hnd/evv<<stop,emit,read,div>>*/;
        kk_std_core_hnd__ev ev3_1481;
        kk_ssize_t _x2046 = (KK_IZ(0)); /*ssize_t*/
        ev3_1481 = kk_evv_at(_x2046,kk_context()); /*std/core/hnd/ev<.hnd-stop>*/
        kk_box_t y3;
        {
          struct kk_std_core_hnd_Ev* _con2047 = kk_std_core_hnd__as_Ev(ev3_1481);
          kk_std_core_hnd__marker m03 = _con2047->marker;
          kk_box_t _box_x1749 = _con2047->hnd;
          kk_main__hnd_stop h3 = kk_main__hnd_stop_unbox(_box_x1749, NULL);
          kk_main__hnd_stop_dup(h3);
          kk_std_core_hnd__clause0 _match_1883;
          kk_std_core_hnd__clause0 _brw_1884 = kk_main__select_stop(h3, _ctx); /*std/core/hnd/clause0<312,.hnd-stop,313,314>*/;
          kk_main__hnd_stop_drop(h3, _ctx);
          _match_1883 = _brw_1884; /*std/core/hnd/clause0<312,.hnd-stop,313,314>*/
          {
            kk_function_t f8 = _match_1883.clause;
            y3 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_context_t*), f8, (f8, m03, ev3_1481, _ctx)); /*146*/
          }
        }
        kk_evv_set(w3,kk_context());
        if (kk_yielding(kk_context())) {
          kk_box_drop(y3, _ctx);
          return kk_std_core_hnd_yield_cont(kk_main_new_parse_fun2049(i3_1479, _ctx), _ctx);
        }
        {
          return y3;
        }
      }
    }
  }
}


// lift anonymous function
struct kk_main_sum_fun2055__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_main_sum_fun2055(kk_function_t _fself, kk_std_core_hnd__marker _b_1772, kk_std_core_hnd__ev _b_1773, kk_box_t _b_1774, kk_context_t* _ctx);
static kk_function_t kk_main_new_sum_fun2055(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_main_sum_fun2055__t* _self = kk_function_alloc_as(struct kk_main_sum_fun2055__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_sum_fun2055, kk_context());
  _self->loc = loc;
  return &_self->_base;
}



// lift anonymous function
struct kk_main_sum_fun2058__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_integer_t x_1801;
};
static kk_unit_t kk_main_sum_fun2058(kk_function_t _fself, kk_integer_t _y_1374, kk_context_t* _ctx);
static kk_function_t kk_main_new_sum_fun2058(kk_ref_t loc, kk_integer_t x_1801, kk_context_t* _ctx) {
  struct kk_main_sum_fun2058__t* _self = kk_function_alloc_as(struct kk_main_sum_fun2058__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_sum_fun2058, kk_context());
  _self->loc = loc;
  _self->x_1801 = x_1801;
  return &_self->_base;
}

static kk_unit_t kk_main_sum_fun2058(kk_function_t _fself, kk_integer_t _y_1374, kk_context_t* _ctx) {
  struct kk_main_sum_fun2058__t* _self = kk_function_as(struct kk_main_sum_fun2058__t*, _fself);
  kk_ref_t loc = _self->loc; /* local-var<1070,int> */
  kk_integer_t x_1801 = _self->x_1801; /* int */
  kk_drop_match(_self, {kk_ref_dup(loc);kk_integer_dup(x_1801);}, {}, _ctx)
  kk_integer_t _b_1768_1766 = kk_integer_add(_y_1374,x_1801,kk_context()); /*int*/;
  kk_unit_t _brw_1877 = kk_Unit;
  kk_ref_set_borrow(loc,(kk_integer_box(_b_1768_1766)),kk_context());
  kk_ref_drop(loc, _ctx);
  return _brw_1877;
}


// lift anonymous function
struct kk_main_sum_fun2061__t {
  struct kk_function_s _base;
  kk_function_t next_1487;
};
static kk_box_t kk_main_sum_fun2061(kk_function_t _fself, kk_box_t _b_1770, kk_context_t* _ctx);
static kk_function_t kk_main_new_sum_fun2061(kk_function_t next_1487, kk_context_t* _ctx) {
  struct kk_main_sum_fun2061__t* _self = kk_function_alloc_as(struct kk_main_sum_fun2061__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_sum_fun2061, kk_context());
  _self->next_1487 = next_1487;
  return &_self->_base;
}

static kk_box_t kk_main_sum_fun2061(kk_function_t _fself, kk_box_t _b_1770, kk_context_t* _ctx) {
  struct kk_main_sum_fun2061__t* _self = kk_function_as(struct kk_main_sum_fun2061__t*, _fself);
  kk_function_t next_1487 = _self->next_1487; /* (int) -> <local<1070>|1074> () */
  kk_drop_match(_self, {kk_function_dup(next_1487);}, {}, _ctx)
  kk_unit_t _x2062 = kk_Unit;
  kk_integer_t _x2063 = kk_integer_unbox(_b_1770); /*int*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_integer_t, kk_context_t*), next_1487, (next_1487, _x2063, _ctx));
  return kk_unit_box(_x2062);
}
static kk_box_t kk_main_sum_fun2055(kk_function_t _fself, kk_std_core_hnd__marker _b_1772, kk_std_core_hnd__ev _b_1773, kk_box_t _b_1774, kk_context_t* _ctx) {
  struct kk_main_sum_fun2055__t* _self = kk_function_as(struct kk_main_sum_fun2055__t*, _fself);
  kk_ref_t loc = _self->loc; /* local-var<1070,int> */
  kk_drop_match(_self, {kk_ref_dup(loc);}, {}, _ctx)
  kk_std_core_hnd__marker ___wildcard__522__14_1799 = _b_1772; /*std/core/hnd/marker<<local<1070>|1074>,int>*/;
  kk_std_core_hnd__ev ___wildcard__522__17_1800 = _b_1773; /*std/core/hnd/ev<.hnd-emit>*/;
  kk_std_core_hnd__ev_dropn(___wildcard__522__17_1800, (KK_I32(3)), _ctx);
  kk_integer_t x_1801 = kk_integer_unbox(_b_1774); /*int*/;
  kk_integer_t x0_1486;
  kk_box_t _x2056;
  kk_ref_t _x2057 = kk_ref_dup(loc); /*local-var<1070,int>*/
  _x2056 = kk_ref_get(_x2057,kk_context()); /*1000*/
  x0_1486 = kk_integer_unbox(_x2056); /*int*/
  kk_function_t next_1487 = kk_main_new_sum_fun2058(loc, x_1801, _ctx); /*(int) -> <local<1070>|1074> ()*/;
  kk_unit_t _x2059 = kk_Unit;
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x0_1486, _ctx);
    kk_box_t _x2060 = kk_std_core_hnd_yield_extend(kk_main_new_sum_fun2061(next_1487, _ctx), _ctx); /*1001*/
    kk_unit_unbox(_x2060);
  }
  else {
    kk_function_call(kk_unit_t, (kk_function_t, kk_integer_t, kk_context_t*), next_1487, (next_1487, x0_1486, _ctx));
  }
  return kk_unit_box(_x2059);
}


// lift anonymous function
struct kk_main_sum_fun2064__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_sum_fun2064(kk_function_t _fself, kk_box_t _b_1783, kk_context_t* _ctx);
static kk_function_t kk_main_new_sum_fun2064(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_sum_fun2064, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main_sum_fun2064(kk_function_t _fself, kk_box_t _b_1783, kk_context_t* _ctx) {
  kk_unused(_fself);
  return _b_1783;
}


// lift anonymous function
struct kk_main_sum_fun2066__t {
  struct kk_function_s _base;
  kk_function_t action;
  kk_ref_t loc;
};
static kk_box_t kk_main_sum_fun2066(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_sum_fun2066(kk_function_t action, kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_main_sum_fun2066__t* _self = kk_function_alloc_as(struct kk_main_sum_fun2066__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_sum_fun2066, kk_context());
  _self->action = action;
  _self->loc = loc;
  return &_self->_base;
}



// lift anonymous function
struct kk_main_sum_fun2067__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_main_sum_fun2067(kk_function_t _fself, kk_box_t _b_1777, kk_context_t* _ctx);
static kk_function_t kk_main_new_sum_fun2067(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_main_sum_fun2067__t* _self = kk_function_alloc_as(struct kk_main_sum_fun2067__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_sum_fun2067, kk_context());
  _self->loc = loc;
  return &_self->_base;
}

static kk_box_t kk_main_sum_fun2067(kk_function_t _fself, kk_box_t _b_1777, kk_context_t* _ctx) {
  struct kk_main_sum_fun2067__t* _self = kk_function_as(struct kk_main_sum_fun2067__t*, _fself);
  kk_ref_t loc = _self->loc; /* local-var<1070,int> */
  kk_drop_match(_self, {kk_ref_dup(loc);}, {}, _ctx)
  kk_box_drop(_b_1777, _ctx);
  return kk_ref_get(loc,kk_context());
}
static kk_box_t kk_main_sum_fun2066(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_main_sum_fun2066__t* _self = kk_function_as(struct kk_main_sum_fun2066__t*, _fself);
  kk_function_t action = _self->action; /* () -> <emit|1074> () */
  kk_ref_t loc = _self->loc; /* local-var<1070,int> */
  kk_drop_match(_self, {kk_function_dup(action);kk_ref_dup(loc);}, {}, _ctx)
  kk_unit_t x1_1491 = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), action, (action, _ctx));
  if (kk_yielding(kk_context())) {
    return kk_std_core_hnd_yield_extend(kk_main_new_sum_fun2067(loc, _ctx), _ctx);
  }
  {
    return kk_ref_get(loc,kk_context());
  }
}

kk_integer_t kk_main_sum(kk_function_t action, kk_context_t* _ctx) { /* forall<e> (action : () -> <emit|e> ()) -> e int */ 
  kk_ref_t loc = kk_ref_alloc((kk_integer_box(kk_integer_from_small(0))),kk_context()); /*local-var<1070,int>*/;
  int32_t _b_1784_1779 = (KK_I32(1)); /*int32*/;
  kk_integer_t res;
  kk_box_t _x2051;
  kk_main__hnd_emit _x2052;
  kk_std_core_hnd__clause1 _x2053;
  kk_function_t _x2054;
  kk_ref_dup(loc);
  _x2054 = kk_main_new_sum_fun2055(loc, _ctx); /*(std/core/hnd/marker<1018,1019>, std/core/hnd/ev<1017>, 1015) -> 1018 1016*/
  _x2053 = kk_std_core_hnd__new_Clause1(_x2054, _ctx); /*std/core/hnd/clause1<1015,1016,1017,1018,1019>*/
  _x2052 = kk_main__new_Hnd_emit(kk_reuse_null, _x2053, _ctx); /*.hnd-emit<7,8>*/
  kk_function_t _x2065;
  kk_ref_dup(loc);
  _x2065 = kk_main_new_sum_fun2066(action, loc, _ctx); /*() -> <emit|199> 1001*/
  _x2051 = kk_main__handle_emit(_b_1784_1779, _x2052, kk_main_new_sum_fun2064(_ctx), _x2065, _ctx); /*200*/
  res = kk_integer_unbox(_x2051); /*int*/
  kk_box_t _x2068 = kk_std_core_hnd_prompt_local_var(loc, kk_integer_box(res), _ctx); /*1001*/
  return kk_integer_unbox(_x2068);
}


// lift anonymous function
struct kk_main_run_fun2074__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_main_run_fun2074(kk_function_t _fself, kk_std_core_hnd__marker _b_1811, kk_std_core_hnd__ev _b_1812, kk_box_t _b_1813, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun2074(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_main_run_fun2074__t* _self = kk_function_alloc_as(struct kk_main_run_fun2074__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun2074, kk_context());
  _self->loc = loc;
  return &_self->_base;
}

static kk_box_t kk_main_run_fun2074(kk_function_t _fself, kk_std_core_hnd__marker _b_1811, kk_std_core_hnd__ev _b_1812, kk_box_t _b_1813, kk_context_t* _ctx) {
  struct kk_main_run_fun2074__t* _self = kk_function_as(struct kk_main_run_fun2074__t*, _fself);
  kk_ref_t loc = _self->loc; /* local-var<1070,int> */
  kk_drop_match(_self, {kk_ref_dup(loc);}, {}, _ctx)
  kk_std_core_hnd__marker ___wildcard__522__14_1856 = _b_1811; /*std/core/hnd/marker<<local<1070>,div>,int>*/;
  kk_std_core_hnd__ev ___wildcard__522__17_1857 = _b_1812; /*std/core/hnd/ev<.hnd-emit>*/;
  kk_std_core_hnd__ev_dropn(___wildcard__522__17_1857, (KK_I32(3)), _ctx);
  kk_integer_t x_1858 = kk_integer_unbox(_b_1813); /*int*/;
  kk_integer_t x0;
  kk_box_t _x2075;
  kk_ref_t _x2076 = kk_ref_dup(loc); /*local-var<1070,int>*/
  _x2075 = kk_ref_get(_x2076,kk_context()); /*1000*/
  x0 = kk_integer_unbox(_x2075); /*int*/
  kk_integer_t _b_1846_1809 = kk_integer_add(x0,x_1858,kk_context()); /*int*/;
  kk_unit_t _x2077 = kk_Unit;
  kk_unit_t _brw_1874 = kk_Unit;
  kk_ref_set_borrow(loc,(kk_integer_box(_b_1846_1809)),kk_context());
  kk_ref_drop(loc, _ctx);
  _brw_1874;
  return kk_unit_box(_x2077);
}


// lift anonymous function
struct kk_main_run_fun2078__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_run_fun2078(kk_function_t _fself, kk_box_t _b_1839, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun2078(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_run_fun2078, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main_run_fun2078(kk_function_t _fself, kk_box_t _b_1839, kk_context_t* _ctx) {
  kk_unused(_fself);
  return _b_1839;
}


// lift anonymous function
struct kk_main_run_fun2080__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_integer_t n;
};
static kk_box_t kk_main_run_fun2080(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun2080(kk_ref_t loc, kk_integer_t n, kk_context_t* _ctx) {
  struct kk_main_run_fun2080__t* _self = kk_function_alloc_as(struct kk_main_run_fun2080__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun2080, kk_context());
  _self->loc = loc;
  _self->n = n;
  return &_self->_base;
}



// lift anonymous function
struct kk_main_run_fun2082__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_run_fun2082(kk_function_t _fself, kk_function_t _b_1815, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun2082(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_run_fun2082, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main_run_fun2082(kk_function_t _fself, kk_function_t _b_1815, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_function_drop(_b_1815, _ctx);
  return kk_unit_box(kk_Unit);
}


// lift anonymous function
struct kk_main_run_fun2084__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_run_fun2084(kk_function_t _fself, kk_box_t _b_1822, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun2084(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_run_fun2084, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main_run_fun2084(kk_function_t _fself, kk_box_t _b_1822, kk_context_t* _ctx) {
  kk_unused(_fself);
  return _b_1822;
}


// lift anonymous function
struct kk_main_run_fun2085__t {
  struct kk_function_s _base;
  kk_integer_t n;
};
static kk_box_t kk_main_run_fun2085(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun2085(kk_integer_t n, kk_context_t* _ctx) {
  struct kk_main_run_fun2085__t* _self = kk_function_alloc_as(struct kk_main_run_fun2085__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun2085, kk_context());
  _self->n = n;
  return &_self->_base;
}



// lift anonymous function
struct kk_main_run_fun2087__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_main_run_fun2087(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun2087(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_run_fun2087, _ctx)
  return kk_function_dup(_fself);
}

static kk_unit_t kk_main_run_fun2087(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_box_t _x2088 = kk_main_parse(kk_integer_from_small(0), _ctx); /*146*/
  return kk_unit_unbox(_x2088);
}
static kk_box_t kk_main_run_fun2085(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_main_run_fun2085__t* _self = kk_function_as(struct kk_main_run_fun2085__t*, _fself);
  kk_integer_t n = _self->n; /* int */
  kk_drop_match(_self, {kk_integer_dup(n);}, {}, _ctx)
  kk_unit_t _x2086 = kk_Unit;
  kk_main_feed(n, kk_main_new_run_fun2087(_ctx), _ctx);
  return kk_unit_box(_x2086);
}


// lift anonymous function
struct kk_main_run_fun2089__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_main_run_fun2089(kk_function_t _fself, kk_box_t _b_1833, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun2089(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_main_run_fun2089__t* _self = kk_function_alloc_as(struct kk_main_run_fun2089__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun2089, kk_context());
  _self->loc = loc;
  return &_self->_base;
}

static kk_box_t kk_main_run_fun2089(kk_function_t _fself, kk_box_t _b_1833, kk_context_t* _ctx) {
  struct kk_main_run_fun2089__t* _self = kk_function_as(struct kk_main_run_fun2089__t*, _fself);
  kk_ref_t loc = _self->loc; /* local-var<1070,int> */
  kk_drop_match(_self, {kk_ref_dup(loc);}, {}, _ctx)
  kk_box_drop(_b_1833, _ctx);
  return kk_ref_get(loc,kk_context());
}
static kk_box_t kk_main_run_fun2080(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_main_run_fun2080__t* _self = kk_function_as(struct kk_main_run_fun2080__t*, _fself);
  kk_ref_t loc = _self->loc; /* local-var<1070,int> */
  kk_integer_t n = _self->n; /* int */
  kk_drop_match(_self, {kk_ref_dup(loc);kk_integer_dup(n);}, {}, _ctx)
  int32_t _b_1823_1818 = (KK_I32(3)); /*int32*/;
  kk_main__hnd_stop _b_1824_1819;
  kk_std_core_hnd__clause0 _x2081 = kk_std_core_hnd_clause_control0(kk_main_new_run_fun2082(_ctx), _ctx); /*std/core/hnd/clause0<1000,1002,1001,1003>*/
  _b_1824_1819 = kk_main__new_Hnd_stop(kk_reuse_null, _x2081, _ctx); /*.hnd-stop<<div,emit>,()>*/
  kk_unit_t x1_1499 = kk_Unit;
  kk_box_t _x2083 = kk_main__handle_stop(_b_1823_1818, _b_1824_1819, kk_main_new_run_fun2084(_ctx), kk_main_new_run_fun2085(n, _ctx), _ctx); /*258*/
  kk_unit_unbox(_x2083);
  if (kk_yielding(kk_context())) {
    return kk_std_core_hnd_yield_extend(kk_main_new_run_fun2089(loc, _ctx), _ctx);
  }
  {
    return kk_ref_get(loc,kk_context());
  }
}

kk_integer_t kk_main_run(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> div int */ 
  kk_ref_t loc = kk_ref_alloc((kk_integer_box(kk_integer_from_small(0))),kk_context()); /*local-var<1070,int>*/;
  int32_t _b_1840_1835 = (KK_I32(1)); /*int32*/;
  kk_integer_t res;
  kk_box_t _x2070;
  kk_main__hnd_emit _x2071;
  kk_std_core_hnd__clause1 _x2072;
  kk_function_t _x2073;
  kk_ref_dup(loc);
  _x2073 = kk_main_new_run_fun2074(loc, _ctx); /*(std/core/hnd/marker<1018,1019>, std/core/hnd/ev<1017>, 1015) -> 1018 1016*/
  _x2072 = kk_std_core_hnd__new_Clause1(_x2073, _ctx); /*std/core/hnd/clause1<1015,1016,1017,1018,1019>*/
  _x2071 = kk_main__new_Hnd_emit(kk_reuse_null, _x2072, _ctx); /*.hnd-emit<7,8>*/
  kk_function_t _x2079;
  kk_ref_dup(loc);
  _x2079 = kk_main_new_run_fun2080(loc, n, _ctx); /*() -> <emit|199> 1001*/
  _x2070 = kk_main__handle_emit(_b_1840_1835, _x2071, kk_main_new_run_fun2078(_ctx), _x2079, _ctx); /*200*/
  res = kk_integer_unbox(_x2070); /*int*/
  kk_box_t _x2090 = kk_std_core_hnd_prompt_local_var(loc, kk_integer_box(res), _ctx); /*1001*/
  return kk_integer_unbox(_x2090);
}

kk_unit_t kk_main_main(kk_context_t* _ctx) { /* () -> <console,div,ndet> () */ 
  bool is_node;
  kk_string_t _x2091 = kk_std_core_host(_ctx); /*string*/
  kk_string_t _x2092;
  kk_define_string_literal(, _s2093, 4, "node")
  _x2092 = kk_string_dup(_s2093); /*string*/
  is_node = kk_string_is_eq(_x2091,_x2092,kk_context()); /*bool*/
  kk_std_core__list xs_1237;
  kk_std_core__list _match_1872;
  kk_box_t _x2094;
  kk_std_core__delayed _x2095 = kk_std_core__delayed_dup(kk_std_os_env_argv); /*delayed<ndet,list<string>>*/
  _x2094 = kk_std_core_force(_x2095, _ctx); /*1001*/
  _match_1872 = kk_std_core__list_unbox(_x2094, _ctx); /*list<string>*/
  if (kk_std_core__is_Cons(_match_1872)) {
    struct kk_std_core_Cons* _con2097 = kk_std_core__as_Cons(_match_1872);
    kk_box_t _box_x1860 = _con2097->head;
    kk_std_core__list xx = _con2097->tail;
    kk_string_t x1 = kk_string_unbox(_box_x1860);
    bool _x2099;
    if (is_node) {
      kk_string_t _x2100;
      kk_std_os_path__path _x2101;
      kk_string_t _x2102 = kk_string_dup(x1); /*string*/
      _x2101 = kk_std_os_path_path(_x2102, _ctx); /*std/os/path/path*/
      _x2100 = kk_std_os_path_stemname(_x2101, _ctx); /*string*/
      kk_string_t _x2103;
      kk_define_string_literal(, _s2104, 4, "node")
      _x2103 = kk_string_dup(_s2104); /*string*/
      _x2099 = kk_string_is_eq(_x2100,_x2103,kk_context()); /*bool*/
    }
    else {
      _x2099 = false; /*bool*/
    }
    if (_x2099) {
      if (kk_likely(kk_std_core__list_is_unique(_match_1872))) {
        kk_box_drop(_box_x1860, _ctx);
        kk_std_core__list_free(_match_1872, _ctx);
      }
      else {
        kk_std_core__list_dup(xx);
        kk_std_core__list_decref(_match_1872, _ctx);
      }
      xs_1237 = kk_std_core_drop(xx, kk_integer_from_small(1), _ctx); /*list<string>*/
      goto _match2096;
    }
  }
  {
    xs_1237 = kk_std_core_drop(_match_1872, kk_integer_from_small(1), _ctx); /*list<string>*/
  }
  _match2096: ;
  kk_std_core_types__optional default0_1235 = kk_std_core_types__new_Optional(kk_integer_box(kk_integer_from_small(10)), _ctx); /*optional<int>*/;
  kk_integer_t n;
  bool _match_1870;
  kk_string_t _x2105;
  if (kk_std_core__is_Cons(xs_1237)) {
    struct kk_std_core_Cons* _con2106 = kk_std_core__as_Cons(xs_1237);
    kk_box_t _box_x1864 = _con2106->head;
    kk_string_t x0 = kk_string_unbox(_box_x1864);
    kk_string_dup(x0);
    _x2105 = x0; /*string*/
  }
  else {
    _x2105 = kk_string_empty(); /*string*/
  }
  kk_string_t _x2109 = kk_string_empty(); /*string*/
  _match_1870 = kk_string_is_eq(_x2105,_x2109,kk_context()); /*bool*/
  if (_match_1870) {
    kk_std_core__list_drop(xs_1237, _ctx);
    if (kk_std_core_types__is_Optional(default0_1235)) {
      kk_box_t _box_x1865 = default0_1235._cons.Optional.value;
      kk_integer_t _default_15556 = kk_integer_unbox(_box_x1865);
      n = _default_15556; /*int*/
    }
    else {
      n = kk_integer_from_small(0); /*int*/
    }
  }
  else {
    kk_std_core_types__maybe m_17212;
    kk_string_t _x2112;
    kk_string_t _x2113;
    kk_string_t _x2114;
    if (kk_std_core__is_Cons(xs_1237)) {
      struct kk_std_core_Cons* _con2115 = kk_std_core__as_Cons(xs_1237);
      kk_box_t _box_x1866 = _con2115->head;
      kk_std_core__list _pat010 = _con2115->tail;
      kk_string_t x00 = kk_string_unbox(_box_x1866);
      if (kk_likely(kk_std_core__list_is_unique(xs_1237))) {
        kk_std_core__list_drop(_pat010, _ctx);
        kk_std_core__list_free(xs_1237, _ctx);
      }
      else {
        kk_string_dup(x00);
        kk_std_core__list_decref(xs_1237, _ctx);
      }
      _x2114 = x00; /*string*/
    }
    else {
      _x2114 = kk_string_empty(); /*string*/
    }
    _x2113 = kk_string_trim_left(_x2114,kk_context()); /*string*/
    _x2112 = kk_string_trim_right(_x2113,kk_context()); /*string*/
    bool _x2118;
    kk_std_core_types__optional _x2119 = kk_std_core_types__new_None(_ctx); /*forall<a> optional<a>*/
    if (kk_std_core_types__is_Optional(_x2119)) {
      kk_box_t _box_x1867 = _x2119._cons.Optional.value;
      bool _hex_15560 = kk_bool_unbox(_box_x1867);
      _x2118 = _hex_15560; /*bool*/
    }
    else {
      _x2118 = false; /*bool*/
    }
    m_17212 = kk_std_core_xparse_int(_x2112, _x2118, _ctx); /*maybe<int>*/
    if (kk_std_core_types__is_Nothing(m_17212)) {
      if (kk_std_core_types__is_Optional(default0_1235)) {
        kk_box_t _box_x1868 = default0_1235._cons.Optional.value;
        kk_integer_t _default_155560 = kk_integer_unbox(_box_x1868);
        n = _default_155560; /*int*/
      }
      else {
        n = kk_integer_from_small(0); /*int*/
      }
    }
    else {
      kk_box_t _box_x1869 = m_17212._cons.Just.value;
      kk_integer_t x = kk_integer_unbox(_box_x1869);
      kk_std_core_types__optional_drop(default0_1235, _ctx);
      n = x; /*int*/
    }
  }
  kk_integer_t r = kk_main_run(n, _ctx); /*int*/;
  kk_string_t _x2123 = kk_std_core_show(r, _ctx); /*string*/
  kk_std_core_printsln(_x2123, _ctx); return kk_Unit;
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
    kk_string_t _x1930;
    kk_define_string_literal(, _s1931, 9, "emit.main")
    _x1930 = kk_string_dup(_s1931); /*string*/
    kk_main__tag_emit = kk_std_core_hnd__new_Htag(_x1930, _ctx); /*std/core/hnd/htag<.hnd-emit>*/
  }
  {
    kk_string_t _x1933;
    kk_define_string_literal(, _s1934, 9, "read.main")
    _x1933 = kk_string_dup(_s1934); /*string*/
    kk_main__tag_read = kk_std_core_hnd__new_Htag(_x1933, _ctx); /*std/core/hnd/htag<.hnd-read>*/
  }
  {
    kk_string_t _x1936;
    kk_define_string_literal(, _s1937, 9, "stop.main")
    _x1936 = kk_string_dup(_s1937); /*string*/
    kk_main__tag_stop = kk_std_core_hnd__new_Htag(_x1936, _ctx); /*std/core/hnd/htag<.hnd-stop>*/
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
  kk_std_core_hnd__htag_drop(kk_main__tag_stop, _ctx);
  kk_std_core_hnd__htag_drop(kk_main__tag_read, _ctx);
  kk_std_core_hnd__htag_drop(kk_main__tag_emit, _ctx);
  kk_std_os_env__done(_ctx);
  kk_std_os_path__done(_ctx);
  kk_std_core__done(_ctx);
  kk_std_core_hnd__done(_ctx);
  kk_std_core_types__done(_ctx);
}
