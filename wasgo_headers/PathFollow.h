/* THIS FILE IS GENERATED */
#ifndef PATHFOLLOW_H
#define PATHFOLLOW_H

#include "stdint.h"

#include "Spatial.h"
class PathFollow : public Spatial{
public: PathFollow();
enum RotationMode{
ROTATION_NONE,
ROTATION_Y,
ROTATION_XY,
ROTATION_XYZ,
ROTATION_ORIENTED
};
bool get_cubic_interpolation();
float get_h_offset();
float get_offset();
PathFollow::RotationMode get_rotation_mode();
float get_unit_offset();
float get_v_offset();
bool has_loop();
void set_cubic_interpolation(bool p_enable);
void set_h_offset(float p_h_offset);
void set_loop(bool p_loop);
void set_offset(float p_offset);
void set_rotation_mode(PathFollow::RotationMode p_rotation_mode);
void set_unit_offset(float p_unit_offset);
void set_v_offset(float p_v_offset);
};
#endif