/* THIS FILE IS GENERATED */
#ifndef RESOURCEFORMATLOADER_H
#define RESOURCEFORMATLOADER_H

#include "wasgo\wasgo.h"

#include "Reference.h"
#include "Variant.h"
#include "ustring.h"
class ResourceFormatLoader : public Reference{
public:
void get_dependencies(String p_path, String p_add_types);
PoolStringArray get_recognized_extensions();
String get_resource_type(String p_path);
bool handles_type(String p_typename);
Variant load(String p_path, String p_original_path);
int rename_dependencies(String p_path, String p_renames);

protected:
public:
explicit ResourceFormatLoader(WasGoId p_wasgo_id);
explicit ResourceFormatLoader(Reference other);
ResourceFormatLoader new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ResourceFormatLoader_wrapper_get_dependencies(WasGoId wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size, const uint8_t * p_add_types, int p_add_types_wasgo_buffer_size);
WasGoId _wasgo_ResourceFormatLoader_wrapper_get_recognized_extensions(WasGoId wasgo_id);
void _wasgo_ResourceFormatLoader_wrapper_get_resource_type(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_path, int p_path_wasgo_buffer_size);
int _wasgo_ResourceFormatLoader_wrapper_handles_type(WasGoId wasgo_id, const uint8_t * p_typename, int p_typename_wasgo_buffer_size);
WasGoId _wasgo_ResourceFormatLoader_wrapper_load(WasGoId wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size, const uint8_t * p_original_path, int p_original_path_wasgo_buffer_size);
int _wasgo_ResourceFormatLoader_wrapper_rename_dependencies(WasGoId wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size, const uint8_t * p_renames, int p_renames_wasgo_buffer_size);

    //constructor wrappers
    WasGoId _wasgo_ResourceFormatLoader_constructor();
            
}
#endif