/* THIS FILE IS GENERATED */
#ifndef INTERPOLATEDCAMERA_H
#define INTERPOLATEDCAMERA_H

#include <stdint.h>

#include "Camera.h"
#include "NodePath.h"
#include "Object.h"
class InterpolatedCamera : public Camera{
public: InterpolatedCamera();
float  get_speed();
float  get_speed();
NodePath  get_target_path();
NodePath  get_target_path();
bool  is_interpolation_enabled();
bool  is_interpolation_enabled();
void  set_interpolation_enabled(bool target_path);
void  set_speed(float speed);
void  set_target(Object target);
void  set_target_path(NodePath target_path);
};
#endif