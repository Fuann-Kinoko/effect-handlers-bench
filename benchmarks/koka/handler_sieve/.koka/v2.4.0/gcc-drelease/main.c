// Koka generated module: "main", koka version: 2.4.0, platform: 64-bit
#include "main.h"
 
// runtime tag for the `:prime` effect

kk_std_core_hnd__htag kk_main__tag_prime;
 
// handler for the `:prime` effect

kk_box_t kk_main__handle_prime(int32_t cfc, kk_main__hnd_prime hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (cfc : int32, hnd : .hnd-prime<e,b>, ret : (res : a) -> e b, action : () -> <prime|e> a) -> e b */ 
  kk_std_core_hnd__htag _x761 = kk_std_core_hnd__htag_dup(kk_main__tag_prime); /*std/core/hnd/htag<.hnd-prime>*/
  return kk_std_core_hnd__hhandle(_x761, cfc, kk_main__hnd_prime_box(hnd, _ctx), ret, action, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift542_primes_fun768__t {
  struct kk_function_s _base;
  kk_integer_t i;
};
static bool kk_main__mlift542_primes_fun768(kk_function_t _fself, kk_std_core_hnd__marker ___wildcard__519__14, kk_std_core_hnd__ev ev, kk_integer_t x, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift542_primes_fun768(kk_integer_t i, kk_context_t* _ctx) {
  struct kk_main__mlift542_primes_fun768__t* _self = kk_function_alloc_as(struct kk_main__mlift542_primes_fun768__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift542_primes_fun768, kk_context());
  _self->i = i;
  return &_self->_base;
}



// lift anonymous function
struct kk_main__mlift542_primes_fun776__t {
  struct kk_function_s _base;
  kk_std_core_hnd__ev ev;
};
static kk_box_t kk_main__mlift542_primes_fun776(kk_function_t _fself, kk_function_t _b_607, kk_box_t _b_608, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift542_primes_fun776(kk_std_core_hnd__ev ev, kk_context_t* _ctx) {
  struct kk_main__mlift542_primes_fun776__t* _self = kk_function_alloc_as(struct kk_main__mlift542_primes_fun776__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift542_primes_fun776, kk_context());
  _self->ev = ev;
  return &_self->_base;
}



// lift anonymous function
struct kk_main__mlift542_primes_fun777__t {
  struct kk_function_s _base;
  kk_function_t _b_607;
};
static bool kk_main__mlift542_primes_fun777(kk_function_t _fself, kk_box_t _b_609, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift542_primes_fun777(kk_function_t _b_607, kk_context_t* _ctx) {
  struct kk_main__mlift542_primes_fun777__t* _self = kk_function_alloc_as(struct kk_main__mlift542_primes_fun777__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift542_primes_fun777, kk_context());
  _self->_b_607 = _b_607;
  return &_self->_base;
}

static bool kk_main__mlift542_primes_fun777(kk_function_t _fself, kk_box_t _b_609, kk_context_t* _ctx) {
  struct kk_main__mlift542_primes_fun777__t* _self = kk_function_as(struct kk_main__mlift542_primes_fun777__t*, _fself);
  kk_function_t _b_607 = _self->_b_607; /* (1003) -> 1001 1000 */
  kk_drop_match(_self, {kk_function_dup(_b_607);}, {}, _ctx)
  kk_box_t _x778 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _b_607, (_b_607, _b_609, _ctx)); /*1000*/
  return kk_bool_unbox(_x778);
}


// lift anonymous function
struct kk_main__mlift542_primes_fun779__t {
  struct kk_function_s _base;
  kk_function_t _b_634_603;
};
static kk_box_t kk_main__mlift542_primes_fun779(kk_function_t _fself, kk_box_t _b_605, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift542_primes_fun779(kk_function_t _b_634_603, kk_context_t* _ctx) {
  struct kk_main__mlift542_primes_fun779__t* _self = kk_function_alloc_as(struct kk_main__mlift542_primes_fun779__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift542_primes_fun779, kk_context());
  _self->_b_634_603 = _b_634_603;
  return &_self->_base;
}

static kk_box_t kk_main__mlift542_primes_fun779(kk_function_t _fself, kk_box_t _b_605, kk_context_t* _ctx) {
  struct kk_main__mlift542_primes_fun779__t* _self = kk_function_as(struct kk_main__mlift542_primes_fun779__t*, _fself);
  kk_function_t _b_634_603 = _self->_b_634_603; /* (1012) -> <prime,div> bool */
  kk_drop_match(_self, {kk_function_dup(_b_634_603);}, {}, _ctx)
  bool _x780 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_context_t*), _b_634_603, (_b_634_603, _b_605, _ctx)); /*bool*/
  return kk_bool_box(_x780);
}
static kk_box_t kk_main__mlift542_primes_fun776(kk_function_t _fself, kk_function_t _b_607, kk_box_t _b_608, kk_context_t* _ctx) {
  struct kk_main__mlift542_primes_fun776__t* _self = kk_function_as(struct kk_main__mlift542_primes_fun776__t*, _fself);
  kk_std_core_hnd__ev ev = _self->ev; /* std/core/hnd/ev<.hnd-prime> */
  kk_drop_match(_self, {kk_std_core_hnd__ev_dup(ev);}, {}, _ctx)
  kk_function_t cont_640 = kk_main__new_mlift542_primes_fun777(_b_607, _ctx); /*(1012) -> <prime,div> bool*/;
  kk_box_t res_641 = _b_608; /*1012*/;
  kk_std_core_hnd__ev _b_633_602 = ev; /*std/core/hnd/ev<.hnd-prime>*/;
  kk_function_t _b_634_603 = cont_640; /*(1012) -> <prime,div> bool*/;
  kk_box_t _b_635_604 = res_641; /*1012*/;
  return kk_std_core_hnd_under1x(_b_633_602, kk_main__new_mlift542_primes_fun779(_b_634_603, _ctx), _b_635_604, _ctx);
}
static bool kk_main__mlift542_primes_fun768(kk_function_t _fself, kk_std_core_hnd__marker ___wildcard__519__14, kk_std_core_hnd__ev ev, kk_integer_t x, kk_context_t* _ctx) {
  struct kk_main__mlift542_primes_fun768__t* _self = kk_function_as(struct kk_main__mlift542_primes_fun768__t*, _fself);
  kk_integer_t i = _self->i; /* int */
  kk_drop_match(_self, {kk_integer_dup(i);}, {}, _ctx)
  kk_evv_t w0;
  kk_std_core_hnd__ev _x769 = kk_std_core_hnd__ev_dup(ev); /*std/core/hnd/ev<.hnd-prime>*/
  w0 = kk_std_core_hnd_evv_swap_with(_x769, _ctx); /*std/core/hnd/evv<std/core/hnd/_e1>*/
  bool y;
  bool _match_750;
  kk_integer_t _brw_753;
  kk_integer_t _x770 = kk_integer_dup(x); /*int*/
  _brw_753 = kk_integer_mod(_x770,i,kk_context()); /*int*/
  bool _brw_754 = kk_integer_eq_borrow(_brw_753,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_753, _ctx);
  _match_750 = _brw_754; /*bool*/
  if (_match_750) {
    kk_integer_drop(x, _ctx);
    y = false; /*bool*/
  }
  else {
    kk_std_core_hnd__ev ev0_548;
    kk_ssize_t _x771 = (KK_IZ(0)); /*ssize_t*/
    ev0_548 = kk_evv_at(_x771,kk_context()); /*std/core/hnd/ev<.hnd-prime>*/
    kk_box_t _x772;
    {
      struct kk_std_core_hnd_Ev* _con773 = kk_std_core_hnd__as_Ev(ev0_548);
      kk_std_core_hnd__marker m0 = _con773->marker;
      kk_box_t _box_x594 = _con773->hnd;
      kk_main__hnd_prime h = kk_main__hnd_prime_unbox(_box_x594, NULL);
      kk_main__hnd_prime_dup(h);
      kk_std_core_hnd__clause1 _match_751;
      kk_std_core_hnd__clause1 _brw_752 = kk_main__select_prime(h, _ctx); /*std/core/hnd/clause1<int,bool,.hnd-prime,100,101>*/;
      kk_main__hnd_prime_drop(h, _ctx);
      _match_751 = _brw_752; /*std/core/hnd/clause1<int,bool,.hnd-prime,100,101>*/
      {
        kk_function_t _fun_unbox_x598 = _match_751.clause;
        _x772 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x598, (_fun_unbox_x598, m0, ev0_548, kk_integer_box(x), _ctx)); /*1010*/
      }
    }
    y = kk_bool_unbox(_x772); /*bool*/
  }
  if (kk_yielding(kk_context())) {
    kk_evv_drop(w0, _ctx);
    kk_box_t _x775 = kk_std_core_hnd_yield_cont(kk_main__new_mlift542_primes_fun776(ev, _ctx), _ctx); /*1002*/
    return kk_bool_unbox(_x775);
  }
  {
    kk_std_core_hnd__ev_dropn(ev, (KK_I32(3)), _ctx);
    kk_evv_set(w0,kk_context());
    return y;
  }
}


// lift anonymous function
struct kk_main__mlift542_primes_fun783__t {
  struct kk_function_s _base;
  kk_function_t _b_631_610;
};
static kk_box_t kk_main__mlift542_primes_fun783(kk_function_t _fself, kk_std_core_hnd__marker _b_611, kk_std_core_hnd__ev _b_612, kk_box_t _b_613, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift542_primes_fun783(kk_function_t _b_631_610, kk_context_t* _ctx) {
  struct kk_main__mlift542_primes_fun783__t* _self = kk_function_alloc_as(struct kk_main__mlift542_primes_fun783__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift542_primes_fun783, kk_context());
  _self->_b_631_610 = _b_631_610;
  return &_self->_base;
}

static kk_box_t kk_main__mlift542_primes_fun783(kk_function_t _fself, kk_std_core_hnd__marker _b_611, kk_std_core_hnd__ev _b_612, kk_box_t _b_613, kk_context_t* _ctx) {
  struct kk_main__mlift542_primes_fun783__t* _self = kk_function_as(struct kk_main__mlift542_primes_fun783__t*, _fself);
  kk_function_t _b_631_610 = _self->_b_631_610; /* (std/core/hnd/marker<<prime,div>,int>, ev : std/core/hnd/ev<.hnd-prime>, x : int) -> <prime,div> bool */
  kk_drop_match(_self, {kk_function_dup(_b_631_610);}, {}, _ctx)
  bool _x784;
  kk_integer_t _x785 = kk_integer_unbox(_b_613); /*int*/
  _x784 = kk_function_call(bool, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_integer_t, kk_context_t*), _b_631_610, (_b_631_610, _b_611, _b_612, _x785, _ctx)); /*bool*/
  return kk_bool_box(_x784);
}


// lift anonymous function
struct kk_main__mlift542_primes_fun786__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main__mlift542_primes_fun786(kk_function_t _fself, kk_box_t _b_626, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift542_primes_fun786(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift542_primes_fun786, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main__mlift542_primes_fun786(kk_function_t _fself, kk_box_t _b_626, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_642 = kk_integer_unbox(_b_626); /*int*/;
  return kk_integer_box(_x_642);
}


// lift anonymous function
struct kk_main__mlift542_primes_fun787__t {
  struct kk_function_s _base;
  kk_integer_t a;
  kk_integer_t i;
  kk_integer_t n;
};
static kk_box_t kk_main__mlift542_primes_fun787(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift542_primes_fun787(kk_integer_t a, kk_integer_t i, kk_integer_t n, kk_context_t* _ctx) {
  struct kk_main__mlift542_primes_fun787__t* _self = kk_function_alloc_as(struct kk_main__mlift542_primes_fun787__t, 4, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift542_primes_fun787, kk_context());
  _self->a = a;
  _self->i = i;
  _self->n = n;
  return &_self->_base;
}



// lift anonymous function
struct kk_main__mlift542_primes_fun791__t {
  struct kk_function_s _base;
  kk_ssize_t i0_551;
};
static kk_box_t kk_main__mlift542_primes_fun791(kk_function_t _fself, kk_function_t _b_619, kk_box_t _b_620, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift542_primes_fun791(kk_ssize_t i0_551, kk_context_t* _ctx) {
  struct kk_main__mlift542_primes_fun791__t* _self = kk_function_alloc_as(struct kk_main__mlift542_primes_fun791__t, 1, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift542_primes_fun791, kk_context());
  _self->i0_551 = i0_551;
  return &_self->_base;
}



// lift anonymous function
struct kk_main__mlift542_primes_fun792__t {
  struct kk_function_s _base;
  kk_function_t _b_619;
};
static kk_integer_t kk_main__mlift542_primes_fun792(kk_function_t _fself, kk_box_t _b_621, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift542_primes_fun792(kk_function_t _b_619, kk_context_t* _ctx) {
  struct kk_main__mlift542_primes_fun792__t* _self = kk_function_alloc_as(struct kk_main__mlift542_primes_fun792__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift542_primes_fun792, kk_context());
  _self->_b_619 = _b_619;
  return &_self->_base;
}

static kk_integer_t kk_main__mlift542_primes_fun792(kk_function_t _fself, kk_box_t _b_621, kk_context_t* _ctx) {
  struct kk_main__mlift542_primes_fun792__t* _self = kk_function_as(struct kk_main__mlift542_primes_fun792__t*, _fself);
  kk_function_t _b_619 = _self->_b_619; /* (1003) -> 1001 1000 */
  kk_drop_match(_self, {kk_function_dup(_b_619);}, {}, _ctx)
  kk_box_t _x793 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _b_619, (_b_619, _b_621, _ctx)); /*1000*/
  return kk_integer_unbox(_x793);
}


// lift anonymous function
struct kk_main__mlift542_primes_fun794__t {
  struct kk_function_s _base;
  kk_function_t _b_638_615;
};
static kk_box_t kk_main__mlift542_primes_fun794(kk_function_t _fself, kk_box_t _b_617, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift542_primes_fun794(kk_function_t _b_638_615, kk_context_t* _ctx) {
  struct kk_main__mlift542_primes_fun794__t* _self = kk_function_alloc_as(struct kk_main__mlift542_primes_fun794__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift542_primes_fun794, kk_context());
  _self->_b_638_615 = _b_638_615;
  return &_self->_base;
}

static kk_box_t kk_main__mlift542_primes_fun794(kk_function_t _fself, kk_box_t _b_617, kk_context_t* _ctx) {
  struct kk_main__mlift542_primes_fun794__t* _self = kk_function_as(struct kk_main__mlift542_primes_fun794__t*, _fself);
  kk_function_t _b_638_615 = _self->_b_638_615; /* (1015) -> <div,prime,prime> int */
  kk_drop_match(_self, {kk_function_dup(_b_638_615);}, {}, _ctx)
  kk_integer_t _x795 = kk_function_call(kk_integer_t, (kk_function_t, kk_box_t, kk_context_t*), _b_638_615, (_b_638_615, _b_617, _ctx)); /*int*/
  return kk_integer_box(_x795);
}
static kk_box_t kk_main__mlift542_primes_fun791(kk_function_t _fself, kk_function_t _b_619, kk_box_t _b_620, kk_context_t* _ctx) {
  struct kk_main__mlift542_primes_fun791__t* _self = kk_function_as(struct kk_main__mlift542_primes_fun791__t*, _fself);
  kk_ssize_t i0_551 = _self->i0_551; /* std/core/hnd/ev-index */
  kk_drop_match(_self, {;}, {}, _ctx)
  kk_function_t cont0_643 = kk_main__new_mlift542_primes_fun792(_b_619, _ctx); /*(1015) -> <div,prime,prime> int*/;
  kk_box_t res0_644 = _b_620; /*1015*/;
  kk_ssize_t _b_637_614 = i0_551; /*std/core/hnd/ev-index*/;
  kk_function_t _b_638_615 = cont0_643; /*(1015) -> <div,prime,prime> int*/;
  kk_box_t _b_639_616 = res0_644; /*1015*/;
  return kk_std_core_hnd_open_at1(_b_637_614, kk_main__new_mlift542_primes_fun794(_b_638_615, _ctx), _b_639_616, _ctx);
}
static kk_box_t kk_main__mlift542_primes_fun787(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_main__mlift542_primes_fun787__t* _self = kk_function_as(struct kk_main__mlift542_primes_fun787__t*, _fself);
  kk_integer_t a = _self->a; /* int */
  kk_integer_t i = _self->i; /* int */
  kk_integer_t n = _self->n; /* int */
  kk_drop_match(_self, {kk_integer_dup(a);kk_integer_dup(i);kk_integer_dup(n);}, {}, _ctx)
  kk_integer_t _x1_539;
  kk_integer_t _x788 = kk_integer_dup(i); /*int*/
  _x1_539 = kk_integer_add_small_const(_x788, 1, _ctx); /*int*/
  kk_integer_t _x3_541 = kk_integer_add(a,i,kk_context()); /*int*/;
  kk_ssize_t i0_551 = (KK_IZ(0)); /*std/core/hnd/ev-index*/;
  kk_evv_t w = kk_evv_swap_create1(i0_551,kk_context()); /*std/core/hnd/evv<<div,prime,prime>>*/;
  kk_integer_t y0 = kk_main_primes(_x1_539, n, _x3_541, _ctx); /*int*/;
  kk_evv_set(w,kk_context());
  kk_integer_t _x789;
  if (kk_yielding(kk_context())) {
    kk_integer_drop(y0, _ctx);
    kk_box_t _x790 = kk_std_core_hnd_yield_cont(kk_main__new_mlift542_primes_fun791(i0_551, _ctx), _ctx); /*1002*/
    _x789 = kk_integer_unbox(_x790); /*int*/
  }
  else {
    _x789 = y0; /*int*/
  }
  return kk_integer_box(_x789);
}

kk_integer_t kk_main__mlift542_primes(kk_integer_t a, kk_integer_t i, kk_integer_t n, bool _y_523, kk_context_t* _ctx) { /* (a : int, i : int, n : int, bool) -> prime int */ 
  if (_y_523) {
    int32_t _b_627_622 = (KK_I32(1)); /*int32*/;
    kk_box_t _x767;
    kk_function_t _b_631_610;
    kk_integer_dup(i);
    _b_631_610 = kk_main__new_mlift542_primes_fun768(i, _ctx); /*(std/core/hnd/marker<<prime,div>,int>, ev : std/core/hnd/ev<.hnd-prime>, x : int) -> <prime,div> bool*/
    kk_main__hnd_prime _x781;
    kk_std_core_hnd__clause1 _x782 = kk_std_core_hnd__new_Clause1(kk_main__new_mlift542_primes_fun783(_b_631_610, _ctx), _ctx); /*std/core/hnd/clause1<1015,1016,1017,1018,1019>*/
    _x781 = kk_main__new_Hnd_prime(kk_reuse_null, _x782, _ctx); /*.hnd-prime<7,8>*/
    _x767 = kk_main__handle_prime(_b_627_622, _x781, kk_main__new_mlift542_primes_fun786(_ctx), kk_main__new_mlift542_primes_fun787(a, i, n, _ctx), _ctx); /*84*/
    return kk_integer_unbox(_x767);
  }
  {
    kk_integer_t _x796 = kk_integer_add_small_const(i, 1, _ctx); /*int*/
    return kk_main_primes(_x796, n, a, _ctx);
  }
}


// lift anonymous function
struct kk_main_primes_fun804__t {
  struct kk_function_s _base;
  kk_integer_t a0;
  kk_integer_t i1;
  kk_integer_t n0;
};
static kk_box_t kk_main_primes_fun804(kk_function_t _fself, kk_box_t _b_654, kk_context_t* _ctx);
static kk_function_t kk_main_new_primes_fun804(kk_integer_t a0, kk_integer_t i1, kk_integer_t n0, kk_context_t* _ctx) {
  struct kk_main_primes_fun804__t* _self = kk_function_alloc_as(struct kk_main_primes_fun804__t, 4, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_primes_fun804, kk_context());
  _self->a0 = a0;
  _self->i1 = i1;
  _self->n0 = n0;
  return &_self->_base;
}

static kk_box_t kk_main_primes_fun804(kk_function_t _fself, kk_box_t _b_654, kk_context_t* _ctx) {
  struct kk_main_primes_fun804__t* _self = kk_function_as(struct kk_main_primes_fun804__t*, _fself);
  kk_integer_t a0 = _self->a0; /* int */
  kk_integer_t i1 = _self->i1; /* int */
  kk_integer_t n0 = _self->n0; /* int */
  kk_drop_match(_self, {kk_integer_dup(a0);kk_integer_dup(i1);kk_integer_dup(n0);}, {}, _ctx)
  bool _y_702_5230 = kk_bool_unbox(_b_654); /*bool*/;
  kk_integer_t _x805 = kk_main__mlift542_primes(a0, i1, n0, _y_702_5230, _ctx); /*int*/
  return kk_integer_box(_x805);
}


// lift anonymous function
struct kk_main_primes_fun807__t {
  struct kk_function_s _base;
  kk_integer_t i1;
};
static bool kk_main_primes_fun807(kk_function_t _fself, kk_std_core_hnd__marker ___wildcard__519__140, kk_std_core_hnd__ev ev2, kk_integer_t x6, kk_context_t* _ctx);
static kk_function_t kk_main_new_primes_fun807(kk_integer_t i1, kk_context_t* _ctx) {
  struct kk_main_primes_fun807__t* _self = kk_function_alloc_as(struct kk_main_primes_fun807__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_primes_fun807, kk_context());
  _self->i1 = i1;
  return &_self->_base;
}



// lift anonymous function
struct kk_main_primes_fun815__t {
  struct kk_function_s _base;
  kk_std_core_hnd__ev ev2;
};
static kk_box_t kk_main_primes_fun815(kk_function_t _fself, kk_function_t _b_668, kk_box_t _b_669, kk_context_t* _ctx);
static kk_function_t kk_main_new_primes_fun815(kk_std_core_hnd__ev ev2, kk_context_t* _ctx) {
  struct kk_main_primes_fun815__t* _self = kk_function_alloc_as(struct kk_main_primes_fun815__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_primes_fun815, kk_context());
  _self->ev2 = ev2;
  return &_self->_base;
}



// lift anonymous function
struct kk_main_primes_fun816__t {
  struct kk_function_s _base;
  kk_function_t _b_668;
};
static bool kk_main_primes_fun816(kk_function_t _fself, kk_box_t _b_670, kk_context_t* _ctx);
static kk_function_t kk_main_new_primes_fun816(kk_function_t _b_668, kk_context_t* _ctx) {
  struct kk_main_primes_fun816__t* _self = kk_function_alloc_as(struct kk_main_primes_fun816__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_primes_fun816, kk_context());
  _self->_b_668 = _b_668;
  return &_self->_base;
}

static bool kk_main_primes_fun816(kk_function_t _fself, kk_box_t _b_670, kk_context_t* _ctx) {
  struct kk_main_primes_fun816__t* _self = kk_function_as(struct kk_main_primes_fun816__t*, _fself);
  kk_function_t _b_668 = _self->_b_668; /* (1003) -> 1001 1000 */
  kk_drop_match(_self, {kk_function_dup(_b_668);}, {}, _ctx)
  kk_box_t _x817 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _b_668, (_b_668, _b_670, _ctx)); /*1000*/
  return kk_bool_unbox(_x817);
}


// lift anonymous function
struct kk_main_primes_fun818__t {
  struct kk_function_s _base;
  kk_function_t _b_696_664;
};
static kk_box_t kk_main_primes_fun818(kk_function_t _fself, kk_box_t _b_666, kk_context_t* _ctx);
static kk_function_t kk_main_new_primes_fun818(kk_function_t _b_696_664, kk_context_t* _ctx) {
  struct kk_main_primes_fun818__t* _self = kk_function_alloc_as(struct kk_main_primes_fun818__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_primes_fun818, kk_context());
  _self->_b_696_664 = _b_696_664;
  return &_self->_base;
}

static kk_box_t kk_main_primes_fun818(kk_function_t _fself, kk_box_t _b_666, kk_context_t* _ctx) {
  struct kk_main_primes_fun818__t* _self = kk_function_as(struct kk_main_primes_fun818__t*, _fself);
  kk_function_t _b_696_664 = _self->_b_696_664; /* (1012) -> <prime,div> bool */
  kk_drop_match(_self, {kk_function_dup(_b_696_664);}, {}, _ctx)
  bool _x819 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_context_t*), _b_696_664, (_b_696_664, _b_666, _ctx)); /*bool*/
  return kk_bool_box(_x819);
}
static kk_box_t kk_main_primes_fun815(kk_function_t _fself, kk_function_t _b_668, kk_box_t _b_669, kk_context_t* _ctx) {
  struct kk_main_primes_fun815__t* _self = kk_function_as(struct kk_main_primes_fun815__t*, _fself);
  kk_std_core_hnd__ev ev2 = _self->ev2; /* std/core/hnd/ev<.hnd-prime> */
  kk_drop_match(_self, {kk_std_core_hnd__ev_dup(ev2);}, {}, _ctx)
  kk_function_t cont1_703 = kk_main_new_primes_fun816(_b_668, _ctx); /*(1012) -> <prime,div> bool*/;
  kk_box_t res1_704 = _b_669; /*1012*/;
  kk_std_core_hnd__ev _b_695_663 = ev2; /*std/core/hnd/ev<.hnd-prime>*/;
  kk_function_t _b_696_664 = cont1_703; /*(1012) -> <prime,div> bool*/;
  kk_box_t _b_697_665 = res1_704; /*1012*/;
  return kk_std_core_hnd_under1x(_b_695_663, kk_main_new_primes_fun818(_b_696_664, _ctx), _b_697_665, _ctx);
}
static bool kk_main_primes_fun807(kk_function_t _fself, kk_std_core_hnd__marker ___wildcard__519__140, kk_std_core_hnd__ev ev2, kk_integer_t x6, kk_context_t* _ctx) {
  struct kk_main_primes_fun807__t* _self = kk_function_as(struct kk_main_primes_fun807__t*, _fself);
  kk_integer_t i1 = _self->i1; /* int */
  kk_drop_match(_self, {kk_integer_dup(i1);}, {}, _ctx)
  kk_evv_t w00;
  kk_std_core_hnd__ev _x808 = kk_std_core_hnd__ev_dup(ev2); /*std/core/hnd/ev<.hnd-prime>*/
  w00 = kk_std_core_hnd_evv_swap_with(_x808, _ctx); /*std/core/hnd/evv<std/core/hnd/_e1>*/
  bool y1;
  bool _match_741;
  kk_integer_t _brw_744;
  kk_integer_t _x809 = kk_integer_dup(x6); /*int*/
  _brw_744 = kk_integer_mod(_x809,i1,kk_context()); /*int*/
  bool _brw_745 = kk_integer_eq_borrow(_brw_744,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_744, _ctx);
  _match_741 = _brw_745; /*bool*/
  if (_match_741) {
    kk_integer_drop(x6, _ctx);
    y1 = false; /*bool*/
  }
  else {
    kk_std_core_hnd__ev ev3_563;
    kk_ssize_t _x810 = (KK_IZ(0)); /*ssize_t*/
    ev3_563 = kk_evv_at(_x810,kk_context()); /*std/core/hnd/ev<.hnd-prime>*/
    kk_box_t _x811;
    {
      struct kk_std_core_hnd_Ev* _con812 = kk_std_core_hnd__as_Ev(ev3_563);
      kk_std_core_hnd__marker m01 = _con812->marker;
      kk_box_t _box_x655 = _con812->hnd;
      kk_main__hnd_prime h1 = kk_main__hnd_prime_unbox(_box_x655, NULL);
      kk_main__hnd_prime_dup(h1);
      kk_std_core_hnd__clause1 _match_742;
      kk_std_core_hnd__clause1 _brw_743 = kk_main__select_prime(h1, _ctx); /*std/core/hnd/clause1<int,bool,.hnd-prime,100,101>*/;
      kk_main__hnd_prime_drop(h1, _ctx);
      _match_742 = _brw_743; /*std/core/hnd/clause1<int,bool,.hnd-prime,100,101>*/
      {
        kk_function_t _fun_unbox_x659 = _match_742.clause;
        _x811 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x659, (_fun_unbox_x659, m01, ev3_563, kk_integer_box(x6), _ctx)); /*1010*/
      }
    }
    y1 = kk_bool_unbox(_x811); /*bool*/
  }
  if (kk_yielding(kk_context())) {
    kk_evv_drop(w00, _ctx);
    kk_box_t _x814 = kk_std_core_hnd_yield_cont(kk_main_new_primes_fun815(ev2, _ctx), _ctx); /*1002*/
    return kk_bool_unbox(_x814);
  }
  {
    kk_std_core_hnd__ev_dropn(ev2, (KK_I32(3)), _ctx);
    kk_evv_set(w00,kk_context());
    return y1;
  }
}


// lift anonymous function
struct kk_main_primes_fun822__t {
  struct kk_function_s _base;
  kk_function_t _b_693_671;
};
static kk_box_t kk_main_primes_fun822(kk_function_t _fself, kk_std_core_hnd__marker _b_672, kk_std_core_hnd__ev _b_673, kk_box_t _b_674, kk_context_t* _ctx);
static kk_function_t kk_main_new_primes_fun822(kk_function_t _b_693_671, kk_context_t* _ctx) {
  struct kk_main_primes_fun822__t* _self = kk_function_alloc_as(struct kk_main_primes_fun822__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_primes_fun822, kk_context());
  _self->_b_693_671 = _b_693_671;
  return &_self->_base;
}

static kk_box_t kk_main_primes_fun822(kk_function_t _fself, kk_std_core_hnd__marker _b_672, kk_std_core_hnd__ev _b_673, kk_box_t _b_674, kk_context_t* _ctx) {
  struct kk_main_primes_fun822__t* _self = kk_function_as(struct kk_main_primes_fun822__t*, _fself);
  kk_function_t _b_693_671 = _self->_b_693_671; /* (std/core/hnd/marker<<prime,div>,int>, ev2 : std/core/hnd/ev<.hnd-prime>, x6 : int) -> <prime,div> bool */
  kk_drop_match(_self, {kk_function_dup(_b_693_671);}, {}, _ctx)
  bool _x823;
  kk_integer_t _x824 = kk_integer_unbox(_b_674); /*int*/
  _x823 = kk_function_call(bool, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_integer_t, kk_context_t*), _b_693_671, (_b_693_671, _b_672, _b_673, _x824, _ctx)); /*bool*/
  return kk_bool_box(_x823);
}


// lift anonymous function
struct kk_main_primes_fun825__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_primes_fun825(kk_function_t _fself, kk_box_t _b_687, kk_context_t* _ctx);
static kk_function_t kk_main_new_primes_fun825(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_primes_fun825, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main_primes_fun825(kk_function_t _fself, kk_box_t _b_687, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x0_705 = kk_integer_unbox(_b_687); /*int*/;
  return kk_integer_box(_x0_705);
}


// lift anonymous function
struct kk_main_primes_fun826__t {
  struct kk_function_s _base;
  kk_integer_t a0;
  kk_integer_t i1;
  kk_integer_t n0;
};
static kk_box_t kk_main_primes_fun826(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_primes_fun826(kk_integer_t a0, kk_integer_t i1, kk_integer_t n0, kk_context_t* _ctx) {
  struct kk_main_primes_fun826__t* _self = kk_function_alloc_as(struct kk_main_primes_fun826__t, 4, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_primes_fun826, kk_context());
  _self->a0 = a0;
  _self->i1 = i1;
  _self->n0 = n0;
  return &_self->_base;
}



// lift anonymous function
struct kk_main_primes_fun830__t {
  struct kk_function_s _base;
  kk_ssize_t i2_566;
};
static kk_box_t kk_main_primes_fun830(kk_function_t _fself, kk_function_t _b_680, kk_box_t _b_681, kk_context_t* _ctx);
static kk_function_t kk_main_new_primes_fun830(kk_ssize_t i2_566, kk_context_t* _ctx) {
  struct kk_main_primes_fun830__t* _self = kk_function_alloc_as(struct kk_main_primes_fun830__t, 1, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_primes_fun830, kk_context());
  _self->i2_566 = i2_566;
  return &_self->_base;
}



// lift anonymous function
struct kk_main_primes_fun831__t {
  struct kk_function_s _base;
  kk_function_t _b_680;
};
static kk_integer_t kk_main_primes_fun831(kk_function_t _fself, kk_box_t _b_682, kk_context_t* _ctx);
static kk_function_t kk_main_new_primes_fun831(kk_function_t _b_680, kk_context_t* _ctx) {
  struct kk_main_primes_fun831__t* _self = kk_function_alloc_as(struct kk_main_primes_fun831__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_primes_fun831, kk_context());
  _self->_b_680 = _b_680;
  return &_self->_base;
}

static kk_integer_t kk_main_primes_fun831(kk_function_t _fself, kk_box_t _b_682, kk_context_t* _ctx) {
  struct kk_main_primes_fun831__t* _self = kk_function_as(struct kk_main_primes_fun831__t*, _fself);
  kk_function_t _b_680 = _self->_b_680; /* (1003) -> 1001 1000 */
  kk_drop_match(_self, {kk_function_dup(_b_680);}, {}, _ctx)
  kk_box_t _x832 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _b_680, (_b_680, _b_682, _ctx)); /*1000*/
  return kk_integer_unbox(_x832);
}


// lift anonymous function
struct kk_main_primes_fun833__t {
  struct kk_function_s _base;
  kk_function_t _b_700_676;
};
static kk_box_t kk_main_primes_fun833(kk_function_t _fself, kk_box_t _b_678, kk_context_t* _ctx);
static kk_function_t kk_main_new_primes_fun833(kk_function_t _b_700_676, kk_context_t* _ctx) {
  struct kk_main_primes_fun833__t* _self = kk_function_alloc_as(struct kk_main_primes_fun833__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_primes_fun833, kk_context());
  _self->_b_700_676 = _b_700_676;
  return &_self->_base;
}

static kk_box_t kk_main_primes_fun833(kk_function_t _fself, kk_box_t _b_678, kk_context_t* _ctx) {
  struct kk_main_primes_fun833__t* _self = kk_function_as(struct kk_main_primes_fun833__t*, _fself);
  kk_function_t _b_700_676 = _self->_b_700_676; /* (1015) -> <div,prime,prime> int */
  kk_drop_match(_self, {kk_function_dup(_b_700_676);}, {}, _ctx)
  kk_integer_t _x834 = kk_function_call(kk_integer_t, (kk_function_t, kk_box_t, kk_context_t*), _b_700_676, (_b_700_676, _b_678, _ctx)); /*int*/
  return kk_integer_box(_x834);
}
static kk_box_t kk_main_primes_fun830(kk_function_t _fself, kk_function_t _b_680, kk_box_t _b_681, kk_context_t* _ctx) {
  struct kk_main_primes_fun830__t* _self = kk_function_as(struct kk_main_primes_fun830__t*, _fself);
  kk_ssize_t i2_566 = _self->i2_566; /* std/core/hnd/ev-index */
  kk_drop_match(_self, {;}, {}, _ctx)
  kk_function_t cont2_706 = kk_main_new_primes_fun831(_b_680, _ctx); /*(1015) -> <div,prime,prime> int*/;
  kk_box_t res2_707 = _b_681; /*1015*/;
  kk_ssize_t _b_699_675 = i2_566; /*std/core/hnd/ev-index*/;
  kk_function_t _b_700_676 = cont2_706; /*(1015) -> <div,prime,prime> int*/;
  kk_box_t _b_701_677 = res2_707; /*1015*/;
  return kk_std_core_hnd_open_at1(_b_699_675, kk_main_new_primes_fun833(_b_700_676, _ctx), _b_701_677, _ctx);
}
static kk_box_t kk_main_primes_fun826(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_main_primes_fun826__t* _self = kk_function_as(struct kk_main_primes_fun826__t*, _fself);
  kk_integer_t a0 = _self->a0; /* int */
  kk_integer_t i1 = _self->i1; /* int */
  kk_integer_t n0 = _self->n0; /* int */
  kk_drop_match(_self, {kk_integer_dup(a0);kk_integer_dup(i1);kk_integer_dup(n0);}, {}, _ctx)
  kk_integer_t _x1_5390;
  kk_integer_t _x827 = kk_integer_dup(i1); /*int*/
  _x1_5390 = kk_integer_add_small_const(_x827, 1, _ctx); /*int*/
  kk_integer_t _x3_5410 = kk_integer_add(a0,i1,kk_context()); /*int*/;
  kk_ssize_t i2_566 = (KK_IZ(0)); /*std/core/hnd/ev-index*/;
  kk_evv_t w1 = kk_evv_swap_create1(i2_566,kk_context()); /*std/core/hnd/evv<<div,prime,prime>>*/;
  kk_integer_t y2 = kk_main_primes(_x1_5390, n0, _x3_5410, _ctx); /*int*/;
  kk_evv_set(w1,kk_context());
  kk_integer_t _x828;
  if (kk_yielding(kk_context())) {
    kk_integer_drop(y2, _ctx);
    kk_box_t _x829 = kk_std_core_hnd_yield_cont(kk_main_new_primes_fun830(i2_566, _ctx), _ctx); /*1002*/
    _x828 = kk_integer_unbox(_x829); /*int*/
  }
  else {
    _x828 = y2; /*int*/
  }
  return kk_integer_box(_x828);
}

kk_integer_t kk_main_primes(kk_integer_t i1, kk_integer_t n0, kk_integer_t a0, kk_context_t* _ctx) { /* (i : int, n : int, a : int) -> <div,prime> int */ 
  kk__tailcall: ;
  bool _match_737 = kk_integer_gte_borrow(i1,n0,kk_context()); /*bool*/;
  if (_match_737) {
    kk_integer_drop(n0, _ctx);
    kk_integer_drop(i1, _ctx);
    return a0;
  }
  {
    kk_std_core_hnd__ev ev1_559;
    kk_ssize_t _x797 = (KK_IZ(0)); /*ssize_t*/
    ev1_559 = kk_evv_at(_x797,kk_context()); /*std/core/hnd/ev<.hnd-prime>*/
    bool x4_556;
    kk_box_t _x798;
    {
      struct kk_std_core_hnd_Ev* _con799 = kk_std_core_hnd__as_Ev(ev1_559);
      kk_std_core_hnd__marker m00 = _con799->marker;
      kk_box_t _box_x645 = _con799->hnd;
      kk_main__hnd_prime h0 = kk_main__hnd_prime_unbox(_box_x645, NULL);
      kk_main__hnd_prime_dup(h0);
      kk_std_core_hnd__clause1 _match_746;
      kk_std_core_hnd__clause1 _brw_747 = kk_main__select_prime(h0, _ctx); /*std/core/hnd/clause1<int,bool,.hnd-prime,100,101>*/;
      kk_main__hnd_prime_drop(h0, _ctx);
      _match_746 = _brw_747; /*std/core/hnd/clause1<int,bool,.hnd-prime,100,101>*/
      {
        kk_function_t _fun_unbox_x649 = _match_746.clause;
        kk_box_t _x801;
        kk_integer_t _x802 = kk_integer_dup(i1); /*int*/
        _x801 = kk_integer_box(_x802); /*1009*/
        _x798 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x649, (_fun_unbox_x649, m00, ev1_559, _x801, _ctx)); /*1010*/
      }
    }
    x4_556 = kk_bool_unbox(_x798); /*bool*/
    if (kk_yielding(kk_context())) {
      kk_box_t _x803 = kk_std_core_hnd_yield_extend(kk_main_new_primes_fun804(a0, i1, n0, _ctx), _ctx); /*1001*/
      return kk_integer_unbox(_x803);
    }
    if (x4_556) {
      int32_t _b_689_683 = (KK_I32(1)); /*int32*/;
      kk_box_t _x806;
      kk_function_t _b_693_671;
      kk_integer_dup(i1);
      _b_693_671 = kk_main_new_primes_fun807(i1, _ctx); /*(std/core/hnd/marker<<prime,div>,int>, ev2 : std/core/hnd/ev<.hnd-prime>, x6 : int) -> <prime,div> bool*/
      kk_main__hnd_prime _x820;
      kk_std_core_hnd__clause1 _x821 = kk_std_core_hnd__new_Clause1(kk_main_new_primes_fun822(_b_693_671, _ctx), _ctx); /*std/core/hnd/clause1<1015,1016,1017,1018,1019>*/
      _x820 = kk_main__new_Hnd_prime(kk_reuse_null, _x821, _ctx); /*.hnd-prime<7,8>*/
      _x806 = kk_main__handle_prime(_b_689_683, _x820, kk_main_new_primes_fun825(_ctx), kk_main_new_primes_fun826(a0, i1, n0, _ctx), _ctx); /*84*/
      return kk_integer_unbox(_x806);
    }
    { // tailcall
      kk_integer_t _x835 = kk_integer_add_small_const(i1, 1, _ctx); /*int*/
      i1 = _x835;
      goto kk__tailcall;
    }
  }
}


// lift anonymous function
struct kk_main_run_fun837__t {
  struct kk_function_s _base;
};
static bool kk_main_run_fun837(kk_function_t _fself, kk_std_core_hnd__marker ___wildcard__522__14, kk_std_core_hnd__ev ___wildcard__522__17, kk_integer_t x, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun837(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_run_fun837, _ctx)
  return kk_function_dup(_fself);
}

static bool kk_main_run_fun837(kk_function_t _fself, kk_std_core_hnd__marker ___wildcard__522__14, kk_std_core_hnd__ev ___wildcard__522__17, kk_integer_t x, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_hnd__ev_dropn(___wildcard__522__17, (KK_I32(3)), _ctx);
  kk_integer_drop(x, _ctx);
  return true;
}


// lift anonymous function
struct kk_main_run_fun840__t {
  struct kk_function_s _base;
  kk_function_t _b_721_708;
};
static kk_box_t kk_main_run_fun840(kk_function_t _fself, kk_std_core_hnd__marker _b_709, kk_std_core_hnd__ev _b_710, kk_box_t _b_711, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun840(kk_function_t _b_721_708, kk_context_t* _ctx) {
  struct kk_main_run_fun840__t* _self = kk_function_alloc_as(struct kk_main_run_fun840__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun840, kk_context());
  _self->_b_721_708 = _b_721_708;
  return &_self->_base;
}

static kk_box_t kk_main_run_fun840(kk_function_t _fself, kk_std_core_hnd__marker _b_709, kk_std_core_hnd__ev _b_710, kk_box_t _b_711, kk_context_t* _ctx) {
  struct kk_main_run_fun840__t* _self = kk_function_as(struct kk_main_run_fun840__t*, _fself);
  kk_function_t _b_721_708 = _self->_b_721_708; /* (std/core/hnd/marker<div,int>, std/core/hnd/ev<.hnd-prime>, x : int) -> div bool */
  kk_drop_match(_self, {kk_function_dup(_b_721_708);}, {}, _ctx)
  bool _x841;
  kk_integer_t _x842 = kk_integer_unbox(_b_711); /*int*/
  _x841 = kk_function_call(bool, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_integer_t, kk_context_t*), _b_721_708, (_b_721_708, _b_709, _b_710, _x842, _ctx)); /*bool*/
  return kk_bool_box(_x841);
}


// lift anonymous function
struct kk_main_run_fun843__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_run_fun843(kk_function_t _fself, kk_box_t _b_716, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun843(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_run_fun843, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main_run_fun843(kk_function_t _fself, kk_box_t _b_716, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_722 = kk_integer_unbox(_b_716); /*int*/;
  return kk_integer_box(_x_722);
}


// lift anonymous function
struct kk_main_run_fun844__t {
  struct kk_function_s _base;
  kk_integer_t n;
};
static kk_box_t kk_main_run_fun844(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_run_fun844(kk_integer_t n, kk_context_t* _ctx) {
  struct kk_main_run_fun844__t* _self = kk_function_alloc_as(struct kk_main_run_fun844__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_run_fun844, kk_context());
  _self->n = n;
  return &_self->_base;
}

static kk_box_t kk_main_run_fun844(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_main_run_fun844__t* _self = kk_function_as(struct kk_main_run_fun844__t*, _fself);
  kk_integer_t n = _self->n; /* int */
  kk_drop_match(_self, {kk_integer_dup(n);}, {}, _ctx)
  kk_integer_t _x845 = kk_main_primes(kk_integer_from_small(2), n, kk_integer_from_small(0), _ctx); /*int*/
  return kk_integer_box(_x845);
}

kk_integer_t kk_main_run(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> div int */ 
  int32_t _b_717_712 = (KK_I32(1)); /*int32*/;
  kk_box_t _x836;
  kk_function_t _b_721_708 = kk_main_new_run_fun837(_ctx); /*(std/core/hnd/marker<div,int>, std/core/hnd/ev<.hnd-prime>, x : int) -> div bool*/;
  kk_main__hnd_prime _x838;
  kk_std_core_hnd__clause1 _x839 = kk_std_core_hnd__new_Clause1(kk_main_new_run_fun840(_b_721_708, _ctx), _ctx); /*std/core/hnd/clause1<1015,1016,1017,1018,1019>*/
  _x838 = kk_main__new_Hnd_prime(kk_reuse_null, _x839, _ctx); /*.hnd-prime<7,8>*/
  _x836 = kk_main__handle_prime(_b_717_712, _x838, kk_main_new_run_fun843(_ctx), kk_main_new_run_fun844(n, _ctx), _ctx); /*84*/
  return kk_integer_unbox(_x836);
}

kk_unit_t kk_main_main(kk_context_t* _ctx) { /* () -> <console,div,ndet> () */ 
  bool is_node;
  kk_string_t _x846 = kk_std_core_host(_ctx); /*string*/
  kk_string_t _x847;
  kk_define_string_literal(, _s848, 4, "node")
  _x847 = kk_string_dup(_s848); /*string*/
  is_node = kk_string_is_eq(_x846,_x847,kk_context()); /*bool*/
  kk_std_core__list xs_418;
  kk_std_core__list _match_736;
  kk_box_t _x849;
  kk_std_core__delayed _x850 = kk_std_core__delayed_dup(kk_std_os_env_argv); /*delayed<ndet,list<string>>*/
  _x849 = kk_std_core_force(_x850, _ctx); /*1001*/
  _match_736 = kk_std_core__list_unbox(_x849, _ctx); /*list<string>*/
  if (kk_std_core__is_Cons(_match_736)) {
    struct kk_std_core_Cons* _con852 = kk_std_core__as_Cons(_match_736);
    kk_box_t _box_x724 = _con852->head;
    kk_std_core__list xx = _con852->tail;
    kk_string_t x1 = kk_string_unbox(_box_x724);
    bool _x854;
    if (is_node) {
      kk_string_t _x855;
      kk_std_os_path__path _x856;
      kk_string_t _x857 = kk_string_dup(x1); /*string*/
      _x856 = kk_std_os_path_path(_x857, _ctx); /*std/os/path/path*/
      _x855 = kk_std_os_path_stemname(_x856, _ctx); /*string*/
      kk_string_t _x858;
      kk_define_string_literal(, _s859, 4, "node")
      _x858 = kk_string_dup(_s859); /*string*/
      _x854 = kk_string_is_eq(_x855,_x858,kk_context()); /*bool*/
    }
    else {
      _x854 = false; /*bool*/
    }
    if (_x854) {
      if (kk_likely(kk_std_core__list_is_unique(_match_736))) {
        kk_box_drop(_box_x724, _ctx);
        kk_std_core__list_free(_match_736, _ctx);
      }
      else {
        kk_std_core__list_dup(xx);
        kk_std_core__list_decref(_match_736, _ctx);
      }
      xs_418 = kk_std_core_drop(xx, kk_integer_from_small(1), _ctx); /*list<string>*/
      goto _match851;
    }
  }
  {
    xs_418 = kk_std_core_drop(_match_736, kk_integer_from_small(1), _ctx); /*list<string>*/
  }
  _match851: ;
  kk_std_core_types__optional default0_416 = kk_std_core_types__new_Optional(kk_integer_box(kk_integer_from_small(10)), _ctx); /*optional<int>*/;
  kk_integer_t n;
  bool _match_734;
  kk_string_t _x860;
  if (kk_std_core__is_Cons(xs_418)) {
    struct kk_std_core_Cons* _con861 = kk_std_core__as_Cons(xs_418);
    kk_box_t _box_x728 = _con861->head;
    kk_string_t x0 = kk_string_unbox(_box_x728);
    kk_string_dup(x0);
    _x860 = x0; /*string*/
  }
  else {
    _x860 = kk_string_empty(); /*string*/
  }
  kk_string_t _x864 = kk_string_empty(); /*string*/
  _match_734 = kk_string_is_eq(_x860,_x864,kk_context()); /*bool*/
  if (_match_734) {
    kk_std_core__list_drop(xs_418, _ctx);
    if (kk_std_core_types__is_Optional(default0_416)) {
      kk_box_t _box_x729 = default0_416._cons.Optional.value;
      kk_integer_t _default_15556 = kk_integer_unbox(_box_x729);
      n = _default_15556; /*int*/
    }
    else {
      n = kk_integer_from_small(0); /*int*/
    }
  }
  else {
    kk_std_core_types__maybe m_17212;
    kk_string_t _x867;
    kk_string_t _x868;
    kk_string_t _x869;
    if (kk_std_core__is_Cons(xs_418)) {
      struct kk_std_core_Cons* _con870 = kk_std_core__as_Cons(xs_418);
      kk_box_t _box_x730 = _con870->head;
      kk_std_core__list _pat010 = _con870->tail;
      kk_string_t x00 = kk_string_unbox(_box_x730);
      if (kk_likely(kk_std_core__list_is_unique(xs_418))) {
        kk_std_core__list_drop(_pat010, _ctx);
        kk_std_core__list_free(xs_418, _ctx);
      }
      else {
        kk_string_dup(x00);
        kk_std_core__list_decref(xs_418, _ctx);
      }
      _x869 = x00; /*string*/
    }
    else {
      _x869 = kk_string_empty(); /*string*/
    }
    _x868 = kk_string_trim_left(_x869,kk_context()); /*string*/
    _x867 = kk_string_trim_right(_x868,kk_context()); /*string*/
    bool _x873;
    kk_std_core_types__optional _x874 = kk_std_core_types__new_None(_ctx); /*forall<a> optional<a>*/
    if (kk_std_core_types__is_Optional(_x874)) {
      kk_box_t _box_x731 = _x874._cons.Optional.value;
      bool _hex_15560 = kk_bool_unbox(_box_x731);
      _x873 = _hex_15560; /*bool*/
    }
    else {
      _x873 = false; /*bool*/
    }
    m_17212 = kk_std_core_xparse_int(_x867, _x873, _ctx); /*maybe<int>*/
    if (kk_std_core_types__is_Nothing(m_17212)) {
      if (kk_std_core_types__is_Optional(default0_416)) {
        kk_box_t _box_x732 = default0_416._cons.Optional.value;
        kk_integer_t _default_155560 = kk_integer_unbox(_box_x732);
        n = _default_155560; /*int*/
      }
      else {
        n = kk_integer_from_small(0); /*int*/
      }
    }
    else {
      kk_box_t _box_x733 = m_17212._cons.Just.value;
      kk_integer_t x = kk_integer_unbox(_box_x733);
      kk_std_core_types__optional_drop(default0_416, _ctx);
      n = x; /*int*/
    }
  }
  kk_integer_t r = kk_main_run(n, _ctx); /*int*/;
  kk_string_t _x878 = kk_std_core_show(r, _ctx); /*string*/
  kk_std_core_printsln(_x878, _ctx); return kk_Unit;
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
    kk_string_t _x759;
    kk_define_string_literal(, _s760, 10, "prime.main")
    _x759 = kk_string_dup(_s760); /*string*/
    kk_main__tag_prime = kk_std_core_hnd__new_Htag(_x759, _ctx); /*std/core/hnd/htag<.hnd-prime>*/
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
  kk_std_core_hnd__htag_drop(kk_main__tag_prime, _ctx);
  kk_std_os_env__done(_ctx);
  kk_std_os_path__done(_ctx);
  kk_std_core__done(_ctx);
  kk_std_core_hnd__done(_ctx);
  kk_std_core_types__done(_ctx);
}
