// Koka generated module: "main", koka version: 2.4.0, platform: 64-bit
#include "main.h"
 
// runtime tag for the `:state` effect

kk_std_core_hnd__htag kk_main__tag_state;
 
// handler for the `:state` effect

kk_box_t kk_main__handle_state(int32_t cfc, kk_main__hnd_state hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (cfc : int32, hnd : .hnd-state<e,b>, ret : (res : a) -> e b, action : () -> <state|e> a) -> e b */ 
  kk_std_core_hnd__htag _x736 = kk_std_core_hnd__htag_dup(kk_main__tag_state); /*std/core/hnd/htag<.hnd-state>*/
  return kk_std_core_hnd__hhandle(_x736, cfc, kk_main__hnd_state_box(hnd, _ctx), ret, action, _ctx);
}
 
// monadic lift

kk_integer_t kk_main__mlift579_countdown(kk_unit_t wild__, kk_context_t* _ctx) { /* (wild_ : ()) -> state int */ 
  return kk_main_countdown(_ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift580_countdown_fun752__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main__mlift580_countdown_fun752(kk_function_t _fself, kk_box_t _b_644, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift580_countdown_fun752(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift580_countdown_fun752, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main__mlift580_countdown_fun752(kk_function_t _fself, kk_box_t _b_644, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x753;
  kk_unit_t _x754 = kk_Unit;
  kk_unit_unbox(_b_644);
  _x753 = kk_main__mlift579_countdown(_x754, _ctx); /*int*/
  return kk_integer_box(_x753);
}

kk_integer_t kk_main__mlift580_countdown(kk_integer_t i, kk_context_t* _ctx) { /* (i : int) -> state int */ 
  bool _match_724 = kk_integer_eq_borrow(i,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_724) {
    return i;
  }
  {
    kk_integer_t i0_461 = kk_integer_add_small_const(i, -1, _ctx); /*int*/;
    kk_std_core_hnd__ev ev_589;
    kk_ssize_t _x747 = (KK_IZ(0)); /*ssize_t*/
    ev_589 = kk_evv_at(_x747,kk_context()); /*std/core/hnd/ev<.hnd-state>*/
    kk_unit_t x_587 = kk_Unit;
    kk_box_t _x748;
    {
      struct kk_std_core_hnd_Ev* _con749 = kk_std_core_hnd__as_Ev(ev_589);
      kk_std_core_hnd__marker m0 = _con749->marker;
      kk_box_t _box_x635 = _con749->hnd;
      kk_main__hnd_state h = kk_main__hnd_state_unbox(_box_x635, NULL);
      kk_main__hnd_state_dup(h);
      kk_std_core_hnd__clause1 _match_726;
      kk_std_core_hnd__clause1 _brw_727 = kk_main__select_set(h, _ctx); /*std/core/hnd/clause1<int,(),.hnd-state,130,131>*/;
      kk_main__hnd_state_drop(h, _ctx);
      _match_726 = _brw_727; /*std/core/hnd/clause1<int,(),.hnd-state,130,131>*/
      {
        kk_function_t _fun_unbox_x639 = _match_726.clause;
        _x748 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x639, (_fun_unbox_x639, m0, ev_589, kk_integer_box(i0_461), _ctx)); /*1010*/
      }
    }
    kk_unit_unbox(_x748);
    if (kk_yielding(kk_context())) {
      kk_box_t _x751 = kk_std_core_hnd_yield_extend(kk_main__new_mlift580_countdown_fun752(_ctx), _ctx); /*1001*/
      return kk_integer_unbox(_x751);
    }
    {
      return kk_main__mlift579_countdown(x_587, _ctx);
    }
  }
}


// lift anonymous function
struct kk_main_countdown_fun760__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_countdown_fun760(kk_function_t _fself, kk_box_t _b_653, kk_context_t* _ctx);
static kk_function_t kk_main_new_countdown_fun760(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_countdown_fun760, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main_countdown_fun760(kk_function_t _fself, kk_box_t _b_653, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x761;
  kk_integer_t _x762 = kk_integer_unbox(_b_653); /*int*/
  _x761 = kk_main__mlift580_countdown(_x762, _ctx); /*int*/
  return kk_integer_box(_x761);
}


// lift anonymous function
struct kk_main_countdown_fun768__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_countdown_fun768(kk_function_t _fself, kk_box_t _b_663, kk_context_t* _ctx);
static kk_function_t kk_main_new_countdown_fun768(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_countdown_fun768, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main_countdown_fun768(kk_function_t _fself, kk_box_t _b_663, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x769;
  kk_unit_t _x770 = kk_Unit;
  kk_unit_unbox(_b_663);
  _x769 = kk_main__mlift579_countdown(_x770, _ctx); /*int*/
  return kk_integer_box(_x769);
}

kk_integer_t kk_main_countdown(kk_context_t* _ctx) { /* () -> <div,state> int */ 
  kk__tailcall: ;
  kk_std_core_hnd__ev ev0_595;
  kk_ssize_t _x755 = (KK_IZ(0)); /*ssize_t*/
  ev0_595 = kk_evv_at(_x755,kk_context()); /*std/core/hnd/ev<.hnd-state>*/
  kk_integer_t x1_592;
  kk_box_t _x756;
  {
    struct kk_std_core_hnd_Ev* _con757 = kk_std_core_hnd__as_Ev(ev0_595);
    kk_std_core_hnd__marker m00 = _con757->marker;
    kk_box_t _box_x646 = _con757->hnd;
    kk_main__hnd_state h0 = kk_main__hnd_state_unbox(_box_x646, NULL);
    kk_main__hnd_state_dup(h0);
    kk_std_core_hnd__clause0 _match_722;
    kk_std_core_hnd__clause0 _brw_723 = kk_main__select_get(h0, _ctx); /*std/core/hnd/clause0<int,.hnd-state,113,114>*/;
    kk_main__hnd_state_drop(h0, _ctx);
    _match_722 = _brw_723; /*std/core/hnd/clause0<int,.hnd-state,113,114>*/
    {
      kk_function_t _fun_unbox_x649 = _match_722.clause;
      _x756 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x649, (_fun_unbox_x649, m00, ev0_595, _ctx)); /*1005*/
    }
  }
  x1_592 = kk_integer_unbox(_x756); /*int*/
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x1_592, _ctx);
    kk_box_t _x759 = kk_std_core_hnd_yield_extend(kk_main_new_countdown_fun760(_ctx), _ctx); /*1001*/
    return kk_integer_unbox(_x759);
  }
  {
    bool _match_718 = kk_integer_eq_borrow(x1_592,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    if (_match_718) {
      return x1_592;
    }
    {
      kk_integer_t i0_4610 = kk_integer_add_small_const(x1_592, -1, _ctx); /*int*/;
      kk_std_core_hnd__ev ev1_600;
      kk_ssize_t _x763 = (KK_IZ(0)); /*ssize_t*/
      ev1_600 = kk_evv_at(_x763,kk_context()); /*std/core/hnd/ev<.hnd-state>*/
      kk_unit_t x2_597 = kk_Unit;
      kk_box_t _x764;
      {
        struct kk_std_core_hnd_Ev* _con765 = kk_std_core_hnd__as_Ev(ev1_600);
        kk_std_core_hnd__marker m01 = _con765->marker;
        kk_box_t _box_x654 = _con765->hnd;
        kk_main__hnd_state h1 = kk_main__hnd_state_unbox(_box_x654, NULL);
        kk_main__hnd_state_dup(h1);
        kk_std_core_hnd__clause1 _match_720;
        kk_std_core_hnd__clause1 _brw_721 = kk_main__select_set(h1, _ctx); /*std/core/hnd/clause1<int,(),.hnd-state,130,131>*/;
        kk_main__hnd_state_drop(h1, _ctx);
        _match_720 = _brw_721; /*std/core/hnd/clause1<int,(),.hnd-state,130,131>*/
        {
          kk_function_t _fun_unbox_x658 = _match_720.clause;
          _x764 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x658, (_fun_unbox_x658, m01, ev1_600, kk_integer_box(i0_4610), _ctx)); /*1010*/
        }
      }
      kk_unit_unbox(_x764);
      if (kk_yielding(kk_context())) {
        kk_box_t _x767 = kk_std_core_hnd_yield_extend(kk_main_new_countdown_fun768(_ctx), _ctx); /*1001*/
        return kk_integer_unbox(_x767);
      }
      { // tailcall
        goto kk__tailcall;
      }
    }
  }
}


// lift anonymous function
struct kk_main_run_fun775__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_main_run_fun775(kk_function_t _fself, kk_std_core_hnd__marker _b_670, kk_std_core_hnd__ev _b_671, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun775(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_main_run_fun775__t* _self = kk_function_alloc_as(struct kk_main_run_fun775__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun775, kk_context());
  _self->loc = loc;
  return &_self->_base;
}

static kk_box_t kk_main_run_fun775(kk_function_t _fself, kk_std_core_hnd__marker _b_670, kk_std_core_hnd__ev _b_671, kk_context_t* _ctx) {
  struct kk_main_run_fun775__t* _self = kk_function_as(struct kk_main_run_fun775__t*, _fself);
  kk_ref_t loc = _self->loc; /* local-var<381,int> */
  kk_drop_match(_self, {kk_ref_dup(loc);}, {}, _ctx)
  kk_std_core_hnd__marker ___wildcard__565__14_697 = _b_670; /*std/core/hnd/marker<<local<381>,div>,int>*/;
  kk_std_core_hnd__ev ___wildcard__565__17_698 = _b_671; /*std/core/hnd/ev<.hnd-state>*/;
  kk_std_core_hnd__ev_dropn(___wildcard__565__17_698, (KK_I32(3)), _ctx);
  return kk_ref_get(loc,kk_context());
}


// lift anonymous function
struct kk_main_run_fun778__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_main_run_fun778(kk_function_t _fself, kk_std_core_hnd__marker _b_675, kk_std_core_hnd__ev _b_676, kk_box_t _b_677, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun778(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_main_run_fun778__t* _self = kk_function_alloc_as(struct kk_main_run_fun778__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun778, kk_context());
  _self->loc = loc;
  return &_self->_base;
}

static kk_box_t kk_main_run_fun778(kk_function_t _fself, kk_std_core_hnd__marker _b_675, kk_std_core_hnd__ev _b_676, kk_box_t _b_677, kk_context_t* _ctx) {
  struct kk_main_run_fun778__t* _self = kk_function_as(struct kk_main_run_fun778__t*, _fself);
  kk_ref_t loc = _self->loc; /* local-var<381,int> */
  kk_drop_match(_self, {kk_ref_dup(loc);}, {}, _ctx)
  kk_std_core_hnd__marker ___wildcard__522__14_699 = _b_675; /*std/core/hnd/marker<<local<381>,div>,int>*/;
  kk_std_core_hnd__ev ___wildcard__522__17_700 = _b_676; /*std/core/hnd/ev<.hnd-state>*/;
  kk_std_core_hnd__ev_dropn(___wildcard__522__17_700, (KK_I32(3)), _ctx);
  kk_integer_t x_701 = kk_integer_unbox(_b_677); /*int*/;
  kk_unit_t _x779 = kk_Unit;
  kk_unit_t _brw_716 = kk_Unit;
  kk_ref_set_borrow(loc,(kk_integer_box(x_701)),kk_context());
  kk_ref_drop(loc, _ctx);
  _brw_716;
  return kk_unit_box(_x779);
}


// lift anonymous function
struct kk_main_run_fun780__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_run_fun780(kk_function_t _fself, kk_box_t _b_682, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun780(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_run_fun780, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main_run_fun780(kk_function_t _fself, kk_box_t _b_682, kk_context_t* _ctx) {
  kk_unused(_fself);
  return _b_682;
}


// lift anonymous function
struct kk_main_run_fun781__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_run_fun781(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun781(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_run_fun781, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main_run_fun781(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x782 = kk_main_countdown(_ctx); /*int*/
  return kk_integer_box(_x782);
}

kk_integer_t kk_main_run(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> div int */ 
  kk_ref_t loc = kk_ref_alloc((kk_integer_box(n)),kk_context()); /*local-var<381,int>*/;
  int32_t _b_683_678 = (KK_I32(1)); /*int32*/;
  kk_integer_t res;
  kk_box_t _x771;
  kk_main__hnd_state _x772;
  kk_std_core_hnd__clause0 _x773;
  kk_function_t _x774;
  kk_ref_dup(loc);
  _x774 = kk_main_new_run_fun775(loc, _ctx); /*(std/core/hnd/marker<1012,1013>, std/core/hnd/ev<1011>) -> 1012 1000*/
  _x773 = kk_std_core_hnd__new_Clause0(_x774, _ctx); /*std/core/hnd/clause0<1010,1011,1012,1013>*/
  kk_std_core_hnd__clause1 _x776;
  kk_function_t _x777;
  kk_ref_dup(loc);
  _x777 = kk_main_new_run_fun778(loc, _ctx); /*(std/core/hnd/marker<1018,1019>, std/core/hnd/ev<1017>, 1015) -> 1018 1016*/
  _x776 = kk_std_core_hnd__new_Clause1(_x777, _ctx); /*std/core/hnd/clause1<1015,1016,1017,1018,1019>*/
  _x772 = kk_main__new_Hnd_state(kk_reuse_null, _x773, _x776, _ctx); /*.hnd-state<11,12>*/
  _x771 = kk_main__handle_state(_b_683_678, _x772, kk_main_new_run_fun780(_ctx), kk_main_new_run_fun781(_ctx), _ctx); /*97*/
  res = kk_integer_unbox(_x771); /*int*/
  kk_box_t _x783 = kk_std_core_hnd_prompt_local_var(loc, kk_integer_box(res), _ctx); /*1001*/
  return kk_integer_unbox(_x783);
}

kk_unit_t kk_main_main(kk_context_t* _ctx) { /* () -> <console,div,ndet> () */ 
  bool is_node;
  kk_string_t _x784 = kk_std_core_host(_ctx); /*string*/
  kk_string_t _x785;
  kk_define_string_literal(, _s786, 4, "node")
  _x785 = kk_string_dup(_s786); /*string*/
  is_node = kk_string_is_eq(_x784,_x785,kk_context()); /*bool*/
  kk_std_core__list xs_466;
  kk_std_core__list _match_715;
  kk_box_t _x787;
  kk_std_core__delayed _x788 = kk_std_core__delayed_dup(kk_std_os_env_argv); /*delayed<ndet,list<string>>*/
  _x787 = kk_std_core_force(_x788, _ctx); /*1001*/
  _match_715 = kk_std_core__list_unbox(_x787, _ctx); /*list<string>*/
  if (kk_std_core__is_Cons(_match_715)) {
    struct kk_std_core_Cons* _con790 = kk_std_core__as_Cons(_match_715);
    kk_box_t _box_x703 = _con790->head;
    kk_std_core__list xx = _con790->tail;
    kk_string_t x1 = kk_string_unbox(_box_x703);
    bool _x792;
    if (is_node) {
      kk_string_t _x793;
      kk_std_os_path__path _x794;
      kk_string_t _x795 = kk_string_dup(x1); /*string*/
      _x794 = kk_std_os_path_path(_x795, _ctx); /*std/os/path/path*/
      _x793 = kk_std_os_path_stemname(_x794, _ctx); /*string*/
      kk_string_t _x796;
      kk_define_string_literal(, _s797, 4, "node")
      _x796 = kk_string_dup(_s797); /*string*/
      _x792 = kk_string_is_eq(_x793,_x796,kk_context()); /*bool*/
    }
    else {
      _x792 = false; /*bool*/
    }
    if (_x792) {
      if (kk_likely(kk_std_core__list_is_unique(_match_715))) {
        kk_box_drop(_box_x703, _ctx);
        kk_std_core__list_free(_match_715, _ctx);
      }
      else {
        kk_std_core__list_dup(xx);
        kk_std_core__list_decref(_match_715, _ctx);
      }
      xs_466 = kk_std_core_drop(xx, kk_integer_from_small(1), _ctx); /*list<string>*/
      goto _match789;
    }
  }
  {
    xs_466 = kk_std_core_drop(_match_715, kk_integer_from_small(1), _ctx); /*list<string>*/
  }
  _match789: ;
  kk_std_core_types__optional default0_464 = kk_std_core_types__new_Optional(kk_integer_box(kk_integer_from_small(5)), _ctx); /*optional<int>*/;
  kk_integer_t n;
  bool _match_713;
  kk_string_t _x798;
  if (kk_std_core__is_Cons(xs_466)) {
    struct kk_std_core_Cons* _con799 = kk_std_core__as_Cons(xs_466);
    kk_box_t _box_x707 = _con799->head;
    kk_string_t x0 = kk_string_unbox(_box_x707);
    kk_string_dup(x0);
    _x798 = x0; /*string*/
  }
  else {
    _x798 = kk_string_empty(); /*string*/
  }
  kk_string_t _x802 = kk_string_empty(); /*string*/
  _match_713 = kk_string_is_eq(_x798,_x802,kk_context()); /*bool*/
  if (_match_713) {
    kk_std_core__list_drop(xs_466, _ctx);
    if (kk_std_core_types__is_Optional(default0_464)) {
      kk_box_t _box_x708 = default0_464._cons.Optional.value;
      kk_integer_t _default_15556 = kk_integer_unbox(_box_x708);
      n = _default_15556; /*int*/
    }
    else {
      n = kk_integer_from_small(0); /*int*/
    }
  }
  else {
    kk_std_core_types__maybe m_17212;
    kk_string_t _x805;
    kk_string_t _x806;
    kk_string_t _x807;
    if (kk_std_core__is_Cons(xs_466)) {
      struct kk_std_core_Cons* _con808 = kk_std_core__as_Cons(xs_466);
      kk_box_t _box_x709 = _con808->head;
      kk_std_core__list _pat010 = _con808->tail;
      kk_string_t x00 = kk_string_unbox(_box_x709);
      if (kk_likely(kk_std_core__list_is_unique(xs_466))) {
        kk_std_core__list_drop(_pat010, _ctx);
        kk_std_core__list_free(xs_466, _ctx);
      }
      else {
        kk_string_dup(x00);
        kk_std_core__list_decref(xs_466, _ctx);
      }
      _x807 = x00; /*string*/
    }
    else {
      _x807 = kk_string_empty(); /*string*/
    }
    _x806 = kk_string_trim_left(_x807,kk_context()); /*string*/
    _x805 = kk_string_trim_right(_x806,kk_context()); /*string*/
    bool _x811;
    kk_std_core_types__optional _x812 = kk_std_core_types__new_None(_ctx); /*forall<a> optional<a>*/
    if (kk_std_core_types__is_Optional(_x812)) {
      kk_box_t _box_x710 = _x812._cons.Optional.value;
      bool _hex_15560 = kk_bool_unbox(_box_x710);
      _x811 = _hex_15560; /*bool*/
    }
    else {
      _x811 = false; /*bool*/
    }
    m_17212 = kk_std_core_xparse_int(_x805, _x811, _ctx); /*maybe<int>*/
    if (kk_std_core_types__is_Nothing(m_17212)) {
      if (kk_std_core_types__is_Optional(default0_464)) {
        kk_box_t _box_x711 = default0_464._cons.Optional.value;
        kk_integer_t _default_155560 = kk_integer_unbox(_box_x711);
        n = _default_155560; /*int*/
      }
      else {
        n = kk_integer_from_small(0); /*int*/
      }
    }
    else {
      kk_box_t _box_x712 = m_17212._cons.Just.value;
      kk_integer_t x = kk_integer_unbox(_box_x712);
      kk_std_core_types__optional_drop(default0_464, _ctx);
      n = x; /*int*/
    }
  }
  kk_integer_t r = kk_main_run(n, _ctx); /*int*/;
  kk_string_t _x816 = kk_std_core_show(r, _ctx); /*string*/
  kk_std_core_printsln(_x816, _ctx); return kk_Unit;
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
    kk_string_t _x734;
    kk_define_string_literal(, _s735, 10, "state.main")
    _x734 = kk_string_dup(_s735); /*string*/
    kk_main__tag_state = kk_std_core_hnd__new_Htag(_x734, _ctx); /*std/core/hnd/htag<.hnd-state>*/
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
  kk_std_core_hnd__htag_drop(kk_main__tag_state, _ctx);
  kk_std_os_env__done(_ctx);
  kk_std_os_path__done(_ctx);
  kk_std_core__done(_ctx);
  kk_std_core_hnd__done(_ctx);
  kk_std_core_types__done(_ctx);
}
