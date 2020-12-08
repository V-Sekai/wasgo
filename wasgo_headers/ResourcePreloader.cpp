/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ResourcePreloader.h"
void ResourcePreloader::add_resource(String p_name, Resource p_resource){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_ResourcePreloader_wrapper_add_resource(wasgo_id, wasgo_buffer_name, wasgo_size_name, p_resource._get_wasgo_id());
}
Resource ResourcePreloader::get_resource(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return Resource(_wasgo_ResourcePreloader_wrapper_get_resource(wasgo_id, wasgo_buffer_name, wasgo_size_name));
}
PoolStringArray ResourcePreloader::get_resource_list(){
	return PoolStringArray(_wasgo_ResourcePreloader_wrapper_get_resource_list(wasgo_id));
}
bool ResourcePreloader::has_resource(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return (bool) _wasgo_ResourcePreloader_wrapper_has_resource(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
void ResourcePreloader::remove_resource(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_ResourcePreloader_wrapper_remove_resource(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
void ResourcePreloader::rename_resource(String p_name, String p_newname){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_newname = p_newname;
    int wasgo_size_newname = String(p_newname).size();
    uint8_t wasgo_buffer_newname[wasgo_size_newname];
    encode_variant(wasgo_var_newname, wasgo_buffer_newname, wasgo_size_newname);
    
	_wasgo_ResourcePreloader_wrapper_rename_resource(wasgo_id, wasgo_buffer_name, wasgo_size_name, wasgo_buffer_newname, wasgo_size_newname);
}

ResourcePreloader::ResourcePreloader(WasGoID p_wasgo_id) : Node(p_wasgo_id){
}
ResourcePreloader::ResourcePreloader(Node other) : Node(other._get_wasgo_id()){
}
ResourcePreloader::ResourcePreloader():Node(){
}
ResourcePreloader ResourcePreloader::new_instance(){
    return ResourcePreloader(_wasgo_ResourcePreloader_constructor());
}
WasGoID ResourcePreloader::_get_wasgo_id(){
    return wasgo_id;
}
ResourcePreloader::operator bool(){
    return (bool) wasgo_id;
}
