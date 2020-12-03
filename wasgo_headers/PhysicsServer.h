/* THIS FILE IS GENERATED */
#ifndef PHYSICSSERVER_H
#define PHYSICSSERVER_H

#include "wasgo\wasgo.h"

#include "Transform.h"
#include "PhysicsDirectBodyState.h"
#include "RID.h"
#include "Object.h"
#include "Variant.h"
#include "Vector3.h"
#include "ustring.h"
#include "PhysicsDirectSpaceState.h"
class PhysicsServer : public Object{
public:
enum AreaBodyStatus{
AREA_BODY_ADDED,
AREA_BODY_REMOVED
};
enum AreaParameter{
AREA_PARAM_GRAVITY,
AREA_PARAM_GRAVITY_VECTOR,
AREA_PARAM_GRAVITY_IS_POINT,
AREA_PARAM_GRAVITY_DISTANCE_SCALE,
AREA_PARAM_GRAVITY_POINT_ATTENUATION,
AREA_PARAM_LINEAR_DAMP,
AREA_PARAM_ANGULAR_DAMP,
AREA_PARAM_PRIORITY
};
enum AreaSpaceOverrideMode{
AREA_SPACE_OVERRIDE_DISABLED,
AREA_SPACE_OVERRIDE_COMBINE,
AREA_SPACE_OVERRIDE_COMBINE_REPLACE,
AREA_SPACE_OVERRIDE_REPLACE,
AREA_SPACE_OVERRIDE_REPLACE_COMBINE
};
enum BodyAxis{
BODY_AXIS_LINEAR_X,
BODY_AXIS_LINEAR_Y,
BODY_AXIS_LINEAR_Z,
BODY_AXIS_ANGULAR_X,
BODY_AXIS_ANGULAR_Y,
BODY_AXIS_ANGULAR_Z
};
enum BodyMode{
BODY_MODE_STATIC,
BODY_MODE_KINEMATIC,
BODY_MODE_RIGID,
BODY_MODE_CHARACTER
};
enum BodyParameter{
BODY_PARAM_BOUNCE,
BODY_PARAM_FRICTION,
BODY_PARAM_MASS,
BODY_PARAM_GRAVITY_SCALE,
BODY_PARAM_LINEAR_DAMP,
BODY_PARAM_ANGULAR_DAMP,
BODY_PARAM_MAX
};
enum BodyState{
BODY_STATE_TRANSFORM,
BODY_STATE_LINEAR_VELOCITY,
BODY_STATE_ANGULAR_VELOCITY,
BODY_STATE_SLEEPING,
BODY_STATE_CAN_SLEEP
};
enum ConeTwistJointParam{
CONE_TWIST_JOINT_SWING_SPAN,
CONE_TWIST_JOINT_TWIST_SPAN,
CONE_TWIST_JOINT_BIAS,
CONE_TWIST_JOINT_SOFTNESS,
CONE_TWIST_JOINT_RELAXATION
};
enum G6DOFJointAxisFlag{
G6DOF_JOINT_FLAG_ENABLE_LINEAR_LIMIT,
G6DOF_JOINT_FLAG_ENABLE_ANGULAR_LIMIT,
G6DOF_JOINT_FLAG_ENABLE_MOTOR,
G6DOF_JOINT_FLAG_ENABLE_LINEAR_MOTOR
};
enum G6DOFJointAxisParam{
G6DOF_JOINT_LINEAR_LOWER_LIMIT,
G6DOF_JOINT_LINEAR_UPPER_LIMIT,
G6DOF_JOINT_LINEAR_LIMIT_SOFTNESS,
G6DOF_JOINT_LINEAR_RESTITUTION,
G6DOF_JOINT_LINEAR_DAMPING,
G6DOF_JOINT_LINEAR_MOTOR_TARGET_VELOCITY,
G6DOF_JOINT_LINEAR_MOTOR_FORCE_LIMIT,
G6DOF_JOINT_ANGULAR_LOWER_LIMIT,
G6DOF_JOINT_ANGULAR_UPPER_LIMIT,
G6DOF_JOINT_ANGULAR_LIMIT_SOFTNESS,
G6DOF_JOINT_ANGULAR_DAMPING,
G6DOF_JOINT_ANGULAR_RESTITUTION,
G6DOF_JOINT_ANGULAR_FORCE_LIMIT,
G6DOF_JOINT_ANGULAR_ERP,
G6DOF_JOINT_ANGULAR_MOTOR_TARGET_VELOCITY,
G6DOF_JOINT_ANGULAR_MOTOR_FORCE_LIMIT
};
enum HingeJointFlag{
HINGE_JOINT_FLAG_USE_LIMIT,
HINGE_JOINT_FLAG_ENABLE_MOTOR
};
enum HingeJointParam{
HINGE_JOINT_BIAS,
HINGE_JOINT_LIMIT_UPPER,
HINGE_JOINT_LIMIT_LOWER,
HINGE_JOINT_LIMIT_BIAS,
HINGE_JOINT_LIMIT_SOFTNESS,
HINGE_JOINT_LIMIT_RELAXATION,
HINGE_JOINT_MOTOR_TARGET_VELOCITY,
HINGE_JOINT_MOTOR_MAX_IMPULSE
};
enum JointType{
JOINT_PIN,
JOINT_HINGE,
JOINT_SLIDER,
JOINT_CONE_TWIST,
JOINT_6DOF
};
enum PinJointParam{
PIN_JOINT_BIAS,
PIN_JOINT_DAMPING,
PIN_JOINT_IMPULSE_CLAMP
};
enum ProcessInfo{
INFO_ACTIVE_OBJECTS,
INFO_COLLISION_PAIRS,
INFO_ISLAND_COUNT
};
enum ShapeType{
SHAPE_PLANE,
SHAPE_RAY,
SHAPE_SPHERE,
SHAPE_BOX,
SHAPE_CAPSULE,
SHAPE_CYLINDER,
SHAPE_CONVEX_POLYGON,
SHAPE_CONCAVE_POLYGON,
SHAPE_HEIGHTMAP,
SHAPE_CUSTOM
};
enum SliderJointParam{
SLIDER_JOINT_LINEAR_LIMIT_UPPER,
SLIDER_JOINT_LINEAR_LIMIT_LOWER,
SLIDER_JOINT_LINEAR_LIMIT_SOFTNESS,
SLIDER_JOINT_LINEAR_LIMIT_RESTITUTION,
SLIDER_JOINT_LINEAR_LIMIT_DAMPING,
SLIDER_JOINT_LINEAR_MOTION_SOFTNESS,
SLIDER_JOINT_LINEAR_MOTION_RESTITUTION,
SLIDER_JOINT_LINEAR_MOTION_DAMPING,
SLIDER_JOINT_LINEAR_ORTHOGONAL_SOFTNESS,
SLIDER_JOINT_LINEAR_ORTHOGONAL_RESTITUTION,
SLIDER_JOINT_LINEAR_ORTHOGONAL_DAMPING,
SLIDER_JOINT_ANGULAR_LIMIT_UPPER,
SLIDER_JOINT_ANGULAR_LIMIT_LOWER,
SLIDER_JOINT_ANGULAR_LIMIT_SOFTNESS,
SLIDER_JOINT_ANGULAR_LIMIT_RESTITUTION,
SLIDER_JOINT_ANGULAR_LIMIT_DAMPING,
SLIDER_JOINT_ANGULAR_MOTION_SOFTNESS,
SLIDER_JOINT_ANGULAR_MOTION_RESTITUTION,
SLIDER_JOINT_ANGULAR_MOTION_DAMPING,
SLIDER_JOINT_ANGULAR_ORTHOGONAL_SOFTNESS,
SLIDER_JOINT_ANGULAR_ORTHOGONAL_RESTITUTION,
SLIDER_JOINT_ANGULAR_ORTHOGONAL_DAMPING,
SLIDER_JOINT_MAX
};
enum SpaceParameter{
SPACE_PARAM_CONTACT_RECYCLE_RADIUS,
SPACE_PARAM_CONTACT_MAX_SEPARATION,
SPACE_PARAM_BODY_MAX_ALLOWED_PENETRATION,
SPACE_PARAM_BODY_LINEAR_VELOCITY_SLEEP_THRESHOLD,
SPACE_PARAM_BODY_ANGULAR_VELOCITY_SLEEP_THRESHOLD,
SPACE_PARAM_BODY_TIME_TO_SLEEP,
SPACE_PARAM_BODY_ANGULAR_VELOCITY_DAMP_RATIO,
SPACE_PARAM_CONSTRAINT_DEFAULT_BIAS,
SPACE_PARAM_TEST_MOTION_MIN_CONTACT_DEPTH
};
void area_add_shape(RID p_area, RID p_shape, Transform p_transform = Transform(1, 0, 0, 0, 1, 0, 0, 0, 1 - 0, 0, 0), bool p_disabled = (bool) false);
void area_attach_object_instance_id(RID p_area, int p_id);
void area_clear_shapes(RID p_area);
RID area_create();
int area_get_object_instance_id(RID p_area);
Variant area_get_param(RID p_area, PhysicsServer::AreaParameter p_param);
RID area_get_shape(RID p_area, int p_shape_idx);
int area_get_shape_count(RID p_area);
Transform area_get_shape_transform(RID p_area, int p_shape_idx);
RID area_get_space(RID p_area);
PhysicsServer::AreaSpaceOverrideMode area_get_space_override_mode(RID p_area);
Transform area_get_transform(RID p_area);
bool area_is_ray_pickable(RID p_area);
void area_remove_shape(RID p_area, int p_shape_idx);
void area_set_area_monitor_callback(RID p_area, Object p_receiver, String p_method);
void area_set_collision_layer(RID p_area, int p_layer);
void area_set_collision_mask(RID p_area, int p_mask);
void area_set_monitor_callback(RID p_area, Object p_receiver, String p_method);
void area_set_monitorable(RID p_area, bool p_monitorable);
void area_set_param(RID p_area, PhysicsServer::AreaParameter p_param, Variant p_value);
void area_set_ray_pickable(RID p_area, bool p_enable);
void area_set_shape(RID p_area, int p_shape_idx, RID p_shape);
void area_set_shape_disabled(RID p_area, int p_shape_idx, bool p_disabled);
void area_set_shape_transform(RID p_area, int p_shape_idx, Transform p_transform);
void area_set_space(RID p_area, RID p_space);
void area_set_space_override_mode(RID p_area, PhysicsServer::AreaSpaceOverrideMode p_mode);
void area_set_transform(RID p_area, Transform p_transform);
void body_add_central_force(RID p_body, Vector3 p_force);
void body_add_collision_exception(RID p_body, RID p_excepted_body);
void body_add_force(RID p_body, Vector3 p_force, Vector3 p_position);
void body_add_shape(RID p_body, RID p_shape, Transform p_transform = Transform(1, 0, 0, 0, 1, 0, 0, 0, 1 - 0, 0, 0), bool p_disabled = (bool) false);
void body_add_torque(RID p_body, Vector3 p_torque);
void body_apply_central_impulse(RID p_body, Vector3 p_impulse);
void body_apply_impulse(RID p_body, Vector3 p_position, Vector3 p_impulse);
void body_apply_torque_impulse(RID p_body, Vector3 p_impulse);
void body_attach_object_instance_id(RID p_body, int p_id);
void body_clear_shapes(RID p_body);
RID body_create(PhysicsServer::BodyMode p_mode = (PhysicsServer::BodyMode) 2, bool p_init_sleeping = (bool) false);
int body_get_collision_layer(RID p_body);
int body_get_collision_mask(RID p_body);
PhysicsDirectBodyState body_get_direct_state(RID p_body);
float body_get_kinematic_safe_margin(RID p_body);
int body_get_max_contacts_reported(RID p_body);
PhysicsServer::BodyMode body_get_mode(RID p_body);
int body_get_object_instance_id(RID p_body);
float body_get_param(RID p_body, PhysicsServer::BodyParameter p_param);
RID body_get_shape(RID p_body, int p_shape_idx);
int body_get_shape_count(RID p_body);
Transform body_get_shape_transform(RID p_body, int p_shape_idx);
RID body_get_space(RID p_body);
Variant body_get_state(RID p_body, PhysicsServer::BodyState p_state);
bool body_is_axis_locked(RID p_body, PhysicsServer::BodyAxis p_axis);
bool body_is_continuous_collision_detection_enabled(RID p_body);
bool body_is_omitting_force_integration(RID p_body);
bool body_is_ray_pickable(RID p_body);
void body_remove_collision_exception(RID p_body, RID p_excepted_body);
void body_remove_shape(RID p_body, int p_shape_idx);
void body_set_axis_lock(RID p_body, PhysicsServer::BodyAxis p_axis, bool p_lock);
void body_set_axis_velocity(RID p_body, Vector3 p_axis_velocity);
void body_set_collision_layer(RID p_body, int p_layer);
void body_set_collision_mask(RID p_body, int p_mask);
void body_set_enable_continuous_collision_detection(RID p_body, bool p_enable);
void body_set_force_integration_callback(RID p_body, Object p_receiver, String p_method, Variant p_userdata = (Variant) "");
void body_set_kinematic_safe_margin(RID p_body, float p_margin);
void body_set_max_contacts_reported(RID p_body, int p_amount);
void body_set_mode(RID p_body, PhysicsServer::BodyMode p_mode);
void body_set_omit_force_integration(RID p_body, bool p_enable);
void body_set_param(RID p_body, PhysicsServer::BodyParameter p_param, float p_value);
void body_set_ray_pickable(RID p_body, bool p_enable);
void body_set_shape(RID p_body, int p_shape_idx, RID p_shape);
void body_set_shape_disabled(RID p_body, int p_shape_idx, bool p_disabled);
void body_set_shape_transform(RID p_body, int p_shape_idx, Transform p_transform);
void body_set_space(RID p_body, RID p_space);
void body_set_state(RID p_body, PhysicsServer::BodyState p_state, Variant p_value);
float cone_twist_joint_get_param(RID p_joint, PhysicsServer::ConeTwistJointParam p_param);
void cone_twist_joint_set_param(RID p_joint, PhysicsServer::ConeTwistJointParam p_param, float p_value);
void free_rid(RID p_rid);
bool generic_6dof_joint_get_flag(RID p_joint, Vector3::Axis p_axis, PhysicsServer::G6DOFJointAxisFlag p_flag);
float generic_6dof_joint_get_param(RID p_joint, Vector3::Axis p_axis, PhysicsServer::G6DOFJointAxisParam p_param);
void generic_6dof_joint_set_flag(RID p_joint, Vector3::Axis p_axis, PhysicsServer::G6DOFJointAxisFlag p_flag, bool p_enable);
void generic_6dof_joint_set_param(RID p_joint, Vector3::Axis p_axis, PhysicsServer::G6DOFJointAxisParam p_param, float p_value);
int get_process_info(PhysicsServer::ProcessInfo p_process_info);
bool hinge_joint_get_flag(RID p_joint, PhysicsServer::HingeJointFlag p_flag);
float hinge_joint_get_param(RID p_joint, PhysicsServer::HingeJointParam p_param);
void hinge_joint_set_flag(RID p_joint, PhysicsServer::HingeJointFlag p_flag, bool p_enabled);
void hinge_joint_set_param(RID p_joint, PhysicsServer::HingeJointParam p_param, float p_value);
RID joint_create_cone_twist(RID p_body_A, Transform p_local_ref_A, RID p_body_B, Transform p_local_ref_B);
RID joint_create_generic_6dof(RID p_body_A, Transform p_local_ref_A, RID p_body_B, Transform p_local_ref_B);
RID joint_create_hinge(RID p_body_A, Transform p_hinge_A, RID p_body_B, Transform p_hinge_B);
RID joint_create_pin(RID p_body_A, Vector3 p_local_A, RID p_body_B, Vector3 p_local_B);
RID joint_create_slider(RID p_body_A, Transform p_local_ref_A, RID p_body_B, Transform p_local_ref_B);
int joint_get_solver_priority(RID p_joint);
PhysicsServer::JointType joint_get_type(RID p_joint);
void joint_set_solver_priority(RID p_joint, int p_priority);
Vector3 pin_joint_get_local_a(RID p_joint);
Vector3 pin_joint_get_local_b(RID p_joint);
float pin_joint_get_param(RID p_joint, PhysicsServer::PinJointParam p_param);
void pin_joint_set_local_a(RID p_joint, Vector3 p_local_A);
void pin_joint_set_local_b(RID p_joint, Vector3 p_local_B);
void pin_joint_set_param(RID p_joint, PhysicsServer::PinJointParam p_param, float p_value);
void set_active(bool p_active);
RID shape_create(PhysicsServer::ShapeType p_type);
Variant shape_get_data(RID p_shape);
PhysicsServer::ShapeType shape_get_type(RID p_shape);
void shape_set_data(RID p_shape, Variant p_data);
float slider_joint_get_param(RID p_joint, PhysicsServer::SliderJointParam p_param);
void slider_joint_set_param(RID p_joint, PhysicsServer::SliderJointParam p_param, float p_value);
RID space_create();
PhysicsDirectSpaceState space_get_direct_state(RID p_space);
float space_get_param(RID p_space, PhysicsServer::SpaceParameter p_param);
bool space_is_active(RID p_space);
void space_set_active(RID p_space, bool p_active);
void space_set_param(RID p_space, PhysicsServer::SpaceParameter p_param, float p_value);
};


//Wrapper Functions
extern "C"{
void _wasgo_PhysicsServer_wrapper_area_add_shape(WasGoId wasgo_id, const uint8_t * p_area, int p_area_wasgo_buffer_size, const uint8_t * p_shape, int p_shape_wasgo_buffer_size, const uint8_t * p_transform, int p_transform_wasgo_buffer_size, bool p_disabled);
void _wasgo_PhysicsServer_wrapper_area_attach_object_instance_id(WasGoId wasgo_id, const uint8_t * p_area, int p_area_wasgo_buffer_size, int p_id);
void _wasgo_PhysicsServer_wrapper_area_clear_shapes(WasGoId wasgo_id, const uint8_t * p_area, int p_area_wasgo_buffer_size);
void _wasgo_PhysicsServer_wrapper_area_create(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_PhysicsServer_wrapper_area_get_object_instance_id(WasGoId wasgo_id, const uint8_t * p_area, int p_area_wasgo_buffer_size);
WasGoId _wasgo_PhysicsServer_wrapper_area_get_param(WasGoId wasgo_id, const uint8_t * p_area, int p_area_wasgo_buffer_size, WasGoId p_param);
void _wasgo_PhysicsServer_wrapper_area_get_shape(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_area, int p_area_wasgo_buffer_size, int p_shape_idx);
int _wasgo_PhysicsServer_wrapper_area_get_shape_count(WasGoId wasgo_id, const uint8_t * p_area, int p_area_wasgo_buffer_size);
void _wasgo_PhysicsServer_wrapper_area_get_shape_transform(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_area, int p_area_wasgo_buffer_size, int p_shape_idx);
void _wasgo_PhysicsServer_wrapper_area_get_space(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_area, int p_area_wasgo_buffer_size);
WasGoId _wasgo_PhysicsServer_wrapper_area_get_space_override_mode(WasGoId wasgo_id, const uint8_t * p_area, int p_area_wasgo_buffer_size);
void _wasgo_PhysicsServer_wrapper_area_get_transform(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_area, int p_area_wasgo_buffer_size);
int _wasgo_PhysicsServer_wrapper_area_is_ray_pickable(WasGoId wasgo_id, const uint8_t * p_area, int p_area_wasgo_buffer_size);
void _wasgo_PhysicsServer_wrapper_area_remove_shape(WasGoId wasgo_id, const uint8_t * p_area, int p_area_wasgo_buffer_size, int p_shape_idx);
void _wasgo_PhysicsServer_wrapper_area_set_area_monitor_callback(WasGoId wasgo_id, const uint8_t * p_area, int p_area_wasgo_buffer_size, WasGoId p_receiver, const uint8_t * p_method, int p_method_wasgo_buffer_size);
void _wasgo_PhysicsServer_wrapper_area_set_collision_layer(WasGoId wasgo_id, const uint8_t * p_area, int p_area_wasgo_buffer_size, int p_layer);
void _wasgo_PhysicsServer_wrapper_area_set_collision_mask(WasGoId wasgo_id, const uint8_t * p_area, int p_area_wasgo_buffer_size, int p_mask);
void _wasgo_PhysicsServer_wrapper_area_set_monitor_callback(WasGoId wasgo_id, const uint8_t * p_area, int p_area_wasgo_buffer_size, WasGoId p_receiver, const uint8_t * p_method, int p_method_wasgo_buffer_size);
void _wasgo_PhysicsServer_wrapper_area_set_monitorable(WasGoId wasgo_id, const uint8_t * p_area, int p_area_wasgo_buffer_size, bool p_monitorable);
void _wasgo_PhysicsServer_wrapper_area_set_param(WasGoId wasgo_id, const uint8_t * p_area, int p_area_wasgo_buffer_size, WasGoId p_param, WasGoId p_value);
void _wasgo_PhysicsServer_wrapper_area_set_ray_pickable(WasGoId wasgo_id, const uint8_t * p_area, int p_area_wasgo_buffer_size, bool p_enable);
void _wasgo_PhysicsServer_wrapper_area_set_shape(WasGoId wasgo_id, const uint8_t * p_area, int p_area_wasgo_buffer_size, int p_shape_idx, const uint8_t * p_shape, int p_shape_wasgo_buffer_size);
void _wasgo_PhysicsServer_wrapper_area_set_shape_disabled(WasGoId wasgo_id, const uint8_t * p_area, int p_area_wasgo_buffer_size, int p_shape_idx, bool p_disabled);
void _wasgo_PhysicsServer_wrapper_area_set_shape_transform(WasGoId wasgo_id, const uint8_t * p_area, int p_area_wasgo_buffer_size, int p_shape_idx, const uint8_t * p_transform, int p_transform_wasgo_buffer_size);
void _wasgo_PhysicsServer_wrapper_area_set_space(WasGoId wasgo_id, const uint8_t * p_area, int p_area_wasgo_buffer_size, const uint8_t * p_space, int p_space_wasgo_buffer_size);
void _wasgo_PhysicsServer_wrapper_area_set_space_override_mode(WasGoId wasgo_id, const uint8_t * p_area, int p_area_wasgo_buffer_size, WasGoId p_mode);
void _wasgo_PhysicsServer_wrapper_area_set_transform(WasGoId wasgo_id, const uint8_t * p_area, int p_area_wasgo_buffer_size, const uint8_t * p_transform, int p_transform_wasgo_buffer_size);
void _wasgo_PhysicsServer_wrapper_body_add_central_force(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size, const uint8_t * p_force, int p_force_wasgo_buffer_size);
void _wasgo_PhysicsServer_wrapper_body_add_collision_exception(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size, const uint8_t * p_excepted_body, int p_excepted_body_wasgo_buffer_size);
void _wasgo_PhysicsServer_wrapper_body_add_force(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size, const uint8_t * p_force, int p_force_wasgo_buffer_size, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_PhysicsServer_wrapper_body_add_shape(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size, const uint8_t * p_shape, int p_shape_wasgo_buffer_size, const uint8_t * p_transform, int p_transform_wasgo_buffer_size, bool p_disabled);
void _wasgo_PhysicsServer_wrapper_body_add_torque(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size, const uint8_t * p_torque, int p_torque_wasgo_buffer_size);
void _wasgo_PhysicsServer_wrapper_body_apply_central_impulse(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size, const uint8_t * p_impulse, int p_impulse_wasgo_buffer_size);
void _wasgo_PhysicsServer_wrapper_body_apply_impulse(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size, const uint8_t * p_position, int p_position_wasgo_buffer_size, const uint8_t * p_impulse, int p_impulse_wasgo_buffer_size);
void _wasgo_PhysicsServer_wrapper_body_apply_torque_impulse(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size, const uint8_t * p_impulse, int p_impulse_wasgo_buffer_size);
void _wasgo_PhysicsServer_wrapper_body_attach_object_instance_id(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size, int p_id);
void _wasgo_PhysicsServer_wrapper_body_clear_shapes(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size);
void _wasgo_PhysicsServer_wrapper_body_create(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, WasGoId p_mode, bool p_init_sleeping);
int _wasgo_PhysicsServer_wrapper_body_get_collision_layer(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size);
int _wasgo_PhysicsServer_wrapper_body_get_collision_mask(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size);
WasGoId _wasgo_PhysicsServer_wrapper_body_get_direct_state(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size);
float _wasgo_PhysicsServer_wrapper_body_get_kinematic_safe_margin(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size);
int _wasgo_PhysicsServer_wrapper_body_get_max_contacts_reported(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size);
WasGoId _wasgo_PhysicsServer_wrapper_body_get_mode(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size);
int _wasgo_PhysicsServer_wrapper_body_get_object_instance_id(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size);
float _wasgo_PhysicsServer_wrapper_body_get_param(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size, WasGoId p_param);
void _wasgo_PhysicsServer_wrapper_body_get_shape(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_body, int p_body_wasgo_buffer_size, int p_shape_idx);
int _wasgo_PhysicsServer_wrapper_body_get_shape_count(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size);
void _wasgo_PhysicsServer_wrapper_body_get_shape_transform(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_body, int p_body_wasgo_buffer_size, int p_shape_idx);
void _wasgo_PhysicsServer_wrapper_body_get_space(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_body, int p_body_wasgo_buffer_size);
WasGoId _wasgo_PhysicsServer_wrapper_body_get_state(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size, WasGoId p_state);
int _wasgo_PhysicsServer_wrapper_body_is_axis_locked(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size, WasGoId p_axis);
int _wasgo_PhysicsServer_wrapper_body_is_continuous_collision_detection_enabled(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size);
int _wasgo_PhysicsServer_wrapper_body_is_omitting_force_integration(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size);
int _wasgo_PhysicsServer_wrapper_body_is_ray_pickable(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size);
void _wasgo_PhysicsServer_wrapper_body_remove_collision_exception(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size, const uint8_t * p_excepted_body, int p_excepted_body_wasgo_buffer_size);
void _wasgo_PhysicsServer_wrapper_body_remove_shape(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size, int p_shape_idx);
void _wasgo_PhysicsServer_wrapper_body_set_axis_lock(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size, WasGoId p_axis, bool p_lock);
void _wasgo_PhysicsServer_wrapper_body_set_axis_velocity(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size, const uint8_t * p_axis_velocity, int p_axis_velocity_wasgo_buffer_size);
void _wasgo_PhysicsServer_wrapper_body_set_collision_layer(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size, int p_layer);
void _wasgo_PhysicsServer_wrapper_body_set_collision_mask(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size, int p_mask);
void _wasgo_PhysicsServer_wrapper_body_set_enable_continuous_collision_detection(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size, bool p_enable);
void _wasgo_PhysicsServer_wrapper_body_set_force_integration_callback(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size, WasGoId p_receiver, const uint8_t * p_method, int p_method_wasgo_buffer_size, WasGoId p_userdata);
void _wasgo_PhysicsServer_wrapper_body_set_kinematic_safe_margin(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size, float p_margin);
void _wasgo_PhysicsServer_wrapper_body_set_max_contacts_reported(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size, int p_amount);
void _wasgo_PhysicsServer_wrapper_body_set_mode(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size, WasGoId p_mode);
void _wasgo_PhysicsServer_wrapper_body_set_omit_force_integration(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size, bool p_enable);
void _wasgo_PhysicsServer_wrapper_body_set_param(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size, WasGoId p_param, float p_value);
void _wasgo_PhysicsServer_wrapper_body_set_ray_pickable(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size, bool p_enable);
void _wasgo_PhysicsServer_wrapper_body_set_shape(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size, int p_shape_idx, const uint8_t * p_shape, int p_shape_wasgo_buffer_size);
void _wasgo_PhysicsServer_wrapper_body_set_shape_disabled(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size, int p_shape_idx, bool p_disabled);
void _wasgo_PhysicsServer_wrapper_body_set_shape_transform(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size, int p_shape_idx, const uint8_t * p_transform, int p_transform_wasgo_buffer_size);
void _wasgo_PhysicsServer_wrapper_body_set_space(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size, const uint8_t * p_space, int p_space_wasgo_buffer_size);
void _wasgo_PhysicsServer_wrapper_body_set_state(WasGoId wasgo_id, const uint8_t * p_body, int p_body_wasgo_buffer_size, WasGoId p_state, WasGoId p_value);
float _wasgo_PhysicsServer_wrapper_cone_twist_joint_get_param(WasGoId wasgo_id, const uint8_t * p_joint, int p_joint_wasgo_buffer_size, WasGoId p_param);
void _wasgo_PhysicsServer_wrapper_cone_twist_joint_set_param(WasGoId wasgo_id, const uint8_t * p_joint, int p_joint_wasgo_buffer_size, WasGoId p_param, float p_value);
void _wasgo_PhysicsServer_wrapper_free_rid(WasGoId wasgo_id, const uint8_t * p_rid, int p_rid_wasgo_buffer_size);
int _wasgo_PhysicsServer_wrapper_generic_6dof_joint_get_flag(WasGoId wasgo_id, const uint8_t * p_joint, int p_joint_wasgo_buffer_size, WasGoId p_axis, WasGoId p_flag);
float _wasgo_PhysicsServer_wrapper_generic_6dof_joint_get_param(WasGoId wasgo_id, const uint8_t * p_joint, int p_joint_wasgo_buffer_size, WasGoId p_axis, WasGoId p_param);
void _wasgo_PhysicsServer_wrapper_generic_6dof_joint_set_flag(WasGoId wasgo_id, const uint8_t * p_joint, int p_joint_wasgo_buffer_size, WasGoId p_axis, WasGoId p_flag, bool p_enable);
void _wasgo_PhysicsServer_wrapper_generic_6dof_joint_set_param(WasGoId wasgo_id, const uint8_t * p_joint, int p_joint_wasgo_buffer_size, WasGoId p_axis, WasGoId p_param, float p_value);
int _wasgo_PhysicsServer_wrapper_get_process_info(WasGoId wasgo_id, WasGoId p_process_info);
int _wasgo_PhysicsServer_wrapper_hinge_joint_get_flag(WasGoId wasgo_id, const uint8_t * p_joint, int p_joint_wasgo_buffer_size, WasGoId p_flag);
float _wasgo_PhysicsServer_wrapper_hinge_joint_get_param(WasGoId wasgo_id, const uint8_t * p_joint, int p_joint_wasgo_buffer_size, WasGoId p_param);
void _wasgo_PhysicsServer_wrapper_hinge_joint_set_flag(WasGoId wasgo_id, const uint8_t * p_joint, int p_joint_wasgo_buffer_size, WasGoId p_flag, bool p_enabled);
void _wasgo_PhysicsServer_wrapper_hinge_joint_set_param(WasGoId wasgo_id, const uint8_t * p_joint, int p_joint_wasgo_buffer_size, WasGoId p_param, float p_value);
void _wasgo_PhysicsServer_wrapper_joint_create_cone_twist(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_body_A, int p_body_A_wasgo_buffer_size, const uint8_t * p_local_ref_A, int p_local_ref_A_wasgo_buffer_size, const uint8_t * p_body_B, int p_body_B_wasgo_buffer_size, const uint8_t * p_local_ref_B, int p_local_ref_B_wasgo_buffer_size);
void _wasgo_PhysicsServer_wrapper_joint_create_generic_6dof(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_body_A, int p_body_A_wasgo_buffer_size, const uint8_t * p_local_ref_A, int p_local_ref_A_wasgo_buffer_size, const uint8_t * p_body_B, int p_body_B_wasgo_buffer_size, const uint8_t * p_local_ref_B, int p_local_ref_B_wasgo_buffer_size);
void _wasgo_PhysicsServer_wrapper_joint_create_hinge(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_body_A, int p_body_A_wasgo_buffer_size, const uint8_t * p_hinge_A, int p_hinge_A_wasgo_buffer_size, const uint8_t * p_body_B, int p_body_B_wasgo_buffer_size, const uint8_t * p_hinge_B, int p_hinge_B_wasgo_buffer_size);
void _wasgo_PhysicsServer_wrapper_joint_create_pin(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_body_A, int p_body_A_wasgo_buffer_size, const uint8_t * p_local_A, int p_local_A_wasgo_buffer_size, const uint8_t * p_body_B, int p_body_B_wasgo_buffer_size, const uint8_t * p_local_B, int p_local_B_wasgo_buffer_size);
void _wasgo_PhysicsServer_wrapper_joint_create_slider(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_body_A, int p_body_A_wasgo_buffer_size, const uint8_t * p_local_ref_A, int p_local_ref_A_wasgo_buffer_size, const uint8_t * p_body_B, int p_body_B_wasgo_buffer_size, const uint8_t * p_local_ref_B, int p_local_ref_B_wasgo_buffer_size);
int _wasgo_PhysicsServer_wrapper_joint_get_solver_priority(WasGoId wasgo_id, const uint8_t * p_joint, int p_joint_wasgo_buffer_size);
WasGoId _wasgo_PhysicsServer_wrapper_joint_get_type(WasGoId wasgo_id, const uint8_t * p_joint, int p_joint_wasgo_buffer_size);
void _wasgo_PhysicsServer_wrapper_joint_set_solver_priority(WasGoId wasgo_id, const uint8_t * p_joint, int p_joint_wasgo_buffer_size, int p_priority);
void _wasgo_PhysicsServer_wrapper_pin_joint_get_local_a(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_joint, int p_joint_wasgo_buffer_size);
void _wasgo_PhysicsServer_wrapper_pin_joint_get_local_b(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_joint, int p_joint_wasgo_buffer_size);
float _wasgo_PhysicsServer_wrapper_pin_joint_get_param(WasGoId wasgo_id, const uint8_t * p_joint, int p_joint_wasgo_buffer_size, WasGoId p_param);
void _wasgo_PhysicsServer_wrapper_pin_joint_set_local_a(WasGoId wasgo_id, const uint8_t * p_joint, int p_joint_wasgo_buffer_size, const uint8_t * p_local_A, int p_local_A_wasgo_buffer_size);
void _wasgo_PhysicsServer_wrapper_pin_joint_set_local_b(WasGoId wasgo_id, const uint8_t * p_joint, int p_joint_wasgo_buffer_size, const uint8_t * p_local_B, int p_local_B_wasgo_buffer_size);
void _wasgo_PhysicsServer_wrapper_pin_joint_set_param(WasGoId wasgo_id, const uint8_t * p_joint, int p_joint_wasgo_buffer_size, WasGoId p_param, float p_value);
void _wasgo_PhysicsServer_wrapper_set_active(WasGoId wasgo_id, bool p_active);
void _wasgo_PhysicsServer_wrapper_shape_create(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, WasGoId p_type);
WasGoId _wasgo_PhysicsServer_wrapper_shape_get_data(WasGoId wasgo_id, const uint8_t * p_shape, int p_shape_wasgo_buffer_size);
WasGoId _wasgo_PhysicsServer_wrapper_shape_get_type(WasGoId wasgo_id, const uint8_t * p_shape, int p_shape_wasgo_buffer_size);
void _wasgo_PhysicsServer_wrapper_shape_set_data(WasGoId wasgo_id, const uint8_t * p_shape, int p_shape_wasgo_buffer_size, WasGoId p_data);
float _wasgo_PhysicsServer_wrapper_slider_joint_get_param(WasGoId wasgo_id, const uint8_t * p_joint, int p_joint_wasgo_buffer_size, WasGoId p_param);
void _wasgo_PhysicsServer_wrapper_slider_joint_set_param(WasGoId wasgo_id, const uint8_t * p_joint, int p_joint_wasgo_buffer_size, WasGoId p_param, float p_value);
void _wasgo_PhysicsServer_wrapper_space_create(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_PhysicsServer_wrapper_space_get_direct_state(WasGoId wasgo_id, const uint8_t * p_space, int p_space_wasgo_buffer_size);
float _wasgo_PhysicsServer_wrapper_space_get_param(WasGoId wasgo_id, const uint8_t * p_space, int p_space_wasgo_buffer_size, WasGoId p_param);
int _wasgo_PhysicsServer_wrapper_space_is_active(WasGoId wasgo_id, const uint8_t * p_space, int p_space_wasgo_buffer_size);
void _wasgo_PhysicsServer_wrapper_space_set_active(WasGoId wasgo_id, const uint8_t * p_space, int p_space_wasgo_buffer_size, bool p_active);
void _wasgo_PhysicsServer_wrapper_space_set_param(WasGoId wasgo_id, const uint8_t * p_space, int p_space_wasgo_buffer_size, WasGoId p_param, float p_value);

    //constructor and destructor wrappers
    WasGoId _wasgo_PhysicsServer_constructor();
    void _wasgo_PhysicsServer_destructor(WasGoId p_wasgo_id);
            
}
#endif