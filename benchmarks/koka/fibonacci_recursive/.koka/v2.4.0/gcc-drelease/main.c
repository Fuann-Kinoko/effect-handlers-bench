// Koka generated module: "main", koka version: 2.4.0, platform: 64-bit
#include "main.h"

kk_integer_t kk_main_fibonacci(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> div int */ 
  bool _match_289 = kk_integer_eq_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_289) {
    kk_integer_drop(n, _ctx);
    return kk_integer_from_small(0);
  }
  {
    bool _match_290 = kk_integer_eq_borrow(n,(kk_integer_from_small(1)),kk_context()); /*bool*/;
    if (_match_290) {
      kk_integer_drop(n, _ctx);
      return kk_integer_from_small(1);
    }
    {
      kk_integer_t x_163;
      kk_integer_t _x293;
      kk_integer_t _x294 = kk_integer_dup(n); /*int*/
      _x293 = kk_integer_add_small_const(_x294, -1, _ctx); /*int*/
      x_163 = kk_main_fibonacci(_x293, _ctx); /*int*/
      kk_integer_t y_164;
      kk_integer_t _x295 = kk_integer_add_small_const(n, -2, _ctx); /*int*/
      y_164 = kk_main_fibonacci(_x295, _ctx); /*int*/
      return kk_integer_add(x_163,y_164,kk_context());
    }
  }
}

kk_unit_t kk_main_main(kk_context_t* _ctx) { /* () -> <console,div,ndet> () */ 
  bool is_node;
  kk_string_t _x296 = kk_std_core_host(_ctx); /*string*/
  kk_string_t _x297;
  kk_define_string_literal(, _s298, 4, "node")
  _x297 = kk_string_dup(_s298); /*string*/
  is_node = kk_string_is_eq(_x296,_x297,kk_context()); /*bool*/
  kk_std_core__list xs_172;
  kk_std_core__list _match_288;
  kk_box_t _x299;
  kk_std_core__delayed _x300 = kk_std_core__delayed_dup(kk_std_os_env_argv); /*delayed<ndet,list<string>>*/
  _x299 = kk_std_core_force(_x300, _ctx); /*1001*/
  _match_288 = kk_std_core__list_unbox(_x299, _ctx); /*list<string>*/
  if (kk_std_core__is_Cons(_match_288)) {
    struct kk_std_core_Cons* _con302 = kk_std_core__as_Cons(_match_288);
    kk_box_t _box_x276 = _con302->head;
    kk_std_core__list xx = _con302->tail;
    kk_string_t x1 = kk_string_unbox(_box_x276);
    bool _x304;
    if (is_node) {
      kk_string_t _x305;
      kk_std_os_path__path _x306;
      kk_string_t _x307 = kk_string_dup(x1); /*string*/
      _x306 = kk_std_os_path_path(_x307, _ctx); /*std/os/path/path*/
      _x305 = kk_std_os_path_stemname(_x306, _ctx); /*string*/
      kk_string_t _x308;
      kk_define_string_literal(, _s309, 4, "node")
      _x308 = kk_string_dup(_s309); /*string*/
      _x304 = kk_string_is_eq(_x305,_x308,kk_context()); /*bool*/
    }
    else {
      _x304 = false; /*bool*/
    }
    if (_x304) {
      if (kk_likely(kk_std_core__list_is_unique(_match_288))) {
        kk_box_drop(_box_x276, _ctx);
        kk_std_core__list_free(_match_288, _ctx);
      }
      else {
        kk_std_core__list_dup(xx);
        kk_std_core__list_decref(_match_288, _ctx);
      }
      xs_172 = kk_std_core_drop(xx, kk_integer_from_small(1), _ctx); /*list<string>*/
      goto _match301;
    }
  }
  {
    xs_172 = kk_std_core_drop(_match_288, kk_integer_from_small(1), _ctx); /*list<string>*/
  }
  _match301: ;
  kk_std_core_types__optional default0_170 = kk_std_core_types__new_Optional(kk_integer_box(kk_integer_from_small(5)), _ctx); /*optional<int>*/;
  kk_integer_t n;
  bool _match_286;
  kk_string_t _x310;
  if (kk_std_core__is_Cons(xs_172)) {
    struct kk_std_core_Cons* _con311 = kk_std_core__as_Cons(xs_172);
    kk_box_t _box_x280 = _con311->head;
    kk_string_t x0 = kk_string_unbox(_box_x280);
    kk_string_dup(x0);
    _x310 = x0; /*string*/
  }
  else {
    _x310 = kk_string_empty(); /*string*/
  }
  kk_string_t _x314 = kk_string_empty(); /*string*/
  _match_286 = kk_string_is_eq(_x310,_x314,kk_context()); /*bool*/
  if (_match_286) {
    kk_std_core__list_drop(xs_172, _ctx);
    if (kk_std_core_types__is_Optional(default0_170)) {
      kk_box_t _box_x281 = default0_170._cons.Optional.value;
      kk_integer_t _default_15556 = kk_integer_unbox(_box_x281);
      n = _default_15556; /*int*/
    }
    else {
      n = kk_integer_from_small(0); /*int*/
    }
  }
  else {
    kk_std_core_types__maybe m_17212;
    kk_string_t _x317;
    kk_string_t _x318;
    kk_string_t _x319;
    if (kk_std_core__is_Cons(xs_172)) {
      struct kk_std_core_Cons* _con320 = kk_std_core__as_Cons(xs_172);
      kk_box_t _box_x282 = _con320->head;
      kk_std_core__list _pat010 = _con320->tail;
      kk_string_t x00 = kk_string_unbox(_box_x282);
      if (kk_likely(kk_std_core__list_is_unique(xs_172))) {
        kk_std_core__list_drop(_pat010, _ctx);
        kk_std_core__list_free(xs_172, _ctx);
      }
      else {
        kk_string_dup(x00);
        kk_std_core__list_decref(xs_172, _ctx);
      }
      _x319 = x00; /*string*/
    }
    else {
      _x319 = kk_string_empty(); /*string*/
    }
    _x318 = kk_string_trim_left(_x319,kk_context()); /*string*/
    _x317 = kk_string_trim_right(_x318,kk_context()); /*string*/
    bool _x323;
    kk_std_core_types__optional _x324 = kk_std_core_types__new_None(_ctx); /*forall<a> optional<a>*/
    if (kk_std_core_types__is_Optional(_x324)) {
      kk_box_t _box_x283 = _x324._cons.Optional.value;
      bool _hex_15560 = kk_bool_unbox(_box_x283);
      _x323 = _hex_15560; /*bool*/
    }
    else {
      _x323 = false; /*bool*/
    }
    m_17212 = kk_std_core_xparse_int(_x317, _x323, _ctx); /*maybe<int>*/
    if (kk_std_core_types__is_Nothing(m_17212)) {
      if (kk_std_core_types__is_Optional(default0_170)) {
        kk_box_t _box_x284 = default0_170._cons.Optional.value;
        kk_integer_t _default_155560 = kk_integer_unbox(_box_x284);
        n = _default_155560; /*int*/
      }
      else {
        n = kk_integer_from_small(0); /*int*/
      }
    }
    else {
      kk_box_t _box_x285 = m_17212._cons.Just.value;
      kk_integer_t x = kk_integer_unbox(_box_x285);
      kk_std_core_types__optional_drop(default0_170, _ctx);
      n = x; /*int*/
    }
  }
  kk_integer_t r = kk_main_fibonacci(n, _ctx); /*int*/;
  kk_string_t _x328 = kk_std_core_show(r, _ctx); /*string*/
  kk_std_core_printsln(_x328, _ctx); return kk_Unit;
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
  kk_std_core__init(_ctx);
  kk_std_os_path__init(_ctx);
  kk_std_os_env__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
}

// termination
void kk_main__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_os_env__done(_ctx);
  kk_std_os_path__done(_ctx);
  kk_std_core__done(_ctx);
  kk_std_core_types__done(_ctx);
}
