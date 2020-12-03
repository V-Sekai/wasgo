/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ResourcePreloader.h"
void ResourcePreloader::add_resource(String p_name, Resource p_resource){

    Variant wasgo_var_name = p_name;
    uint8_t wasgo_buffer_name[256];
    int wasgo_size_name = 256;
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_ResourcePreloader_wrapper_add_resource(wasgo_id, wasgo_buffer_name, wasgo_size_name, p_resource._get_wasgo_id());
}
Resource ResourcePreloader::get_resource(String p_name){

    Variant wasgo_var_name = p_name;
    uint8_t wasgo_buffer_name[256];
    int wasgo_size_name = 256;
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return Resource(_wasgo_ResourcePreloader_wrapper_get_resource(wasgo_id, wasgo_buffer_name, wasgo_size_name));
}
PoolStringArray ResourcePreloader::get_resource_list(){
	return PoolStringArray(_wasgo_ResourcePreloader_wrapper_get_resource_list(wasgo_id));
}
bool ResourcePreloader::has_resource(String p_name){

    Variant wasgo_var_name = p_name;
    uint8_t wasgo_buffer_name[256];
    int wasgo_size_name = 256;
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return (bool) _wasgo_ResourcePreloader_wrapper_has_resource(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
void ResourcePreloader::remove_resource(String p_name){

    Variant wasgo_var_name = p_name;
    uint8_t wasgo_buffer_name[256];
    int wasgo_size_name = 256;
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_ResourcePreloader_wrapper_remove_resource(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
void ResourcePreloader::rename_resource(String p_name, String p_newname){

    Variant wasgo_var_name = p_name;
    uint8_t wasgo_buffer_name[256];
    int wasgo_size_name = 256;
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_newname = p_newname;
    uint8_t wasgo_buffer_newname[256];
    int wasgo_size_newname = 256;
    encode_variant(wasgo_var_newname, wasgo_buffer_newname, wasgo_size_newname);
    
	_wasgo_ResourcePreloader_wrapper_rename_resource(wasgo_id, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_newname, wasgo_size_newname);
}

ResourcePreloader::ResourcePreloader(WasGoId p_wasgo_id) : Node(p_wasgo_id){
}
ResourcePreloader::ResourcePreloader(){
    wasgo_id = _wasgo_ResourcePreloader_constructor();
}
ResourcePreloader::~ResourcePreloader(){
    _wasgo_ResourcePreloader_destructor(wasgo_id);
}