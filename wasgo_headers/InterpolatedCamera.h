/* THIS FILE IS GENERATED */
#ifndef INTERPOLATEDCAMERA_H
#define INTERPOLATEDCAMERA_H

#include "stdint.h"

#include "Variant.h"
#include "Camera.h"
#include "Object.h"
class InterpolatedCamera : public Camera{
public: InterpolatedCamera();
float get_speed();
NodePath get_target_path();
bool is_interpolation_enabled();
void set_interpolation_enabled(bool p_target_path);
void set_speed(float p_speed);
void set_target(Object p_target);
void set_target_path(NodePath p_target_path);
};
#endif