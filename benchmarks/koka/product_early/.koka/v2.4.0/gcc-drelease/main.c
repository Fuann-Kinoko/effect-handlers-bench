// Koka generated module: "main", koka version: 2.4.0, platform: 64-bit
#include "main.h"
 
// runtime tag for the `:abort` effect

kk_std_core_hnd__htag kk_main__tag_abort;
 
// handler for the `:abort` effect

kk_box_t kk_main__handle_abort(int32_t cfc, kk_main__hnd_abort hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (cfc : int32, hnd : .hnd-abort<e,b>, ret : (res : a) -> e b, action : () -> <abort|e> a) -> e b */ 
  kk_std_core_hnd__htag _x669 = kk_std_core_hnd__htag_dup(kk_main__tag_abort); /*std/core/hnd/htag<.hnd-abort>*/
  return kk_std_core_hnd__hhandle(_x669, cfc, kk_main__hnd_abort_box(hnd, _ctx), ret, action, _ctx);
}

kk_std_core__list kk_main__ctail_enumerate(kk_integer_t i, kk_std_core_types__ctail _acc, kk_context_t* _ctx) { /* (i : int, ctail<list<int>>) -> div list<int> */ 
  kk__tailcall: ;
  bool _match_661 = kk_integer_lt_borrow(i,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_661) {
    kk_integer_drop(i, _ctx);
    kk_box_t _x674 = kk_ctail_resolve(_acc,(kk_std_core__list_box(kk_std_core__new_Nil(_ctx), _ctx))); /*-1*/
    return kk_std_core__list_unbox(_x674, _ctx);
  }
  {
    kk_std_core__list _ctail_536 = kk_std_core__list_hole(); /*list<int>*/;
    kk_std_core__list _ctail_537;
    kk_box_t _x675;
    kk_integer_t _x676 = kk_integer_dup(i); /*int*/
    _x675 = kk_integer_box(_x676); /*1009*/
    _ctail_537 = kk_std_core__new_Cons(kk_reuse_null, _x675, _ctail_536, _ctx); /*list<int>*/
    kk_box_t* _b_593_588 = (kk_box_t*)((&kk_std_core__as_Cons(_ctail_537)->tail)); /*cfield<list<int>>*/;
    { // tailcall
      kk_integer_t _x677 = kk_integer_add_small_const(i, -1, _ctx); /*int*/
      kk_std_core_types__ctail _x678 = kk_ctail_link(_acc,(kk_std_core__list_box(_ctail_537, _ctx)),_b_593_588); /*ctail<0>*/
      i = _x677;
      _acc = _x678;
      goto kk__tailcall;
    }
  }
}

kk_std_core__list kk_main_enumerate(kk_integer_t i0, kk_context_t* _ctx) { /* (i : int) -> div list<int> */ 
  kk_std_core_types__ctail _x679 = kk_ctail_nil(); /*ctail<0>*/
  return kk_main__ctail_enumerate(i0, _x679, _ctx);
}
 
// monadic lift

kk_integer_t kk_main__mlift545_product(kk_integer_t y, kk_integer_t _y_541, kk_context_t* _ctx) { /* (y : int, int) -> abort int */ 
  return kk_integer_mul(y,_y_541,kk_context());
}


// lift anonymous function
struct kk_main_product_fun687__t {
  struct kk_function_s _base;
  kk_integer_t y0;
};
static kk_box_t kk_main_product_fun687(kk_function_t _fself, kk_box_t _b_607, kk_context_t* _ctx);
static kk_function_t kk_main_new_product_fun687(kk_integer_t y0, kk_context_t* _ctx) {
  struct kk_main_product_fun687__t* _self = kk_function_alloc_as(struct kk_main_product_fun687__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_product_fun687, kk_context());
  _self->y0 = y0;
  return &_self->_base;
}

static kk_box_t kk_main_product_fun687(kk_function_t _fself, kk_box_t _b_607, kk_context_t* _ctx) {
  struct kk_main_product_fun687__t* _self = kk_function_as(struct kk_main_product_fun687__t*, _fself);
  kk_integer_t y0 = _self->y0; /* int */
  kk_drop_match(_self, {kk_integer_dup(y0);}, {}, _ctx)
  kk_integer_t _y_609_5410 = kk_integer_unbox(_b_607); /*int*/;
  kk_integer_t _x688 = kk_main__mlift545_product(y0, _y_609_5410, _ctx); /*int*/
  return kk_integer_box(_x688);
}

kk_integer_t kk_main_product(kk_std_core__list xs, kk_context_t* _ctx) { /* (xs : list<int>) -> abort int */ 
  if (kk_std_core__is_Nil(xs)) {
    return kk_integer_from_small(0);
  }
  {
    struct kk_std_core_Cons* _con680 = kk_std_core__as_Cons(xs);
    kk_box_t _box_x597 = _con680->head;
    kk_std_core__list ys = _con680->tail;
    kk_integer_t y0 = kk_integer_unbox(_box_x597);
    if (kk_likely(kk_std_core__list_is_unique(xs))) {
      kk_std_core__list_free(xs, _ctx);
    }
    else {
      kk_integer_dup(y0);
      kk_std_core__list_dup(ys);
      kk_std_core__list_decref(xs, _ctx);
    }
    bool _match_657 = kk_integer_eq_borrow(y0,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    if (_match_657) {
      kk_std_core__list_drop(ys, _ctx);
      kk_integer_drop(y0, _ctx);
      kk_std_core_hnd__ev ev_550;
      kk_ssize_t _x682 = (KK_IZ(0)); /*ssize_t*/
      ev_550 = kk_evv_at(_x682,kk_context()); /*std/core/hnd/ev<.hnd-abort>*/
      kk_box_t _x683;
      {
        struct kk_std_core_hnd_Ev* _con684 = kk_std_core_hnd__as_Ev(ev_550);
        kk_std_core_hnd__marker m0 = _con684->marker;
        kk_box_t _box_x598 = _con684->hnd;
        kk_main__hnd_abort h = kk_main__hnd_abort_unbox(_box_x598, NULL);
        kk_main__hnd_abort_dup(h);
        kk_std_core_hnd__clause1 _match_659;
        kk_std_core_hnd__clause1 _brw_660 = kk_main__select_done(h, _ctx); /*std/core/hnd/clause1<int,129,.hnd-abort,130,131>*/;
        kk_main__hnd_abort_drop(h, _ctx);
        _match_659 = _brw_660; /*std/core/hnd/clause1<int,129,.hnd-abort,130,131>*/
        {
          kk_function_t _fun_unbox_x602 = _match_659.clause;
          _x683 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x602, (_fun_unbox_x602, m0, ev_550, kk_integer_box(kk_integer_from_small(0)), _ctx)); /*1010*/
        }
      }
      return kk_integer_unbox(_x683);
    }
    {
      kk_integer_t x0_553 = kk_main_product(ys, _ctx); /*int*/;
      if (kk_yielding(kk_context())) {
        kk_integer_drop(x0_553, _ctx);
        kk_box_t _x686 = kk_std_core_hnd_yield_extend(kk_main_new_product_fun687(y0, _ctx), _ctx); /*1001*/
        return kk_integer_unbox(_x686);
      }
      {
        return kk_integer_mul(y0,x0_553,kk_context());
      }
    }
  }
}


// lift anonymous function
struct kk_main_run_product_fun690__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_run_product_fun690(kk_function_t _fself, kk_std_core_hnd__marker m0, kk_std_core_hnd__ev ___wildcard__516__16, kk_integer_t x, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_product_fun690(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_run_product_fun690, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_main_run_product_fun691__t {
  struct kk_function_s _base;
  kk_integer_t x;
};
static kk_box_t kk_main_run_product_fun691(kk_function_t _fself, kk_function_t _b_619, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_product_fun691(kk_integer_t x, kk_context_t* _ctx) {
  struct kk_main_run_product_fun691__t* _self = kk_function_alloc_as(struct kk_main_run_product_fun691__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_product_fun691, kk_context());
  _self->x = x;
  return &_self->_base;
}



// lift anonymous function
struct kk_main_run_product_fun692__t {
  struct kk_function_s _base;
  kk_function_t _b_619;
};
static kk_integer_t kk_main_run_product_fun692(kk_function_t _fself, kk_std_core_hnd__resume_result _b_620, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_product_fun692(kk_function_t _b_619, kk_context_t* _ctx) {
  struct kk_main_run_product_fun692__t* _self = kk_function_alloc_as(struct kk_main_run_product_fun692__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_product_fun692, kk_context());
  _self->_b_619 = _b_619;
  return &_self->_base;
}

static kk_integer_t kk_main_run_product_fun692(kk_function_t _fself, kk_std_core_hnd__resume_result _b_620, kk_context_t* _ctx) {
  struct kk_main_run_product_fun692__t* _self = kk_function_as(struct kk_main_run_product_fun692__t*, _fself);
  kk_function_t _b_619 = _self->_b_619; /* (std/core/hnd/resume-result<1000,1002>) -> 1001 1002 */
  kk_drop_match(_self, {kk_function_dup(_b_619);}, {}, _ctx)
  kk_box_t _x693 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__resume_result, kk_context_t*), _b_619, (_b_619, _b_620, _ctx)); /*1002*/
  return kk_integer_unbox(_x693);
}


// lift anonymous function
struct kk_main_run_product_fun694__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_main_run_product_fun694(kk_function_t _fself, kk_integer_t r, kk_function_t resume, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_product_fun694(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_run_product_fun694, _ctx)
  return kk_function_dup(_fself);
}

static kk_integer_t kk_main_run_product_fun694(kk_function_t _fself, kk_integer_t r, kk_function_t resume, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_function_drop(resume, _ctx);
  return r;
}


// lift anonymous function
struct kk_main_run_product_fun695__t {
  struct kk_function_s _base;
  kk_function_t _b_638_611;
};
static kk_box_t kk_main_run_product_fun695(kk_function_t _fself, kk_box_t _b_613, kk_function_t _b_614, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_product_fun695(kk_function_t _b_638_611, kk_context_t* _ctx) {
  struct kk_main_run_product_fun695__t* _self = kk_function_alloc_as(struct kk_main_run_product_fun695__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_product_fun695, kk_context());
  _self->_b_638_611 = _b_638_611;
  return &_self->_base;
}



// lift anonymous function
struct kk_main_run_product_fun698__t {
  struct kk_function_s _base;
  kk_function_t _b_614;
};
static kk_integer_t kk_main_run_product_fun698(kk_function_t _fself, kk_box_t _b_615, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_product_fun698(kk_function_t _b_614, kk_context_t* _ctx) {
  struct kk_main_run_product_fun698__t* _self = kk_function_alloc_as(struct kk_main_run_product_fun698__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_product_fun698, kk_context());
  _self->_b_614 = _b_614;
  return &_self->_base;
}

static kk_integer_t kk_main_run_product_fun698(kk_function_t _fself, kk_box_t _b_615, kk_context_t* _ctx) {
  struct kk_main_run_product_fun698__t* _self = kk_function_as(struct kk_main_run_product_fun698__t*, _fself);
  kk_function_t _b_614 = _self->_b_614; /* (1001) -> 1002 1003 */
  kk_drop_match(_self, {kk_function_dup(_b_614);}, {}, _ctx)
  kk_box_t _x699 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _b_614, (_b_614, _b_615, _ctx)); /*1003*/
  return kk_integer_unbox(_x699);
}
static kk_box_t kk_main_run_product_fun695(kk_function_t _fself, kk_box_t _b_613, kk_function_t _b_614, kk_context_t* _ctx) {
  struct kk_main_run_product_fun695__t* _self = kk_function_as(struct kk_main_run_product_fun695__t*, _fself);
  kk_function_t _b_638_611 = _self->_b_638_611; /* (r : int, resume : (276) -> int) -> int */
  kk_drop_match(_self, {kk_function_dup(_b_638_611);}, {}, _ctx)
  kk_integer_t _x696;
  kk_integer_t _x697 = kk_integer_unbox(_b_613); /*int*/
  _x696 = kk_function_call(kk_integer_t, (kk_function_t, kk_integer_t, kk_function_t, kk_context_t*), _b_638_611, (_b_638_611, _x697, kk_main_new_run_product_fun698(_b_614, _ctx), _ctx)); /*int*/
  return kk_integer_box(_x696);
}


// lift anonymous function
struct kk_main_run_product_fun700__t {
  struct kk_function_s _base;
  kk_function_t _b_639_612;
};
static kk_box_t kk_main_run_product_fun700(kk_function_t _fself, kk_std_core_hnd__resume_result _b_616, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_product_fun700(kk_function_t _b_639_612, kk_context_t* _ctx) {
  struct kk_main_run_product_fun700__t* _self = kk_function_alloc_as(struct kk_main_run_product_fun700__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_product_fun700, kk_context());
  _self->_b_639_612 = _b_639_612;
  return &_self->_base;
}

static kk_box_t kk_main_run_product_fun700(kk_function_t _fself, kk_std_core_hnd__resume_result _b_616, kk_context_t* _ctx) {
  struct kk_main_run_product_fun700__t* _self = kk_function_as(struct kk_main_run_product_fun700__t*, _fself);
  kk_function_t _b_639_612 = _self->_b_639_612; /* (std/core/hnd/resume-result<276,int>) -> int */
  kk_drop_match(_self, {kk_function_dup(_b_639_612);}, {}, _ctx)
  kk_integer_t _x701 = kk_function_call(kk_integer_t, (kk_function_t, kk_std_core_hnd__resume_result, kk_context_t*), _b_639_612, (_b_639_612, _b_616, _ctx)); /*int*/
  return kk_integer_box(_x701);
}
static kk_box_t kk_main_run_product_fun691(kk_function_t _fself, kk_function_t _b_619, kk_context_t* _ctx) {
  struct kk_main_run_product_fun691__t* _self = kk_function_as(struct kk_main_run_product_fun691__t*, _fself);
  kk_integer_t x = _self->x; /* int */
  kk_drop_match(_self, {kk_integer_dup(x);}, {}, _ctx)
  kk_function_t k0_640 = kk_main_new_run_product_fun692(_b_619, _ctx); /*(std/core/hnd/resume-result<276,int>) -> int*/;
  kk_integer_t _b_637_610 = x; /*int*/;
  kk_function_t _b_638_611 = kk_main_new_run_product_fun694(_ctx); /*(r : int, resume : (276) -> int) -> int*/;
  kk_function_t _b_639_612 = k0_640; /*(std/core/hnd/resume-result<276,int>) -> int*/;
  return kk_std_core_hnd_protect(kk_integer_box(_b_637_610), kk_main_new_run_product_fun695(_b_638_611, _ctx), kk_main_new_run_product_fun700(_b_639_612, _ctx), _ctx);
}
static kk_box_t kk_main_run_product_fun690(kk_function_t _fself, kk_std_core_hnd__marker m0, kk_std_core_hnd__ev ___wildcard__516__16, kk_integer_t x, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_hnd__ev_dropn(___wildcard__516__16, (KK_I32(3)), _ctx);
  return kk_std_core_hnd_yield_to(m0, kk_main_new_run_product_fun691(x, _ctx), _ctx);
}


// lift anonymous function
struct kk_main_run_product_fun704__t {
  struct kk_function_s _base;
  kk_function_t _b_634_621;
};
static kk_box_t kk_main_run_product_fun704(kk_function_t _fself, kk_std_core_hnd__marker _b_622, kk_std_core_hnd__ev _b_623, kk_box_t _b_624, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_product_fun704(kk_function_t _b_634_621, kk_context_t* _ctx) {
  struct kk_main_run_product_fun704__t* _self = kk_function_alloc_as(struct kk_main_run_product_fun704__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_product_fun704, kk_context());
  _self->_b_634_621 = _b_634_621;
  return &_self->_base;
}

static kk_box_t kk_main_run_product_fun704(kk_function_t _fself, kk_std_core_hnd__marker _b_622, kk_std_core_hnd__ev _b_623, kk_box_t _b_624, kk_context_t* _ctx) {
  struct kk_main_run_product_fun704__t* _self = kk_function_as(struct kk_main_run_product_fun704__t*, _fself);
  kk_function_t _b_634_621 = _self->_b_634_621; /* (m0 : std/core/hnd/marker<(<>),int>, std/core/hnd/ev<.hnd-abort>, x : int) -> 276 */
  kk_drop_match(_self, {kk_function_dup(_b_634_621);}, {}, _ctx)
  kk_integer_t _x705 = kk_integer_unbox(_b_624); /*int*/
  return kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_integer_t, kk_context_t*), _b_634_621, (_b_634_621, _b_622, _b_623, _x705, _ctx));
}


// lift anonymous function
struct kk_main_run_product_fun706__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_run_product_fun706(kk_function_t _fself, kk_box_t _b_629, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_product_fun706(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_run_product_fun706, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main_run_product_fun706(kk_function_t _fself, kk_box_t _b_629, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_641 = kk_integer_unbox(_b_629); /*int*/;
  return kk_integer_box(_x_641);
}


// lift anonymous function
struct kk_main_run_product_fun707__t {
  struct kk_function_s _base;
  kk_std_core__list xs;
};
static kk_box_t kk_main_run_product_fun707(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_product_fun707(kk_std_core__list xs, kk_context_t* _ctx) {
  struct kk_main_run_product_fun707__t* _self = kk_function_alloc_as(struct kk_main_run_product_fun707__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_product_fun707, kk_context());
  _self->xs = xs;
  return &_self->_base;
}

static kk_box_t kk_main_run_product_fun707(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_main_run_product_fun707__t* _self = kk_function_as(struct kk_main_run_product_fun707__t*, _fself);
  kk_std_core__list xs = _self->xs; /* list<int> */
  kk_drop_match(_self, {kk_std_core__list_dup(xs);}, {}, _ctx)
  kk_integer_t _x708 = kk_main_product(xs, _ctx); /*int*/
  return kk_integer_box(_x708);
}

kk_integer_t kk_main_run_product(kk_std_core__list xs, kk_context_t* _ctx) { /* (xs : list<int>) -> int */ 
  int32_t _b_630_625 = (KK_I32(3)); /*int32*/;
  kk_box_t _x689;
  kk_function_t _b_634_621 = kk_main_new_run_product_fun690(_ctx); /*(m0 : std/core/hnd/marker<(<>),int>, std/core/hnd/ev<.hnd-abort>, x : int) -> 276*/;
  kk_main__hnd_abort _x702;
  kk_std_core_hnd__clause1 _x703 = kk_std_core_hnd__new_Clause1(kk_main_new_run_product_fun704(_b_634_621, _ctx), _ctx); /*std/core/hnd/clause1<1015,1016,1017,1018,1019>*/
  _x702 = kk_main__new_Hnd_abort(kk_reuse_null, _x703, _ctx); /*.hnd-abort<8,9>*/
  _x689 = kk_main__handle_abort(_b_630_625, _x702, kk_main_new_run_product_fun706(_ctx), kk_main_new_run_product_fun707(xs, _ctx), _ctx); /*109*/
  return kk_integer_unbox(_x689);
}
 
// lifted local: run, loop

kk_integer_t kk_main__lift431_run(kk_std_core__list xs, kk_integer_t i, kk_integer_t a, kk_context_t* _ctx) { /* (xs : list<int>, i : int, a : int) -> div int */ 
  kk__tailcall: ;
  bool _match_656 = kk_integer_eq_borrow(i,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_656) {
    kk_std_core__list_drop(xs, _ctx);
    kk_integer_drop(i, _ctx);
    return a;
  }
  {
    kk_integer_t y0_424;
    kk_std_core__list _x709 = kk_std_core__list_dup(xs); /*list<int>*/
    y0_424 = kk_main_run_product(_x709, _ctx); /*int*/
    kk_integer_t i0_532 = kk_integer_add_small_const(i, -1, _ctx); /*int*/;
    kk_integer_t a0_533 = kk_integer_add(a,y0_424,kk_context()); /*int*/;
    { // tailcall
      i = i0_532;
      a = a0_533;
      goto kk__tailcall;
    }
  }
}

kk_unit_t kk_main_main(kk_context_t* _ctx) { /* () -> <console,div,ndet> () */ 
  bool is_node;
  kk_string_t _x710 = kk_std_core_host(_ctx); /*string*/
  kk_string_t _x711;
  kk_define_string_literal(, _s712, 4, "node")
  _x711 = kk_string_dup(_s712); /*string*/
  is_node = kk_string_is_eq(_x710,_x711,kk_context()); /*bool*/
  kk_std_core__list xs_428;
  kk_std_core__list _match_655;
  kk_box_t _x713;
  kk_std_core__delayed _x714 = kk_std_core__delayed_dup(kk_std_os_env_argv); /*delayed<ndet,list<string>>*/
  _x713 = kk_std_core_force(_x714, _ctx); /*1001*/
  _match_655 = kk_std_core__list_unbox(_x713, _ctx); /*list<string>*/
  if (kk_std_core__is_Cons(_match_655)) {
    struct kk_std_core_Cons* _con716 = kk_std_core__as_Cons(_match_655);
    kk_box_t _box_x643 = _con716->head;
    kk_std_core__list xx = _con716->tail;
    kk_string_t x1 = kk_string_unbox(_box_x643);
    bool _x718;
    if (is_node) {
      kk_string_t _x719;
      kk_std_os_path__path _x720;
      kk_string_t _x721 = kk_string_dup(x1); /*string*/
      _x720 = kk_std_os_path_path(_x721, _ctx); /*std/os/path/path*/
      _x719 = kk_std_os_path_stemname(_x720, _ctx); /*string*/
      kk_string_t _x722;
      kk_define_string_literal(, _s723, 4, "node")
      _x722 = kk_string_dup(_s723); /*string*/
      _x718 = kk_string_is_eq(_x719,_x722,kk_context()); /*bool*/
    }
    else {
      _x718 = false; /*bool*/
    }
    if (_x718) {
      if (kk_likely(kk_std_core__list_is_unique(_match_655))) {
        kk_box_drop(_box_x643, _ctx);
        kk_std_core__list_free(_match_655, _ctx);
      }
      else {
        kk_std_core__list_dup(xx);
        kk_std_core__list_decref(_match_655, _ctx);
      }
      xs_428 = kk_std_core_drop(xx, kk_integer_from_small(1), _ctx); /*list<string>*/
      goto _match715;
    }
  }
  {
    xs_428 = kk_std_core_drop(_match_655, kk_integer_from_small(1), _ctx); /*list<string>*/
  }
  _match715: ;
  kk_std_core_types__optional default0_426 = kk_std_core_types__new_Optional(kk_integer_box(kk_integer_from_small(5)), _ctx); /*optional<int>*/;
  kk_integer_t n;
  bool _match_653;
  kk_string_t _x724;
  if (kk_std_core__is_Cons(xs_428)) {
    struct kk_std_core_Cons* _con725 = kk_std_core__as_Cons(xs_428);
    kk_box_t _box_x647 = _con725->head;
    kk_string_t x0 = kk_string_unbox(_box_x647);
    kk_string_dup(x0);
    _x724 = x0; /*string*/
  }
  else {
    _x724 = kk_string_empty(); /*string*/
  }
  kk_string_t _x728 = kk_string_empty(); /*string*/
  _match_653 = kk_string_is_eq(_x724,_x728,kk_context()); /*bool*/
  if (_match_653) {
    kk_std_core__list_drop(xs_428, _ctx);
    if (kk_std_core_types__is_Optional(default0_426)) {
      kk_box_t _box_x648 = default0_426._cons.Optional.value;
      kk_integer_t _default_15556 = kk_integer_unbox(_box_x648);
      n = _default_15556; /*int*/
    }
    else {
      n = kk_integer_from_small(0); /*int*/
    }
  }
  else {
    kk_std_core_types__maybe m_17212;
    kk_string_t _x731;
    kk_string_t _x732;
    kk_string_t _x733;
    if (kk_std_core__is_Cons(xs_428)) {
      struct kk_std_core_Cons* _con734 = kk_std_core__as_Cons(xs_428);
      kk_box_t _box_x649 = _con734->head;
      kk_std_core__list _pat010 = _con734->tail;
      kk_string_t x00 = kk_string_unbox(_box_x649);
      if (kk_likely(kk_std_core__list_is_unique(xs_428))) {
        kk_std_core__list_drop(_pat010, _ctx);
        kk_std_core__list_free(xs_428, _ctx);
      }
      else {
        kk_string_dup(x00);
        kk_std_core__list_decref(xs_428, _ctx);
      }
      _x733 = x00; /*string*/
    }
    else {
      _x733 = kk_string_empty(); /*string*/
    }
    _x732 = kk_string_trim_left(_x733,kk_context()); /*string*/
    _x731 = kk_string_trim_right(_x732,kk_context()); /*string*/
    bool _x737;
    kk_std_core_types__optional _x738 = kk_std_core_types__new_None(_ctx); /*forall<a> optional<a>*/
    if (kk_std_core_types__is_Optional(_x738)) {
      kk_box_t _box_x650 = _x738._cons.Optional.value;
      bool _hex_15560 = kk_bool_unbox(_box_x650);
      _x737 = _hex_15560; /*bool*/
    }
    else {
      _x737 = false; /*bool*/
    }
    m_17212 = kk_std_core_xparse_int(_x731, _x737, _ctx); /*maybe<int>*/
    if (kk_std_core_types__is_Nothing(m_17212)) {
      if (kk_std_core_types__is_Optional(default0_426)) {
        kk_box_t _box_x651 = default0_426._cons.Optional.value;
        kk_integer_t _default_155560 = kk_integer_unbox(_box_x651);
        n = _default_155560; /*int*/
      }
      else {
        n = kk_integer_from_small(0); /*int*/
      }
    }
    else {
      kk_box_t _box_x652 = m_17212._cons.Just.value;
      kk_integer_t x = kk_integer_unbox(_box_x652);
      kk_std_core_types__optional_drop(default0_426, _ctx);
      n = x; /*int*/
    }
  }
  kk_std_core__list xs = kk_main_enumerate(kk_integer_from_small(1000), _ctx); /*list<int>*/;
  kk_integer_t r = kk_main__lift431_run(xs, n, kk_integer_from_small(0), _ctx); /*int*/;
  kk_string_t _x742 = kk_std_core_show(r, _ctx); /*string*/
  kk_std_core_printsln(_x742, _ctx); return kk_Unit;
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
    kk_string_t _x667;
    kk_define_string_literal(, _s668, 10, "abort.main")
    _x667 = kk_string_dup(_s668); /*string*/
    kk_main__tag_abort = kk_std_core_hnd__new_Htag(_x667, _ctx); /*std/core/hnd/htag<.hnd-abort>*/
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
  kk_std_core_hnd__htag_drop(kk_main__tag_abort, _ctx);
  kk_std_os_env__done(_ctx);
  kk_std_os_path__done(_ctx);
  kk_std_core__done(_ctx);
  kk_std_core_hnd__done(_ctx);
  kk_std_core_types__done(_ctx);
}
