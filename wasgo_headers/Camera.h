/* THIS FILE IS GENERATED */
#ifndef CAMERA_H
#define CAMERA_H

#include <stdint.h>

#include "Vector2.h"
#include "Spatial.h"
#include "Environment.h"
#include "Vector3.h"
#include "Transform.h"
#include "RID.h"
#include "Variant.h"
class Camera : public Spatial{
public: Camera();
enum KeepAspect{
KEEP_WIDTH: 0,
};
enum Projection{
PROJECTION_PERSPECTIVE: 0,
PROJECTION_ORTHOGONAL: 1,
};
enum DopplerTracking{
DOPPLER_TRACKING_DISABLED: 0,
DOPPLER_TRACKING_IDLE_STEP: 1,
};
void  clear_current(bool enable_next = true);
RID  get_camera_rid();
RID  get_camera_rid();
Transform  get_camera_transform();
Transform  get_camera_transform();
int  get_cull_mask();
int  get_cull_mask();
bool  get_cull_mask_bit(int layer);
enum.Camera::DopplerTracking  get_doppler_tracking();
enum.Camera::DopplerTracking  get_doppler_tracking();
Environment  get_environment();
Environment  get_environment();
float  get_fov();
float  get_fov();
Array  get_frustum();
Array  get_frustum();
Vector2  get_frustum_offset();
Vector2  get_frustum_offset();
float  get_h_offset();
float  get_h_offset();
enum.Camera::KeepAspect  get_keep_aspect_mode();
enum.Camera::KeepAspect  get_keep_aspect_mode();
enum.Camera::Projection  get_projection();
enum.Camera::Projection  get_projection();
float  get_size();
float  get_size();
float  get_v_offset();
float  get_v_offset();
float  get_zfar();
float  get_zfar();
float  get_znear();
float  get_znear();
bool  is_current();
bool  is_current();
bool  is_position_behind(Vector3 world_point);
void  make_current();
void  make_current();
Vector3  project_local_ray_normal(Vector2 screen_point);
Vector3  project_position(Vector2 screen_point, float z_depth);
Vector3  project_ray_normal(Vector2 screen_point);
Vector3  project_ray_origin(Vector2 screen_point);
void  set_cull_mask(int mask);
void  set_cull_mask_bit(int layer, bool enable);
void  set_current(bool arg0);
void  set_doppler_tracking(int mode);
void  set_environment(Environment env);
void  set_fov(float arg0);
void  set_frustum(float size, Vector2 offset, float z_near, float z_far);
void  set_frustum_offset(Vector2 arg0);
void  set_h_offset(float ofs);
void  set_keep_aspect_mode(int mode);
void  set_orthogonal(float size, float z_near, float z_far);
void  set_perspective(float fov, float z_near, float z_far);
void  set_projection(int arg0);
void  set_size(float arg0);
void  set_v_offset(float ofs);
void  set_zfar(float arg0);
void  set_znear(float arg0);
Vector2  unproject_position(Vector3 world_point);
};
#endif