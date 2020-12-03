/* THIS FILE IS GENERATED */
#ifndef CURVE_H
#define CURVE_H

#include "wasgo\wasgo.h"

#include "Resource.h"
#include "Vector2.h"
class Curve : public Resource{
public:
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

protected:
Curve(WasGoId p_wasgo_id);
public:
Curve();
~Curve();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_Curve_wrapper_add_point(WasGoId wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size, float p_left_tangent, float p_right_tangent, WasGoId p_left_mode, WasGoId p_right_mode);
void _wasgo_Curve_wrapper_bake(WasGoId wasgo_id);
void _wasgo_Curve_wrapper_clean_dupes(WasGoId wasgo_id);
void _wasgo_Curve_wrapper_clear_points(WasGoId wasgo_id);
int _wasgo_Curve_wrapper_get_bake_resolution(WasGoId wasgo_id);
float _wasgo_Curve_wrapper_get_max_value(WasGoId wasgo_id);
float _wasgo_Curve_wrapper_get_min_value(WasGoId wasgo_id);
int _wasgo_Curve_wrapper_get_point_count(WasGoId wasgo_id);
WasGoId _wasgo_Curve_wrapper_get_point_left_mode(WasGoId wasgo_id, int p_index);
float _wasgo_Curve_wrapper_get_point_left_tangent(WasGoId wasgo_id, int p_index);
void _wasgo_Curve_wrapper_get_point_position(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_index);
WasGoId _wasgo_Curve_wrapper_get_point_right_mode(WasGoId wasgo_id, int p_index);
float _wasgo_Curve_wrapper_get_point_right_tangent(WasGoId wasgo_id, int p_index);
float _wasgo_Curve_wrapper_interpolate(WasGoId wasgo_id, float p_offset);
float _wasgo_Curve_wrapper_interpolate_baked(WasGoId wasgo_id, float p_offset);
void _wasgo_Curve_wrapper_remove_point(WasGoId wasgo_id, int p_index);
void _wasgo_Curve_wrapper_set_bake_resolution(WasGoId wasgo_id, int p_resolution);
void _wasgo_Curve_wrapper_set_max_value(WasGoId wasgo_id, float p_max);
void _wasgo_Curve_wrapper_set_min_value(WasGoId wasgo_id, float p_min);
void _wasgo_Curve_wrapper_set_point_left_mode(WasGoId wasgo_id, int p_index, WasGoId p_mode);
void _wasgo_Curve_wrapper_set_point_left_tangent(WasGoId wasgo_id, int p_index, float p_tangent);
int _wasgo_Curve_wrapper_set_point_offset(WasGoId wasgo_id, int p_index, float p_offset);
void _wasgo_Curve_wrapper_set_point_right_mode(WasGoId wasgo_id, int p_index, WasGoId p_mode);
void _wasgo_Curve_wrapper_set_point_right_tangent(WasGoId wasgo_id, int p_index, float p_tangent);
void _wasgo_Curve_wrapper_set_point_value(WasGoId wasgo_id, int p_index, float p_y);

    //constructor and destructor wrappers
    WasGoId _wasgo_Curve_constructor();
    void _wasgo_Curve_destructor(WasGoId p_wasgo_id);
            
}
#endif