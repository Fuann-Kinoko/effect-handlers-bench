// Koka generated module: "main", koka version: 2.4.0, platform: 64-bit
#include "main.h"
 
// runtime tag for the `:choose` effect

kk_std_core_hnd__htag kk_main__tag_choose;
 
// handler for the `:choose` effect

kk_box_t kk_main__handle_choose(int32_t cfc, kk_main__hnd_choose hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (cfc : int32, hnd : .hnd-choose<e,b>, ret : (res : a) -> e b, action : () -> <choose|e> a) -> e b */ 
  kk_std_core_hnd__htag _x1052 = kk_std_core_hnd__htag_dup(kk_main__tag_choose); /*std/core/hnd/htag<.hnd-choose>*/
  return kk_std_core_hnd__hhandle(_x1052, cfc, kk_main__hnd_choose_box(hnd, _ctx), ret, action, _ctx);
}

kk_main__tree kk_main_make(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> div tree */ 
  bool _match_1041 = kk_integer_eq_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_1041) {
    kk_integer_drop(n, _ctx);
    return kk_main__new_Leaf(_ctx);
  }
  {
    kk_main__tree t;
    kk_integer_t _x1060;
    kk_integer_t _x1061 = kk_integer_dup(n); /*int*/
    _x1060 = kk_integer_add_small_const(_x1061, -1, _ctx); /*int*/
    t = kk_main_make(_x1060, _ctx); /*tree*/
    kk_main__tree _x1062 = kk_main__tree_dup(t); /*tree*/
    return kk_main__new_Node(kk_reuse_null, _x1062, n, t, _ctx);
  }
}
 
// monadic lift

kk_integer_t kk_main__mlift871_op(kk_integer_t v, kk_integer_t _y_860, kk_context_t* _ctx) { /* forall<h> (v : int, int) -> <local<h>,choose,div> int */ 
  kk_evv_t w = kk_evv_swap_create0(kk_context()); /*std/core/hnd/evv<<local<644>,choose,div>>*/;
  kk_integer_t y4_737 = kk_integer_mul((kk_integer_from_small(503)),_y_860,kk_context()); /*int*/;
  kk_integer_t x3_734 = kk_integer_sub(v,y4_737,kk_context()); /*int*/;
  kk_integer_t x;
  kk_integer_t _x1063;
  kk_integer_t _x1064 = kk_integer_add_small_const(x3_734, 37, _ctx); /*int*/
  _x1063 = kk_integer_abs(_x1064,kk_context()); /*int*/
  x = kk_integer_mod(_x1063,(kk_integer_from_small(1009)),kk_context()); /*int*/
  kk_unit_t keep = kk_Unit;
  kk_evv_set(w,kk_context());
  return x;
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift872_op_fun1067__t {
  struct kk_function_s _base;
  kk_integer_t v0;
};
static kk_box_t kk_main__mlift872_op_fun1067(kk_function_t _fself, kk_box_t _b_936, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift872_op_fun1067(kk_integer_t v0, kk_context_t* _ctx) {
  struct kk_main__mlift872_op_fun1067__t* _self = kk_function_alloc_as(struct kk_main__mlift872_op_fun1067__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift872_op_fun1067, kk_context());
  _self->v0 = v0;
  return &_self->_base;
}

static kk_box_t kk_main__mlift872_op_fun1067(kk_function_t _fself, kk_box_t _b_936, kk_context_t* _ctx) {
  struct kk_main__mlift872_op_fun1067__t* _self = kk_function_as(struct kk_main__mlift872_op_fun1067__t*, _fself);
  kk_integer_t v0 = _self->v0; /* int */
  kk_drop_match(_self, {kk_integer_dup(v0);}, {}, _ctx)
  kk_integer_t _y_938_8600 = kk_integer_unbox(_b_936); /*int*/;
  kk_integer_t _x1068 = kk_main__mlift871_op(v0, _y_938_8600, _ctx); /*int*/
  return kk_integer_box(_x1068);
}

kk_integer_t kk_main__mlift872_op(bool _y_857, kk_main__tree l, kk_main__tree r, kk_ref_t state, kk_integer_t v0, kk_unit_t wild__, kk_context_t* _ctx) { /* forall<h> (bool, l : tree, r : tree, state : local-var<h,int>, v : int, wild_ : ()) -> <local<h>,choose,div> int */ 
  kk_integer_t x0_881;
  kk_main__tree _x1065;
  if (_y_857) {
    kk_main__tree_drop(r, _ctx);
    _x1065 = l; /*tree*/
  }
  else {
    kk_main__tree_drop(l, _ctx);
    _x1065 = r; /*tree*/
  }
  x0_881 = kk_main__lift750_run(state, _x1065, _ctx); /*int*/
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x0_881, _ctx);
    kk_box_t _x1066 = kk_std_core_hnd_yield_extend(kk_main__new_mlift872_op_fun1067(v0, _ctx), _ctx); /*1001*/
    return kk_integer_unbox(_x1066);
  }
  {
    return kk_main__mlift871_op(v0, x0_881, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift873_op_fun1073__t {
  struct kk_function_s _base;
  kk_main__tree l0;
  kk_main__tree r0;
  kk_ref_t state0;
  kk_integer_t v1;
  bool _y_8570;
};
static kk_box_t kk_main__mlift873_op_fun1073(kk_function_t _fself, kk_box_t _b_944, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift873_op_fun1073(kk_main__tree l0, kk_main__tree r0, kk_ref_t state0, kk_integer_t v1, bool _y_8570, kk_context_t* _ctx) {
  struct kk_main__mlift873_op_fun1073__t* _self = kk_function_alloc_as(struct kk_main__mlift873_op_fun1073__t, 5, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift873_op_fun1073, kk_context());
  _self->l0 = l0;
  _self->r0 = r0;
  _self->state0 = state0;
  _self->v1 = v1;
  _self->_y_8570 = _y_8570;
  return &_self->_base;
}

static kk_box_t kk_main__mlift873_op_fun1073(kk_function_t _fself, kk_box_t _b_944, kk_context_t* _ctx) {
  struct kk_main__mlift873_op_fun1073__t* _self = kk_function_as(struct kk_main__mlift873_op_fun1073__t*, _fself);
  kk_main__tree l0 = _self->l0; /* tree */
  kk_main__tree r0 = _self->r0; /* tree */
  kk_ref_t state0 = _self->state0; /* local-var<644,int> */
  kk_integer_t v1 = _self->v1; /* int */
  bool _y_8570 = _self->_y_8570; /* bool */
  kk_drop_match(_self, {kk_main__tree_dup(l0);kk_main__tree_dup(r0);kk_ref_dup(state0);kk_integer_dup(v1);;}, {}, _ctx)
  kk_unit_t wild__0_946 = kk_Unit;
  kk_unit_unbox(_b_944);
  kk_integer_t _x1074 = kk_main__mlift872_op(_y_8570, l0, r0, state0, v1, wild__0_946, _ctx); /*int*/
  return kk_integer_box(_x1074);
}

kk_integer_t kk_main__mlift873_op(bool _y_8570, kk_main__tree l0, kk_main__tree r0, kk_ref_t state0, kk_integer_t v1, kk_integer_t _y_858, kk_context_t* _ctx) { /* forall<h> (bool, l : tree, r : tree, state : local-var<h,int>, v : int, int) -> <local<h>,choose,div> int */ 
  kk_evv_t w0 = kk_evv_swap_create0(kk_context()); /*std/core/hnd/evv<<local<644>,choose,div>>*/;
  kk_integer_t y1_733;
  kk_integer_t _x1069 = kk_integer_dup(v1); /*int*/
  y1_733 = kk_integer_mul((kk_integer_from_small(503)),_x1069,kk_context()); /*int*/
  kk_integer_t x0_730 = kk_integer_sub(_y_858,y1_733,kk_context()); /*int*/;
  kk_integer_t x4;
  kk_integer_t _x1070;
  kk_integer_t _x1071 = kk_integer_add_small_const(x0_730, 37, _ctx); /*int*/
  _x1070 = kk_integer_abs(_x1071,kk_context()); /*int*/
  x4 = kk_integer_mod(_x1070,(kk_integer_from_small(1009)),kk_context()); /*int*/
  kk_unit_t keep0 = kk_Unit;
  kk_evv_set(w0,kk_context());
  kk_unit_t x3_883 = kk_Unit;
  kk_ref_set_borrow(state0,(kk_integer_box(x4)),kk_context());
  if (kk_yielding(kk_context())) {
    kk_box_t _x1072 = kk_std_core_hnd_yield_extend(kk_main__new_mlift873_op_fun1073(l0, r0, state0, v1, _y_8570, _ctx), _ctx); /*1001*/
    return kk_integer_unbox(_x1072);
  }
  {
    return kk_main__mlift872_op(_y_8570, l0, r0, state0, v1, x3_883, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift874_op_fun1078__t {
  struct kk_function_s _base;
  kk_main__tree l1;
  kk_main__tree r1;
  kk_ref_t state1;
  kk_integer_t v2;
  bool _y_8571;
};
static kk_box_t kk_main__mlift874_op_fun1078(kk_function_t _fself, kk_box_t _b_950, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift874_op_fun1078(kk_main__tree l1, kk_main__tree r1, kk_ref_t state1, kk_integer_t v2, bool _y_8571, kk_context_t* _ctx) {
  struct kk_main__mlift874_op_fun1078__t* _self = kk_function_alloc_as(struct kk_main__mlift874_op_fun1078__t, 5, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift874_op_fun1078, kk_context());
  _self->l1 = l1;
  _self->r1 = r1;
  _self->state1 = state1;
  _self->v2 = v2;
  _self->_y_8571 = _y_8571;
  return &_self->_base;
}

static kk_box_t kk_main__mlift874_op_fun1078(kk_function_t _fself, kk_box_t _b_950, kk_context_t* _ctx) {
  struct kk_main__mlift874_op_fun1078__t* _self = kk_function_as(struct kk_main__mlift874_op_fun1078__t*, _fself);
  kk_main__tree l1 = _self->l1; /* tree */
  kk_main__tree r1 = _self->r1; /* tree */
  kk_ref_t state1 = _self->state1; /* local-var<644,int> */
  kk_integer_t v2 = _self->v2; /* int */
  bool _y_8571 = _self->_y_8571; /* bool */
  kk_drop_match(_self, {kk_main__tree_dup(l1);kk_main__tree_dup(r1);kk_ref_dup(state1);kk_integer_dup(v2);;}, {}, _ctx)
  kk_integer_t _y_952_8580 = kk_integer_unbox(_b_950); /*int*/;
  kk_integer_t _x1079 = kk_main__mlift873_op(_y_8571, l1, r1, state1, v2, _y_952_8580, _ctx); /*int*/
  return kk_integer_box(_x1079);
}

kk_integer_t kk_main__mlift874_op(kk_main__tree l1, kk_main__tree r1, kk_ref_t state1, kk_integer_t v2, bool _y_8571, kk_context_t* _ctx) { /* forall<h> (l : tree, r : tree, state : local-var<h,int>, v : int, bool) -> choose int */ 
  kk_integer_t x6_888;
  kk_box_t _x1075;
  kk_ref_t _x1076 = kk_ref_dup(state1); /*local-var<644,int>*/
  _x1075 = kk_ref_get(_x1076,kk_context()); /*1000*/
  x6_888 = kk_integer_unbox(_x1075); /*int*/
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x6_888, _ctx);
    kk_box_t _x1077 = kk_std_core_hnd_yield_extend(kk_main__new_mlift874_op_fun1078(l1, r1, state1, v2, _y_8571, _ctx), _ctx); /*1001*/
    return kk_integer_unbox(_x1077);
  }
  {
    return kk_main__mlift873_op(_y_8571, l1, r1, state1, v2, x6_888, _ctx);
  }
}
 
// lifted local: run, explore


// lift anonymous function
struct kk_main__lift750_run_fun1087__t {
  struct kk_function_s _base;
  kk_main__tree l2;
  kk_main__tree r2;
  kk_ref_t state2;
  kk_integer_t v3;
};
static kk_box_t kk_main__lift750_run_fun1087(kk_function_t _fself, kk_box_t _b_961, kk_context_t* _ctx);
static kk_function_t kk_main__new_lift750_run_fun1087(kk_main__tree l2, kk_main__tree r2, kk_ref_t state2, kk_integer_t v3, kk_context_t* _ctx) {
  struct kk_main__lift750_run_fun1087__t* _self = kk_function_alloc_as(struct kk_main__lift750_run_fun1087__t, 5, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__lift750_run_fun1087, kk_context());
  _self->l2 = l2;
  _self->r2 = r2;
  _self->state2 = state2;
  _self->v3 = v3;
  return &_self->_base;
}

static kk_box_t kk_main__lift750_run_fun1087(kk_function_t _fself, kk_box_t _b_961, kk_context_t* _ctx) {
  struct kk_main__lift750_run_fun1087__t* _self = kk_function_as(struct kk_main__lift750_run_fun1087__t*, _fself);
  kk_main__tree l2 = _self->l2; /* tree */
  kk_main__tree r2 = _self->r2; /* tree */
  kk_ref_t state2 = _self->state2; /* local-var<644,int> */
  kk_integer_t v3 = _self->v3; /* int */
  kk_drop_match(_self, {kk_main__tree_dup(l2);kk_main__tree_dup(r2);kk_ref_dup(state2);kk_integer_dup(v3);}, {}, _ctx)
  bool _y_979_8572 = kk_bool_unbox(_b_961); /*bool*/;
  kk_integer_t _x1088 = kk_main__mlift874_op(l2, r2, state2, v3, _y_979_8572, _ctx); /*int*/
  return kk_integer_box(_x1088);
}


// lift anonymous function
struct kk_main__lift750_run_fun1092__t {
  struct kk_function_s _base;
  kk_main__tree l2;
  kk_main__tree r2;
  kk_ref_t state2;
  kk_integer_t v3;
  bool x7_890;
};
static kk_box_t kk_main__lift750_run_fun1092(kk_function_t _fself, kk_box_t _b_965, kk_context_t* _ctx);
static kk_function_t kk_main__new_lift750_run_fun1092(kk_main__tree l2, kk_main__tree r2, kk_ref_t state2, kk_integer_t v3, bool x7_890, kk_context_t* _ctx) {
  struct kk_main__lift750_run_fun1092__t* _self = kk_function_alloc_as(struct kk_main__lift750_run_fun1092__t, 5, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__lift750_run_fun1092, kk_context());
  _self->l2 = l2;
  _self->r2 = r2;
  _self->state2 = state2;
  _self->v3 = v3;
  _self->x7_890 = x7_890;
  return &_self->_base;
}

static kk_box_t kk_main__lift750_run_fun1092(kk_function_t _fself, kk_box_t _b_965, kk_context_t* _ctx) {
  struct kk_main__lift750_run_fun1092__t* _self = kk_function_as(struct kk_main__lift750_run_fun1092__t*, _fself);
  kk_main__tree l2 = _self->l2; /* tree */
  kk_main__tree r2 = _self->r2; /* tree */
  kk_ref_t state2 = _self->state2; /* local-var<644,int> */
  kk_integer_t v3 = _self->v3; /* int */
  bool x7_890 = _self->x7_890; /* bool */
  kk_drop_match(_self, {kk_main__tree_dup(l2);kk_main__tree_dup(r2);kk_ref_dup(state2);kk_integer_dup(v3);;}, {}, _ctx)
  kk_integer_t _y_980_8581 = kk_integer_unbox(_b_965); /*int*/;
  kk_integer_t _x1093 = kk_main__mlift873_op(x7_890, l2, r2, state2, v3, _y_980_8581, _ctx); /*int*/
  return kk_integer_box(_x1093);
}


// lift anonymous function
struct kk_main__lift750_run_fun1098__t {
  struct kk_function_s _base;
  kk_main__tree l2;
  kk_main__tree r2;
  kk_ref_t state2;
  kk_integer_t v3;
  bool x7_890;
};
static kk_box_t kk_main__lift750_run_fun1098(kk_function_t _fself, kk_box_t _b_971, kk_context_t* _ctx);
static kk_function_t kk_main__new_lift750_run_fun1098(kk_main__tree l2, kk_main__tree r2, kk_ref_t state2, kk_integer_t v3, bool x7_890, kk_context_t* _ctx) {
  struct kk_main__lift750_run_fun1098__t* _self = kk_function_alloc_as(struct kk_main__lift750_run_fun1098__t, 5, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__lift750_run_fun1098, kk_context());
  _self->l2 = l2;
  _self->r2 = r2;
  _self->state2 = state2;
  _self->v3 = v3;
  _self->x7_890 = x7_890;
  return &_self->_base;
}

static kk_box_t kk_main__lift750_run_fun1098(kk_function_t _fself, kk_box_t _b_971, kk_context_t* _ctx) {
  struct kk_main__lift750_run_fun1098__t* _self = kk_function_as(struct kk_main__lift750_run_fun1098__t*, _fself);
  kk_main__tree l2 = _self->l2; /* tree */
  kk_main__tree r2 = _self->r2; /* tree */
  kk_ref_t state2 = _self->state2; /* local-var<644,int> */
  kk_integer_t v3 = _self->v3; /* int */
  bool x7_890 = _self->x7_890; /* bool */
  kk_drop_match(_self, {kk_main__tree_dup(l2);kk_main__tree_dup(r2);kk_ref_dup(state2);kk_integer_dup(v3);;}, {}, _ctx)
  kk_unit_t wild__1_981 = kk_Unit;
  kk_unit_unbox(_b_971);
  kk_integer_t _x1099 = kk_main__mlift872_op(x7_890, l2, r2, state2, v3, wild__1_981, _ctx); /*int*/
  return kk_integer_box(_x1099);
}


// lift anonymous function
struct kk_main__lift750_run_fun1102__t {
  struct kk_function_s _base;
  kk_integer_t v3;
};
static kk_box_t kk_main__lift750_run_fun1102(kk_function_t _fself, kk_box_t _b_973, kk_context_t* _ctx);
static kk_function_t kk_main__new_lift750_run_fun1102(kk_integer_t v3, kk_context_t* _ctx) {
  struct kk_main__lift750_run_fun1102__t* _self = kk_function_alloc_as(struct kk_main__lift750_run_fun1102__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__lift750_run_fun1102, kk_context());
  _self->v3 = v3;
  return &_self->_base;
}

static kk_box_t kk_main__lift750_run_fun1102(kk_function_t _fself, kk_box_t _b_973, kk_context_t* _ctx) {
  struct kk_main__lift750_run_fun1102__t* _self = kk_function_as(struct kk_main__lift750_run_fun1102__t*, _fself);
  kk_integer_t v3 = _self->v3; /* int */
  kk_drop_match(_self, {kk_integer_dup(v3);}, {}, _ctx)
  kk_integer_t _y_982_8601 = kk_integer_unbox(_b_973); /*int*/;
  kk_integer_t _x1103 = kk_main__mlift871_op(v3, _y_982_8601, _ctx); /*int*/
  return kk_integer_box(_x1103);
}

kk_integer_t kk_main__lift750_run(kk_ref_t state2, kk_main__tree t, kk_context_t* _ctx) { /* forall<h> (state : local-var<h,int>, t : tree) -> <local<h>,choose,div> int */ 
  if (kk_main__is_Leaf(t)) {
    kk_box_t _x1080 = kk_ref_get(state2,kk_context()); /*1000*/
    return kk_integer_unbox(_x1080);
  }
  {
    struct kk_main_Node* _con1081 = kk_main__as_Node(t);
    kk_main__tree l2 = _con1081->left;
    kk_integer_t v3 = _con1081->value;
    kk_main__tree r2 = _con1081->right;
    if (kk_likely(kk_main__tree_is_unique(t))) {
      kk_main__tree_free(t, _ctx);
    }
    else {
      kk_main__tree_dup(l2);
      kk_main__tree_dup(r2);
      kk_integer_dup(v3);
      kk_main__tree_decref(t, _ctx);
    }
    kk_std_core_hnd__ev ev_893;
    kk_ssize_t _x1082 = (KK_IZ(0)); /*ssize_t*/
    ev_893 = kk_evv_at(_x1082,kk_context()); /*std/core/hnd/ev<.hnd-choose>*/
    bool x7_890;
    kk_box_t _x1083;
    {
      struct kk_std_core_hnd_Ev* _con1084 = kk_std_core_hnd__as_Ev(ev_893);
      kk_std_core_hnd__marker m0 = _con1084->marker;
      kk_box_t _box_x954 = _con1084->hnd;
      kk_main__hnd_choose h = kk_main__hnd_choose_unbox(_box_x954, NULL);
      kk_main__hnd_choose_dup(h);
      kk_std_core_hnd__clause0 _match_1036;
      kk_std_core_hnd__clause0 _brw_1037 = kk_main__select_choose(h, _ctx); /*std/core/hnd/clause0<bool,.hnd-choose,129,130>*/;
      kk_main__hnd_choose_drop(h, _ctx);
      _match_1036 = _brw_1037; /*std/core/hnd/clause0<bool,.hnd-choose,129,130>*/
      {
        kk_function_t _fun_unbox_x957 = _match_1036.clause;
        _x1083 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x957, (_fun_unbox_x957, m0, ev_893, _ctx)); /*1005*/
      }
    }
    x7_890 = kk_bool_unbox(_x1083); /*bool*/
    if (kk_yielding(kk_context())) {
      kk_box_t _x1086 = kk_std_core_hnd_yield_extend(kk_main__new_lift750_run_fun1087(l2, r2, state2, v3, _ctx), _ctx); /*1001*/
      return kk_integer_unbox(_x1086);
    }
    {
      kk_integer_t x8_895;
      kk_box_t _x1089;
      kk_ref_t _x1090 = kk_ref_dup(state2); /*local-var<644,int>*/
      _x1089 = kk_ref_get(_x1090,kk_context()); /*1000*/
      x8_895 = kk_integer_unbox(_x1089); /*int*/
      if (kk_yielding(kk_context())) {
        kk_integer_drop(x8_895, _ctx);
        kk_box_t _x1091 = kk_std_core_hnd_yield_extend(kk_main__new_lift750_run_fun1092(l2, r2, state2, v3, x7_890, _ctx), _ctx); /*1001*/
        return kk_integer_unbox(_x1091);
      }
      {
        kk_evv_t w1 = kk_evv_swap_create0(kk_context()); /*std/core/hnd/evv<<local<644>,choose,div>>*/;
        kk_integer_t y1_7330;
        kk_integer_t _x1094 = kk_integer_dup(v3); /*int*/
        y1_7330 = kk_integer_mul((kk_integer_from_small(503)),_x1094,kk_context()); /*int*/
        kk_integer_t x0_7300 = kk_integer_sub(x8_895,y1_7330,kk_context()); /*int*/;
        kk_integer_t x12;
        kk_integer_t _x1095;
        kk_integer_t _x1096 = kk_integer_add_small_const(x0_7300, 37, _ctx); /*int*/
        _x1095 = kk_integer_abs(_x1096,kk_context()); /*int*/
        x12 = kk_integer_mod(_x1095,(kk_integer_from_small(1009)),kk_context()); /*int*/
        kk_unit_t keep1 = kk_Unit;
        kk_evv_set(w1,kk_context());
        kk_unit_t x9_898 = kk_Unit;
        kk_ref_set_borrow(state2,(kk_integer_box(x12)),kk_context());
        if (kk_yielding(kk_context())) {
          kk_box_t _x1097 = kk_std_core_hnd_yield_extend(kk_main__new_lift750_run_fun1098(l2, r2, state2, v3, x7_890, _ctx), _ctx); /*1001*/
          return kk_integer_unbox(_x1097);
        }
        {
          kk_integer_t x14_904;
          kk_main__tree _x1100;
          if (x7_890) {
            kk_main__tree_drop(r2, _ctx);
            _x1100 = l2; /*tree*/
          }
          else {
            kk_main__tree_drop(l2, _ctx);
            _x1100 = r2; /*tree*/
          }
          x14_904 = kk_main__lift750_run(state2, _x1100, _ctx); /*int*/
          if (kk_yielding(kk_context())) {
            kk_integer_drop(x14_904, _ctx);
            kk_box_t _x1101 = kk_std_core_hnd_yield_extend(kk_main__new_lift750_run_fun1102(v3, _ctx), _ctx); /*1001*/
            return kk_integer_unbox(_x1101);
          }
          {
            kk_evv_t w2 = kk_evv_swap_create0(kk_context()); /*std/core/hnd/evv<<local<644>,choose,div>>*/;
            kk_integer_t y4_7370 = kk_integer_mul((kk_integer_from_small(503)),x14_904,kk_context()); /*int*/;
            kk_integer_t x3_7340 = kk_integer_sub(v3,y4_7370,kk_context()); /*int*/;
            kk_integer_t x16;
            kk_integer_t _x1104;
            kk_integer_t _x1105 = kk_integer_add_small_const(x3_7340, 37, _ctx); /*int*/
            _x1104 = kk_integer_abs(_x1105,kk_context()); /*int*/
            x16 = kk_integer_mod(_x1104,(kk_integer_from_small(1009)),kk_context()); /*int*/
            kk_unit_t keep2 = kk_Unit;
            kk_evv_set(w2,kk_context());
            return x16;
          }
        }
      }
    }
  }
}
 
// lifted local: run, loop


// lift anonymous function
struct kk_main__lift751_run_fun1108__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main__lift751_run_fun1108(kk_function_t _fself, kk_function_t _b_985, kk_context_t* _ctx);
static kk_function_t kk_main__new_lift751_run_fun1108(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__lift751_run_fun1108, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_main__lift751_run_fun1109__t {
  struct kk_function_s _base;
  kk_function_t _b_985;
};
static kk_std_core__list kk_main__lift751_run_fun1109(kk_function_t _fself, bool _b_986, kk_context_t* _ctx);
static kk_function_t kk_main__new_lift751_run_fun1109(kk_function_t _b_985, kk_context_t* _ctx) {
  struct kk_main__lift751_run_fun1109__t* _self = kk_function_alloc_as(struct kk_main__lift751_run_fun1109__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__lift751_run_fun1109, kk_context());
  _self->_b_985 = _b_985;
  return &_self->_base;
}

static kk_std_core__list kk_main__lift751_run_fun1109(kk_function_t _fself, bool _b_986, kk_context_t* _ctx) {
  struct kk_main__lift751_run_fun1109__t* _self = kk_function_as(struct kk_main__lift751_run_fun1109__t*, _fself);
  kk_function_t _b_985 = _self->_b_985; /* (1000) -> 1001 1003 */
  kk_drop_match(_self, {kk_function_dup(_b_985);}, {}, _ctx)
  kk_box_t _x1110 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _b_985, (_b_985, kk_bool_box(_b_986), _ctx)); /*1003*/
  return kk_std_core__list_unbox(_x1110, _ctx);
}
static kk_box_t kk_main__lift751_run_fun1108(kk_function_t _fself, kk_function_t _b_985, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_function_t resume_1002 = kk_main__new_lift751_run_fun1109(_b_985, _ctx); /*(bool) -> <div,local<644>> list<int>*/;
  kk_std_core__list xs0_740;
  kk_function_t _x1111 = kk_function_dup(resume_1002); /*(bool) -> <div,local<644>> list<int>*/
  xs0_740 = kk_function_call(kk_std_core__list, (kk_function_t, bool, kk_context_t*), _x1111, (_x1111, true, _ctx)); /*list<int>*/
  kk_std_core__list ys_741 = kk_function_call(kk_std_core__list, (kk_function_t, bool, kk_context_t*), resume_1002, (resume_1002, false, _ctx)); /*list<int>*/;
  kk_std_core__list _x1112 = kk_std_core_append(xs0_740, ys_741, _ctx); /*list<1001>*/
  return kk_std_core__list_box(_x1112, _ctx);
}


// lift anonymous function
struct kk_main__lift751_run_fun1114__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main__lift751_run_fun1114(kk_function_t _fself, kk_box_t _b_993, kk_context_t* _ctx);
static kk_function_t kk_main__new_lift751_run_fun1114(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__lift751_run_fun1114, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main__lift751_run_fun1114(kk_function_t _fself, kk_box_t _b_993, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x1115 = kk_std_core__new_Cons(kk_reuse_null, _b_993, kk_std_core__new_Nil(_ctx), _ctx); /*list<1009>*/
  return kk_std_core__list_box(_x1115, _ctx);
}


// lift anonymous function
struct kk_main__lift751_run_fun1117__t {
  struct kk_function_s _base;
  kk_function_t explore;
  kk_main__tree tree;
};
static kk_box_t kk_main__lift751_run_fun1117(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main__new_lift751_run_fun1117(kk_function_t explore, kk_main__tree tree, kk_context_t* _ctx) {
  struct kk_main__lift751_run_fun1117__t* _self = kk_function_alloc_as(struct kk_main__lift751_run_fun1117__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__lift751_run_fun1117, kk_context());
  _self->explore = explore;
  _self->tree = tree;
  return &_self->_base;
}

static kk_box_t kk_main__lift751_run_fun1117(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_main__lift751_run_fun1117__t* _self = kk_function_as(struct kk_main__lift751_run_fun1117__t*, _fself);
  kk_function_t explore = _self->explore; /* (t : tree) -> <choose,div,local<644>> int */
  kk_main__tree tree = _self->tree; /* tree */
  kk_drop_match(_self, {kk_function_dup(explore);kk_main__tree_dup(tree);}, {}, _ctx)
  kk_integer_t _x1118 = kk_function_call(kk_integer_t, (kk_function_t, kk_main__tree, kk_context_t*), explore, (explore, tree, _ctx)); /*int*/
  return kk_integer_box(_x1118);
}

kk_integer_t kk_main__lift751_run(kk_function_t explore, kk_ref_t state, kk_main__tree tree, kk_integer_t i, kk_context_t* _ctx) { /* forall<h> (explore : (t : tree) -> <choose,div,local<h>> int, state : local-var<h,int>, tree : tree, i : int) -> <div,local<h>> int */ 
  kk__tailcall: ;
  bool _match_1030 = kk_integer_eq_borrow(i,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_1030) {
    kk_main__tree_drop(tree, _ctx);
    kk_integer_drop(i, _ctx);
    kk_function_drop(explore, _ctx);
    kk_box_t _x1106 = kk_ref_get(state,kk_context()); /*1000*/
    return kk_integer_unbox(_x1106);
  }
  {
    int32_t _b_994_989 = (KK_I32(3)); /*int32*/;
    kk_main__hnd_choose _b_995_990;
    kk_std_core_hnd__clause0 _x1107 = kk_std_core_hnd_clause_control0(kk_main__new_lift751_run_fun1108(_ctx), _ctx); /*std/core/hnd/clause0<1000,1002,1001,1003>*/
    _b_995_990 = kk_main__new_Hnd_choose(kk_reuse_null, _x1107, _ctx); /*.hnd-choose<<div,local<644>>,list<int>>*/
    kk_std_core__list xs_738;
    kk_box_t _x1113;
    kk_function_t _x1116;
    kk_function_dup(explore);
    kk_main__tree_dup(tree);
    _x1116 = kk_main__new_lift751_run_fun1117(explore, tree, _ctx); /*() -> <choose|112> 111*/
    _x1113 = kk_main__handle_choose(_b_994_989, _b_995_990, kk_main__new_lift751_run_fun1114(_ctx), _x1116, _ctx); /*113*/
    xs_738 = kk_std_core__list_unbox(_x1113, _ctx); /*list<int>*/
    kk_integer_t _b_1008_1006;
    if (kk_std_core__is_Nil(xs_738)) {
      kk_std_core_types__optional _x1119 = kk_std_core_types__new_None(_ctx); /*forall<a> optional<a>*/
      if (kk_std_core_types__is_Optional(_x1119)) {
        kk_box_t _box_x1003 = _x1119._cons.Optional.value;
        kk_integer_t _default_14393 = kk_integer_unbox(_box_x1003);
        _b_1008_1006 = _default_14393; /*int*/
      }
      else {
        _b_1008_1006 = kk_integer_from_small(0); /*int*/
      }
    }
    else {
      struct kk_std_core_Cons* _con1121 = kk_std_core__as_Cons(xs_738);
      kk_box_t _box_x1004 = _con1121->head;
      kk_std_core__list xx = _con1121->tail;
      kk_integer_t x5 = kk_integer_unbox(_box_x1004);
      if (kk_likely(kk_std_core__list_is_unique(xs_738))) {
        kk_std_core__list_free(xs_738, _ctx);
      }
      else {
        kk_integer_dup(x5);
        kk_std_core__list_dup(xx);
        kk_std_core__list_decref(xs_738, _ctx);
      }
      _b_1008_1006 = kk_std_core__lift17493_maximum(xx, x5, _ctx); /*int*/
    }
    kk_unit_t __0 = kk_Unit;
    kk_ref_set_borrow(state,(kk_integer_box(_b_1008_1006)),kk_context());
    kk_integer_t i0_853 = kk_integer_add_small_const(i, -1, _ctx); /*int*/;
    { // tailcall
      i = i0_853;
      goto kk__tailcall;
    }
  }
}


// lift anonymous function
struct kk_main_run_fun1124__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_integer_t kk_main_run_fun1124(kk_function_t _fself, kk_main__tree t, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun1124(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_main_run_fun1124__t* _self = kk_function_alloc_as(struct kk_main_run_fun1124__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun1124, kk_context());
  _self->loc = loc;
  return &_self->_base;
}

static kk_integer_t kk_main_run_fun1124(kk_function_t _fself, kk_main__tree t, kk_context_t* _ctx) {
  struct kk_main_run_fun1124__t* _self = kk_function_as(struct kk_main_run_fun1124__t*, _fself);
  kk_ref_t loc = _self->loc; /* local-var<644,int> */
  kk_drop_match(_self, {kk_ref_dup(loc);}, {}, _ctx)
  return kk_main__lift750_run(loc, t, _ctx);
}

kk_integer_t kk_main_run(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> div int */ 
  kk_main__tree tree = kk_main_make(n, _ctx); /*tree*/;
  kk_ref_t loc = kk_ref_alloc((kk_integer_box(kk_integer_from_small(0))),kk_context()); /*local-var<644,int>*/;
  kk_integer_t res;
  kk_function_t _x1123;
  kk_ref_dup(loc);
  _x1123 = kk_main_new_run_fun1124(loc, _ctx); /*(t : tree) -> <local<644>,choose,div> int*/
  kk_ref_t _x1125 = kk_ref_dup(loc); /*local-var<644,int>*/
  res = kk_main__lift751_run(_x1123, _x1125, tree, kk_integer_from_small(10), _ctx); /*int*/
  kk_box_t _x1126 = kk_std_core_hnd_prompt_local_var(loc, kk_integer_box(res), _ctx); /*1001*/
  return kk_integer_unbox(_x1126);
}

kk_unit_t kk_main_main(kk_context_t* _ctx) { /* () -> <console,div,ndet> () */ 
  bool is_node0;
  kk_string_t _x1127 = kk_std_core_host(_ctx); /*string*/
  kk_string_t _x1128;
  kk_define_string_literal(, _s1129, 4, "node")
  _x1128 = kk_string_dup(_s1129); /*string*/
  is_node0 = kk_string_is_eq(_x1127,_x1128,kk_context()); /*bool*/
  kk_std_core__list xs_747;
  kk_std_core__list _match_1029;
  kk_box_t _x1130;
  kk_std_core__delayed _x1131 = kk_std_core__delayed_dup(kk_std_os_env_argv); /*delayed<ndet,list<string>>*/
  _x1130 = kk_std_core_force(_x1131, _ctx); /*1001*/
  _match_1029 = kk_std_core__list_unbox(_x1130, _ctx); /*list<string>*/
  if (kk_std_core__is_Cons(_match_1029)) {
    struct kk_std_core_Cons* _con1133 = kk_std_core__as_Cons(_match_1029);
    kk_box_t _box_x1017 = _con1133->head;
    kk_std_core__list xx = _con1133->tail;
    kk_string_t x1 = kk_string_unbox(_box_x1017);
    bool _x1135;
    if (is_node0) {
      kk_string_t _x1136;
      kk_std_os_path__path _x1137;
      kk_string_t _x1138 = kk_string_dup(x1); /*string*/
      _x1137 = kk_std_os_path_path(_x1138, _ctx); /*std/os/path/path*/
      _x1136 = kk_std_os_path_stemname(_x1137, _ctx); /*string*/
      kk_string_t _x1139;
      kk_define_string_literal(, _s1140, 4, "node")
      _x1139 = kk_string_dup(_s1140); /*string*/
      _x1135 = kk_string_is_eq(_x1136,_x1139,kk_context()); /*bool*/
    }
    else {
      _x1135 = false; /*bool*/
    }
    if (_x1135) {
      if (kk_likely(kk_std_core__list_is_unique(_match_1029))) {
        kk_box_drop(_box_x1017, _ctx);
        kk_std_core__list_free(_match_1029, _ctx);
      }
      else {
        kk_std_core__list_dup(xx);
        kk_std_core__list_decref(_match_1029, _ctx);
      }
      xs_747 = kk_std_core_drop(xx, kk_integer_from_small(1), _ctx); /*list<string>*/
      goto _match1132;
    }
  }
  {
    xs_747 = kk_std_core_drop(_match_1029, kk_integer_from_small(1), _ctx); /*list<string>*/
  }
  _match1132: ;
  kk_std_core_types__optional default0_745 = kk_std_core_types__new_Optional(kk_integer_box(kk_integer_from_small(5)), _ctx); /*optional<int>*/;
  kk_integer_t n;
  bool _match_1027;
  kk_string_t _x1141;
  if (kk_std_core__is_Cons(xs_747)) {
    struct kk_std_core_Cons* _con1142 = kk_std_core__as_Cons(xs_747);
    kk_box_t _box_x1021 = _con1142->head;
    kk_string_t x0 = kk_string_unbox(_box_x1021);
    kk_string_dup(x0);
    _x1141 = x0; /*string*/
  }
  else {
    _x1141 = kk_string_empty(); /*string*/
  }
  kk_string_t _x1145 = kk_string_empty(); /*string*/
  _match_1027 = kk_string_is_eq(_x1141,_x1145,kk_context()); /*bool*/
  if (_match_1027) {
    kk_std_core__list_drop(xs_747, _ctx);
    if (kk_std_core_types__is_Optional(default0_745)) {
      kk_box_t _box_x1022 = default0_745._cons.Optional.value;
      kk_integer_t _default_15556 = kk_integer_unbox(_box_x1022);
      n = _default_15556; /*int*/
    }
    else {
      n = kk_integer_from_small(0); /*int*/
    }
  }
  else {
    kk_std_core_types__maybe m_17212;
    kk_string_t _x1148;
    kk_string_t _x1149;
    kk_string_t _x1150;
    if (kk_std_core__is_Cons(xs_747)) {
      struct kk_std_core_Cons* _con1151 = kk_std_core__as_Cons(xs_747);
      kk_box_t _box_x1023 = _con1151->head;
      kk_std_core__list _pat010 = _con1151->tail;
      kk_string_t x00 = kk_string_unbox(_box_x1023);
      if (kk_likely(kk_std_core__list_is_unique(xs_747))) {
        kk_std_core__list_drop(_pat010, _ctx);
        kk_std_core__list_free(xs_747, _ctx);
      }
      else {
        kk_string_dup(x00);
        kk_std_core__list_decref(xs_747, _ctx);
      }
      _x1150 = x00; /*string*/
    }
    else {
      _x1150 = kk_string_empty(); /*string*/
    }
    _x1149 = kk_string_trim_left(_x1150,kk_context()); /*string*/
    _x1148 = kk_string_trim_right(_x1149,kk_context()); /*string*/
    bool _x1154;
    kk_std_core_types__optional _x1155 = kk_std_core_types__new_None(_ctx); /*forall<a> optional<a>*/
    if (kk_std_core_types__is_Optional(_x1155)) {
      kk_box_t _box_x1024 = _x1155._cons.Optional.value;
      bool _hex_15560 = kk_bool_unbox(_box_x1024);
      _x1154 = _hex_15560; /*bool*/
    }
    else {
      _x1154 = false; /*bool*/
    }
    m_17212 = kk_std_core_xparse_int(_x1148, _x1154, _ctx); /*maybe<int>*/
    if (kk_std_core_types__is_Nothing(m_17212)) {
      if (kk_std_core_types__is_Optional(default0_745)) {
        kk_box_t _box_x1025 = default0_745._cons.Optional.value;
        kk_integer_t _default_155560 = kk_integer_unbox(_box_x1025);
        n = _default_155560; /*int*/
      }
      else {
        n = kk_integer_from_small(0); /*int*/
      }
    }
    else {
      kk_box_t _box_x1026 = m_17212._cons.Just.value;
      kk_integer_t x = kk_integer_unbox(_box_x1026);
      kk_std_core_types__optional_drop(default0_745, _ctx);
      n = x; /*int*/
    }
  }
  kk_integer_t r = kk_main_run(n, _ctx); /*int*/;
  kk_string_t _x1159 = kk_std_core_show(r, _ctx); /*string*/
  kk_std_core_printsln(_x1159, _ctx); return kk_Unit;
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
    kk_string_t _x1050;
    kk_define_string_literal(, _s1051, 11, "choose.main")
    _x1050 = kk_string_dup(_s1051); /*string*/
    kk_main__tag_choose = kk_std_core_hnd__new_Htag(_x1050, _ctx); /*std/core/hnd/htag<.hnd-choose>*/
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
  kk_std_core_hnd__htag_drop(kk_main__tag_choose, _ctx);
  kk_std_os_env__done(_ctx);
  kk_std_os_path__done(_ctx);
  kk_std_core__done(_ctx);
  kk_std_core_hnd__done(_ctx);
  kk_std_core_types__done(_ctx);
}
