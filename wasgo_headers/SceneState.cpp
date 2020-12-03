/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "SceneState.h"
Array SceneState::get_connection_binds(int p_idx){
	return Array(_wasgo_SceneState_wrapper_get_connection_binds(wasgo_id, p_idx));
}
int SceneState::get_connection_count(){
	return (int) _wasgo_SceneState_wrapper_get_connection_count(wasgo_id);
}
int SceneState::get_connection_flags(int p_idx){
	return (int) _wasgo_SceneState_wrapper_get_connection_flags(wasgo_id, p_idx);
}
String SceneState::get_connection_method(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_SceneState_wrapper_get_connection_method(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
String SceneState::get_connection_signal(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_SceneState_wrapper_get_connection_signal(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
NodePath SceneState::get_connection_source(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_SceneState_wrapper_get_connection_source(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (NodePath) wasgo_ret;
    
}
NodePath SceneState::get_connection_target(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_SceneState_wrapper_get_connection_target(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (NodePath) wasgo_ret;
    
}
int SceneState::get_node_count(){
	return (int) _wasgo_SceneState_wrapper_get_node_count(wasgo_id);
}
PoolStringArray SceneState::get_node_groups(int p_idx){
	return PoolStringArray(_wasgo_SceneState_wrapper_get_node_groups(wasgo_id, p_idx));
}
int SceneState::get_node_index(int p_idx){
	return (int) _wasgo_SceneState_wrapper_get_node_index(wasgo_id, p_idx);
}
PackedScene SceneState::get_node_instance(int p_idx){
	return PackedScene(_wasgo_SceneState_wrapper_get_node_instance(wasgo_id, p_idx));
}
String SceneState::get_node_instance_placeholder(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_SceneState_wrapper_get_node_instance_placeholder(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
String SceneState::get_node_name(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_SceneState_wrapper_get_node_name(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
NodePath SceneState::get_node_owner_path(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_SceneState_wrapper_get_node_owner_path(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (NodePath) wasgo_ret;
    
}
NodePath SceneState::get_node_path(int p_idx, bool p_for_parent = (bool) false){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_SceneState_wrapper_get_node_path(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx, p_for_parent);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (NodePath) wasgo_ret;
    
}
int SceneState::get_node_property_count(int p_idx){
	return (int) _wasgo_SceneState_wrapper_get_node_property_count(wasgo_id, p_idx);
}
String SceneState::get_node_property_name(int p_idx, int p_prop_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_SceneState_wrapper_get_node_property_name(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx, p_prop_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
Variant SceneState::get_node_property_value(int p_idx, int p_prop_idx){
	return Variant(_wasgo_SceneState_wrapper_get_node_property_value(wasgo_id, p_idx, p_prop_idx));
}
String SceneState::get_node_type(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_SceneState_wrapper_get_node_type(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
bool SceneState::is_node_instance_placeholder(int p_idx){
	return (bool) _wasgo_SceneState_wrapper_is_node_instance_placeholder(wasgo_id, p_idx);
}