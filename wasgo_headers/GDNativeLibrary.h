/* THIS FILE IS GENERATED */
#ifndef GDNATIVELIBRARY_H
#define GDNATIVELIBRARY_H

#include <stdint.h>

#include "Resource.h"
#include "String.h"
#include "PoolStringArray.h"
#include "ConfigFile.h"
class GDNativeLibrary : public Resource{
public: GDNativeLibrary();
ConfigFile  get_config_file();
ConfigFile  get_config_file();
PoolStringArray  get_current_dependencies();
PoolStringArray  get_current_dependencies();
String  get_current_library_path();
String  get_current_library_path();
String  get_symbol_prefix();
String  get_symbol_prefix();
bool  is_reloadable();
bool  is_reloadable();
bool  is_singleton();
bool  is_singleton();
void  set_config_file(ConfigFile config_file);
void  set_load_once(bool load_once);
void  set_reloadable(bool reloadable);
void  set_singleton(bool singleton);
void  set_symbol_prefix(String symbol_prefix);
bool  should_load_once();
bool  should_load_once();
};
#endif