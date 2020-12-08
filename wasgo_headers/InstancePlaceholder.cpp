/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "InstancePlaceholder.h"
Node InstancePlaceholder::create_instance(bool p_replace, PackedScene p_custom_scene){
	return Node(_wasgo_InstancePlaceholder_wrapper_create_instance(wasgo_id, p_replace, p_custom_scene._get_wasgo_id()));
}
String InstancePlaceholder::get_instance_path(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_InstancePlaceholder_wrapper_get_instance_path(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
Dictionary InstancePlaceholder::get_stored_values(bool p_with_order){
	return Dictionary(_wasgo_InstancePlaceholder_wrapper_get_stored_values(wasgo_id, p_with_order));
}
void InstancePlaceholder::replace_by_instance(PackedScene p_custom_scene){
	_wasgo_InstancePlaceholder_wrapper_replace_by_instance(wasgo_id, p_custom_scene._get_wasgo_id());
}

InstancePlaceholder::InstancePlaceholder(WasGoID p_wasgo_id) : Node(p_wasgo_id){
}
InstancePlaceholder::InstancePlaceholder(Node other) : Node(other._get_wasgo_id()){
}
InstancePlaceholder::InstancePlaceholder():Node(){
}
InstancePlaceholder InstancePlaceholder::new_instance(){
    return InstancePlaceholder(_wasgo_InstancePlaceholder_constructor());
}
WasGoID InstancePlaceholder::_get_wasgo_id(){
    return wasgo_id;
}
InstancePlaceholder::operator bool(){
    return (bool) wasgo_id;
}
