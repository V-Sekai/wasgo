/* THIS FILE IS GENERATED */
#ifndef CURVE3D_H
#define CURVE3D_H

#include <stdint.h>

#include "PoolRealArray.h"
#include "Dictionary.h"
#include "Resource.h"
#include "PoolVector3Array.h"
#include "Vector3.h"
class Curve3D : public Resource{
public: Curve3D();
Dictionary  _get_data();
Dictionary  _get_data();
void  _set_data(Dictionary arg0);
void  add_point(Vector3 position, Vector3 in = (0, 0, 0), Vector3 out = (0, 0, 0), int at_position = -1);
void  clear_points();
void  clear_points();
float  get_bake_interval();
float  get_bake_interval();
float  get_baked_length();
float  get_baked_length();
PoolVector3Array  get_baked_points();
PoolVector3Array  get_baked_points();
PoolRealArray  get_baked_tilts();
PoolRealArray  get_baked_tilts();
PoolVector3Array  get_baked_up_vectors();
PoolVector3Array  get_baked_up_vectors();
float  get_closest_offset(Vector3 to_point);
Vector3  get_closest_point(Vector3 to_point);
int  get_point_count();
int  get_point_count();
Vector3  get_point_in(int idx);
Vector3  get_point_out(int idx);
Vector3  get_point_position(int idx);
float  get_point_tilt(int idx);
Vector3  interpolate(int idx, float t);
Vector3  interpolate_baked(float offset, bool cubic = false);
Vector3  interpolate_baked_up_vector(float offset, bool apply_tilt = false);
Vector3  interpolatef(float fofs);
bool  is_up_vector_enabled();
bool  is_up_vector_enabled();
void  remove_point(int idx);
void  set_bake_interval(float distance);
void  set_point_in(int idx, Vector3 position);
void  set_point_out(int idx, Vector3 position);
void  set_point_position(int idx, Vector3 position);
void  set_point_tilt(int idx, float tilt);
void  set_up_vector_enabled(bool enable);
PoolVector3Array  tessellate(int max_stages = 5, float tolerance_degrees = 4);
};
#endif