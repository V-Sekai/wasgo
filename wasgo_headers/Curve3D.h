/* THIS FILE IS GENERATED */
#ifndef CURVE3D_H
#define CURVE3D_H

#include "stdint.h"

#include "Variant.h"
#include "Resource.h"
class Curve3D : public Resource{
public: Curve3D();
void add_point(Vector3 p_position, Vector3 p_in = (Vector3) (0, 0, 0), Vector3 p_out = (Vector3) (0, 0, 0), int p_at_position = (int) -1);
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
Vector3 interpolate_baked(float p_offset, bool p_cubic = (bool) False);
Vector3 interpolate_baked_up_vector(float p_offset, bool p_apply_tilt = (bool) False);
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
};
#endif