#pragma once
#ifndef kk_std_os_env_H
#define kk_std_os_env_H
// Koka generated module: "std/os/env", koka version: 2.4.0, platform: 64-bit
#include <kklib.h>
#include "std_core_types.h"
#include "std_core.h"
#include "std_os_path.h"

// type declarations

// value declarations

kk_vector_t kk_std_os_env_os_get_argv(kk_context_t* _ctx); /* () -> ndet vector<string> */ 

kk_vector_t kk_std_os_env_os_get_env(kk_context_t* _ctx); /* () -> ndet vector<string> */ 

kk_string_t kk_std_os_env_get_cc_name(kk_context_t* _ctx); /* () -> ndet string */ 

kk_string_t kk_std_os_env_get_compiler_version(kk_context_t* _ctx); /* () -> ndet string */ 

kk_integer_t kk_std_os_env_get_cpu_address_bits(kk_context_t* _ctx); /* () -> ndet int */ 

kk_string_t kk_std_os_env_get_cpu_arch(kk_context_t* _ctx); /* () -> ndet string */ 

kk_integer_t kk_std_os_env_get_cpu_arch_bits(kk_context_t* _ctx); /* () -> ndet int */ 

kk_integer_t kk_std_os_env_get_cpu_count(kk_context_t* _ctx); /* () -> ndet int */ 

bool kk_std_os_env_get_cpu_is_little_endian(kk_context_t* _ctx); /* () -> ndet bool */ 

kk_integer_t kk_std_os_env_get_cpu_object_bits(kk_context_t* _ctx); /* () -> ndet int */ 

kk_string_t kk_std_os_env_get_os_name(kk_context_t* _ctx); /* () -> ndet string */ 

extern kk_std_core__delayed kk_std_os_env_argv;

kk_std_core__list kk_std_os_env__ctail_to_tuples(kk_std_core__list xs, kk_std_core_types__ctail _acc, kk_context_t* _ctx); /* (xs : list<string>, ctail<env>) -> env */ 

kk_std_core__list kk_std_os_env_to_tuples(kk_std_core__list xs0, kk_context_t* _ctx); /* (xs : list<string>) -> env */ 

extern kk_std_core__delayed kk_std_os_env_environ;
 
// The unprocessed command line that was used to start this program.
// On ''Node'' the first arguments will often be of the form `["node","interactive.js",...]`.

static inline kk_std_core__list kk_std_os_env_get_argv(kk_context_t* _ctx) { /* () -> ndet list<string> */ 
  kk_box_t _x588;
  kk_std_core__delayed _x589 = kk_std_core__delayed_dup(kk_std_os_env_argv); /*delayed<ndet,list<string>>*/
  _x588 = kk_std_core_force(_x589, _ctx); /*1001*/
  return kk_std_core__list_unbox(_x588, _ctx);
}

kk_std_core__list kk_std_os_env_get_args(kk_context_t* _ctx); /* () -> ndet list<string> */ 
 
// Get the environment variables for this program

static inline kk_std_core__list kk_std_os_env_get_env(kk_context_t* _ctx) { /* () -> ndet env */ 
  kk_box_t _x603;
  kk_std_core__delayed _x604 = kk_std_core__delayed_dup(kk_std_os_env_environ); /*delayed<ndet,std/os/env/env>*/
  _x603 = kk_std_core_force(_x604, _ctx); /*1001*/
  return kk_std_core__list_unbox(_x603, _ctx);
}

kk_std_core_types__maybe kk_std_os_env__lift482_get_env_1(kk_string_t name, kk_std_core__list xs0, kk_context_t* _ctx); /* (name : string, xs0 : list<(string, string)>) -> maybe<string> */ 

kk_std_core_types__maybe kk_std_os_env__lift481_get_env_1(kk_string_t name, kk_std_core__list xs, kk_context_t* _ctx); /* (name : string, xs : list<(string, string)>) -> maybe<string> */ 
 
// Returns the value of an environment variable `name` (or `Nothing` if not present)

static inline kk_std_core_types__maybe kk_std_os_env_get_env_1(kk_string_t name, kk_context_t* _ctx) { /* (name : string) -> ndet maybe<string> */ 
  kk_std_core__list xs;
  kk_box_t _x615;
  kk_std_core__delayed _x616 = kk_std_core__delayed_dup(kk_std_os_env_environ); /*delayed<ndet,std/os/env/env>*/
  _x615 = kk_std_core_force(_x616, _ctx); /*1001*/
  xs = kk_std_core__list_unbox(_x615, _ctx); /*list<(string, string)>*/
  return kk_std_os_env__lift481_get_env_1(name, xs, _ctx);
}

void kk_std_os_env__init(kk_context_t* _ctx);


void kk_std_os_env__done(kk_context_t* _ctx);

#endif // header
