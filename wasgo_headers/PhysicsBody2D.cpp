/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PhysicsBody2D.h"
void PhysicsBody2D::add_collision_exception_with(Node p_body){
	_wasgo_PhysicsBody2D_wrapper_add_collision_exception_with(wasgo_id, p_body._get_wasgo_id());
}
Array PhysicsBody2D::get_collision_exceptions(){
	return Array(_wasgo_PhysicsBody2D_wrapper_get_collision_exceptions(wasgo_id));
}
int PhysicsBody2D::get_collision_layer(){
	return (int) _wasgo_PhysicsBody2D_wrapper_get_collision_layer(wasgo_id);
}
bool PhysicsBody2D::get_collision_layer_bit(int p_bit){
	return (bool) _wasgo_PhysicsBody2D_wrapper_get_collision_layer_bit(wasgo_id, p_bit);
}
int PhysicsBody2D::get_collision_mask(){
	return (int) _wasgo_PhysicsBody2D_wrapper_get_collision_mask(wasgo_id);
}
bool PhysicsBody2D::get_collision_mask_bit(int p_bit){
	return (bool) _wasgo_PhysicsBody2D_wrapper_get_collision_mask_bit(wasgo_id, p_bit);
}
void PhysicsBody2D::remove_collision_exception_with(Node p_body){
	_wasgo_PhysicsBody2D_wrapper_remove_collision_exception_with(wasgo_id, p_body._get_wasgo_id());
}
void PhysicsBody2D::set_collision_layer(int p_layer){
	_wasgo_PhysicsBody2D_wrapper_set_collision_layer(wasgo_id, p_layer);
}
void PhysicsBody2D::set_collision_layer_bit(int p_bit, bool p_value){
	_wasgo_PhysicsBody2D_wrapper_set_collision_layer_bit(wasgo_id, p_bit, p_value);
}
void PhysicsBody2D::set_collision_mask(int p_mask){
	_wasgo_PhysicsBody2D_wrapper_set_collision_mask(wasgo_id, p_mask);
}
void PhysicsBody2D::set_collision_mask_bit(int p_bit, bool p_value){
	_wasgo_PhysicsBody2D_wrapper_set_collision_mask_bit(wasgo_id, p_bit, p_value);
}