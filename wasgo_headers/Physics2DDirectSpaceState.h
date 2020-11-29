/* THIS FILE IS GENERATED */
#ifndef PHYSICS2DDIRECTSPACESTATE_H
#define PHYSICS2DDIRECTSPACESTATE_H

#include "stdint.h"

#include "Variant.h"
#include "Physics2DShapeQueryParameters.h"
#include "Object.h"
class Physics2DDirectSpaceState : public Object{
public: Physics2DDirectSpaceState();
Array cast_motion(Physics2DShapeQueryParameters p_shape);
Array collide_shape(Physics2DShapeQueryParameters p_shape, int p_max_results = (int) 32);
Dictionary get_rest_info(Physics2DShapeQueryParameters p_shape);
Array intersect_point(Vector2 p_point, int p_max_results = (int) 32, Array p_exclude = (Array) [], int p_collision_layer = (int) 2147483647, bool p_collide_with_bodies = (bool) True, bool p_collide_with_areas = (bool) False);
Array intersect_point_on_canvas(Vector2 p_point, int p_canvas_instance_id, int p_max_results = (int) 32, Array p_exclude = (Array) [], int p_collision_layer = (int) 2147483647, bool p_collide_with_bodies = (bool) True, bool p_collide_with_areas = (bool) False);
Dictionary intersect_ray(Vector2 p_from, Vector2 p_to, Array p_exclude = (Array) [], int p_collision_layer = (int) 2147483647, bool p_collide_with_bodies = (bool) True, bool p_collide_with_areas = (bool) False);
Array intersect_shape(Physics2DShapeQueryParameters p_shape, int p_max_results = (int) 32);
};
#endif