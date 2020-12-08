/* THIS FILE IS GENERATED */
#ifndef RESOURCEFORMATLOADER_H
#define RESOURCEFORMATLOADER_H

#include "wasgo\wasgoid.h"

#include "Variant.h"
#include "Reference.h"
#include "Ustring.h"
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
explicit ResourceFormatLoader(WasGoID p_wasgo_id);
explicit ResourceFormatLoader(Reference other);
ResourceFormatLoader();
ResourceFormatLoader new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ResourceFormatLoader_wrapper_get_dependencies(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size, const uint8_t * p_add_types, int p_add_types_wasgo_buffer_size);
WasGoID _wasgo_ResourceFormatLoader_wrapper_get_recognized_extensions(WasGoID wasgo_id);
void _wasgo_ResourceFormatLoader_wrapper_get_resource_type(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_path, int p_path_wasgo_buffer_size);
int _wasgo_ResourceFormatLoader_wrapper_handles_type(WasGoID wasgo_id, const uint8_t * p_typename, int p_typename_wasgo_buffer_size);
WasGoID _wasgo_ResourceFormatLoader_wrapper_load(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size, const uint8_t * p_original_path, int p_original_path_wasgo_buffer_size);
int _wasgo_ResourceFormatLoader_wrapper_rename_dependencies(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size, const uint8_t * p_renames, int p_renames_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_ResourceFormatLoader_constructor();
            
}
#endif