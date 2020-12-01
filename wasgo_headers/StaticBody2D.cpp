/* THIS FILE IS GENERATED */
#include "StaticBody2D.h"
float StaticBody2D::get_bounce(){
	return (float) _wasgo_StaticBody2D_wrapper_get_bounce(wasgo_id);
}
float StaticBody2D::get_constant_angular_velocity(){
	return (float) _wasgo_StaticBody2D_wrapper_get_constant_angular_velocity(wasgo_id);
}
Vector2 StaticBody2D::get_constant_linear_velocity(){
	return Vector2::from_wasgo_id(_wasgo_StaticBody2D_wrapper_get_constant_linear_velocity(wasgo_id));
}
float StaticBody2D::get_friction(){
	return (float) _wasgo_StaticBody2D_wrapper_get_friction(wasgo_id);
}
PhysicsMaterial StaticBody2D::get_physics_material_override(){
	return PhysicsMaterial::from_wasgo_id(_wasgo_StaticBody2D_wrapper_get_physics_material_override(wasgo_id));
}
void StaticBody2D::set_bounce(float p_bounce){
	_wasgo_StaticBody2D_wrapper_set_bounce(wasgo_id, p_bounce);
}
void StaticBody2D::set_constant_angular_velocity(float p_vel){
	_wasgo_StaticBody2D_wrapper_set_constant_angular_velocity(wasgo_id, p_vel);
}
void StaticBody2D::set_constant_linear_velocity(Vector2 p_vel){
	_wasgo_StaticBody2D_wrapper_set_constant_linear_velocity(wasgo_id, ((Variant) p_vel).get_wasgo_id());
}
void StaticBody2D::set_friction(float p_friction){
	_wasgo_StaticBody2D_wrapper_set_friction(wasgo_id, p_friction);
}
void StaticBody2D::set_physics_material_override(PhysicsMaterial p_physics_material_override){
	_wasgo_StaticBody2D_wrapper_set_physics_material_override(wasgo_id, ((Variant) p_physics_material_override).get_wasgo_id());
}