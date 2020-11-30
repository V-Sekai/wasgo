/* THIS FILE IS GENERATED */
#include "PhysicsShapeQueryParameters.h"
int PhysicsShapeQueryParameters::get_collision_mask(){
	return (int) _wasgo_PhysicsShapeQueryParameters_wrapper_get_collision_mask(wasgo_id));
}
Array PhysicsShapeQueryParameters::get_exclude(){
	return Array::from_wasgo_id(_wasgo_PhysicsShapeQueryParameters_wrapper_get_exclude(wasgo_id));
}
float PhysicsShapeQueryParameters::get_margin(){
	return (float) _wasgo_PhysicsShapeQueryParameters_wrapper_get_margin(wasgo_id));
}
RID PhysicsShapeQueryParameters::get_shape_rid(){
	return RID::from_wasgo_id(_wasgo_PhysicsShapeQueryParameters_wrapper_get_shape_rid(wasgo_id));
}
Transform PhysicsShapeQueryParameters::get_transform(){
	return Transform::from_wasgo_id(_wasgo_PhysicsShapeQueryParameters_wrapper_get_transform(wasgo_id));
}
bool PhysicsShapeQueryParameters::is_collide_with_areas_enabled(){
	return (bool) _wasgo_PhysicsShapeQueryParameters_wrapper_is_collide_with_areas_enabled(wasgo_id));
}
bool PhysicsShapeQueryParameters::is_collide_with_bodies_enabled(){
	return (bool) _wasgo_PhysicsShapeQueryParameters_wrapper_is_collide_with_bodies_enabled(wasgo_id));
}
void PhysicsShapeQueryParameters::set_collide_with_areas(bool p_enable){
	_wasgo_PhysicsShapeQueryParameters_wrapper_set_collide_with_areas(wasgo_id, enable);
}
void PhysicsShapeQueryParameters::set_collide_with_bodies(bool p_enable){
	_wasgo_PhysicsShapeQueryParameters_wrapper_set_collide_with_bodies(wasgo_id, enable);
}
void PhysicsShapeQueryParameters::set_collision_mask(int p_collision_mask){
	_wasgo_PhysicsShapeQueryParameters_wrapper_set_collision_mask(wasgo_id, collision_mask);
}
void PhysicsShapeQueryParameters::set_exclude(Array p_exclude){
	_wasgo_PhysicsShapeQueryParameters_wrapper_set_exclude(wasgo_id, ((Variant) exclude).get_wasgo_id());
}
void PhysicsShapeQueryParameters::set_margin(float p_margin){
	_wasgo_PhysicsShapeQueryParameters_wrapper_set_margin(wasgo_id, margin);
}
void PhysicsShapeQueryParameters::set_shape(Resource p_shape){
	_wasgo_PhysicsShapeQueryParameters_wrapper_set_shape(wasgo_id, ((Variant) shape).get_wasgo_id());
}
void PhysicsShapeQueryParameters::set_shape_rid(RID p_shape){
	_wasgo_PhysicsShapeQueryParameters_wrapper_set_shape_rid(wasgo_id, ((Variant) shape).get_wasgo_id());
}
void PhysicsShapeQueryParameters::set_transform(Transform p_transform){
	_wasgo_PhysicsShapeQueryParameters_wrapper_set_transform(wasgo_id, ((Variant) transform).get_wasgo_id());
}

PhysicsShapeQueryParameters::PhysicsShapeQueryParameters(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
PhysicsShapeQueryParameters::~PhysicsShapeQueryParameters(){
}