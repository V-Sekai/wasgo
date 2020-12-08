/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PhysicsMaterial.h"
float PhysicsMaterial::get_bounce(){
	return (float) _wasgo_PhysicsMaterial_wrapper_get_bounce(wasgo_id);
}
float PhysicsMaterial::get_friction(){
	return (float) _wasgo_PhysicsMaterial_wrapper_get_friction(wasgo_id);
}
bool PhysicsMaterial::is_absorbent(){
	return (bool) _wasgo_PhysicsMaterial_wrapper_is_absorbent(wasgo_id);
}
bool PhysicsMaterial::is_rough(){
	return (bool) _wasgo_PhysicsMaterial_wrapper_is_rough(wasgo_id);
}
void PhysicsMaterial::set_absorbent(bool p_absorbent){
	_wasgo_PhysicsMaterial_wrapper_set_absorbent(wasgo_id, p_absorbent);
}
void PhysicsMaterial::set_bounce(float p_bounce){
	_wasgo_PhysicsMaterial_wrapper_set_bounce(wasgo_id, p_bounce);
}
void PhysicsMaterial::set_friction(float p_friction){
	_wasgo_PhysicsMaterial_wrapper_set_friction(wasgo_id, p_friction);
}
void PhysicsMaterial::set_rough(bool p_rough){
	_wasgo_PhysicsMaterial_wrapper_set_rough(wasgo_id, p_rough);
}

PhysicsMaterial::PhysicsMaterial(WasGoID p_wasgo_id) : Resource(p_wasgo_id){
}
PhysicsMaterial::PhysicsMaterial(Resource other) : Resource(other._get_wasgo_id()){
}
PhysicsMaterial::PhysicsMaterial():Resource(){
}
PhysicsMaterial PhysicsMaterial::new_instance(){
    return PhysicsMaterial(_wasgo_PhysicsMaterial_constructor());
}
WasGoID PhysicsMaterial::_get_wasgo_id(){
    return wasgo_id;
}
PhysicsMaterial::operator bool(){
    return (bool) wasgo_id;
}
