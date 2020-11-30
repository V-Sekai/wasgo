/* THIS FILE IS GENERATED */
#include "PhysicsMaterial.h"
float PhysicsMaterial::get_bounce(){
	return (float) _wasgo_PhysicsMaterial_wrapper_get_bounce(wasgo_id));
}
float PhysicsMaterial::get_friction(){
	return (float) _wasgo_PhysicsMaterial_wrapper_get_friction(wasgo_id));
}
bool PhysicsMaterial::is_absorbent(){
	return (bool) _wasgo_PhysicsMaterial_wrapper_is_absorbent(wasgo_id));
}
bool PhysicsMaterial::is_rough(){
	return (bool) _wasgo_PhysicsMaterial_wrapper_is_rough(wasgo_id));
}
void PhysicsMaterial::set_absorbent(bool p_absorbent){
	_wasgo_PhysicsMaterial_wrapper_set_absorbent(wasgo_id, absorbent);
}
void PhysicsMaterial::set_bounce(float p_bounce){
	_wasgo_PhysicsMaterial_wrapper_set_bounce(wasgo_id, bounce);
}
void PhysicsMaterial::set_friction(float p_friction){
	_wasgo_PhysicsMaterial_wrapper_set_friction(wasgo_id, friction);
}
void PhysicsMaterial::set_rough(bool p_rough){
	_wasgo_PhysicsMaterial_wrapper_set_rough(wasgo_id, rough);
}

PhysicsMaterial::PhysicsMaterial(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
PhysicsMaterial::~PhysicsMaterial(){
}