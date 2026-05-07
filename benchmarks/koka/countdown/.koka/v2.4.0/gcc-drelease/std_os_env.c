// Koka generated module: "std/os/env", koka version: 2.4.0, platform: 64-bit
#include "std_os_env.h"

kk_vector_t kk_std_os_env_os_get_argv(kk_context_t* _ctx) { /* () -> ndet vector<string> */ 
  return kk_os_get_argv(kk_context());
}

kk_vector_t kk_std_os_env_os_get_env(kk_context_t* _ctx) { /* () -> ndet vector<string> */ 
  return kk_os_get_env(kk_context());
}
 
// The backend compiler name.

kk_string_t kk_std_os_env_get_cc_name(kk_context_t* _ctx) { /* () -> ndet string */ 
  return kk_cc_name(kk_context());
}
 
// The current compiler version.

kk_string_t kk_std_os_env_get_compiler_version(kk_context_t* _ctx) { /* () -> ndet string */ 
  return kk_compiler_version(kk_context());
}
 
// Return the processor maximum address size in bits (`8*sizeof(void*)`). This is usually
// equal to the `get-cpu-arch-bits` but may be different on segmented architectures.

kk_integer_t kk_std_os_env_get_cpu_address_bits(kk_context_t* _ctx) { /* () -> ndet int */ 
  return kk_integer_from_size_t(CHAR_BIT*sizeof(void*),kk_context());
}
 
// Return the main processor architecture: x64, x86, arm64, arm, riscv32, riscv64, alpha, ppc64, etc.

kk_string_t kk_std_os_env_get_cpu_arch(kk_context_t* _ctx) { /* () -> ndet string */ 
  return kk_cpu_arch(kk_context());
}
 
// Return the processor architecture natural machine word size in bits.
//
// Note: Usually this equals the `get-cpu-object-bits` and `get-cpu-address-bits` on modern cpu's
// but they can differ on segmented architectures.
// For example, on the old x86 FAR-NEAR model, the addresses are 32-bit but the maximum object size is 16-bit.
// Or on the more recent-[x32 ABI](https://en.wikipedia.org/wiki/X32_ABI)
// the addresses and objects are 32-bits but the architecture has 64-bit registers.

kk_integer_t kk_std_os_env_get_cpu_arch_bits(kk_context_t* _ctx) { /* () -> ndet int */ 
  return kk_integer_from_size_t(CHAR_BIT*(sizeof(size_t) > sizeof(long) ? sizeof(size_t) : sizeof(long)),kk_context());
}
 
// Return the available CPU's.
// This is the logical core count including hyper-threaded cores.

kk_integer_t kk_std_os_env_get_cpu_count(kk_context_t* _ctx) { /* () -> ndet int */ 
  return kk_integer_from_int(kk_cpu_count(kk_context()),kk_context());
}
 
// Is the byte-order little-endian?
// If not, it is big-endian; other byte orders are not supported.

bool kk_std_os_env_get_cpu_is_little_endian(kk_context_t* _ctx) { /* () -> ndet bool */ 
  return kk_cpu_is_little_endian(kk_context());
}
 
// Return the processor maximum object size in bits (`8*sizeof(size_t)`). This is usually
// equal to the `get-cpu-arch-bits` but may be different on segmented architectures.

kk_integer_t kk_std_os_env_get_cpu_object_bits(kk_context_t* _ctx) { /* () -> ndet int */ 
  return kk_integer_from_size_t(CHAR_BIT*sizeof(size_t),kk_context());
}
 
// Return the main OS name: windows, linux, macos, unix, posix, ios, tvos, watchos, unknown.
// Sometimes has a _dash_ subsystem, like: unix-\<freebsd,openbsd,dragonfly,bsd\>, and windows-mingw.

kk_string_t kk_std_os_env_get_os_name(kk_context_t* _ctx) { /* () -> ndet string */ 
  return kk_os_name(kk_context());
}


// lift anonymous function
struct kk_std_os_env_argv_fun561__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_env_argv_fun561(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_os_env_new_argv_fun561(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_env_argv_fun561, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_env_argv_fun561(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_vector_t v_374 = kk_std_os_env_os_get_argv(_ctx); /*vector<string>*/;
  kk_std_core__list _x562 = kk_std_core_vlist(v_374, kk_std_core_types__new_None(_ctx), _ctx); /*list<1001>*/
  return kk_std_core__list_box(_x562, _ctx);
}

kk_std_core__delayed kk_std_os_env_argv;

kk_std_core__list kk_std_os_env__ctail_to_tuples(kk_std_core__list xs, kk_std_core_types__ctail _acc, kk_context_t* _ctx) { /* (xs : list<string>, ctail<env>) -> env */ 
  kk__tailcall: ;
  if (kk_std_core__is_Cons(xs)) {
    struct kk_std_core_Cons* _con563 = kk_std_core__as_Cons(xs);
    kk_box_t _box_x491 = _con563->head;
    kk_std_core__list _pat0 = _con563->tail;
    if (kk_std_core__is_Cons(_pat0)) {
      struct kk_std_core_Cons* _con565 = kk_std_core__as_Cons(_pat0);
      kk_string_t name = kk_string_unbox(_box_x491);
      kk_box_t _box_x492 = _con565->head;
      kk_std_core__list xx = _con565->tail;
      kk_string_t value = kk_string_unbox(_box_x492);
      kk_reuse_t _ru_554 = kk_reuse_null; /*reuse*/;
      if (kk_likely(kk_std_core__list_is_unique(xs))) {
        if (kk_likely(kk_std_core__list_is_unique(_pat0))) {
          kk_std_core__list_free(_pat0, _ctx);
        }
        else {
          kk_string_dup(value);
          kk_std_core__list_dup(xx);
          kk_std_core__list_decref(_pat0, _ctx);
        }
        _ru_554 = (kk_std_core__list_reuse(xs));
      }
      else {
        kk_string_dup(name);
        kk_string_dup(value);
        kk_std_core__list_dup(xx);
        kk_std_core__list_decref(xs, _ctx);
      }
      kk_std_core__list _ctail_484 = kk_std_core__list_hole(); /*std/os/env/env*/;
      kk_std_core__list _ctail_485;
      kk_box_t _x567;
      kk_std_core_types__tuple2_ _x568 = kk_std_core_types__new_dash__lp__comma__rp_(kk_string_box(name), kk_string_box(value), _ctx); /*(1004, 1005)*/
      _x567 = kk_std_core_types__tuple2__box(_x568, _ctx); /*1009*/
      _ctail_485 = kk_std_core__new_Cons(_ru_554, _x567, _ctail_484, _ctx); /*list<(string, string)>*/
      kk_box_t* _b_518_506 = (kk_box_t*)((&kk_std_core__as_Cons(_ctail_485)->tail)); /*cfield<std/os/env/env>*/;
      { // tailcall
        kk_std_core_types__ctail _x569 = kk_ctail_link(_acc,(kk_std_core__list_box(_ctail_485, _ctx)),_b_518_506); /*ctail<0>*/
        xs = xx;
        _acc = _x569;
        goto kk__tailcall;
      }
    }
  }
  if (kk_std_core__is_Cons(xs)) {
    struct kk_std_core_Cons* _con570 = kk_std_core__as_Cons(xs);
    kk_box_t _box_x507 = _con570->head;
    kk_std_core__list _pat2 = _con570->tail;
    kk_string_t name0 = kk_string_unbox(_box_x507);
    kk_reuse_t _ru_555 = kk_reuse_null; /*reuse*/;
    if (kk_likely(kk_std_core__list_is_unique(xs))) {
      _ru_555 = (kk_std_core__list_reuse(xs));
    }
    else {
      kk_string_dup(name0);
      kk_std_core__list_decref(xs, _ctx);
    }
    kk_box_t _x572;
    kk_box_t _x573;
    kk_std_core__list _x574;
    kk_box_t _x575;
    kk_std_core_types__tuple2_ _x576;
    kk_box_t _x577;
    kk_string_t _x578 = kk_string_empty(); /*string*/
    _x577 = kk_string_box(_x578); /*1005*/
    _x576 = kk_std_core_types__new_dash__lp__comma__rp_(kk_string_box(name0), _x577, _ctx); /*(1004, 1005)*/
    _x575 = kk_std_core_types__tuple2__box(_x576, _ctx); /*1009*/
    _x574 = kk_std_core__new_Cons(_ru_555, _x575, kk_std_core__new_Nil(_ctx), _ctx); /*list<1009>*/
    _x573 = kk_std_core__list_box(_x574, _ctx); /*-1*/
    _x572 = kk_ctail_resolve(_acc,_x573); /*-1*/
    return kk_std_core__list_unbox(_x572, _ctx);
  }
  {
    kk_box_t _x580 = kk_ctail_resolve(_acc,(kk_std_core__list_box(kk_std_core__new_Nil(_ctx), _ctx))); /*-1*/
    return kk_std_core__list_unbox(_x580, _ctx);
  }
}

kk_std_core__list kk_std_os_env_to_tuples(kk_std_core__list xs0, kk_context_t* _ctx) { /* (xs : list<string>) -> env */ 
  kk_std_core_types__ctail _x581 = kk_ctail_nil(); /*ctail<0>*/
  return kk_std_os_env__ctail_to_tuples(xs0, _x581, _ctx);
}


// lift anonymous function
struct kk_std_os_env_environ_fun585__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_env_environ_fun585(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_os_env_new_environ_fun585(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_env_environ_fun585, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_env_environ_fun585(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_vector_t v_376 = kk_std_os_env_os_get_env(_ctx); /*vector<string>*/;
  kk_std_core__list _x586;
  kk_std_core__list _x587 = kk_std_core_vlist(v_376, kk_std_core_types__new_None(_ctx), _ctx); /*list<1001>*/
  _x586 = kk_std_os_env_to_tuples(_x587, _ctx); /*std/os/env/env*/
  return kk_std_core__list_box(_x586, _ctx);
}

kk_std_core__delayed kk_std_os_env_environ;
 
// Return the arguments that were passed to program itself.
// Strips off the initial program from the unprocessed command line.
// i.e. If a program started as:
// ````
// > node myprogram.js --flag bla
// ````
// The `arguments` list will be `["--flag","bla"]`

kk_std_core__list kk_std_os_env_get_args(kk_context_t* _ctx) { /* () -> ndet list<string> */ 
  bool is_node;
  kk_string_t _x590 = kk_std_core_host(_ctx); /*string*/
  kk_string_t _x591;
  kk_define_string_literal(, _s592, 4, "node")
  _x591 = kk_string_dup(_s592); /*string*/
  is_node = kk_string_is_eq(_x590,_x591,kk_context()); /*bool*/
  kk_std_core__list _match_552;
  kk_box_t _x593;
  kk_std_core__delayed _x594 = kk_std_core__delayed_dup(kk_std_os_env_argv); /*delayed<ndet,list<string>>*/
  _x593 = kk_std_core_force(_x594, _ctx); /*1001*/
  _match_552 = kk_std_core__list_unbox(_x593, _ctx); /*list<string>*/
  if (kk_std_core__is_Cons(_match_552)) {
    struct kk_std_core_Cons* _con595 = kk_std_core__as_Cons(_match_552);
    kk_box_t _box_x538 = _con595->head;
    kk_std_core__list xx = _con595->tail;
    kk_string_t x = kk_string_unbox(_box_x538);
    bool _x597;
    if (is_node) {
      kk_string_t _x598;
      kk_std_os_path__path _x599;
      kk_string_t _x600 = kk_string_dup(x); /*string*/
      _x599 = kk_std_os_path_path(_x600, _ctx); /*std/os/path/path*/
      _x598 = kk_std_os_path_stemname(_x599, _ctx); /*string*/
      kk_string_t _x601;
      kk_define_string_literal(, _s602, 4, "node")
      _x601 = kk_string_dup(_s602); /*string*/
      _x597 = kk_string_is_eq(_x598,_x601,kk_context()); /*bool*/
    }
    else {
      _x597 = false; /*bool*/
    }
    if (_x597) {
      if (kk_likely(kk_std_core__list_is_unique(_match_552))) {
        kk_box_drop(_box_x538, _ctx);
        kk_std_core__list_free(_match_552, _ctx);
      }
      else {
        kk_std_core__list_dup(xx);
        kk_std_core__list_decref(_match_552, _ctx);
      }
      return kk_std_core_drop(xx, kk_integer_from_small(1), _ctx);
    }
  }
  {
    return kk_std_core_drop(_match_552, kk_integer_from_small(1), _ctx);
  }
}
 
// lifted local: .lift481-get-env.1, get-env.1, .spec.479
// specialized: std/core/foreach-while, on parameters action, using:
// action = fn(kv: (string, string)){
//   match (val nm.478 : string
//                = (match (kv) {
//                  ((.skip std/core/types/(,)((.x: string) : string, (.pat0: string) : string) : (string, string) ) as .pat: (string, string))
//                     -> .x;
//                });
//   (std/core/(==.3)(nm.478, name))) {
//     ((std/core/types/True() : bool ) as .pat1: bool)
//        -> std/core/types/Just<string>((match (kv) {
//         ((.skip std/core/types/(,)((.pat00: string) : string, (.x0: string) : string) : (string, string) ) as .pat2: (string, string))
//            -> .x0;
//       }));
//     ((.skip std/core/types/False() : bool ) as .pat01: bool)
//        -> std/core/types/Nothing<string>;
//   };
// }

kk_std_core_types__maybe kk_std_os_env__lift482_get_env_1(kk_string_t name, kk_std_core__list xs0, kk_context_t* _ctx) { /* (name : string, xs0 : list<(string, string)>) -> maybe<string> */ 
  kk__tailcall: ;
  if (kk_std_core__is_Nil(xs0)) {
    kk_string_drop(name, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
  {
    struct kk_std_core_Cons* _con605 = kk_std_core__as_Cons(xs0);
    kk_box_t _box_x542 = _con605->head;
    kk_std_core__list xx = _con605->tail;
    kk_std_core_types__tuple2_ x = kk_std_core_types__tuple2__unbox(_box_x542, NULL);
    if (kk_likely(kk_std_core__list_is_unique(xs0))) {
      kk_std_core_types__tuple2__dup(x);
      kk_box_drop(_box_x542, _ctx);
      kk_std_core__list_free(xs0, _ctx);
    }
    else {
      kk_std_core_types__tuple2__dup(x);
      kk_std_core__list_dup(xx);
      kk_std_core__list_decref(xs0, _ctx);
    }
    bool _match_551;
    kk_string_t _x607;
    {
      kk_box_t _box_x543 = x.fst;
      kk_box_t _box_x544 = x.snd;
      kk_string_t _x = kk_string_unbox(_box_x543);
      kk_string_dup(_x);
      _x607 = _x; /*string*/
    }
    kk_string_t _x610 = kk_string_dup(name); /*string*/
    _match_551 = kk_string_is_eq(_x607,_x610,kk_context()); /*bool*/
    if (_match_551) {
      kk_std_core__list_drop(xx, _ctx);
      kk_string_drop(name, _ctx);
      kk_box_t _x611;
      kk_string_t _x612;
      {
        kk_box_t _box_x545 = x.fst;
        kk_box_t _box_x546 = x.snd;
        kk_string_t _x0 = kk_string_unbox(_box_x546);
        kk_string_dup(_x0);
        kk_std_core_types__tuple2__drop(x, _ctx);
        _x612 = _x0; /*string*/
      }
      _x611 = kk_string_box(_x612); /*1034*/
      return kk_std_core_types__new_Just(_x611, _ctx);
    }
    {
      kk_std_core_types__tuple2__drop(x, _ctx);
      { // tailcall
        xs0 = xx;
        goto kk__tailcall;
      }
    }
  }
}
 
// lifted local: get-env.1, .spec.477
// specialized: std/core/lookup, on parameters pred, using:
// pred = fn(nm: string){
//   std/core/(==.3)(nm, name);
// }

kk_std_core_types__maybe kk_std_os_env__lift481_get_env_1(kk_string_t name, kk_std_core__list xs, kk_context_t* _ctx) { /* (name : string, xs : list<(string, string)>) -> maybe<string> */ 
  return kk_std_os_env__lift482_get_env_1(name, xs, _ctx);
}

// initialization
void kk_std_os_env__init(kk_context_t* _ctx){
  static bool _kk_initialized = false;
  if (_kk_initialized) return;
  _kk_initialized = true;
  kk_std_core_types__init(_ctx);
  kk_std_core__init(_ctx);
  kk_std_os_path__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
  {
    kk_ref_t _x558;
    kk_box_t _x559;
    kk_std_core_types__either _x560 = kk_std_core_types__new_Left(kk_function_box(kk_std_os_env_new_argv_fun561(_ctx)), _ctx); /*either<1024,1025>*/
    _x559 = kk_std_core_types__either_box(_x560, _ctx); /*1000*/
    _x558 = kk_ref_alloc(_x559,kk_context()); /*ref<1001,1000>*/
    kk_std_os_env_argv = kk_std_core__new_Delay(_x558, _ctx); /*delayed<ndet,list<string>>*/
  }
  {
    kk_ref_t _x582;
    kk_box_t _x583;
    kk_std_core_types__either _x584 = kk_std_core_types__new_Left(kk_function_box(kk_std_os_env_new_environ_fun585(_ctx)), _ctx); /*either<1024,1025>*/
    _x583 = kk_std_core_types__either_box(_x584, _ctx); /*1000*/
    _x582 = kk_ref_alloc(_x583,kk_context()); /*ref<1001,1000>*/
    kk_std_os_env_environ = kk_std_core__new_Delay(_x582, _ctx); /*delayed<ndet,std/os/env/env>*/
  }
}

// termination
void kk_std_os_env__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_core__delayed_drop(kk_std_os_env_environ, _ctx);
  kk_std_core__delayed_drop(kk_std_os_env_argv, _ctx);
  kk_std_os_path__done(_ctx);
  kk_std_core__done(_ctx);
  kk_std_core_types__done(_ctx);
}
