/* THIS FILE IS GENERATED */
#include "StaticBody.h"
float StaticBody::get_bounce(){
	return (float) _wasgo_StaticBody_wrapper_get_bounce(wasgo_id));
}
Vector3 StaticBody::get_constant_angular_velocity(){
	return Vector3::from_wasgo_id(_wasgo_StaticBody_wrapper_get_constant_angular_velocity(wasgo_id));
}
Vector3 StaticBody::get_constant_linear_velocity(){
	return Vector3::from_wasgo_id(_wasgo_StaticBody_wrapper_get_constant_linear_velocity(wasgo_id));
}
float StaticBody::get_friction(){
	return (float) _wasgo_StaticBody_wrapper_get_friction(wasgo_id));
}
PhysicsMaterial StaticBody::get_physics_material_override(){
	return PhysicsMaterial::from_wasgo_id(_wasgo_StaticBody_wrapper_get_physics_material_override(wasgo_id));
}
void StaticBody::set_bounce(float p_bounce){
	_wasgo_StaticBody_wrapper_set_bounce(wasgo_id, bounce);
}
void StaticBody::set_constant_angular_velocity(Vector3 p_vel){
	_wasgo_StaticBody_wrapper_set_constant_angular_velocity(wasgo_id, ((Variant) vel).get_wasgo_id());
}
void StaticBody::set_constant_linear_velocity(Vector3 p_vel){
	_wasgo_StaticBody_wrapper_set_constant_linear_velocity(wasgo_id, ((Variant) vel).get_wasgo_id());
}
void StaticBody::set_friction(float p_friction){
	_wasgo_StaticBody_wrapper_set_friction(wasgo_id, friction);
}
void StaticBody::set_physics_material_override(PhysicsMaterial p_physics_material_override){
	_wasgo_StaticBody_wrapper_set_physics_material_override(wasgo_id, ((Variant) physics_material_override).get_wasgo_id());
}

StaticBody::StaticBody(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
StaticBody::~StaticBody(){
}