/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ProximityGroup.h"
void ProximityGroup::broadcast(String p_name, Variant p_parameters){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = 10 + String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_var_parameters = p_parameters;
    uint8_t wasgo_buffer_parameters[256];
    int wasgo_size_parameters = 256;
    encode_variant(wasgo_var_parameters, wasgo_buffer_parameters, wasgo_size_parameters);
    
	_wasgo_ProximityGroup_wrapper_broadcast(wasgo_id, wasgo_buffer_name, wasgo_size_name, -69, wasgo_buffer_parameters, wasgo_size_parameters);
}
ProximityGroup::DispatchMode ProximityGroup::get_dispatch_mode(){
	return ProximityGroup::DispatchMode(_wasgo_ProximityGroup_wrapper_get_dispatch_mode(wasgo_id));
}
Vector3 ProximityGroup::get_grid_radius(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 16;
    uint8_t wasgo_ret_buffer[16];
    _wasgo_ProximityGroup_wrapper_get_grid_radius(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
String ProximityGroup::get_group_name(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_ProximityGroup_wrapper_get_group_name(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
void ProximityGroup::set_dispatch_mode(ProximityGroup::DispatchMode p_mode){
	_wasgo_ProximityGroup_wrapper_set_dispatch_mode(wasgo_id, p_mode._get_wasgo_id());
}
void ProximityGroup::set_grid_radius(Vector3 p_radius){

    Variant wasgo_var_radius = p_radius;
    uint8_t wasgo_buffer_radius[16];
    int wasgo_size_radius = 16;
    encode_variant(wasgo_var_radius, wasgo_buffer_radius, wasgo_size_radius);
    
	_wasgo_ProximityGroup_wrapper_set_grid_radius(wasgo_id, wasgo_buffer_radius, wasgo_size_radius);
}
void ProximityGroup::set_group_name(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = 10 + String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_ProximityGroup_wrapper_set_group_name(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}

ProximityGroup::ProximityGroup(WasGoID p_wasgo_id) : Spatial(p_wasgo_id){
}
ProximityGroup::ProximityGroup(Spatial other) : Spatial(other._get_wasgo_id()){
}
ProximityGroup::ProximityGroup():Spatial(){
}
ProximityGroup ProximityGroup::new_instance(){
    return ProximityGroup(_wasgo_ProximityGroup_constructor());
}
WasGoID ProximityGroup::_get_wasgo_id(){
    return wasgo_id;
}
ProximityGroup::operator bool(){
    return (bool) wasgo_id;
}
