/* THIS FILE IS GENERATED */
#ifndef CURVE_H
#define CURVE_H

#include "stdint.h"

#include "Variant.h"
#include "Resource.h"
class Curve : public Resource{
public: Curve();
enum TangentMode{
TANGENT_FREE,
TANGENT_LINEAR,
TANGENT_MODE_COUNT
};
int add_point(Vector2 p_position, float p_left_tangent = (float) 0, float p_right_tangent = (float) 0, Curve::TangentMode p_left_mode = (Curve::TangentMode) 0, Curve::TangentMode p_right_mode = (Curve::TangentMode) 0);
void bake();
void clean_dupes();
void clear_points();
int get_bake_resolution();
float get_max_value();
float get_min_value();
int get_point_count();
Curve::TangentMode get_point_left_mode(int p_index);
float get_point_left_tangent(int p_index);
Vector2 get_point_position(int p_index);
Curve::TangentMode get_point_right_mode(int p_index);
float get_point_right_tangent(int p_index);
float interpolate(float p_offset);
float interpolate_baked(float p_offset);
void remove_point(int p_index);
void set_bake_resolution(int p_resolution);
void set_max_value(float p_max);
void set_min_value(float p_min);
void set_point_left_mode(int p_index, Curve::TangentMode p_mode);
void set_point_left_tangent(int p_index, float p_tangent);
int set_point_offset(int p_index, float p_offset);
void set_point_right_mode(int p_index, Curve::TangentMode p_mode);
void set_point_right_tangent(int p_index, float p_tangent);
void set_point_value(int p_index, float p_y);
};
#endif