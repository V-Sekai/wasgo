/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PhysicsShapeQueryParameters.h"
int PhysicsShapeQueryParameters::get_collision_mask(){
	return (int) _wasgo_PhysicsShapeQueryParameters_wrapper_get_collision_mask(wasgo_id);
}
Array PhysicsShapeQueryParameters::get_exclude(){
	return Array(_wasgo_PhysicsShapeQueryParameters_wrapper_get_exclude(wasgo_id));
}
float PhysicsShapeQueryParameters::get_margin(){
	return (float) _wasgo_PhysicsShapeQueryParameters_wrapper_get_margin(wasgo_id);
}
RID PhysicsShapeQueryParameters::get_shape_rid(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 0;
    uint8_t wasgo_ret_buffer[0];
    _wasgo_PhysicsShapeQueryParameters_wrapper_get_shape_rid(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (RID) wasgo_ret;
    
}
Transform PhysicsShapeQueryParameters::get_transform(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 52;
    uint8_t wasgo_ret_buffer[52];
    _wasgo_PhysicsShapeQueryParameters_wrapper_get_transform(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Transform) wasgo_ret;
    
}
bool PhysicsShapeQueryParameters::is_collide_with_areas_enabled(){
	return (bool) _wasgo_PhysicsShapeQueryParameters_wrapper_is_collide_with_areas_enabled(wasgo_id);
}
bool PhysicsShapeQueryParameters::is_collide_with_bodies_enabled(){
	return (bool) _wasgo_PhysicsShapeQueryParameters_wrapper_is_collide_with_bodies_enabled(wasgo_id);
}
void PhysicsShapeQueryParameters::set_collide_with_areas(bool p_enable){
	_wasgo_PhysicsShapeQueryParameters_wrapper_set_collide_with_areas(wasgo_id, p_enable);
}
void PhysicsShapeQueryParameters::set_collide_with_bodies(bool p_enable){
	_wasgo_PhysicsShapeQueryParameters_wrapper_set_collide_with_bodies(wasgo_id, p_enable);
}
void PhysicsShapeQueryParameters::set_collision_mask(int p_collision_mask){
	_wasgo_PhysicsShapeQueryParameters_wrapper_set_collision_mask(wasgo_id, p_collision_mask);
}
void PhysicsShapeQueryParameters::set_exclude(Array p_exclude){
	_wasgo_PhysicsShapeQueryParameters_wrapper_set_exclude(wasgo_id, p_exclude._get_wasgo_id());
}
void PhysicsShapeQueryParameters::set_margin(float p_margin){
	_wasgo_PhysicsShapeQueryParameters_wrapper_set_margin(wasgo_id, p_margin);
}
void PhysicsShapeQueryParameters::set_shape(Resource p_shape){
	_wasgo_PhysicsShapeQueryParameters_wrapper_set_shape(wasgo_id, p_shape._get_wasgo_id());
}
void PhysicsShapeQueryParameters::set_shape_rid(RID p_shape){

    Variant wasgo_var_shape = p_shape;
    uint8_t wasgo_buffer_shape[0];
    int wasgo_size_shape = 0;
    encode_variant(wasgo_var_shape, wasgo_buffer_shape, wasgo_size_shape);
    
	_wasgo_PhysicsShapeQueryParameters_wrapper_set_shape_rid(wasgo_id, wasgo_buffer_shape, wasgo_size_shape);
}
void PhysicsShapeQueryParameters::set_transform(Transform p_transform){

    Variant wasgo_var_transform = p_transform;
    uint8_t wasgo_buffer_transform[52];
    int wasgo_size_transform = 52;
    encode_variant(wasgo_var_transform, wasgo_buffer_transform, wasgo_size_transform);
    
	_wasgo_PhysicsShapeQueryParameters_wrapper_set_transform(wasgo_id, wasgo_buffer_transform, wasgo_size_transform);
}

PhysicsShapeQueryParameters::PhysicsShapeQueryParameters(WasGoID p_wasgo_id) : Reference(p_wasgo_id){
}
PhysicsShapeQueryParameters::PhysicsShapeQueryParameters(Reference other) : Reference(other._get_wasgo_id()){
    wasgo_id = _wasgo_PhysicsShapeQueryParameters_constructor();
}
PhysicsShapeQueryParameters::new_instance(){
    return PhysicsShapeQueryParameters(_wasgo_PhysicsShapeQueryParameters_constructor());
}