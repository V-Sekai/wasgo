/* THIS FILE IS GENERATED */
#ifndef CURVE2D_H
#define CURVE2D_H

#include <stdint.h>

#include "Resource.h"
#include "Vector2.h"
#include "PoolVector2Array.h"
#include "Dictionary.h"
class Curve2D : public Resource{
public: Curve2D();
Dictionary  _get_data();
Dictionary  _get_data();
void  _set_data(Dictionary arg0);
void  add_point(Vector2 position, Vector2 in = (0, 0), Vector2 out = (0, 0), int at_position = -1);
void  clear_points();
void  clear_points();
float  get_bake_interval();
float  get_bake_interval();
float  get_baked_length();
float  get_baked_length();
PoolVector2Array  get_baked_points();
PoolVector2Array  get_baked_points();
float  get_closest_offset(Vector2 to_point);
Vector2  get_closest_point(Vector2 to_point);
int  get_point_count();
int  get_point_count();
Vector2  get_point_in(int idx);
Vector2  get_point_out(int idx);
Vector2  get_point_position(int idx);
Vector2  interpolate(int idx, float t);
Vector2  interpolate_baked(float offset, bool cubic = false);
Vector2  interpolatef(float fofs);
void  remove_point(int idx);
void  set_bake_interval(float distance);
void  set_point_in(int idx, Vector2 position);
void  set_point_out(int idx, Vector2 position);
void  set_point_position(int idx, Vector2 position);
PoolVector2Array  tessellate(int max_stages = 5, float tolerance_degrees = 4);
};
#endif