/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ResourceFormatLoader.h"
void ResourceFormatLoader::get_dependencies(String p_path, String p_add_types){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    

    Variant wasgo_var_add_types = p_add_types;
    int wasgo_size_add_types = String(p_add_types).size();
    uint8_t wasgo_buffer_add_types[wasgo_size_add_types];
    encode_variant(wasgo_var_add_types, wasgo_buffer_add_types, wasgo_size_add_types);
    
	_wasgo_ResourceFormatLoader_wrapper_get_dependencies(wasgo_id, wasgo_buffer_path, wasgo_size_path, wasgo_buffer_add_types, wasgo_size_add_types);
}
PoolStringArray ResourceFormatLoader::get_recognized_extensions(){
	return PoolStringArray(_wasgo_ResourceFormatLoader_wrapper_get_recognized_extensions(wasgo_id));
}
String ResourceFormatLoader::get_resource_type(String p_path){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_ResourceFormatLoader_wrapper_get_resource_type(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_path, wasgo_size_path);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
bool ResourceFormatLoader::handles_type(String p_typename){

    Variant wasgo_var_typename = p_typename;
    int wasgo_size_typename = String(p_typename).size();
    uint8_t wasgo_buffer_typename[wasgo_size_typename];
    encode_variant(wasgo_var_typename, wasgo_buffer_typename, wasgo_size_typename);
    
	return (bool) _wasgo_ResourceFormatLoader_wrapper_handles_type(wasgo_id, wasgo_buffer_typename, wasgo_size_typename);
}
Variant ResourceFormatLoader::load(String p_path, String p_original_path){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    

    Variant wasgo_var_original_path = p_original_path;
    int wasgo_size_original_path = String(p_original_path).size();
    uint8_t wasgo_buffer_original_path[wasgo_size_original_path];
    encode_variant(wasgo_var_original_path, wasgo_buffer_original_path, wasgo_size_original_path);
    
	return Variant(_wasgo_ResourceFormatLoader_wrapper_load(wasgo_id, wasgo_buffer_path, wasgo_size_path, wasgo_buffer_original_path, wasgo_size_original_path));
}
int ResourceFormatLoader::rename_dependencies(String p_path, String p_renames){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    

    Variant wasgo_var_renames = p_renames;
    int wasgo_size_renames = String(p_renames).size();
    uint8_t wasgo_buffer_renames[wasgo_size_renames];
    encode_variant(wasgo_var_renames, wasgo_buffer_renames, wasgo_size_renames);
    
	return (int) _wasgo_ResourceFormatLoader_wrapper_rename_dependencies(wasgo_id, wasgo_buffer_path, wasgo_size_path, wasgo_buffer_renames, wasgo_size_renames);
}

ResourceFormatLoader::ResourceFormatLoader(WasGoId p_wasgo_id) : Reference(p_wasgo_id){
}
ResourceFormatLoader::ResourceFormatLoader(Reference other) : Reference(other._get_wasgo_id()){
    wasgo_id = _wasgo_ResourceFormatLoader_constructor();
}
ResourceFormatLoader::new_instance(){
    return ResourceFormatLoader(_wasgo_ResourceFormatLoader_constructor());
}