/* THIS FILE IS GENERATED */
#ifndef PHYSICS2DDIRECTSPACESTATE_H
#define PHYSICS2DDIRECTSPACESTATE_H

#include <stdint.h>

#include "Vector2.h"
#include "Object.h"
#include "Physics2DShapeQueryParameters.h"
#include "Dictionary.h"
#include "Variant.h"
class Physics2DDirectSpaceState : public Object{
public: Physics2DDirectSpaceState();
Array  cast_motion(Physics2DShapeQueryParameters shape);
Array  collide_shape(Physics2DShapeQueryParameters shape, int max_results = 32);
Dictionary  get_rest_info(Physics2DShapeQueryParameters shape);
Array  intersect_point(Vector2 point, int max_results = 32, Array exclude = [], int collision_layer = 2147483647, bool collide_with_bodies = true, bool collide_with_areas = false);
Array  intersect_point_on_canvas(Vector2 point, int canvas_instance_id, int max_results = 32, Array exclude = [], int collision_layer = 2147483647, bool collide_with_bodies = true, bool collide_with_areas = false);
Dictionary  intersect_ray(Vector2 from, Vector2 to, Array exclude = [], int collision_layer = 2147483647, bool collide_with_bodies = true, bool collide_with_areas = false);
Array  intersect_shape(Physics2DShapeQueryParameters shape, int max_results = 32);
};
#endif