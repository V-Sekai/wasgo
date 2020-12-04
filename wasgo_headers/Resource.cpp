/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Resource.h"
Resource Resource::duplicate(bool p_subresources = (bool) false){
	return Resource(_wasgo_Resource_wrapper_duplicate(wasgo_id, p_subresources));
}
Node Resource::get_local_scene(){
	return Node(_wasgo_Resource_wrapper_get_local_scene(wasgo_id));
}
String Resource::get_name(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Resource_wrapper_get_name(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
String Resource::get_path(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Resource_wrapper_get_path(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
RID Resource::get_rid(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_Resource_wrapper_get_rid(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
bool Resource::is_local_to_scene(){
	return (bool) _wasgo_Resource_wrapper_is_local_to_scene(wasgo_id);
}
void Resource::set_local_to_scene(bool p_enable){
	_wasgo_Resource_wrapper_set_local_to_scene(wasgo_id, p_enable);
}
void Resource::set_name(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_Resource_wrapper_set_name(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
void Resource::set_path(String p_path){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	_wasgo_Resource_wrapper_set_path(wasgo_id, wasgo_buffer_path, wasgo_size_path);
}
void Resource::setup_local_to_scene(){
	_wasgo_Resource_wrapper_setup_local_to_scene(wasgo_id);
}
void Resource::take_over_path(String p_path){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	_wasgo_Resource_wrapper_take_over_path(wasgo_id, wasgo_buffer_path, wasgo_size_path);
}

Resource::Resource(WasGoId p_wasgo_id) : Reference(p_wasgo_id){
}
Resource::Resource(Reference other) : Reference(other._get_wasgo_id()){
    wasgo_id = _wasgo_Resource_constructor();
}
Resource::new_instance(){
    return Resource(_wasgo_Resource_constructor());
}