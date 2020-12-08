/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualInstance.h"
::AABB VisualInstance::get_aabb(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_VisualInstance_wrapper_get_aabb(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (AABB) wasgo_ret;
    
}
RID VisualInstance::get_base(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualInstance_wrapper_get_base(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
RID VisualInstance::get_instance(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_VisualInstance_wrapper_get_instance(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
int VisualInstance::get_layer_mask(){
	return (int) _wasgo_VisualInstance_wrapper_get_layer_mask(wasgo_id);
}
bool VisualInstance::get_layer_mask_bit(int p_layer){
	return (bool) _wasgo_VisualInstance_wrapper_get_layer_mask_bit(wasgo_id, p_layer);
}
::AABB VisualInstance::get_transformed_aabb(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_VisualInstance_wrapper_get_transformed_aabb(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (AABB) wasgo_ret;
    
}
void VisualInstance::set_base(RID p_base){

    Variant wasgo_var_base = p_base;
    uint8_t wasgo_buffer_base[0];
    int wasgo_size_base = 0;
    encode_variant(wasgo_var_base, wasgo_buffer_base, wasgo_size_base);
    
	_wasgo_VisualInstance_wrapper_set_base(wasgo_id, wasgo_buffer_base, wasgo_size_base);
}
void VisualInstance::set_layer_mask(int p_mask){
	_wasgo_VisualInstance_wrapper_set_layer_mask(wasgo_id, p_mask);
}
void VisualInstance::set_layer_mask_bit(int p_layer, bool p_enabled){
	_wasgo_VisualInstance_wrapper_set_layer_mask_bit(wasgo_id, p_layer, p_enabled);
}

VisualInstance::VisualInstance(WasGoID p_wasgo_id) : Spatial(p_wasgo_id){
}
VisualInstance::VisualInstance(Spatial other) : Spatial(other._get_wasgo_id()){
}
VisualInstance::VisualInstance():Spatial(){
}
VisualInstance VisualInstance::new_instance(){
    return VisualInstance(_wasgo_VisualInstance_constructor());
}
WasGoID VisualInstance::_get_wasgo_id(){
    return wasgo_id;
}
VisualInstance::operator bool(){
    return (bool) wasgo_id;
}
