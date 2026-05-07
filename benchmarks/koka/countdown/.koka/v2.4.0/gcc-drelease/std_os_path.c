// Koka generated module: "std/os/path", koka version: 2.4.0, platform: 64-bit
#include "std_os_path.h"

kk_std_os_path__path kk_std_os_path__copy(kk_std_os_path__path _this, kk_std_core_types__optional root0, kk_std_core_types__optional parts0, kk_context_t* _ctx) { /* (path, root : optional<string>, parts : optional<list<string>>) -> path */ 
  kk_string_t _x3047;
  if (kk_std_core_types__is_Optional(root0)) {
    kk_box_t _box_x2519 = root0._cons.Optional.value;
    kk_string_t _root_105 = kk_string_unbox(_box_x2519);
    _x3047 = _root_105; /*string*/
  }
  else {
    kk_string_t _x = _this.root;
    kk_string_dup(_x);
    _x3047 = _x; /*string*/
  }
  kk_std_core__list _x3049;
  if (kk_std_core_types__is_Optional(parts0)) {
    kk_box_t _box_x2520 = parts0._cons.Optional.value;
    kk_std_core__list _parts_111 = kk_std_core__list_unbox(_box_x2520, NULL);
    kk_std_os_path__path_drop(_this, _ctx);
    _x3049 = _parts_111; /*list<string>*/
  }
  else {
    kk_std_core__list _x0 = _this.parts;
    kk_std_core__list_dup(_x0);
    kk_std_os_path__path_drop(_this, _ctx);
    _x3049 = _x0; /*list<string>*/
  }
  return kk_std_os_path__new_Path(_x3047, _x3049, _ctx);
}

kk_string_t kk_std_os_path_xapp_path(kk_context_t* _ctx) { /* () -> io string */ 
  return kk_os_app_path(kk_context());
}
 
// Return the base name of a path (stem name + extension)
// `"/foo/bar.txt".path.basename === "bar.txt"`
// `"/foo".path.basename === "foo"`

kk_string_t kk_std_os_path_basename(kk_std_os_path__path p, kk_context_t* _ctx) { /* (p : path) -> string */ 
  {
    kk_std_core__list _x = p.parts;
    kk_std_core__list_dup(_x);
    kk_std_os_path__path_drop(p, _ctx);
    if (kk_std_core__is_Cons(_x)) {
      struct kk_std_core_Cons* _con3051 = kk_std_core__as_Cons(_x);
      kk_box_t _box_x2521 = _con3051->head;
      kk_std_core__list _pat0 = _con3051->tail;
      kk_string_t x = kk_string_unbox(_box_x2521);
      if (kk_likely(kk_std_core__list_is_unique(_x))) {
        kk_std_core__list_drop(_pat0, _ctx);
        kk_std_core__list_free(_x, _ctx);
      }
      else {
        kk_string_dup(x);
        kk_std_core__list_decref(_x, _ctx);
      }
      return x;
    }
    {
      return kk_string_empty();
    }
  }
}
 
// Remove the basename and only keep the root and directory name portion of the path.
// `nobase("foo/bar.ext".path) == "foo")`

kk_std_os_path__path kk_std_os_path_nobase(kk_std_os_path__path p, kk_context_t* _ctx) { /* (p : path) -> path */ 
  kk_string_t _x3054;
  kk_std_core_types__optional _x3055 = kk_std_core_types__new_None(_ctx); /*forall<a> optional<a>*/
  if (kk_std_core_types__is_Optional(_x3055)) {
    kk_box_t _box_x2522 = _x3055._cons.Optional.value;
    kk_string_t _root_105 = kk_string_unbox(_box_x2522);
    _x3054 = _root_105; /*string*/
  }
  else {
    kk_string_t _x0 = p.root;
    kk_string_dup(_x0);
    _x3054 = _x0; /*string*/
  }
  kk_std_core__list _x3057;
  {
    kk_std_core__list _x = p.parts;
    kk_std_core__list_dup(_x);
    kk_std_os_path__path_drop(p, _ctx);
    if (kk_std_core__is_Cons(_x)) {
      struct kk_std_core_Cons* _con3058 = kk_std_core__as_Cons(_x);
      kk_box_t _box_x2523 = _con3058->head;
      kk_std_core__list xx = _con3058->tail;
      if (kk_likely(kk_std_core__list_is_unique(_x))) {
        kk_box_drop(_box_x2523, _ctx);
        kk_std_core__list_free(_x, _ctx);
      }
      else {
        kk_std_core__list_dup(xx);
        kk_std_core__list_decref(_x, _ctx);
      }
      _x3057 = xx; /*list<string>*/
    }
    else {
      _x3057 = kk_std_core__new_Nil(_ctx); /*list<string>*/
    }
  }
  return kk_std_os_path__new_Path(_x3054, _x3057, _ctx);
}

kk_std_core_types__tuple2_ kk_std_os_path_split_parts(kk_std_core__list parts0, kk_context_t* _ctx) { /* (parts : list<string>) -> (string, list<string>) */ 
  kk_box_t _x3060;
  kk_string_t _x3061;
  if (kk_std_core__is_Cons(parts0)) {
    struct kk_std_core_Cons* _con3062 = kk_std_core__as_Cons(parts0);
    kk_box_t _box_x2524 = _con3062->head;
    kk_string_t x = kk_string_unbox(_box_x2524);
    kk_string_dup(x);
    _x3061 = x; /*string*/
  }
  else {
    _x3061 = kk_string_empty(); /*string*/
  }
  _x3060 = kk_string_box(_x3061); /*6*/
  kk_box_t _x3065;
  kk_std_core__list _x3066;
  if (kk_std_core__is_Cons(parts0)) {
    struct kk_std_core_Cons* _con3067 = kk_std_core__as_Cons(parts0);
    kk_box_t _box_x2525 = _con3067->head;
    kk_std_core__list xx = _con3067->tail;
    if (kk_likely(kk_std_core__list_is_unique(parts0))) {
      kk_box_drop(_box_x2525, _ctx);
      kk_std_core__list_free(parts0, _ctx);
    }
    else {
      kk_std_core__list_dup(xx);
      kk_std_core__list_decref(parts0, _ctx);
    }
    _x3066 = xx; /*list<string>*/
  }
  else {
    _x3066 = kk_std_core__new_Nil(_ctx); /*list<string>*/
  }
  _x3065 = kk_std_core__list_box(_x3066, _ctx); /*7*/
  return kk_std_core_types__new_dash__lp__comma__rp_(_x3060, _x3065, _ctx);
}

kk_string_t kk_std_os_path_xrealpath(kk_string_t p, kk_context_t* _ctx) { /* (p : string) -> io string */ 
  return kk_os_realpath(p,kk_context());
}
 
// Return the directory part of a path (including the rootname)
// `"/foo/bar.txt".path.dirname === "/foo"`
// `"/foo".path.dirname === "/"`

kk_string_t kk_std_os_path_dirname(kk_std_os_path__path p, kk_context_t* _ctx) { /* (p : path) -> string */ 
  kk_std_core__list xs_2032;
  kk_std_core__list _x3069;
  {
    kk_std_core__list _x0 = p.parts;
    kk_std_core__list_dup(_x0);
    if (kk_std_core__is_Cons(_x0)) {
      struct kk_std_core_Cons* _con3070 = kk_std_core__as_Cons(_x0);
      kk_box_t _box_x2530 = _con3070->head;
      kk_std_core__list xx = _con3070->tail;
      if (kk_likely(kk_std_core__list_is_unique(_x0))) {
        kk_box_drop(_box_x2530, _ctx);
        kk_std_core__list_free(_x0, _ctx);
      }
      else {
        kk_std_core__list_dup(xx);
        kk_std_core__list_decref(_x0, _ctx);
      }
      _x3069 = xx; /*list<string>*/
    }
    else {
      _x3069 = kk_std_core__new_Nil(_ctx); /*list<string>*/
    }
  }
  xs_2032 = kk_std_core__lift17288_reverse(kk_std_core__new_Nil(_ctx), _x3069, _ctx); /*list<string>*/
  kk_string_t _x3072;
  {
    kk_string_t _x = p.root;
    kk_string_dup(_x);
    kk_std_os_path__path_drop(p, _ctx);
    _x3072 = _x; /*string*/
  }
  kk_string_t _x3073;
  if (kk_std_core__is_Nil(xs_2032)) {
    _x3073 = kk_string_empty(); /*string*/
  }
  else {
    struct kk_std_core_Cons* _con3075 = kk_std_core__as_Cons(xs_2032);
    kk_box_t _box_x2531 = _con3075->head;
    kk_std_core__list xx0 = _con3075->tail;
    kk_string_t x = kk_string_unbox(_box_x2531);
    if (kk_likely(kk_std_core__list_is_unique(xs_2032))) {
      kk_std_core__list_free(xs_2032, _ctx);
    }
    else {
      kk_string_dup(x);
      kk_std_core__list_dup(xx0);
      kk_std_core__list_decref(xs_2032, _ctx);
    }
    kk_string_t _x3077;
    kk_define_string_literal(, _s3078, 1, "/")
    _x3077 = kk_string_dup(_s3078); /*string*/
    _x3073 = kk_std_core__lift17277_joinsep(_x3077, xx0, x, _ctx); /*string*/
  }
  return kk_std_core__lp__plus__plus__1_rp_(_x3072, _x3073, _ctx);
}

kk_string_t kk_std_os_path_xhomedir(kk_context_t* _ctx) { /* () -> io string */ 
  return kk_os_home_dir(kk_context());
}
 
// Remove the directory and root and only keep the base name (file name) portion of the path.
// `nodir("foo/bar.ext".path) === "bar.ext"`

kk_std_os_path__path kk_std_os_path_nodir(kk_std_os_path__path p, kk_context_t* _ctx) { /* (p : path) -> path */ 
  kk_std_core__list _b_2533_2532;
  kk_std_core__list _x3080;
  {
    kk_std_core__list _x1 = p.parts;
    kk_std_core__list_dup(_x1);
    _x3080 = _x1; /*list<string>*/
  }
  _b_2533_2532 = kk_std_core_take(_x3080, kk_integer_from_small(1), _ctx); /*list<string>*/
  kk_string_t _x3081 = kk_string_empty(); /*string*/
  kk_std_core__list _x3083;
  kk_std_core_types__optional _match_3006 = kk_std_core_types__new_Optional(kk_std_core__list_box(_b_2533_2532, _ctx), _ctx); /*optional<112>*/;
  if (kk_std_core_types__is_Optional(_match_3006)) {
    kk_box_t _box_x2534 = _match_3006._cons.Optional.value;
    kk_std_core__list _parts_111 = kk_std_core__list_unbox(_box_x2534, NULL);
    kk_std_os_path__path_drop(p, _ctx);
    _x3083 = _parts_111; /*list<string>*/
  }
  else {
    kk_std_core__list _x0 = p.parts;
    kk_std_core__list_dup(_x0);
    kk_std_os_path__path_drop(p, _ctx);
    _x3083 = _x0; /*list<string>*/
  }
  return kk_std_os_path__new_Path(_x3081, _x3083, _ctx);
}
 
// Return the last directory component name (or the empty string).
// `"c:/foo/bar/tst.txt".path.parentname === "bar"

kk_string_t kk_std_os_path_parentname(kk_std_os_path__path p, kk_context_t* _ctx) { /* (p : path) -> string */ 
  {
    kk_std_core__list _x = p.parts;
    kk_std_core__list_dup(_x);
    kk_std_os_path__path_drop(p, _ctx);
    kk_std_core__list _match_3005;
    if (kk_std_core__is_Cons(_x)) {
      struct kk_std_core_Cons* _con3085 = kk_std_core__as_Cons(_x);
      kk_box_t _box_x2535 = _con3085->head;
      kk_std_core__list xx = _con3085->tail;
      if (kk_likely(kk_std_core__list_is_unique(_x))) {
        kk_box_drop(_box_x2535, _ctx);
        kk_std_core__list_free(_x, _ctx);
      }
      else {
        kk_std_core__list_dup(xx);
        kk_std_core__list_decref(_x, _ctx);
      }
      _match_3005 = xx; /*list<string>*/
    }
    else {
      _match_3005 = kk_std_core__new_Nil(_ctx); /*list<string>*/
    }
    if (kk_std_core__is_Cons(_match_3005)) {
      struct kk_std_core_Cons* _con3087 = kk_std_core__as_Cons(_match_3005);
      kk_box_t _box_x2536 = _con3087->head;
      kk_std_core__list _pat0 = _con3087->tail;
      kk_string_t x = kk_string_unbox(_box_x2536);
      if (kk_likely(kk_std_core__list_is_unique(_match_3005))) {
        kk_std_core__list_drop(_pat0, _ctx);
        kk_std_core__list_free(_match_3005, _ctx);
      }
      else {
        kk_string_dup(x);
        kk_std_core__list_decref(_match_3005, _ctx);
      }
      return x;
    }
    {
      return kk_string_empty();
    }
  }
}
 
// Return the OS specific directory separator (`"/"` or `"\\"`)

kk_string_t kk_std_os_path_partsep(kk_context_t* _ctx) { /* () -> ndet string */ 
  return kk_os_dir_sep(kk_context());
}
 
// Return the OS specific path separator (`';'` or `':'`)

kk_string_t kk_std_os_path_pathsep(kk_context_t* _ctx) { /* () -> ndet string */ 
  return kk_os_path_sep(kk_context());
}

kk_string_t kk_std_os_path_xtempdir(kk_context_t* _ctx) { /* () -> io string */ 
  return kk_os_temp_dir(kk_context());
}
 
// Is a path empty?

bool kk_std_os_path_is_empty(kk_std_os_path__path p, kk_context_t* _ctx) { /* (p : path) -> bool */ 
  bool _match_3004;
  kk_string_t _x3090;
  {
    kk_string_t _x = p.root;
    kk_string_dup(_x);
    _x3090 = _x; /*string*/
  }
  kk_string_t _x3091 = kk_string_empty(); /*string*/
  _match_3004 = kk_string_is_eq(_x3090,_x3091,kk_context()); /*bool*/
  if (_match_3004) {
    kk_std_core__list _x0 = p.parts;
    kk_std_core__list_dup(_x0);
    kk_std_os_path__path_drop(p, _ctx);
    if (kk_std_core__is_Nil(_x0)) {
      return true;
    }
    {
      kk_std_core__list_drop(_x0, _ctx);
      return false;
    }
  }
  {
    kk_std_os_path__path_drop(p, _ctx);
    return false;
  }
}
 
// Return the first path if it is not empty, otherwise return the second one.

kk_std_os_path__path kk_std_os_path__lp__bar__bar__rp_(kk_std_os_path__path p1, kk_std_os_path__path p2, kk_context_t* _ctx) { /* (p1 : path, p2 : path) -> path */ 
  bool _match_3003;
  kk_string_t _x3093;
  {
    kk_string_t _x = p1.root;
    kk_string_dup(_x);
    _x3093 = _x; /*string*/
  }
  kk_string_t _x3094 = kk_string_empty(); /*string*/
  _match_3003 = kk_string_is_eq(_x3093,_x3094,kk_context()); /*bool*/
  if (_match_3003) {
    kk_std_core__list _x0 = p1.parts;
    kk_std_core__list_dup(_x0);
    if (kk_std_core__is_Nil(_x0)) {
      kk_std_os_path__path_drop(p1, _ctx);
      return p2;
    }
    {
      kk_std_os_path__path_drop(p2, _ctx);
      kk_std_core__list_drop(_x0, _ctx);
      return p1;
    }
  }
  {
    kk_std_os_path__path_drop(p2, _ctx);
    return p1;
  }
}

kk_std_core__list kk_std_os_path_push_part(kk_string_t dir, kk_std_core__list dirs, kk_context_t* _ctx) { /* (dir : string, dirs : list<string>) -> list<string> */ 
  bool _match_3000;
  kk_string_t _x3096 = kk_string_dup(dir); /*string*/
  kk_string_t _x3097;
  kk_define_string_literal(, _s3098, 1, ".")
  _x3097 = kk_string_dup(_s3098); /*string*/
  _match_3000 = kk_string_is_eq(_x3096,_x3097,kk_context()); /*bool*/
  if (_match_3000) {
    kk_string_drop(dir, _ctx);
    return dirs;
  }
  {
    bool _match_3001;
    kk_string_t _x3099 = kk_string_dup(dir); /*string*/
    kk_string_t _x3100 = kk_string_empty(); /*string*/
    _match_3001 = kk_string_is_eq(_x3099,_x3100,kk_context()); /*bool*/
    if (_match_3001) {
      kk_string_drop(dir, _ctx);
      return dirs;
    }
    {
      bool _match_3002;
      kk_string_t _x3102 = kk_string_dup(dir); /*string*/
      kk_string_t _x3103;
      kk_define_string_literal(, _s3104, 2, "..")
      _x3103 = kk_string_dup(_s3104); /*string*/
      _match_3002 = kk_string_is_eq(_x3102,_x3103,kk_context()); /*bool*/
      if (_match_3002) {
        if (kk_std_core__is_Cons(dirs)) {
          struct kk_std_core_Cons* _con3105 = kk_std_core__as_Cons(dirs);
          kk_box_t _box_x2537 = _con3105->head;
          kk_string_drop(dir, _ctx);
          if (kk_std_core__is_Cons(dirs)) {
            struct kk_std_core_Cons* _con3107 = kk_std_core__as_Cons(dirs);
            kk_box_t _box_x2538 = _con3107->head;
            kk_std_core__list xx = _con3107->tail;
            if (kk_likely(kk_std_core__list_is_unique(dirs))) {
              kk_box_drop(_box_x2538, _ctx);
              kk_std_core__list_free(dirs, _ctx);
            }
            else {
              kk_std_core__list_dup(xx);
              kk_std_core__list_decref(dirs, _ctx);
            }
            return xx;
          }
          {
            return kk_std_core__new_Nil(_ctx);
          }
        }
        {
          return kk_std_core__new_Cons(kk_reuse_null, kk_string_box(dir), dirs, _ctx);
        }
      }
      {
        return kk_std_core__new_Cons(kk_reuse_null, kk_string_box(dir), dirs, _ctx);
      }
    }
  }
}

kk_std_core__list kk_std_os_path_push_parts(kk_std_core__list parts0, kk_std_core__list dirs, kk_context_t* _ctx) { /* (parts : list<string>, dirs : list<string>) -> list<string> */ 
  kk__tailcall: ;
  if (kk_std_core__is_Cons(parts0)) {
    struct kk_std_core_Cons* _con3109 = kk_std_core__as_Cons(parts0);
    kk_box_t _box_x2547 = _con3109->head;
    kk_std_core__list rest = _con3109->tail;
    kk_string_t part = kk_string_unbox(_box_x2547);
    if (kk_likely(kk_std_core__list_is_unique(parts0))) {
      kk_std_core__list_free(parts0, _ctx);
    }
    else {
      kk_string_dup(part);
      kk_std_core__list_dup(rest);
      kk_std_core__list_decref(parts0, _ctx);
    }
    { // tailcall
      kk_std_core__list _x3111 = kk_std_os_path_push_part(part, dirs, _ctx); /*list<string>*/
      parts0 = rest;
      dirs = _x3111;
      goto kk__tailcall;
    }
  }
  {
    return dirs;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift2366_proot_fun3113__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift2366_proot_fun3113(kk_function_t _fself, kk_box_t _b_2549, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift2366_proot_fun3113(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift2366_proot_fun3113, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path__mlift2366_proot_fun3113(kk_function_t _fself, kk_box_t _b_2549, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x3114;
  kk_char_t _x3115 = kk_char_unbox(_b_2549, _ctx); /*char*/
  _x3114 = kk_std_os_path__mlift2364_proot(_x3115, _ctx); /*bool*/
  return kk_bool_box(_x3114);
}


// lift anonymous function
struct kk_std_os_path__mlift2366_proot_fun3117__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift2366_proot_fun3117(kk_function_t _fself, kk_box_t _b_2551, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift2366_proot_fun3117(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift2366_proot_fun3117, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path__mlift2366_proot_fun3117(kk_function_t _fself, kk_box_t _b_2551, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x3118;
  kk_unit_t _x3119 = kk_Unit;
  kk_unit_unbox(_b_2551);
  _x3118 = kk_std_os_path__mlift2365_proot(_x3119, _ctx); /*bool*/
  return kk_bool_box(_x3118);
}

bool kk_std_os_path__mlift2366_proot(bool _y_2312, kk_context_t* _ctx) { /* (bool) -> std/text/parse/parse bool */ 
  if (_y_2312) {
    kk_char_t x_2391 = kk_std_text_parse_char('/', _ctx); /*char*/;
    if (kk_yielding(kk_context())) {
      kk_box_t _x3112 = kk_std_core_hnd_yield_extend(kk_std_os_path__new_mlift2366_proot_fun3113(_ctx), _ctx); /*3926*/
      return kk_bool_unbox(_x3112);
    }
    {
      return false;
    }
  }
  {
    kk_unit_t x0_2393 = kk_Unit;
    kk_std_text_parse_eof(_ctx);
    if (kk_yielding(kk_context())) {
      kk_box_t _x3116 = kk_std_core_hnd_yield_extend(kk_std_os_path__new_mlift2366_proot_fun3117(_ctx), _ctx); /*3926*/
      return kk_bool_unbox(_x3116);
    }
    {
      return true;
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift2368_proot_fun3121__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift2368_proot_fun3121(kk_function_t _fself, kk_box_t _b_2555, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift2368_proot_fun3121(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift2368_proot_fun3121, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path__mlift2368_proot_fun3121(kk_function_t _fself, kk_box_t _b_2555, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x3122 = kk_Unit;
  kk_char_t _x3123 = kk_char_unbox(_b_2555, _ctx); /*char*/
  kk_std_os_path__mlift2367_proot(_x3123, _ctx);
  return kk_unit_box(_x3122);
}

kk_unit_t kk_std_os_path__mlift2368_proot(kk_char_t wild__, kk_context_t* _ctx) { /* (wild_ : char) -> std/text/parse/parse () */ 
  kk_char_t x_2395 = kk_std_text_parse_char(':', _ctx); /*char*/;
  if (kk_yielding(kk_context())) {
    kk_box_t _x3120 = kk_std_core_hnd_yield_extend(kk_std_os_path__new_mlift2368_proot_fun3121(_ctx), _ctx); /*3926*/
    kk_unit_unbox(_x3120); return kk_Unit;
  }
  {
    kk_Unit; return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift2370_proot_fun3124__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift2370_proot_fun3124(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift2370_proot_fun3124(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift2370_proot_fun3124, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path__mlift2370_proot_fun3124(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t _x3125;
  kk_string_t _x3126;
  kk_define_string_literal(, _s3127, 1, "/")
  _x3126 = kk_string_dup(_s3127); /*string*/
  _x3125 = kk_std_text_parse_none_of(_x3126, _ctx); /*char*/
  return kk_char_box(_x3125, _ctx);
}


// lift anonymous function
struct kk_std_os_path__mlift2370_proot_fun3129__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift2370_proot_fun3129(kk_function_t _fself, kk_box_t _b_2562, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift2370_proot_fun3129(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift2370_proot_fun3129, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path__mlift2370_proot_fun3129(kk_function_t _fself, kk_box_t _b_2562, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x3130 = kk_Unit;
  kk_std_core__list _x3131 = kk_std_core__list_unbox(_b_2562, _ctx); /*list<char>*/
  kk_std_os_path__mlift2369_proot(_x3131, _ctx);
  return kk_unit_box(_x3130);
}

kk_unit_t kk_std_os_path__mlift2370_proot(kk_char_t _y_2308, kk_context_t* _ctx) { /* (char) -> std/text/parse/parse () */ 
  kk_std_core__list x_2397 = kk_std_text_parse_many_acc(kk_std_os_path__new_mlift2370_proot_fun3124(_ctx), kk_std_core__new_Nil(_ctx), _ctx); /*list<char>*/;
  kk_std_core__list_drop(x_2397, _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x3128 = kk_std_core_hnd_yield_extend(kk_std_os_path__new_mlift2370_proot_fun3129(_ctx), _ctx); /*3926*/
    kk_unit_unbox(_x3128); return kk_Unit;
  }
  {
    kk_Unit; return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift2371_proot_fun3135__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift2371_proot_fun3135(kk_function_t _fself, kk_box_t _b_2565, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift2371_proot_fun3135(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift2371_proot_fun3135, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path__mlift2371_proot_fun3135(kk_function_t _fself, kk_box_t _b_2565, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x3136 = kk_Unit;
  kk_char_t _x3137 = kk_char_unbox(_b_2565, _ctx); /*char*/
  kk_std_os_path__mlift2370_proot(_x3137, _ctx);
  return kk_unit_box(_x3136);
}

kk_unit_t kk_std_os_path__mlift2371_proot(kk_char_t wild__1, kk_context_t* _ctx) { /* (wild_1 : char) -> std/text/parse/parse () */ 
  kk_char_t x_2399;
  kk_string_t _x3132;
  kk_define_string_literal(, _s3133, 1, "/")
  _x3132 = kk_string_dup(_s3133); /*string*/
  x_2399 = kk_std_text_parse_none_of(_x3132, _ctx); /*char*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x3134 = kk_std_core_hnd_yield_extend(kk_std_os_path__new_mlift2371_proot_fun3135(_ctx), _ctx); /*3926*/
    kk_unit_unbox(_x3134); return kk_Unit;
  }
  {
    kk_std_os_path__mlift2370_proot(x_2399, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift2372_proot_fun3143__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift2372_proot_fun3143(kk_function_t _fself, kk_box_t _b_2574, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift2372_proot_fun3143(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift2372_proot_fun3143, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path__mlift2372_proot_fun3143(kk_function_t _fself, kk_box_t _b_2574, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x3144;
  bool _x3145 = kk_bool_unbox(_b_2574); /*bool*/
  _x3144 = kk_std_os_path__mlift2366_proot(_x3145, _ctx); /*bool*/
  return kk_bool_box(_x3144);
}

bool kk_std_os_path__mlift2372_proot(kk_unit_t _c_2311, kk_context_t* _ctx) { /* (()) -> bool */ 
  kk_std_core_hnd__ev ev_2403;
  kk_ssize_t _x3138 = (KK_IZ(0)); /*ssize_t*/
  ev_2403 = kk_evv_at(_x3138,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
  bool x_2401;
  kk_box_t _x3139;
  {
    struct kk_std_core_hnd_Ev* _con3140 = kk_std_core_hnd__as_Ev(ev_2403);
    kk_std_core_hnd__marker m0 = _con3140->marker;
    kk_box_t _box_x2567 = _con3140->hnd;
    kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x2567, NULL);
    kk_std_text_parse__hnd_parse_dup(h);
    kk_std_core_hnd__clause0 _match_2993;
    kk_std_core_hnd__clause0 _brw_2994 = kk_std_text_parse__select_pick(h, _ctx); /*std/core/hnd/clause0<bool,std/text/parse/.hnd-parse,412,413>*/;
    kk_std_text_parse__hnd_parse_drop(h, _ctx);
    _match_2993 = _brw_2994; /*std/core/hnd/clause0<bool,std/text/parse/.hnd-parse,412,413>*/
    {
      kk_function_t _fun_unbox_x2570 = _match_2993.clause;
      _x3139 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x2570, (_fun_unbox_x2570, m0, ev_2403, _ctx)); /*37*/
    }
  }
  x_2401 = kk_bool_unbox(_x3139); /*bool*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x3142 = kk_std_core_hnd_yield_extend(kk_std_os_path__new_mlift2372_proot_fun3143(_ctx), _ctx); /*3926*/
    return kk_bool_unbox(_x3142);
  }
  {
    return kk_std_os_path__mlift2366_proot(x_2401, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift2373_proot_fun3147__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift2373_proot_fun3147(kk_function_t _fself, kk_box_t _b_2577, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift2373_proot_fun3147(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift2373_proot_fun3147, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path__mlift2373_proot_fun3147(kk_function_t _fself, kk_box_t _b_2577, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x3148 = kk_Unit;
  kk_char_t _x3149 = kk_char_unbox(_b_2577, _ctx); /*char*/
  kk_std_os_path__mlift2368_proot(_x3149, _ctx);
  return kk_unit_box(_x3148);
}


// lift anonymous function
struct kk_std_os_path__mlift2373_proot_fun3151__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift2373_proot_fun3151(kk_function_t _fself, kk_box_t _b_2579, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift2373_proot_fun3151(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift2373_proot_fun3151, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path__mlift2373_proot_fun3151(kk_function_t _fself, kk_box_t _b_2579, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x3152 = kk_Unit;
  kk_char_t _x3153 = kk_char_unbox(_b_2579, _ctx); /*char*/
  kk_std_os_path__mlift2371_proot(_x3153, _ctx);
  return kk_unit_box(_x3152);
}


// lift anonymous function
struct kk_std_os_path__mlift2373_proot_fun3155__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift2373_proot_fun3155(kk_function_t _fself, kk_box_t _b_2583, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift2373_proot_fun3155(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift2373_proot_fun3155, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path__mlift2373_proot_fun3155(kk_function_t _fself, kk_box_t _b_2583, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x3156;
  kk_unit_t _x3157 = kk_Unit;
  kk_unit_unbox(_b_2583);
  _x3156 = kk_std_os_path__mlift2372_proot(_x3157, _ctx); /*bool*/
  return kk_bool_box(_x3156);
}

bool kk_std_os_path__mlift2373_proot(bool _y_2304, kk_context_t* _ctx) { /* (bool) -> std/text/parse/parse bool */ 
  kk_unit_t x_2405 = kk_Unit;
  if (_y_2304) {
    kk_char_t x0_2407 = kk_std_text_parse_alpha(_ctx); /*char*/;
    if (kk_yielding(kk_context())) {
      kk_box_t _x3146 = kk_std_core_hnd_yield_extend(kk_std_os_path__new_mlift2373_proot_fun3147(_ctx), _ctx); /*3926*/
      kk_unit_unbox(_x3146);
    }
    else {
      kk_std_os_path__mlift2368_proot(x0_2407, _ctx);
    }
  }
  else {
    kk_char_t x1_2409 = kk_std_text_parse_char('/', _ctx); /*char*/;
    if (kk_yielding(kk_context())) {
      kk_box_t _x3150 = kk_std_core_hnd_yield_extend(kk_std_os_path__new_mlift2373_proot_fun3151(_ctx), _ctx); /*3926*/
      kk_unit_unbox(_x3150);
    }
    else {
      kk_std_os_path__mlift2371_proot(x1_2409, _ctx);
    }
  }
  if (kk_yielding(kk_context())) {
    kk_box_t _x3154 = kk_std_core_hnd_yield_extend(kk_std_os_path__new_mlift2373_proot_fun3155(_ctx), _ctx); /*3926*/
    return kk_bool_unbox(_x3154);
  }
  {
    return kk_std_os_path__mlift2372_proot(x_2405, _ctx);
  }
}


// lift anonymous function
struct kk_std_os_path_proot_fun3163__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_proot_fun3163(kk_function_t _fself, kk_box_t _b_2592, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_proot_fun3163(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_proot_fun3163, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path_proot_fun3163(kk_function_t _fself, kk_box_t _b_2592, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x3164;
  bool _x3165 = kk_bool_unbox(_b_2592); /*bool*/
  _x3164 = kk_std_os_path__mlift2373_proot(_x3165, _ctx); /*bool*/
  return kk_bool_box(_x3164);
}


// lift anonymous function
struct kk_std_os_path_proot_fun3167__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_proot_fun3167(kk_function_t _fself, kk_box_t _b_2594, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_proot_fun3167(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_proot_fun3167, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path_proot_fun3167(kk_function_t _fself, kk_box_t _b_2594, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x3168 = kk_Unit;
  kk_char_t _x3169 = kk_char_unbox(_b_2594, _ctx); /*char*/
  kk_std_os_path__mlift2368_proot(_x3169, _ctx);
  return kk_unit_box(_x3168);
}


// lift anonymous function
struct kk_std_os_path_proot_fun3171__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_proot_fun3171(kk_function_t _fself, kk_box_t _b_2596, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_proot_fun3171(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_proot_fun3171, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path_proot_fun3171(kk_function_t _fself, kk_box_t _b_2596, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x3172 = kk_Unit;
  kk_char_t _x3173 = kk_char_unbox(_b_2596, _ctx); /*char*/
  kk_std_os_path__mlift2371_proot(_x3173, _ctx);
  return kk_unit_box(_x3172);
}


// lift anonymous function
struct kk_std_os_path_proot_fun3175__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_proot_fun3175(kk_function_t _fself, kk_box_t _b_2600, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_proot_fun3175(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_proot_fun3175, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path_proot_fun3175(kk_function_t _fself, kk_box_t _b_2600, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x3176;
  kk_unit_t _x3177 = kk_Unit;
  kk_unit_unbox(_b_2600);
  _x3176 = kk_std_os_path__mlift2372_proot(_x3177, _ctx); /*bool*/
  return kk_bool_box(_x3176);
}


// lift anonymous function
struct kk_std_os_path_proot_fun3183__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_proot_fun3183(kk_function_t _fself, kk_box_t _b_2608, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_proot_fun3183(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_proot_fun3183, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path_proot_fun3183(kk_function_t _fself, kk_box_t _b_2608, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x3184;
  bool _x3185 = kk_bool_unbox(_b_2608); /*bool*/
  _x3184 = kk_std_os_path__mlift2366_proot(_x3185, _ctx); /*bool*/
  return kk_bool_box(_x3184);
}


// lift anonymous function
struct kk_std_os_path_proot_fun3187__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_proot_fun3187(kk_function_t _fself, kk_box_t _b_2610, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_proot_fun3187(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_proot_fun3187, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path_proot_fun3187(kk_function_t _fself, kk_box_t _b_2610, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x3188;
  kk_char_t _x3189 = kk_char_unbox(_b_2610, _ctx); /*char*/
  _x3188 = kk_std_os_path__mlift2364_proot(_x3189, _ctx); /*bool*/
  return kk_bool_box(_x3188);
}


// lift anonymous function
struct kk_std_os_path_proot_fun3191__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_proot_fun3191(kk_function_t _fself, kk_box_t _b_2612, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_proot_fun3191(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_proot_fun3191, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path_proot_fun3191(kk_function_t _fself, kk_box_t _b_2612, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x3192;
  kk_unit_t _x3193 = kk_Unit;
  kk_unit_unbox(_b_2612);
  _x3192 = kk_std_os_path__mlift2365_proot(_x3193, _ctx); /*bool*/
  return kk_bool_box(_x3192);
}

bool kk_std_os_path_proot(kk_context_t* _ctx) { /* () -> std/text/parse/parse bool */ 
  kk_std_core_hnd__ev ev_2414;
  kk_ssize_t _x3158 = (KK_IZ(0)); /*ssize_t*/
  ev_2414 = kk_evv_at(_x3158,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
  bool x_2411;
  kk_box_t _x3159;
  {
    struct kk_std_core_hnd_Ev* _con3160 = kk_std_core_hnd__as_Ev(ev_2414);
    kk_std_core_hnd__marker m0 = _con3160->marker;
    kk_box_t _box_x2585 = _con3160->hnd;
    kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x2585, NULL);
    kk_std_text_parse__hnd_parse_dup(h);
    kk_std_core_hnd__clause0 _match_2987;
    kk_std_core_hnd__clause0 _brw_2988 = kk_std_text_parse__select_pick(h, _ctx); /*std/core/hnd/clause0<bool,std/text/parse/.hnd-parse,412,413>*/;
    kk_std_text_parse__hnd_parse_drop(h, _ctx);
    _match_2987 = _brw_2988; /*std/core/hnd/clause0<bool,std/text/parse/.hnd-parse,412,413>*/
    {
      kk_function_t _fun_unbox_x2588 = _match_2987.clause;
      _x3159 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x2588, (_fun_unbox_x2588, m0, ev_2414, _ctx)); /*37*/
    }
  }
  x_2411 = kk_bool_unbox(_x3159); /*bool*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x3162 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_proot_fun3163(_ctx), _ctx); /*3926*/
    return kk_bool_unbox(_x3162);
  }
  {
    kk_unit_t x0_2416 = kk_Unit;
    if (x_2411) {
      kk_char_t x1_2419 = kk_std_text_parse_alpha(_ctx); /*char*/;
      if (kk_yielding(kk_context())) {
        kk_box_t _x3166 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_proot_fun3167(_ctx), _ctx); /*3926*/
        kk_unit_unbox(_x3166);
      }
      else {
        kk_std_os_path__mlift2368_proot(x1_2419, _ctx);
      }
    }
    else {
      kk_char_t x2_2421 = kk_std_text_parse_char('/', _ctx); /*char*/;
      if (kk_yielding(kk_context())) {
        kk_box_t _x3170 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_proot_fun3171(_ctx), _ctx); /*3926*/
        kk_unit_unbox(_x3170);
      }
      else {
        kk_std_os_path__mlift2371_proot(x2_2421, _ctx);
      }
    }
    if (kk_yielding(kk_context())) {
      kk_box_t _x3174 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_proot_fun3175(_ctx), _ctx); /*3926*/
      return kk_bool_unbox(_x3174);
    }
    {
      kk_std_core_hnd__ev ev0_2426;
      kk_ssize_t _x3178 = (KK_IZ(0)); /*ssize_t*/
      ev0_2426 = kk_evv_at(_x3178,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
      bool x3_2423;
      kk_box_t _x3179;
      {
        struct kk_std_core_hnd_Ev* _con3180 = kk_std_core_hnd__as_Ev(ev0_2426);
        kk_std_core_hnd__marker m00 = _con3180->marker;
        kk_box_t _box_x2601 = _con3180->hnd;
        kk_std_text_parse__hnd_parse h0 = kk_std_text_parse__hnd_parse_unbox(_box_x2601, NULL);
        kk_std_text_parse__hnd_parse_dup(h0);
        kk_std_core_hnd__clause0 _match_2983;
        kk_std_core_hnd__clause0 _brw_2984 = kk_std_text_parse__select_pick(h0, _ctx); /*std/core/hnd/clause0<bool,std/text/parse/.hnd-parse,412,413>*/;
        kk_std_text_parse__hnd_parse_drop(h0, _ctx);
        _match_2983 = _brw_2984; /*std/core/hnd/clause0<bool,std/text/parse/.hnd-parse,412,413>*/
        {
          kk_function_t _fun_unbox_x2604 = _match_2983.clause;
          _x3179 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x2604, (_fun_unbox_x2604, m00, ev0_2426, _ctx)); /*37*/
        }
      }
      x3_2423 = kk_bool_unbox(_x3179); /*bool*/
      if (kk_yielding(kk_context())) {
        kk_box_t _x3182 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_proot_fun3183(_ctx), _ctx); /*3926*/
        return kk_bool_unbox(_x3182);
      }
      if (x3_2423) {
        kk_char_t x4_2428 = kk_std_text_parse_char('/', _ctx); /*char*/;
        if (kk_yielding(kk_context())) {
          kk_box_t _x3186 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_proot_fun3187(_ctx), _ctx); /*3926*/
          return kk_bool_unbox(_x3186);
        }
        {
          return false;
        }
      }
      {
        kk_unit_t x5_2431 = kk_Unit;
        kk_std_text_parse_eof(_ctx);
        if (kk_yielding(kk_context())) {
          kk_box_t _x3190 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_proot_fun3191(_ctx), _ctx); /*3926*/
          return kk_bool_unbox(_x3190);
        }
        {
          return true;
        }
      }
    }
  }
}
 
// Convert a `:path` to a normalized `:string` path.
// If this results in an empty string, the current directory path `"."` is returned.
// `"c:/foo/test.txt".path.string -> "c:/foo/test.txt"`
// `"c:\\foo\\test.txt".path.string -> "c:/foo/test.txt"`
// `"/foo//./bar/../test.txt".path.string -> "/foo/test.txt"`

kk_string_t kk_std_os_path_string(kk_std_os_path__path p, kk_context_t* _ctx) { /* (p : path) -> string */ 
  kk_std_core__list xs_2062;
  kk_std_core__list _x3194;
  {
    kk_std_core__list _x0 = p.parts;
    kk_std_core__list_dup(_x0);
    _x3194 = _x0; /*list<string>*/
  }
  xs_2062 = kk_std_core__lift17288_reverse(kk_std_core__new_Nil(_ctx), _x3194, _ctx); /*list<string>*/
  kk_string_t s;
  kk_string_t _x3195;
  {
    kk_string_t _x = p.root;
    kk_string_dup(_x);
    kk_std_os_path__path_drop(p, _ctx);
    _x3195 = _x; /*string*/
  }
  kk_string_t _x3196;
  if (kk_std_core__is_Nil(xs_2062)) {
    _x3196 = kk_string_empty(); /*string*/
  }
  else {
    struct kk_std_core_Cons* _con3198 = kk_std_core__as_Cons(xs_2062);
    kk_box_t _box_x2618 = _con3198->head;
    kk_std_core__list xx = _con3198->tail;
    kk_string_t x = kk_string_unbox(_box_x2618);
    if (kk_likely(kk_std_core__list_is_unique(xs_2062))) {
      kk_std_core__list_free(xs_2062, _ctx);
    }
    else {
      kk_string_dup(x);
      kk_std_core__list_dup(xx);
      kk_std_core__list_decref(xs_2062, _ctx);
    }
    kk_string_t _x3200;
    kk_define_string_literal(, _s3201, 1, "/")
    _x3200 = kk_string_dup(_s3201); /*string*/
    _x3196 = kk_std_core__lift17277_joinsep(_x3200, xx, x, _ctx); /*string*/
  }
  s = kk_std_core__lp__plus__plus__1_rp_(_x3195, _x3196, _ctx); /*string*/
  bool _match_2977;
  kk_string_t _x3202 = kk_string_dup(s); /*string*/
  kk_string_t _x3203 = kk_string_empty(); /*string*/
  _match_2977 = kk_string_is_eq(_x3202,_x3203,kk_context()); /*bool*/
  if (_match_2977) {
    kk_string_drop(s, _ctx);
    kk_define_string_literal(, _s3205, 1, ".")
    return kk_string_dup(_s3205);
  }
  {
    return s;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift2376_path_fun3217__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift2376_path_fun3217(kk_function_t _fself, kk_box_t _b_2623, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift2376_path_fun3217(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift2376_path_fun3217, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path__mlift2376_path_fun3217(kk_function_t _fself, kk_box_t _b_2623, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x3218;
  kk_char_t _x3219 = kk_char_unbox(_b_2623, _ctx); /*char*/
  _x3218 = kk_std_os_path__mlift2374_path(_x3219, _ctx); /*bool*/
  return kk_bool_box(_x3218);
}


// lift anonymous function
struct kk_std_os_path__mlift2376_path_fun3221__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift2376_path_fun3221(kk_function_t _fself, kk_box_t _b_2625, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift2376_path_fun3221(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift2376_path_fun3221, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path__mlift2376_path_fun3221(kk_function_t _fself, kk_box_t _b_2625, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x3222;
  kk_unit_t _x3223 = kk_Unit;
  kk_unit_unbox(_b_2625);
  _x3222 = kk_std_os_path__mlift2375_path(_x3223, _ctx); /*bool*/
  return kk_bool_box(_x3222);
}

bool kk_std_os_path__mlift2376_path(bool _y_2324, kk_context_t* _ctx) { /* (bool) -> std/text/parse/parse bool */ 
  if (_y_2324) {
    kk_char_t x_2434 = kk_std_text_parse_char('/', _ctx); /*char*/;
    if (kk_yielding(kk_context())) {
      kk_box_t _x3216 = kk_std_core_hnd_yield_extend(kk_std_os_path__new_mlift2376_path_fun3217(_ctx), _ctx); /*3926*/
      return kk_bool_unbox(_x3216);
    }
    {
      return false;
    }
  }
  {
    kk_unit_t x0_2436 = kk_Unit;
    kk_std_text_parse_eof(_ctx);
    if (kk_yielding(kk_context())) {
      kk_box_t _x3220 = kk_std_core_hnd_yield_extend(kk_std_os_path__new_mlift2376_path_fun3221(_ctx), _ctx); /*3926*/
      return kk_bool_unbox(_x3220);
    }
    {
      return true;
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift2378_path_fun3225__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift2378_path_fun3225(kk_function_t _fself, kk_box_t _b_2629, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift2378_path_fun3225(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift2378_path_fun3225, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path__mlift2378_path_fun3225(kk_function_t _fself, kk_box_t _b_2629, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x3226 = kk_Unit;
  kk_char_t _x3227 = kk_char_unbox(_b_2629, _ctx); /*char*/
  kk_std_os_path__mlift2377_path(_x3227, _ctx);
  return kk_unit_box(_x3226);
}

kk_unit_t kk_std_os_path__mlift2378_path(kk_char_t wild__, kk_context_t* _ctx) { /* (wild_ : char) -> std/text/parse/parse () */ 
  kk_char_t x_2438 = kk_std_text_parse_char(':', _ctx); /*char*/;
  if (kk_yielding(kk_context())) {
    kk_box_t _x3224 = kk_std_core_hnd_yield_extend(kk_std_os_path__new_mlift2378_path_fun3225(_ctx), _ctx); /*3926*/
    kk_unit_unbox(_x3224); return kk_Unit;
  }
  {
    kk_Unit; return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift2380_path_fun3228__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift2380_path_fun3228(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift2380_path_fun3228(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift2380_path_fun3228, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path__mlift2380_path_fun3228(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t _x3229;
  kk_string_t _x3230;
  kk_define_string_literal(, _s3231, 1, "/")
  _x3230 = kk_string_dup(_s3231); /*string*/
  _x3229 = kk_std_text_parse_none_of(_x3230, _ctx); /*char*/
  return kk_char_box(_x3229, _ctx);
}


// lift anonymous function
struct kk_std_os_path__mlift2380_path_fun3233__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift2380_path_fun3233(kk_function_t _fself, kk_box_t _b_2636, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift2380_path_fun3233(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift2380_path_fun3233, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path__mlift2380_path_fun3233(kk_function_t _fself, kk_box_t _b_2636, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x3234 = kk_Unit;
  kk_std_core__list _x3235 = kk_std_core__list_unbox(_b_2636, _ctx); /*list<char>*/
  kk_std_os_path__mlift2379_path(_x3235, _ctx);
  return kk_unit_box(_x3234);
}

kk_unit_t kk_std_os_path__mlift2380_path(kk_char_t _y_2320, kk_context_t* _ctx) { /* (char) -> std/text/parse/parse () */ 
  kk_std_core__list x_2440 = kk_std_text_parse_many_acc(kk_std_os_path__new_mlift2380_path_fun3228(_ctx), kk_std_core__new_Nil(_ctx), _ctx); /*list<char>*/;
  kk_std_core__list_drop(x_2440, _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x3232 = kk_std_core_hnd_yield_extend(kk_std_os_path__new_mlift2380_path_fun3233(_ctx), _ctx); /*3926*/
    kk_unit_unbox(_x3232); return kk_Unit;
  }
  {
    kk_Unit; return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift2381_path_fun3239__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift2381_path_fun3239(kk_function_t _fself, kk_box_t _b_2639, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift2381_path_fun3239(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift2381_path_fun3239, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path__mlift2381_path_fun3239(kk_function_t _fself, kk_box_t _b_2639, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x3240 = kk_Unit;
  kk_char_t _x3241 = kk_char_unbox(_b_2639, _ctx); /*char*/
  kk_std_os_path__mlift2380_path(_x3241, _ctx);
  return kk_unit_box(_x3240);
}

kk_unit_t kk_std_os_path__mlift2381_path(kk_char_t wild__1, kk_context_t* _ctx) { /* (wild_1 : char) -> std/text/parse/parse () */ 
  kk_char_t x_2442;
  kk_string_t _x3236;
  kk_define_string_literal(, _s3237, 1, "/")
  _x3236 = kk_string_dup(_s3237); /*string*/
  x_2442 = kk_std_text_parse_none_of(_x3236, _ctx); /*char*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x3238 = kk_std_core_hnd_yield_extend(kk_std_os_path__new_mlift2381_path_fun3239(_ctx), _ctx); /*3926*/
    kk_unit_unbox(_x3238); return kk_Unit;
  }
  {
    kk_std_os_path__mlift2380_path(x_2442, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift2382_path_fun3247__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift2382_path_fun3247(kk_function_t _fself, kk_box_t _b_2648, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift2382_path_fun3247(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift2382_path_fun3247, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path__mlift2382_path_fun3247(kk_function_t _fself, kk_box_t _b_2648, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x3248;
  bool _x3249 = kk_bool_unbox(_b_2648); /*bool*/
  _x3248 = kk_std_os_path__mlift2376_path(_x3249, _ctx); /*bool*/
  return kk_bool_box(_x3248);
}

bool kk_std_os_path__mlift2382_path(kk_unit_t _c_2323, kk_context_t* _ctx) { /* (()) -> bool */ 
  kk_std_core_hnd__ev ev_2446;
  kk_ssize_t _x3242 = (KK_IZ(0)); /*ssize_t*/
  ev_2446 = kk_evv_at(_x3242,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
  bool x_2444;
  kk_box_t _x3243;
  {
    struct kk_std_core_hnd_Ev* _con3244 = kk_std_core_hnd__as_Ev(ev_2446);
    kk_std_core_hnd__marker m0 = _con3244->marker;
    kk_box_t _box_x2641 = _con3244->hnd;
    kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x2641, NULL);
    kk_std_text_parse__hnd_parse_dup(h);
    kk_std_core_hnd__clause0 _match_2970;
    kk_std_core_hnd__clause0 _brw_2971 = kk_std_text_parse__select_pick(h, _ctx); /*std/core/hnd/clause0<bool,std/text/parse/.hnd-parse,412,413>*/;
    kk_std_text_parse__hnd_parse_drop(h, _ctx);
    _match_2970 = _brw_2971; /*std/core/hnd/clause0<bool,std/text/parse/.hnd-parse,412,413>*/
    {
      kk_function_t _fun_unbox_x2644 = _match_2970.clause;
      _x3243 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x2644, (_fun_unbox_x2644, m0, ev_2446, _ctx)); /*37*/
    }
  }
  x_2444 = kk_bool_unbox(_x3243); /*bool*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x3246 = kk_std_core_hnd_yield_extend(kk_std_os_path__new_mlift2382_path_fun3247(_ctx), _ctx); /*3926*/
    return kk_bool_unbox(_x3246);
  }
  {
    return kk_std_os_path__mlift2376_path(x_2444, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift2383_path_fun3251__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift2383_path_fun3251(kk_function_t _fself, kk_box_t _b_2651, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift2383_path_fun3251(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift2383_path_fun3251, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path__mlift2383_path_fun3251(kk_function_t _fself, kk_box_t _b_2651, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x3252 = kk_Unit;
  kk_char_t _x3253 = kk_char_unbox(_b_2651, _ctx); /*char*/
  kk_std_os_path__mlift2378_path(_x3253, _ctx);
  return kk_unit_box(_x3252);
}


// lift anonymous function
struct kk_std_os_path__mlift2383_path_fun3255__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift2383_path_fun3255(kk_function_t _fself, kk_box_t _b_2653, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift2383_path_fun3255(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift2383_path_fun3255, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path__mlift2383_path_fun3255(kk_function_t _fself, kk_box_t _b_2653, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x3256 = kk_Unit;
  kk_char_t _x3257 = kk_char_unbox(_b_2653, _ctx); /*char*/
  kk_std_os_path__mlift2381_path(_x3257, _ctx);
  return kk_unit_box(_x3256);
}


// lift anonymous function
struct kk_std_os_path__mlift2383_path_fun3259__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift2383_path_fun3259(kk_function_t _fself, kk_box_t _b_2657, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift2383_path_fun3259(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift2383_path_fun3259, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path__mlift2383_path_fun3259(kk_function_t _fself, kk_box_t _b_2657, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x3260;
  kk_unit_t _x3261 = kk_Unit;
  kk_unit_unbox(_b_2657);
  _x3260 = kk_std_os_path__mlift2382_path(_x3261, _ctx); /*bool*/
  return kk_bool_box(_x3260);
}

bool kk_std_os_path__mlift2383_path(bool _y_2316, kk_context_t* _ctx) { /* (bool) -> std/text/parse/parse bool */ 
  kk_unit_t x_2448 = kk_Unit;
  if (_y_2316) {
    kk_char_t x0_2450 = kk_std_text_parse_alpha(_ctx); /*char*/;
    if (kk_yielding(kk_context())) {
      kk_box_t _x3250 = kk_std_core_hnd_yield_extend(kk_std_os_path__new_mlift2383_path_fun3251(_ctx), _ctx); /*3926*/
      kk_unit_unbox(_x3250);
    }
    else {
      kk_std_os_path__mlift2378_path(x0_2450, _ctx);
    }
  }
  else {
    kk_char_t x1_2452 = kk_std_text_parse_char('/', _ctx); /*char*/;
    if (kk_yielding(kk_context())) {
      kk_box_t _x3254 = kk_std_core_hnd_yield_extend(kk_std_os_path__new_mlift2383_path_fun3255(_ctx), _ctx); /*3926*/
      kk_unit_unbox(_x3254);
    }
    else {
      kk_std_os_path__mlift2381_path(x1_2452, _ctx);
    }
  }
  if (kk_yielding(kk_context())) {
    kk_box_t _x3258 = kk_std_core_hnd_yield_extend(kk_std_os_path__new_mlift2383_path_fun3259(_ctx), _ctx); /*3926*/
    return kk_bool_unbox(_x3258);
  }
  {
    return kk_std_os_path__mlift2382_path(x_2448, _ctx);
  }
}
 
// Create a normalized `:path` from a path string.


// lift anonymous function
struct kk_std_os_path_path_fun3272__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_path_fun3272(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_path_fun3272(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_path_fun3272, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_std_os_path_path_fun3279__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_path_fun3279(kk_function_t _fself, kk_box_t _b_2666, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_path_fun3279(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_path_fun3279, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path_path_fun3279(kk_function_t _fself, kk_box_t _b_2666, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x3280;
  bool _x3281 = kk_bool_unbox(_b_2666); /*bool*/
  _x3280 = kk_std_os_path__mlift2383_path(_x3281, _ctx); /*bool*/
  return kk_bool_box(_x3280);
}
static kk_box_t kk_std_os_path_path_fun3272(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x3273;
  kk_std_core_hnd__ev ev_2456;
  kk_ssize_t _x3274 = (KK_IZ(0)); /*ssize_t*/
  ev_2456 = kk_evv_at(_x3274,kk_context()); /*std/core/hnd/ev<std/text/parse/.hnd-parse>*/
  bool x_2454;
  kk_box_t _x3275;
  {
    struct kk_std_core_hnd_Ev* _con3276 = kk_std_core_hnd__as_Ev(ev_2456);
    kk_std_core_hnd__marker m0 = _con3276->marker;
    kk_box_t _box_x2659 = _con3276->hnd;
    kk_std_text_parse__hnd_parse h = kk_std_text_parse__hnd_parse_unbox(_box_x2659, NULL);
    kk_std_text_parse__hnd_parse_dup(h);
    kk_std_core_hnd__clause0 _match_2964;
    kk_std_core_hnd__clause0 _brw_2965 = kk_std_text_parse__select_pick(h, _ctx); /*std/core/hnd/clause0<bool,std/text/parse/.hnd-parse,412,413>*/;
    kk_std_text_parse__hnd_parse_drop(h, _ctx);
    _match_2964 = _brw_2965; /*std/core/hnd/clause0<bool,std/text/parse/.hnd-parse,412,413>*/
    {
      kk_function_t _fun_unbox_x2662 = _match_2964.clause;
      _x3275 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x2662, (_fun_unbox_x2662, m0, ev_2456, _ctx)); /*37*/
    }
  }
  x_2454 = kk_bool_unbox(_x3275); /*bool*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x3278 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_path_fun3279(_ctx), _ctx); /*3926*/
    _x3273 = kk_bool_unbox(_x3278); /*bool*/
  }
  else {
    _x3273 = kk_std_os_path__mlift2383_path(x_2454, _ctx); /*bool*/
  }
  return kk_bool_box(_x3273);
}

kk_std_os_path__path kk_std_os_path_path(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> path */ 
  bool _match_2959;
  kk_string_t _x3262 = kk_string_dup(s); /*string*/
  kk_string_t _x3263 = kk_string_empty(); /*string*/
  _match_2959 = kk_string_is_eq(_x3262,_x3263,kk_context()); /*bool*/
  if (_match_2959) {
    kk_string_drop(s, _ctx);
    kk_string_t _x3265 = kk_string_empty(); /*string*/
    return kk_std_os_path__new_Path(_x3265, kk_std_core__new_Nil(_ctx), _ctx);
  }
  {
    kk_string_t t;
    kk_string_t _x3267;
    kk_define_string_literal(, _s3268, 1, "\\")
    _x3267 = kk_string_dup(_s3268); /*string*/
    kk_string_t _x3269;
    kk_define_string_literal(, _s3270, 1, "/")
    _x3269 = kk_string_dup(_s3270); /*string*/
    t = kk_string_replace_all(s,_x3267,_x3269,kk_context()); /*string*/
    kk_std_core_types__maybe _match_2960;
    kk_string_t _x3271 = kk_string_dup(t); /*string*/
    _match_2960 = kk_std_text_parse_starts_with(_x3271, kk_std_os_path_new_path_fun3272(_ctx), _ctx); /*maybe<(2200, sslice)>*/
    if (kk_std_core_types__is_Nothing(_match_2960)) {
      kk_vector_t v_17194;
      kk_string_t _x3282;
      kk_define_string_literal(, _s3283, 1, "/")
      _x3282 = kk_string_dup(_s3283); /*string*/
      v_17194 = kk_string_splitv(t,_x3282,kk_context()); /*vector<string>*/
      kk_std_core__list parts0;
      kk_std_core__list _x3284 = kk_std_core_vlist(v_17194, kk_std_core_types__new_None(_ctx), _ctx); /*list<2142>*/
      kk_std_core__list _x3285;
      kk_std_core_types__optional _x3286 = kk_std_core_types__new_None(_ctx); /*forall<a> optional<a>*/
      if (kk_std_core_types__is_Optional(_x3286)) {
        kk_box_t _box_x2669 = _x3286._cons.Optional.value;
        kk_std_core__list _dirs_1011 = kk_std_core__list_unbox(_box_x2669, NULL);
        _x3285 = _dirs_1011; /*list<string>*/
      }
      else {
        _x3285 = kk_std_core__new_Nil(_ctx); /*list<string>*/
      }
      parts0 = kk_std_os_path_push_parts(_x3284, _x3285, _ctx); /*list<string>*/
      kk_string_t _x3288 = kk_string_empty(); /*string*/
      return kk_std_os_path__new_Path(_x3288, parts0, _ctx);
    }
    {
      kk_box_t _box_x2670 = _match_2960._cons.Just.value;
      kk_std_core_types__tuple2_ _pat30 = kk_std_core_types__tuple2__unbox(_box_x2670, NULL);
      kk_box_t _box_x2671 = _pat30.fst;
      kk_box_t _box_x2672 = _pat30.snd;
      bool eof = kk_bool_unbox(_box_x2671);
      kk_std_core__sslice rest = kk_std_core__sslice_unbox(_box_x2672, NULL);
      kk_string_drop(t, _ctx);
      kk_std_core__sslice_dup(rest);
      kk_std_core_types__maybe_drop(_match_2960, _ctx);
      kk_string_t root1_2075;
      kk_string_t _x3293;
      kk_std_core__sslice _x3294;
      {
        kk_string_t s5 = rest.str;
        kk_ssize_t start0 = rest.start;
        kk_string_dup(s5);
        kk_ssize_t _x3295 = (KK_IZ(0)); /*ssize_t*/
        _x3294 = kk_std_core__new_Sslice(s5, _x3295, start0, _ctx); /*sslice*/
      }
      _x3293 = kk_std_core_string_3(_x3294, _ctx); /*string*/
      kk_string_t _x3296;
      if (eof) {
        kk_define_string_literal(, _s3297, 1, "/")
        _x3296 = kk_string_dup(_s3297); /*string*/
      }
      else {
        _x3296 = kk_string_empty(); /*string*/
      }
      root1_2075 = kk_std_core__lp__plus__plus__1_rp_(_x3293, _x3296, _ctx); /*string*/
      kk_string_t s3_2076 = kk_std_core_string_3(rest, _ctx); /*string*/;
      kk_vector_t v_171940;
      kk_string_t _x3299;
      kk_define_string_literal(, _s3300, 1, "/")
      _x3299 = kk_string_dup(_s3300); /*string*/
      v_171940 = kk_string_splitv(s3_2076,_x3299,kk_context()); /*vector<string>*/
      kk_std_core__list parts1;
      kk_std_core__list _x3301 = kk_std_core_vlist(v_171940, kk_std_core_types__new_None(_ctx), _ctx); /*list<2142>*/
      kk_std_core__list _x3302;
      kk_std_core_types__optional _x3303 = kk_std_core_types__new_None(_ctx); /*forall<a> optional<a>*/
      if (kk_std_core_types__is_Optional(_x3303)) {
        kk_box_t _box_x2673 = _x3303._cons.Optional.value;
        kk_std_core__list _dirs_10110 = kk_std_core__list_unbox(_box_x2673, NULL);
        _x3302 = _dirs_10110; /*list<string>*/
      }
      else {
        _x3302 = kk_std_core__new_Nil(_ctx); /*list<string>*/
      }
      parts1 = kk_std_os_path_push_parts(_x3301, _x3302, _ctx); /*list<string>*/
      return kk_std_os_path__new_Path(root1_2075, parts1, _ctx);
    }
  }
}
 
// Add two paths together using left-associative operator `(/)`.
// Keeps the root of `p1` and discards the root name of `p2`.
// `"/a/" / "b/foo.txt"          === "/a/b/foo.txt"`
// `"/a/foo.txt" / "/b/bar.txt"  === "/a/foo.txt/b/bar.txt"`
// `"c:/foo" / "d:/bar"          === "c:/foo/bar"`

kk_std_os_path__path kk_std_os_path__lp__fs__rp_(kk_std_os_path__path p1, kk_std_os_path__path p2, kk_context_t* _ctx) { /* (p1 : path, p2 : path) -> path */ 
  kk_std_core__list _b_2678_2677;
  kk_std_core__list _x3305;
  kk_std_core__list _x3306;
  {
    kk_std_core__list _x0 = p2.parts;
    kk_std_core__list_dup(_x0);
    kk_std_os_path__path_drop(p2, _ctx);
    _x3306 = _x0; /*list<string>*/
  }
  _x3305 = kk_std_core__lift17288_reverse(kk_std_core__new_Nil(_ctx), _x3306, _ctx); /*list<2485>*/
  kk_std_core__list _x3307;
  {
    kk_std_core__list _x1 = p1.parts;
    kk_std_core__list_dup(_x1);
    _x3307 = _x1; /*list<string>*/
  }
  _b_2678_2677 = kk_std_os_path_push_parts(_x3305, _x3307, _ctx); /*list<string>*/
  kk_string_t _x3308;
  {
    kk_string_t _x = p1.root;
    kk_string_dup(_x);
    kk_std_os_path__path_drop(p1, _ctx);
    _x3308 = _x; /*string*/
  }
  kk_std_core__list _x3309;
  kk_std_core_types__optional _match_2958 = kk_std_core_types__new_Optional(kk_std_core__list_box(_b_2678_2677, _ctx), _ctx); /*optional<112>*/;
  if (kk_std_core_types__is_Optional(_match_2958)) {
    kk_box_t _box_x2679 = _match_2958._cons.Optional.value;
    kk_std_core__list _parts_876 = kk_std_core__list_unbox(_box_x2679, NULL);
    _x3309 = _parts_876; /*list<string>*/
  }
  else {
    _x3309 = kk_std_core__new_Nil(_ctx); /*list<string>*/
  }
  return kk_std_os_path__new_Path(_x3308, _x3309, _ctx);
}
 
// Convenience function that adds a string path.

kk_std_os_path__path kk_std_os_path__lp__fs__1_rp_(kk_std_os_path__path p1, kk_string_t p2, kk_context_t* _ctx) { /* (p1 : path, p2 : string) -> path */ 
  kk_std_os_path__path p20_2088 = kk_std_os_path_path(p2, _ctx); /*std/os/path/path*/;
  kk_std_core__list _b_2681_2680;
  kk_std_core__list _x3311;
  kk_std_core__list _x3312;
  {
    kk_std_core__list _x0 = p20_2088.parts;
    kk_std_core__list_dup(_x0);
    kk_std_os_path__path_drop(p20_2088, _ctx);
    _x3312 = _x0; /*list<string>*/
  }
  _x3311 = kk_std_core__lift17288_reverse(kk_std_core__new_Nil(_ctx), _x3312, _ctx); /*list<2485>*/
  kk_std_core__list _x3313;
  {
    kk_std_core__list _x1 = p1.parts;
    kk_std_core__list_dup(_x1);
    _x3313 = _x1; /*list<string>*/
  }
  _b_2681_2680 = kk_std_os_path_push_parts(_x3311, _x3313, _ctx); /*list<string>*/
  kk_string_t _x3314;
  {
    kk_string_t _x = p1.root;
    kk_string_dup(_x);
    kk_std_os_path__path_drop(p1, _ctx);
    _x3314 = _x; /*string*/
  }
  kk_std_core__list _x3315;
  kk_std_core_types__optional _match_2957 = kk_std_core_types__new_Optional(kk_std_core__list_box(_b_2681_2680, _ctx), _ctx); /*optional<112>*/;
  if (kk_std_core_types__is_Optional(_match_2957)) {
    kk_box_t _box_x2682 = _match_2957._cons.Optional.value;
    kk_std_core__list _parts_876 = kk_std_core__list_unbox(_box_x2682, NULL);
    _x3315 = _parts_876; /*list<string>*/
  }
  else {
    _x3315 = kk_std_core__new_Nil(_ctx); /*list<string>*/
  }
  return kk_std_os_path__new_Path(_x3314, _x3315, _ctx);
}
 
// Convenience function that adds two strings into a path.

kk_std_os_path__path kk_std_os_path__lp__fs__2_rp_(kk_string_t p1, kk_string_t p2, kk_context_t* _ctx) { /* (p1 : string, p2 : string) -> path */ 
  kk_std_os_path__path p10_2095 = kk_std_os_path_path(p1, _ctx); /*std/os/path/path*/;
  kk_std_os_path__path p20_2096 = kk_std_os_path_path(p2, _ctx); /*std/os/path/path*/;
  kk_std_core__list _b_2684_2683;
  kk_std_core__list _x3317;
  kk_std_core__list _x3318;
  {
    kk_std_core__list _x0 = p20_2096.parts;
    kk_std_core__list_dup(_x0);
    kk_std_os_path__path_drop(p20_2096, _ctx);
    _x3318 = _x0; /*list<string>*/
  }
  _x3317 = kk_std_core__lift17288_reverse(kk_std_core__new_Nil(_ctx), _x3318, _ctx); /*list<2485>*/
  kk_std_core__list _x3319;
  {
    kk_std_core__list _x1 = p10_2095.parts;
    kk_std_core__list_dup(_x1);
    _x3319 = _x1; /*list<string>*/
  }
  _b_2684_2683 = kk_std_os_path_push_parts(_x3317, _x3319, _ctx); /*list<string>*/
  kk_string_t _x3320;
  {
    kk_string_t _x = p10_2095.root;
    kk_string_dup(_x);
    kk_std_os_path__path_drop(p10_2095, _ctx);
    _x3320 = _x; /*string*/
  }
  kk_std_core__list _x3321;
  kk_std_core_types__optional _match_2956 = kk_std_core_types__new_Optional(kk_std_core__list_box(_b_2684_2683, _ctx), _ctx); /*optional<112>*/;
  if (kk_std_core_types__is_Optional(_match_2956)) {
    kk_box_t _box_x2685 = _match_2956._cons.Optional.value;
    kk_std_core__list _parts_876 = kk_std_core__list_unbox(_box_x2685, NULL);
    _x3321 = _parts_876; /*list<string>*/
  }
  else {
    _x3321 = kk_std_core__new_Nil(_ctx); /*list<string>*/
  }
  return kk_std_os_path__new_Path(_x3320, _x3321, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift2384_app_path_fun3324__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift2384_app_path_fun3324(kk_function_t _fself, kk_box_t _b_2688, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift2384_app_path_fun3324(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift2384_app_path_fun3324, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path__mlift2384_app_path_fun3324(kk_function_t _fself, kk_box_t _b_2688, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x3325;
  kk_string_t _x3326 = kk_string_unbox(_b_2688); /*string*/
  _x3325 = kk_std_os_path_path(_x3326, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x3325, _ctx);
}

kk_std_os_path__path kk_std_os_path__mlift2384_app_path(kk_string_t _y_2329, kk_context_t* _ctx) { /* (string) -> io path */ 
  kk_box_t _x3323 = kk_std_core_hnd__open_none1(kk_std_os_path__new_mlift2384_app_path_fun3324(_ctx), kk_string_box(_y_2329), _ctx); /*3357*/
  return kk_std_os_path__path_unbox(_x3323, _ctx);
}
 
// Return the path to the currently executing application.


// lift anonymous function
struct kk_std_os_path_app_path_fun3328__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_app_path_fun3328(kk_function_t _fself, kk_box_t _b_2692, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_app_path_fun3328(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_app_path_fun3328, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path_app_path_fun3328(kk_function_t _fself, kk_box_t _b_2692, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x3329;
  kk_string_t _x3330 = kk_string_unbox(_b_2692); /*string*/
  _x3329 = kk_std_os_path__mlift2384_app_path(_x3330, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x3329, _ctx);
}


// lift anonymous function
struct kk_std_os_path_app_path_fun3331__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_app_path_fun3331(kk_function_t _fself, kk_box_t _b_2695, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_app_path_fun3331(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_app_path_fun3331, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path_app_path_fun3331(kk_function_t _fself, kk_box_t _b_2695, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x3332;
  kk_string_t _x3333 = kk_string_unbox(_b_2695); /*string*/
  _x3332 = kk_std_os_path_path(_x3333, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x3332, _ctx);
}

kk_std_os_path__path kk_std_os_path_app_path(kk_context_t* _ctx) { /* () -> io path */ 
  kk_string_t x_2458 = kk_std_os_path_xapp_path(_ctx); /*string*/;
  kk_box_t _x3327;
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_2458, _ctx);
    _x3327 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_app_path_fun3328(_ctx), _ctx); /*3926*/
  }
  else {
    _x3327 = kk_std_core_hnd__open_none1(kk_std_os_path_new_app_path_fun3331(_ctx), kk_string_box(x_2458), _ctx); /*3926*/
  }
  return kk_std_os_path__path_unbox(_x3327, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift2385_appdir_fun3335__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift2385_appdir_fun3335(kk_function_t _fself, kk_box_t _b_2701, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift2385_appdir_fun3335(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift2385_appdir_fun3335, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path__mlift2385_appdir_fun3335(kk_function_t _fself, kk_box_t _b_2701, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x3336;
  kk_string_t _x3337 = kk_string_unbox(_b_2701); /*string*/
  _x3336 = kk_std_os_path_path(_x3337, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x3336, _ctx);
}

kk_std_os_path__path kk_std_os_path__mlift2385_appdir(kk_string_t _y_2330, kk_context_t* _ctx) { /* (string) -> io path */ 
  kk_std_os_path__path _x1_2352;
  kk_box_t _x3334 = kk_std_core_hnd__open_none1(kk_std_os_path__new_mlift2385_appdir_fun3335(_ctx), kk_string_box(_y_2330), _ctx); /*3357*/
  _x1_2352 = kk_std_os_path__path_unbox(_x3334, _ctx); /*std/os/path/path*/
  kk_evv_t w = kk_evv_swap_create0(kk_context()); /*std/core/hnd/evv<<alloc<global>,console,div,exn,fsys,ndet,net,read<global>,ui,write<global>>>*/;
  kk_std_os_path__path x;
  kk_string_t _x3338;
  kk_std_core_types__optional _x3339 = kk_std_core_types__new_None(_ctx); /*forall<a> optional<a>*/
  if (kk_std_core_types__is_Optional(_x3339)) {
    kk_box_t _box_x2704 = _x3339._cons.Optional.value;
    kk_string_t _root_105 = kk_string_unbox(_box_x2704);
    _x3338 = _root_105; /*string*/
  }
  else {
    kk_string_t _x00 = _x1_2352.root;
    kk_string_dup(_x00);
    _x3338 = _x00; /*string*/
  }
  kk_std_core__list _x3341;
  {
    kk_std_core__list _x = _x1_2352.parts;
    kk_std_core__list_dup(_x);
    kk_std_os_path__path_drop(_x1_2352, _ctx);
    if (kk_std_core__is_Cons(_x)) {
      struct kk_std_core_Cons* _con3342 = kk_std_core__as_Cons(_x);
      kk_box_t _box_x2705 = _con3342->head;
      kk_std_core__list xx = _con3342->tail;
      if (kk_likely(kk_std_core__list_is_unique(_x))) {
        kk_box_drop(_box_x2705, _ctx);
        kk_std_core__list_free(_x, _ctx);
      }
      else {
        kk_std_core__list_dup(xx);
        kk_std_core__list_decref(_x, _ctx);
      }
      _x3341 = xx; /*list<string>*/
    }
    else {
      _x3341 = kk_std_core__new_Nil(_ctx); /*list<string>*/
    }
  }
  x = kk_std_os_path__new_Path(_x3338, _x3341, _ctx); /*std/os/path/path*/
  kk_unit_t keep = kk_Unit;
  kk_evv_set(w,kk_context());
  kk_evv_t w0 = kk_evv_swap_create0(kk_context()); /*std/core/hnd/evv<<alloc<global>,console,div,exn,fsys,ndet,net,read<global>,ui,write<global>>>*/;
  kk_unit_t keep0 = kk_Unit;
  kk_evv_set(w0,kk_context());
  bool _match_2950;
  kk_string_t _x3344;
  {
    kk_std_core__list _x2 = x.parts;
    kk_std_core__list_dup(_x2);
    if (kk_std_core__is_Cons(_x2)) {
      struct kk_std_core_Cons* _con3345 = kk_std_core__as_Cons(_x2);
      kk_box_t _box_x2706 = _con3345->head;
      kk_std_core__list _pat04 = _con3345->tail;
      kk_string_t x2 = kk_string_unbox(_box_x2706);
      if (kk_likely(kk_std_core__list_is_unique(_x2))) {
        kk_std_core__list_drop(_pat04, _ctx);
        kk_std_core__list_free(_x2, _ctx);
      }
      else {
        kk_string_dup(x2);
        kk_std_core__list_decref(_x2, _ctx);
      }
      _x3344 = x2; /*string*/
    }
    else {
      _x3344 = kk_string_empty(); /*string*/
    }
  }
  kk_string_t _x3348;
  kk_define_string_literal(, _s3349, 3, "bin")
  _x3348 = kk_string_dup(_s3349); /*string*/
  _match_2950 = kk_string_is_eq(_x3344,_x3348,kk_context()); /*bool*/
  if (_match_2950) {
    kk_evv_t w1 = kk_evv_swap_create0(kk_context()); /*std/core/hnd/evv<<alloc<global>,console,div,exn,fsys,ndet,net,read<global>,ui,write<global>>>*/;
    kk_unit_t keep1 = kk_Unit;
    kk_evv_set(w1,kk_context());
    kk_string_t _x3350;
    kk_std_core_types__optional _x3351 = kk_std_core_types__new_None(_ctx); /*forall<a> optional<a>*/
    if (kk_std_core_types__is_Optional(_x3351)) {
      kk_box_t _box_x2707 = _x3351._cons.Optional.value;
      kk_string_t _root_1050 = kk_string_unbox(_box_x2707);
      _x3350 = _root_1050; /*string*/
    }
    else {
      kk_string_t _x000 = x.root;
      kk_string_dup(_x000);
      _x3350 = _x000; /*string*/
    }
    kk_std_core__list _x3353;
    {
      kk_std_core__list _x13 = x.parts;
      kk_std_core__list_dup(_x13);
      kk_std_os_path__path_drop(x, _ctx);
      if (kk_std_core__is_Cons(_x13)) {
        struct kk_std_core_Cons* _con3354 = kk_std_core__as_Cons(_x13);
        kk_box_t _box_x2708 = _con3354->head;
        kk_std_core__list xx0 = _con3354->tail;
        if (kk_likely(kk_std_core__list_is_unique(_x13))) {
          kk_box_drop(_box_x2708, _ctx);
          kk_std_core__list_free(_x13, _ctx);
        }
        else {
          kk_std_core__list_dup(xx0);
          kk_std_core__list_decref(_x13, _ctx);
        }
        _x3353 = xx0; /*list<string>*/
      }
      else {
        _x3353 = kk_std_core__new_Nil(_ctx); /*list<string>*/
      }
    }
    return kk_std_os_path__new_Path(_x3350, _x3353, _ctx);
  }
  {
    kk_evv_t w2 = kk_evv_swap_create0(kk_context()); /*std/core/hnd/evv<<alloc<global>,console,div,exn,fsys,ndet,net,read<global>,ui,write<global>>>*/;
    kk_unit_t keep2 = kk_Unit;
    kk_evv_set(w2,kk_context());
    bool _match_2951;
    kk_string_t _x3356;
    {
      kk_std_core__list _x3 = x.parts;
      kk_std_core__list_dup(_x3);
      if (kk_std_core__is_Cons(_x3)) {
        struct kk_std_core_Cons* _con3357 = kk_std_core__as_Cons(_x3);
        kk_box_t _box_x2709 = _con3357->head;
        kk_std_core__list _pat07 = _con3357->tail;
        kk_string_t x00 = kk_string_unbox(_box_x2709);
        if (kk_likely(kk_std_core__list_is_unique(_x3))) {
          kk_std_core__list_drop(_pat07, _ctx);
          kk_std_core__list_free(_x3, _ctx);
        }
        else {
          kk_string_dup(x00);
          kk_std_core__list_decref(_x3, _ctx);
        }
        _x3356 = x00; /*string*/
      }
      else {
        _x3356 = kk_string_empty(); /*string*/
      }
    }
    kk_string_t _x3360;
    kk_define_string_literal(, _s3361, 3, "exe")
    _x3360 = kk_string_dup(_s3361); /*string*/
    _match_2951 = kk_string_is_eq(_x3356,_x3360,kk_context()); /*bool*/
    if (_match_2951) {
      kk_evv_t w3 = kk_evv_swap_create0(kk_context()); /*std/core/hnd/evv<<alloc<global>,console,div,exn,fsys,ndet,net,read<global>,ui,write<global>>>*/;
      kk_unit_t keep3 = kk_Unit;
      kk_evv_set(w3,kk_context());
      kk_string_t _x3362;
      kk_std_core_types__optional _x3363 = kk_std_core_types__new_None(_ctx); /*forall<a> optional<a>*/
      if (kk_std_core_types__is_Optional(_x3363)) {
        kk_box_t _box_x2710 = _x3363._cons.Optional.value;
        kk_string_t _root_1051 = kk_string_unbox(_box_x2710);
        _x3362 = _root_1051; /*string*/
      }
      else {
        kk_string_t _x010 = x.root;
        kk_string_dup(_x010);
        _x3362 = _x010; /*string*/
      }
      kk_std_core__list _x3365;
      {
        kk_std_core__list _x4 = x.parts;
        kk_std_core__list_dup(_x4);
        kk_std_os_path__path_drop(x, _ctx);
        if (kk_std_core__is_Cons(_x4)) {
          struct kk_std_core_Cons* _con3366 = kk_std_core__as_Cons(_x4);
          kk_box_t _box_x2711 = _con3366->head;
          kk_std_core__list xx1 = _con3366->tail;
          if (kk_likely(kk_std_core__list_is_unique(_x4))) {
            kk_box_drop(_box_x2711, _ctx);
            kk_std_core__list_free(_x4, _ctx);
          }
          else {
            kk_std_core__list_dup(xx1);
            kk_std_core__list_decref(_x4, _ctx);
          }
          _x3365 = xx1; /*list<string>*/
        }
        else {
          _x3365 = kk_std_core__new_Nil(_ctx); /*list<string>*/
        }
      }
      return kk_std_os_path__new_Path(_x3362, _x3365, _ctx);
    }
    {
      return x;
    }
  }
}
 
// Return the base directory that contains the currently running application.
// First tries `app-path().nobase`; if that ends in the ``bin`` or ``exe`` directory it
// returns the parent of that directory.


// lift anonymous function
struct kk_std_os_path_appdir_fun3369__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_appdir_fun3369(kk_function_t _fself, kk_box_t _b_2713, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_appdir_fun3369(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_appdir_fun3369, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path_appdir_fun3369(kk_function_t _fself, kk_box_t _b_2713, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x3370;
  kk_string_t _x3371 = kk_string_unbox(_b_2713); /*string*/
  _x3370 = kk_std_os_path__mlift2385_appdir(_x3371, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x3370, _ctx);
}


// lift anonymous function
struct kk_std_os_path_appdir_fun3373__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_appdir_fun3373(kk_function_t _fself, kk_box_t _b_2716, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_appdir_fun3373(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_appdir_fun3373, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path_appdir_fun3373(kk_function_t _fself, kk_box_t _b_2716, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x3374;
  kk_string_t _x3375 = kk_string_unbox(_b_2716); /*string*/
  _x3374 = kk_std_os_path_path(_x3375, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x3374, _ctx);
}

kk_std_os_path__path kk_std_os_path_appdir(kk_context_t* _ctx) { /* () -> io path */ 
  kk_string_t x_2471 = kk_std_os_path_xapp_path(_ctx); /*string*/;
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_2471, _ctx);
    kk_box_t _x3368 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_appdir_fun3369(_ctx), _ctx); /*3926*/
    return kk_std_os_path__path_unbox(_x3368, _ctx);
  }
  {
    kk_std_os_path__path _x1_2352;
    kk_box_t _x3372 = kk_std_core_hnd__open_none1(kk_std_os_path_new_appdir_fun3373(_ctx), kk_string_box(x_2471), _ctx); /*3357*/
    _x1_2352 = kk_std_os_path__path_unbox(_x3372, _ctx); /*std/os/path/path*/
    kk_evv_t w = kk_evv_swap_create0(kk_context()); /*std/core/hnd/evv<<alloc<global>,console,div,exn,fsys,ndet,net,read<global>,ui,write<global>>>*/;
    kk_std_os_path__path x0;
    kk_string_t _x3376;
    kk_std_core_types__optional _x3377 = kk_std_core_types__new_None(_ctx); /*forall<a> optional<a>*/
    if (kk_std_core_types__is_Optional(_x3377)) {
      kk_box_t _box_x2719 = _x3377._cons.Optional.value;
      kk_string_t _root_105 = kk_string_unbox(_box_x2719);
      _x3376 = _root_105; /*string*/
    }
    else {
      kk_string_t _x00 = _x1_2352.root;
      kk_string_dup(_x00);
      _x3376 = _x00; /*string*/
    }
    kk_std_core__list _x3379;
    {
      kk_std_core__list _x = _x1_2352.parts;
      kk_std_core__list_dup(_x);
      kk_std_os_path__path_drop(_x1_2352, _ctx);
      if (kk_std_core__is_Cons(_x)) {
        struct kk_std_core_Cons* _con3380 = kk_std_core__as_Cons(_x);
        kk_box_t _box_x2720 = _con3380->head;
        kk_std_core__list xx = _con3380->tail;
        if (kk_likely(kk_std_core__list_is_unique(_x))) {
          kk_box_drop(_box_x2720, _ctx);
          kk_std_core__list_free(_x, _ctx);
        }
        else {
          kk_std_core__list_dup(xx);
          kk_std_core__list_decref(_x, _ctx);
        }
        _x3379 = xx; /*list<string>*/
      }
      else {
        _x3379 = kk_std_core__new_Nil(_ctx); /*list<string>*/
      }
    }
    x0 = kk_std_os_path__new_Path(_x3376, _x3379, _ctx); /*std/os/path/path*/
    kk_unit_t keep = kk_Unit;
    kk_evv_set(w,kk_context());
    kk_evv_t w0 = kk_evv_swap_create0(kk_context()); /*std/core/hnd/evv<<alloc<global>,console,div,exn,fsys,ndet,net,read<global>,ui,write<global>>>*/;
    kk_unit_t keep0 = kk_Unit;
    kk_evv_set(w0,kk_context());
    bool _match_2945;
    kk_string_t _x3382;
    {
      kk_std_core__list _x2 = x0.parts;
      kk_std_core__list_dup(_x2);
      if (kk_std_core__is_Cons(_x2)) {
        struct kk_std_core_Cons* _con3383 = kk_std_core__as_Cons(_x2);
        kk_box_t _box_x2721 = _con3383->head;
        kk_std_core__list _pat04 = _con3383->tail;
        kk_string_t x3 = kk_string_unbox(_box_x2721);
        if (kk_likely(kk_std_core__list_is_unique(_x2))) {
          kk_std_core__list_drop(_pat04, _ctx);
          kk_std_core__list_free(_x2, _ctx);
        }
        else {
          kk_string_dup(x3);
          kk_std_core__list_decref(_x2, _ctx);
        }
        _x3382 = x3; /*string*/
      }
      else {
        _x3382 = kk_string_empty(); /*string*/
      }
    }
    kk_string_t _x3386;
    kk_define_string_literal(, _s3387, 3, "bin")
    _x3386 = kk_string_dup(_s3387); /*string*/
    _match_2945 = kk_string_is_eq(_x3382,_x3386,kk_context()); /*bool*/
    if (_match_2945) {
      kk_evv_t w1 = kk_evv_swap_create0(kk_context()); /*std/core/hnd/evv<<alloc<global>,console,div,exn,fsys,ndet,net,read<global>,ui,write<global>>>*/;
      kk_unit_t keep1 = kk_Unit;
      kk_evv_set(w1,kk_context());
      kk_string_t _x3388;
      kk_std_core_types__optional _x3389 = kk_std_core_types__new_None(_ctx); /*forall<a> optional<a>*/
      if (kk_std_core_types__is_Optional(_x3389)) {
        kk_box_t _box_x2722 = _x3389._cons.Optional.value;
        kk_string_t _root_1050 = kk_string_unbox(_box_x2722);
        _x3388 = _root_1050; /*string*/
      }
      else {
        kk_string_t _x000 = x0.root;
        kk_string_dup(_x000);
        _x3388 = _x000; /*string*/
      }
      kk_std_core__list _x3391;
      {
        kk_std_core__list _x13 = x0.parts;
        kk_std_core__list_dup(_x13);
        kk_std_os_path__path_drop(x0, _ctx);
        if (kk_std_core__is_Cons(_x13)) {
          struct kk_std_core_Cons* _con3392 = kk_std_core__as_Cons(_x13);
          kk_box_t _box_x2723 = _con3392->head;
          kk_std_core__list xx0 = _con3392->tail;
          if (kk_likely(kk_std_core__list_is_unique(_x13))) {
            kk_box_drop(_box_x2723, _ctx);
            kk_std_core__list_free(_x13, _ctx);
          }
          else {
            kk_std_core__list_dup(xx0);
            kk_std_core__list_decref(_x13, _ctx);
          }
          _x3391 = xx0; /*list<string>*/
        }
        else {
          _x3391 = kk_std_core__new_Nil(_ctx); /*list<string>*/
        }
      }
      return kk_std_os_path__new_Path(_x3388, _x3391, _ctx);
    }
    {
      kk_evv_t w2 = kk_evv_swap_create0(kk_context()); /*std/core/hnd/evv<<alloc<global>,console,div,exn,fsys,ndet,net,read<global>,ui,write<global>>>*/;
      kk_unit_t keep2 = kk_Unit;
      kk_evv_set(w2,kk_context());
      bool _match_2946;
      kk_string_t _x3394;
      {
        kk_std_core__list _x3 = x0.parts;
        kk_std_core__list_dup(_x3);
        if (kk_std_core__is_Cons(_x3)) {
          struct kk_std_core_Cons* _con3395 = kk_std_core__as_Cons(_x3);
          kk_box_t _box_x2724 = _con3395->head;
          kk_std_core__list _pat07 = _con3395->tail;
          kk_string_t x00 = kk_string_unbox(_box_x2724);
          if (kk_likely(kk_std_core__list_is_unique(_x3))) {
            kk_std_core__list_drop(_pat07, _ctx);
            kk_std_core__list_free(_x3, _ctx);
          }
          else {
            kk_string_dup(x00);
            kk_std_core__list_decref(_x3, _ctx);
          }
          _x3394 = x00; /*string*/
        }
        else {
          _x3394 = kk_string_empty(); /*string*/
        }
      }
      kk_string_t _x3398;
      kk_define_string_literal(, _s3399, 3, "exe")
      _x3398 = kk_string_dup(_s3399); /*string*/
      _match_2946 = kk_string_is_eq(_x3394,_x3398,kk_context()); /*bool*/
      if (_match_2946) {
        kk_evv_t w3 = kk_evv_swap_create0(kk_context()); /*std/core/hnd/evv<<alloc<global>,console,div,exn,fsys,ndet,net,read<global>,ui,write<global>>>*/;
        kk_unit_t keep3 = kk_Unit;
        kk_evv_set(w3,kk_context());
        kk_string_t _x3400;
        kk_std_core_types__optional _x3401 = kk_std_core_types__new_None(_ctx); /*forall<a> optional<a>*/
        if (kk_std_core_types__is_Optional(_x3401)) {
          kk_box_t _box_x2725 = _x3401._cons.Optional.value;
          kk_string_t _root_1051 = kk_string_unbox(_box_x2725);
          _x3400 = _root_1051; /*string*/
        }
        else {
          kk_string_t _x010 = x0.root;
          kk_string_dup(_x010);
          _x3400 = _x010; /*string*/
        }
        kk_std_core__list _x3403;
        {
          kk_std_core__list _x4 = x0.parts;
          kk_std_core__list_dup(_x4);
          kk_std_os_path__path_drop(x0, _ctx);
          if (kk_std_core__is_Cons(_x4)) {
            struct kk_std_core_Cons* _con3404 = kk_std_core__as_Cons(_x4);
            kk_box_t _box_x2726 = _con3404->head;
            kk_std_core__list xx1 = _con3404->tail;
            if (kk_likely(kk_std_core__list_is_unique(_x4))) {
              kk_box_drop(_box_x2726, _ctx);
              kk_std_core__list_free(_x4, _ctx);
            }
            else {
              kk_std_core__list_dup(xx1);
              kk_std_core__list_decref(_x4, _ctx);
            }
            _x3403 = xx1; /*list<string>*/
          }
          else {
            _x3403 = kk_std_core__new_Nil(_ctx); /*list<string>*/
          }
        }
        return kk_std_os_path__new_Path(_x3400, _x3403, _ctx);
      }
      {
        return x0;
      }
    }
  }
}
 
// Change the base name of a path

kk_std_os_path__path kk_std_os_path_change_base(kk_std_os_path__path p, kk_string_t basename0, kk_context_t* _ctx) { /* (p : path, basename : string) -> path */ 
  kk_std_os_path__path q;
  kk_string_t _x3406;
  kk_std_core_types__optional _x3407 = kk_std_core_types__new_None(_ctx); /*forall<a> optional<a>*/
  if (kk_std_core_types__is_Optional(_x3407)) {
    kk_box_t _box_x2728 = _x3407._cons.Optional.value;
    kk_string_t _root_105 = kk_string_unbox(_box_x2728);
    _x3406 = _root_105; /*string*/
  }
  else {
    kk_string_t _x0 = p.root;
    kk_string_dup(_x0);
    _x3406 = _x0; /*string*/
  }
  kk_std_core__list _x3409;
  {
    kk_std_core__list _x = p.parts;
    kk_std_core__list_dup(_x);
    kk_std_os_path__path_drop(p, _ctx);
    if (kk_std_core__is_Cons(_x)) {
      struct kk_std_core_Cons* _con3410 = kk_std_core__as_Cons(_x);
      kk_box_t _box_x2729 = _con3410->head;
      kk_std_core__list xx = _con3410->tail;
      if (kk_likely(kk_std_core__list_is_unique(_x))) {
        kk_box_drop(_box_x2729, _ctx);
        kk_std_core__list_free(_x, _ctx);
      }
      else {
        kk_std_core__list_dup(xx);
        kk_std_core__list_decref(_x, _ctx);
      }
      _x3409 = xx; /*list<string>*/
    }
    else {
      _x3409 = kk_std_core__new_Nil(_ctx); /*list<string>*/
    }
  }
  q = kk_std_os_path__new_Path(_x3406, _x3409, _ctx); /*std/os/path/path*/
  kk_vector_t v_17194;
  kk_string_t _x3412;
  kk_define_string_literal(, _s3413, 1, "/")
  _x3412 = kk_string_dup(_s3413); /*string*/
  v_17194 = kk_string_splitv(basename0,_x3412,kk_context()); /*vector<string>*/
  kk_std_core__list parts0;
  kk_std_core__list _x3414 = kk_std_core_vlist(v_17194, kk_std_core_types__new_None(_ctx), _ctx); /*list<2142>*/
  kk_std_core__list _x3415;
  {
    kk_std_core__list _x00 = q.parts;
    kk_std_core__list_dup(_x00);
    _x3415 = _x00; /*list<string>*/
  }
  parts0 = kk_std_os_path_push_parts(_x3414, _x3415, _ctx); /*list<string>*/
  kk_string_t _x3416;
  {
    kk_string_t _x1 = q.root;
    kk_string_dup(_x1);
    kk_std_os_path__path_drop(q, _ctx);
    _x3416 = _x1; /*string*/
  }
  return kk_std_os_path__new_Path(_x3416, parts0, _ctx);
}

kk_std_core_types__tuple2_ kk_std_os_path_split_base(kk_string_t basename0, kk_context_t* _ctx) { /* (basename : string) -> (string, string) */ 
  kk_ssize_t i;
  kk_string_t _x3417 = kk_string_dup(basename0); /*string*/
  kk_string_t _x3418;
  kk_define_string_literal(, _s3419, 1, ".")
  _x3418 = kk_string_dup(_s3419); /*string*/
  i = kk_string_last_index_of1(_x3417,_x3418,kk_context()); /*ssize_t*/
  bool _match_2941 = kk_std_core_is_zero_1(i, _ctx); /*bool*/;
  if (_match_2941) {
    kk_std_core_types__maybe _match_2942 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
    if (kk_std_core_types__is_Just(_match_2942)) {
      kk_box_t _box_x2730 = _match_2942._cons.Just.value;
      kk_std_core__sslice slice = kk_std_core__sslice_unbox(_box_x2730, NULL);
      kk_string_drop(basename0, _ctx);
      kk_std_core__sslice_dup(slice);
      kk_std_core_types__maybe_drop(_match_2942, _ctx);
      kk_string_t _b_2737_2731;
      kk_std_core__sslice _x3421;
      {
        kk_string_t s0 = slice.str;
        kk_ssize_t start0 = slice.start;
        kk_string_dup(s0);
        kk_ssize_t _x3422 = (KK_IZ(0)); /*ssize_t*/
        _x3421 = kk_std_core__new_Sslice(s0, _x3422, start0, _ctx); /*sslice*/
      }
      _b_2737_2731 = kk_std_core_string_3(_x3421, _ctx); /*string*/
      kk_string_t _b_2738_2732;
      kk_std_core__sslice _x3423 = kk_std_core_after(slice, _ctx); /*sslice*/
      _b_2738_2732 = kk_std_core_string_3(_x3423, _ctx); /*string*/
      return kk_std_core_types__new_dash__lp__comma__rp_(kk_string_box(_b_2737_2731), kk_string_box(_b_2738_2732), _ctx);
    }
    {
      kk_box_t _x3424;
      kk_string_t _x3425 = kk_string_empty(); /*string*/
      _x3424 = kk_string_box(_x3425); /*7*/
      return kk_std_core_types__new_dash__lp__comma__rp_(kk_string_box(basename0), _x3424, _ctx);
    }
  }
  {
    kk_ssize_t _pat100 = kk_std_core_decr_1(i, _ctx); /*ssize_t*/;
    kk_ssize_t _pat20;
    kk_string_t _x3427;
    kk_define_string_literal(, _s3428, 1, ".")
    _x3427 = kk_string_dup(_s3428); /*string*/
    _pat20 = kk_string_len(_x3427,kk_context()); /*ssize_t*/
    kk_std_core__sslice slice0 = kk_std_core__new_Sslice(basename0, _pat100, _pat20, _ctx); /*sslice*/;
    kk_string_t _b_2741_2735;
    kk_std_core__sslice _x3429;
    {
      kk_string_t s00 = slice0.str;
      kk_ssize_t start00 = slice0.start;
      kk_string_dup(s00);
      kk_ssize_t _x3430 = (KK_IZ(0)); /*ssize_t*/
      _x3429 = kk_std_core__new_Sslice(s00, _x3430, start00, _ctx); /*sslice*/
    }
    _b_2741_2735 = kk_std_core_string_3(_x3429, _ctx); /*string*/
    kk_string_t _b_2742_2736;
    kk_std_core__sslice _x3431 = kk_std_core_after(slice0, _ctx); /*sslice*/
    _b_2742_2736 = kk_std_core_string_3(_x3431, _ctx); /*string*/
    return kk_std_core_types__new_dash__lp__comma__rp_(kk_string_box(_b_2741_2735), kk_string_box(_b_2742_2736), _ctx);
  }
}
 
// Change the extension of a path.
// Only adds a dot if the extname does not already start with a dot.

kk_std_os_path__path kk_std_os_path_change_ext(kk_std_os_path__path p, kk_string_t extname0, kk_context_t* _ctx) { /* (p : path, extname : string) -> path */ 
  kk_ssize_t i;
  kk_string_t _x3432;
  {
    kk_std_core__list _x = p.parts;
    kk_std_core__list_dup(_x);
    if (kk_std_core__is_Cons(_x)) {
      struct kk_std_core_Cons* _con3433 = kk_std_core__as_Cons(_x);
      kk_box_t _box_x2743 = _con3433->head;
      kk_std_core__list _pat02 = _con3433->tail;
      kk_string_t x = kk_string_unbox(_box_x2743);
      if (kk_likely(kk_std_core__list_is_unique(_x))) {
        kk_std_core__list_drop(_pat02, _ctx);
        kk_std_core__list_free(_x, _ctx);
      }
      else {
        kk_string_dup(x);
        kk_std_core__list_decref(_x, _ctx);
      }
      _x3432 = x; /*string*/
    }
    else {
      _x3432 = kk_string_empty(); /*string*/
    }
  }
  kk_string_t _x3436;
  kk_define_string_literal(, _s3437, 1, ".")
  _x3436 = kk_string_dup(_s3437); /*string*/
  i = kk_string_last_index_of1(_x3432,_x3436,kk_context()); /*ssize_t*/
  bool _match_2936 = kk_std_core_is_zero_1(i, _ctx); /*bool*/;
  if (_match_2936) {
    kk_std_core_types__maybe _match_2938 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
    if (kk_std_core_types__is_Just(_match_2938)) {
      kk_box_t _box_x2744 = _match_2938._cons.Just.value;
      kk_std_core__sslice slice = kk_std_core__sslice_unbox(_box_x2744, NULL);
      kk_std_core__sslice_dup(slice);
      kk_std_core_types__maybe_drop(_match_2938, _ctx);
      kk_string_t stemname0;
      kk_std_core__sslice _x3439;
      {
        kk_string_t s0 = slice.str;
        kk_ssize_t start0 = slice.start;
        kk_string_dup(s0);
        kk_ssize_t _x3440 = (KK_IZ(0)); /*ssize_t*/
        _x3439 = kk_std_core__new_Sslice(s0, _x3440, start0, _ctx); /*sslice*/
      }
      stemname0 = kk_std_core_string_3(_x3439, _ctx); /*string*/
      kk_string_t _pat110;
      kk_std_core__sslice _x3441 = kk_std_core_after(slice, _ctx); /*sslice*/
      _pat110 = kk_std_core_string_3(_x3441, _ctx); /*string*/
      kk_string_drop(_pat110, _ctx);
      kk_std_core_types__maybe m_2128;
      bool _match_2940;
      kk_string_t _x3442 = kk_string_dup(extname0); /*string*/
      kk_string_t _x3443;
      kk_define_string_literal(, _s3444, 1, ".")
      _x3443 = kk_string_dup(_s3444); /*string*/
      _match_2940 = kk_string_starts_with(_x3442,_x3443,kk_context()); /*bool*/
      if (_match_2940) {
        kk_std_core__sslice _b_2746_2745;
        kk_string_t _x3445 = kk_string_dup(extname0); /*string*/
        kk_ssize_t _x3446;
        kk_string_t _x3447;
        kk_define_string_literal(, _s3448, 1, ".")
        _x3447 = kk_string_dup(_s3448); /*string*/
        _x3446 = kk_string_len(_x3447,kk_context()); /*ssize_t*/
        kk_ssize_t _x3449;
        kk_ssize_t _x3450;
        kk_string_t _x3451 = kk_string_dup(extname0); /*string*/
        _x3450 = kk_string_len(_x3451,kk_context()); /*ssize_t*/
        kk_ssize_t _x3452;
        kk_string_t _x3453;
        kk_define_string_literal(, _s3454, 1, ".")
        _x3453 = kk_string_dup(_s3454); /*string*/
        _x3452 = kk_string_len(_x3453,kk_context()); /*ssize_t*/
        _x3449 = (_x3450 - _x3452); /*ssize_t*/
        _b_2746_2745 = kk_std_core__new_Sslice(_x3445, _x3446, _x3449, _ctx); /*sslice*/
        m_2128 = kk_std_core_types__new_Just(kk_std_core__sslice_box(_b_2746_2745, _ctx), _ctx); /*maybe<sslice>*/
      }
      else {
        m_2128 = kk_std_core_types__new_Nothing(_ctx); /*maybe<sslice>*/
      }
      kk_string_t newext;
      if (kk_std_core_types__is_Nothing(m_2128)) {
        kk_string_t _x3455;
        kk_define_string_literal(, _s3456, 1, ".")
        _x3455 = kk_string_dup(_s3456); /*string*/
        newext = kk_std_core__lp__plus__plus__1_rp_(_x3455, extname0, _ctx); /*string*/
      }
      else {
        kk_std_core_types__maybe_drop(m_2128, _ctx);
        newext = extname0; /*string*/
      }
      kk_string_t s0_2132 = kk_std_core__lp__plus__plus__1_rp_(stemname0, newext, _ctx); /*string*/;
      kk_vector_t v_17194;
      kk_string_t _x3457;
      kk_define_string_literal(, _s3458, 1, "/")
      _x3457 = kk_string_dup(_s3458); /*string*/
      v_17194 = kk_string_splitv(s0_2132,_x3457,kk_context()); /*vector<string>*/
      kk_std_core__list parts1;
      kk_std_core__list _x3459 = kk_std_core_vlist(v_17194, kk_std_core_types__new_None(_ctx), _ctx); /*list<2142>*/
      kk_std_core__list _x3460;
      {
        kk_std_core__list _x0 = p.parts;
        kk_std_core__list_dup(_x0);
        if (kk_std_core__is_Cons(_x0)) {
          struct kk_std_core_Cons* _con3461 = kk_std_core__as_Cons(_x0);
          kk_box_t _box_x2747 = _con3461->head;
          kk_std_core__list xx = _con3461->tail;
          if (kk_likely(kk_std_core__list_is_unique(_x0))) {
            kk_box_drop(_box_x2747, _ctx);
            kk_std_core__list_free(_x0, _ctx);
          }
          else {
            kk_std_core__list_dup(xx);
            kk_std_core__list_decref(_x0, _ctx);
          }
          _x3460 = xx; /*list<string>*/
        }
        else {
          _x3460 = kk_std_core__new_Nil(_ctx); /*list<string>*/
        }
      }
      parts1 = kk_std_os_path_push_parts(_x3459, _x3460, _ctx); /*list<string>*/
      kk_string_t _x3463;
      {
        kk_string_t _x00 = p.root;
        kk_string_dup(_x00);
        kk_std_os_path__path_drop(p, _ctx);
        _x3463 = _x00; /*string*/
      }
      return kk_std_os_path__new_Path(_x3463, parts1, _ctx);
    }
    {
      kk_std_core_types__maybe m_21280;
      bool _match_2939;
      kk_string_t _x3464 = kk_string_dup(extname0); /*string*/
      kk_string_t _x3465;
      kk_define_string_literal(, _s3466, 1, ".")
      _x3465 = kk_string_dup(_s3466); /*string*/
      _match_2939 = kk_string_starts_with(_x3464,_x3465,kk_context()); /*bool*/
      if (_match_2939) {
        kk_std_core__sslice _b_2749_2748;
        kk_string_t _x3467 = kk_string_dup(extname0); /*string*/
        kk_ssize_t _x3468;
        kk_string_t _x3469;
        kk_define_string_literal(, _s3470, 1, ".")
        _x3469 = kk_string_dup(_s3470); /*string*/
        _x3468 = kk_string_len(_x3469,kk_context()); /*ssize_t*/
        kk_ssize_t _x3471;
        kk_ssize_t _x3472;
        kk_string_t _x3473 = kk_string_dup(extname0); /*string*/
        _x3472 = kk_string_len(_x3473,kk_context()); /*ssize_t*/
        kk_ssize_t _x3474;
        kk_string_t _x3475;
        kk_define_string_literal(, _s3476, 1, ".")
        _x3475 = kk_string_dup(_s3476); /*string*/
        _x3474 = kk_string_len(_x3475,kk_context()); /*ssize_t*/
        _x3471 = (_x3472 - _x3474); /*ssize_t*/
        _b_2749_2748 = kk_std_core__new_Sslice(_x3467, _x3468, _x3471, _ctx); /*sslice*/
        m_21280 = kk_std_core_types__new_Just(kk_std_core__sslice_box(_b_2749_2748, _ctx), _ctx); /*maybe<sslice>*/
      }
      else {
        m_21280 = kk_std_core_types__new_Nothing(_ctx); /*maybe<sslice>*/
      }
      kk_string_t newext0;
      if (kk_std_core_types__is_Nothing(m_21280)) {
        kk_string_t _x3477;
        kk_define_string_literal(, _s3478, 1, ".")
        _x3477 = kk_string_dup(_s3478); /*string*/
        newext0 = kk_std_core__lp__plus__plus__1_rp_(_x3477, extname0, _ctx); /*string*/
      }
      else {
        kk_std_core_types__maybe_drop(m_21280, _ctx);
        newext0 = extname0; /*string*/
      }
      kk_string_t s0_21320;
      kk_string_t _x3479;
      {
        kk_std_core__list _x1 = p.parts;
        kk_std_core__list_dup(_x1);
        if (kk_std_core__is_Cons(_x1)) {
          struct kk_std_core_Cons* _con3480 = kk_std_core__as_Cons(_x1);
          kk_box_t _box_x2750 = _con3480->head;
          kk_std_core__list _pat020 = _con3480->tail;
          kk_string_t x0 = kk_string_unbox(_box_x2750);
          if (kk_likely(kk_std_core__list_is_unique(_x1))) {
            kk_std_core__list_drop(_pat020, _ctx);
            kk_std_core__list_free(_x1, _ctx);
          }
          else {
            kk_string_dup(x0);
            kk_std_core__list_decref(_x1, _ctx);
          }
          _x3479 = x0; /*string*/
        }
        else {
          _x3479 = kk_string_empty(); /*string*/
        }
      }
      s0_21320 = kk_std_core__lp__plus__plus__1_rp_(_x3479, newext0, _ctx); /*string*/
      kk_vector_t v_171940;
      kk_string_t _x3483;
      kk_define_string_literal(, _s3484, 1, "/")
      _x3483 = kk_string_dup(_s3484); /*string*/
      v_171940 = kk_string_splitv(s0_21320,_x3483,kk_context()); /*vector<string>*/
      kk_std_core__list parts10;
      kk_std_core__list _x3485 = kk_std_core_vlist(v_171940, kk_std_core_types__new_None(_ctx), _ctx); /*list<2142>*/
      kk_std_core__list _x3486;
      {
        kk_std_core__list _x01 = p.parts;
        kk_std_core__list_dup(_x01);
        if (kk_std_core__is_Cons(_x01)) {
          struct kk_std_core_Cons* _con3487 = kk_std_core__as_Cons(_x01);
          kk_box_t _box_x2751 = _con3487->head;
          kk_std_core__list xx0 = _con3487->tail;
          if (kk_likely(kk_std_core__list_is_unique(_x01))) {
            kk_box_drop(_box_x2751, _ctx);
            kk_std_core__list_free(_x01, _ctx);
          }
          else {
            kk_std_core__list_dup(xx0);
            kk_std_core__list_decref(_x01, _ctx);
          }
          _x3486 = xx0; /*list<string>*/
        }
        else {
          _x3486 = kk_std_core__new_Nil(_ctx); /*list<string>*/
        }
      }
      parts10 = kk_std_os_path_push_parts(_x3485, _x3486, _ctx); /*list<string>*/
      kk_string_t _x3489;
      {
        kk_string_t _x000 = p.root;
        kk_string_dup(_x000);
        kk_std_os_path__path_drop(p, _ctx);
        _x3489 = _x000; /*string*/
      }
      return kk_std_os_path__new_Path(_x3489, parts10, _ctx);
    }
  }
  {
    kk_ssize_t _pat100 = kk_std_core_decr_1(i, _ctx); /*ssize_t*/;
    kk_ssize_t _pat20;
    kk_string_t _x3490;
    kk_define_string_literal(, _s3491, 1, ".")
    _x3490 = kk_string_dup(_s3491); /*string*/
    _pat20 = kk_string_len(_x3490,kk_context()); /*ssize_t*/
    kk_std_core__sslice slice0;
    kk_string_t _x3492;
    {
      kk_std_core__list _x2 = p.parts;
      kk_std_core__list_dup(_x2);
      if (kk_std_core__is_Cons(_x2)) {
        struct kk_std_core_Cons* _con3493 = kk_std_core__as_Cons(_x2);
        kk_box_t _box_x2752 = _con3493->head;
        kk_std_core__list _pat021 = _con3493->tail;
        kk_string_t x1 = kk_string_unbox(_box_x2752);
        if (kk_likely(kk_std_core__list_is_unique(_x2))) {
          kk_std_core__list_drop(_pat021, _ctx);
          kk_std_core__list_free(_x2, _ctx);
        }
        else {
          kk_string_dup(x1);
          kk_std_core__list_decref(_x2, _ctx);
        }
        _x3492 = x1; /*string*/
      }
      else {
        _x3492 = kk_string_empty(); /*string*/
      }
    }
    slice0 = kk_std_core__new_Sslice(_x3492, _pat100, _pat20, _ctx); /*sslice*/
    kk_string_t stemname00;
    kk_std_core__sslice _x3496;
    {
      kk_string_t s00 = slice0.str;
      kk_ssize_t start00 = slice0.start;
      kk_string_dup(s00);
      kk_ssize_t _x3497 = (KK_IZ(0)); /*ssize_t*/
      _x3496 = kk_std_core__new_Sslice(s00, _x3497, start00, _ctx); /*sslice*/
    }
    stemname00 = kk_std_core_string_3(_x3496, _ctx); /*string*/
    kk_string_t _pat1100;
    kk_std_core__sslice _x3498 = kk_std_core_after(slice0, _ctx); /*sslice*/
    _pat1100 = kk_std_core_string_3(_x3498, _ctx); /*string*/
    kk_string_drop(_pat1100, _ctx);
    kk_std_core_types__maybe m_21281;
    bool _match_2937;
    kk_string_t _x3499 = kk_string_dup(extname0); /*string*/
    kk_string_t _x3500;
    kk_define_string_literal(, _s3501, 1, ".")
    _x3500 = kk_string_dup(_s3501); /*string*/
    _match_2937 = kk_string_starts_with(_x3499,_x3500,kk_context()); /*bool*/
    if (_match_2937) {
      kk_std_core__sslice _b_2754_2753;
      kk_string_t _x3502 = kk_string_dup(extname0); /*string*/
      kk_ssize_t _x3503;
      kk_string_t _x3504;
      kk_define_string_literal(, _s3505, 1, ".")
      _x3504 = kk_string_dup(_s3505); /*string*/
      _x3503 = kk_string_len(_x3504,kk_context()); /*ssize_t*/
      kk_ssize_t _x3506;
      kk_ssize_t _x3507;
      kk_string_t _x3508 = kk_string_dup(extname0); /*string*/
      _x3507 = kk_string_len(_x3508,kk_context()); /*ssize_t*/
      kk_ssize_t _x3509;
      kk_string_t _x3510;
      kk_define_string_literal(, _s3511, 1, ".")
      _x3510 = kk_string_dup(_s3511); /*string*/
      _x3509 = kk_string_len(_x3510,kk_context()); /*ssize_t*/
      _x3506 = (_x3507 - _x3509); /*ssize_t*/
      _b_2754_2753 = kk_std_core__new_Sslice(_x3502, _x3503, _x3506, _ctx); /*sslice*/
      m_21281 = kk_std_core_types__new_Just(kk_std_core__sslice_box(_b_2754_2753, _ctx), _ctx); /*maybe<sslice>*/
    }
    else {
      m_21281 = kk_std_core_types__new_Nothing(_ctx); /*maybe<sslice>*/
    }
    kk_string_t newext1;
    if (kk_std_core_types__is_Nothing(m_21281)) {
      kk_string_t _x3512;
      kk_define_string_literal(, _s3513, 1, ".")
      _x3512 = kk_string_dup(_s3513); /*string*/
      newext1 = kk_std_core__lp__plus__plus__1_rp_(_x3512, extname0, _ctx); /*string*/
    }
    else {
      kk_std_core_types__maybe_drop(m_21281, _ctx);
      newext1 = extname0; /*string*/
    }
    kk_string_t s0_21321 = kk_std_core__lp__plus__plus__1_rp_(stemname00, newext1, _ctx); /*string*/;
    kk_vector_t v_171941;
    kk_string_t _x3514;
    kk_define_string_literal(, _s3515, 1, "/")
    _x3514 = kk_string_dup(_s3515); /*string*/
    v_171941 = kk_string_splitv(s0_21321,_x3514,kk_context()); /*vector<string>*/
    kk_std_core__list parts11;
    kk_std_core__list _x3516 = kk_std_core_vlist(v_171941, kk_std_core_types__new_None(_ctx), _ctx); /*list<2142>*/
    kk_std_core__list _x3517;
    {
      kk_std_core__list _x3 = p.parts;
      kk_std_core__list_dup(_x3);
      if (kk_std_core__is_Cons(_x3)) {
        struct kk_std_core_Cons* _con3518 = kk_std_core__as_Cons(_x3);
        kk_box_t _box_x2755 = _con3518->head;
        kk_std_core__list xx1 = _con3518->tail;
        if (kk_likely(kk_std_core__list_is_unique(_x3))) {
          kk_box_drop(_box_x2755, _ctx);
          kk_std_core__list_free(_x3, _ctx);
        }
        else {
          kk_std_core__list_dup(xx1);
          kk_std_core__list_decref(_x3, _ctx);
        }
        _x3517 = xx1; /*list<string>*/
      }
      else {
        _x3517 = kk_std_core__new_Nil(_ctx); /*list<string>*/
      }
    }
    parts11 = kk_std_os_path_push_parts(_x3516, _x3517, _ctx); /*list<string>*/
    kk_string_t _x3520;
    {
      kk_string_t _x02 = p.root;
      kk_string_dup(_x02);
      kk_std_os_path__path_drop(p, _ctx);
      _x3520 = _x02; /*string*/
    }
    return kk_std_os_path__new_Path(_x3520, parts11, _ctx);
  }
}
 
// Return the extension of path (without the preceding dot (`'.'`))
// `"/foo/bar.svg.txt".path.extname === "txt"`

kk_string_t kk_std_os_path_extname(kk_std_os_path__path p, kk_context_t* _ctx) { /* (p : path) -> string */ 
  kk_ssize_t i;
  kk_string_t _x3521;
  {
    kk_std_core__list _x0 = p.parts;
    kk_std_core__list_dup(_x0);
    if (kk_std_core__is_Cons(_x0)) {
      struct kk_std_core_Cons* _con3522 = kk_std_core__as_Cons(_x0);
      kk_box_t _box_x2756 = _con3522->head;
      kk_std_core__list _pat03 = _con3522->tail;
      kk_string_t x = kk_string_unbox(_box_x2756);
      if (kk_likely(kk_std_core__list_is_unique(_x0))) {
        kk_std_core__list_drop(_pat03, _ctx);
        kk_std_core__list_free(_x0, _ctx);
      }
      else {
        kk_string_dup(x);
        kk_std_core__list_decref(_x0, _ctx);
      }
      _x3521 = x; /*string*/
    }
    else {
      _x3521 = kk_string_empty(); /*string*/
    }
  }
  kk_string_t _x3525;
  kk_define_string_literal(, _s3526, 1, ".")
  _x3525 = kk_string_dup(_s3526); /*string*/
  i = kk_string_last_index_of1(_x3521,_x3525,kk_context()); /*ssize_t*/
  kk_std_core_types__tuple2_ _this_2137;
  bool _match_2934 = kk_std_core_is_zero_1(i, _ctx); /*bool*/;
  if (_match_2934) {
    kk_std_core_types__maybe _match_2935 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
    if (kk_std_core_types__is_Just(_match_2935)) {
      kk_box_t _box_x2757 = _match_2935._cons.Just.value;
      kk_std_core__sslice slice = kk_std_core__sslice_unbox(_box_x2757, NULL);
      kk_std_os_path__path_drop(p, _ctx);
      kk_std_core__sslice_dup(slice);
      kk_std_core_types__maybe_drop(_match_2935, _ctx);
      kk_string_t _b_2766_2758;
      kk_std_core__sslice _x3528;
      {
        kk_string_t s0 = slice.str;
        kk_ssize_t start0 = slice.start;
        kk_string_dup(s0);
        kk_ssize_t _x3529 = (KK_IZ(0)); /*ssize_t*/
        _x3528 = kk_std_core__new_Sslice(s0, _x3529, start0, _ctx); /*sslice*/
      }
      _b_2766_2758 = kk_std_core_string_3(_x3528, _ctx); /*string*/
      kk_string_t _b_2767_2759;
      kk_std_core__sslice _x3530 = kk_std_core_after(slice, _ctx); /*sslice*/
      _b_2767_2759 = kk_std_core_string_3(_x3530, _ctx); /*string*/
      _this_2137 = kk_std_core_types__new_dash__lp__comma__rp_(kk_string_box(_b_2766_2758), kk_string_box(_b_2767_2759), _ctx); /*(string, string)*/
    }
    else {
      kk_box_t _x3531;
      kk_string_t _x3532;
      {
        kk_std_core__list _x00 = p.parts;
        kk_std_core__list_dup(_x00);
        kk_std_os_path__path_drop(p, _ctx);
        if (kk_std_core__is_Cons(_x00)) {
          struct kk_std_core_Cons* _con3533 = kk_std_core__as_Cons(_x00);
          kk_box_t _box_x2760 = _con3533->head;
          kk_std_core__list _pat030 = _con3533->tail;
          kk_string_t x0 = kk_string_unbox(_box_x2760);
          if (kk_likely(kk_std_core__list_is_unique(_x00))) {
            kk_std_core__list_drop(_pat030, _ctx);
            kk_std_core__list_free(_x00, _ctx);
          }
          else {
            kk_string_dup(x0);
            kk_std_core__list_decref(_x00, _ctx);
          }
          _x3532 = x0; /*string*/
        }
        else {
          _x3532 = kk_string_empty(); /*string*/
        }
      }
      _x3531 = kk_string_box(_x3532); /*6*/
      kk_box_t _x3536;
      kk_string_t _x3537 = kk_string_empty(); /*string*/
      _x3536 = kk_string_box(_x3537); /*7*/
      _this_2137 = kk_std_core_types__new_dash__lp__comma__rp_(_x3531, _x3536, _ctx); /*(string, string)*/
    }
  }
  else {
    kk_ssize_t _pat100 = kk_std_core_decr_1(i, _ctx); /*ssize_t*/;
    kk_ssize_t _pat200;
    kk_string_t _x3539;
    kk_define_string_literal(, _s3540, 1, ".")
    _x3539 = kk_string_dup(_s3540); /*string*/
    _pat200 = kk_string_len(_x3539,kk_context()); /*ssize_t*/
    kk_std_core__sslice slice0;
    kk_string_t _x3541;
    {
      kk_std_core__list _x01 = p.parts;
      kk_std_core__list_dup(_x01);
      kk_std_os_path__path_drop(p, _ctx);
      if (kk_std_core__is_Cons(_x01)) {
        struct kk_std_core_Cons* _con3542 = kk_std_core__as_Cons(_x01);
        kk_box_t _box_x2763 = _con3542->head;
        kk_std_core__list _pat031 = _con3542->tail;
        kk_string_t x1 = kk_string_unbox(_box_x2763);
        if (kk_likely(kk_std_core__list_is_unique(_x01))) {
          kk_std_core__list_drop(_pat031, _ctx);
          kk_std_core__list_free(_x01, _ctx);
        }
        else {
          kk_string_dup(x1);
          kk_std_core__list_decref(_x01, _ctx);
        }
        _x3541 = x1; /*string*/
      }
      else {
        _x3541 = kk_string_empty(); /*string*/
      }
    }
    slice0 = kk_std_core__new_Sslice(_x3541, _pat100, _pat200, _ctx); /*sslice*/
    kk_string_t _b_2770_2764;
    kk_std_core__sslice _x3545;
    {
      kk_string_t s00 = slice0.str;
      kk_ssize_t start00 = slice0.start;
      kk_string_dup(s00);
      kk_ssize_t _x3546 = (KK_IZ(0)); /*ssize_t*/
      _x3545 = kk_std_core__new_Sslice(s00, _x3546, start00, _ctx); /*sslice*/
    }
    _b_2770_2764 = kk_std_core_string_3(_x3545, _ctx); /*string*/
    kk_string_t _b_2771_2765;
    kk_std_core__sslice _x3547 = kk_std_core_after(slice0, _ctx); /*sslice*/
    _b_2771_2765 = kk_std_core_string_3(_x3547, _ctx); /*string*/
    _this_2137 = kk_std_core_types__new_dash__lp__comma__rp_(kk_string_box(_b_2770_2764), kk_string_box(_b_2771_2765), _ctx); /*(string, string)*/
  }
  {
    kk_box_t _box_x2772 = _this_2137.fst;
    kk_box_t _box_x2773 = _this_2137.snd;
    kk_string_t _x = kk_string_unbox(_box_x2773);
    kk_string_dup(_x);
    kk_std_core_types__tuple2__drop(_this_2137, _ctx);
    return _x;
  }
}
 
// Change the stem name of a path

kk_std_os_path__path kk_std_os_path_change_stem(kk_std_os_path__path p, kk_string_t stemname0, kk_context_t* _ctx) { /* (p : path, stemname : string) -> path */ 
  kk_string_t ext;
  kk_std_os_path__path _x3550 = kk_std_os_path__path_dup(p); /*std/os/path/path*/
  ext = kk_std_os_path_extname(_x3550, _ctx); /*string*/
  kk_string_t basename0_2147;
  kk_string_t _x3551;
  bool _match_2933;
  kk_string_t _x3552 = kk_string_dup(ext); /*string*/
  kk_string_t _x3553 = kk_string_empty(); /*string*/
  _match_2933 = kk_string_is_eq(_x3552,_x3553,kk_context()); /*bool*/
  if (_match_2933) {
    kk_string_drop(ext, _ctx);
    _x3551 = kk_string_empty(); /*string*/
  }
  else {
    kk_string_t _x3556;
    kk_define_string_literal(, _s3557, 1, ".")
    _x3556 = kk_string_dup(_s3557); /*string*/
    _x3551 = kk_std_core__lp__plus__plus__1_rp_(_x3556, ext, _ctx); /*string*/
  }
  basename0_2147 = kk_std_core__lp__plus__plus__1_rp_(stemname0, _x3551, _ctx); /*string*/
  kk_std_os_path__path q;
  kk_string_t _x3558;
  kk_std_core_types__optional _x3559 = kk_std_core_types__new_None(_ctx); /*forall<a> optional<a>*/
  if (kk_std_core_types__is_Optional(_x3559)) {
    kk_box_t _box_x2774 = _x3559._cons.Optional.value;
    kk_string_t _root_105 = kk_string_unbox(_box_x2774);
    _x3558 = _root_105; /*string*/
  }
  else {
    kk_string_t _x0 = p.root;
    kk_string_dup(_x0);
    _x3558 = _x0; /*string*/
  }
  kk_std_core__list _x3561;
  {
    kk_std_core__list _x = p.parts;
    kk_std_core__list_dup(_x);
    kk_std_os_path__path_drop(p, _ctx);
    if (kk_std_core__is_Cons(_x)) {
      struct kk_std_core_Cons* _con3562 = kk_std_core__as_Cons(_x);
      kk_box_t _box_x2775 = _con3562->head;
      kk_std_core__list xx = _con3562->tail;
      if (kk_likely(kk_std_core__list_is_unique(_x))) {
        kk_box_drop(_box_x2775, _ctx);
        kk_std_core__list_free(_x, _ctx);
      }
      else {
        kk_std_core__list_dup(xx);
        kk_std_core__list_decref(_x, _ctx);
      }
      _x3561 = xx; /*list<string>*/
    }
    else {
      _x3561 = kk_std_core__new_Nil(_ctx); /*list<string>*/
    }
  }
  q = kk_std_os_path__new_Path(_x3558, _x3561, _ctx); /*std/os/path/path*/
  kk_vector_t v_17194;
  kk_string_t _x3564;
  kk_define_string_literal(, _s3565, 1, "/")
  _x3564 = kk_string_dup(_s3565); /*string*/
  v_17194 = kk_string_splitv(basename0_2147,_x3564,kk_context()); /*vector<string>*/
  kk_std_core__list parts0;
  kk_std_core__list _x3566 = kk_std_core_vlist(v_17194, kk_std_core_types__new_None(_ctx), _ctx); /*list<2142>*/
  kk_std_core__list _x3567;
  {
    kk_std_core__list _x00 = q.parts;
    kk_std_core__list_dup(_x00);
    _x3567 = _x00; /*list<string>*/
  }
  parts0 = kk_std_os_path_push_parts(_x3566, _x3567, _ctx); /*list<string>*/
  kk_string_t _x3568;
  {
    kk_string_t _x1 = q.root;
    kk_string_dup(_x1);
    kk_std_os_path__path_drop(q, _ctx);
    _x3568 = _x1; /*string*/
  }
  return kk_std_os_path__new_Path(_x3568, parts0, _ctx);
}
 
// lifted local: combine, .spec.2292
// specialized: std/core/foldl, on parameters f, using:
// f = std/os/path/(/)

kk_std_os_path__path kk_std_os_path__lift2293_combine(kk_std_core__list xs, kk_std_os_path__path z, kk_context_t* _ctx) { /* (xs : list<path>, z : path) -> path */ 
  kk__tailcall: ;
  if (kk_std_core__is_Cons(xs)) {
    struct kk_std_core_Cons* _con3569 = kk_std_core__as_Cons(xs);
    kk_box_t _box_x2776 = _con3569->head;
    kk_std_core__list xx = _con3569->tail;
    kk_std_os_path__path x = kk_std_os_path__path_unbox(_box_x2776, NULL);
    if (kk_likely(kk_std_core__list_is_unique(xs))) {
      kk_std_os_path__path_dup(x);
      kk_box_drop(_box_x2776, _ctx);
      kk_std_core__list_free(xs, _ctx);
    }
    else {
      kk_std_os_path__path_dup(x);
      kk_std_core__list_dup(xx);
      kk_std_core__list_decref(xs, _ctx);
    }
    { // tailcall
      kk_std_os_path__path _x3571 = kk_std_os_path__lp__fs__rp_(z, x, _ctx); /*std/os/path/path*/
      xs = xx;
      z = _x3571;
      goto kk__tailcall;
    }
  }
  {
    return z;
  }
}
 
// Combine multiple paths using `(/)`.

kk_std_os_path__path kk_std_os_path_combine(kk_std_core__list ps, kk_context_t* _ctx) { /* (ps : list<path>) -> path */ 
  if (kk_std_core__is_Nil(ps)) {
    kk_string_t _x3572;
    kk_std_core_types__optional _x3573 = kk_std_core_types__new_None(_ctx); /*forall<a> optional<a>*/
    if (kk_std_core_types__is_Optional(_x3573)) {
      kk_box_t _box_x2777 = _x3573._cons.Optional.value;
      kk_string_t _root_871 = kk_string_unbox(_box_x2777);
      _x3572 = _root_871; /*string*/
    }
    else {
      _x3572 = kk_string_empty(); /*string*/
    }
    kk_std_core__list _x3576;
    kk_std_core_types__optional _x3577 = kk_std_core_types__new_None(_ctx); /*forall<a> optional<a>*/
    if (kk_std_core_types__is_Optional(_x3577)) {
      kk_box_t _box_x2778 = _x3577._cons.Optional.value;
      kk_std_core__list _parts_876 = kk_std_core__list_unbox(_box_x2778, NULL);
      _x3576 = _parts_876; /*list<string>*/
    }
    else {
      _x3576 = kk_std_core__new_Nil(_ctx); /*list<string>*/
    }
    return kk_std_os_path__new_Path(_x3572, _x3576, _ctx);
  }
  {
    struct kk_std_core_Cons* _con3579 = kk_std_core__as_Cons(ps);
    kk_box_t _box_x2779 = _con3579->head;
    kk_std_core__list pp = _con3579->tail;
    kk_std_os_path__path p = kk_std_os_path__path_unbox(_box_x2779, NULL);
    if (kk_likely(kk_std_core__list_is_unique(ps))) {
      kk_std_os_path__path_dup(p);
      kk_box_drop(_box_x2779, _ctx);
      kk_std_core__list_free(ps, _ctx);
    }
    else {
      kk_std_os_path__path_dup(p);
      kk_std_core__list_dup(pp);
      kk_std_core__list_decref(ps, _ctx);
    }
    return kk_std_os_path__lift2293_combine(pp, p, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift2386_realpath_fun3582__t_1 {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift2386_realpath_fun3582_1(kk_function_t _fself, kk_box_t _b_2782, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift2386_realpath_fun3582_1(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift2386_realpath_fun3582_1, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path__mlift2386_realpath_fun3582_1(kk_function_t _fself, kk_box_t _b_2782, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x3583;
  kk_string_t _x3584 = kk_string_unbox(_b_2782); /*string*/
  _x3583 = kk_std_os_path_path(_x3584, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x3583, _ctx);
}

kk_std_os_path__path kk_std_os_path__mlift2386_realpath_1(kk_string_t _y_2333, kk_context_t* _ctx) { /* (string) -> io path */ 
  kk_box_t _x3581 = kk_std_core_hnd__open_none1(kk_std_os_path__new_mlift2386_realpath_fun3582_1(_ctx), kk_string_box(_y_2333), _ctx); /*3357*/
  return kk_std_os_path__path_unbox(_x3581, _ctx);
}
 
// Convert a path to the absolute path on the file system.
// The overload on a plain string is necessary as it allows
// for unnormalized paths with `".."` parts. For example
// `"/foo/symlink/../test.txt"` may resolve to `"/bar/test.txt"` if
// ``symlink`` is a symbolic link to a sub directory of `"/bar"`.


// lift anonymous function
struct kk_std_os_path_realpath_fun3586__t_1 {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_realpath_fun3586_1(kk_function_t _fself, kk_box_t _b_2786, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_realpath_fun3586_1(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_realpath_fun3586_1, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path_realpath_fun3586_1(kk_function_t _fself, kk_box_t _b_2786, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x3587;
  kk_string_t _x3588 = kk_string_unbox(_b_2786); /*string*/
  _x3587 = kk_std_os_path__mlift2386_realpath_1(_x3588, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x3587, _ctx);
}


// lift anonymous function
struct kk_std_os_path_realpath_fun3589__t_1 {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_realpath_fun3589_1(kk_function_t _fself, kk_box_t _b_2789, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_realpath_fun3589_1(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_realpath_fun3589_1, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path_realpath_fun3589_1(kk_function_t _fself, kk_box_t _b_2789, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x3590;
  kk_string_t _x3591 = kk_string_unbox(_b_2789); /*string*/
  _x3590 = kk_std_os_path_path(_x3591, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x3590, _ctx);
}

kk_std_os_path__path kk_std_os_path_realpath_1(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> io path */ 
  kk_string_t x_2484 = kk_std_os_path_xrealpath(s, _ctx); /*string*/;
  kk_box_t _x3585;
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_2484, _ctx);
    _x3585 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_realpath_fun3586_1(_ctx), _ctx); /*3926*/
  }
  else {
    _x3585 = kk_std_core_hnd__open_none1(kk_std_os_path_new_realpath_fun3589_1(_ctx), kk_string_box(x_2484), _ctx); /*3926*/
  }
  return kk_std_os_path__path_unbox(_x3585, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift2387_realpath_fun3593__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift2387_realpath_fun3593(kk_function_t _fself, kk_box_t _b_2795, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift2387_realpath_fun3593(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift2387_realpath_fun3593, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path__mlift2387_realpath_fun3593(kk_function_t _fself, kk_box_t _b_2795, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x3594;
  kk_string_t _x3595 = kk_string_unbox(_b_2795); /*string*/
  _x3594 = kk_std_os_path_path(_x3595, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x3594, _ctx);
}

kk_std_os_path__path kk_std_os_path__mlift2387_realpath(kk_string_t _y_2334, kk_context_t* _ctx) { /* (string) -> io path */ 
  kk_box_t _x3592 = kk_std_core_hnd__open_none1(kk_std_os_path__new_mlift2387_realpath_fun3593(_ctx), kk_string_box(_y_2334), _ctx); /*3357*/
  return kk_std_os_path__path_unbox(_x3592, _ctx);
}
 
// Convert a path to the absolute path on the file system.
// The path is not required to exist on disk. However, if it
// exists any permissions and symbolic links are resolved fully.
// `".".realpath` (to get the current working directory)
// `"/foo".realpath` (to resolve the full root, like `"c:/foo"` on windows)


// lift anonymous function
struct kk_std_os_path_realpath_fun3597__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_realpath_fun3597(kk_function_t _fself, kk_box_t _b_2800, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_realpath_fun3597(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_realpath_fun3597, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path_realpath_fun3597(kk_function_t _fself, kk_box_t _b_2800, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x3598;
  kk_std_os_path__path _x3599 = kk_std_os_path__path_unbox(_b_2800, _ctx); /*std/os/path/path*/
  _x3598 = kk_std_os_path_string(_x3599, _ctx); /*string*/
  return kk_string_box(_x3598);
}


// lift anonymous function
struct kk_std_os_path_realpath_fun3601__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_realpath_fun3601(kk_function_t _fself, kk_box_t _b_2804, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_realpath_fun3601(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_realpath_fun3601, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path_realpath_fun3601(kk_function_t _fself, kk_box_t _b_2804, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x3602;
  kk_string_t _x3603 = kk_string_unbox(_b_2804); /*string*/
  _x3602 = kk_std_os_path__mlift2387_realpath(_x3603, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x3602, _ctx);
}


// lift anonymous function
struct kk_std_os_path_realpath_fun3604__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_realpath_fun3604(kk_function_t _fself, kk_box_t _b_2807, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_realpath_fun3604(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_realpath_fun3604, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path_realpath_fun3604(kk_function_t _fself, kk_box_t _b_2807, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x3605;
  kk_string_t _x3606 = kk_string_unbox(_b_2807); /*string*/
  _x3605 = kk_std_os_path_path(_x3606, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x3605, _ctx);
}

kk_std_os_path__path kk_std_os_path_realpath(kk_std_os_path__path p, kk_context_t* _ctx) { /* (p : path) -> io path */ 
  kk_string_t s_2158;
  kk_box_t _x3596 = kk_std_core_hnd__open_none1(kk_std_os_path_new_realpath_fun3597(_ctx), kk_std_os_path__path_box(p, _ctx), _ctx); /*3357*/
  s_2158 = kk_string_unbox(_x3596); /*string*/
  kk_string_t x_2487 = kk_std_os_path_xrealpath(s_2158, _ctx); /*string*/;
  kk_box_t _x3600;
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_2487, _ctx);
    _x3600 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_realpath_fun3601(_ctx), _ctx); /*3926*/
  }
  else {
    _x3600 = kk_std_core_hnd__open_none1(kk_std_os_path_new_realpath_fun3604(_ctx), kk_string_box(x_2487), _ctx); /*3926*/
  }
  return kk_std_os_path__path_unbox(_x3600, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift2388_cwd_fun3608__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift2388_cwd_fun3608(kk_function_t _fself, kk_box_t _b_2813, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift2388_cwd_fun3608(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift2388_cwd_fun3608, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path__mlift2388_cwd_fun3608(kk_function_t _fself, kk_box_t _b_2813, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x3609;
  kk_string_t _x3610 = kk_string_unbox(_b_2813); /*string*/
  _x3609 = kk_std_os_path_path(_x3610, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x3609, _ctx);
}

kk_std_os_path__path kk_std_os_path__mlift2388_cwd(kk_string_t _y_2335, kk_context_t* _ctx) { /* (string) -> io path */ 
  kk_box_t _x3607 = kk_std_core_hnd__open_none1(kk_std_os_path__new_mlift2388_cwd_fun3608(_ctx), kk_string_box(_y_2335), _ctx); /*3357*/
  return kk_std_os_path__path_unbox(_x3607, _ctx);
}
 
// Returns the current working directory.
// Equal to `".".realpath`.


// lift anonymous function
struct kk_std_os_path_cwd_fun3614__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_cwd_fun3614(kk_function_t _fself, kk_box_t _b_2817, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_cwd_fun3614(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_cwd_fun3614, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path_cwd_fun3614(kk_function_t _fself, kk_box_t _b_2817, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x3615;
  kk_string_t _x3616 = kk_string_unbox(_b_2817); /*string*/
  _x3615 = kk_std_os_path__mlift2388_cwd(_x3616, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x3615, _ctx);
}


// lift anonymous function
struct kk_std_os_path_cwd_fun3617__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_cwd_fun3617(kk_function_t _fself, kk_box_t _b_2820, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_cwd_fun3617(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_cwd_fun3617, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path_cwd_fun3617(kk_function_t _fself, kk_box_t _b_2820, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x3618;
  kk_string_t _x3619 = kk_string_unbox(_b_2820); /*string*/
  _x3618 = kk_std_os_path_path(_x3619, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x3618, _ctx);
}

kk_std_os_path__path kk_std_os_path_cwd(kk_context_t* _ctx) { /* () -> io path */ 
  kk_string_t x_2490;
  kk_string_t _x3611;
  kk_define_string_literal(, _s3612, 1, ".")
  _x3611 = kk_string_dup(_s3612); /*string*/
  x_2490 = kk_std_os_path_xrealpath(_x3611, _ctx); /*string*/
  kk_box_t _x3613;
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_2490, _ctx);
    _x3613 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_cwd_fun3614(_ctx), _ctx); /*3926*/
  }
  else {
    _x3613 = kk_std_core_hnd__open_none1(kk_std_os_path_new_cwd_fun3617(_ctx), kk_string_box(x_2490), _ctx); /*3926*/
  }
  return kk_std_os_path__path_unbox(_x3613, _ctx);
}
 
// If a path has no extension, set it to the provided one.

kk_std_os_path__path kk_std_os_path_default_ext(kk_std_os_path__path p, kk_string_t newext, kk_context_t* _ctx) { /* (p : path, newext : string) -> path */ 
  kk_string_t s_2160;
  kk_std_os_path__path _x3620 = kk_std_os_path__path_dup(p); /*std/os/path/path*/
  s_2160 = kk_std_os_path_extname(_x3620, _ctx); /*string*/
  bool _match_2926;
  kk_string_t _x3621 = kk_string_empty(); /*string*/
  _match_2926 = kk_string_is_eq(s_2160,_x3621,kk_context()); /*bool*/
  if (_match_2926) {
    return kk_std_os_path_change_ext(p, newext, _ctx);
  }
  {
    kk_string_drop(newext, _ctx);
    return p;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift2389_homedir_fun3624__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift2389_homedir_fun3624(kk_function_t _fself, kk_box_t _b_2826, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift2389_homedir_fun3624(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift2389_homedir_fun3624, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path__mlift2389_homedir_fun3624(kk_function_t _fself, kk_box_t _b_2826, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x3625;
  kk_string_t _x3626 = kk_string_unbox(_b_2826); /*string*/
  _x3625 = kk_std_os_path_path(_x3626, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x3625, _ctx);
}

kk_std_os_path__path kk_std_os_path__mlift2389_homedir(kk_string_t _y_2336, kk_context_t* _ctx) { /* (string) -> io path */ 
  kk_box_t _x3623 = kk_std_core_hnd__open_none1(kk_std_os_path__new_mlift2389_homedir_fun3624(_ctx), kk_string_box(_y_2336), _ctx); /*3357*/
  return kk_std_os_path__path_unbox(_x3623, _ctx);
}
 
// Return the home directory of the current user.


// lift anonymous function
struct kk_std_os_path_homedir_fun3628__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_homedir_fun3628(kk_function_t _fself, kk_box_t _b_2830, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_homedir_fun3628(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_homedir_fun3628, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path_homedir_fun3628(kk_function_t _fself, kk_box_t _b_2830, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x3629;
  kk_string_t _x3630 = kk_string_unbox(_b_2830); /*string*/
  _x3629 = kk_std_os_path__mlift2389_homedir(_x3630, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x3629, _ctx);
}


// lift anonymous function
struct kk_std_os_path_homedir_fun3631__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_homedir_fun3631(kk_function_t _fself, kk_box_t _b_2833, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_homedir_fun3631(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_homedir_fun3631, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path_homedir_fun3631(kk_function_t _fself, kk_box_t _b_2833, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x3632;
  kk_string_t _x3633 = kk_string_unbox(_b_2833); /*string*/
  _x3632 = kk_std_os_path_path(_x3633, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x3632, _ctx);
}

kk_std_os_path__path kk_std_os_path_homedir(kk_context_t* _ctx) { /* () -> io path */ 
  kk_string_t x_2493 = kk_std_os_path_xhomedir(_ctx); /*string*/;
  kk_box_t _x3627;
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_2493, _ctx);
    _x3627 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_homedir_fun3628(_ctx), _ctx); /*3926*/
  }
  else {
    _x3627 = kk_std_core_hnd__open_none1(kk_std_os_path_new_homedir_fun3631(_ctx), kk_string_box(x_2493), _ctx); /*3926*/
  }
  return kk_std_os_path__path_unbox(_x3627, _ctx);
}


// lift anonymous function
struct kk_std_os_path__ctail_paths_collect_fun3653__t {
  struct kk_function_s _base;
};
static kk_std_core_types__maybe kk_std_os_path__ctail_paths_collect_fun3653(kk_function_t _fself, kk_char_t _b_2839, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_ctail_paths_collect_fun3653(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__ctail_paths_collect_fun3653, _ctx)
  return kk_function_dup(_fself);
}

static kk_std_core_types__maybe kk_std_os_path__ctail_paths_collect_fun3653(kk_function_t _fself, kk_char_t _b_2839, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_core_types__new_Just(kk_char_box(_b_2839, _ctx), _ctx);
}

kk_std_core__list kk_std_os_path__ctail_paths_collect(kk_std_core__list ps, kk_std_core_types__ctail _acc, kk_context_t* _ctx) { /* (ps : list<string>, ctail<list<path>>) -> list<path> */ 
  kk__tailcall: ;
  if (kk_std_core__is_Cons(ps)) {
    struct kk_std_core_Cons* _con3642 = kk_std_core__as_Cons(ps);
    kk_box_t _box_x2837 = _con3642->head;
    kk_std_core__list _pat0 = _con3642->tail;
    if (kk_std_core__is_Cons(_pat0)) {
      struct kk_std_core_Cons* _con3644 = kk_std_core__as_Cons(_pat0);
      kk_string_t root0 = kk_string_unbox(_box_x2837);
      kk_box_t _box_x2838 = _con3644->head;
      kk_std_core__list rest = _con3644->tail;
      kk_string_t part = kk_string_unbox(_box_x2838);
      bool _match_2917;
      kk_integer_t _brw_2923;
      kk_string_t _x3646 = kk_string_dup(root0); /*string*/
      _brw_2923 = kk_std_core_count_1(_x3646, _ctx); /*int*/
      bool _brw_2924 = kk_integer_eq_borrow(_brw_2923,(kk_integer_from_small(1)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_2923, _ctx);
      _match_2917 = _brw_2924; /*bool*/
      bool _x3647;
      if (_match_2917) {
        kk_std_core_types__maybe m_2168;
        kk_std_core__sslice _x3648;
        kk_string_t _x3649 = kk_string_dup(root0); /*string*/
        kk_ssize_t _x3650 = (KK_IZ(0)); /*ssize_t*/
        kk_ssize_t _x3651;
        kk_string_t _x3652 = kk_string_dup(root0); /*string*/
        _x3651 = kk_string_len(_x3652,kk_context()); /*ssize_t*/
        _x3648 = kk_std_core__new_Sslice(_x3649, _x3650, _x3651, _ctx); /*sslice*/
        m_2168 = kk_std_core_foreach_while_1(_x3648, kk_std_os_path__new_ctail_paths_collect_fun3653(_ctx), _ctx); /*maybe<char>*/
        bool _match_2918;
        bool _match_2919;
        kk_char_t _x3654;
        if (kk_std_core_types__is_Nothing(m_2168)) {
          _x3654 = ' '; /*char*/
        }
        else {
          kk_box_t _box_x2840 = m_2168._cons.Just.value;
          kk_char_t x = kk_char_unbox(_box_x2840, NULL);
          _x3654 = x; /*char*/
        }
        _match_2919 = (_x3654 >= ('a')); /*bool*/
        if (_match_2919) {
          bool _match_2921;
          kk_char_t _x3656;
          if (kk_std_core_types__is_Nothing(m_2168)) {
            _x3656 = ' '; /*char*/
          }
          else {
            kk_box_t _box_x2841 = m_2168._cons.Just.value;
            kk_char_t x0 = kk_char_unbox(_box_x2841, NULL);
            _x3656 = x0; /*char*/
          }
          _match_2921 = (_x3656 <= ('z')); /*bool*/
          if (_match_2921) {
            kk_std_core_types__maybe_drop(m_2168, _ctx);
            _match_2918 = true; /*bool*/
          }
          else {
            bool _match_2922;
            kk_char_t _x3658;
            if (kk_std_core_types__is_Nothing(m_2168)) {
              _x3658 = ' '; /*char*/
            }
            else {
              kk_box_t _box_x2842 = m_2168._cons.Just.value;
              kk_char_t x1 = kk_char_unbox(_box_x2842, NULL);
              _x3658 = x1; /*char*/
            }
            _match_2922 = (_x3658 >= ('A')); /*bool*/
            if (_match_2922) {
              kk_char_t _x3660;
              if (kk_std_core_types__is_Nothing(m_2168)) {
                _x3660 = ' '; /*char*/
              }
              else {
                kk_box_t _box_x2843 = m_2168._cons.Just.value;
                kk_char_t x2 = kk_char_unbox(_box_x2843, NULL);
                _x3660 = x2; /*char*/
              }
              _match_2918 = (_x3660 <= ('Z')); /*bool*/
            }
            else {
              kk_std_core_types__maybe_drop(m_2168, _ctx);
              _match_2918 = false; /*bool*/
            }
          }
        }
        else {
          bool _match_2920;
          kk_char_t _x3662;
          if (kk_std_core_types__is_Nothing(m_2168)) {
            _x3662 = ' '; /*char*/
          }
          else {
            kk_box_t _box_x2844 = m_2168._cons.Just.value;
            kk_char_t x3 = kk_char_unbox(_box_x2844, NULL);
            _x3662 = x3; /*char*/
          }
          _match_2920 = (_x3662 >= ('A')); /*bool*/
          if (_match_2920) {
            kk_char_t _x3664;
            if (kk_std_core_types__is_Nothing(m_2168)) {
              _x3664 = ' '; /*char*/
            }
            else {
              kk_box_t _box_x2845 = m_2168._cons.Just.value;
              kk_char_t x4 = kk_char_unbox(_box_x2845, NULL);
              _x3664 = x4; /*char*/
            }
            _match_2918 = (_x3664 <= ('Z')); /*bool*/
          }
          else {
            kk_std_core_types__maybe_drop(m_2168, _ctx);
            _match_2918 = false; /*bool*/
          }
        }
        if (_match_2918) {
          bool b_2171;
          kk_string_t _x3666 = kk_string_dup(part); /*string*/
          kk_string_t _x3667 = kk_string_empty(); /*string*/
          b_2171 = kk_string_is_eq(_x3666,_x3667,kk_context()); /*bool*/
          if (b_2171) {
            _x3647 = false; /*bool*/
          }
          else {
            kk_string_t _x3669;
            kk_define_string_literal(, _s3670, 2, "/\\")
            _x3669 = kk_string_dup(_s3670); /*string*/
            kk_string_t _x3671;
            kk_string_t _x3672 = kk_string_dup(part); /*string*/
            _x3671 = kk_std_core_head_3(_x3672, _ctx); /*string*/
            _x3647 = kk_string_contains(_x3669,_x3671,kk_context()); /*bool*/
          }
        }
        else {
          _x3647 = false; /*bool*/
        }
      }
      else {
        _x3647 = false; /*bool*/
      }
      if (_x3647) {
        kk_reuse_t _ru_3042 = kk_reuse_null; /*reuse*/;
        if (kk_likely(kk_std_core__list_is_unique(ps))) {
          if (kk_likely(kk_std_core__list_is_unique(_pat0))) {
            kk_std_core__list_free(_pat0, _ctx);
          }
          else {
            kk_string_dup(part);
            kk_std_core__list_dup(rest);
            kk_std_core__list_decref(_pat0, _ctx);
          }
          _ru_3042 = (kk_std_core__list_reuse(ps));
        }
        else {
          kk_string_dup(part);
          kk_std_core__list_dup(rest);
          kk_string_dup(root0);
          kk_std_core__list_decref(ps, _ctx);
        }
        kk_std_os_path__path _ctail_2294;
        kk_string_t _x3673;
        kk_string_t _x3674;
        kk_string_t _x3675;
        kk_define_string_literal(, _s3676, 1, ":")
        _x3675 = kk_string_dup(_s3676); /*string*/
        _x3674 = kk_std_core__lp__plus__plus__1_rp_(_x3675, part, _ctx); /*string*/
        _x3673 = kk_std_core__lp__plus__plus__1_rp_(root0, _x3674, _ctx); /*string*/
        _ctail_2294 = kk_std_os_path_path(_x3673, _ctx); /*std/os/path/path*/
        kk_std_core__list _ctail_2295 = kk_std_core__list_hole(); /*list<std/os/path/path>*/;
        kk_std_core__list _ctail_2296 = kk_std_core__new_Cons(_ru_3042, kk_std_os_path__path_box(_ctail_2294, _ctx), _ctail_2295, _ctx); /*list<std/os/path/path>*/;
        kk_box_t* _b_2871_2855 = (kk_box_t*)((&kk_std_core__as_Cons(_ctail_2296)->tail)); /*cfield<list<std/os/path/path>>*/;
        { // tailcall
          kk_std_core_types__ctail _x3677 = kk_ctail_link(_acc,(kk_std_core__list_box(_ctail_2296, _ctx)),_b_2871_2855); /*ctail<0>*/
          ps = rest;
          _acc = _x3677;
          goto kk__tailcall;
        }
      }
    }
  }
  if (kk_std_core__is_Cons(ps)) {
    struct kk_std_core_Cons* _con3678 = kk_std_core__as_Cons(ps);
    kk_box_t _box_x2856 = _con3678->head;
    kk_std_core__list rest0 = _con3678->tail;
    kk_string_t part0 = kk_string_unbox(_box_x2856);
    kk_reuse_t _ru_3043 = kk_reuse_null; /*reuse*/;
    if (kk_likely(kk_std_core__list_is_unique(ps))) {
      _ru_3043 = (kk_std_core__list_reuse(ps));
    }
    else {
      kk_string_dup(part0);
      kk_std_core__list_dup(rest0);
      kk_std_core__list_decref(ps, _ctx);
    }
    kk_std_os_path__path _ctail_2297 = kk_std_os_path_path(part0, _ctx); /*std/os/path/path*/;
    kk_std_core__list _ctail_2298 = kk_std_core__list_hole(); /*list<std/os/path/path>*/;
    kk_std_core__list _ctail_2299 = kk_std_core__new_Cons(_ru_3043, kk_std_os_path__path_box(_ctail_2297, _ctx), _ctail_2298, _ctx); /*list<std/os/path/path>*/;
    kk_box_t* _b_2877_2866 = (kk_box_t*)((&kk_std_core__as_Cons(_ctail_2299)->tail)); /*cfield<list<std/os/path/path>>*/;
    { // tailcall
      kk_std_core_types__ctail _x3680 = kk_ctail_link(_acc,(kk_std_core__list_box(_ctail_2299, _ctx)),_b_2877_2866); /*ctail<0>*/
      ps = rest0;
      _acc = _x3680;
      goto kk__tailcall;
    }
  }
  {
    kk_box_t _x3681 = kk_ctail_resolve(_acc,(kk_std_core__list_box(kk_std_core__new_Nil(_ctx), _ctx))); /*-1*/
    return kk_std_core__list_unbox(_x3681, _ctx);
  }
}

kk_std_core__list kk_std_os_path_paths_collect(kk_std_core__list ps0, kk_context_t* _ctx) { /* (ps : list<string>) -> list<path> */ 
  kk_std_core_types__ctail _x3682 = kk_ctail_nil(); /*ctail<0>*/
  return kk_std_os_path__ctail_paths_collect(ps0, _x3682, _ctx);
}
 
// Return the stem name of path.
// `"/foo/bar.svg.txt".path.extname === "foo.svg"`

kk_string_t kk_std_os_path_stemname(kk_std_os_path__path p, kk_context_t* _ctx) { /* (p : path) -> string */ 
  kk_ssize_t i;
  kk_string_t _x3691;
  {
    kk_std_core__list _x0 = p.parts;
    kk_std_core__list_dup(_x0);
    if (kk_std_core__is_Cons(_x0)) {
      struct kk_std_core_Cons* _con3692 = kk_std_core__as_Cons(_x0);
      kk_box_t _box_x2883 = _con3692->head;
      kk_std_core__list _pat03 = _con3692->tail;
      kk_string_t x = kk_string_unbox(_box_x2883);
      if (kk_likely(kk_std_core__list_is_unique(_x0))) {
        kk_std_core__list_drop(_pat03, _ctx);
        kk_std_core__list_free(_x0, _ctx);
      }
      else {
        kk_string_dup(x);
        kk_std_core__list_decref(_x0, _ctx);
      }
      _x3691 = x; /*string*/
    }
    else {
      _x3691 = kk_string_empty(); /*string*/
    }
  }
  kk_string_t _x3695;
  kk_define_string_literal(, _s3696, 1, ".")
  _x3695 = kk_string_dup(_s3696); /*string*/
  i = kk_string_last_index_of1(_x3691,_x3695,kk_context()); /*ssize_t*/
  kk_std_core_types__tuple2_ _this_2175;
  bool _match_2915 = kk_std_core_is_zero_1(i, _ctx); /*bool*/;
  if (_match_2915) {
    kk_std_core_types__maybe _match_2916 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
    if (kk_std_core_types__is_Just(_match_2916)) {
      kk_box_t _box_x2884 = _match_2916._cons.Just.value;
      kk_std_core__sslice slice = kk_std_core__sslice_unbox(_box_x2884, NULL);
      kk_std_os_path__path_drop(p, _ctx);
      kk_std_core__sslice_dup(slice);
      kk_std_core_types__maybe_drop(_match_2916, _ctx);
      kk_string_t _b_2893_2885;
      kk_std_core__sslice _x3698;
      {
        kk_string_t s0 = slice.str;
        kk_ssize_t start0 = slice.start;
        kk_string_dup(s0);
        kk_ssize_t _x3699 = (KK_IZ(0)); /*ssize_t*/
        _x3698 = kk_std_core__new_Sslice(s0, _x3699, start0, _ctx); /*sslice*/
      }
      _b_2893_2885 = kk_std_core_string_3(_x3698, _ctx); /*string*/
      kk_string_t _b_2894_2886;
      kk_std_core__sslice _x3700 = kk_std_core_after(slice, _ctx); /*sslice*/
      _b_2894_2886 = kk_std_core_string_3(_x3700, _ctx); /*string*/
      _this_2175 = kk_std_core_types__new_dash__lp__comma__rp_(kk_string_box(_b_2893_2885), kk_string_box(_b_2894_2886), _ctx); /*(string, string)*/
    }
    else {
      kk_box_t _x3701;
      kk_string_t _x3702;
      {
        kk_std_core__list _x00 = p.parts;
        kk_std_core__list_dup(_x00);
        kk_std_os_path__path_drop(p, _ctx);
        if (kk_std_core__is_Cons(_x00)) {
          struct kk_std_core_Cons* _con3703 = kk_std_core__as_Cons(_x00);
          kk_box_t _box_x2887 = _con3703->head;
          kk_std_core__list _pat030 = _con3703->tail;
          kk_string_t x0 = kk_string_unbox(_box_x2887);
          if (kk_likely(kk_std_core__list_is_unique(_x00))) {
            kk_std_core__list_drop(_pat030, _ctx);
            kk_std_core__list_free(_x00, _ctx);
          }
          else {
            kk_string_dup(x0);
            kk_std_core__list_decref(_x00, _ctx);
          }
          _x3702 = x0; /*string*/
        }
        else {
          _x3702 = kk_string_empty(); /*string*/
        }
      }
      _x3701 = kk_string_box(_x3702); /*6*/
      kk_box_t _x3706;
      kk_string_t _x3707 = kk_string_empty(); /*string*/
      _x3706 = kk_string_box(_x3707); /*7*/
      _this_2175 = kk_std_core_types__new_dash__lp__comma__rp_(_x3701, _x3706, _ctx); /*(string, string)*/
    }
  }
  else {
    kk_ssize_t _pat100 = kk_std_core_decr_1(i, _ctx); /*ssize_t*/;
    kk_ssize_t _pat200;
    kk_string_t _x3709;
    kk_define_string_literal(, _s3710, 1, ".")
    _x3709 = kk_string_dup(_s3710); /*string*/
    _pat200 = kk_string_len(_x3709,kk_context()); /*ssize_t*/
    kk_std_core__sslice slice0;
    kk_string_t _x3711;
    {
      kk_std_core__list _x01 = p.parts;
      kk_std_core__list_dup(_x01);
      kk_std_os_path__path_drop(p, _ctx);
      if (kk_std_core__is_Cons(_x01)) {
        struct kk_std_core_Cons* _con3712 = kk_std_core__as_Cons(_x01);
        kk_box_t _box_x2890 = _con3712->head;
        kk_std_core__list _pat031 = _con3712->tail;
        kk_string_t x1 = kk_string_unbox(_box_x2890);
        if (kk_likely(kk_std_core__list_is_unique(_x01))) {
          kk_std_core__list_drop(_pat031, _ctx);
          kk_std_core__list_free(_x01, _ctx);
        }
        else {
          kk_string_dup(x1);
          kk_std_core__list_decref(_x01, _ctx);
        }
        _x3711 = x1; /*string*/
      }
      else {
        _x3711 = kk_string_empty(); /*string*/
      }
    }
    slice0 = kk_std_core__new_Sslice(_x3711, _pat100, _pat200, _ctx); /*sslice*/
    kk_string_t _b_2897_2891;
    kk_std_core__sslice _x3715;
    {
      kk_string_t s00 = slice0.str;
      kk_ssize_t start00 = slice0.start;
      kk_string_dup(s00);
      kk_ssize_t _x3716 = (KK_IZ(0)); /*ssize_t*/
      _x3715 = kk_std_core__new_Sslice(s00, _x3716, start00, _ctx); /*sslice*/
    }
    _b_2897_2891 = kk_std_core_string_3(_x3715, _ctx); /*string*/
    kk_string_t _b_2898_2892;
    kk_std_core__sslice _x3717 = kk_std_core_after(slice0, _ctx); /*sslice*/
    _b_2898_2892 = kk_std_core_string_3(_x3717, _ctx); /*string*/
    _this_2175 = kk_std_core_types__new_dash__lp__comma__rp_(kk_string_box(_b_2897_2891), kk_string_box(_b_2898_2892), _ctx); /*(string, string)*/
  }
  {
    kk_box_t _box_x2899 = _this_2175.fst;
    kk_box_t _box_x2900 = _this_2175.snd;
    kk_string_t _x = kk_string_unbox(_box_x2899);
    kk_string_dup(_x);
    kk_std_core_types__tuple2__drop(_this_2175, _ctx);
    return _x;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift2390_tempdir_fun3721__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift2390_tempdir_fun3721(kk_function_t _fself, kk_box_t _b_2903, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift2390_tempdir_fun3721(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift2390_tempdir_fun3721, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path__mlift2390_tempdir_fun3721(kk_function_t _fself, kk_box_t _b_2903, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x3722;
  kk_string_t _x3723 = kk_string_unbox(_b_2903); /*string*/
  _x3722 = kk_std_os_path_path(_x3723, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x3722, _ctx);
}

kk_std_os_path__path kk_std_os_path__mlift2390_tempdir(kk_string_t _y_2337, kk_context_t* _ctx) { /* (string) -> io path */ 
  kk_box_t _x3720 = kk_std_core_hnd__open_none1(kk_std_os_path__new_mlift2390_tempdir_fun3721(_ctx), kk_string_box(_y_2337), _ctx); /*3357*/
  return kk_std_os_path__path_unbox(_x3720, _ctx);
}
 
// Return the temporary directory for the current user.


// lift anonymous function
struct kk_std_os_path_tempdir_fun3725__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_tempdir_fun3725(kk_function_t _fself, kk_box_t _b_2907, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_tempdir_fun3725(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_tempdir_fun3725, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path_tempdir_fun3725(kk_function_t _fself, kk_box_t _b_2907, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x3726;
  kk_string_t _x3727 = kk_string_unbox(_b_2907); /*string*/
  _x3726 = kk_std_os_path__mlift2390_tempdir(_x3727, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x3726, _ctx);
}


// lift anonymous function
struct kk_std_os_path_tempdir_fun3728__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_tempdir_fun3728(kk_function_t _fself, kk_box_t _b_2910, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_tempdir_fun3728(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_tempdir_fun3728, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_path_tempdir_fun3728(kk_function_t _fself, kk_box_t _b_2910, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x3729;
  kk_string_t _x3730 = kk_string_unbox(_b_2910); /*string*/
  _x3729 = kk_std_os_path_path(_x3730, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x3729, _ctx);
}

kk_std_os_path__path kk_std_os_path_tempdir(kk_context_t* _ctx) { /* () -> io path */ 
  kk_string_t x_2496 = kk_std_os_path_xtempdir(_ctx); /*string*/;
  kk_box_t _x3724;
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_2496, _ctx);
    _x3724 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_tempdir_fun3725(_ctx), _ctx); /*3926*/
  }
  else {
    _x3724 = kk_std_core_hnd__open_none1(kk_std_os_path_new_tempdir_fun3728(_ctx), kk_string_box(x_2496), _ctx); /*3926*/
  }
  return kk_std_os_path__path_unbox(_x3724, _ctx);
}

// initialization
void kk_std_os_path__init(kk_context_t* _ctx){
  static bool _kk_initialized = false;
  if (_kk_initialized) return;
  _kk_initialized = true;
  kk_std_core_types__init(_ctx);
  kk_std_core_hnd__init(_ctx);
  kk_std_core__init(_ctx);
  kk_std_text_parse__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
}

// termination
void kk_std_os_path__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_text_parse__done(_ctx);
  kk_std_core__done(_ctx);
  kk_std_core_hnd__done(_ctx);
  kk_std_core_types__done(_ctx);
}
