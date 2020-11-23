/* THIS FILE IS GENERATED */
#ifndef CURVE_H
#define CURVE_H

#include <stdint.h>

#include "Resource.h"
#include "Vector2.h"
#include "Variant.h"
class Curve : public Resource{
public: Curve();
enum TangentMode{
TANGENT_FREE: 0,
TANGENT_LINEAR: 1,
};
Array  _get_data();
Array  _get_data();
void  _set_data(Array data);
int  add_point(Vector2 position, float left_tangent = 0, float right_tangent = 0, int left_mode = 0, int right_mode = 0);
void  bake();
void  bake();
void  clean_dupes();
void  clean_dupes();
void  clear_points();
void  clear_points();
int  get_bake_resolution();
int  get_bake_resolution();
float  get_max_value();
float  get_max_value();
float  get_min_value();
float  get_min_value();
int  get_point_count();
int  get_point_count();
enum.Curve::TangentMode  get_point_left_mode(int index);
float  get_point_left_tangent(int index);
Vector2  get_point_position(int index);
enum.Curve::TangentMode  get_point_right_mode(int index);
float  get_point_right_tangent(int index);
float  interpolate(float offset);
float  interpolate_baked(float offset);
void  remove_point(int index);
void  set_bake_resolution(int resolution);
void  set_max_value(float max);
void  set_min_value(float min);
void  set_point_left_mode(int index, int mode);
void  set_point_left_tangent(int index, float tangent);
int  set_point_offset(int index, float offset);
void  set_point_right_mode(int index, int mode);
void  set_point_right_tangent(int index, float tangent);
void  set_point_value(int index, float y);
};
#endif