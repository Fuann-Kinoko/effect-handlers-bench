// Koka generated module: "main", koka version: 2.4.0, platform: 64-bit
#include "main.h"
 
// runtime tag for the `:operator` effect

kk_std_core_hnd__htag kk_main__tag_operator;
 
// handler for the `:operator` effect

kk_box_t kk_main__handle_operator(int32_t cfc, kk_main__hnd_operator hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (cfc : int32, hnd : .hnd-operator<e,b>, ret : (res : a) -> e b, action : () -> <operator|e> a) -> e b */ 
  kk_std_core_hnd__htag _x765 = kk_std_core_hnd__htag_dup(kk_main__tag_operator); /*std/core/hnd/htag<.hnd-operator>*/
  return kk_std_core_hnd__hhandle(_x765, cfc, kk_main__hnd_operator_box(hnd, _ctx), ret, action, _ctx);
}
 
// monadic lift

kk_integer_t kk_main__mlift664_loop(kk_integer_t i, kk_integer_t s, kk_unit_t wild__, kk_context_t* _ctx) { /* (i : int, s : int, wild_ : ()) -> operator int */ 
  kk_integer_t _x771 = kk_integer_add_small_const(i, -1, _ctx); /*int*/
  return kk_main_loop(_x771, s, _ctx);
}


// lift anonymous function
struct kk_main_loop_fun779__t {
  struct kk_function_s _base;
  kk_integer_t i0;
  kk_integer_t s0;
};
static kk_box_t kk_main_loop_fun779(kk_function_t _fself, kk_box_t _b_705, kk_context_t* _ctx);
static kk_function_t kk_main_new_loop_fun779(kk_integer_t i0, kk_integer_t s0, kk_context_t* _ctx) {
  struct kk_main_loop_fun779__t* _self = kk_function_alloc_as(struct kk_main_loop_fun779__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_loop_fun779, kk_context());
  _self->i0 = i0;
  _self->s0 = s0;
  return &_self->_base;
}

static kk_box_t kk_main_loop_fun779(kk_function_t _fself, kk_box_t _b_705, kk_context_t* _ctx) {
  struct kk_main_loop_fun779__t* _self = kk_function_as(struct kk_main_loop_fun779__t*, _fself);
  kk_integer_t i0 = _self->i0; /* int */
  kk_integer_t s0 = _self->s0; /* int */
  kk_drop_match(_self, {kk_integer_dup(i0);kk_integer_dup(s0);}, {}, _ctx)
  kk_unit_t wild__0_707 = kk_Unit;
  kk_unit_unbox(_b_705);
  kk_integer_t _x780 = kk_main__mlift664_loop(i0, s0, wild__0_707, _ctx); /*int*/
  return kk_integer_box(_x780);
}

kk_integer_t kk_main_loop(kk_integer_t i0, kk_integer_t s0, kk_context_t* _ctx) { /* (i : int, s : int) -> <div,operator> int */ 
  kk__tailcall: ;
  bool _match_755 = kk_integer_eq_borrow(i0,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_755) {
    kk_integer_drop(i0, _ctx);
    return s0;
  }
  {
    kk_std_core_hnd__ev ev_672;
    kk_ssize_t _x772 = (KK_IZ(0)); /*ssize_t*/
    ev_672 = kk_evv_at(_x772,kk_context()); /*std/core/hnd/ev<.hnd-operator>*/
    kk_unit_t x_669 = kk_Unit;
    kk_box_t _x773;
    {
      struct kk_std_core_hnd_Ev* _con774 = kk_std_core_hnd__as_Ev(ev_672);
      kk_std_core_hnd__marker m0 = _con774->marker;
      kk_box_t _box_x696 = _con774->hnd;
      kk_main__hnd_operator h = kk_main__hnd_operator_unbox(_box_x696, NULL);
      kk_main__hnd_operator_dup(h);
      kk_std_core_hnd__clause1 _match_757;
      kk_std_core_hnd__clause1 _brw_758 = kk_main__select_operator(h, _ctx); /*std/core/hnd/clause1<int,(),.hnd-operator,97,98>*/;
      kk_main__hnd_operator_drop(h, _ctx);
      _match_757 = _brw_758; /*std/core/hnd/clause1<int,(),.hnd-operator,97,98>*/
      {
        kk_function_t _fun_unbox_x700 = _match_757.clause;
        kk_box_t _x776;
        kk_integer_t _x777 = kk_integer_dup(i0); /*int*/
        _x776 = kk_integer_box(_x777); /*1009*/
        _x773 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x700, (_fun_unbox_x700, m0, ev_672, _x776, _ctx)); /*1010*/
      }
    }
    kk_unit_unbox(_x773);
    if (kk_yielding(kk_context())) {
      kk_box_t _x778 = kk_std_core_hnd_yield_extend(kk_main_new_loop_fun779(i0, s0, _ctx), _ctx); /*1001*/
      return kk_integer_unbox(_x778);
    }
    { // tailcall
      kk_integer_t _x781 = kk_integer_add_small_const(i0, -1, _ctx); /*int*/
      i0 = _x781;
      goto kk__tailcall;
    }
  }
}


// lift anonymous function
struct kk_main_run_fun783__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_main_run_fun783(kk_function_t _fself, kk_std_core_hnd__marker m0, kk_std_core_hnd__ev ___wildcard__516__16, kk_integer_t x, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun783(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_run_fun783, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_main_run_fun785__t {
  struct kk_function_s _base;
  kk_integer_t x;
};
static kk_box_t kk_main_run_fun785(kk_function_t _fself, kk_function_t _b_717, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun785(kk_integer_t x, kk_context_t* _ctx) {
  struct kk_main_run_fun785__t* _self = kk_function_alloc_as(struct kk_main_run_fun785__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun785, kk_context());
  _self->x = x;
  return &_self->_base;
}



// lift anonymous function
struct kk_main_run_fun786__t {
  struct kk_function_s _base;
  kk_function_t _b_717;
};
static kk_integer_t kk_main_run_fun786(kk_function_t _fself, kk_std_core_hnd__resume_result _b_718, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun786(kk_function_t _b_717, kk_context_t* _ctx) {
  struct kk_main_run_fun786__t* _self = kk_function_alloc_as(struct kk_main_run_fun786__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun786, kk_context());
  _self->_b_717 = _b_717;
  return &_self->_base;
}

static kk_integer_t kk_main_run_fun786(kk_function_t _fself, kk_std_core_hnd__resume_result _b_718, kk_context_t* _ctx) {
  struct kk_main_run_fun786__t* _self = kk_function_as(struct kk_main_run_fun786__t*, _fself);
  kk_function_t _b_717 = _self->_b_717; /* (std/core/hnd/resume-result<1000,1002>) -> 1001 1002 */
  kk_drop_match(_self, {kk_function_dup(_b_717);}, {}, _ctx)
  kk_box_t _x787 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__resume_result, kk_context_t*), _b_717, (_b_717, _b_718, _ctx)); /*1002*/
  return kk_integer_unbox(_x787);
}


// lift anonymous function
struct kk_main_run_fun788__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_main_run_fun788(kk_function_t _fself, kk_integer_t x0, kk_function_t resume, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun788(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_run_fun788, _ctx)
  return kk_function_dup(_fself);
}

static kk_integer_t kk_main_run_fun788(kk_function_t _fself, kk_integer_t x0, kk_function_t resume, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t y = kk_function_call(kk_integer_t, (kk_function_t, kk_unit_t, kk_context_t*), resume, (resume, kk_Unit, _ctx)); /*int*/;
  kk_integer_t y1_544 = kk_integer_mul((kk_integer_from_small(503)),y,kk_context()); /*int*/;
  kk_integer_t x0_541 = kk_integer_sub(x0,y1_544,kk_context()); /*int*/;
  kk_integer_t _x789;
  kk_integer_t _x790 = kk_integer_add_small_const(x0_541, 37, _ctx); /*int*/
  _x789 = kk_integer_abs(_x790,kk_context()); /*int*/
  return kk_integer_mod(_x789,(kk_integer_from_small(1009)),kk_context());
}


// lift anonymous function
struct kk_main_run_fun791__t {
  struct kk_function_s _base;
  kk_function_t _b_736_709;
};
static kk_box_t kk_main_run_fun791(kk_function_t _fself, kk_box_t _b_711, kk_function_t _b_712, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun791(kk_function_t _b_736_709, kk_context_t* _ctx) {
  struct kk_main_run_fun791__t* _self = kk_function_alloc_as(struct kk_main_run_fun791__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun791, kk_context());
  _self->_b_736_709 = _b_736_709;
  return &_self->_base;
}



// lift anonymous function
struct kk_main_run_fun794__t {
  struct kk_function_s _base;
  kk_function_t _b_712;
};
static kk_integer_t kk_main_run_fun794(kk_function_t _fself, kk_unit_t _b_713, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun794(kk_function_t _b_712, kk_context_t* _ctx) {
  struct kk_main_run_fun794__t* _self = kk_function_alloc_as(struct kk_main_run_fun794__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun794, kk_context());
  _self->_b_712 = _b_712;
  return &_self->_base;
}

static kk_integer_t kk_main_run_fun794(kk_function_t _fself, kk_unit_t _b_713, kk_context_t* _ctx) {
  struct kk_main_run_fun794__t* _self = kk_function_as(struct kk_main_run_fun794__t*, _fself);
  kk_function_t _b_712 = _self->_b_712; /* (1001) -> 1002 1003 */
  kk_drop_match(_self, {kk_function_dup(_b_712);}, {}, _ctx)
  kk_box_t _x795 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _b_712, (_b_712, kk_unit_box(_b_713), _ctx)); /*1003*/
  return kk_integer_unbox(_x795);
}
static kk_box_t kk_main_run_fun791(kk_function_t _fself, kk_box_t _b_711, kk_function_t _b_712, kk_context_t* _ctx) {
  struct kk_main_run_fun791__t* _self = kk_function_as(struct kk_main_run_fun791__t*, _fself);
  kk_function_t _b_736_709 = _self->_b_736_709; /* (x0 : int, resume : (()) -> div int) -> div int */
  kk_drop_match(_self, {kk_function_dup(_b_736_709);}, {}, _ctx)
  kk_integer_t _x792;
  kk_integer_t _x793 = kk_integer_unbox(_b_711); /*int*/
  _x792 = kk_function_call(kk_integer_t, (kk_function_t, kk_integer_t, kk_function_t, kk_context_t*), _b_736_709, (_b_736_709, _x793, kk_main_new_run_fun794(_b_712, _ctx), _ctx)); /*int*/
  return kk_integer_box(_x792);
}


// lift anonymous function
struct kk_main_run_fun796__t {
  struct kk_function_s _base;
  kk_function_t _b_737_710;
};
static kk_box_t kk_main_run_fun796(kk_function_t _fself, kk_std_core_hnd__resume_result _b_714, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun796(kk_function_t _b_737_710, kk_context_t* _ctx) {
  struct kk_main_run_fun796__t* _self = kk_function_alloc_as(struct kk_main_run_fun796__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun796, kk_context());
  _self->_b_737_710 = _b_737_710;
  return &_self->_base;
}

static kk_box_t kk_main_run_fun796(kk_function_t _fself, kk_std_core_hnd__resume_result _b_714, kk_context_t* _ctx) {
  struct kk_main_run_fun796__t* _self = kk_function_as(struct kk_main_run_fun796__t*, _fself);
  kk_function_t _b_737_710 = _self->_b_737_710; /* (std/core/hnd/resume-result<(),int>) -> div int */
  kk_drop_match(_self, {kk_function_dup(_b_737_710);}, {}, _ctx)
  kk_integer_t _x797 = kk_function_call(kk_integer_t, (kk_function_t, kk_std_core_hnd__resume_result, kk_context_t*), _b_737_710, (_b_737_710, _b_714, _ctx)); /*int*/
  return kk_integer_box(_x797);
}
static kk_box_t kk_main_run_fun785(kk_function_t _fself, kk_function_t _b_717, kk_context_t* _ctx) {
  struct kk_main_run_fun785__t* _self = kk_function_as(struct kk_main_run_fun785__t*, _fself);
  kk_integer_t x = _self->x; /* int */
  kk_drop_match(_self, {kk_integer_dup(x);}, {}, _ctx)
  kk_function_t k0_738 = kk_main_new_run_fun786(_b_717, _ctx); /*(std/core/hnd/resume-result<(),int>) -> div int*/;
  kk_integer_t _b_735_708 = x; /*int*/;
  kk_function_t _b_736_709 = kk_main_new_run_fun788(_ctx); /*(x0 : int, resume : (()) -> div int) -> div int*/;
  kk_function_t _b_737_710 = k0_738; /*(std/core/hnd/resume-result<(),int>) -> div int*/;
  return kk_std_core_hnd_protect(kk_integer_box(_b_735_708), kk_main_new_run_fun791(_b_736_709, _ctx), kk_main_new_run_fun796(_b_737_710, _ctx), _ctx);
}
static kk_unit_t kk_main_run_fun783(kk_function_t _fself, kk_std_core_hnd__marker m0, kk_std_core_hnd__ev ___wildcard__516__16, kk_integer_t x, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_hnd__ev_dropn(___wildcard__516__16, (KK_I32(3)), _ctx);
  kk_box_t _x784 = kk_std_core_hnd_yield_to(m0, kk_main_new_run_fun785(x, _ctx), _ctx); /*1000*/
  return kk_unit_unbox(_x784);
}


// lift anonymous function
struct kk_main_run_fun800__t {
  struct kk_function_s _base;
  kk_function_t _b_732_719;
};
static kk_box_t kk_main_run_fun800(kk_function_t _fself, kk_std_core_hnd__marker _b_720, kk_std_core_hnd__ev _b_721, kk_box_t _b_722, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun800(kk_function_t _b_732_719, kk_context_t* _ctx) {
  struct kk_main_run_fun800__t* _self = kk_function_alloc_as(struct kk_main_run_fun800__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun800, kk_context());
  _self->_b_732_719 = _b_732_719;
  return &_self->_base;
}

static kk_box_t kk_main_run_fun800(kk_function_t _fself, kk_std_core_hnd__marker _b_720, kk_std_core_hnd__ev _b_721, kk_box_t _b_722, kk_context_t* _ctx) {
  struct kk_main_run_fun800__t* _self = kk_function_as(struct kk_main_run_fun800__t*, _fself);
  kk_function_t _b_732_719 = _self->_b_732_719; /* (m0 : std/core/hnd/marker<div,int>, std/core/hnd/ev<.hnd-operator>, x : int) -> div () */
  kk_drop_match(_self, {kk_function_dup(_b_732_719);}, {}, _ctx)
  kk_unit_t _x801 = kk_Unit;
  kk_integer_t _x802 = kk_integer_unbox(_b_722); /*int*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_integer_t, kk_context_t*), _b_732_719, (_b_732_719, _b_720, _b_721, _x802, _ctx));
  return kk_unit_box(_x801);
}


// lift anonymous function
struct kk_main_run_fun803__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_run_fun803(kk_function_t _fself, kk_box_t _b_727, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun803(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_run_fun803, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main_run_fun803(kk_function_t _fself, kk_box_t _b_727, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_739 = kk_integer_unbox(_b_727); /*int*/;
  return kk_integer_box(_x_739);
}


// lift anonymous function
struct kk_main_run_fun804__t {
  struct kk_function_s _base;
  kk_integer_t n;
  kk_integer_t s;
};
static kk_box_t kk_main_run_fun804(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun804(kk_integer_t n, kk_integer_t s, kk_context_t* _ctx) {
  struct kk_main_run_fun804__t* _self = kk_function_alloc_as(struct kk_main_run_fun804__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun804, kk_context());
  _self->n = n;
  _self->s = s;
  return &_self->_base;
}

static kk_box_t kk_main_run_fun804(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_main_run_fun804__t* _self = kk_function_as(struct kk_main_run_fun804__t*, _fself);
  kk_integer_t n = _self->n; /* int */
  kk_integer_t s = _self->s; /* int */
  kk_drop_match(_self, {kk_integer_dup(n);kk_integer_dup(s);}, {}, _ctx)
  kk_integer_t _x805 = kk_main_loop(n, s, _ctx); /*int*/
  return kk_integer_box(_x805);
}

kk_integer_t kk_main_run(kk_integer_t n, kk_integer_t s, kk_context_t* _ctx) { /* (n : int, s : int) -> div int */ 
  int32_t _b_728_723 = (KK_I32(3)); /*int32*/;
  kk_box_t _x782;
  kk_function_t _b_732_719 = kk_main_new_run_fun783(_ctx); /*(m0 : std/core/hnd/marker<div,int>, std/core/hnd/ev<.hnd-operator>, x : int) -> div ()*/;
  kk_main__hnd_operator _x798;
  kk_std_core_hnd__clause1 _x799 = kk_std_core_hnd__new_Clause1(kk_main_new_run_fun800(_b_732_719, _ctx), _ctx); /*std/core/hnd/clause1<1015,1016,1017,1018,1019>*/
  _x798 = kk_main__new_Hnd_operator(kk_reuse_null, _x799, _ctx); /*.hnd-operator<7,8>*/
  _x782 = kk_main__handle_operator(_b_728_723, _x798, kk_main_new_run_fun803(_ctx), kk_main_new_run_fun804(n, s, _ctx), _ctx); /*81*/
  return kk_integer_unbox(_x782);
}
 
// lifted local: repeat, step

kk_integer_t kk_main__lift553_repeat(kk_integer_t n, kk_integer_t l, kk_integer_t s, kk_context_t* _ctx) { /* (n : int, l : int, s : int) -> div int */ 
  kk__tailcall: ;
  bool _match_754 = kk_integer_eq_borrow(l,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_754) {
    kk_integer_drop(n, _ctx);
    kk_integer_drop(l, _ctx);
    return s;
  }
  {
    kk_integer_t l0_654 = kk_integer_add_small_const(l, -1, _ctx); /*int*/;
    kk_integer_t s0_655;
    kk_integer_t _x806 = kk_integer_dup(n); /*int*/
    s0_655 = kk_main_run(_x806, s, _ctx); /*int*/
    { // tailcall
      l = l0_654;
      s = s0_655;
      goto kk__tailcall;
    }
  }
}

kk_unit_t kk_main_main(kk_context_t* _ctx) { /* () -> <console,div,ndet> () */ 
  bool is_node;
  kk_string_t _x807 = kk_std_core_host(_ctx); /*string*/
  kk_string_t _x808;
  kk_define_string_literal(, _s809, 4, "node")
  _x808 = kk_string_dup(_s809); /*string*/
  is_node = kk_string_is_eq(_x807,_x808,kk_context()); /*bool*/
  kk_std_core__list xs_550;
  kk_std_core__list _match_753;
  kk_box_t _x810;
  kk_std_core__delayed _x811 = kk_std_core__delayed_dup(kk_std_os_env_argv); /*delayed<ndet,list<string>>*/
  _x810 = kk_std_core_force(_x811, _ctx); /*1001*/
  _match_753 = kk_std_core__list_unbox(_x810, _ctx); /*list<string>*/
  if (kk_std_core__is_Cons(_match_753)) {
    struct kk_std_core_Cons* _con813 = kk_std_core__as_Cons(_match_753);
    kk_box_t _box_x741 = _con813->head;
    kk_std_core__list xx = _con813->tail;
    kk_string_t x1 = kk_string_unbox(_box_x741);
    bool _x815;
    if (is_node) {
      kk_string_t _x816;
      kk_std_os_path__path _x817;
      kk_string_t _x818 = kk_string_dup(x1); /*string*/
      _x817 = kk_std_os_path_path(_x818, _ctx); /*std/os/path/path*/
      _x816 = kk_std_os_path_stemname(_x817, _ctx); /*string*/
      kk_string_t _x819;
      kk_define_string_literal(, _s820, 4, "node")
      _x819 = kk_string_dup(_s820); /*string*/
      _x815 = kk_string_is_eq(_x816,_x819,kk_context()); /*bool*/
    }
    else {
      _x815 = false; /*bool*/
    }
    if (_x815) {
      if (kk_likely(kk_std_core__list_is_unique(_match_753))) {
        kk_box_drop(_box_x741, _ctx);
        kk_std_core__list_free(_match_753, _ctx);
      }
      else {
        kk_std_core__list_dup(xx);
        kk_std_core__list_decref(_match_753, _ctx);
      }
      xs_550 = kk_std_core_drop(xx, kk_integer_from_small(1), _ctx); /*list<string>*/
      goto _match812;
    }
  }
  {
    xs_550 = kk_std_core_drop(_match_753, kk_integer_from_small(1), _ctx); /*list<string>*/
  }
  _match812: ;
  kk_std_core_types__optional default0_548 = kk_std_core_types__new_Optional(kk_integer_box(kk_integer_from_small(5)), _ctx); /*optional<int>*/;
  kk_integer_t n;
  bool _match_751;
  kk_string_t _x821;
  if (kk_std_core__is_Cons(xs_550)) {
    struct kk_std_core_Cons* _con822 = kk_std_core__as_Cons(xs_550);
    kk_box_t _box_x745 = _con822->head;
    kk_string_t x0 = kk_string_unbox(_box_x745);
    kk_string_dup(x0);
    _x821 = x0; /*string*/
  }
  else {
    _x821 = kk_string_empty(); /*string*/
  }
  kk_string_t _x825 = kk_string_empty(); /*string*/
  _match_751 = kk_string_is_eq(_x821,_x825,kk_context()); /*bool*/
  if (_match_751) {
    kk_std_core__list_drop(xs_550, _ctx);
    if (kk_std_core_types__is_Optional(default0_548)) {
      kk_box_t _box_x746 = default0_548._cons.Optional.value;
      kk_integer_t _default_15556 = kk_integer_unbox(_box_x746);
      n = _default_15556; /*int*/
    }
    else {
      n = kk_integer_from_small(0); /*int*/
    }
  }
  else {
    kk_std_core_types__maybe m_17212;
    kk_string_t _x828;
    kk_string_t _x829;
    kk_string_t _x830;
    if (kk_std_core__is_Cons(xs_550)) {
      struct kk_std_core_Cons* _con831 = kk_std_core__as_Cons(xs_550);
      kk_box_t _box_x747 = _con831->head;
      kk_std_core__list _pat010 = _con831->tail;
      kk_string_t x00 = kk_string_unbox(_box_x747);
      if (kk_likely(kk_std_core__list_is_unique(xs_550))) {
        kk_std_core__list_drop(_pat010, _ctx);
        kk_std_core__list_free(xs_550, _ctx);
      }
      else {
        kk_string_dup(x00);
        kk_std_core__list_decref(xs_550, _ctx);
      }
      _x830 = x00; /*string*/
    }
    else {
      _x830 = kk_string_empty(); /*string*/
    }
    _x829 = kk_string_trim_left(_x830,kk_context()); /*string*/
    _x828 = kk_string_trim_right(_x829,kk_context()); /*string*/
    bool _x834;
    kk_std_core_types__optional _x835 = kk_std_core_types__new_None(_ctx); /*forall<a> optional<a>*/
    if (kk_std_core_types__is_Optional(_x835)) {
      kk_box_t _box_x748 = _x835._cons.Optional.value;
      bool _hex_15560 = kk_bool_unbox(_box_x748);
      _x834 = _hex_15560; /*bool*/
    }
    else {
      _x834 = false; /*bool*/
    }
    m_17212 = kk_std_core_xparse_int(_x828, _x834, _ctx); /*maybe<int>*/
    if (kk_std_core_types__is_Nothing(m_17212)) {
      if (kk_std_core_types__is_Optional(default0_548)) {
        kk_box_t _box_x749 = default0_548._cons.Optional.value;
        kk_integer_t _default_155560 = kk_integer_unbox(_box_x749);
        n = _default_155560; /*int*/
      }
      else {
        n = kk_integer_from_small(0); /*int*/
      }
    }
    else {
      kk_box_t _box_x750 = m_17212._cons.Just.value;
      kk_integer_t x = kk_integer_unbox(_box_x750);
      kk_std_core_types__optional_drop(default0_548, _ctx);
      n = x; /*int*/
    }
  }
  kk_integer_t r = kk_main__lift553_repeat(n, kk_integer_from_small(1000), kk_integer_from_small(0), _ctx); /*int*/;
  kk_string_t _x839 = kk_std_core_show(r, _ctx); /*string*/
  kk_std_core_printsln(_x839, _ctx); return kk_Unit;
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
    kk_string_t _x763;
    kk_define_string_literal(, _s764, 13, "operator.main")
    _x763 = kk_string_dup(_s764); /*string*/
    kk_main__tag_operator = kk_std_core_hnd__new_Htag(_x763, _ctx); /*std/core/hnd/htag<.hnd-operator>*/
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
  kk_std_core_hnd__htag_drop(kk_main__tag_operator, _ctx);
  kk_std_os_env__done(_ctx);
  kk_std_os_path__done(_ctx);
  kk_std_core__done(_ctx);
  kk_std_core_hnd__done(_ctx);
  kk_std_core_types__done(_ctx);
}
