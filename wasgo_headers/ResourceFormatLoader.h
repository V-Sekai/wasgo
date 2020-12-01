/* THIS FILE IS GENERATED */
#ifndef RESOURCEFORMATLOADER_H
#define RESOURCEFORMATLOADER_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Reference.h"
#include "ustring.h"
#include "Variant.h"
class ResourceFormatLoader : public Reference{
public:
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
void _wasgo_ResourceFormatLoader_wrapper_get_dependencies(WasGoId wasgo_id, WasGoId p_path, WasGoId p_add_types);
WasGoId _wasgo_ResourceFormatLoader_wrapper_get_recognized_extensions(WasGoId wasgo_id);
WasGoId _wasgo_ResourceFormatLoader_wrapper_get_resource_type(WasGoId wasgo_id, WasGoId p_path);
int _wasgo_ResourceFormatLoader_wrapper_handles_type(WasGoId wasgo_id, WasGoId p_typename);
WasGoId _wasgo_ResourceFormatLoader_wrapper_load(WasGoId wasgo_id, WasGoId p_path, WasGoId p_original_path);
int _wasgo_ResourceFormatLoader_wrapper_rename_dependencies(WasGoId wasgo_id, WasGoId p_path, WasGoId p_renames);
}
#endif