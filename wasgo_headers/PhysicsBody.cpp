/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PhysicsBody.h"
void PhysicsBody::add_collision_exception_with(Node p_body){
	_wasgo_PhysicsBody_wrapper_add_collision_exception_with(wasgo_id, p_body._get_wasgo_id());
}
Array PhysicsBody::get_collision_exceptions(){
	return Array(_wasgo_PhysicsBody_wrapper_get_collision_exceptions(wasgo_id));
}
int PhysicsBody::get_collision_layer(){
	return (int) _wasgo_PhysicsBody_wrapper_get_collision_layer(wasgo_id);
}
bool PhysicsBody::get_collision_layer_bit(int p_bit){
	return (bool) _wasgo_PhysicsBody_wrapper_get_collision_layer_bit(wasgo_id, p_bit);
}
int PhysicsBody::get_collision_mask(){
	return (int) _wasgo_PhysicsBody_wrapper_get_collision_mask(wasgo_id);
}
bool PhysicsBody::get_collision_mask_bit(int p_bit){
	return (bool) _wasgo_PhysicsBody_wrapper_get_collision_mask_bit(wasgo_id, p_bit);
}
void PhysicsBody::remove_collision_exception_with(Node p_body){
	_wasgo_PhysicsBody_wrapper_remove_collision_exception_with(wasgo_id, p_body._get_wasgo_id());
}
void PhysicsBody::set_collision_layer(int p_layer){
	_wasgo_PhysicsBody_wrapper_set_collision_layer(wasgo_id, p_layer);
}
void PhysicsBody::set_collision_layer_bit(int p_bit, bool p_value){
	_wasgo_PhysicsBody_wrapper_set_collision_layer_bit(wasgo_id, p_bit, p_value);
}
void PhysicsBody::set_collision_mask(int p_mask){
	_wasgo_PhysicsBody_wrapper_set_collision_mask(wasgo_id, p_mask);
}
void PhysicsBody::set_collision_mask_bit(int p_bit, bool p_value){
	_wasgo_PhysicsBody_wrapper_set_collision_mask_bit(wasgo_id, p_bit, p_value);
}

PhysicsBody::PhysicsBody(WasGoID p_wasgo_id) : CollisionObject(p_wasgo_id){
}
PhysicsBody::PhysicsBody(CollisionObject other) : CollisionObject(other._get_wasgo_id()){
}
PhysicsBody::PhysicsBody():CollisionObject(){
}
PhysicsBody PhysicsBody::new_instance(){
    return PhysicsBody(_wasgo_PhysicsBody_constructor());
}
WasGoID PhysicsBody::_get_wasgo_id(){
    return wasgo_id;
}
PhysicsBody::operator bool(){
    return (bool) wasgo_id;
}
