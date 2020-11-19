/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "RID.h"
#include "Transform.h"
#include "String.h"
#include "PhysicsDirectSpaceState.h"
#include "Object.h"
#include "Variant.h"
#include "Vector3.h"
#include "PhysicsDirectBodyState.h"
class PhysicsServer : public Object{
public: PhysicsServer();
enum BodyAxis{
BODY_AXIS_LINEAR_X: 1,
BODY_AXIS_LINEAR_Y: 2,
BODY_AXIS_LINEAR_Z: 4,
BODY_AXIS_ANGULAR_X: 8,
BODY_AXIS_ANGULAR_Y: 16,
};
enum ProcessInfo{
INFO_ACTIVE_OBJECTS: 0,
INFO_COLLISION_PAIRS: 1,
};
enum AreaBodyStatus{
AREA_BODY_ADDED: 0,
};
enum BodyMode{
BODY_MODE_STATIC: 0,
BODY_MODE_KINEMATIC: 1,
BODY_MODE_RIGID: 2,
};
enum ShapeType{
SHAPE_PLANE: 0,
SHAPE_RAY: 1,
SHAPE_SPHERE: 2,
SHAPE_BOX: 3,
SHAPE_CAPSULE: 4,
SHAPE_CYLINDER: 5,
SHAPE_CONVEX_POLYGON: 6,
SHAPE_CONCAVE_POLYGON: 7,
SHAPE_HEIGHTMAP: 8,
};
enum PinJointParam{
PIN_JOINT_BIAS: 0,
PIN_JOINT_DAMPING: 1,
};
enum SpaceParameter{
SPACE_PARAM_CONTACT_RECYCLE_RADIUS: 0,
SPACE_PARAM_CONTACT_MAX_SEPARATION: 1,
SPACE_PARAM_BODY_MAX_ALLOWED_PENETRATION: 2,
SPACE_PARAM_BODY_LINEAR_VELOCITY_SLEEP_THRESHOLD: 3,
SPACE_PARAM_BODY_ANGULAR_VELOCITY_SLEEP_THRESHOLD: 4,
SPACE_PARAM_BODY_TIME_TO_SLEEP: 5,
SPACE_PARAM_BODY_ANGULAR_VELOCITY_DAMP_RATIO: 6,
SPACE_PARAM_CONSTRAINT_DEFAULT_BIAS: 7,
};
enum ConeTwistJointParam{
CONE_TWIST_JOINT_SWING_SPAN: 0,
CONE_TWIST_JOINT_TWIST_SPAN: 1,
CONE_TWIST_JOINT_BIAS: 2,
CONE_TWIST_JOINT_SOFTNESS: 3,
};
enum JointType{
JOINT_PIN: 0,
JOINT_HINGE: 1,
JOINT_SLIDER: 2,
JOINT_CONE_TWIST: 3,
};
enum BodyState{
BODY_STATE_TRANSFORM: 0,
BODY_STATE_LINEAR_VELOCITY: 1,
BODY_STATE_ANGULAR_VELOCITY: 2,
BODY_STATE_SLEEPING: 3,
};
enum BodyParameter{
BODY_PARAM_BOUNCE: 0,
BODY_PARAM_FRICTION: 1,
BODY_PARAM_MASS: 2,
BODY_PARAM_GRAVITY_SCALE: 3,
BODY_PARAM_LINEAR_DAMP: 4,
BODY_PARAM_ANGULAR_DAMP: 5,
};
enum G6DOFJointAxisParam{
G6DOF_JOINT_LINEAR_LOWER_LIMIT: 0,
G6DOF_JOINT_LINEAR_UPPER_LIMIT: 1,
G6DOF_JOINT_LINEAR_LIMIT_SOFTNESS: 2,
G6DOF_JOINT_LINEAR_RESTITUTION: 3,
G6DOF_JOINT_LINEAR_DAMPING: 4,
G6DOF_JOINT_LINEAR_MOTOR_TARGET_VELOCITY: 5,
G6DOF_JOINT_LINEAR_MOTOR_FORCE_LIMIT: 6,
G6DOF_JOINT_ANGULAR_LOWER_LIMIT: 10,
G6DOF_JOINT_ANGULAR_UPPER_LIMIT: 11,
G6DOF_JOINT_ANGULAR_LIMIT_SOFTNESS: 12,
G6DOF_JOINT_ANGULAR_DAMPING: 13,
G6DOF_JOINT_ANGULAR_RESTITUTION: 14,
G6DOF_JOINT_ANGULAR_FORCE_LIMIT: 15,
G6DOF_JOINT_ANGULAR_ERP: 16,
G6DOF_JOINT_ANGULAR_MOTOR_TARGET_VELOCITY: 17,
};
enum SliderJointParam{
SLIDER_JOINT_LINEAR_LIMIT_UPPER: 0,
SLIDER_JOINT_LINEAR_LIMIT_LOWER: 1,
SLIDER_JOINT_LINEAR_LIMIT_SOFTNESS: 2,
SLIDER_JOINT_LINEAR_LIMIT_RESTITUTION: 3,
SLIDER_JOINT_LINEAR_LIMIT_DAMPING: 4,
SLIDER_JOINT_LINEAR_MOTION_SOFTNESS: 5,
SLIDER_JOINT_LINEAR_MOTION_RESTITUTION: 6,
SLIDER_JOINT_LINEAR_MOTION_DAMPING: 7,
SLIDER_JOINT_LINEAR_ORTHOGONAL_SOFTNESS: 8,
SLIDER_JOINT_LINEAR_ORTHOGONAL_RESTITUTION: 9,
SLIDER_JOINT_LINEAR_ORTHOGONAL_DAMPING: 10,
SLIDER_JOINT_ANGULAR_LIMIT_UPPER: 11,
SLIDER_JOINT_ANGULAR_LIMIT_LOWER: 12,
SLIDER_JOINT_ANGULAR_LIMIT_SOFTNESS: 13,
SLIDER_JOINT_ANGULAR_LIMIT_RESTITUTION: 14,
SLIDER_JOINT_ANGULAR_LIMIT_DAMPING: 15,
SLIDER_JOINT_ANGULAR_MOTION_SOFTNESS: 16,
SLIDER_JOINT_ANGULAR_MOTION_RESTITUTION: 17,
SLIDER_JOINT_ANGULAR_MOTION_DAMPING: 18,
SLIDER_JOINT_ANGULAR_ORTHOGONAL_SOFTNESS: 19,
SLIDER_JOINT_ANGULAR_ORTHOGONAL_RESTITUTION: 20,
SLIDER_JOINT_ANGULAR_ORTHOGONAL_DAMPING: 21,
};
enum HingeJointParam{
HINGE_JOINT_BIAS: 0,
HINGE_JOINT_LIMIT_UPPER: 1,
HINGE_JOINT_LIMIT_LOWER: 2,
HINGE_JOINT_LIMIT_BIAS: 3,
HINGE_JOINT_LIMIT_SOFTNESS: 4,
HINGE_JOINT_LIMIT_RELAXATION: 5,
HINGE_JOINT_MOTOR_TARGET_VELOCITY: 6,
};
enum G6DOFJointAxisFlag{
G6DOF_JOINT_FLAG_ENABLE_LINEAR_LIMIT: 0,
G6DOF_JOINT_FLAG_ENABLE_ANGULAR_LIMIT: 1,
G6DOF_JOINT_FLAG_ENABLE_MOTOR: 4,
};
enum HingeJointFlag{
HINGE_JOINT_FLAG_USE_LIMIT: 0,
};
enum AreaSpaceOverrideMode{
AREA_SPACE_OVERRIDE_DISABLED: 0,
AREA_SPACE_OVERRIDE_COMBINE: 1,
AREA_SPACE_OVERRIDE_COMBINE_REPLACE: 2,
AREA_SPACE_OVERRIDE_REPLACE: 3,
};
enum AreaParameter{
AREA_PARAM_GRAVITY: 0,
AREA_PARAM_GRAVITY_VECTOR: 1,
AREA_PARAM_GRAVITY_IS_POINT: 2,
AREA_PARAM_GRAVITY_DISTANCE_SCALE: 3,
AREA_PARAM_GRAVITY_POINT_ATTENUATION: 4,
AREA_PARAM_LINEAR_DAMP: 5,
AREA_PARAM_ANGULAR_DAMP: 6,
};
void  area_add_shape(RID area, RID shape, Transform transform = 1, 0, 0, 0, 1, 0, 0, 0, 1 - 0, 0, 0, bool disabled = false);
void  area_attach_object_instance_id(RID area, int id);
void  area_clear_shapes(RID area);
RID  area_create();
RID  area_create();
int  area_get_object_instance_id(RID area);
Variant  area_get_param(RID area, int param);
RID  area_get_shape(RID area, int shape_idx);
int  area_get_shape_count(RID area);
Transform  area_get_shape_transform(RID area, int shape_idx);
RID  area_get_space(RID area);
enum.PhysicsServer::AreaSpaceOverrideMode  area_get_space_override_mode(RID area);
Transform  area_get_transform(RID area);
bool  area_is_ray_pickable(RID area);
void  area_remove_shape(RID area, int shape_idx);
void  area_set_area_monitor_callback(RID area, Object receiver, String method);
void  area_set_collision_layer(RID area, int layer);
void  area_set_collision_mask(RID area, int mask);
void  area_set_monitor_callback(RID area, Object receiver, String method);
void  area_set_monitorable(RID area, bool monitorable);
void  area_set_param(RID area, int param, Variant value);
void  area_set_ray_pickable(RID area, bool enable);
void  area_set_shape(RID area, int shape_idx, RID shape);
void  area_set_shape_disabled(RID area, int shape_idx, bool disabled);
void  area_set_shape_transform(RID area, int shape_idx, Transform transform);
void  area_set_space(RID area, RID space);
void  area_set_space_override_mode(RID area, int mode);
void  area_set_transform(RID area, Transform transform);
void  body_add_central_force(RID body, Vector3 force);
void  body_add_collision_exception(RID body, RID excepted_body);
void  body_add_force(RID body, Vector3 force, Vector3 position);
void  body_add_shape(RID body, RID shape, Transform transform = 1, 0, 0, 0, 1, 0, 0, 0, 1 - 0, 0, 0, bool disabled = false);
void  body_add_torque(RID body, Vector3 torque);
void  body_apply_central_impulse(RID body, Vector3 impulse);
void  body_apply_impulse(RID body, Vector3 position, Vector3 impulse);
void  body_apply_torque_impulse(RID body, Vector3 impulse);
void  body_attach_object_instance_id(RID body, int id);
void  body_clear_shapes(RID body);
RID  body_create(int mode = 2, bool init_sleeping = false);
int  body_get_collision_layer(RID body);
int  body_get_collision_mask(RID body);
PhysicsDirectBodyState  body_get_direct_state(RID body);
float  body_get_kinematic_safe_margin(RID body);
int  body_get_max_contacts_reported(RID body);
enum.PhysicsServer::BodyMode  body_get_mode(RID body);
int  body_get_object_instance_id(RID body);
float  body_get_param(RID body, int param);
RID  body_get_shape(RID body, int shape_idx);
int  body_get_shape_count(RID body);
Transform  body_get_shape_transform(RID body, int shape_idx);
RID  body_get_space(RID body);
Variant  body_get_state(RID body, int state);
bool  body_is_axis_locked(RID body, int axis);
bool  body_is_continuous_collision_detection_enabled(RID body);
bool  body_is_omitting_force_integration(RID body);
bool  body_is_ray_pickable(RID body);
void  body_remove_collision_exception(RID body, RID excepted_body);
void  body_remove_shape(RID body, int shape_idx);
void  body_set_axis_lock(RID body, int axis, bool lock);
void  body_set_axis_velocity(RID body, Vector3 axis_velocity);
void  body_set_collision_layer(RID body, int layer);
void  body_set_collision_mask(RID body, int mask);
void  body_set_enable_continuous_collision_detection(RID body, bool enable);
void  body_set_force_integration_callback(RID body, Object receiver, String method, Variant userdata = null);
void  body_set_kinematic_safe_margin(RID body, float margin);
void  body_set_max_contacts_reported(RID body, int amount);
void  body_set_mode(RID body, int mode);
void  body_set_omit_force_integration(RID body, bool enable);
void  body_set_param(RID body, int param, float value);
void  body_set_ray_pickable(RID body, bool enable);
void  body_set_shape(RID body, int shape_idx, RID shape);
void  body_set_shape_disabled(RID body, int shape_idx, bool disabled);
void  body_set_shape_transform(RID body, int shape_idx, Transform transform);
void  body_set_space(RID body, RID space);
void  body_set_state(RID body, int state, Variant value);
float  cone_twist_joint_get_param(RID joint, int param);
void  cone_twist_joint_set_param(RID joint, int param, float value);
void  free_rid(RID rid);
bool  generic_6dof_joint_get_flag(RID joint, int axis, int flag);
float  generic_6dof_joint_get_param(RID joint, int axis, int param);
void  generic_6dof_joint_set_flag(RID joint, int axis, int flag, bool enable);
void  generic_6dof_joint_set_param(RID joint, int axis, int param, float value);
int  get_process_info(int process_info);
bool  hinge_joint_get_flag(RID joint, int flag);
float  hinge_joint_get_param(RID joint, int param);
void  hinge_joint_set_flag(RID joint, int flag, bool enabled);
void  hinge_joint_set_param(RID joint, int param, float value);
RID  joint_create_cone_twist(RID body_A, Transform local_ref_A, RID body_B, Transform local_ref_B);
RID  joint_create_generic_6dof(RID body_A, Transform local_ref_A, RID body_B, Transform local_ref_B);
RID  joint_create_hinge(RID body_A, Transform hinge_A, RID body_B, Transform hinge_B);
RID  joint_create_pin(RID body_A, Vector3 local_A, RID body_B, Vector3 local_B);
RID  joint_create_slider(RID body_A, Transform local_ref_A, RID body_B, Transform local_ref_B);
int  joint_get_solver_priority(RID joint);
enum.PhysicsServer::JointType  joint_get_type(RID joint);
void  joint_set_solver_priority(RID joint, int priority);
Vector3  pin_joint_get_local_a(RID joint);
Vector3  pin_joint_get_local_b(RID joint);
float  pin_joint_get_param(RID joint, int param);
void  pin_joint_set_local_a(RID joint, Vector3 local_A);
void  pin_joint_set_local_b(RID joint, Vector3 local_B);
void  pin_joint_set_param(RID joint, int param, float value);
void  set_active(bool active);
RID  shape_create(int type);
Variant  shape_get_data(RID shape);
enum.PhysicsServer::ShapeType  shape_get_type(RID shape);
void  shape_set_data(RID shape, Variant data);
float  slider_joint_get_param(RID joint, int param);
void  slider_joint_set_param(RID joint, int param, float value);
RID  space_create();
RID  space_create();
PhysicsDirectSpaceState  space_get_direct_state(RID space);
float  space_get_param(RID space, int param);
bool  space_is_active(RID space);
void  space_set_active(RID space, bool active);
void  space_set_param(RID space, int param, float value);
};