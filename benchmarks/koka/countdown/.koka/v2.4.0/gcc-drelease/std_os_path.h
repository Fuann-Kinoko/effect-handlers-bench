#pragma once
#ifndef kk_std_os_path_H
#define kk_std_os_path_H
// Koka generated module: "std/os/path", koka version: 2.4.0, platform: 64-bit
#include <kklib.h>
#include "std_core_types.h"
#include "std_core_hnd.h"
#include "std_core.h"
#include "std_text_parse.h"

// type declarations

// value type std/os/path/path
struct kk_std_os_path_Path {
  kk_string_t root;
  kk_std_core__list parts;
};
typedef struct kk_std_os_path_Path kk_std_os_path__path;
static inline kk_std_os_path__path kk_std_os_path__new_Path(kk_string_t root, kk_std_core__list parts, kk_context_t* _ctx) {
  kk_std_os_path__path _con;
  _con.root = root;
  _con.parts = parts;
  return _con;
}
static inline bool kk_std_os_path__is_Path(kk_std_os_path__path x) {
  return (true);
}
static inline kk_std_os_path__path kk_std_os_path__path_dup(kk_std_os_path__path _x) {
  kk_string_dup(_x.root);
  kk_std_core__list_dup(_x.parts);
  return _x;
}
static inline void kk_std_os_path__path_drop(kk_std_os_path__path _x, kk_context_t* _ctx) {
  kk_string_drop(_x.root, _ctx);
  kk_std_core__list_drop(_x.parts, _ctx);
}
static inline kk_box_t kk_std_os_path__path_box(kk_std_os_path__path _x, kk_context_t* _ctx) {
  kk_box_t _box;
  kk_valuetype_box(kk_std_os_path__path, _box, _x, 2 /* scan count */, _ctx);
  return _box;
}
static inline kk_std_os_path__path kk_std_os_path__path_unbox(kk_box_t _x, kk_context_t* _ctx) {
  kk_boxed_value_t _p;
  kk_std_os_path__path _unbox;
  kk_valuetype_unbox_(kk_std_os_path__path, _p, _unbox, _x, _ctx);
  if (_ctx!=NULL && _p!=NULL) {
    if (kk_basetype_is_unique(_p)) { kk_basetype_free(_p,_ctx); } else {
      kk_std_os_path__path_dup(_unbox);
      kk_basetype_decref(_p, _ctx);
    }
  }
  return _unbox;
}

// value declarations
 
// Automatically generated. Retrieves the `root` constructor field of the `:path` type.

static inline kk_string_t kk_std_os_path_root(kk_std_os_path__path path0, kk_context_t* _ctx) { /* (path : path) -> string */ 
  {
    kk_string_t _x = path0.root;
    return kk_string_dup(_x);
  }
}
 
// Automatically generated. Retrieves the `parts` constructor field of the `:path` type.

static inline kk_std_core__list kk_std_os_path_parts(kk_std_os_path__path path0, kk_context_t* _ctx) { /* (path : path) -> list<string> */ 
  {
    kk_std_core__list _x = path0.parts;
    return kk_std_core__list_dup(_x);
  }
}

kk_std_os_path__path kk_std_os_path__copy(kk_std_os_path__path _this, kk_std_core_types__optional root0, kk_std_core_types__optional parts0, kk_context_t* _ctx); /* (path, root : optional<string>, parts : optional<list<string>>) -> path */ 

kk_string_t kk_std_os_path_xapp_path(kk_context_t* _ctx); /* () -> io string */ 

kk_string_t kk_std_os_path_basename(kk_std_os_path__path p, kk_context_t* _ctx); /* (p : path) -> string */ 

kk_std_os_path__path kk_std_os_path_nobase(kk_std_os_path__path p, kk_context_t* _ctx); /* (p : path) -> path */ 

kk_std_core_types__tuple2_ kk_std_os_path_split_parts(kk_std_core__list parts0, kk_context_t* _ctx); /* (parts : list<string>) -> (string, list<string>) */ 

kk_string_t kk_std_os_path_xrealpath(kk_string_t p, kk_context_t* _ctx); /* (p : string) -> io string */ 

kk_string_t kk_std_os_path_dirname(kk_std_os_path__path p, kk_context_t* _ctx); /* (p : path) -> string */ 
 
// Return a list of all directory components (excluding the root but including the basename).
// `"/foo/bar/test.txt".path.dirparts === ["foo","bar","test.txt"]`

static inline kk_std_core__list kk_std_os_path_dirparts(kk_std_os_path__path p, kk_context_t* _ctx) { /* (p : path) -> list<string> */ 
  kk_std_core__list _x3079;
  {
    kk_std_core__list _x = p.parts;
    kk_std_core__list_dup(_x);
    kk_std_os_path__path_drop(p, _ctx);
    _x3079 = _x; /*list<string>*/
  }
  return kk_std_core__lift17288_reverse(kk_std_core__new_Nil(_ctx), _x3079, _ctx);
}

kk_string_t kk_std_os_path_xhomedir(kk_context_t* _ctx); /* () -> io string */ 

kk_std_os_path__path kk_std_os_path_nodir(kk_std_os_path__path p, kk_context_t* _ctx); /* (p : path) -> path */ 

kk_string_t kk_std_os_path_parentname(kk_std_os_path__path p, kk_context_t* _ctx); /* (p : path) -> string */ 

kk_string_t kk_std_os_path_partsep(kk_context_t* _ctx); /* () -> ndet string */ 

kk_string_t kk_std_os_path_pathsep(kk_context_t* _ctx); /* () -> ndet string */ 
 
// Return the root name of path.
// `"c:\\foo".path.rootname === "c:/"`
// `"/foo".path.rootname === "/"`

static inline kk_string_t kk_std_os_path_rootname(kk_std_os_path__path p, kk_context_t* _ctx) { /* (p : path) -> string */ 
  {
    kk_string_t _x = p.root;
    kk_string_dup(_x);
    kk_std_os_path__path_drop(p, _ctx);
    return _x;
  }
}

kk_string_t kk_std_os_path_xtempdir(kk_context_t* _ctx); /* () -> io string */ 

bool kk_std_os_path_is_empty(kk_std_os_path__path p, kk_context_t* _ctx); /* (p : path) -> bool */ 

kk_std_os_path__path kk_std_os_path__lp__bar__bar__rp_(kk_std_os_path__path p1, kk_std_os_path__path p2, kk_context_t* _ctx); /* (p1 : path, p2 : path) -> path */ 

kk_std_core__list kk_std_os_path_push_part(kk_string_t dir, kk_std_core__list dirs, kk_context_t* _ctx); /* (dir : string, dirs : list<string>) -> list<string> */ 

kk_std_core__list kk_std_os_path_push_parts(kk_std_core__list parts0, kk_std_core__list dirs, kk_context_t* _ctx); /* (parts : list<string>, dirs : list<string>) -> list<string> */ 
 
// monadic lift

static inline bool kk_std_os_path__mlift2364_proot(kk_char_t wild__4, kk_context_t* _ctx) { /* (wild_4 : char) -> std/text/parse/parse bool */ 
  return false;
}
 
// monadic lift

static inline bool kk_std_os_path__mlift2365_proot(kk_unit_t wild__5, kk_context_t* _ctx) { /* (wild_5 : ()) -> std/text/parse/parse bool */ 
  return true;
}

bool kk_std_os_path__mlift2366_proot(bool _y_2312, kk_context_t* _ctx); /* (bool) -> std/text/parse/parse bool */ 
 
// monadic lift

static inline kk_unit_t kk_std_os_path__mlift2367_proot(kk_char_t wild__0, kk_context_t* _ctx) { /* (wild_0 : char) -> std/text/parse/parse () */ 
  kk_Unit; return kk_Unit;
}

kk_unit_t kk_std_os_path__mlift2368_proot(kk_char_t wild__, kk_context_t* _ctx); /* (wild_ : char) -> std/text/parse/parse () */ 
 
// monadic lift

static inline kk_unit_t kk_std_os_path__mlift2369_proot(kk_std_core__list _y_2310, kk_context_t* _ctx) { /* (list<char>) -> std/text/parse/parse () */ 
  kk_std_core__list_drop(_y_2310, _ctx);
  kk_Unit; return kk_Unit;
}

kk_unit_t kk_std_os_path__mlift2370_proot(kk_char_t _y_2308, kk_context_t* _ctx); /* (char) -> std/text/parse/parse () */ 

kk_unit_t kk_std_os_path__mlift2371_proot(kk_char_t wild__1, kk_context_t* _ctx); /* (wild_1 : char) -> std/text/parse/parse () */ 

bool kk_std_os_path__mlift2372_proot(kk_unit_t _c_2311, kk_context_t* _ctx); /* (()) -> bool */ 

bool kk_std_os_path__mlift2373_proot(bool _y_2304, kk_context_t* _ctx); /* (bool) -> std/text/parse/parse bool */ 

bool kk_std_os_path_proot(kk_context_t* _ctx); /* () -> std/text/parse/parse bool */ 

kk_string_t kk_std_os_path_string(kk_std_os_path__path p, kk_context_t* _ctx); /* (p : path) -> string */ 
 
// A `:path` represents a file system path.

static inline kk_std_os_path__path kk_std_os_path__create_Path(kk_std_core_types__optional root0, kk_std_core_types__optional parts0, kk_context_t* _ctx) { /* (root : optional<string>, parts : optional<list<string>>) -> path */ 
  kk_string_t _x3206;
  if (kk_std_core_types__is_Optional(root0)) {
    kk_box_t _box_x2619 = root0._cons.Optional.value;
    kk_string_t _root_871 = kk_string_unbox(_box_x2619);
    _x3206 = _root_871; /*string*/
  }
  else {
    _x3206 = kk_string_empty(); /*string*/
  }
  kk_std_core__list _x3209;
  if (kk_std_core_types__is_Optional(parts0)) {
    kk_box_t _box_x2620 = parts0._cons.Optional.value;
    kk_std_core__list _parts_876 = kk_std_core__list_unbox(_box_x2620, NULL);
    _x3209 = _parts_876; /*list<string>*/
  }
  else {
    _x3209 = kk_std_core__new_Nil(_ctx); /*list<string>*/
  }
  return kk_std_os_path__new_Path(_x3206, _x3209, _ctx);
}

static inline kk_std_os_path__path kk_std_os_path_path_parts(kk_string_t root0, kk_string_t s, kk_std_core_types__optional dirs, kk_context_t* _ctx) { /* (root : string, s : string, dirs : optional<list<string>>) -> path */ 
  kk_vector_t v_17194;
  kk_string_t _x3211;
  kk_define_string_literal(, _s3212, 1, "/")
  _x3211 = kk_string_dup(_s3212); /*string*/
  v_17194 = kk_string_splitv(s,_x3211,kk_context()); /*vector<string>*/
  kk_std_core__list parts0;
  kk_std_core__list _x3213 = kk_std_core_vlist(v_17194, kk_std_core_types__new_None(_ctx), _ctx); /*list<2142>*/
  kk_std_core__list _x3214;
  if (kk_std_core_types__is_Optional(dirs)) {
    kk_box_t _box_x2621 = dirs._cons.Optional.value;
    kk_std_core__list _dirs_1011 = kk_std_core__list_unbox(_box_x2621, NULL);
    _x3214 = _dirs_1011; /*list<string>*/
  }
  else {
    _x3214 = kk_std_core__new_Nil(_ctx); /*list<string>*/
  }
  parts0 = kk_std_os_path_push_parts(_x3213, _x3214, _ctx); /*list<string>*/
  return kk_std_os_path__new_Path(root0, parts0, _ctx);
}
 
// monadic lift

static inline bool kk_std_os_path__mlift2374_path(kk_char_t wild__4, kk_context_t* _ctx) { /* (wild_4 : char) -> std/text/parse/parse bool */ 
  return false;
}
 
// monadic lift

static inline bool kk_std_os_path__mlift2375_path(kk_unit_t wild__5, kk_context_t* _ctx) { /* (wild_5 : ()) -> std/text/parse/parse bool */ 
  return true;
}

bool kk_std_os_path__mlift2376_path(bool _y_2324, kk_context_t* _ctx); /* (bool) -> std/text/parse/parse bool */ 
 
// monadic lift

static inline kk_unit_t kk_std_os_path__mlift2377_path(kk_char_t wild__0, kk_context_t* _ctx) { /* (wild_0 : char) -> std/text/parse/parse () */ 
  kk_Unit; return kk_Unit;
}

kk_unit_t kk_std_os_path__mlift2378_path(kk_char_t wild__, kk_context_t* _ctx); /* (wild_ : char) -> std/text/parse/parse () */ 
 
// monadic lift

static inline kk_unit_t kk_std_os_path__mlift2379_path(kk_std_core__list _y_2322, kk_context_t* _ctx) { /* (list<char>) -> std/text/parse/parse () */ 
  kk_std_core__list_drop(_y_2322, _ctx);
  kk_Unit; return kk_Unit;
}

kk_unit_t kk_std_os_path__mlift2380_path(kk_char_t _y_2320, kk_context_t* _ctx); /* (char) -> std/text/parse/parse () */ 

kk_unit_t kk_std_os_path__mlift2381_path(kk_char_t wild__1, kk_context_t* _ctx); /* (wild_1 : char) -> std/text/parse/parse () */ 

bool kk_std_os_path__mlift2382_path(kk_unit_t _c_2323, kk_context_t* _ctx); /* (()) -> bool */ 

bool kk_std_os_path__mlift2383_path(bool _y_2316, kk_context_t* _ctx); /* (bool) -> std/text/parse/parse bool */ 

kk_std_os_path__path kk_std_os_path_path(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> path */ 

kk_std_os_path__path kk_std_os_path__lp__fs__rp_(kk_std_os_path__path p1, kk_std_os_path__path p2, kk_context_t* _ctx); /* (p1 : path, p2 : path) -> path */ 

kk_std_os_path__path kk_std_os_path__lp__fs__1_rp_(kk_std_os_path__path p1, kk_string_t p2, kk_context_t* _ctx); /* (p1 : path, p2 : string) -> path */ 

kk_std_os_path__path kk_std_os_path__lp__fs__2_rp_(kk_string_t p1, kk_string_t p2, kk_context_t* _ctx); /* (p1 : string, p2 : string) -> path */ 

kk_std_os_path__path kk_std_os_path__mlift2384_app_path(kk_string_t _y_2329, kk_context_t* _ctx); /* (string) -> io path */ 

kk_std_os_path__path kk_std_os_path_app_path(kk_context_t* _ctx); /* () -> io path */ 

kk_std_os_path__path kk_std_os_path__mlift2385_appdir(kk_string_t _y_2330, kk_context_t* _ctx); /* (string) -> io path */ 

kk_std_os_path__path kk_std_os_path_appdir(kk_context_t* _ctx); /* () -> io path */ 

kk_std_os_path__path kk_std_os_path_change_base(kk_std_os_path__path p, kk_string_t basename0, kk_context_t* _ctx); /* (p : path, basename : string) -> path */ 

kk_std_core_types__tuple2_ kk_std_os_path_split_base(kk_string_t basename0, kk_context_t* _ctx); /* (basename : string) -> (string, string) */ 

kk_std_os_path__path kk_std_os_path_change_ext(kk_std_os_path__path p, kk_string_t extname0, kk_context_t* _ctx); /* (p : path, extname : string) -> path */ 

kk_string_t kk_std_os_path_extname(kk_std_os_path__path p, kk_context_t* _ctx); /* (p : path) -> string */ 

kk_std_os_path__path kk_std_os_path_change_stem(kk_std_os_path__path p, kk_string_t stemname0, kk_context_t* _ctx); /* (p : path, stemname : string) -> path */ 

kk_std_os_path__path kk_std_os_path__lift2293_combine(kk_std_core__list xs, kk_std_os_path__path z, kk_context_t* _ctx); /* (xs : list<path>, z : path) -> path */ 

kk_std_os_path__path kk_std_os_path_combine(kk_std_core__list ps, kk_context_t* _ctx); /* (ps : list<path>) -> path */ 

kk_std_os_path__path kk_std_os_path__mlift2386_realpath_1(kk_string_t _y_2333, kk_context_t* _ctx); /* (string) -> io path */ 

kk_std_os_path__path kk_std_os_path_realpath_1(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> io path */ 

kk_std_os_path__path kk_std_os_path__mlift2387_realpath(kk_string_t _y_2334, kk_context_t* _ctx); /* (string) -> io path */ 

kk_std_os_path__path kk_std_os_path_realpath(kk_std_os_path__path p, kk_context_t* _ctx); /* (p : path) -> io path */ 

kk_std_os_path__path kk_std_os_path__mlift2388_cwd(kk_string_t _y_2335, kk_context_t* _ctx); /* (string) -> io path */ 

kk_std_os_path__path kk_std_os_path_cwd(kk_context_t* _ctx); /* () -> io path */ 

kk_std_os_path__path kk_std_os_path_default_ext(kk_std_os_path__path p, kk_string_t newext, kk_context_t* _ctx); /* (p : path, newext : string) -> path */ 

kk_std_os_path__path kk_std_os_path__mlift2389_homedir(kk_string_t _y_2336, kk_context_t* _ctx); /* (string) -> io path */ 

kk_std_os_path__path kk_std_os_path_homedir(kk_context_t* _ctx); /* () -> io path */ 
 
// Is a path relative?

static inline bool kk_std_os_path_is_relative(kk_std_os_path__path p, kk_context_t* _ctx) { /* (p : path) -> bool */ 
  kk_string_t _x3634;
  {
    kk_string_t _x = p.root;
    kk_string_dup(_x);
    kk_std_os_path__path_drop(p, _ctx);
    _x3634 = _x; /*string*/
  }
  kk_string_t _x3635 = kk_string_empty(); /*string*/
  return kk_string_is_eq(_x3634,_x3635,kk_context());
}
 
// Is a path absolute?

static inline bool kk_std_os_path_is_absolute(kk_std_os_path__path p, kk_context_t* _ctx) { /* (p : path) -> bool */ 
  bool b_2163;
  kk_string_t _x3637;
  {
    kk_string_t _x = p.root;
    kk_string_dup(_x);
    kk_std_os_path__path_drop(p, _ctx);
    _x3637 = _x; /*string*/
  }
  kk_string_t _x3638 = kk_string_empty(); /*string*/
  b_2163 = kk_string_is_eq(_x3637,_x3638,kk_context()); /*bool*/
  if (b_2163) {
    return false;
  }
  {
    return true;
  }
}
 
// Remove the extension from a path.

static inline kk_std_os_path__path kk_std_os_path_noext(kk_std_os_path__path p, kk_context_t* _ctx) { /* (p : path) -> path */ 
  kk_string_t _x3640 = kk_string_empty(); /*string*/
  return kk_std_os_path_change_ext(p, _x3640, _ctx);
}

kk_std_core__list kk_std_os_path__ctail_paths_collect(kk_std_core__list ps, kk_std_core_types__ctail _acc, kk_context_t* _ctx); /* (ps : list<string>, ctail<list<path>>) -> list<path> */ 

kk_std_core__list kk_std_os_path_paths_collect(kk_std_core__list ps0, kk_context_t* _ctx); /* (ps : list<string>) -> list<path> */ 
 
// Parse a list of paths seperated by colon (`':'`) or semi-colon (`';'`)
//
// Colon separated paths can be ambiguous with Windows style root names (`c:\\`)
// In particular, a single letter path followed by an absolute path, e.g. ``c:/foo:/bar`` is
// parsed as ``c:/foo`` and ``/bar``.

static inline kk_std_core__list kk_std_os_path_paths(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> list<path> */ 
  kk_string_t s0_2173;
  kk_string_t _x3683;
  kk_define_string_literal(, _s3684, 1, ";")
  _x3683 = kk_string_dup(_s3684); /*string*/
  kk_string_t _x3685;
  kk_define_string_literal(, _s3686, 1, ":")
  _x3685 = kk_string_dup(_s3686); /*string*/
  s0_2173 = kk_string_replace_all(s,_x3683,_x3685,kk_context()); /*string*/
  kk_vector_t v_17194;
  kk_string_t _x3687;
  kk_define_string_literal(, _s3688, 1, ":")
  _x3687 = kk_string_dup(_s3688); /*string*/
  v_17194 = kk_string_splitv(s0_2173,_x3687,kk_context()); /*vector<string>*/
  kk_std_core__list _x3689 = kk_std_core_vlist(v_17194, kk_std_core_types__new_None(_ctx), _ctx); /*list<2142>*/
  return kk_std_os_path_paths_collect(_x3689, _ctx);
}
 
// Show a path as a string.

static inline kk_string_t kk_std_os_path_show(kk_std_os_path__path p, kk_context_t* _ctx) { /* (p : path) -> string */ 
  kk_string_t _x3690 = kk_std_os_path_string(p, _ctx); /*string*/
  return kk_std_core_show_3(_x3690, _ctx);
}

kk_string_t kk_std_os_path_stemname(kk_std_os_path__path p, kk_context_t* _ctx); /* (p : path) -> string */ 

kk_std_os_path__path kk_std_os_path__mlift2390_tempdir(kk_string_t _y_2337, kk_context_t* _ctx); /* (string) -> io path */ 

kk_std_os_path__path kk_std_os_path_tempdir(kk_context_t* _ctx); /* () -> io path */ 

void kk_std_os_path__init(kk_context_t* _ctx);


void kk_std_os_path__done(kk_context_t* _ctx);

#endif // header
