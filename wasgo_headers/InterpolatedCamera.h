/* THIS FILE IS GENERATED */
#ifndef INTERPOLATEDCAMERA_H
#define INTERPOLATEDCAMERA_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Object.h"
#include "Camera.h"
class InterpolatedCamera : public Camera{
float get_speed();
NodePath get_target_path();
bool is_interpolation_enabled();
void set_interpolation_enabled(bool p_target_path);
void set_speed(float p_speed);
void set_target(Object p_target);
void set_target_path(NodePath p_target_path);

InterpolatedCamera(WasGoId p_wasgo_id);
~InterpolatedCamera();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_InterpolatedCamera_wrapper_get_speed(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_InterpolatedCamera_wrapper_get_target_path(WasGoId wasgo_id);
int _wasgo_InterpolatedCamera_wrapper_is_interpolation_enabled(WasGoId wasgo_id);
void _wasgo_InterpolatedCamera_wrapper_set_interpolation_enabled(WasGoId wasgo_id, bool p_target_path);
void _wasgo_InterpolatedCamera_wrapper_set_speed(WasGoId wasgo_id, float p_speed);
void _wasgo_InterpolatedCamera_wrapper_set_target(WasGoId wasgo_id, WasGo::WasGoId p_target);
void _wasgo_InterpolatedCamera_wrapper_set_target_path(WasGoId wasgo_id, WasGo::WasGoId p_target_path);
}
#endif