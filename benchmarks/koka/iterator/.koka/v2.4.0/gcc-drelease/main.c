// Koka generated module: "main", koka version: 2.4.0, platform: 64-bit
#include "main.h"
 
// runtime tag for the `:emit` effect

kk_std_core_hnd__htag kk_main__tag_emit;
 
// handler for the `:emit` effect

kk_box_t kk_main__handle_emit(int32_t cfc, kk_main__hnd_emit hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (cfc : int32, hnd : .hnd-emit<e,b>, ret : (res : a) -> e b, action : () -> <emit|e> a) -> e b */ 
  kk_std_core_hnd__htag _x604 = kk_std_core_hnd__htag_dup(kk_main__tag_emit); /*std/core/hnd/htag<.hnd-emit>*/
  return kk_std_core_hnd__hhandle(_x604, cfc, kk_main__hnd_emit_box(hnd, _ctx), ret, action, _ctx);
}
 
// monadic lift

kk_unit_t kk_main__mlift486_range(kk_integer_t l, kk_integer_t u, kk_unit_t wild__, kk_context_t* _ctx) { /* (l : int, u : int, wild_ : ()) -> emit () */ 
  kk_integer_t _x610 = kk_integer_add_small_const(l, 1, _ctx); /*int*/
  kk_main_range(_x610, u, _ctx); return kk_Unit;
}


// lift anonymous function
struct kk_main_range_fun618__t {
  struct kk_function_s _base;
  kk_integer_t l0;
  kk_integer_t u0;
};
static kk_box_t kk_main_range_fun618(kk_function_t _fself, kk_box_t _b_535, kk_context_t* _ctx);
static kk_function_t kk_main_new_range_fun618(kk_integer_t l0, kk_integer_t u0, kk_context_t* _ctx) {
  struct kk_main_range_fun618__t* _self = kk_function_alloc_as(struct kk_main_range_fun618__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_range_fun618, kk_context());
  _self->l0 = l0;
  _self->u0 = u0;
  return &_self->_base;
}

static kk_box_t kk_main_range_fun618(kk_function_t _fself, kk_box_t _b_535, kk_context_t* _ctx) {
  struct kk_main_range_fun618__t* _self = kk_function_as(struct kk_main_range_fun618__t*, _fself);
  kk_integer_t l0 = _self->l0; /* int */
  kk_integer_t u0 = _self->u0; /* int */
  kk_drop_match(_self, {kk_integer_dup(l0);kk_integer_dup(u0);}, {}, _ctx)
  kk_unit_t wild__0_537 = kk_Unit;
  kk_unit_unbox(_b_535);
  kk_unit_t _x619 = kk_Unit;
  kk_main__mlift486_range(l0, u0, wild__0_537, _ctx);
  return kk_unit_box(_x619);
}

kk_unit_t kk_main_range(kk_integer_t l0, kk_integer_t u0, kk_context_t* _ctx) { /* (l : int, u : int) -> <div,emit> () */ 
  kk__tailcall: ;
  bool _match_594 = kk_integer_gt_borrow(l0,u0,kk_context()); /*bool*/;
  if (_match_594) {
    kk_integer_drop(u0, _ctx);
    kk_integer_drop(l0, _ctx);
    kk_Unit; return kk_Unit;
  }
  {
    kk_std_core_hnd__ev ev_495;
    kk_ssize_t _x611 = (KK_IZ(0)); /*ssize_t*/
    ev_495 = kk_evv_at(_x611,kk_context()); /*std/core/hnd/ev<.hnd-emit>*/
    kk_unit_t x_492 = kk_Unit;
    kk_box_t _x612;
    {
      struct kk_std_core_hnd_Ev* _con613 = kk_std_core_hnd__as_Ev(ev_495);
      kk_std_core_hnd__marker m0 = _con613->marker;
      kk_box_t _box_x526 = _con613->hnd;
      kk_main__hnd_emit h = kk_main__hnd_emit_unbox(_box_x526, NULL);
      kk_main__hnd_emit_dup(h);
      kk_std_core_hnd__clause1 _match_596;
      kk_std_core_hnd__clause1 _brw_597 = kk_main__select_emit(h, _ctx); /*std/core/hnd/clause1<int,(),.hnd-emit,102,103>*/;
      kk_main__hnd_emit_drop(h, _ctx);
      _match_596 = _brw_597; /*std/core/hnd/clause1<int,(),.hnd-emit,102,103>*/
      {
        kk_function_t _fun_unbox_x530 = _match_596.clause;
        kk_box_t _x615;
        kk_integer_t _x616 = kk_integer_dup(l0); /*int*/
        _x615 = kk_integer_box(_x616); /*1009*/
        _x612 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x530, (_fun_unbox_x530, m0, ev_495, _x615, _ctx)); /*1010*/
      }
    }
    kk_unit_unbox(_x612);
    if (kk_yielding(kk_context())) {
      kk_box_t _x617 = kk_std_core_hnd_yield_extend(kk_main_new_range_fun618(l0, u0, _ctx), _ctx); /*1001*/
      kk_unit_unbox(_x617); return kk_Unit;
    }
    { // tailcall
      kk_integer_t _x620 = kk_integer_add_small_const(l0, 1, _ctx); /*int*/
      l0 = _x620;
      goto kk__tailcall;
    }
  }
}


// lift anonymous function
struct kk_main_run_fun626__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_main_run_fun626(kk_function_t _fself, kk_std_core_hnd__marker _b_549, kk_std_core_hnd__ev _b_550, kk_box_t _b_551, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun626(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_main_run_fun626__t* _self = kk_function_alloc_as(struct kk_main_run_fun626__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun626, kk_context());
  _self->loc = loc;
  return &_self->_base;
}

static kk_box_t kk_main_run_fun626(kk_function_t _fself, kk_std_core_hnd__marker _b_549, kk_std_core_hnd__ev _b_550, kk_box_t _b_551, kk_context_t* _ctx) {
  struct kk_main_run_fun626__t* _self = kk_function_as(struct kk_main_run_fun626__t*, _fself);
  kk_ref_t loc = _self->loc; /* local-var<287,int> */
  kk_drop_match(_self, {kk_ref_dup(loc);}, {}, _ctx)
  kk_std_core_hnd__marker ___wildcard__522__14_575 = _b_549; /*std/core/hnd/marker<<local<287>,div>,int>*/;
  kk_std_core_hnd__ev ___wildcard__522__17_576 = _b_550; /*std/core/hnd/ev<.hnd-emit>*/;
  kk_std_core_hnd__ev_dropn(___wildcard__522__17_576, (KK_I32(3)), _ctx);
  kk_integer_t x_577 = kk_integer_unbox(_b_551); /*int*/;
  kk_integer_t x_369;
  kk_box_t _x627;
  kk_ref_t _x628 = kk_ref_dup(loc); /*local-var<287,int>*/
  _x627 = kk_ref_get(_x628,kk_context()); /*1000*/
  x_369 = kk_integer_unbox(_x627); /*int*/
  kk_integer_t _b_547_545 = kk_integer_add(x_369,x_577,kk_context()); /*int*/;
  kk_unit_t __ = kk_Unit;
  kk_unit_t _brw_593 = kk_Unit;
  kk_ref_set_borrow(loc,(kk_integer_box(_b_547_545)),kk_context());
  kk_ref_drop(loc, _ctx);
  _brw_593;
  return kk_unit_box(kk_Unit);
}


// lift anonymous function
struct kk_main_run_fun629__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_run_fun629(kk_function_t _fself, kk_box_t _b_560, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun629(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_run_fun629, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main_run_fun629(kk_function_t _fself, kk_box_t _b_560, kk_context_t* _ctx) {
  kk_unused(_fself);
  return _b_560;
}


// lift anonymous function
struct kk_main_run_fun631__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_integer_t n;
};
static kk_box_t kk_main_run_fun631(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun631(kk_ref_t loc, kk_integer_t n, kk_context_t* _ctx) {
  struct kk_main_run_fun631__t* _self = kk_function_alloc_as(struct kk_main_run_fun631__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun631, kk_context());
  _self->loc = loc;
  _self->n = n;
  return &_self->_base;
}



// lift anonymous function
struct kk_main_run_fun632__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_main_run_fun632(kk_function_t _fself, kk_box_t _b_554, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun632(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_main_run_fun632__t* _self = kk_function_alloc_as(struct kk_main_run_fun632__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun632, kk_context());
  _self->loc = loc;
  return &_self->_base;
}

static kk_box_t kk_main_run_fun632(kk_function_t _fself, kk_box_t _b_554, kk_context_t* _ctx) {
  struct kk_main_run_fun632__t* _self = kk_function_as(struct kk_main_run_fun632__t*, _fself);
  kk_ref_t loc = _self->loc; /* local-var<287,int> */
  kk_drop_match(_self, {kk_ref_dup(loc);}, {}, _ctx)
  kk_box_drop(_b_554, _ctx);
  return kk_ref_get(loc,kk_context());
}
static kk_box_t kk_main_run_fun631(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_main_run_fun631__t* _self = kk_function_as(struct kk_main_run_fun631__t*, _fself);
  kk_ref_t loc = _self->loc; /* local-var<287,int> */
  kk_integer_t n = _self->n; /* int */
  kk_drop_match(_self, {kk_ref_dup(loc);kk_integer_dup(n);}, {}, _ctx)
  kk_unit_t x0_501 = kk_Unit;
  kk_main_range(kk_integer_from_small(0), n, _ctx);
  if (kk_yielding(kk_context())) {
    return kk_std_core_hnd_yield_extend(kk_main_new_run_fun632(loc, _ctx), _ctx);
  }
  {
    return kk_ref_get(loc,kk_context());
  }
}

kk_integer_t kk_main_run(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> div int */ 
  kk_ref_t loc = kk_ref_alloc((kk_integer_box(kk_integer_from_small(0))),kk_context()); /*local-var<287,int>*/;
  int32_t _b_561_556 = (KK_I32(1)); /*int32*/;
  kk_integer_t res;
  kk_box_t _x622;
  kk_main__hnd_emit _x623;
  kk_std_core_hnd__clause1 _x624;
  kk_function_t _x625;
  kk_ref_dup(loc);
  _x625 = kk_main_new_run_fun626(loc, _ctx); /*(std/core/hnd/marker<1018,1019>, std/core/hnd/ev<1017>, 1015) -> 1018 1016*/
  _x624 = kk_std_core_hnd__new_Clause1(_x625, _ctx); /*std/core/hnd/clause1<1015,1016,1017,1018,1019>*/
  _x623 = kk_main__new_Hnd_emit(kk_reuse_null, _x624, _ctx); /*.hnd-emit<7,8>*/
  kk_function_t _x630;
  kk_ref_dup(loc);
  _x630 = kk_main_new_run_fun631(loc, n, _ctx); /*() -> <emit|85> 1001*/
  _x622 = kk_main__handle_emit(_b_561_556, _x623, kk_main_new_run_fun629(_ctx), _x630, _ctx); /*86*/
  res = kk_integer_unbox(_x622); /*int*/
  kk_box_t _x633 = kk_std_core_hnd_prompt_local_var(loc, kk_integer_box(res), _ctx); /*1001*/
  return kk_integer_unbox(_x633);
}

kk_unit_t kk_main_main(kk_context_t* _ctx) { /* () -> <console,div,ndet> () */ 
  bool is_node;
  kk_string_t _x634 = kk_std_core_host(_ctx); /*string*/
  kk_string_t _x635;
  kk_define_string_literal(, _s636, 4, "node")
  _x635 = kk_string_dup(_s636); /*string*/
  is_node = kk_string_is_eq(_x634,_x635,kk_context()); /*bool*/
  kk_std_core__list xs_374;
  kk_std_core__list _match_591;
  kk_box_t _x637;
  kk_std_core__delayed _x638 = kk_std_core__delayed_dup(kk_std_os_env_argv); /*delayed<ndet,list<string>>*/
  _x637 = kk_std_core_force(_x638, _ctx); /*1001*/
  _match_591 = kk_std_core__list_unbox(_x637, _ctx); /*list<string>*/
  if (kk_std_core__is_Cons(_match_591)) {
    struct kk_std_core_Cons* _con640 = kk_std_core__as_Cons(_match_591);
    kk_box_t _box_x579 = _con640->head;
    kk_std_core__list xx = _con640->tail;
    kk_string_t x1 = kk_string_unbox(_box_x579);
    bool _x642;
    if (is_node) {
      kk_string_t _x643;
      kk_std_os_path__path _x644;
      kk_string_t _x645 = kk_string_dup(x1); /*string*/
      _x644 = kk_std_os_path_path(_x645, _ctx); /*std/os/path/path*/
      _x643 = kk_std_os_path_stemname(_x644, _ctx); /*string*/
      kk_string_t _x646;
      kk_define_string_literal(, _s647, 4, "node")
      _x646 = kk_string_dup(_s647); /*string*/
      _x642 = kk_string_is_eq(_x643,_x646,kk_context()); /*bool*/
    }
    else {
      _x642 = false; /*bool*/
    }
    if (_x642) {
      if (kk_likely(kk_std_core__list_is_unique(_match_591))) {
        kk_box_drop(_box_x579, _ctx);
        kk_std_core__list_free(_match_591, _ctx);
      }
      else {
        kk_std_core__list_dup(xx);
        kk_std_core__list_decref(_match_591, _ctx);
      }
      xs_374 = kk_std_core_drop(xx, kk_integer_from_small(1), _ctx); /*list<string>*/
      goto _match639;
    }
  }
  {
    xs_374 = kk_std_core_drop(_match_591, kk_integer_from_small(1), _ctx); /*list<string>*/
  }
  _match639: ;
  kk_std_core_types__optional default0_372 = kk_std_core_types__new_Optional(kk_integer_box(kk_integer_from_small(5)), _ctx); /*optional<int>*/;
  kk_integer_t n;
  bool _match_589;
  kk_string_t _x648;
  if (kk_std_core__is_Cons(xs_374)) {
    struct kk_std_core_Cons* _con649 = kk_std_core__as_Cons(xs_374);
    kk_box_t _box_x583 = _con649->head;
    kk_string_t x0 = kk_string_unbox(_box_x583);
    kk_string_dup(x0);
    _x648 = x0; /*string*/
  }
  else {
    _x648 = kk_string_empty(); /*string*/
  }
  kk_string_t _x652 = kk_string_empty(); /*string*/
  _match_589 = kk_string_is_eq(_x648,_x652,kk_context()); /*bool*/
  if (_match_589) {
    kk_std_core__list_drop(xs_374, _ctx);
    if (kk_std_core_types__is_Optional(default0_372)) {
      kk_box_t _box_x584 = default0_372._cons.Optional.value;
      kk_integer_t _default_15556 = kk_integer_unbox(_box_x584);
      n = _default_15556; /*int*/
    }
    else {
      n = kk_integer_from_small(0); /*int*/
    }
  }
  else {
    kk_std_core_types__maybe m_17212;
    kk_string_t _x655;
    kk_string_t _x656;
    kk_string_t _x657;
    if (kk_std_core__is_Cons(xs_374)) {
      struct kk_std_core_Cons* _con658 = kk_std_core__as_Cons(xs_374);
      kk_box_t _box_x585 = _con658->head;
      kk_std_core__list _pat010 = _con658->tail;
      kk_string_t x00 = kk_string_unbox(_box_x585);
      if (kk_likely(kk_std_core__list_is_unique(xs_374))) {
        kk_std_core__list_drop(_pat010, _ctx);
        kk_std_core__list_free(xs_374, _ctx);
      }
      else {
        kk_string_dup(x00);
        kk_std_core__list_decref(xs_374, _ctx);
      }
      _x657 = x00; /*string*/
    }
    else {
      _x657 = kk_string_empty(); /*string*/
    }
    _x656 = kk_string_trim_left(_x657,kk_context()); /*string*/
    _x655 = kk_string_trim_right(_x656,kk_context()); /*string*/
    bool _x661;
    kk_std_core_types__optional _x662 = kk_std_core_types__new_None(_ctx); /*forall<a> optional<a>*/
    if (kk_std_core_types__is_Optional(_x662)) {
      kk_box_t _box_x586 = _x662._cons.Optional.value;
      bool _hex_15560 = kk_bool_unbox(_box_x586);
      _x661 = _hex_15560; /*bool*/
    }
    else {
      _x661 = false; /*bool*/
    }
    m_17212 = kk_std_core_xparse_int(_x655, _x661, _ctx); /*maybe<int>*/
    if (kk_std_core_types__is_Nothing(m_17212)) {
      if (kk_std_core_types__is_Optional(default0_372)) {
        kk_box_t _box_x587 = default0_372._cons.Optional.value;
        kk_integer_t _default_155560 = kk_integer_unbox(_box_x587);
        n = _default_155560; /*int*/
      }
      else {
        n = kk_integer_from_small(0); /*int*/
      }
    }
    else {
      kk_box_t _box_x588 = m_17212._cons.Just.value;
      kk_integer_t x = kk_integer_unbox(_box_x588);
      kk_std_core_types__optional_drop(default0_372, _ctx);
      n = x; /*int*/
    }
  }
  kk_integer_t r = kk_main_run(n, _ctx); /*int*/;
  kk_string_t _x666 = kk_std_core_show(r, _ctx); /*string*/
  kk_std_core_printsln(_x666, _ctx); return kk_Unit;
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
    kk_string_t _x602;
    kk_define_string_literal(, _s603, 9, "emit.main")
    _x602 = kk_string_dup(_s603); /*string*/
    kk_main__tag_emit = kk_std_core_hnd__new_Htag(_x602, _ctx); /*std/core/hnd/htag<.hnd-emit>*/
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
  kk_std_core_hnd__htag_drop(kk_main__tag_emit, _ctx);
  kk_std_os_env__done(_ctx);
  kk_std_os_path__done(_ctx);
  kk_std_core__done(_ctx);
  kk_std_core_hnd__done(_ctx);
  kk_std_core_types__done(_ctx);
}
