/* THIS FILE IS GENERATED */
#ifndef CURVE3D_H
#define CURVE3D_H

#include "wasgo\wasgo.h"

#include "Resource.h"
#include "Vector3.h"
#include "Variant.h"
class Curve3D : public Resource{
public:
void add_point(Vector3 p_position, Vector3 p_in = Vector3((0, 0, 0)), Vector3 p_out = Vector3((0, 0, 0)), int p_at_position = (int) -1);
void clear_points();
float get_bake_interval();
float get_baked_length();
PoolVector3Array get_baked_points();
PoolRealArray get_baked_tilts();
PoolVector3Array get_baked_up_vectors();
float get_closest_offset(Vector3 p_to_point);
Vector3 get_closest_point(Vector3 p_to_point);
int get_point_count();
Vector3 get_point_in(int p_idx);
Vector3 get_point_out(int p_idx);
Vector3 get_point_position(int p_idx);
float get_point_tilt(int p_idx);
Vector3 interpolate(int p_idx, float p_t);
Vector3 interpolate_baked(float p_offset, bool p_cubic = (bool) false);
Vector3 interpolate_baked_up_vector(float p_offset, bool p_apply_tilt = (bool) false);
Vector3 interpolatef(float p_fofs);
bool is_up_vector_enabled();
void remove_point(int p_idx);
void set_bake_interval(float p_distance);
void set_point_in(int p_idx, Vector3 p_position);
void set_point_out(int p_idx, Vector3 p_position);
void set_point_position(int p_idx, Vector3 p_position);
void set_point_tilt(int p_idx, float p_tilt);
void set_up_vector_enabled(bool p_enable);
PoolVector3Array tessellate(int p_max_stages = (int) 5, float p_tolerance_degrees = (float) 4);

protected:
Curve3D(WasGoId p_wasgo_id);
public:
Curve3D();
~Curve3D();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Curve3D_wrapper_add_point(WasGoId wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size, const uint8_t * p_in, int p_in_wasgo_buffer_size, const uint8_t * p_out, int p_out_wasgo_buffer_size, int p_at_position);
void _wasgo_Curve3D_wrapper_clear_points(WasGoId wasgo_id);
float _wasgo_Curve3D_wrapper_get_bake_interval(WasGoId wasgo_id);
float _wasgo_Curve3D_wrapper_get_baked_length(WasGoId wasgo_id);
WasGoId _wasgo_Curve3D_wrapper_get_baked_points(WasGoId wasgo_id);
WasGoId _wasgo_Curve3D_wrapper_get_baked_tilts(WasGoId wasgo_id);
WasGoId _wasgo_Curve3D_wrapper_get_baked_up_vectors(WasGoId wasgo_id);
float _wasgo_Curve3D_wrapper_get_closest_offset(WasGoId wasgo_id, const uint8_t * p_to_point, int p_to_point_wasgo_buffer_size);
void _wasgo_Curve3D_wrapper_get_closest_point(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_to_point, int p_to_point_wasgo_buffer_size);
int _wasgo_Curve3D_wrapper_get_point_count(WasGoId wasgo_id);
void _wasgo_Curve3D_wrapper_get_point_in(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
void _wasgo_Curve3D_wrapper_get_point_out(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
void _wasgo_Curve3D_wrapper_get_point_position(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
float _wasgo_Curve3D_wrapper_get_point_tilt(WasGoId wasgo_id, int p_idx);
void _wasgo_Curve3D_wrapper_interpolate(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx, float p_t);
void _wasgo_Curve3D_wrapper_interpolate_baked(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, float p_offset, bool p_cubic);
void _wasgo_Curve3D_wrapper_interpolate_baked_up_vector(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, float p_offset, bool p_apply_tilt);
void _wasgo_Curve3D_wrapper_interpolatef(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, float p_fofs);
int _wasgo_Curve3D_wrapper_is_up_vector_enabled(WasGoId wasgo_id);
void _wasgo_Curve3D_wrapper_remove_point(WasGoId wasgo_id, int p_idx);
void _wasgo_Curve3D_wrapper_set_bake_interval(WasGoId wasgo_id, float p_distance);
void _wasgo_Curve3D_wrapper_set_point_in(WasGoId wasgo_id, int p_idx, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_Curve3D_wrapper_set_point_out(WasGoId wasgo_id, int p_idx, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_Curve3D_wrapper_set_point_position(WasGoId wasgo_id, int p_idx, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_Curve3D_wrapper_set_point_tilt(WasGoId wasgo_id, int p_idx, float p_tilt);
void _wasgo_Curve3D_wrapper_set_up_vector_enabled(WasGoId wasgo_id, bool p_enable);
WasGoId _wasgo_Curve3D_wrapper_tessellate(WasGoId wasgo_id, int p_max_stages, float p_tolerance_degrees);

    //constructor and destructor wrappers
    WasGoId _wasgo_Curve3D_constructor();
    void _wasgo_Curve3D_destructor(WasGoId p_wasgo_id);
            
}
#endif