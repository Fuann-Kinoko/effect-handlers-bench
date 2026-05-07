// Koka generated module: "main", koka version: 2.4.0, platform: 64-bit
#include "main.h"
 
// runtime tag for the `:search` effect

kk_std_core_hnd__htag kk_main__tag_search;
 
// handler for the `:search` effect

kk_box_t kk_main__handle_search(int32_t cfc, kk_main__hnd_search hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (cfc : int32, hnd : .hnd-search<e,b>, ret : (res : a) -> e b, action : () -> <search|e> a) -> e b */ 
  kk_std_core_hnd__htag _x884 = kk_std_core_hnd__htag_dup(kk_main__tag_search); /*std/core/hnd/htag<.hnd-search>*/
  return kk_std_core_hnd__hhandle(_x884, cfc, kk_main__hnd_search_box(hnd, _ctx), ret, action, _ctx);
}

bool kk_main_safe(kk_integer_t queen, kk_integer_t diag, kk_std_core__list xs, kk_context_t* _ctx) { /* (queen : int, diag : int, xs : solution) -> bool */ 
  kk__tailcall: ;
  if (kk_std_core__is_Nil(xs)) {
    kk_integer_drop(queen, _ctx);
    kk_integer_drop(diag, _ctx);
    return true;
  }
  {
    struct kk_std_core_Cons* _con894 = kk_std_core__as_Cons(xs);
    kk_box_t _box_x752 = _con894->head;
    kk_std_core__list qs = _con894->tail;
    kk_integer_t q = kk_integer_unbox(_box_x752);
    if (kk_likely(kk_std_core__list_is_unique(xs))) {
      kk_std_core__list_free(xs, _ctx);
    }
    else {
      kk_integer_dup(q);
      kk_std_core__list_dup(qs);
      kk_std_core__list_decref(xs, _ctx);
    }
    bool _match_868 = kk_integer_neq_borrow(queen,q,kk_context()); /*bool*/;
    if (_match_868) {
      bool _match_869;
      kk_integer_t _brw_873;
      kk_integer_t _x896 = kk_integer_dup(q); /*int*/
      kk_integer_t _x897 = kk_integer_dup(diag); /*int*/
      _brw_873 = kk_integer_add(_x896,_x897,kk_context()); /*int*/
      bool _brw_874 = kk_integer_neq_borrow(queen,_brw_873,kk_context()); /*bool*/;
      kk_integer_drop(_brw_873, _ctx);
      _match_869 = _brw_874; /*bool*/
      if (_match_869) {
        bool _match_870;
        kk_integer_t _brw_871;
        kk_integer_t _x898 = kk_integer_dup(diag); /*int*/
        _brw_871 = kk_integer_sub(q,_x898,kk_context()); /*int*/
        bool _brw_872 = kk_integer_neq_borrow(queen,_brw_871,kk_context()); /*bool*/;
        kk_integer_drop(_brw_871, _ctx);
        _match_870 = _brw_872; /*bool*/
        if (_match_870) { // tailcall
                          kk_integer_t _x899 = kk_integer_add_small_const(diag, 1, _ctx); /*int*/
                          diag = _x899;
                          xs = qs;
                          goto kk__tailcall;
        }
        {
          kk_integer_drop(queen, _ctx);
          kk_std_core__list_drop(qs, _ctx);
          kk_integer_drop(diag, _ctx);
          return false;
        }
      }
      {
        kk_integer_drop(queen, _ctx);
        kk_std_core__list_drop(qs, _ctx);
        kk_integer_drop(q, _ctx);
        kk_integer_drop(diag, _ctx);
        return false;
      }
    }
    {
      kk_integer_drop(queen, _ctx);
      kk_std_core__list_drop(qs, _ctx);
      kk_integer_drop(q, _ctx);
      kk_integer_drop(diag, _ctx);
      return false;
    }
  }
}
 
// monadic lift

kk_std_core__list kk_main__mlift695_place(kk_std_core__list rest, kk_integer_t next, kk_context_t* _ctx) { /* (rest : solution, next : int) -> search list<int> */ 
  kk_evv_t w = kk_evv_swap_create0(kk_context()); /*std/core/hnd/evv<<search,div>>*/;
  bool x;
  kk_integer_t _x900 = kk_integer_dup(next); /*int*/
  kk_std_core__list _x901 = kk_std_core__list_dup(rest); /*solution*/
  x = kk_main_safe(_x900, kk_integer_from_small(1), _x901, _ctx); /*bool*/
  kk_unit_t keep = kk_Unit;
  kk_evv_set(w,kk_context());
  if (x) {
    return kk_std_core__new_Cons(kk_reuse_null, kk_integer_box(next), rest, _ctx);
  }
  {
    kk_std_core__list_drop(rest, _ctx);
    kk_integer_drop(next, _ctx);
    kk_std_core_hnd__ev ev_707;
    kk_ssize_t _x902 = (KK_IZ(0)); /*ssize_t*/
    ev_707 = kk_evv_at(_x902,kk_context()); /*std/core/hnd/ev<.hnd-search>*/
    kk_box_t _x903;
    {
      struct kk_std_core_hnd_Ev* _con904 = kk_std_core_hnd__as_Ev(ev_707);
      kk_std_core_hnd__marker m0 = _con904->marker;
      kk_box_t _box_x755 = _con904->hnd;
      kk_main__hnd_search h = kk_main__hnd_search_unbox(_box_x755, NULL);
      kk_main__hnd_search_dup(h);
      kk_std_core_hnd__clause0 _match_866;
      kk_std_core_hnd__clause0 _brw_867 = kk_main__select_fail(h, _ctx); /*std/core/hnd/clause0<135,.hnd-search,136,137>*/;
      kk_main__hnd_search_drop(h, _ctx);
      _match_866 = _brw_867; /*std/core/hnd/clause0<135,.hnd-search,136,137>*/
      {
        kk_function_t _fun_unbox_x758 = _match_866.clause;
        _x903 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x758, (_fun_unbox_x758, m0, ev_707, _ctx)); /*1005*/
      }
    }
    return kk_std_core__list_unbox(_x903, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift696_place_fun911__t {
  struct kk_function_s _base;
  kk_std_core__list rest0;
};
static kk_box_t kk_main__mlift696_place_fun911(kk_function_t _fself, kk_box_t _b_772, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift696_place_fun911(kk_std_core__list rest0, kk_context_t* _ctx) {
  struct kk_main__mlift696_place_fun911__t* _self = kk_function_alloc_as(struct kk_main__mlift696_place_fun911__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift696_place_fun911, kk_context());
  _self->rest0 = rest0;
  return &_self->_base;
}

static kk_box_t kk_main__mlift696_place_fun911(kk_function_t _fself, kk_box_t _b_772, kk_context_t* _ctx) {
  struct kk_main__mlift696_place_fun911__t* _self = kk_function_as(struct kk_main__mlift696_place_fun911__t*, _fself);
  kk_std_core__list rest0 = _self->rest0; /* solution */
  kk_drop_match(_self, {kk_std_core__list_dup(rest0);}, {}, _ctx)
  kk_integer_t next1_774 = kk_integer_unbox(_b_772); /*int*/;
  kk_std_core__list _x912 = kk_main__mlift695_place(rest0, next1_774, _ctx); /*list<int>*/
  return kk_std_core__list_box(_x912, _ctx);
}

kk_std_core__list kk_main__mlift696_place(kk_integer_t size, kk_std_core__list rest0, kk_context_t* _ctx) { /* (size : int, rest : solution) -> <div,search> list<int> */ 
  kk_std_core_hnd__ev ev0_711;
  kk_ssize_t _x906 = (KK_IZ(0)); /*ssize_t*/
  ev0_711 = kk_evv_at(_x906,kk_context()); /*std/core/hnd/ev<.hnd-search>*/
  kk_integer_t x0_709;
  kk_box_t _x907;
  {
    struct kk_std_core_hnd_Ev* _con908 = kk_std_core_hnd__as_Ev(ev0_711);
    kk_std_core_hnd__marker m00 = _con908->marker;
    kk_box_t _box_x763 = _con908->hnd;
    kk_main__hnd_search h0 = kk_main__hnd_search_unbox(_box_x763, NULL);
    kk_main__hnd_search_dup(h0);
    kk_std_core_hnd__clause1 _match_864;
    kk_std_core_hnd__clause1 _brw_865 = kk_main__select_pick(h0, _ctx); /*std/core/hnd/clause1<int,int,.hnd-search,153,154>*/;
    kk_main__hnd_search_drop(h0, _ctx);
    _match_864 = _brw_865; /*std/core/hnd/clause1<int,int,.hnd-search,153,154>*/
    {
      kk_function_t _fun_unbox_x767 = _match_864.clause;
      _x907 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x767, (_fun_unbox_x767, m00, ev0_711, kk_integer_box(size), _ctx)); /*1010*/
    }
  }
  x0_709 = kk_integer_unbox(_x907); /*int*/
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x0_709, _ctx);
    kk_box_t _x910 = kk_std_core_hnd_yield_extend(kk_main__new_mlift696_place_fun911(rest0, _ctx), _ctx); /*1001*/
    return kk_std_core__list_unbox(_x910, _ctx);
  }
  {
    return kk_main__mlift695_place(rest0, x0_709, _ctx);
  }
}


// lift anonymous function
struct kk_main_place_fun916__t {
  struct kk_function_s _base;
  kk_integer_t size0;
};
static kk_box_t kk_main_place_fun916(kk_function_t _fself, kk_box_t _b_776, kk_context_t* _ctx);
static kk_function_t kk_main_new_place_fun916(kk_integer_t size0, kk_context_t* _ctx) {
  struct kk_main_place_fun916__t* _self = kk_function_alloc_as(struct kk_main_place_fun916__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_place_fun916, kk_context());
  _self->size0 = size0;
  return &_self->_base;
}

static kk_box_t kk_main_place_fun916(kk_function_t _fself, kk_box_t _b_776, kk_context_t* _ctx) {
  struct kk_main_place_fun916__t* _self = kk_function_as(struct kk_main_place_fun916__t*, _fself);
  kk_integer_t size0 = _self->size0; /* int */
  kk_drop_match(_self, {kk_integer_dup(size0);}, {}, _ctx)
  kk_std_core__list rest1_799 = kk_std_core__list_unbox(_b_776, _ctx); /*solution*/;
  kk_std_core__list _x917 = kk_main__mlift696_place(size0, rest1_799, _ctx); /*list<int>*/
  return kk_std_core__list_box(_x917, _ctx);
}


// lift anonymous function
struct kk_main_place_fun923__t {
  struct kk_function_s _base;
  kk_std_core__list x5_714;
};
static kk_box_t kk_main_place_fun923(kk_function_t _fself, kk_box_t _b_786, kk_context_t* _ctx);
static kk_function_t kk_main_new_place_fun923(kk_std_core__list x5_714, kk_context_t* _ctx) {
  struct kk_main_place_fun923__t* _self = kk_function_alloc_as(struct kk_main_place_fun923__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_place_fun923, kk_context());
  _self->x5_714 = x5_714;
  return &_self->_base;
}

static kk_box_t kk_main_place_fun923(kk_function_t _fself, kk_box_t _b_786, kk_context_t* _ctx) {
  struct kk_main_place_fun923__t* _self = kk_function_as(struct kk_main_place_fun923__t*, _fself);
  kk_std_core__list x5_714 = _self->x5_714; /* solution */
  kk_drop_match(_self, {kk_std_core__list_dup(x5_714);}, {}, _ctx)
  kk_integer_t next4_800 = kk_integer_unbox(_b_786); /*int*/;
  kk_std_core__list _x924 = kk_main__mlift695_place(x5_714, next4_800, _ctx); /*list<int>*/
  return kk_std_core__list_box(_x924, _ctx);
}

kk_std_core__list kk_main_place(kk_integer_t size0, kk_integer_t column, kk_context_t* _ctx) { /* (size : int, column : int) -> <div,search> solution */ 
  bool _match_856 = kk_integer_eq_borrow(column,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_856) {
    kk_integer_drop(size0, _ctx);
    kk_integer_drop(column, _ctx);
    return kk_std_core__new_Nil(_ctx);
  }
  {
    kk_std_core__list x5_714;
    kk_integer_t _x913 = kk_integer_dup(size0); /*int*/
    kk_integer_t _x914 = kk_integer_add_small_const(column, -1, _ctx); /*int*/
    x5_714 = kk_main_place(_x913, _x914, _ctx); /*solution*/
    if (kk_yielding(kk_context())) {
      kk_std_core__list_drop(x5_714, _ctx);
      kk_box_t _x915 = kk_std_core_hnd_yield_extend(kk_main_new_place_fun916(size0, _ctx), _ctx); /*1001*/
      return kk_std_core__list_unbox(_x915, _ctx);
    }
    {
      kk_std_core_hnd__ev ev1_720;
      kk_ssize_t _x918 = (KK_IZ(0)); /*ssize_t*/
      ev1_720 = kk_evv_at(_x918,kk_context()); /*std/core/hnd/ev<.hnd-search>*/
      kk_integer_t x6_717;
      kk_box_t _x919;
      {
        struct kk_std_core_hnd_Ev* _con920 = kk_std_core_hnd__as_Ev(ev1_720);
        kk_std_core_hnd__marker m01 = _con920->marker;
        kk_box_t _box_x777 = _con920->hnd;
        kk_main__hnd_search h1 = kk_main__hnd_search_unbox(_box_x777, NULL);
        kk_main__hnd_search_dup(h1);
        kk_std_core_hnd__clause1 _match_861;
        kk_std_core_hnd__clause1 _brw_862 = kk_main__select_pick(h1, _ctx); /*std/core/hnd/clause1<int,int,.hnd-search,153,154>*/;
        kk_main__hnd_search_drop(h1, _ctx);
        _match_861 = _brw_862; /*std/core/hnd/clause1<int,int,.hnd-search,153,154>*/
        {
          kk_function_t _fun_unbox_x781 = _match_861.clause;
          _x919 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x781, (_fun_unbox_x781, m01, ev1_720, kk_integer_box(size0), _ctx)); /*1010*/
        }
      }
      x6_717 = kk_integer_unbox(_x919); /*int*/
      if (kk_yielding(kk_context())) {
        kk_integer_drop(x6_717, _ctx);
        kk_box_t _x922 = kk_std_core_hnd_yield_extend(kk_main_new_place_fun923(x5_714, _ctx), _ctx); /*1001*/
        return kk_std_core__list_unbox(_x922, _ctx);
      }
      {
        kk_evv_t w0 = kk_evv_swap_create0(kk_context()); /*std/core/hnd/evv<<search,div>>*/;
        bool x8;
        kk_integer_t _x925 = kk_integer_dup(x6_717); /*int*/
        kk_std_core__list _x926 = kk_std_core__list_dup(x5_714); /*solution*/
        x8 = kk_main_safe(_x925, kk_integer_from_small(1), _x926, _ctx); /*bool*/
        kk_unit_t keep0 = kk_Unit;
        kk_evv_set(w0,kk_context());
        if (x8) {
          return kk_std_core__new_Cons(kk_reuse_null, kk_integer_box(x6_717), x5_714, _ctx);
        }
        {
          kk_integer_drop(x6_717, _ctx);
          kk_std_core__list_drop(x5_714, _ctx);
          kk_std_core_hnd__ev ev2_727;
          kk_ssize_t _x927 = (KK_IZ(0)); /*ssize_t*/
          ev2_727 = kk_evv_at(_x927,kk_context()); /*std/core/hnd/ev<.hnd-search>*/
          kk_box_t _x928;
          {
            struct kk_std_core_hnd_Ev* _con929 = kk_std_core_hnd__as_Ev(ev2_727);
            kk_std_core_hnd__marker m02 = _con929->marker;
            kk_box_t _box_x789 = _con929->hnd;
            kk_main__hnd_search h2 = kk_main__hnd_search_unbox(_box_x789, NULL);
            kk_main__hnd_search_dup(h2);
            kk_std_core_hnd__clause0 _match_859;
            kk_std_core_hnd__clause0 _brw_860 = kk_main__select_fail(h2, _ctx); /*std/core/hnd/clause0<135,.hnd-search,136,137>*/;
            kk_main__hnd_search_drop(h2, _ctx);
            _match_859 = _brw_860; /*std/core/hnd/clause0<135,.hnd-search,136,137>*/
            {
              kk_function_t _fun_unbox_x792 = _match_859.clause;
              _x928 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x792, (_fun_unbox_x792, m02, ev2_727, _ctx)); /*1005*/
            }
          }
          return kk_std_core__list_unbox(_x928, _ctx);
        }
      }
    }
  }
}
 
// lifted local: run, loop

kk_integer_t kk_main__lift577_run(kk_function_t resume0, kk_integer_t size, kk_integer_t i, kk_integer_t a, kk_context_t* _ctx) { /* (resume0 : (int) -> div int, size : int, i : int, a : int) -> div int */ 
  kk__tailcall: ;
  bool _match_855 = kk_integer_eq_borrow(i,size,kk_context()); /*bool*/;
  if (_match_855) {
    kk_integer_drop(size, _ctx);
    kk_integer_t y_566 = kk_function_call(kk_integer_t, (kk_function_t, kk_integer_t, kk_context_t*), resume0, (resume0, i, _ctx)); /*int*/;
    return kk_integer_add(a,y_566,kk_context());
  }
  {
    kk_integer_t y1_570;
    kk_function_t _x932 = kk_function_dup(resume0); /*(int) -> div int*/
    kk_integer_t _x931 = kk_integer_dup(i); /*int*/
    y1_570 = kk_function_call(kk_integer_t, (kk_function_t, kk_integer_t, kk_context_t*), _x932, (_x932, _x931, _ctx)); /*int*/
    kk_integer_t i0_678 = kk_integer_add_small_const(i, 1, _ctx); /*int*/;
    kk_integer_t a0_679 = kk_integer_add(a,y1_570,kk_context()); /*int*/;
    { // tailcall
      i = i0_678;
      a = a0_679;
      goto kk__tailcall;
    }
  }
}


// lift anonymous function
struct kk_main_run_fun934__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_run_fun934(kk_function_t _fself, kk_function_t _b_802, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun934(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_run_fun934, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_main_run_fun936__t {
  struct kk_function_s _base;
  kk_function_t _b_802;
};
static kk_integer_t kk_main_run_fun936(kk_function_t _fself, kk_box_t _b_803, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun936(kk_function_t _b_802, kk_context_t* _ctx) {
  struct kk_main_run_fun936__t* _self = kk_function_alloc_as(struct kk_main_run_fun936__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun936, kk_context());
  _self->_b_802 = _b_802;
  return &_self->_base;
}

static kk_integer_t kk_main_run_fun936(kk_function_t _fself, kk_box_t _b_803, kk_context_t* _ctx) {
  struct kk_main_run_fun936__t* _self = kk_function_as(struct kk_main_run_fun936__t*, _fself);
  kk_function_t _b_802 = _self->_b_802; /* (1000) -> 1001 1003 */
  kk_drop_match(_self, {kk_function_dup(_b_802);}, {}, _ctx)
  kk_box_t _x937 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _b_802, (_b_802, _b_803, _ctx)); /*1003*/
  return kk_integer_unbox(_x937);
}
static kk_box_t kk_main_run_fun934(kk_function_t _fself, kk_function_t _b_802, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x935;
  kk_function_t resume_837 = kk_main_new_run_fun936(_b_802, _ctx); /*(396) -> div int*/;
  kk_function_drop(resume_837, _ctx);
  _x935 = kk_integer_from_small(0); /*int*/
  return kk_integer_box(_x935);
}


// lift anonymous function
struct kk_main_run_fun939__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_run_fun939(kk_function_t _fself, kk_std_core_hnd__marker _b_816, kk_std_core_hnd__ev _b_817, kk_box_t _b_818, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun939(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_run_fun939, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_main_run_fun942__t {
  struct kk_function_s _base;
  kk_integer_t x_840;
};
static kk_box_t kk_main_run_fun942(kk_function_t _fself, kk_function_t _b_813, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun942(kk_integer_t x_840, kk_context_t* _ctx) {
  struct kk_main_run_fun942__t* _self = kk_function_alloc_as(struct kk_main_run_fun942__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun942, kk_context());
  _self->x_840 = x_840;
  return &_self->_base;
}



// lift anonymous function
struct kk_main_run_fun943__t {
  struct kk_function_s _base;
  kk_function_t _b_813;
};
static kk_integer_t kk_main_run_fun943(kk_function_t _fself, kk_std_core_hnd__resume_result _b_814, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun943(kk_function_t _b_813, kk_context_t* _ctx) {
  struct kk_main_run_fun943__t* _self = kk_function_alloc_as(struct kk_main_run_fun943__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun943, kk_context());
  _self->_b_813 = _b_813;
  return &_self->_base;
}

static kk_integer_t kk_main_run_fun943(kk_function_t _fself, kk_std_core_hnd__resume_result _b_814, kk_context_t* _ctx) {
  struct kk_main_run_fun943__t* _self = kk_function_as(struct kk_main_run_fun943__t*, _fself);
  kk_function_t _b_813 = _self->_b_813; /* (std/core/hnd/resume-result<1000,1002>) -> 1001 1002 */
  kk_drop_match(_self, {kk_function_dup(_b_813);}, {}, _ctx)
  kk_box_t _x944 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__resume_result, kk_context_t*), _b_813, (_b_813, _b_814, _ctx)); /*1002*/
  return kk_integer_unbox(_x944);
}


// lift anonymous function
struct kk_main_run_fun945__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_main_run_fun945(kk_function_t _fself, kk_integer_t size, kk_function_t resume0, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun945(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_run_fun945, _ctx)
  return kk_function_dup(_fself);
}

static kk_integer_t kk_main_run_fun945(kk_function_t _fself, kk_integer_t size, kk_function_t resume0, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_main__lift577_run(resume0, size, kk_integer_from_small(1), kk_integer_from_small(0), _ctx);
}


// lift anonymous function
struct kk_main_run_fun946__t {
  struct kk_function_s _base;
  kk_function_t _b_833_805;
};
static kk_box_t kk_main_run_fun946(kk_function_t _fself, kk_box_t _b_807, kk_function_t _b_808, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun946(kk_function_t _b_833_805, kk_context_t* _ctx) {
  struct kk_main_run_fun946__t* _self = kk_function_alloc_as(struct kk_main_run_fun946__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun946, kk_context());
  _self->_b_833_805 = _b_833_805;
  return &_self->_base;
}



// lift anonymous function
struct kk_main_run_fun949__t {
  struct kk_function_s _base;
  kk_function_t _b_808;
};
static kk_integer_t kk_main_run_fun949(kk_function_t _fself, kk_integer_t _b_809, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun949(kk_function_t _b_808, kk_context_t* _ctx) {
  struct kk_main_run_fun949__t* _self = kk_function_alloc_as(struct kk_main_run_fun949__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun949, kk_context());
  _self->_b_808 = _b_808;
  return &_self->_base;
}

static kk_integer_t kk_main_run_fun949(kk_function_t _fself, kk_integer_t _b_809, kk_context_t* _ctx) {
  struct kk_main_run_fun949__t* _self = kk_function_as(struct kk_main_run_fun949__t*, _fself);
  kk_function_t _b_808 = _self->_b_808; /* (1001) -> 1002 1003 */
  kk_drop_match(_self, {kk_function_dup(_b_808);}, {}, _ctx)
  kk_box_t _x950 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _b_808, (_b_808, kk_integer_box(_b_809), _ctx)); /*1003*/
  return kk_integer_unbox(_x950);
}
static kk_box_t kk_main_run_fun946(kk_function_t _fself, kk_box_t _b_807, kk_function_t _b_808, kk_context_t* _ctx) {
  struct kk_main_run_fun946__t* _self = kk_function_as(struct kk_main_run_fun946__t*, _fself);
  kk_function_t _b_833_805 = _self->_b_833_805; /* (size : int, resume0 : (int) -> div int) -> div int */
  kk_drop_match(_self, {kk_function_dup(_b_833_805);}, {}, _ctx)
  kk_integer_t _x947;
  kk_integer_t _x948 = kk_integer_unbox(_b_807); /*int*/
  _x947 = kk_function_call(kk_integer_t, (kk_function_t, kk_integer_t, kk_function_t, kk_context_t*), _b_833_805, (_b_833_805, _x948, kk_main_new_run_fun949(_b_808, _ctx), _ctx)); /*int*/
  return kk_integer_box(_x947);
}


// lift anonymous function
struct kk_main_run_fun951__t {
  struct kk_function_s _base;
  kk_function_t _b_834_806;
};
static kk_box_t kk_main_run_fun951(kk_function_t _fself, kk_std_core_hnd__resume_result _b_810, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun951(kk_function_t _b_834_806, kk_context_t* _ctx) {
  struct kk_main_run_fun951__t* _self = kk_function_alloc_as(struct kk_main_run_fun951__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun951, kk_context());
  _self->_b_834_806 = _b_834_806;
  return &_self->_base;
}

static kk_box_t kk_main_run_fun951(kk_function_t _fself, kk_std_core_hnd__resume_result _b_810, kk_context_t* _ctx) {
  struct kk_main_run_fun951__t* _self = kk_function_as(struct kk_main_run_fun951__t*, _fself);
  kk_function_t _b_834_806 = _self->_b_834_806; /* (std/core/hnd/resume-result<int,int>) -> div int */
  kk_drop_match(_self, {kk_function_dup(_b_834_806);}, {}, _ctx)
  kk_integer_t _x952 = kk_function_call(kk_integer_t, (kk_function_t, kk_std_core_hnd__resume_result, kk_context_t*), _b_834_806, (_b_834_806, _b_810, _ctx)); /*int*/
  return kk_integer_box(_x952);
}
static kk_box_t kk_main_run_fun942(kk_function_t _fself, kk_function_t _b_813, kk_context_t* _ctx) {
  struct kk_main_run_fun942__t* _self = kk_function_as(struct kk_main_run_fun942__t*, _fself);
  kk_integer_t x_840 = _self->x_840; /* int */
  kk_drop_match(_self, {kk_integer_dup(x_840);}, {}, _ctx)
  kk_function_t k0_835 = kk_main_new_run_fun943(_b_813, _ctx); /*(std/core/hnd/resume-result<int,int>) -> div int*/;
  kk_integer_t _b_832_804 = x_840; /*int*/;
  kk_function_t _b_833_805 = kk_main_new_run_fun945(_ctx); /*(size : int, resume0 : (int) -> div int) -> div int*/;
  kk_function_t _b_834_806 = k0_835; /*(std/core/hnd/resume-result<int,int>) -> div int*/;
  return kk_std_core_hnd_protect(kk_integer_box(_b_832_804), kk_main_new_run_fun946(_b_833_805, _ctx), kk_main_new_run_fun951(_b_834_806, _ctx), _ctx);
}
static kk_box_t kk_main_run_fun939(kk_function_t _fself, kk_std_core_hnd__marker _b_816, kk_std_core_hnd__ev _b_817, kk_box_t _b_818, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x940;
  kk_std_core_hnd__marker m0_838 = _b_816; /*std/core/hnd/marker<div,int>*/;
  kk_std_core_hnd__ev ___wildcard__516__16_839 = _b_817; /*std/core/hnd/ev<.hnd-search>*/;
  kk_std_core_hnd__ev_dropn(___wildcard__516__16_839, (KK_I32(3)), _ctx);
  kk_integer_t x_840 = kk_integer_unbox(_b_818); /*int*/;
  kk_box_t _x941 = kk_std_core_hnd_yield_to(m0_838, kk_main_new_run_fun942(x_840, _ctx), _ctx); /*1000*/
  _x940 = kk_integer_unbox(_x941); /*int*/
  return kk_integer_box(_x940);
}


// lift anonymous function
struct kk_main_run_fun954__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_run_fun954(kk_function_t _fself, kk_box_t _b_823, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun954(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_run_fun954, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main_run_fun954(kk_function_t _fself, kk_box_t _b_823, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list __w_l30_c12_836 = kk_std_core__list_unbox(_b_823, _ctx); /*solution*/;
  kk_std_core__list_drop(__w_l30_c12_836, _ctx);
  return kk_integer_box(kk_integer_from_small(1));
}


// lift anonymous function
struct kk_main_run_fun955__t {
  struct kk_function_s _base;
  kk_integer_t n;
};
static kk_box_t kk_main_run_fun955(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun955(kk_integer_t n, kk_context_t* _ctx) {
  struct kk_main_run_fun955__t* _self = kk_function_alloc_as(struct kk_main_run_fun955__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun955, kk_context());
  _self->n = n;
  return &_self->_base;
}

static kk_box_t kk_main_run_fun955(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_main_run_fun955__t* _self = kk_function_as(struct kk_main_run_fun955__t*, _fself);
  kk_integer_t n = _self->n; /* int */
  kk_drop_match(_self, {kk_integer_dup(n);}, {}, _ctx)
  kk_std_core__list _x956;
  kk_integer_t _x957 = kk_integer_dup(n); /*int*/
  _x956 = kk_main_place(_x957, n, _ctx); /*solution*/
  return kk_std_core__list_box(_x956, _ctx);
}

kk_integer_t kk_main_run(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> div int */ 
  int32_t _b_824_819 = (KK_I32(3)); /*int32*/;
  kk_main__hnd_search _b_825_820;
  kk_std_core_hnd__clause0 _x933 = kk_std_core_hnd_clause_control0(kk_main_new_run_fun934(_ctx), _ctx); /*std/core/hnd/clause0<1000,1002,1001,1003>*/
  kk_std_core_hnd__clause1 _x938 = kk_std_core_hnd__new_Clause1(kk_main_new_run_fun939(_ctx), _ctx); /*std/core/hnd/clause1<1015,1016,1017,1018,1019>*/
  _b_825_820 = kk_main__new_Hnd_search(kk_reuse_null, _x933, _x938, _ctx); /*.hnd-search<div,int>*/
  kk_box_t _x953 = kk_main__handle_search(_b_824_819, _b_825_820, kk_main_new_run_fun954(_ctx), kk_main_new_run_fun955(n, _ctx), _ctx); /*115*/
  return kk_integer_unbox(_x953);
}

kk_unit_t kk_main_main(kk_context_t* _ctx) { /* () -> <console,div,ndet> () */ 
  bool is_node;
  kk_string_t _x958 = kk_std_core_host(_ctx); /*string*/
  kk_string_t _x959;
  kk_define_string_literal(, _s960, 4, "node")
  _x959 = kk_string_dup(_s960); /*string*/
  is_node = kk_string_is_eq(_x958,_x959,kk_context()); /*bool*/
  kk_std_core__list xs_574;
  kk_std_core__list _match_854;
  kk_box_t _x961;
  kk_std_core__delayed _x962 = kk_std_core__delayed_dup(kk_std_os_env_argv); /*delayed<ndet,list<string>>*/
  _x961 = kk_std_core_force(_x962, _ctx); /*1001*/
  _match_854 = kk_std_core__list_unbox(_x961, _ctx); /*list<string>*/
  if (kk_std_core__is_Cons(_match_854)) {
    struct kk_std_core_Cons* _con964 = kk_std_core__as_Cons(_match_854);
    kk_box_t _box_x842 = _con964->head;
    kk_std_core__list xx = _con964->tail;
    kk_string_t x1 = kk_string_unbox(_box_x842);
    bool _x966;
    if (is_node) {
      kk_string_t _x967;
      kk_std_os_path__path _x968;
      kk_string_t _x969 = kk_string_dup(x1); /*string*/
      _x968 = kk_std_os_path_path(_x969, _ctx); /*std/os/path/path*/
      _x967 = kk_std_os_path_stemname(_x968, _ctx); /*string*/
      kk_string_t _x970;
      kk_define_string_literal(, _s971, 4, "node")
      _x970 = kk_string_dup(_s971); /*string*/
      _x966 = kk_string_is_eq(_x967,_x970,kk_context()); /*bool*/
    }
    else {
      _x966 = false; /*bool*/
    }
    if (_x966) {
      if (kk_likely(kk_std_core__list_is_unique(_match_854))) {
        kk_box_drop(_box_x842, _ctx);
        kk_std_core__list_free(_match_854, _ctx);
      }
      else {
        kk_std_core__list_dup(xx);
        kk_std_core__list_decref(_match_854, _ctx);
      }
      xs_574 = kk_std_core_drop(xx, kk_integer_from_small(1), _ctx); /*list<string>*/
      goto _match963;
    }
  }
  {
    xs_574 = kk_std_core_drop(_match_854, kk_integer_from_small(1), _ctx); /*list<string>*/
  }
  _match963: ;
  kk_std_core_types__optional default0_572 = kk_std_core_types__new_Optional(kk_integer_box(kk_integer_from_small(5)), _ctx); /*optional<int>*/;
  kk_integer_t n;
  bool _match_852;
  kk_string_t _x972;
  if (kk_std_core__is_Cons(xs_574)) {
    struct kk_std_core_Cons* _con973 = kk_std_core__as_Cons(xs_574);
    kk_box_t _box_x846 = _con973->head;
    kk_string_t x0 = kk_string_unbox(_box_x846);
    kk_string_dup(x0);
    _x972 = x0; /*string*/
  }
  else {
    _x972 = kk_string_empty(); /*string*/
  }
  kk_string_t _x976 = kk_string_empty(); /*string*/
  _match_852 = kk_string_is_eq(_x972,_x976,kk_context()); /*bool*/
  if (_match_852) {
    kk_std_core__list_drop(xs_574, _ctx);
    if (kk_std_core_types__is_Optional(default0_572)) {
      kk_box_t _box_x847 = default0_572._cons.Optional.value;
      kk_integer_t _default_15556 = kk_integer_unbox(_box_x847);
      n = _default_15556; /*int*/
    }
    else {
      n = kk_integer_from_small(0); /*int*/
    }
  }
  else {
    kk_std_core_types__maybe m_17212;
    kk_string_t _x979;
    kk_string_t _x980;
    kk_string_t _x981;
    if (kk_std_core__is_Cons(xs_574)) {
      struct kk_std_core_Cons* _con982 = kk_std_core__as_Cons(xs_574);
      kk_box_t _box_x848 = _con982->head;
      kk_std_core__list _pat010 = _con982->tail;
      kk_string_t x00 = kk_string_unbox(_box_x848);
      if (kk_likely(kk_std_core__list_is_unique(xs_574))) {
        kk_std_core__list_drop(_pat010, _ctx);
        kk_std_core__list_free(xs_574, _ctx);
      }
      else {
        kk_string_dup(x00);
        kk_std_core__list_decref(xs_574, _ctx);
      }
      _x981 = x00; /*string*/
    }
    else {
      _x981 = kk_string_empty(); /*string*/
    }
    _x980 = kk_string_trim_left(_x981,kk_context()); /*string*/
    _x979 = kk_string_trim_right(_x980,kk_context()); /*string*/
    bool _x985;
    kk_std_core_types__optional _x986 = kk_std_core_types__new_None(_ctx); /*forall<a> optional<a>*/
    if (kk_std_core_types__is_Optional(_x986)) {
      kk_box_t _box_x849 = _x986._cons.Optional.value;
      bool _hex_15560 = kk_bool_unbox(_box_x849);
      _x985 = _hex_15560; /*bool*/
    }
    else {
      _x985 = false; /*bool*/
    }
    m_17212 = kk_std_core_xparse_int(_x979, _x985, _ctx); /*maybe<int>*/
    if (kk_std_core_types__is_Nothing(m_17212)) {
      if (kk_std_core_types__is_Optional(default0_572)) {
        kk_box_t _box_x850 = default0_572._cons.Optional.value;
        kk_integer_t _default_155560 = kk_integer_unbox(_box_x850);
        n = _default_155560; /*int*/
      }
      else {
        n = kk_integer_from_small(0); /*int*/
      }
    }
    else {
      kk_box_t _box_x851 = m_17212._cons.Just.value;
      kk_integer_t x = kk_integer_unbox(_box_x851);
      kk_std_core_types__optional_drop(default0_572, _ctx);
      n = x; /*int*/
    }
  }
  kk_integer_t r = kk_main_run(n, _ctx); /*int*/;
  kk_string_t _x990 = kk_std_core_show(r, _ctx); /*string*/
  kk_std_core_printsln(_x990, _ctx); return kk_Unit;
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
    kk_string_t _x882;
    kk_define_string_literal(, _s883, 11, "search.main")
    _x882 = kk_string_dup(_s883); /*string*/
    kk_main__tag_search = kk_std_core_hnd__new_Htag(_x882, _ctx); /*std/core/hnd/htag<.hnd-search>*/
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
  kk_std_core_hnd__htag_drop(kk_main__tag_search, _ctx);
  kk_std_os_env__done(_ctx);
  kk_std_os_path__done(_ctx);
  kk_std_core__done(_ctx);
  kk_std_core_hnd__done(_ctx);
  kk_std_core_types__done(_ctx);
}
