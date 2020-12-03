/* THIS FILE IS GENERATED */
#ifndef CURVE2D_H
#define CURVE2D_H

#include "wasgo\wasgo.h"

#include "Vector2.h"
#include "Variant.h"
#include "Resource.h"
class Curve2D : public Resource{
public:
void add_point(Vector2 p_position, Vector2 p_in = Vector2((0, 0)), Vector2 p_out = Vector2((0, 0)), int p_at_position = (int) -1);
void clear_points();
float get_bake_interval();
float get_baked_length();
PoolVector2Array get_baked_points();
float get_closest_offset(Vector2 p_to_point);
Vector2 get_closest_point(Vector2 p_to_point);
int get_point_count();
Vector2 get_point_in(int p_idx);
Vector2 get_point_out(int p_idx);
Vector2 get_point_position(int p_idx);
Vector2 interpolate(int p_idx, float p_t);
Vector2 interpolate_baked(float p_offset, bool p_cubic = (bool) false);
Vector2 interpolatef(float p_fofs);
void remove_point(int p_idx);
void set_bake_interval(float p_distance);
void set_point_in(int p_idx, Vector2 p_position);
void set_point_out(int p_idx, Vector2 p_position);
void set_point_position(int p_idx, Vector2 p_position);
PoolVector2Array tessellate(int p_max_stages = (int) 5, float p_tolerance_degrees = (float) 4);

protected:
Curve2D(WasGoId p_wasgo_id);
public:
Curve2D();
~Curve2D();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Curve2D_wrapper_add_point(WasGoId wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size, const uint8_t * p_in, int p_in_wasgo_buffer_size, const uint8_t * p_out, int p_out_wasgo_buffer_size, int p_at_position);
void _wasgo_Curve2D_wrapper_clear_points(WasGoId wasgo_id);
float _wasgo_Curve2D_wrapper_get_bake_interval(WasGoId wasgo_id);
float _wasgo_Curve2D_wrapper_get_baked_length(WasGoId wasgo_id);
WasGoId _wasgo_Curve2D_wrapper_get_baked_points(WasGoId wasgo_id);
float _wasgo_Curve2D_wrapper_get_closest_offset(WasGoId wasgo_id, const uint8_t * p_to_point, int p_to_point_wasgo_buffer_size);
void _wasgo_Curve2D_wrapper_get_closest_point(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_to_point, int p_to_point_wasgo_buffer_size);
int _wasgo_Curve2D_wrapper_get_point_count(WasGoId wasgo_id);
void _wasgo_Curve2D_wrapper_get_point_in(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
void _wasgo_Curve2D_wrapper_get_point_out(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
void _wasgo_Curve2D_wrapper_get_point_position(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
void _wasgo_Curve2D_wrapper_interpolate(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx, float p_t);
void _wasgo_Curve2D_wrapper_interpolate_baked(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, float p_offset, bool p_cubic);
void _wasgo_Curve2D_wrapper_interpolatef(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, float p_fofs);
void _wasgo_Curve2D_wrapper_remove_point(WasGoId wasgo_id, int p_idx);
void _wasgo_Curve2D_wrapper_set_bake_interval(WasGoId wasgo_id, float p_distance);
void _wasgo_Curve2D_wrapper_set_point_in(WasGoId wasgo_id, int p_idx, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_Curve2D_wrapper_set_point_out(WasGoId wasgo_id, int p_idx, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_Curve2D_wrapper_set_point_position(WasGoId wasgo_id, int p_idx, const uint8_t * p_position, int p_position_wasgo_buffer_size);
WasGoId _wasgo_Curve2D_wrapper_tessellate(WasGoId wasgo_id, int p_max_stages, float p_tolerance_degrees);

    //constructor and destructor wrappers
    WasGoId _wasgo_Curve2D_constructor();
    void _wasgo_Curve2D_destructor(WasGoId p_wasgo_id);
            
}
#endif