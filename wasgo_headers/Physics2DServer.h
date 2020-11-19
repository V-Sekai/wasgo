/* THIS FILE IS GENERATED */
#ifndef PHYSICS2DSERVER_H
#define PHYSICS2DSERVER_H

#include <stdint.h>

#include "Vector2.h"
#include "String.h"
#include "Physics2DDirectBodyState.h"
#include "Physics2DTestMotionResult.h"
#include "Transform2D.h"
#include "Object.h"
#include "Physics2DDirectSpaceState.h"
#include "Variant.h"
#include "RID.h"
class Physics2DServer : public Object{
public: Physics2DServer();
enum ProcessInfo{
INFO_ACTIVE_OBJECTS: 0,
INFO_COLLISION_PAIRS: 1,
};
enum AreaBodyStatus{
AREA_BODY_ADDED: 0,
};
enum DampedStringParam{
DAMPED_STRING_REST_LENGTH: 0,
DAMPED_STRING_STIFFNESS: 1,
};
enum BodyMode{
BODY_MODE_STATIC: 0,
BODY_MODE_KINEMATIC: 1,
BODY_MODE_RIGID: 2,
};
enum ShapeType{
SHAPE_LINE: 0,
SHAPE_RAY: 1,
SHAPE_SEGMENT: 2,
SHAPE_CIRCLE: 3,
SHAPE_RECTANGLE: 4,
SHAPE_CAPSULE: 5,
SHAPE_CONVEX_POLYGON: 6,
SHAPE_CONCAVE_POLYGON: 7,
};
enum JointParam{
JOINT_PARAM_BIAS: 0,
JOINT_PARAM_MAX_BIAS: 1,
};
enum SpaceParameter{
SPACE_PARAM_CONTACT_RECYCLE_RADIUS: 0,
SPACE_PARAM_CONTACT_MAX_SEPARATION: 1,
SPACE_PARAM_BODY_MAX_ALLOWED_PENETRATION: 2,
SPACE_PARAM_BODY_LINEAR_VELOCITY_SLEEP_THRESHOLD: 3,
SPACE_PARAM_BODY_ANGULAR_VELOCITY_SLEEP_THRESHOLD: 4,
SPACE_PARAM_BODY_TIME_TO_SLEEP: 5,
SPACE_PARAM_CONSTRAINT_DEFAULT_BIAS: 6,
};
enum JointType{
JOINT_PIN: 0,
JOINT_GROOVE: 1,
};
enum CCDMode{
CCD_MODE_DISABLED: 0,
CCD_MODE_CAST_RAY: 1,
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
BODY_PARAM_INERTIA: 3,
BODY_PARAM_GRAVITY_SCALE: 4,
BODY_PARAM_LINEAR_DAMP: 5,
BODY_PARAM_ANGULAR_DAMP: 6,
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
void  area_add_shape(RID area, RID shape, Transform2D transform = ((1, 0), (0, 1), (0, 0)), bool disabled = false);
void  area_attach_canvas_instance_id(RID area, int id);
void  area_attach_object_instance_id(RID area, int id);
void  area_clear_shapes(RID area);
RID  area_create();
RID  area_create();
int  area_get_canvas_instance_id(RID area);
int  area_get_object_instance_id(RID area);
Variant  area_get_param(RID area, int param);
RID  area_get_shape(RID area, int shape_idx);
int  area_get_shape_count(RID area);
Transform2D  area_get_shape_transform(RID area, int shape_idx);
RID  area_get_space(RID area);
enum.Physics2DServer::AreaSpaceOverrideMode  area_get_space_override_mode(RID area);
Transform2D  area_get_transform(RID area);
void  area_remove_shape(RID area, int shape_idx);
void  area_set_area_monitor_callback(RID area, Object receiver, String method);
void  area_set_collision_layer(RID area, int layer);
void  area_set_collision_mask(RID area, int mask);
void  area_set_monitor_callback(RID area, Object receiver, String method);
void  area_set_monitorable(RID area, bool monitorable);
void  area_set_param(RID area, int param, Variant value);
void  area_set_shape(RID area, int shape_idx, RID shape);
void  area_set_shape_disabled(RID area, int shape_idx, bool disabled);
void  area_set_shape_transform(RID area, int shape_idx, Transform2D transform);
void  area_set_space(RID area, RID space);
void  area_set_space_override_mode(RID area, int mode);
void  area_set_transform(RID area, Transform2D transform);
void  body_add_central_force(RID body, Vector2 force);
void  body_add_collision_exception(RID body, RID excepted_body);
void  body_add_force(RID body, Vector2 offset, Vector2 force);
void  body_add_shape(RID body, RID shape, Transform2D transform = ((1, 0), (0, 1), (0, 0)), bool disabled = false);
void  body_add_torque(RID body, float torque);
void  body_apply_central_impulse(RID body, Vector2 impulse);
void  body_apply_impulse(RID body, Vector2 position, Vector2 impulse);
void  body_apply_torque_impulse(RID body, float impulse);
void  body_attach_canvas_instance_id(RID body, int id);
void  body_attach_object_instance_id(RID body, int id);
void  body_clear_shapes(RID body);
RID  body_create();
RID  body_create();
int  body_get_canvas_instance_id(RID body);
int  body_get_collision_layer(RID body);
int  body_get_collision_mask(RID body);
enum.Physics2DServer::CCDMode  body_get_continuous_collision_detection_mode(RID body);
Physics2DDirectBodyState  body_get_direct_state(RID body);
int  body_get_max_contacts_reported(RID body);
enum.Physics2DServer::BodyMode  body_get_mode(RID body);
int  body_get_object_instance_id(RID body);
float  body_get_param(RID body, int param);
RID  body_get_shape(RID body, int shape_idx);
int  body_get_shape_count(RID body);
Variant  body_get_shape_metadata(RID body, int shape_idx);
Transform2D  body_get_shape_transform(RID body, int shape_idx);
RID  body_get_space(RID body);
Variant  body_get_state(RID body, int state);
bool  body_is_omitting_force_integration(RID body);
void  body_remove_collision_exception(RID body, RID excepted_body);
void  body_remove_shape(RID body, int shape_idx);
void  body_set_axis_velocity(RID body, Vector2 axis_velocity);
void  body_set_collision_layer(RID body, int layer);
void  body_set_collision_mask(RID body, int mask);
void  body_set_continuous_collision_detection_mode(RID body, int mode);
void  body_set_force_integration_callback(RID body, Object receiver, String method, Variant userdata = null);
void  body_set_max_contacts_reported(RID body, int amount);
void  body_set_mode(RID body, int mode);
void  body_set_omit_force_integration(RID body, bool enable);
void  body_set_param(RID body, int param, float value);
void  body_set_shape(RID body, int shape_idx, RID shape);
void  body_set_shape_as_one_way_collision(RID body, int shape_idx, bool enable, float margin);
void  body_set_shape_disabled(RID body, int shape_idx, bool disabled);
void  body_set_shape_metadata(RID body, int shape_idx, Variant metadata);
void  body_set_shape_transform(RID body, int shape_idx, Transform2D transform);
void  body_set_space(RID body, RID space);
void  body_set_state(RID body, int state, Variant value);
bool  body_test_motion(RID body, Transform2D from, Vector2 motion, bool infinite_inertia, float margin = 0.08, Physics2DTestMotionResult result = null);
RID  capsule_shape_create();
RID  capsule_shape_create();
RID  circle_shape_create();
RID  circle_shape_create();
RID  concave_polygon_shape_create();
RID  concave_polygon_shape_create();
RID  convex_polygon_shape_create();
RID  convex_polygon_shape_create();
RID  damped_spring_joint_create(Vector2 anchor_a, Vector2 anchor_b, RID body_a, RID body_b = [rid]);
float  damped_string_joint_get_param(RID joint, int param);
void  damped_string_joint_set_param(RID joint, int param, float value);
void  free_rid(RID rid);
int  get_process_info(int process_info);
RID  groove_joint_create(Vector2 groove1_a, Vector2 groove2_a, Vector2 anchor_b, RID body_a = [rid], RID body_b = [rid]);
float  joint_get_param(RID joint, int param);
enum.Physics2DServer::JointType  joint_get_type(RID joint);
void  joint_set_param(RID joint, int param, float value);
RID  line_shape_create();
RID  line_shape_create();
RID  pin_joint_create(Vector2 anchor, RID body_a, RID body_b = [rid]);
RID  ray_shape_create();
RID  ray_shape_create();
RID  rectangle_shape_create();
RID  rectangle_shape_create();
RID  segment_shape_create();
RID  segment_shape_create();
void  set_active(bool active);
Variant  shape_get_data(RID shape);
enum.Physics2DServer::ShapeType  shape_get_type(RID shape);
void  shape_set_data(RID shape, Variant data);
RID  space_create();
RID  space_create();
Physics2DDirectSpaceState  space_get_direct_state(RID space);
float  space_get_param(RID space, int param);
bool  space_is_active(RID space);
void  space_set_active(RID space, bool active);
void  space_set_param(RID space, int param, float value);
};
#endif