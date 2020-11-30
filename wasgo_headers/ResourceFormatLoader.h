/* THIS FILE IS GENERATED */
#ifndef RESOURCEFORMATLOADER_H
#define RESOURCEFORMATLOADER_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Reference.h"
class ResourceFormatLoader : public Reference{
void get_dependencies(String p_path, String p_add_types);
PoolStringArray get_recognized_extensions();
String get_resource_type(String p_path);
bool handles_type(String p_typename);
Variant load(String p_path, String p_original_path);
int rename_dependencies(String p_path, String p_renames);

ResourceFormatLoader(WasGoId p_wasgo_id);
~ResourceFormatLoader();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ResourceFormatLoader_wrapper_get_dependencies(WasGoId wasgo_id, WasGo::WasGoId p_path, WasGo::WasGoId p_add_types);
WasGo::WasGoId _wasgo_ResourceFormatLoader_wrapper_get_recognized_extensions(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_ResourceFormatLoader_wrapper_get_resource_type(WasGoId wasgo_id, WasGo::WasGoId p_path);
int _wasgo_ResourceFormatLoader_wrapper_handles_type(WasGoId wasgo_id, WasGo::WasGoId p_typename);
WasGo::WasGoId _wasgo_ResourceFormatLoader_wrapper_load(WasGoId wasgo_id, WasGo::WasGoId p_path, WasGo::WasGoId p_original_path);
int _wasgo_ResourceFormatLoader_wrapper_rename_dependencies(WasGoId wasgo_id, WasGo::WasGoId p_path, WasGo::WasGoId p_renames);
}
#endif