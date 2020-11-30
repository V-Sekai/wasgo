/* THIS FILE IS GENERATED */
#include "Physics2DDirectBodyState.h"
void Physics2DDirectBodyState::add_central_force(Vector2 p_force){
	_wasgo_Physics2DDirectBodyState_wrapper_add_central_force(wasgo_id, ((Variant) force).get_wasgo_id());
}
void Physics2DDirectBodyState::add_force(Vector2 p_offset, Vector2 p_force){
	_wasgo_Physics2DDirectBodyState_wrapper_add_force(wasgo_id, ((Variant) offset).get_wasgo_id(), ((Variant) force).get_wasgo_id());
}
void Physics2DDirectBodyState::add_torque(float p_torque){
	_wasgo_Physics2DDirectBodyState_wrapper_add_torque(wasgo_id, torque);
}
void Physics2DDirectBodyState::apply_central_impulse(Vector2 p_impulse){
	_wasgo_Physics2DDirectBodyState_wrapper_apply_central_impulse(wasgo_id, ((Variant) impulse).get_wasgo_id());
}
void Physics2DDirectBodyState::apply_impulse(Vector2 p_offset, Vector2 p_impulse){
	_wasgo_Physics2DDirectBodyState_wrapper_apply_impulse(wasgo_id, ((Variant) offset).get_wasgo_id(), ((Variant) impulse).get_wasgo_id());
}
void Physics2DDirectBodyState::apply_torque_impulse(float p_impulse){
	_wasgo_Physics2DDirectBodyState_wrapper_apply_torque_impulse(wasgo_id, impulse);
}
float Physics2DDirectBodyState::get_angular_velocity(){
	return (float) _wasgo_Physics2DDirectBodyState_wrapper_get_angular_velocity(wasgo_id));
}
RID Physics2DDirectBodyState::get_contact_collider(int p_contact_idx){
	return RID::from_wasgo_id(_wasgo_Physics2DDirectBodyState_wrapper_get_contact_collider(wasgo_id, contact_idx));
}
int Physics2DDirectBodyState::get_contact_collider_id(int p_contact_idx){
	return (int) _wasgo_Physics2DDirectBodyState_wrapper_get_contact_collider_id(wasgo_id, contact_idx));
}
Object Physics2DDirectBodyState::get_contact_collider_object(int p_contact_idx){
	return Object::from_wasgo_id(_wasgo_Physics2DDirectBodyState_wrapper_get_contact_collider_object(wasgo_id, contact_idx));
}
Vector2 Physics2DDirectBodyState::get_contact_collider_position(int p_contact_idx){
	return Vector2::from_wasgo_id(_wasgo_Physics2DDirectBodyState_wrapper_get_contact_collider_position(wasgo_id, contact_idx));
}
int Physics2DDirectBodyState::get_contact_collider_shape(int p_contact_idx){
	return (int) _wasgo_Physics2DDirectBodyState_wrapper_get_contact_collider_shape(wasgo_id, contact_idx));
}
Variant Physics2DDirectBodyState::get_contact_collider_shape_metadata(int p_contact_idx){
	return Variant::from_wasgo_id(_wasgo_Physics2DDirectBodyState_wrapper_get_contact_collider_shape_metadata(wasgo_id, contact_idx));
}
Vector2 Physics2DDirectBodyState::get_contact_collider_velocity_at_position(int p_contact_idx){
	return Vector2::from_wasgo_id(_wasgo_Physics2DDirectBodyState_wrapper_get_contact_collider_velocity_at_position(wasgo_id, contact_idx));
}
int Physics2DDirectBodyState::get_contact_count(){
	return (int) _wasgo_Physics2DDirectBodyState_wrapper_get_contact_count(wasgo_id));
}
Vector2 Physics2DDirectBodyState::get_contact_local_normal(int p_contact_idx){
	return Vector2::from_wasgo_id(_wasgo_Physics2DDirectBodyState_wrapper_get_contact_local_normal(wasgo_id, contact_idx));
}
Vector2 Physics2DDirectBodyState::get_contact_local_position(int p_contact_idx){
	return Vector2::from_wasgo_id(_wasgo_Physics2DDirectBodyState_wrapper_get_contact_local_position(wasgo_id, contact_idx));
}
int Physics2DDirectBodyState::get_contact_local_shape(int p_contact_idx){
	return (int) _wasgo_Physics2DDirectBodyState_wrapper_get_contact_local_shape(wasgo_id, contact_idx));
}
float Physics2DDirectBodyState::get_inverse_inertia(){
	return (float) _wasgo_Physics2DDirectBodyState_wrapper_get_inverse_inertia(wasgo_id));
}
float Physics2DDirectBodyState::get_inverse_mass(){
	return (float) _wasgo_Physics2DDirectBodyState_wrapper_get_inverse_mass(wasgo_id));
}
Vector2 Physics2DDirectBodyState::get_linear_velocity(){
	return Vector2::from_wasgo_id(_wasgo_Physics2DDirectBodyState_wrapper_get_linear_velocity(wasgo_id));
}
Physics2DDirectSpaceState Physics2DDirectBodyState::get_space_state(){
	return Physics2DDirectSpaceState::from_wasgo_id(_wasgo_Physics2DDirectBodyState_wrapper_get_space_state(wasgo_id));
}
float Physics2DDirectBodyState::get_step(){
	return (float) _wasgo_Physics2DDirectBodyState_wrapper_get_step(wasgo_id));
}
float Physics2DDirectBodyState::get_total_angular_damp(){
	return (float) _wasgo_Physics2DDirectBodyState_wrapper_get_total_angular_damp(wasgo_id));
}
Vector2 Physics2DDirectBodyState::get_total_gravity(){
	return Vector2::from_wasgo_id(_wasgo_Physics2DDirectBodyState_wrapper_get_total_gravity(wasgo_id));
}
float Physics2DDirectBodyState::get_total_linear_damp(){
	return (float) _wasgo_Physics2DDirectBodyState_wrapper_get_total_linear_damp(wasgo_id));
}
Transform2D Physics2DDirectBodyState::get_transform(){
	return Transform2D::from_wasgo_id(_wasgo_Physics2DDirectBodyState_wrapper_get_transform(wasgo_id));
}
void Physics2DDirectBodyState::integrate_forces(){
	_wasgo_Physics2DDirectBodyState_wrapper_integrate_forces(wasgo_id);
}
bool Physics2DDirectBodyState::is_sleeping(){
	return (bool) _wasgo_Physics2DDirectBodyState_wrapper_is_sleeping(wasgo_id));
}
void Physics2DDirectBodyState::set_angular_velocity(float p_velocity){
	_wasgo_Physics2DDirectBodyState_wrapper_set_angular_velocity(wasgo_id, velocity);
}
void Physics2DDirectBodyState::set_linear_velocity(Vector2 p_velocity){
	_wasgo_Physics2DDirectBodyState_wrapper_set_linear_velocity(wasgo_id, ((Variant) velocity).get_wasgo_id());
}
void Physics2DDirectBodyState::set_sleep_state(bool p_enabled){
	_wasgo_Physics2DDirectBodyState_wrapper_set_sleep_state(wasgo_id, enabled);
}
void Physics2DDirectBodyState::set_transform(Transform2D p_transform){
	_wasgo_Physics2DDirectBodyState_wrapper_set_transform(wasgo_id, ((Variant) transform).get_wasgo_id());
}