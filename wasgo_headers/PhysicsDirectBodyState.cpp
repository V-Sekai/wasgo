/* THIS FILE IS GENERATED */
#include "PhysicsDirectBodyState.h"
void PhysicsDirectBodyState::add_central_force(Vector3 p_force){
	_wasgo_PhysicsDirectBodyState_wrapper_add_central_force(wasgo_id, ((Variant) p_force).get_wasgo_id());
}
void PhysicsDirectBodyState::add_force(Vector3 p_force, Vector3 p_position){
	_wasgo_PhysicsDirectBodyState_wrapper_add_force(wasgo_id, ((Variant) p_force).get_wasgo_id(), ((Variant) p_position).get_wasgo_id());
}
void PhysicsDirectBodyState::add_torque(Vector3 p_torque){
	_wasgo_PhysicsDirectBodyState_wrapper_add_torque(wasgo_id, ((Variant) p_torque).get_wasgo_id());
}
void PhysicsDirectBodyState::apply_central_impulse(Vector3 p_j){
	_wasgo_PhysicsDirectBodyState_wrapper_apply_central_impulse(wasgo_id, ((Variant) p_j).get_wasgo_id());
}
void PhysicsDirectBodyState::apply_impulse(Vector3 p_position, Vector3 p_j){
	_wasgo_PhysicsDirectBodyState_wrapper_apply_impulse(wasgo_id, ((Variant) p_position).get_wasgo_id(), ((Variant) p_j).get_wasgo_id());
}
void PhysicsDirectBodyState::apply_torque_impulse(Vector3 p_j){
	_wasgo_PhysicsDirectBodyState_wrapper_apply_torque_impulse(wasgo_id, ((Variant) p_j).get_wasgo_id());
}
Vector3 PhysicsDirectBodyState::get_angular_velocity(){
	return Vector3::from_wasgo_id(_wasgo_PhysicsDirectBodyState_wrapper_get_angular_velocity(wasgo_id));
}
Vector3 PhysicsDirectBodyState::get_center_of_mass(){
	return Vector3::from_wasgo_id(_wasgo_PhysicsDirectBodyState_wrapper_get_center_of_mass(wasgo_id));
}
RID PhysicsDirectBodyState::get_contact_collider(int p_contact_idx){
	return RID::from_wasgo_id(_wasgo_PhysicsDirectBodyState_wrapper_get_contact_collider(wasgo_id, p_contact_idx));
}
int PhysicsDirectBodyState::get_contact_collider_id(int p_contact_idx){
	return (int) _wasgo_PhysicsDirectBodyState_wrapper_get_contact_collider_id(wasgo_id, p_contact_idx);
}
Object PhysicsDirectBodyState::get_contact_collider_object(int p_contact_idx){
	return Object::from_wasgo_id(_wasgo_PhysicsDirectBodyState_wrapper_get_contact_collider_object(wasgo_id, p_contact_idx));
}
Vector3 PhysicsDirectBodyState::get_contact_collider_position(int p_contact_idx){
	return Vector3::from_wasgo_id(_wasgo_PhysicsDirectBodyState_wrapper_get_contact_collider_position(wasgo_id, p_contact_idx));
}
int PhysicsDirectBodyState::get_contact_collider_shape(int p_contact_idx){
	return (int) _wasgo_PhysicsDirectBodyState_wrapper_get_contact_collider_shape(wasgo_id, p_contact_idx);
}
Vector3 PhysicsDirectBodyState::get_contact_collider_velocity_at_position(int p_contact_idx){
	return Vector3::from_wasgo_id(_wasgo_PhysicsDirectBodyState_wrapper_get_contact_collider_velocity_at_position(wasgo_id, p_contact_idx));
}
int PhysicsDirectBodyState::get_contact_count(){
	return (int) _wasgo_PhysicsDirectBodyState_wrapper_get_contact_count(wasgo_id);
}
float PhysicsDirectBodyState::get_contact_impulse(int p_contact_idx){
	return (float) _wasgo_PhysicsDirectBodyState_wrapper_get_contact_impulse(wasgo_id, p_contact_idx);
}
Vector3 PhysicsDirectBodyState::get_contact_local_normal(int p_contact_idx){
	return Vector3::from_wasgo_id(_wasgo_PhysicsDirectBodyState_wrapper_get_contact_local_normal(wasgo_id, p_contact_idx));
}
Vector3 PhysicsDirectBodyState::get_contact_local_position(int p_contact_idx){
	return Vector3::from_wasgo_id(_wasgo_PhysicsDirectBodyState_wrapper_get_contact_local_position(wasgo_id, p_contact_idx));
}
int PhysicsDirectBodyState::get_contact_local_shape(int p_contact_idx){
	return (int) _wasgo_PhysicsDirectBodyState_wrapper_get_contact_local_shape(wasgo_id, p_contact_idx);
}
Vector3 PhysicsDirectBodyState::get_inverse_inertia(){
	return Vector3::from_wasgo_id(_wasgo_PhysicsDirectBodyState_wrapper_get_inverse_inertia(wasgo_id));
}
float PhysicsDirectBodyState::get_inverse_mass(){
	return (float) _wasgo_PhysicsDirectBodyState_wrapper_get_inverse_mass(wasgo_id);
}
Vector3 PhysicsDirectBodyState::get_linear_velocity(){
	return Vector3::from_wasgo_id(_wasgo_PhysicsDirectBodyState_wrapper_get_linear_velocity(wasgo_id));
}
Basis PhysicsDirectBodyState::get_principal_inertia_axes(){
	return Basis::from_wasgo_id(_wasgo_PhysicsDirectBodyState_wrapper_get_principal_inertia_axes(wasgo_id));
}
PhysicsDirectSpaceState PhysicsDirectBodyState::get_space_state(){
	return PhysicsDirectSpaceState::from_wasgo_id(_wasgo_PhysicsDirectBodyState_wrapper_get_space_state(wasgo_id));
}
float PhysicsDirectBodyState::get_step(){
	return (float) _wasgo_PhysicsDirectBodyState_wrapper_get_step(wasgo_id);
}
float PhysicsDirectBodyState::get_total_angular_damp(){
	return (float) _wasgo_PhysicsDirectBodyState_wrapper_get_total_angular_damp(wasgo_id);
}
Vector3 PhysicsDirectBodyState::get_total_gravity(){
	return Vector3::from_wasgo_id(_wasgo_PhysicsDirectBodyState_wrapper_get_total_gravity(wasgo_id));
}
float PhysicsDirectBodyState::get_total_linear_damp(){
	return (float) _wasgo_PhysicsDirectBodyState_wrapper_get_total_linear_damp(wasgo_id);
}
Transform PhysicsDirectBodyState::get_transform(){
	return Transform::from_wasgo_id(_wasgo_PhysicsDirectBodyState_wrapper_get_transform(wasgo_id));
}
void PhysicsDirectBodyState::integrate_forces(){
	_wasgo_PhysicsDirectBodyState_wrapper_integrate_forces(wasgo_id);
}
bool PhysicsDirectBodyState::is_sleeping(){
	return (bool) _wasgo_PhysicsDirectBodyState_wrapper_is_sleeping(wasgo_id);
}
void PhysicsDirectBodyState::set_angular_velocity(Vector3 p_velocity){
	_wasgo_PhysicsDirectBodyState_wrapper_set_angular_velocity(wasgo_id, ((Variant) p_velocity).get_wasgo_id());
}
void PhysicsDirectBodyState::set_linear_velocity(Vector3 p_velocity){
	_wasgo_PhysicsDirectBodyState_wrapper_set_linear_velocity(wasgo_id, ((Variant) p_velocity).get_wasgo_id());
}
void PhysicsDirectBodyState::set_sleep_state(bool p_enabled){
	_wasgo_PhysicsDirectBodyState_wrapper_set_sleep_state(wasgo_id, p_enabled);
}
void PhysicsDirectBodyState::set_transform(Transform p_transform){
	_wasgo_PhysicsDirectBodyState_wrapper_set_transform(wasgo_id, ((Variant) p_transform).get_wasgo_id());
}