/* THIS FILE IS GENERATED */
#ifndef PHYSICSDIRECTSPACESTATE_H
#define PHYSICSDIRECTSPACESTATE_H

#include <stdint.h>

#include "Variant.h"
#include "Object.h"
#include "Vector3.h"
#include "Dictionary.h"
#include "PhysicsShapeQueryParameters.h"
class PhysicsDirectSpaceState : public Object{
public: PhysicsDirectSpaceState();
Array  cast_motion(PhysicsShapeQueryParameters shape, Vector3 motion);
Array  collide_shape(PhysicsShapeQueryParameters shape, int max_results = 32);
Dictionary  get_rest_info(PhysicsShapeQueryParameters shape);
Dictionary  intersect_ray(Vector3 from, Vector3 to, Array exclude = [], int collision_mask = 2147483647, bool collide_with_bodies = true, bool collide_with_areas = false);
Array  intersect_shape(PhysicsShapeQueryParameters shape, int max_results = 32);
};
#endif