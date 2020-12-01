/* THIS FILE IS GENERATED */
#include "PhysicsServer.h"
void PhysicsServer::area_add_shape(RID p_area, RID p_shape, Transform p_transform = Transform(1, 0, 0, 0, 1, 0, 0, 0, 1 - 0, 0, 0), bool p_disabled = (bool) false){
	_wasgo_PhysicsServer_wrapper_area_add_shape(wasgo_id, ((Variant) p_area).get_wasgo_id(), ((Variant) p_shape).get_wasgo_id(), ((Variant) p_transform).get_wasgo_id(), p_disabled);
}
void PhysicsServer::area_attach_object_instance_id(RID p_area, int p_id){
	_wasgo_PhysicsServer_wrapper_area_attach_object_instance_id(wasgo_id, ((Variant) p_area).get_wasgo_id(), p_id);
}
void PhysicsServer::area_clear_shapes(RID p_area){
	_wasgo_PhysicsServer_wrapper_area_clear_shapes(wasgo_id, ((Variant) p_area).get_wasgo_id());
}
RID PhysicsServer::area_create(){
	return RID::from_wasgo_id(_wasgo_PhysicsServer_wrapper_area_create(wasgo_id));
}
int PhysicsServer::area_get_object_instance_id(RID p_area){
	return (int) _wasgo_PhysicsServer_wrapper_area_get_object_instance_id(wasgo_id, ((Variant) p_area).get_wasgo_id());
}
Variant PhysicsServer::area_get_param(RID p_area, PhysicsServer::AreaParameter p_param){
	return Variant::from_wasgo_id(_wasgo_PhysicsServer_wrapper_area_get_param(wasgo_id, ((Variant) p_area).get_wasgo_id(), ((Variant) p_param).get_wasgo_id()));
}
RID PhysicsServer::area_get_shape(RID p_area, int p_shape_idx){
	return RID::from_wasgo_id(_wasgo_PhysicsServer_wrapper_area_get_shape(wasgo_id, ((Variant) p_area).get_wasgo_id(), p_shape_idx));
}
int PhysicsServer::area_get_shape_count(RID p_area){
	return (int) _wasgo_PhysicsServer_wrapper_area_get_shape_count(wasgo_id, ((Variant) p_area).get_wasgo_id());
}
Transform PhysicsServer::area_get_shape_transform(RID p_area, int p_shape_idx){
	return Transform::from_wasgo_id(_wasgo_PhysicsServer_wrapper_area_get_shape_transform(wasgo_id, ((Variant) p_area).get_wasgo_id(), p_shape_idx));
}
RID PhysicsServer::area_get_space(RID p_area){
	return RID::from_wasgo_id(_wasgo_PhysicsServer_wrapper_area_get_space(wasgo_id, ((Variant) p_area).get_wasgo_id()));
}
PhysicsServer::AreaSpaceOverrideMode PhysicsServer::area_get_space_override_mode(RID p_area){
	return PhysicsServer::AreaSpaceOverrideMode::from_wasgo_id(_wasgo_PhysicsServer_wrapper_area_get_space_override_mode(wasgo_id, ((Variant) p_area).get_wasgo_id()));
}
Transform PhysicsServer::area_get_transform(RID p_area){
	return Transform::from_wasgo_id(_wasgo_PhysicsServer_wrapper_area_get_transform(wasgo_id, ((Variant) p_area).get_wasgo_id()));
}
bool PhysicsServer::area_is_ray_pickable(RID p_area){
	return (bool) _wasgo_PhysicsServer_wrapper_area_is_ray_pickable(wasgo_id, ((Variant) p_area).get_wasgo_id());
}
void PhysicsServer::area_remove_shape(RID p_area, int p_shape_idx){
	_wasgo_PhysicsServer_wrapper_area_remove_shape(wasgo_id, ((Variant) p_area).get_wasgo_id(), p_shape_idx);
}
void PhysicsServer::area_set_area_monitor_callback(RID p_area, Object p_receiver, String p_method){
	_wasgo_PhysicsServer_wrapper_area_set_area_monitor_callback(wasgo_id, ((Variant) p_area).get_wasgo_id(), ((Variant) p_receiver).get_wasgo_id(), ((Variant) p_method).get_wasgo_id());
}
void PhysicsServer::area_set_collision_layer(RID p_area, int p_layer){
	_wasgo_PhysicsServer_wrapper_area_set_collision_layer(wasgo_id, ((Variant) p_area).get_wasgo_id(), p_layer);
}
void PhysicsServer::area_set_collision_mask(RID p_area, int p_mask){
	_wasgo_PhysicsServer_wrapper_area_set_collision_mask(wasgo_id, ((Variant) p_area).get_wasgo_id(), p_mask);
}
void PhysicsServer::area_set_monitor_callback(RID p_area, Object p_receiver, String p_method){
	_wasgo_PhysicsServer_wrapper_area_set_monitor_callback(wasgo_id, ((Variant) p_area).get_wasgo_id(), ((Variant) p_receiver).get_wasgo_id(), ((Variant) p_method).get_wasgo_id());
}
void PhysicsServer::area_set_monitorable(RID p_area, bool p_monitorable){
	_wasgo_PhysicsServer_wrapper_area_set_monitorable(wasgo_id, ((Variant) p_area).get_wasgo_id(), p_monitorable);
}
void PhysicsServer::area_set_param(RID p_area, PhysicsServer::AreaParameter p_param, Variant p_value){
	_wasgo_PhysicsServer_wrapper_area_set_param(wasgo_id, ((Variant) p_area).get_wasgo_id(), ((Variant) p_param).get_wasgo_id(), ((Variant) p_value).get_wasgo_id());
}
void PhysicsServer::area_set_ray_pickable(RID p_area, bool p_enable){
	_wasgo_PhysicsServer_wrapper_area_set_ray_pickable(wasgo_id, ((Variant) p_area).get_wasgo_id(), p_enable);
}
void PhysicsServer::area_set_shape(RID p_area, int p_shape_idx, RID p_shape){
	_wasgo_PhysicsServer_wrapper_area_set_shape(wasgo_id, ((Variant) p_area).get_wasgo_id(), p_shape_idx, ((Variant) p_shape).get_wasgo_id());
}
void PhysicsServer::area_set_shape_disabled(RID p_area, int p_shape_idx, bool p_disabled){
	_wasgo_PhysicsServer_wrapper_area_set_shape_disabled(wasgo_id, ((Variant) p_area).get_wasgo_id(), p_shape_idx, p_disabled);
}
void PhysicsServer::area_set_shape_transform(RID p_area, int p_shape_idx, Transform p_transform){
	_wasgo_PhysicsServer_wrapper_area_set_shape_transform(wasgo_id, ((Variant) p_area).get_wasgo_id(), p_shape_idx, ((Variant) p_transform).get_wasgo_id());
}
void PhysicsServer::area_set_space(RID p_area, RID p_space){
	_wasgo_PhysicsServer_wrapper_area_set_space(wasgo_id, ((Variant) p_area).get_wasgo_id(), ((Variant) p_space).get_wasgo_id());
}
void PhysicsServer::area_set_space_override_mode(RID p_area, PhysicsServer::AreaSpaceOverrideMode p_mode){
	_wasgo_PhysicsServer_wrapper_area_set_space_override_mode(wasgo_id, ((Variant) p_area).get_wasgo_id(), ((Variant) p_mode).get_wasgo_id());
}
void PhysicsServer::area_set_transform(RID p_area, Transform p_transform){
	_wasgo_PhysicsServer_wrapper_area_set_transform(wasgo_id, ((Variant) p_area).get_wasgo_id(), ((Variant) p_transform).get_wasgo_id());
}
void PhysicsServer::body_add_central_force(RID p_body, Vector3 p_force){
	_wasgo_PhysicsServer_wrapper_body_add_central_force(wasgo_id, ((Variant) p_body).get_wasgo_id(), ((Variant) p_force).get_wasgo_id());
}
void PhysicsServer::body_add_collision_exception(RID p_body, RID p_excepted_body){
	_wasgo_PhysicsServer_wrapper_body_add_collision_exception(wasgo_id, ((Variant) p_body).get_wasgo_id(), ((Variant) p_excepted_body).get_wasgo_id());
}
void PhysicsServer::body_add_force(RID p_body, Vector3 p_force, Vector3 p_position){
	_wasgo_PhysicsServer_wrapper_body_add_force(wasgo_id, ((Variant) p_body).get_wasgo_id(), ((Variant) p_force).get_wasgo_id(), ((Variant) p_position).get_wasgo_id());
}
void PhysicsServer::body_add_shape(RID p_body, RID p_shape, Transform p_transform = Transform(1, 0, 0, 0, 1, 0, 0, 0, 1 - 0, 0, 0), bool p_disabled = (bool) false){
	_wasgo_PhysicsServer_wrapper_body_add_shape(wasgo_id, ((Variant) p_body).get_wasgo_id(), ((Variant) p_shape).get_wasgo_id(), ((Variant) p_transform).get_wasgo_id(), p_disabled);
}
void PhysicsServer::body_add_torque(RID p_body, Vector3 p_torque){
	_wasgo_PhysicsServer_wrapper_body_add_torque(wasgo_id, ((Variant) p_body).get_wasgo_id(), ((Variant) p_torque).get_wasgo_id());
}
void PhysicsServer::body_apply_central_impulse(RID p_body, Vector3 p_impulse){
	_wasgo_PhysicsServer_wrapper_body_apply_central_impulse(wasgo_id, ((Variant) p_body).get_wasgo_id(), ((Variant) p_impulse).get_wasgo_id());
}
void PhysicsServer::body_apply_impulse(RID p_body, Vector3 p_position, Vector3 p_impulse){
	_wasgo_PhysicsServer_wrapper_body_apply_impulse(wasgo_id, ((Variant) p_body).get_wasgo_id(), ((Variant) p_position).get_wasgo_id(), ((Variant) p_impulse).get_wasgo_id());
}
void PhysicsServer::body_apply_torque_impulse(RID p_body, Vector3 p_impulse){
	_wasgo_PhysicsServer_wrapper_body_apply_torque_impulse(wasgo_id, ((Variant) p_body).get_wasgo_id(), ((Variant) p_impulse).get_wasgo_id());
}
void PhysicsServer::body_attach_object_instance_id(RID p_body, int p_id){
	_wasgo_PhysicsServer_wrapper_body_attach_object_instance_id(wasgo_id, ((Variant) p_body).get_wasgo_id(), p_id);
}
void PhysicsServer::body_clear_shapes(RID p_body){
	_wasgo_PhysicsServer_wrapper_body_clear_shapes(wasgo_id, ((Variant) p_body).get_wasgo_id());
}
RID PhysicsServer::body_create(PhysicsServer::BodyMode p_mode = (PhysicsServer::BodyMode) 2, bool p_init_sleeping = (bool) false){
	return RID::from_wasgo_id(_wasgo_PhysicsServer_wrapper_body_create(wasgo_id, ((Variant) p_mode).get_wasgo_id(), p_init_sleeping));
}
int PhysicsServer::body_get_collision_layer(RID p_body){
	return (int) _wasgo_PhysicsServer_wrapper_body_get_collision_layer(wasgo_id, ((Variant) p_body).get_wasgo_id());
}
int PhysicsServer::body_get_collision_mask(RID p_body){
	return (int) _wasgo_PhysicsServer_wrapper_body_get_collision_mask(wasgo_id, ((Variant) p_body).get_wasgo_id());
}
PhysicsDirectBodyState PhysicsServer::body_get_direct_state(RID p_body){
	return PhysicsDirectBodyState::from_wasgo_id(_wasgo_PhysicsServer_wrapper_body_get_direct_state(wasgo_id, ((Variant) p_body).get_wasgo_id()));
}
float PhysicsServer::body_get_kinematic_safe_margin(RID p_body){
	return (float) _wasgo_PhysicsServer_wrapper_body_get_kinematic_safe_margin(wasgo_id, ((Variant) p_body).get_wasgo_id());
}
int PhysicsServer::body_get_max_contacts_reported(RID p_body){
	return (int) _wasgo_PhysicsServer_wrapper_body_get_max_contacts_reported(wasgo_id, ((Variant) p_body).get_wasgo_id());
}
PhysicsServer::BodyMode PhysicsServer::body_get_mode(RID p_body){
	return PhysicsServer::BodyMode::from_wasgo_id(_wasgo_PhysicsServer_wrapper_body_get_mode(wasgo_id, ((Variant) p_body).get_wasgo_id()));
}
int PhysicsServer::body_get_object_instance_id(RID p_body){
	return (int) _wasgo_PhysicsServer_wrapper_body_get_object_instance_id(wasgo_id, ((Variant) p_body).get_wasgo_id());
}
float PhysicsServer::body_get_param(RID p_body, PhysicsServer::BodyParameter p_param){
	return (float) _wasgo_PhysicsServer_wrapper_body_get_param(wasgo_id, ((Variant) p_body).get_wasgo_id(), ((Variant) p_param).get_wasgo_id());
}
RID PhysicsServer::body_get_shape(RID p_body, int p_shape_idx){
	return RID::from_wasgo_id(_wasgo_PhysicsServer_wrapper_body_get_shape(wasgo_id, ((Variant) p_body).get_wasgo_id(), p_shape_idx));
}
int PhysicsServer::body_get_shape_count(RID p_body){
	return (int) _wasgo_PhysicsServer_wrapper_body_get_shape_count(wasgo_id, ((Variant) p_body).get_wasgo_id());
}
Transform PhysicsServer::body_get_shape_transform(RID p_body, int p_shape_idx){
	return Transform::from_wasgo_id(_wasgo_PhysicsServer_wrapper_body_get_shape_transform(wasgo_id, ((Variant) p_body).get_wasgo_id(), p_shape_idx));
}
RID PhysicsServer::body_get_space(RID p_body){
	return RID::from_wasgo_id(_wasgo_PhysicsServer_wrapper_body_get_space(wasgo_id, ((Variant) p_body).get_wasgo_id()));
}
Variant PhysicsServer::body_get_state(RID p_body, PhysicsServer::BodyState p_state){
	return Variant::from_wasgo_id(_wasgo_PhysicsServer_wrapper_body_get_state(wasgo_id, ((Variant) p_body).get_wasgo_id(), ((Variant) p_state).get_wasgo_id()));
}
bool PhysicsServer::body_is_axis_locked(RID p_body, PhysicsServer::BodyAxis p_axis){
	return (bool) _wasgo_PhysicsServer_wrapper_body_is_axis_locked(wasgo_id, ((Variant) p_body).get_wasgo_id(), ((Variant) p_axis).get_wasgo_id());
}
bool PhysicsServer::body_is_continuous_collision_detection_enabled(RID p_body){
	return (bool) _wasgo_PhysicsServer_wrapper_body_is_continuous_collision_detection_enabled(wasgo_id, ((Variant) p_body).get_wasgo_id());
}
bool PhysicsServer::body_is_omitting_force_integration(RID p_body){
	return (bool) _wasgo_PhysicsServer_wrapper_body_is_omitting_force_integration(wasgo_id, ((Variant) p_body).get_wasgo_id());
}
bool PhysicsServer::body_is_ray_pickable(RID p_body){
	return (bool) _wasgo_PhysicsServer_wrapper_body_is_ray_pickable(wasgo_id, ((Variant) p_body).get_wasgo_id());
}
void PhysicsServer::body_remove_collision_exception(RID p_body, RID p_excepted_body){
	_wasgo_PhysicsServer_wrapper_body_remove_collision_exception(wasgo_id, ((Variant) p_body).get_wasgo_id(), ((Variant) p_excepted_body).get_wasgo_id());
}
void PhysicsServer::body_remove_shape(RID p_body, int p_shape_idx){
	_wasgo_PhysicsServer_wrapper_body_remove_shape(wasgo_id, ((Variant) p_body).get_wasgo_id(), p_shape_idx);
}
void PhysicsServer::body_set_axis_lock(RID p_body, PhysicsServer::BodyAxis p_axis, bool p_lock){
	_wasgo_PhysicsServer_wrapper_body_set_axis_lock(wasgo_id, ((Variant) p_body).get_wasgo_id(), ((Variant) p_axis).get_wasgo_id(), p_lock);
}
void PhysicsServer::body_set_axis_velocity(RID p_body, Vector3 p_axis_velocity){
	_wasgo_PhysicsServer_wrapper_body_set_axis_velocity(wasgo_id, ((Variant) p_body).get_wasgo_id(), ((Variant) p_axis_velocity).get_wasgo_id());
}
void PhysicsServer::body_set_collision_layer(RID p_body, int p_layer){
	_wasgo_PhysicsServer_wrapper_body_set_collision_layer(wasgo_id, ((Variant) p_body).get_wasgo_id(), p_layer);
}
void PhysicsServer::body_set_collision_mask(RID p_body, int p_mask){
	_wasgo_PhysicsServer_wrapper_body_set_collision_mask(wasgo_id, ((Variant) p_body).get_wasgo_id(), p_mask);
}
void PhysicsServer::body_set_enable_continuous_collision_detection(RID p_body, bool p_enable){
	_wasgo_PhysicsServer_wrapper_body_set_enable_continuous_collision_detection(wasgo_id, ((Variant) p_body).get_wasgo_id(), p_enable);
}
void PhysicsServer::body_set_force_integration_callback(RID p_body, Object p_receiver, String p_method, Variant p_userdata = (Variant) ""){
	_wasgo_PhysicsServer_wrapper_body_set_force_integration_callback(wasgo_id, ((Variant) p_body).get_wasgo_id(), ((Variant) p_receiver).get_wasgo_id(), ((Variant) p_method).get_wasgo_id(), ((Variant) p_userdata).get_wasgo_id());
}
void PhysicsServer::body_set_kinematic_safe_margin(RID p_body, float p_margin){
	_wasgo_PhysicsServer_wrapper_body_set_kinematic_safe_margin(wasgo_id, ((Variant) p_body).get_wasgo_id(), p_margin);
}
void PhysicsServer::body_set_max_contacts_reported(RID p_body, int p_amount){
	_wasgo_PhysicsServer_wrapper_body_set_max_contacts_reported(wasgo_id, ((Variant) p_body).get_wasgo_id(), p_amount);
}
void PhysicsServer::body_set_mode(RID p_body, PhysicsServer::BodyMode p_mode){
	_wasgo_PhysicsServer_wrapper_body_set_mode(wasgo_id, ((Variant) p_body).get_wasgo_id(), ((Variant) p_mode).get_wasgo_id());
}
void PhysicsServer::body_set_omit_force_integration(RID p_body, bool p_enable){
	_wasgo_PhysicsServer_wrapper_body_set_omit_force_integration(wasgo_id, ((Variant) p_body).get_wasgo_id(), p_enable);
}
void PhysicsServer::body_set_param(RID p_body, PhysicsServer::BodyParameter p_param, float p_value){
	_wasgo_PhysicsServer_wrapper_body_set_param(wasgo_id, ((Variant) p_body).get_wasgo_id(), ((Variant) p_param).get_wasgo_id(), p_value);
}
void PhysicsServer::body_set_ray_pickable(RID p_body, bool p_enable){
	_wasgo_PhysicsServer_wrapper_body_set_ray_pickable(wasgo_id, ((Variant) p_body).get_wasgo_id(), p_enable);
}
void PhysicsServer::body_set_shape(RID p_body, int p_shape_idx, RID p_shape){
	_wasgo_PhysicsServer_wrapper_body_set_shape(wasgo_id, ((Variant) p_body).get_wasgo_id(), p_shape_idx, ((Variant) p_shape).get_wasgo_id());
}
void PhysicsServer::body_set_shape_disabled(RID p_body, int p_shape_idx, bool p_disabled){
	_wasgo_PhysicsServer_wrapper_body_set_shape_disabled(wasgo_id, ((Variant) p_body).get_wasgo_id(), p_shape_idx, p_disabled);
}
void PhysicsServer::body_set_shape_transform(RID p_body, int p_shape_idx, Transform p_transform){
	_wasgo_PhysicsServer_wrapper_body_set_shape_transform(wasgo_id, ((Variant) p_body).get_wasgo_id(), p_shape_idx, ((Variant) p_transform).get_wasgo_id());
}
void PhysicsServer::body_set_space(RID p_body, RID p_space){
	_wasgo_PhysicsServer_wrapper_body_set_space(wasgo_id, ((Variant) p_body).get_wasgo_id(), ((Variant) p_space).get_wasgo_id());
}
void PhysicsServer::body_set_state(RID p_body, PhysicsServer::BodyState p_state, Variant p_value){
	_wasgo_PhysicsServer_wrapper_body_set_state(wasgo_id, ((Variant) p_body).get_wasgo_id(), ((Variant) p_state).get_wasgo_id(), ((Variant) p_value).get_wasgo_id());
}
float PhysicsServer::cone_twist_joint_get_param(RID p_joint, PhysicsServer::ConeTwistJointParam p_param){
	return (float) _wasgo_PhysicsServer_wrapper_cone_twist_joint_get_param(wasgo_id, ((Variant) p_joint).get_wasgo_id(), ((Variant) p_param).get_wasgo_id());
}
void PhysicsServer::cone_twist_joint_set_param(RID p_joint, PhysicsServer::ConeTwistJointParam p_param, float p_value){
	_wasgo_PhysicsServer_wrapper_cone_twist_joint_set_param(wasgo_id, ((Variant) p_joint).get_wasgo_id(), ((Variant) p_param).get_wasgo_id(), p_value);
}
void PhysicsServer::free_rid(RID p_rid){
	_wasgo_PhysicsServer_wrapper_free_rid(wasgo_id, ((Variant) p_rid).get_wasgo_id());
}
bool PhysicsServer::generic_6dof_joint_get_flag(RID p_joint, Vector3::Axis p_axis, PhysicsServer::G6DOFJointAxisFlag p_flag){
	return (bool) _wasgo_PhysicsServer_wrapper_generic_6dof_joint_get_flag(wasgo_id, ((Variant) p_joint).get_wasgo_id(), ((Variant) p_axis).get_wasgo_id(), ((Variant) p_flag).get_wasgo_id());
}
float PhysicsServer::generic_6dof_joint_get_param(RID p_joint, Vector3::Axis p_axis, PhysicsServer::G6DOFJointAxisParam p_param){
	return (float) _wasgo_PhysicsServer_wrapper_generic_6dof_joint_get_param(wasgo_id, ((Variant) p_joint).get_wasgo_id(), ((Variant) p_axis).get_wasgo_id(), ((Variant) p_param).get_wasgo_id());
}
void PhysicsServer::generic_6dof_joint_set_flag(RID p_joint, Vector3::Axis p_axis, PhysicsServer::G6DOFJointAxisFlag p_flag, bool p_enable){
	_wasgo_PhysicsServer_wrapper_generic_6dof_joint_set_flag(wasgo_id, ((Variant) p_joint).get_wasgo_id(), ((Variant) p_axis).get_wasgo_id(), ((Variant) p_flag).get_wasgo_id(), p_enable);
}
void PhysicsServer::generic_6dof_joint_set_param(RID p_joint, Vector3::Axis p_axis, PhysicsServer::G6DOFJointAxisParam p_param, float p_value){
	_wasgo_PhysicsServer_wrapper_generic_6dof_joint_set_param(wasgo_id, ((Variant) p_joint).get_wasgo_id(), ((Variant) p_axis).get_wasgo_id(), ((Variant) p_param).get_wasgo_id(), p_value);
}
int PhysicsServer::get_process_info(PhysicsServer::ProcessInfo p_process_info){
	return (int) _wasgo_PhysicsServer_wrapper_get_process_info(wasgo_id, ((Variant) p_process_info).get_wasgo_id());
}
bool PhysicsServer::hinge_joint_get_flag(RID p_joint, PhysicsServer::HingeJointFlag p_flag){
	return (bool) _wasgo_PhysicsServer_wrapper_hinge_joint_get_flag(wasgo_id, ((Variant) p_joint).get_wasgo_id(), ((Variant) p_flag).get_wasgo_id());
}
float PhysicsServer::hinge_joint_get_param(RID p_joint, PhysicsServer::HingeJointParam p_param){
	return (float) _wasgo_PhysicsServer_wrapper_hinge_joint_get_param(wasgo_id, ((Variant) p_joint).get_wasgo_id(), ((Variant) p_param).get_wasgo_id());
}
void PhysicsServer::hinge_joint_set_flag(RID p_joint, PhysicsServer::HingeJointFlag p_flag, bool p_enabled){
	_wasgo_PhysicsServer_wrapper_hinge_joint_set_flag(wasgo_id, ((Variant) p_joint).get_wasgo_id(), ((Variant) p_flag).get_wasgo_id(), p_enabled);
}
void PhysicsServer::hinge_joint_set_param(RID p_joint, PhysicsServer::HingeJointParam p_param, float p_value){
	_wasgo_PhysicsServer_wrapper_hinge_joint_set_param(wasgo_id, ((Variant) p_joint).get_wasgo_id(), ((Variant) p_param).get_wasgo_id(), p_value);
}
RID PhysicsServer::joint_create_cone_twist(RID p_body_A, Transform p_local_ref_A, RID p_body_B, Transform p_local_ref_B){
	return RID::from_wasgo_id(_wasgo_PhysicsServer_wrapper_joint_create_cone_twist(wasgo_id, ((Variant) p_body_A).get_wasgo_id(), ((Variant) p_local_ref_A).get_wasgo_id(), ((Variant) p_body_B).get_wasgo_id(), ((Variant) p_local_ref_B).get_wasgo_id()));
}
RID PhysicsServer::joint_create_generic_6dof(RID p_body_A, Transform p_local_ref_A, RID p_body_B, Transform p_local_ref_B){
	return RID::from_wasgo_id(_wasgo_PhysicsServer_wrapper_joint_create_generic_6dof(wasgo_id, ((Variant) p_body_A).get_wasgo_id(), ((Variant) p_local_ref_A).get_wasgo_id(), ((Variant) p_body_B).get_wasgo_id(), ((Variant) p_local_ref_B).get_wasgo_id()));
}
RID PhysicsServer::joint_create_hinge(RID p_body_A, Transform p_hinge_A, RID p_body_B, Transform p_hinge_B){
	return RID::from_wasgo_id(_wasgo_PhysicsServer_wrapper_joint_create_hinge(wasgo_id, ((Variant) p_body_A).get_wasgo_id(), ((Variant) p_hinge_A).get_wasgo_id(), ((Variant) p_body_B).get_wasgo_id(), ((Variant) p_hinge_B).get_wasgo_id()));
}
RID PhysicsServer::joint_create_pin(RID p_body_A, Vector3 p_local_A, RID p_body_B, Vector3 p_local_B){
	return RID::from_wasgo_id(_wasgo_PhysicsServer_wrapper_joint_create_pin(wasgo_id, ((Variant) p_body_A).get_wasgo_id(), ((Variant) p_local_A).get_wasgo_id(), ((Variant) p_body_B).get_wasgo_id(), ((Variant) p_local_B).get_wasgo_id()));
}
RID PhysicsServer::joint_create_slider(RID p_body_A, Transform p_local_ref_A, RID p_body_B, Transform p_local_ref_B){
	return RID::from_wasgo_id(_wasgo_PhysicsServer_wrapper_joint_create_slider(wasgo_id, ((Variant) p_body_A).get_wasgo_id(), ((Variant) p_local_ref_A).get_wasgo_id(), ((Variant) p_body_B).get_wasgo_id(), ((Variant) p_local_ref_B).get_wasgo_id()));
}
int PhysicsServer::joint_get_solver_priority(RID p_joint){
	return (int) _wasgo_PhysicsServer_wrapper_joint_get_solver_priority(wasgo_id, ((Variant) p_joint).get_wasgo_id());
}
PhysicsServer::JointType PhysicsServer::joint_get_type(RID p_joint){
	return PhysicsServer::JointType::from_wasgo_id(_wasgo_PhysicsServer_wrapper_joint_get_type(wasgo_id, ((Variant) p_joint).get_wasgo_id()));
}
void PhysicsServer::joint_set_solver_priority(RID p_joint, int p_priority){
	_wasgo_PhysicsServer_wrapper_joint_set_solver_priority(wasgo_id, ((Variant) p_joint).get_wasgo_id(), p_priority);
}
Vector3 PhysicsServer::pin_joint_get_local_a(RID p_joint){
	return Vector3::from_wasgo_id(_wasgo_PhysicsServer_wrapper_pin_joint_get_local_a(wasgo_id, ((Variant) p_joint).get_wasgo_id()));
}
Vector3 PhysicsServer::pin_joint_get_local_b(RID p_joint){
	return Vector3::from_wasgo_id(_wasgo_PhysicsServer_wrapper_pin_joint_get_local_b(wasgo_id, ((Variant) p_joint).get_wasgo_id()));
}
float PhysicsServer::pin_joint_get_param(RID p_joint, PhysicsServer::PinJointParam p_param){
	return (float) _wasgo_PhysicsServer_wrapper_pin_joint_get_param(wasgo_id, ((Variant) p_joint).get_wasgo_id(), ((Variant) p_param).get_wasgo_id());
}
void PhysicsServer::pin_joint_set_local_a(RID p_joint, Vector3 p_local_A){
	_wasgo_PhysicsServer_wrapper_pin_joint_set_local_a(wasgo_id, ((Variant) p_joint).get_wasgo_id(), ((Variant) p_local_A).get_wasgo_id());
}
void PhysicsServer::pin_joint_set_local_b(RID p_joint, Vector3 p_local_B){
	_wasgo_PhysicsServer_wrapper_pin_joint_set_local_b(wasgo_id, ((Variant) p_joint).get_wasgo_id(), ((Variant) p_local_B).get_wasgo_id());
}
void PhysicsServer::pin_joint_set_param(RID p_joint, PhysicsServer::PinJointParam p_param, float p_value){
	_wasgo_PhysicsServer_wrapper_pin_joint_set_param(wasgo_id, ((Variant) p_joint).get_wasgo_id(), ((Variant) p_param).get_wasgo_id(), p_value);
}
void PhysicsServer::set_active(bool p_active){
	_wasgo_PhysicsServer_wrapper_set_active(wasgo_id, p_active);
}
RID PhysicsServer::shape_create(PhysicsServer::ShapeType p_type){
	return RID::from_wasgo_id(_wasgo_PhysicsServer_wrapper_shape_create(wasgo_id, ((Variant) p_type).get_wasgo_id()));
}
Variant PhysicsServer::shape_get_data(RID p_shape){
	return Variant::from_wasgo_id(_wasgo_PhysicsServer_wrapper_shape_get_data(wasgo_id, ((Variant) p_shape).get_wasgo_id()));
}
PhysicsServer::ShapeType PhysicsServer::shape_get_type(RID p_shape){
	return PhysicsServer::ShapeType::from_wasgo_id(_wasgo_PhysicsServer_wrapper_shape_get_type(wasgo_id, ((Variant) p_shape).get_wasgo_id()));
}
void PhysicsServer::shape_set_data(RID p_shape, Variant p_data){
	_wasgo_PhysicsServer_wrapper_shape_set_data(wasgo_id, ((Variant) p_shape).get_wasgo_id(), ((Variant) p_data).get_wasgo_id());
}
float PhysicsServer::slider_joint_get_param(RID p_joint, PhysicsServer::SliderJointParam p_param){
	return (float) _wasgo_PhysicsServer_wrapper_slider_joint_get_param(wasgo_id, ((Variant) p_joint).get_wasgo_id(), ((Variant) p_param).get_wasgo_id());
}
void PhysicsServer::slider_joint_set_param(RID p_joint, PhysicsServer::SliderJointParam p_param, float p_value){
	_wasgo_PhysicsServer_wrapper_slider_joint_set_param(wasgo_id, ((Variant) p_joint).get_wasgo_id(), ((Variant) p_param).get_wasgo_id(), p_value);
}
RID PhysicsServer::space_create(){
	return RID::from_wasgo_id(_wasgo_PhysicsServer_wrapper_space_create(wasgo_id));
}
PhysicsDirectSpaceState PhysicsServer::space_get_direct_state(RID p_space){
	return PhysicsDirectSpaceState::from_wasgo_id(_wasgo_PhysicsServer_wrapper_space_get_direct_state(wasgo_id, ((Variant) p_space).get_wasgo_id()));
}
float PhysicsServer::space_get_param(RID p_space, PhysicsServer::SpaceParameter p_param){
	return (float) _wasgo_PhysicsServer_wrapper_space_get_param(wasgo_id, ((Variant) p_space).get_wasgo_id(), ((Variant) p_param).get_wasgo_id());
}
bool PhysicsServer::space_is_active(RID p_space){
	return (bool) _wasgo_PhysicsServer_wrapper_space_is_active(wasgo_id, ((Variant) p_space).get_wasgo_id());
}
void PhysicsServer::space_set_active(RID p_space, bool p_active){
	_wasgo_PhysicsServer_wrapper_space_set_active(wasgo_id, ((Variant) p_space).get_wasgo_id(), p_active);
}
void PhysicsServer::space_set_param(RID p_space, PhysicsServer::SpaceParameter p_param, float p_value){
	_wasgo_PhysicsServer_wrapper_space_set_param(wasgo_id, ((Variant) p_space).get_wasgo_id(), ((Variant) p_param).get_wasgo_id(), p_value);
}