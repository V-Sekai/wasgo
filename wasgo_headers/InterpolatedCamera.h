/* THIS FILE IS GENERATED */
#ifndef INTERPOLATEDCAMERA_H
#define INTERPOLATEDCAMERA_H

#include "wasgo\wasgo.h"

#include "Object.h"
#include "NodePath.h"
#include "Camera.h"
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
InterpolatedCamera(WasGoId p_wasgo_id);
public:
InterpolatedCamera();
~InterpolatedCamera();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_InterpolatedCamera_wrapper_get_speed(WasGoId wasgo_id);
void _wasgo_InterpolatedCamera_wrapper_get_target_path(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_InterpolatedCamera_wrapper_is_interpolation_enabled(WasGoId wasgo_id);
void _wasgo_InterpolatedCamera_wrapper_set_interpolation_enabled(WasGoId wasgo_id, bool p_target_path);
void _wasgo_InterpolatedCamera_wrapper_set_speed(WasGoId wasgo_id, float p_speed);
void _wasgo_InterpolatedCamera_wrapper_set_target(WasGoId wasgo_id, WasGoId p_target);
void _wasgo_InterpolatedCamera_wrapper_set_target_path(WasGoId wasgo_id, const uint8_t * p_target_path, int p_target_path_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_InterpolatedCamera_constructor();
    void _wasgo_InterpolatedCamera_destructor(WasGoId p_wasgo_id);
            
}
#endif