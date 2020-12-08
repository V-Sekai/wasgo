/* THIS FILE IS GENERATED */
#ifndef CURVE2D_H
#define CURVE2D_H

#include "wasgo\wasgoid.h"

#include "Resource.h"
#include "Variant.h"
#include "Vector2.h"
class Curve2D : public Resource{
public:
void add_point(Vector2 p_position, Vector2 p_in = Vector2(0, 0), Vector2 p_out = Vector2(0, 0), int p_at_position = (int) -1);
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
public:
explicit Curve2D(WasGoID p_wasgo_id);
explicit Curve2D(Resource other);
Curve2D();
Curve2D new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Curve2D_wrapper_add_point(WasGoID wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size, const uint8_t * p_in, int p_in_wasgo_buffer_size, const uint8_t * p_out, int p_out_wasgo_buffer_size, int p_at_position);
void _wasgo_Curve2D_wrapper_clear_points(WasGoID wasgo_id);
float _wasgo_Curve2D_wrapper_get_bake_interval(WasGoID wasgo_id);
float _wasgo_Curve2D_wrapper_get_baked_length(WasGoID wasgo_id);
WasGoID _wasgo_Curve2D_wrapper_get_baked_points(WasGoID wasgo_id);
float _wasgo_Curve2D_wrapper_get_closest_offset(WasGoID wasgo_id, const uint8_t * p_to_point, int p_to_point_wasgo_buffer_size);
void _wasgo_Curve2D_wrapper_get_closest_point(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_to_point, int p_to_point_wasgo_buffer_size);
int _wasgo_Curve2D_wrapper_get_point_count(WasGoID wasgo_id);
void _wasgo_Curve2D_wrapper_get_point_in(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
void _wasgo_Curve2D_wrapper_get_point_out(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
void _wasgo_Curve2D_wrapper_get_point_position(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
void _wasgo_Curve2D_wrapper_interpolate(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx, float p_t);
void _wasgo_Curve2D_wrapper_interpolate_baked(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, float p_offset, bool p_cubic);
void _wasgo_Curve2D_wrapper_interpolatef(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, float p_fofs);
void _wasgo_Curve2D_wrapper_remove_point(WasGoID wasgo_id, int p_idx);
void _wasgo_Curve2D_wrapper_set_bake_interval(WasGoID wasgo_id, float p_distance);
void _wasgo_Curve2D_wrapper_set_point_in(WasGoID wasgo_id, int p_idx, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_Curve2D_wrapper_set_point_out(WasGoID wasgo_id, int p_idx, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_Curve2D_wrapper_set_point_position(WasGoID wasgo_id, int p_idx, const uint8_t * p_position, int p_position_wasgo_buffer_size);
WasGoID _wasgo_Curve2D_wrapper_tessellate(WasGoID wasgo_id, int p_max_stages, float p_tolerance_degrees);

    //constructor wrappers
    WasGoID _wasgo_Curve2D_constructor();
            
}
#endif