/* THIS FILE IS GENERATED */
#ifndef PHYSICS2DSERVER_H
#define PHYSICS2DSERVER_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Object.h"
#include "Physics2DDirectBodyState.h"
#include "Physics2DDirectSpaceState.h"
#include "Physics2DTestMotionResult.h"
#include "Variant.h"
class Physics2DServer : public Object{
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
BODY_PARAM_INERTIA,
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
enum CCDMode{
CCD_MODE_DISABLED,
CCD_MODE_CAST_RAY,
CCD_MODE_CAST_SHAPE
};
enum DampedStringParam{
DAMPED_STRING_REST_LENGTH,
DAMPED_STRING_STIFFNESS,
DAMPED_STRING_DAMPING
};
enum JointParam{
JOINT_PARAM_BIAS,
JOINT_PARAM_MAX_BIAS,
JOINT_PARAM_MAX_FORCE
};
enum JointType{
JOINT_PIN,
JOINT_GROOVE,
JOINT_DAMPED_SPRING
};
enum ProcessInfo{
INFO_ACTIVE_OBJECTS,
INFO_COLLISION_PAIRS,
INFO_ISLAND_COUNT
};
enum ShapeType{
SHAPE_LINE,
SHAPE_RAY,
SHAPE_SEGMENT,
SHAPE_CIRCLE,
SHAPE_RECTANGLE,
SHAPE_CAPSULE,
SHAPE_CONVEX_POLYGON,
SHAPE_CONCAVE_POLYGON,
SHAPE_CUSTOM
};
enum SpaceParameter{
SPACE_PARAM_CONTACT_RECYCLE_RADIUS,
SPACE_PARAM_CONTACT_MAX_SEPARATION,
SPACE_PARAM_BODY_MAX_ALLOWED_PENETRATION,
SPACE_PARAM_BODY_LINEAR_VELOCITY_SLEEP_THRESHOLD,
SPACE_PARAM_BODY_ANGULAR_VELOCITY_SLEEP_THRESHOLD,
SPACE_PARAM_BODY_TIME_TO_SLEEP,
SPACE_PARAM_CONSTRAINT_DEFAULT_BIAS,
SPACE_PARAM_TEST_MOTION_MIN_CONTACT_DEPTH
};
void area_add_shape(RID p_area, RID p_shape, Transform2D p_transform = (Transform2D) ((1, 0), (0, 1), (0, 0)), bool p_disabled = (bool) False);
void area_attach_canvas_instance_id(RID p_area, int p_id);
void area_attach_object_instance_id(RID p_area, int p_id);
void area_clear_shapes(RID p_area);
RID area_create();
int area_get_canvas_instance_id(RID p_area);
int area_get_object_instance_id(RID p_area);
Variant area_get_param(RID p_area, Physics2DServer::AreaParameter p_param);
RID area_get_shape(RID p_area, int p_shape_idx);
int area_get_shape_count(RID p_area);
Transform2D area_get_shape_transform(RID p_area, int p_shape_idx);
RID area_get_space(RID p_area);
Physics2DServer::AreaSpaceOverrideMode area_get_space_override_mode(RID p_area);
Transform2D area_get_transform(RID p_area);
void area_remove_shape(RID p_area, int p_shape_idx);
void area_set_area_monitor_callback(RID p_area, Object p_receiver, String p_method);
void area_set_collision_layer(RID p_area, int p_layer);
void area_set_collision_mask(RID p_area, int p_mask);
void area_set_monitor_callback(RID p_area, Object p_receiver, String p_method);
void area_set_monitorable(RID p_area, bool p_monitorable);
void area_set_param(RID p_area, Physics2DServer::AreaParameter p_param, Variant p_value);
void area_set_shape(RID p_area, int p_shape_idx, RID p_shape);
void area_set_shape_disabled(RID p_area, int p_shape_idx, bool p_disabled);
void area_set_shape_transform(RID p_area, int p_shape_idx, Transform2D p_transform);
void area_set_space(RID p_area, RID p_space);
void area_set_space_override_mode(RID p_area, Physics2DServer::AreaSpaceOverrideMode p_mode);
void area_set_transform(RID p_area, Transform2D p_transform);
void body_add_central_force(RID p_body, Vector2 p_force);
void body_add_collision_exception(RID p_body, RID p_excepted_body);
void body_add_force(RID p_body, Vector2 p_offset, Vector2 p_force);
void body_add_shape(RID p_body, RID p_shape, Transform2D p_transform = (Transform2D) ((1, 0), (0, 1), (0, 0)), bool p_disabled = (bool) False);
void body_add_torque(RID p_body, float p_torque);
void body_apply_central_impulse(RID p_body, Vector2 p_impulse);
void body_apply_impulse(RID p_body, Vector2 p_position, Vector2 p_impulse);
void body_apply_torque_impulse(RID p_body, float p_impulse);
void body_attach_canvas_instance_id(RID p_body, int p_id);
void body_attach_object_instance_id(RID p_body, int p_id);
void body_clear_shapes(RID p_body);
RID body_create();
int body_get_canvas_instance_id(RID p_body);
int body_get_collision_layer(RID p_body);
int body_get_collision_mask(RID p_body);
Physics2DServer::CCDMode body_get_continuous_collision_detection_mode(RID p_body);
Physics2DDirectBodyState body_get_direct_state(RID p_body);
int body_get_max_contacts_reported(RID p_body);
Physics2DServer::BodyMode body_get_mode(RID p_body);
int body_get_object_instance_id(RID p_body);
float body_get_param(RID p_body, Physics2DServer::BodyParameter p_param);
RID body_get_shape(RID p_body, int p_shape_idx);
int body_get_shape_count(RID p_body);
Variant body_get_shape_metadata(RID p_body, int p_shape_idx);
Transform2D body_get_shape_transform(RID p_body, int p_shape_idx);
RID body_get_space(RID p_body);
Variant body_get_state(RID p_body, Physics2DServer::BodyState p_state);
bool body_is_omitting_force_integration(RID p_body);
void body_remove_collision_exception(RID p_body, RID p_excepted_body);
void body_remove_shape(RID p_body, int p_shape_idx);
void body_set_axis_velocity(RID p_body, Vector2 p_axis_velocity);
void body_set_collision_layer(RID p_body, int p_layer);
void body_set_collision_mask(RID p_body, int p_mask);
void body_set_continuous_collision_detection_mode(RID p_body, Physics2DServer::CCDMode p_mode);
void body_set_force_integration_callback(RID p_body, Object p_receiver, String p_method, Variant p_userdata = (Variant) "");
void body_set_max_contacts_reported(RID p_body, int p_amount);
void body_set_mode(RID p_body, Physics2DServer::BodyMode p_mode);
void body_set_omit_force_integration(RID p_body, bool p_enable);
void body_set_param(RID p_body, Physics2DServer::BodyParameter p_param, float p_value);
void body_set_shape(RID p_body, int p_shape_idx, RID p_shape);
void body_set_shape_as_one_way_collision(RID p_body, int p_shape_idx, bool p_enable, float p_margin);
void body_set_shape_disabled(RID p_body, int p_shape_idx, bool p_disabled);
void body_set_shape_metadata(RID p_body, int p_shape_idx, Variant p_metadata);
void body_set_shape_transform(RID p_body, int p_shape_idx, Transform2D p_transform);
void body_set_space(RID p_body, RID p_space);
void body_set_state(RID p_body, Physics2DServer::BodyState p_state, Variant p_value);
bool body_test_motion(RID p_body, Transform2D p_from, Vector2 p_motion, bool p_infinite_inertia, float p_margin = (float) 0.08, Physics2DTestMotionResult p_result = (Physics2DTestMotionResult) "");
RID capsule_shape_create();
RID circle_shape_create();
RID concave_polygon_shape_create();
RID convex_polygon_shape_create();
RID damped_spring_joint_create(Vector2 p_anchor_a, Vector2 p_anchor_b, RID p_body_a, RID p_body_b = (RID) [RID]);
float damped_string_joint_get_param(RID p_joint, Physics2DServer::DampedStringParam p_param);
void damped_string_joint_set_param(RID p_joint, Physics2DServer::DampedStringParam p_param, float p_value);
void free_rid(RID p_rid);
int get_process_info(Physics2DServer::ProcessInfo p_process_info);
RID groove_joint_create(Vector2 p_groove1_a, Vector2 p_groove2_a, Vector2 p_anchor_b, RID p_body_a = (RID) [RID], RID p_body_b = (RID) [RID]);
float joint_get_param(RID p_joint, Physics2DServer::JointParam p_param);
Physics2DServer::JointType joint_get_type(RID p_joint);
void joint_set_param(RID p_joint, Physics2DServer::JointParam p_param, float p_value);
RID line_shape_create();
RID pin_joint_create(Vector2 p_anchor, RID p_body_a, RID p_body_b = (RID) [RID]);
RID ray_shape_create();
RID rectangle_shape_create();
RID segment_shape_create();
void set_active(bool p_active);
Variant shape_get_data(RID p_shape);
Physics2DServer::ShapeType shape_get_type(RID p_shape);
void shape_set_data(RID p_shape, Variant p_data);
RID space_create();
Physics2DDirectSpaceState space_get_direct_state(RID p_space);
float space_get_param(RID p_space, Physics2DServer::SpaceParameter p_param);
bool space_is_active(RID p_space);
void space_set_active(RID p_space, bool p_active);
void space_set_param(RID p_space, Physics2DServer::SpaceParameter p_param, float p_value);
};


//Wrapper Functions
extern "C"{
void _wasgo_Physics2DServer_wrapper_area_add_shape(WasGoId wasgo_id, WasGo::WasGoId p_area, WasGo::WasGoId p_shape, WasGo::WasGoId p_transform, bool p_disabled);
void _wasgo_Physics2DServer_wrapper_area_attach_canvas_instance_id(WasGoId wasgo_id, WasGo::WasGoId p_area, int p_id);
void _wasgo_Physics2DServer_wrapper_area_attach_object_instance_id(WasGoId wasgo_id, WasGo::WasGoId p_area, int p_id);
void _wasgo_Physics2DServer_wrapper_area_clear_shapes(WasGoId wasgo_id, WasGo::WasGoId p_area);
WasGo::WasGoId _wasgo_Physics2DServer_wrapper_area_create(WasGoId wasgo_id);
int _wasgo_Physics2DServer_wrapper_area_get_canvas_instance_id(WasGoId wasgo_id, WasGo::WasGoId p_area);
int _wasgo_Physics2DServer_wrapper_area_get_object_instance_id(WasGoId wasgo_id, WasGo::WasGoId p_area);
WasGo::WasGoId _wasgo_Physics2DServer_wrapper_area_get_param(WasGoId wasgo_id, WasGo::WasGoId p_area, WasGo::WasGoId p_param);
WasGo::WasGoId _wasgo_Physics2DServer_wrapper_area_get_shape(WasGoId wasgo_id, WasGo::WasGoId p_area, int p_shape_idx);
int _wasgo_Physics2DServer_wrapper_area_get_shape_count(WasGoId wasgo_id, WasGo::WasGoId p_area);
WasGo::WasGoId _wasgo_Physics2DServer_wrapper_area_get_shape_transform(WasGoId wasgo_id, WasGo::WasGoId p_area, int p_shape_idx);
WasGo::WasGoId _wasgo_Physics2DServer_wrapper_area_get_space(WasGoId wasgo_id, WasGo::WasGoId p_area);
WasGo::WasGoId _wasgo_Physics2DServer_wrapper_area_get_space_override_mode(WasGoId wasgo_id, WasGo::WasGoId p_area);
WasGo::WasGoId _wasgo_Physics2DServer_wrapper_area_get_transform(WasGoId wasgo_id, WasGo::WasGoId p_area);
void _wasgo_Physics2DServer_wrapper_area_remove_shape(WasGoId wasgo_id, WasGo::WasGoId p_area, int p_shape_idx);
void _wasgo_Physics2DServer_wrapper_area_set_area_monitor_callback(WasGoId wasgo_id, WasGo::WasGoId p_area, WasGo::WasGoId p_receiver, WasGo::WasGoId p_method);
void _wasgo_Physics2DServer_wrapper_area_set_collision_layer(WasGoId wasgo_id, WasGo::WasGoId p_area, int p_layer);
void _wasgo_Physics2DServer_wrapper_area_set_collision_mask(WasGoId wasgo_id, WasGo::WasGoId p_area, int p_mask);
void _wasgo_Physics2DServer_wrapper_area_set_monitor_callback(WasGoId wasgo_id, WasGo::WasGoId p_area, WasGo::WasGoId p_receiver, WasGo::WasGoId p_method);
void _wasgo_Physics2DServer_wrapper_area_set_monitorable(WasGoId wasgo_id, WasGo::WasGoId p_area, bool p_monitorable);
void _wasgo_Physics2DServer_wrapper_area_set_param(WasGoId wasgo_id, WasGo::WasGoId p_area, WasGo::WasGoId p_param, WasGo::WasGoId p_value);
void _wasgo_Physics2DServer_wrapper_area_set_shape(WasGoId wasgo_id, WasGo::WasGoId p_area, int p_shape_idx, WasGo::WasGoId p_shape);
void _wasgo_Physics2DServer_wrapper_area_set_shape_disabled(WasGoId wasgo_id, WasGo::WasGoId p_area, int p_shape_idx, bool p_disabled);
void _wasgo_Physics2DServer_wrapper_area_set_shape_transform(WasGoId wasgo_id, WasGo::WasGoId p_area, int p_shape_idx, WasGo::WasGoId p_transform);
void _wasgo_Physics2DServer_wrapper_area_set_space(WasGoId wasgo_id, WasGo::WasGoId p_area, WasGo::WasGoId p_space);
void _wasgo_Physics2DServer_wrapper_area_set_space_override_mode(WasGoId wasgo_id, WasGo::WasGoId p_area, WasGo::WasGoId p_mode);
void _wasgo_Physics2DServer_wrapper_area_set_transform(WasGoId wasgo_id, WasGo::WasGoId p_area, WasGo::WasGoId p_transform);
void _wasgo_Physics2DServer_wrapper_body_add_central_force(WasGoId wasgo_id, WasGo::WasGoId p_body, WasGo::WasGoId p_force);
void _wasgo_Physics2DServer_wrapper_body_add_collision_exception(WasGoId wasgo_id, WasGo::WasGoId p_body, WasGo::WasGoId p_excepted_body);
void _wasgo_Physics2DServer_wrapper_body_add_force(WasGoId wasgo_id, WasGo::WasGoId p_body, WasGo::WasGoId p_offset, WasGo::WasGoId p_force);
void _wasgo_Physics2DServer_wrapper_body_add_shape(WasGoId wasgo_id, WasGo::WasGoId p_body, WasGo::WasGoId p_shape, WasGo::WasGoId p_transform, bool p_disabled);
void _wasgo_Physics2DServer_wrapper_body_add_torque(WasGoId wasgo_id, WasGo::WasGoId p_body, float p_torque);
void _wasgo_Physics2DServer_wrapper_body_apply_central_impulse(WasGoId wasgo_id, WasGo::WasGoId p_body, WasGo::WasGoId p_impulse);
void _wasgo_Physics2DServer_wrapper_body_apply_impulse(WasGoId wasgo_id, WasGo::WasGoId p_body, WasGo::WasGoId p_position, WasGo::WasGoId p_impulse);
void _wasgo_Physics2DServer_wrapper_body_apply_torque_impulse(WasGoId wasgo_id, WasGo::WasGoId p_body, float p_impulse);
void _wasgo_Physics2DServer_wrapper_body_attach_canvas_instance_id(WasGoId wasgo_id, WasGo::WasGoId p_body, int p_id);
void _wasgo_Physics2DServer_wrapper_body_attach_object_instance_id(WasGoId wasgo_id, WasGo::WasGoId p_body, int p_id);
void _wasgo_Physics2DServer_wrapper_body_clear_shapes(WasGoId wasgo_id, WasGo::WasGoId p_body);
WasGo::WasGoId _wasgo_Physics2DServer_wrapper_body_create(WasGoId wasgo_id);
int _wasgo_Physics2DServer_wrapper_body_get_canvas_instance_id(WasGoId wasgo_id, WasGo::WasGoId p_body);
int _wasgo_Physics2DServer_wrapper_body_get_collision_layer(WasGoId wasgo_id, WasGo::WasGoId p_body);
int _wasgo_Physics2DServer_wrapper_body_get_collision_mask(WasGoId wasgo_id, WasGo::WasGoId p_body);
WasGo::WasGoId _wasgo_Physics2DServer_wrapper_body_get_continuous_collision_detection_mode(WasGoId wasgo_id, WasGo::WasGoId p_body);
WasGo::WasGoId _wasgo_Physics2DServer_wrapper_body_get_direct_state(WasGoId wasgo_id, WasGo::WasGoId p_body);
int _wasgo_Physics2DServer_wrapper_body_get_max_contacts_reported(WasGoId wasgo_id, WasGo::WasGoId p_body);
WasGo::WasGoId _wasgo_Physics2DServer_wrapper_body_get_mode(WasGoId wasgo_id, WasGo::WasGoId p_body);
int _wasgo_Physics2DServer_wrapper_body_get_object_instance_id(WasGoId wasgo_id, WasGo::WasGoId p_body);
float _wasgo_Physics2DServer_wrapper_body_get_param(WasGoId wasgo_id, WasGo::WasGoId p_body, WasGo::WasGoId p_param);
WasGo::WasGoId _wasgo_Physics2DServer_wrapper_body_get_shape(WasGoId wasgo_id, WasGo::WasGoId p_body, int p_shape_idx);
int _wasgo_Physics2DServer_wrapper_body_get_shape_count(WasGoId wasgo_id, WasGo::WasGoId p_body);
WasGo::WasGoId _wasgo_Physics2DServer_wrapper_body_get_shape_metadata(WasGoId wasgo_id, WasGo::WasGoId p_body, int p_shape_idx);
WasGo::WasGoId _wasgo_Physics2DServer_wrapper_body_get_shape_transform(WasGoId wasgo_id, WasGo::WasGoId p_body, int p_shape_idx);
WasGo::WasGoId _wasgo_Physics2DServer_wrapper_body_get_space(WasGoId wasgo_id, WasGo::WasGoId p_body);
WasGo::WasGoId _wasgo_Physics2DServer_wrapper_body_get_state(WasGoId wasgo_id, WasGo::WasGoId p_body, WasGo::WasGoId p_state);
int _wasgo_Physics2DServer_wrapper_body_is_omitting_force_integration(WasGoId wasgo_id, WasGo::WasGoId p_body);
void _wasgo_Physics2DServer_wrapper_body_remove_collision_exception(WasGoId wasgo_id, WasGo::WasGoId p_body, WasGo::WasGoId p_excepted_body);
void _wasgo_Physics2DServer_wrapper_body_remove_shape(WasGoId wasgo_id, WasGo::WasGoId p_body, int p_shape_idx);
void _wasgo_Physics2DServer_wrapper_body_set_axis_velocity(WasGoId wasgo_id, WasGo::WasGoId p_body, WasGo::WasGoId p_axis_velocity);
void _wasgo_Physics2DServer_wrapper_body_set_collision_layer(WasGoId wasgo_id, WasGo::WasGoId p_body, int p_layer);
void _wasgo_Physics2DServer_wrapper_body_set_collision_mask(WasGoId wasgo_id, WasGo::WasGoId p_body, int p_mask);
void _wasgo_Physics2DServer_wrapper_body_set_continuous_collision_detection_mode(WasGoId wasgo_id, WasGo::WasGoId p_body, WasGo::WasGoId p_mode);
void _wasgo_Physics2DServer_wrapper_body_set_force_integration_callback(WasGoId wasgo_id, WasGo::WasGoId p_body, WasGo::WasGoId p_receiver, WasGo::WasGoId p_method, WasGo::WasGoId p_userdata);
void _wasgo_Physics2DServer_wrapper_body_set_max_contacts_reported(WasGoId wasgo_id, WasGo::WasGoId p_body, int p_amount);
void _wasgo_Physics2DServer_wrapper_body_set_mode(WasGoId wasgo_id, WasGo::WasGoId p_body, WasGo::WasGoId p_mode);
void _wasgo_Physics2DServer_wrapper_body_set_omit_force_integration(WasGoId wasgo_id, WasGo::WasGoId p_body, bool p_enable);
void _wasgo_Physics2DServer_wrapper_body_set_param(WasGoId wasgo_id, WasGo::WasGoId p_body, WasGo::WasGoId p_param, float p_value);
void _wasgo_Physics2DServer_wrapper_body_set_shape(WasGoId wasgo_id, WasGo::WasGoId p_body, int p_shape_idx, WasGo::WasGoId p_shape);
void _wasgo_Physics2DServer_wrapper_body_set_shape_as_one_way_collision(WasGoId wasgo_id, WasGo::WasGoId p_body, int p_shape_idx, bool p_enable, float p_margin);
void _wasgo_Physics2DServer_wrapper_body_set_shape_disabled(WasGoId wasgo_id, WasGo::WasGoId p_body, int p_shape_idx, bool p_disabled);
void _wasgo_Physics2DServer_wrapper_body_set_shape_metadata(WasGoId wasgo_id, WasGo::WasGoId p_body, int p_shape_idx, WasGo::WasGoId p_metadata);
void _wasgo_Physics2DServer_wrapper_body_set_shape_transform(WasGoId wasgo_id, WasGo::WasGoId p_body, int p_shape_idx, WasGo::WasGoId p_transform);
void _wasgo_Physics2DServer_wrapper_body_set_space(WasGoId wasgo_id, WasGo::WasGoId p_body, WasGo::WasGoId p_space);
void _wasgo_Physics2DServer_wrapper_body_set_state(WasGoId wasgo_id, WasGo::WasGoId p_body, WasGo::WasGoId p_state, WasGo::WasGoId p_value);
int _wasgo_Physics2DServer_wrapper_body_test_motion(WasGoId wasgo_id, WasGo::WasGoId p_body, WasGo::WasGoId p_from, WasGo::WasGoId p_motion, bool p_infinite_inertia, float p_margin, WasGo::WasGoId p_result);
WasGo::WasGoId _wasgo_Physics2DServer_wrapper_capsule_shape_create(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Physics2DServer_wrapper_circle_shape_create(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Physics2DServer_wrapper_concave_polygon_shape_create(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Physics2DServer_wrapper_convex_polygon_shape_create(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Physics2DServer_wrapper_damped_spring_joint_create(WasGoId wasgo_id, WasGo::WasGoId p_anchor_a, WasGo::WasGoId p_anchor_b, WasGo::WasGoId p_body_a, WasGo::WasGoId p_body_b);
float _wasgo_Physics2DServer_wrapper_damped_string_joint_get_param(WasGoId wasgo_id, WasGo::WasGoId p_joint, WasGo::WasGoId p_param);
void _wasgo_Physics2DServer_wrapper_damped_string_joint_set_param(WasGoId wasgo_id, WasGo::WasGoId p_joint, WasGo::WasGoId p_param, float p_value);
void _wasgo_Physics2DServer_wrapper_free_rid(WasGoId wasgo_id, WasGo::WasGoId p_rid);
int _wasgo_Physics2DServer_wrapper_get_process_info(WasGoId wasgo_id, WasGo::WasGoId p_process_info);
WasGo::WasGoId _wasgo_Physics2DServer_wrapper_groove_joint_create(WasGoId wasgo_id, WasGo::WasGoId p_groove1_a, WasGo::WasGoId p_groove2_a, WasGo::WasGoId p_anchor_b, WasGo::WasGoId p_body_a, WasGo::WasGoId p_body_b);
float _wasgo_Physics2DServer_wrapper_joint_get_param(WasGoId wasgo_id, WasGo::WasGoId p_joint, WasGo::WasGoId p_param);
WasGo::WasGoId _wasgo_Physics2DServer_wrapper_joint_get_type(WasGoId wasgo_id, WasGo::WasGoId p_joint);
void _wasgo_Physics2DServer_wrapper_joint_set_param(WasGoId wasgo_id, WasGo::WasGoId p_joint, WasGo::WasGoId p_param, float p_value);
WasGo::WasGoId _wasgo_Physics2DServer_wrapper_line_shape_create(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Physics2DServer_wrapper_pin_joint_create(WasGoId wasgo_id, WasGo::WasGoId p_anchor, WasGo::WasGoId p_body_a, WasGo::WasGoId p_body_b);
WasGo::WasGoId _wasgo_Physics2DServer_wrapper_ray_shape_create(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Physics2DServer_wrapper_rectangle_shape_create(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Physics2DServer_wrapper_segment_shape_create(WasGoId wasgo_id);
void _wasgo_Physics2DServer_wrapper_set_active(WasGoId wasgo_id, bool p_active);
WasGo::WasGoId _wasgo_Physics2DServer_wrapper_shape_get_data(WasGoId wasgo_id, WasGo::WasGoId p_shape);
WasGo::WasGoId _wasgo_Physics2DServer_wrapper_shape_get_type(WasGoId wasgo_id, WasGo::WasGoId p_shape);
void _wasgo_Physics2DServer_wrapper_shape_set_data(WasGoId wasgo_id, WasGo::WasGoId p_shape, WasGo::WasGoId p_data);
WasGo::WasGoId _wasgo_Physics2DServer_wrapper_space_create(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Physics2DServer_wrapper_space_get_direct_state(WasGoId wasgo_id, WasGo::WasGoId p_space);
float _wasgo_Physics2DServer_wrapper_space_get_param(WasGoId wasgo_id, WasGo::WasGoId p_space, WasGo::WasGoId p_param);
int _wasgo_Physics2DServer_wrapper_space_is_active(WasGoId wasgo_id, WasGo::WasGoId p_space);
void _wasgo_Physics2DServer_wrapper_space_set_active(WasGoId wasgo_id, WasGo::WasGoId p_space, bool p_active);
void _wasgo_Physics2DServer_wrapper_space_set_param(WasGoId wasgo_id, WasGo::WasGoId p_space, WasGo::WasGoId p_param, float p_value);
}
#endif