/* THIS FILE IS GENERATED */
#ifndef CAMERA_H
#define CAMERA_H

#include "wasgo\wasgo.h"

#include "Environment.h"
#include "Vector3.h"
#include "RID.h"
#include "Variant.h"
#include "Transform.h"
#include "Spatial.h"
#include "Vector2.h"
class Camera : public Spatial{
public:
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
void clear_current(bool p_enable_next = (bool) true);
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

protected:
Camera(WasGoId p_wasgo_id);
public:
Camera();
~Camera();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Camera_wrapper_clear_current(WasGoId wasgo_id, bool p_enable_next);
void _wasgo_Camera_wrapper_get_camera_rid(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Camera_wrapper_get_camera_transform(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Camera_wrapper_get_cull_mask(WasGoId wasgo_id);
int _wasgo_Camera_wrapper_get_cull_mask_bit(WasGoId wasgo_id, int p_layer);
WasGoId _wasgo_Camera_wrapper_get_doppler_tracking(WasGoId wasgo_id);
WasGoId _wasgo_Camera_wrapper_get_environment(WasGoId wasgo_id);
float _wasgo_Camera_wrapper_get_fov(WasGoId wasgo_id);
WasGoId _wasgo_Camera_wrapper_get_frustum(WasGoId wasgo_id);
void _wasgo_Camera_wrapper_get_frustum_offset(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_Camera_wrapper_get_h_offset(WasGoId wasgo_id);
WasGoId _wasgo_Camera_wrapper_get_keep_aspect_mode(WasGoId wasgo_id);
WasGoId _wasgo_Camera_wrapper_get_projection(WasGoId wasgo_id);
float _wasgo_Camera_wrapper_get_size(WasGoId wasgo_id);
float _wasgo_Camera_wrapper_get_v_offset(WasGoId wasgo_id);
float _wasgo_Camera_wrapper_get_zfar(WasGoId wasgo_id);
float _wasgo_Camera_wrapper_get_znear(WasGoId wasgo_id);
int _wasgo_Camera_wrapper_is_current(WasGoId wasgo_id);
int _wasgo_Camera_wrapper_is_position_behind(WasGoId wasgo_id, const uint8_t * p_world_point, int p_world_point_wasgo_buffer_size);
void _wasgo_Camera_wrapper_make_current(WasGoId wasgo_id);
void _wasgo_Camera_wrapper_project_local_ray_normal(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_screen_point, int p_screen_point_wasgo_buffer_size);
void _wasgo_Camera_wrapper_project_position(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_screen_point, int p_screen_point_wasgo_buffer_size, float p_z_depth);
void _wasgo_Camera_wrapper_project_ray_normal(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_screen_point, int p_screen_point_wasgo_buffer_size);
void _wasgo_Camera_wrapper_project_ray_origin(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_screen_point, int p_screen_point_wasgo_buffer_size);
void _wasgo_Camera_wrapper_set_cull_mask(WasGoId wasgo_id, int p_mask);
void _wasgo_Camera_wrapper_set_cull_mask_bit(WasGoId wasgo_id, int p_layer, bool p_enable);
void _wasgo_Camera_wrapper_set_current(WasGoId wasgo_id, bool p_arg0);
void _wasgo_Camera_wrapper_set_doppler_tracking(WasGoId wasgo_id, WasGoId p_mode);
void _wasgo_Camera_wrapper_set_environment(WasGoId wasgo_id, WasGoId p_env);
void _wasgo_Camera_wrapper_set_fov(WasGoId wasgo_id, float p_arg0);
void _wasgo_Camera_wrapper_set_frustum(WasGoId wasgo_id, float p_size, const uint8_t * p_offset, int p_offset_wasgo_buffer_size, float p_z_near, float p_z_far);
void _wasgo_Camera_wrapper_set_frustum_offset(WasGoId wasgo_id, const uint8_t * p_arg0, int p_arg0_wasgo_buffer_size);
void _wasgo_Camera_wrapper_set_h_offset(WasGoId wasgo_id, float p_ofs);
void _wasgo_Camera_wrapper_set_keep_aspect_mode(WasGoId wasgo_id, WasGoId p_mode);
void _wasgo_Camera_wrapper_set_orthogonal(WasGoId wasgo_id, float p_size, float p_z_near, float p_z_far);
void _wasgo_Camera_wrapper_set_perspective(WasGoId wasgo_id, float p_fov, float p_z_near, float p_z_far);
void _wasgo_Camera_wrapper_set_projection(WasGoId wasgo_id, WasGoId p_arg0);
void _wasgo_Camera_wrapper_set_size(WasGoId wasgo_id, float p_arg0);
void _wasgo_Camera_wrapper_set_v_offset(WasGoId wasgo_id, float p_ofs);
void _wasgo_Camera_wrapper_set_zfar(WasGoId wasgo_id, float p_arg0);
void _wasgo_Camera_wrapper_set_znear(WasGoId wasgo_id, float p_arg0);
void _wasgo_Camera_wrapper_unproject_position(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_world_point, int p_world_point_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_Camera_constructor();
    void _wasgo_Camera_destructor(WasGoId p_wasgo_id);
            
}
#endif