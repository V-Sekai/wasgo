/* THIS FILE IS GENERATED */
#include "PhysicsBody.h"
int PhysicsBody::get_collision_layer(){
	return (int) _wasgo_PhysicsBody_wrapper_get_collision_layer(wasgo_id));
}
bool PhysicsBody::get_collision_layer_bit(int p_bit){
	return (bool) _wasgo_PhysicsBody_wrapper_get_collision_layer_bit(wasgo_id, bit));
}
int PhysicsBody::get_collision_mask(){
	return (int) _wasgo_PhysicsBody_wrapper_get_collision_mask(wasgo_id));
}
bool PhysicsBody::get_collision_mask_bit(int p_bit){
	return (bool) _wasgo_PhysicsBody_wrapper_get_collision_mask_bit(wasgo_id, bit));
}
void PhysicsBody::set_collision_layer(int p_layer){
	_wasgo_PhysicsBody_wrapper_set_collision_layer(wasgo_id, layer);
}
void PhysicsBody::set_collision_layer_bit(int p_bit, bool p_value){
	_wasgo_PhysicsBody_wrapper_set_collision_layer_bit(wasgo_id, bit, value);
}
void PhysicsBody::set_collision_mask(int p_mask){
	_wasgo_PhysicsBody_wrapper_set_collision_mask(wasgo_id, mask);
}
void PhysicsBody::set_collision_mask_bit(int p_bit, bool p_value){
	_wasgo_PhysicsBody_wrapper_set_collision_mask_bit(wasgo_id, bit, value);
}