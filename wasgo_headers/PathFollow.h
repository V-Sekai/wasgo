/* THIS FILE IS GENERATED */
#ifndef PATHFOLLOW_H
#define PATHFOLLOW_H

#include <stdint.h>

#include "Spatial.h"
class PathFollow : public Spatial{
public: PathFollow();
enum RotationMode{
ROTATION_NONE: 0,
ROTATION_Y: 1,
ROTATION_XY: 2,
ROTATION_XYZ: 3,
};
bool  get_cubic_interpolation();
bool  get_cubic_interpolation();
float  get_h_offset();
float  get_h_offset();
float  get_offset();
float  get_offset();
enum.PathFollow::RotationMode  get_rotation_mode();
enum.PathFollow::RotationMode  get_rotation_mode();
float  get_unit_offset();
float  get_unit_offset();
float  get_v_offset();
float  get_v_offset();
bool  has_loop();
bool  has_loop();
void  set_cubic_interpolation(bool enable);
void  set_h_offset(float h_offset);
void  set_loop(bool loop);
void  set_offset(float offset);
void  set_rotation_mode(int rotation_mode);
void  set_unit_offset(float unit_offset);
void  set_v_offset(float v_offset);
};
#endif