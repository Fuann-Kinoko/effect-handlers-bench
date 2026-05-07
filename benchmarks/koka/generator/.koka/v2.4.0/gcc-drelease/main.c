// Koka generated module: "main", koka version: 2.4.0, platform: 64-bit
#include "main.h"
 
// runtime tag for the `:yield` effect

kk_std_core_hnd__htag kk_main__tag_yield;
 
// handler for the `:yield` effect

kk_box_t kk_main__handle_yield(int32_t cfc, kk_main__hnd_yield hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (cfc : int32, hnd : .hnd-yield<e,b>, ret : (res : a) -> e b, action : () -> <yield|e> a) -> e b */ 
  kk_std_core_hnd__htag _x726 = kk_std_core_hnd__htag_dup(kk_main__tag_yield); /*std/core/hnd/htag<.hnd-yield>*/
  return kk_std_core_hnd__hhandle(_x726, cfc, kk_main__hnd_yield_box(hnd, _ctx), ret, action, _ctx);
}


// lift anonymous function
struct kk_main_generate_fun733__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_main_generate_fun733(kk_function_t _fself, kk_std_core_hnd__marker m0, kk_std_core_hnd__ev ___wildcard__516__16, kk_integer_t x, kk_context_t* _ctx);
static kk_function_t kk_main_new_generate_fun733(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_generate_fun733, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_main_generate_fun735__t {
  struct kk_function_s _base;
  kk_integer_t x;
};
static kk_box_t kk_main_generate_fun735(kk_function_t _fself, kk_function_t _b_601, kk_context_t* _ctx);
static kk_function_t kk_main_new_generate_fun735(kk_integer_t x, kk_context_t* _ctx) {
  struct kk_main_generate_fun735__t* _self = kk_function_alloc_as(struct kk_main_generate_fun735__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_generate_fun735, kk_context());
  _self->x = x;
  return &_self->_base;
}



// lift anonymous function
struct kk_main_generate_fun736__t {
  struct kk_function_s _base;
  kk_function_t _b_601;
};
static kk_main__generator kk_main_generate_fun736(kk_function_t _fself, kk_std_core_hnd__resume_result _b_602, kk_context_t* _ctx);
static kk_function_t kk_main_new_generate_fun736(kk_function_t _b_601, kk_context_t* _ctx) {
  struct kk_main_generate_fun736__t* _self = kk_function_alloc_as(struct kk_main_generate_fun736__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_generate_fun736, kk_context());
  _self->_b_601 = _b_601;
  return &_self->_base;
}

static kk_main__generator kk_main_generate_fun736(kk_function_t _fself, kk_std_core_hnd__resume_result _b_602, kk_context_t* _ctx) {
  struct kk_main_generate_fun736__t* _self = kk_function_as(struct kk_main_generate_fun736__t*, _fself);
  kk_function_t _b_601 = _self->_b_601; /* (std/core/hnd/resume-result<1000,1002>) -> 1001 1002 */
  kk_drop_match(_self, {kk_function_dup(_b_601);}, {}, _ctx)
  kk_box_t _x737 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__resume_result, kk_context_t*), _b_601, (_b_601, _b_602, _ctx)); /*1002*/
  return kk_main__generator_unbox(_x737, _ctx);
}


// lift anonymous function
struct kk_main_generate_fun738__t {
  struct kk_function_s _base;
};
static kk_main__generator kk_main_generate_fun738(kk_function_t _fself, kk_integer_t x0, kk_function_t resume, kk_context_t* _ctx);
static kk_function_t kk_main_new_generate_fun738(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_generate_fun738, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_main_generate_fun739__t {
  struct kk_function_s _base;
  kk_function_t resume;
};
static kk_main__generator kk_main_generate_fun739(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_generate_fun739(kk_function_t resume, kk_context_t* _ctx) {
  struct kk_main_generate_fun739__t* _self = kk_function_alloc_as(struct kk_main_generate_fun739__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_generate_fun739, kk_context());
  _self->resume = resume;
  return &_self->_base;
}

static kk_main__generator kk_main_generate_fun739(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_main_generate_fun739__t* _self = kk_function_as(struct kk_main_generate_fun739__t*, _fself);
  kk_function_t resume = _self->resume; /* (()) -> div generator */
  kk_drop_match(_self, {kk_function_dup(resume);}, {}, _ctx)
  return kk_function_call(kk_main__generator, (kk_function_t, kk_unit_t, kk_context_t*), resume, (resume, kk_Unit, _ctx));
}
static kk_main__generator kk_main_generate_fun738(kk_function_t _fself, kk_integer_t x0, kk_function_t resume, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_main__new_Thunk(kk_reuse_null, x0, kk_main_new_generate_fun739(resume, _ctx), _ctx);
}


// lift anonymous function
struct kk_main_generate_fun740__t {
  struct kk_function_s _base;
  kk_function_t _b_620_593;
};
static kk_box_t kk_main_generate_fun740(kk_function_t _fself, kk_box_t _b_595, kk_function_t _b_596, kk_context_t* _ctx);
static kk_function_t kk_main_new_generate_fun740(kk_function_t _b_620_593, kk_context_t* _ctx) {
  struct kk_main_generate_fun740__t* _self = kk_function_alloc_as(struct kk_main_generate_fun740__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_generate_fun740, kk_context());
  _self->_b_620_593 = _b_620_593;
  return &_self->_base;
}



// lift anonymous function
struct kk_main_generate_fun743__t {
  struct kk_function_s _base;
  kk_function_t _b_596;
};
static kk_main__generator kk_main_generate_fun743(kk_function_t _fself, kk_unit_t _b_597, kk_context_t* _ctx);
static kk_function_t kk_main_new_generate_fun743(kk_function_t _b_596, kk_context_t* _ctx) {
  struct kk_main_generate_fun743__t* _self = kk_function_alloc_as(struct kk_main_generate_fun743__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_generate_fun743, kk_context());
  _self->_b_596 = _b_596;
  return &_self->_base;
}

static kk_main__generator kk_main_generate_fun743(kk_function_t _fself, kk_unit_t _b_597, kk_context_t* _ctx) {
  struct kk_main_generate_fun743__t* _self = kk_function_as(struct kk_main_generate_fun743__t*, _fself);
  kk_function_t _b_596 = _self->_b_596; /* (1001) -> 1002 1003 */
  kk_drop_match(_self, {kk_function_dup(_b_596);}, {}, _ctx)
  kk_box_t _x744 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _b_596, (_b_596, kk_unit_box(_b_597), _ctx)); /*1003*/
  return kk_main__generator_unbox(_x744, _ctx);
}
static kk_box_t kk_main_generate_fun740(kk_function_t _fself, kk_box_t _b_595, kk_function_t _b_596, kk_context_t* _ctx) {
  struct kk_main_generate_fun740__t* _self = kk_function_as(struct kk_main_generate_fun740__t*, _fself);
  kk_function_t _b_620_593 = _self->_b_620_593; /* (x0 : int, resume : (()) -> div generator) -> div generator */
  kk_drop_match(_self, {kk_function_dup(_b_620_593);}, {}, _ctx)
  kk_main__generator _x741;
  kk_integer_t _x742 = kk_integer_unbox(_b_595); /*int*/
  _x741 = kk_function_call(kk_main__generator, (kk_function_t, kk_integer_t, kk_function_t, kk_context_t*), _b_620_593, (_b_620_593, _x742, kk_main_new_generate_fun743(_b_596, _ctx), _ctx)); /*generator*/
  return kk_main__generator_box(_x741, _ctx);
}


// lift anonymous function
struct kk_main_generate_fun745__t {
  struct kk_function_s _base;
  kk_function_t _b_621_594;
};
static kk_box_t kk_main_generate_fun745(kk_function_t _fself, kk_std_core_hnd__resume_result _b_598, kk_context_t* _ctx);
static kk_function_t kk_main_new_generate_fun745(kk_function_t _b_621_594, kk_context_t* _ctx) {
  struct kk_main_generate_fun745__t* _self = kk_function_alloc_as(struct kk_main_generate_fun745__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_generate_fun745, kk_context());
  _self->_b_621_594 = _b_621_594;
  return &_self->_base;
}

static kk_box_t kk_main_generate_fun745(kk_function_t _fself, kk_std_core_hnd__resume_result _b_598, kk_context_t* _ctx) {
  struct kk_main_generate_fun745__t* _self = kk_function_as(struct kk_main_generate_fun745__t*, _fself);
  kk_function_t _b_621_594 = _self->_b_621_594; /* (std/core/hnd/resume-result<(),generator>) -> div generator */
  kk_drop_match(_self, {kk_function_dup(_b_621_594);}, {}, _ctx)
  kk_main__generator _x746 = kk_function_call(kk_main__generator, (kk_function_t, kk_std_core_hnd__resume_result, kk_context_t*), _b_621_594, (_b_621_594, _b_598, _ctx)); /*generator*/
  return kk_main__generator_box(_x746, _ctx);
}
static kk_box_t kk_main_generate_fun735(kk_function_t _fself, kk_function_t _b_601, kk_context_t* _ctx) {
  struct kk_main_generate_fun735__t* _self = kk_function_as(struct kk_main_generate_fun735__t*, _fself);
  kk_integer_t x = _self->x; /* int */
  kk_drop_match(_self, {kk_integer_dup(x);}, {}, _ctx)
  kk_function_t k0_622 = kk_main_new_generate_fun736(_b_601, _ctx); /*(std/core/hnd/resume-result<(),generator>) -> div generator*/;
  kk_integer_t _b_619_592 = x; /*int*/;
  kk_function_t _b_620_593 = kk_main_new_generate_fun738(_ctx); /*(x0 : int, resume : (()) -> div generator) -> div generator*/;
  kk_function_t _b_621_594 = k0_622; /*(std/core/hnd/resume-result<(),generator>) -> div generator*/;
  return kk_std_core_hnd_protect(kk_integer_box(_b_619_592), kk_main_new_generate_fun740(_b_620_593, _ctx), kk_main_new_generate_fun745(_b_621_594, _ctx), _ctx);
}
static kk_unit_t kk_main_generate_fun733(kk_function_t _fself, kk_std_core_hnd__marker m0, kk_std_core_hnd__ev ___wildcard__516__16, kk_integer_t x, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_hnd__ev_dropn(___wildcard__516__16, (KK_I32(3)), _ctx);
  kk_box_t _x734 = kk_std_core_hnd_yield_to(m0, kk_main_new_generate_fun735(x, _ctx), _ctx); /*1000*/
  return kk_unit_unbox(_x734);
}


// lift anonymous function
struct kk_main_generate_fun749__t {
  struct kk_function_s _base;
  kk_function_t _b_616_603;
};
static kk_box_t kk_main_generate_fun749(kk_function_t _fself, kk_std_core_hnd__marker _b_604, kk_std_core_hnd__ev _b_605, kk_box_t _b_606, kk_context_t* _ctx);
static kk_function_t kk_main_new_generate_fun749(kk_function_t _b_616_603, kk_context_t* _ctx) {
  struct kk_main_generate_fun749__t* _self = kk_function_alloc_as(struct kk_main_generate_fun749__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_generate_fun749, kk_context());
  _self->_b_616_603 = _b_616_603;
  return &_self->_base;
}

static kk_box_t kk_main_generate_fun749(kk_function_t _fself, kk_std_core_hnd__marker _b_604, kk_std_core_hnd__ev _b_605, kk_box_t _b_606, kk_context_t* _ctx) {
  struct kk_main_generate_fun749__t* _self = kk_function_as(struct kk_main_generate_fun749__t*, _fself);
  kk_function_t _b_616_603 = _self->_b_616_603; /* (m0 : std/core/hnd/marker<div,generator>, std/core/hnd/ev<.hnd-yield>, x : int) -> div () */
  kk_drop_match(_self, {kk_function_dup(_b_616_603);}, {}, _ctx)
  kk_unit_t _x750 = kk_Unit;
  kk_integer_t _x751 = kk_integer_unbox(_b_606); /*int*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_integer_t, kk_context_t*), _b_616_603, (_b_616_603, _b_604, _b_605, _x751, _ctx));
  return kk_unit_box(_x750);
}


// lift anonymous function
struct kk_main_generate_fun752__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_generate_fun752(kk_function_t _fself, kk_box_t _b_611, kk_context_t* _ctx);
static kk_function_t kk_main_new_generate_fun752(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_generate_fun752, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main_generate_fun752(kk_function_t _fself, kk_box_t _b_611, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t __w_l33_c12_623 = kk_Unit;
  kk_unit_unbox(_b_611);
  return kk_main__generator_box(kk_main__new_Empty(_ctx), _ctx);
}


// lift anonymous function
struct kk_main_generate_fun753__t {
  struct kk_function_s _base;
  kk_function_t f;
};
static kk_box_t kk_main_generate_fun753(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_generate_fun753(kk_function_t f, kk_context_t* _ctx) {
  struct kk_main_generate_fun753__t* _self = kk_function_alloc_as(struct kk_main_generate_fun753__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_generate_fun753, kk_context());
  _self->f = f;
  return &_self->_base;
}

static kk_box_t kk_main_generate_fun753(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_main_generate_fun753__t* _self = kk_function_as(struct kk_main_generate_fun753__t*, _fself);
  kk_function_t f = _self->f; /* () -> <yield,div> () */
  kk_drop_match(_self, {kk_function_dup(f);}, {}, _ctx)
  kk_unit_t _x754 = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), f, (f, _ctx));
  return kk_unit_box(_x754);
}

kk_main__generator kk_main_generate(kk_function_t f, kk_context_t* _ctx) { /* (f : () -> <div,yield> ()) -> div generator */ 
  int32_t _b_612_607 = (KK_I32(3)); /*int32*/;
  kk_box_t _x732;
  kk_function_t _b_616_603 = kk_main_new_generate_fun733(_ctx); /*(m0 : std/core/hnd/marker<div,generator>, std/core/hnd/ev<.hnd-yield>, x : int) -> div ()*/;
  kk_main__hnd_yield _x747;
  kk_std_core_hnd__clause1 _x748 = kk_std_core_hnd__new_Clause1(kk_main_new_generate_fun749(_b_616_603, _ctx), _ctx); /*std/core/hnd/clause1<1015,1016,1017,1018,1019>*/
  _x747 = kk_main__new_Hnd_yield(kk_reuse_null, _x748, _ctx); /*.hnd-yield<7,8>*/
  _x732 = kk_main__handle_yield(_b_612_607, _x747, kk_main_new_generate_fun752(_ctx), kk_main_new_generate_fun753(f, _ctx), _ctx); /*131*/
  return kk_main__generator_unbox(_x732, _ctx);
}
 
// monadic lift

kk_unit_t kk_main__mlift549_iterate(kk_main__tree r, kk_unit_t wild__0, kk_context_t* _ctx) { /* (r : tree, wild_0 : ()) -> yield () */ 
  kk_main_iterate(r, _ctx); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift550_iterate_fun760__t {
  struct kk_function_s _base;
  kk_main__tree r0;
};
static kk_box_t kk_main__mlift550_iterate_fun760(kk_function_t _fself, kk_box_t _b_633, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift550_iterate_fun760(kk_main__tree r0, kk_context_t* _ctx) {
  struct kk_main__mlift550_iterate_fun760__t* _self = kk_function_alloc_as(struct kk_main__mlift550_iterate_fun760__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift550_iterate_fun760, kk_context());
  _self->r0 = r0;
  return &_self->_base;
}

static kk_box_t kk_main__mlift550_iterate_fun760(kk_function_t _fself, kk_box_t _b_633, kk_context_t* _ctx) {
  struct kk_main__mlift550_iterate_fun760__t* _self = kk_function_as(struct kk_main__mlift550_iterate_fun760__t*, _fself);
  kk_main__tree r0 = _self->r0; /* tree */
  kk_drop_match(_self, {kk_main__tree_dup(r0);}, {}, _ctx)
  kk_unit_t wild__00_635 = kk_Unit;
  kk_unit_unbox(_b_633);
  kk_unit_t _x761 = kk_Unit;
  kk_main__mlift549_iterate(r0, wild__00_635, _ctx);
  return kk_unit_box(_x761);
}

kk_unit_t kk_main__mlift550_iterate(kk_main__tree r0, kk_integer_t v, kk_unit_t wild__, kk_context_t* _ctx) { /* (r : tree, v : int, wild_ : ()) -> yield () */ 
  kk_std_core_hnd__ev ev_558;
  kk_ssize_t _x755 = (KK_IZ(0)); /*ssize_t*/
  ev_558 = kk_evv_at(_x755,kk_context()); /*std/core/hnd/ev<.hnd-yield>*/
  kk_unit_t x_556 = kk_Unit;
  kk_box_t _x756;
  {
    struct kk_std_core_hnd_Ev* _con757 = kk_std_core_hnd__as_Ev(ev_558);
    kk_std_core_hnd__marker m0 = _con757->marker;
    kk_box_t _box_x624 = _con757->hnd;
    kk_main__hnd_yield h = kk_main__hnd_yield_unbox(_box_x624, NULL);
    kk_main__hnd_yield_dup(h);
    kk_std_core_hnd__clause1 _match_712;
    kk_std_core_hnd__clause1 _brw_713 = kk_main__select_yield(h, _ctx); /*std/core/hnd/clause1<int,(),.hnd-yield,147,148>*/;
    kk_main__hnd_yield_drop(h, _ctx);
    _match_712 = _brw_713; /*std/core/hnd/clause1<int,(),.hnd-yield,147,148>*/
    {
      kk_function_t _fun_unbox_x628 = _match_712.clause;
      _x756 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x628, (_fun_unbox_x628, m0, ev_558, kk_integer_box(v), _ctx)); /*1010*/
    }
  }
  kk_unit_unbox(_x756);
  if (kk_yielding(kk_context())) {
    kk_box_t _x759 = kk_std_core_hnd_yield_extend(kk_main__new_mlift550_iterate_fun760(r0, _ctx), _ctx); /*1001*/
    kk_unit_unbox(_x759); return kk_Unit;
  }
  {
    kk_main__mlift549_iterate(r0, x_556, _ctx); return kk_Unit;
  }
}


// lift anonymous function
struct kk_main_iterate_fun764__t {
  struct kk_function_s _base;
  kk_main__tree r1;
  kk_integer_t v0;
};
static kk_box_t kk_main_iterate_fun764(kk_function_t _fself, kk_box_t _b_637, kk_context_t* _ctx);
static kk_function_t kk_main_new_iterate_fun764(kk_main__tree r1, kk_integer_t v0, kk_context_t* _ctx) {
  struct kk_main_iterate_fun764__t* _self = kk_function_alloc_as(struct kk_main_iterate_fun764__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_iterate_fun764, kk_context());
  _self->r1 = r1;
  _self->v0 = v0;
  return &_self->_base;
}

static kk_box_t kk_main_iterate_fun764(kk_function_t _fself, kk_box_t _b_637, kk_context_t* _ctx) {
  struct kk_main_iterate_fun764__t* _self = kk_function_as(struct kk_main_iterate_fun764__t*, _fself);
  kk_main__tree r1 = _self->r1; /* tree */
  kk_integer_t v0 = _self->v0; /* int */
  kk_drop_match(_self, {kk_main__tree_dup(r1);kk_integer_dup(v0);}, {}, _ctx)
  kk_unit_t wild__1_650 = kk_Unit;
  kk_unit_unbox(_b_637);
  kk_unit_t _x765 = kk_Unit;
  kk_main__mlift550_iterate(r1, v0, wild__1_650, _ctx);
  return kk_unit_box(_x765);
}


// lift anonymous function
struct kk_main_iterate_fun771__t {
  struct kk_function_s _base;
  kk_main__tree r1;
};
static kk_box_t kk_main_iterate_fun771(kk_function_t _fself, kk_box_t _b_647, kk_context_t* _ctx);
static kk_function_t kk_main_new_iterate_fun771(kk_main__tree r1, kk_context_t* _ctx) {
  struct kk_main_iterate_fun771__t* _self = kk_function_alloc_as(struct kk_main_iterate_fun771__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_iterate_fun771, kk_context());
  _self->r1 = r1;
  return &_self->_base;
}

static kk_box_t kk_main_iterate_fun771(kk_function_t _fself, kk_box_t _b_647, kk_context_t* _ctx) {
  struct kk_main_iterate_fun771__t* _self = kk_function_as(struct kk_main_iterate_fun771__t*, _fself);
  kk_main__tree r1 = _self->r1; /* tree */
  kk_drop_match(_self, {kk_main__tree_dup(r1);}, {}, _ctx)
  kk_unit_t wild__01_651 = kk_Unit;
  kk_unit_unbox(_b_647);
  kk_unit_t _x772 = kk_Unit;
  kk_main__mlift549_iterate(r1, wild__01_651, _ctx);
  return kk_unit_box(_x772);
}

kk_unit_t kk_main_iterate(kk_main__tree t, kk_context_t* _ctx) { /* (t : tree) -> yield () */ 
  kk__tailcall: ;
  if (kk_main__is_Leaf(t)) {
    kk_Unit; return kk_Unit;
  }
  {
    struct kk_main_Node* _con762 = kk_main__as_Node(t);
    kk_main__tree l = _con762->left;
    kk_integer_t v0 = _con762->value;
    kk_main__tree r1 = _con762->right;
    if (kk_likely(kk_main__tree_is_unique(t))) {
      kk_main__tree_free(t, _ctx);
    }
    else {
      kk_main__tree_dup(l);
      kk_main__tree_dup(r1);
      kk_integer_dup(v0);
      kk_main__tree_decref(t, _ctx);
    }
    kk_unit_t x1_561 = kk_Unit;
    kk_main_iterate(l, _ctx);
    if (kk_yielding(kk_context())) {
      kk_box_t _x763 = kk_std_core_hnd_yield_extend(kk_main_new_iterate_fun764(r1, v0, _ctx), _ctx); /*1001*/
      kk_unit_unbox(_x763); return kk_Unit;
    }
    {
      kk_std_core_hnd__ev ev0_567;
      kk_ssize_t _x766 = (KK_IZ(0)); /*ssize_t*/
      ev0_567 = kk_evv_at(_x766,kk_context()); /*std/core/hnd/ev<.hnd-yield>*/
      kk_unit_t x2_564 = kk_Unit;
      kk_box_t _x767;
      {
        struct kk_std_core_hnd_Ev* _con768 = kk_std_core_hnd__as_Ev(ev0_567);
        kk_std_core_hnd__marker m00 = _con768->marker;
        kk_box_t _box_x638 = _con768->hnd;
        kk_main__hnd_yield h0 = kk_main__hnd_yield_unbox(_box_x638, NULL);
        kk_main__hnd_yield_dup(h0);
        kk_std_core_hnd__clause1 _match_709;
        kk_std_core_hnd__clause1 _brw_710 = kk_main__select_yield(h0, _ctx); /*std/core/hnd/clause1<int,(),.hnd-yield,147,148>*/;
        kk_main__hnd_yield_drop(h0, _ctx);
        _match_709 = _brw_710; /*std/core/hnd/clause1<int,(),.hnd-yield,147,148>*/
        {
          kk_function_t _fun_unbox_x642 = _match_709.clause;
          _x767 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x642, (_fun_unbox_x642, m00, ev0_567, kk_integer_box(v0), _ctx)); /*1010*/
        }
      }
      kk_unit_unbox(_x767);
      if (kk_yielding(kk_context())) {
        kk_box_t _x770 = kk_std_core_hnd_yield_extend(kk_main_new_iterate_fun771(r1, _ctx), _ctx); /*1001*/
        kk_unit_unbox(_x770); return kk_Unit;
      }
      { // tailcall
        t = r1;
        goto kk__tailcall;
      }
    }
  }
}

kk_main__tree kk_main_make(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> div tree */ 
  bool _match_706 = kk_integer_eq_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_706) {
    kk_integer_drop(n, _ctx);
    return kk_main__new_Leaf(_ctx);
  }
  {
    kk_main__tree t;
    kk_integer_t _x773;
    kk_integer_t _x774 = kk_integer_dup(n); /*int*/
    _x773 = kk_integer_add_small_const(_x774, -1, _ctx); /*int*/
    t = kk_main_make(_x773, _ctx); /*tree*/
    kk_main__tree _x775 = kk_main__tree_dup(t); /*tree*/
    return kk_main__new_Node(kk_reuse_null, _x775, n, t, _ctx);
  }
}

kk_integer_t kk_main_sum(kk_integer_t a, kk_main__generator g, kk_context_t* _ctx) { /* (a : int, g : generator) -> div int */ 
  kk__tailcall: ;
  if (kk_main__is_Empty(g)) {
    return a;
  }
  {
    struct kk_main_Thunk* _con776 = kk_main__as_Thunk(g);
    kk_integer_t v = _con776->value;
    kk_function_t f = _con776->next;
    if (kk_likely(kk_main__generator_is_unique(g))) {
      kk_main__generator_free(g, _ctx);
    }
    else {
      kk_function_dup(f);
      kk_integer_dup(v);
      kk_main__generator_decref(g, _ctx);
    }
    { // tailcall
      kk_integer_t _x777 = kk_integer_add(v,a,kk_context()); /*int*/
      kk_main__generator _x778 = kk_function_call(kk_main__generator, (kk_function_t, kk_context_t*), f, (f, _ctx)); /*generator*/
      a = _x777;
      g = _x778;
      goto kk__tailcall;
    }
  }
}


// lift anonymous function
struct kk_main_run_fun783__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_run_fun783(kk_function_t _fself, kk_std_core_hnd__marker _b_664, kk_std_core_hnd__ev _b_665, kk_box_t _b_666, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun783(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_run_fun783, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_main_run_fun786__t {
  struct kk_function_s _base;
  kk_integer_t x_690;
};
static kk_box_t kk_main_run_fun786(kk_function_t _fself, kk_function_t _b_661, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun786(kk_integer_t x_690, kk_context_t* _ctx) {
  struct kk_main_run_fun786__t* _self = kk_function_alloc_as(struct kk_main_run_fun786__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun786, kk_context());
  _self->x_690 = x_690;
  return &_self->_base;
}



// lift anonymous function
struct kk_main_run_fun787__t {
  struct kk_function_s _base;
  kk_function_t _b_661;
};
static kk_main__generator kk_main_run_fun787(kk_function_t _fself, kk_std_core_hnd__resume_result _b_662, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun787(kk_function_t _b_661, kk_context_t* _ctx) {
  struct kk_main_run_fun787__t* _self = kk_function_alloc_as(struct kk_main_run_fun787__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun787, kk_context());
  _self->_b_661 = _b_661;
  return &_self->_base;
}

static kk_main__generator kk_main_run_fun787(kk_function_t _fself, kk_std_core_hnd__resume_result _b_662, kk_context_t* _ctx) {
  struct kk_main_run_fun787__t* _self = kk_function_as(struct kk_main_run_fun787__t*, _fself);
  kk_function_t _b_661 = _self->_b_661; /* (std/core/hnd/resume-result<1000,1002>) -> 1001 1002 */
  kk_drop_match(_self, {kk_function_dup(_b_661);}, {}, _ctx)
  kk_box_t _x788 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__resume_result, kk_context_t*), _b_661, (_b_661, _b_662, _ctx)); /*1002*/
  return kk_main__generator_unbox(_x788, _ctx);
}


// lift anonymous function
struct kk_main_run_fun789__t {
  struct kk_function_s _base;
};
static kk_main__generator kk_main_run_fun789(kk_function_t _fself, kk_integer_t x0, kk_function_t resume, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun789(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_run_fun789, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_main_run_fun790__t {
  struct kk_function_s _base;
  kk_function_t resume;
};
static kk_main__generator kk_main_run_fun790(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun790(kk_function_t resume, kk_context_t* _ctx) {
  struct kk_main_run_fun790__t* _self = kk_function_alloc_as(struct kk_main_run_fun790__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun790, kk_context());
  _self->resume = resume;
  return &_self->_base;
}

static kk_main__generator kk_main_run_fun790(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_main_run_fun790__t* _self = kk_function_as(struct kk_main_run_fun790__t*, _fself);
  kk_function_t resume = _self->resume; /* (()) -> div generator */
  kk_drop_match(_self, {kk_function_dup(resume);}, {}, _ctx)
  return kk_function_call(kk_main__generator, (kk_function_t, kk_unit_t, kk_context_t*), resume, (resume, kk_Unit, _ctx));
}
static kk_main__generator kk_main_run_fun789(kk_function_t _fself, kk_integer_t x0, kk_function_t resume, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_main__new_Thunk(kk_reuse_null, x0, kk_main_new_run_fun790(resume, _ctx), _ctx);
}


// lift anonymous function
struct kk_main_run_fun791__t {
  struct kk_function_s _base;
  kk_function_t _b_683_653;
};
static kk_box_t kk_main_run_fun791(kk_function_t _fself, kk_box_t _b_655, kk_function_t _b_656, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun791(kk_function_t _b_683_653, kk_context_t* _ctx) {
  struct kk_main_run_fun791__t* _self = kk_function_alloc_as(struct kk_main_run_fun791__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun791, kk_context());
  _self->_b_683_653 = _b_683_653;
  return &_self->_base;
}



// lift anonymous function
struct kk_main_run_fun794__t {
  struct kk_function_s _base;
  kk_function_t _b_656;
};
static kk_main__generator kk_main_run_fun794(kk_function_t _fself, kk_unit_t _b_657, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun794(kk_function_t _b_656, kk_context_t* _ctx) {
  struct kk_main_run_fun794__t* _self = kk_function_alloc_as(struct kk_main_run_fun794__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun794, kk_context());
  _self->_b_656 = _b_656;
  return &_self->_base;
}

static kk_main__generator kk_main_run_fun794(kk_function_t _fself, kk_unit_t _b_657, kk_context_t* _ctx) {
  struct kk_main_run_fun794__t* _self = kk_function_as(struct kk_main_run_fun794__t*, _fself);
  kk_function_t _b_656 = _self->_b_656; /* (1001) -> 1002 1003 */
  kk_drop_match(_self, {kk_function_dup(_b_656);}, {}, _ctx)
  kk_box_t _x795 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _b_656, (_b_656, kk_unit_box(_b_657), _ctx)); /*1003*/
  return kk_main__generator_unbox(_x795, _ctx);
}
static kk_box_t kk_main_run_fun791(kk_function_t _fself, kk_box_t _b_655, kk_function_t _b_656, kk_context_t* _ctx) {
  struct kk_main_run_fun791__t* _self = kk_function_as(struct kk_main_run_fun791__t*, _fself);
  kk_function_t _b_683_653 = _self->_b_683_653; /* (x0 : int, resume : (()) -> div generator) -> div generator */
  kk_drop_match(_self, {kk_function_dup(_b_683_653);}, {}, _ctx)
  kk_main__generator _x792;
  kk_integer_t _x793 = kk_integer_unbox(_b_655); /*int*/
  _x792 = kk_function_call(kk_main__generator, (kk_function_t, kk_integer_t, kk_function_t, kk_context_t*), _b_683_653, (_b_683_653, _x793, kk_main_new_run_fun794(_b_656, _ctx), _ctx)); /*generator*/
  return kk_main__generator_box(_x792, _ctx);
}


// lift anonymous function
struct kk_main_run_fun796__t {
  struct kk_function_s _base;
  kk_function_t _b_684_654;
};
static kk_box_t kk_main_run_fun796(kk_function_t _fself, kk_std_core_hnd__resume_result _b_658, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun796(kk_function_t _b_684_654, kk_context_t* _ctx) {
  struct kk_main_run_fun796__t* _self = kk_function_alloc_as(struct kk_main_run_fun796__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun796, kk_context());
  _self->_b_684_654 = _b_684_654;
  return &_self->_base;
}

static kk_box_t kk_main_run_fun796(kk_function_t _fself, kk_std_core_hnd__resume_result _b_658, kk_context_t* _ctx) {
  struct kk_main_run_fun796__t* _self = kk_function_as(struct kk_main_run_fun796__t*, _fself);
  kk_function_t _b_684_654 = _self->_b_684_654; /* (std/core/hnd/resume-result<(),generator>) -> div generator */
  kk_drop_match(_self, {kk_function_dup(_b_684_654);}, {}, _ctx)
  kk_main__generator _x797 = kk_function_call(kk_main__generator, (kk_function_t, kk_std_core_hnd__resume_result, kk_context_t*), _b_684_654, (_b_684_654, _b_658, _ctx)); /*generator*/
  return kk_main__generator_box(_x797, _ctx);
}
static kk_box_t kk_main_run_fun786(kk_function_t _fself, kk_function_t _b_661, kk_context_t* _ctx) {
  struct kk_main_run_fun786__t* _self = kk_function_as(struct kk_main_run_fun786__t*, _fself);
  kk_integer_t x_690 = _self->x_690; /* int */
  kk_drop_match(_self, {kk_integer_dup(x_690);}, {}, _ctx)
  kk_function_t k0_687 = kk_main_new_run_fun787(_b_661, _ctx); /*(std/core/hnd/resume-result<(),generator>) -> div generator*/;
  kk_integer_t _b_682_652 = x_690; /*int*/;
  kk_function_t _b_683_653 = kk_main_new_run_fun789(_ctx); /*(x0 : int, resume : (()) -> div generator) -> div generator*/;
  kk_function_t _b_684_654 = k0_687; /*(std/core/hnd/resume-result<(),generator>) -> div generator*/;
  return kk_std_core_hnd_protect(kk_integer_box(_b_682_652), kk_main_new_run_fun791(_b_683_653, _ctx), kk_main_new_run_fun796(_b_684_654, _ctx), _ctx);
}
static kk_box_t kk_main_run_fun783(kk_function_t _fself, kk_std_core_hnd__marker _b_664, kk_std_core_hnd__ev _b_665, kk_box_t _b_666, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x784 = kk_Unit;
  kk_std_core_hnd__marker m0_688 = _b_664; /*std/core/hnd/marker<div,generator>*/;
  kk_std_core_hnd__ev ___wildcard__516__16_689 = _b_665; /*std/core/hnd/ev<.hnd-yield>*/;
  kk_std_core_hnd__ev_dropn(___wildcard__516__16_689, (KK_I32(3)), _ctx);
  kk_integer_t x_690 = kk_integer_unbox(_b_666); /*int*/;
  kk_box_t _x785 = kk_std_core_hnd_yield_to(m0_688, kk_main_new_run_fun786(x_690, _ctx), _ctx); /*1000*/
  kk_unit_unbox(_x785);
  return kk_unit_box(_x784);
}


// lift anonymous function
struct kk_main_run_fun798__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_run_fun798(kk_function_t _fself, kk_box_t _b_674, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun798(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_run_fun798, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main_run_fun798(kk_function_t _fself, kk_box_t _b_674, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_main__generator _x799;
  kk_unit_t __w_l33_c12_691 = kk_Unit;
  kk_unit_unbox(_b_674);
  _x799 = kk_main__new_Empty(_ctx); /*generator*/
  return kk_main__generator_box(_x799, _ctx);
}


// lift anonymous function
struct kk_main_run_fun800__t {
  struct kk_function_s _base;
  kk_integer_t n;
};
static kk_box_t kk_main_run_fun800(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun800(kk_integer_t n, kk_context_t* _ctx) {
  struct kk_main_run_fun800__t* _self = kk_function_alloc_as(struct kk_main_run_fun800__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun800, kk_context());
  _self->n = n;
  return &_self->_base;
}



// lift anonymous function
struct kk_main_run_fun803__t {
  struct kk_function_s _base;
};
static kk_main__tree kk_main_run_fun803(kk_function_t _fself, kk_integer_t _x1802, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun803(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_run_fun803, _ctx)
  return kk_function_dup(_fself);
}

static kk_main__tree kk_main_run_fun803(kk_function_t _fself, kk_integer_t _x1802, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_main_make(_x1802, _ctx);
}


// lift anonymous function
struct kk_main_run_fun806__t {
  struct kk_function_s _base;
  kk_function_t _b_685_667;
};
static kk_box_t kk_main_run_fun806(kk_function_t _fself, kk_box_t _b_669, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun806(kk_function_t _b_685_667, kk_context_t* _ctx) {
  struct kk_main_run_fun806__t* _self = kk_function_alloc_as(struct kk_main_run_fun806__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun806, kk_context());
  _self->_b_685_667 = _b_685_667;
  return &_self->_base;
}

static kk_box_t kk_main_run_fun806(kk_function_t _fself, kk_box_t _b_669, kk_context_t* _ctx) {
  struct kk_main_run_fun806__t* _self = kk_function_as(struct kk_main_run_fun806__t*, _fself);
  kk_function_t _b_685_667 = _self->_b_685_667; /* (n : int) -> div tree */
  kk_drop_match(_self, {kk_function_dup(_b_685_667);}, {}, _ctx)
  kk_main__tree _x807;
  kk_integer_t _x808 = kk_integer_unbox(_b_669); /*int*/
  _x807 = kk_function_call(kk_main__tree, (kk_function_t, kk_integer_t, kk_context_t*), _b_685_667, (_b_685_667, _x808, _ctx)); /*tree*/
  return kk_main__tree_box(_x807, _ctx);
}
static kk_box_t kk_main_run_fun800(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_main_run_fun800__t* _self = kk_function_as(struct kk_main_run_fun800__t*, _fself);
  kk_integer_t n = _self->n; /* int */
  kk_drop_match(_self, {kk_integer_dup(n);}, {}, _ctx)
  kk_unit_t _x801 = kk_Unit;
  kk_function_t _b_685_667 = kk_main_new_run_fun803(_ctx); /*(n : int) -> div tree*/;
  kk_integer_t _b_686_668 = n; /*int*/;
  kk_main__tree _x804;
  kk_box_t _x805 = kk_std_core_hnd__open_none1(kk_main_new_run_fun806(_b_685_667, _ctx), kk_integer_box(_b_686_668), _ctx); /*1001*/
  _x804 = kk_main__tree_unbox(_x805, _ctx); /*tree*/
  kk_main_iterate(_x804, _ctx);
  return kk_unit_box(_x801);
}

kk_integer_t kk_main_run(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> div int */ 
  int32_t _b_675_670 = (KK_I32(3)); /*int32*/;
  kk_main__generator _x779;
  kk_box_t _x780;
  kk_main__hnd_yield _x781;
  kk_std_core_hnd__clause1 _x782 = kk_std_core_hnd__new_Clause1(kk_main_new_run_fun783(_ctx), _ctx); /*std/core/hnd/clause1<1015,1016,1017,1018,1019>*/
  _x781 = kk_main__new_Hnd_yield(kk_reuse_null, _x782, _ctx); /*.hnd-yield<7,8>*/
  _x780 = kk_main__handle_yield(_b_675_670, _x781, kk_main_new_run_fun798(_ctx), kk_main_new_run_fun800(n, _ctx), _ctx); /*131*/
  _x779 = kk_main__generator_unbox(_x780, _ctx); /*generator*/
  return kk_main_sum(kk_integer_from_small(0), _x779, _ctx);
}

kk_unit_t kk_main_main(kk_context_t* _ctx) { /* () -> <console,div,ndet> () */ 
  bool is_node0;
  kk_string_t _x809 = kk_std_core_host(_ctx); /*string*/
  kk_string_t _x810;
  kk_define_string_literal(, _s811, 4, "node")
  _x810 = kk_string_dup(_s811); /*string*/
  is_node0 = kk_string_is_eq(_x809,_x810,kk_context()); /*bool*/
  kk_std_core__list xs_437;
  kk_std_core__list _match_705;
  kk_box_t _x812;
  kk_std_core__delayed _x813 = kk_std_core__delayed_dup(kk_std_os_env_argv); /*delayed<ndet,list<string>>*/
  _x812 = kk_std_core_force(_x813, _ctx); /*1001*/
  _match_705 = kk_std_core__list_unbox(_x812, _ctx); /*list<string>*/
  if (kk_std_core__is_Cons(_match_705)) {
    struct kk_std_core_Cons* _con815 = kk_std_core__as_Cons(_match_705);
    kk_box_t _box_x693 = _con815->head;
    kk_std_core__list xx = _con815->tail;
    kk_string_t x1 = kk_string_unbox(_box_x693);
    bool _x817;
    if (is_node0) {
      kk_string_t _x818;
      kk_std_os_path__path _x819;
      kk_string_t _x820 = kk_string_dup(x1); /*string*/
      _x819 = kk_std_os_path_path(_x820, _ctx); /*std/os/path/path*/
      _x818 = kk_std_os_path_stemname(_x819, _ctx); /*string*/
      kk_string_t _x821;
      kk_define_string_literal(, _s822, 4, "node")
      _x821 = kk_string_dup(_s822); /*string*/
      _x817 = kk_string_is_eq(_x818,_x821,kk_context()); /*bool*/
    }
    else {
      _x817 = false; /*bool*/
    }
    if (_x817) {
      if (kk_likely(kk_std_core__list_is_unique(_match_705))) {
        kk_box_drop(_box_x693, _ctx);
        kk_std_core__list_free(_match_705, _ctx);
      }
      else {
        kk_std_core__list_dup(xx);
        kk_std_core__list_decref(_match_705, _ctx);
      }
      xs_437 = kk_std_core_drop(xx, kk_integer_from_small(1), _ctx); /*list<string>*/
      goto _match814;
    }
  }
  {
    xs_437 = kk_std_core_drop(_match_705, kk_integer_from_small(1), _ctx); /*list<string>*/
  }
  _match814: ;
  kk_std_core_types__optional default0_435 = kk_std_core_types__new_Optional(kk_integer_box(kk_integer_from_small(5)), _ctx); /*optional<int>*/;
  kk_integer_t n;
  bool _match_703;
  kk_string_t _x823;
  if (kk_std_core__is_Cons(xs_437)) {
    struct kk_std_core_Cons* _con824 = kk_std_core__as_Cons(xs_437);
    kk_box_t _box_x697 = _con824->head;
    kk_string_t x0 = kk_string_unbox(_box_x697);
    kk_string_dup(x0);
    _x823 = x0; /*string*/
  }
  else {
    _x823 = kk_string_empty(); /*string*/
  }
  kk_string_t _x827 = kk_string_empty(); /*string*/
  _match_703 = kk_string_is_eq(_x823,_x827,kk_context()); /*bool*/
  if (_match_703) {
    kk_std_core__list_drop(xs_437, _ctx);
    if (kk_std_core_types__is_Optional(default0_435)) {
      kk_box_t _box_x698 = default0_435._cons.Optional.value;
      kk_integer_t _default_15556 = kk_integer_unbox(_box_x698);
      n = _default_15556; /*int*/
    }
    else {
      n = kk_integer_from_small(0); /*int*/
    }
  }
  else {
    kk_std_core_types__maybe m_17212;
    kk_string_t _x830;
    kk_string_t _x831;
    kk_string_t _x832;
    if (kk_std_core__is_Cons(xs_437)) {
      struct kk_std_core_Cons* _con833 = kk_std_core__as_Cons(xs_437);
      kk_box_t _box_x699 = _con833->head;
      kk_std_core__list _pat010 = _con833->tail;
      kk_string_t x00 = kk_string_unbox(_box_x699);
      if (kk_likely(kk_std_core__list_is_unique(xs_437))) {
        kk_std_core__list_drop(_pat010, _ctx);
        kk_std_core__list_free(xs_437, _ctx);
      }
      else {
        kk_string_dup(x00);
        kk_std_core__list_decref(xs_437, _ctx);
      }
      _x832 = x00; /*string*/
    }
    else {
      _x832 = kk_string_empty(); /*string*/
    }
    _x831 = kk_string_trim_left(_x832,kk_context()); /*string*/
    _x830 = kk_string_trim_right(_x831,kk_context()); /*string*/
    bool _x836;
    kk_std_core_types__optional _x837 = kk_std_core_types__new_None(_ctx); /*forall<a> optional<a>*/
    if (kk_std_core_types__is_Optional(_x837)) {
      kk_box_t _box_x700 = _x837._cons.Optional.value;
      bool _hex_15560 = kk_bool_unbox(_box_x700);
      _x836 = _hex_15560; /*bool*/
    }
    else {
      _x836 = false; /*bool*/
    }
    m_17212 = kk_std_core_xparse_int(_x830, _x836, _ctx); /*maybe<int>*/
    if (kk_std_core_types__is_Nothing(m_17212)) {
      if (kk_std_core_types__is_Optional(default0_435)) {
        kk_box_t _box_x701 = default0_435._cons.Optional.value;
        kk_integer_t _default_155560 = kk_integer_unbox(_box_x701);
        n = _default_155560; /*int*/
      }
      else {
        n = kk_integer_from_small(0); /*int*/
      }
    }
    else {
      kk_box_t _box_x702 = m_17212._cons.Just.value;
      kk_integer_t x = kk_integer_unbox(_box_x702);
      kk_std_core_types__optional_drop(default0_435, _ctx);
      n = x; /*int*/
    }
  }
  kk_integer_t r = kk_main_run(n, _ctx); /*int*/;
  kk_string_t _x841 = kk_std_core_show(r, _ctx); /*string*/
  kk_std_core_printsln(_x841, _ctx); return kk_Unit;
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
    kk_string_t _x724;
    kk_define_string_literal(, _s725, 10, "yield.main")
    _x724 = kk_string_dup(_s725); /*string*/
    kk_main__tag_yield = kk_std_core_hnd__new_Htag(_x724, _ctx); /*std/core/hnd/htag<.hnd-yield>*/
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
  kk_std_core_hnd__htag_drop(kk_main__tag_yield, _ctx);
  kk_std_os_env__done(_ctx);
  kk_std_os_path__done(_ctx);
  kk_std_core__done(_ctx);
  kk_std_core_hnd__done(_ctx);
  kk_std_core_types__done(_ctx);
}
