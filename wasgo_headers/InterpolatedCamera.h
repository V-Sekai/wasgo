/* THIS FILE IS GENERATED */
#ifndef INTERPOLATEDCAMERA_H
#define INTERPOLATEDCAMERA_H

#include "wasgo\wasgoid.h"

#include "Camera.h"
#include "Object.h"
#include "NodePath.h"
class InterpolatedCamera : public Camera{
public:
float get_speed();
NodePath get_target_path();
bool is_interpolation_enabled();
void set_interpolation_enabled(bool p_target_path);
void set_speed(float p_speed);
void set_target(Object p_target);
void set_target_path(NodePath p_target_path);

protected:
public:
explicit InterpolatedCamera(WasGoID p_wasgo_id);
explicit InterpolatedCamera(Camera other);
InterpolatedCamera();
InterpolatedCamera new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_InterpolatedCamera_wrapper_get_speed(WasGoID wasgo_id);
void _wasgo_InterpolatedCamera_wrapper_get_target_path(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_InterpolatedCamera_wrapper_is_interpolation_enabled(WasGoID wasgo_id);
void _wasgo_InterpolatedCamera_wrapper_set_interpolation_enabled(WasGoID wasgo_id, bool p_target_path);
void _wasgo_InterpolatedCamera_wrapper_set_speed(WasGoID wasgo_id, float p_speed);
void _wasgo_InterpolatedCamera_wrapper_set_target(WasGoID wasgo_id, WasGoID p_target);
void _wasgo_InterpolatedCamera_wrapper_set_target_path(WasGoID wasgo_id, const uint8_t * p_target_path, int p_target_path_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_InterpolatedCamera_constructor();
            
}
#endif