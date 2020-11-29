/* THIS FILE IS GENERATED */
#ifndef CURVE2D_H
#define CURVE2D_H

#include "stdint.h"

#include "Variant.h"
#include "Resource.h"
class Curve2D : public Resource{
public: Curve2D();
void add_point(Vector2 p_position, Vector2 p_in = (Vector2) (0, 0), Vector2 p_out = (Vector2) (0, 0), int p_at_position = (int) -1);
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
Vector2 interpolate_baked(float p_offset, bool p_cubic = (bool) False);
Vector2 interpolatef(float p_fofs);
void remove_point(int p_idx);
void set_bake_interval(float p_distance);
void set_point_in(int p_idx, Vector2 p_position);
void set_point_out(int p_idx, Vector2 p_position);
void set_point_position(int p_idx, Vector2 p_position);
PoolVector2Array tessellate(int p_max_stages = (int) 5, float p_tolerance_degrees = (float) 4);
};
#endif