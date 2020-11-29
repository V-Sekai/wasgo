/* THIS FILE IS GENERATED */
#ifndef CAMERA_H
#define CAMERA_H

#include "stdint.h"

#include "Environment.h"
#include "Variant.h"
#include "Spatial.h"
class Camera : public Spatial{
public: Camera();
enum DopplerTracking{
DOPPLER_TRACKING_DISABLED,
DOPPLER_TRACKING_IDLE_STEP,
DOPPLER_TRACKING_PHYSICS_STEP
};
enum KeepAspect{
KEEP_WIDTH,
KEEP_HEIGHT
};
enum Projection{
PROJECTION_PERSPECTIVE,
PROJECTION_ORTHOGONAL,
PROJECTION_FRUSTUM
};
void clear_current(bool p_enable_next = (bool) True);
RID get_camera_rid();
Transform get_camera_transform();
int get_cull_mask();
bool get_cull_mask_bit(int p_layer);
Camera::DopplerTracking get_doppler_tracking();
Environment get_environment();
float get_fov();
Array get_frustum();
Vector2 get_frustum_offset();
float get_h_offset();
Camera::KeepAspect get_keep_aspect_mode();
Camera::Projection get_projection();
float get_size();
float get_v_offset();
float get_zfar();
float get_znear();
bool is_current();
bool is_position_behind(Vector3 p_world_point);
void make_current();
Vector3 project_local_ray_normal(Vector2 p_screen_point);
Vector3 project_position(Vector2 p_screen_point, float p_z_depth);
Vector3 project_ray_normal(Vector2 p_screen_point);
Vector3 project_ray_origin(Vector2 p_screen_point);
void set_cull_mask(int p_mask);
void set_cull_mask_bit(int p_layer, bool p_enable);
void set_current(bool p_arg0);
void set_doppler_tracking(Camera::DopplerTracking p_mode);
void set_environment(Environment p_env);
void set_fov(float p_arg0);
void set_frustum(float p_size, Vector2 p_offset, float p_z_near, float p_z_far);
void set_frustum_offset(Vector2 p_arg0);
void set_h_offset(float p_ofs);
void set_keep_aspect_mode(Camera::KeepAspect p_mode);
void set_orthogonal(float p_size, float p_z_near, float p_z_far);
void set_perspective(float p_fov, float p_z_near, float p_z_far);
void set_projection(Camera::Projection p_arg0);
void set_size(float p_arg0);
void set_v_offset(float p_ofs);
void set_zfar(float p_arg0);
void set_znear(float p_arg0);
Vector2 unproject_position(Vector3 p_world_point);
};
#endif