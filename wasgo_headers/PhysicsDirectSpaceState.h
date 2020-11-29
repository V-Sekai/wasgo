/* THIS FILE IS GENERATED */
#ifndef PHYSICSDIRECTSPACESTATE_H
#define PHYSICSDIRECTSPACESTATE_H

#include "stdint.h"

#include "Variant.h"
#include "PhysicsShapeQueryParameters.h"
#include "Object.h"
class PhysicsDirectSpaceState : public Object{
public: PhysicsDirectSpaceState();
Array cast_motion(PhysicsShapeQueryParameters p_shape, Vector3 p_motion);
Array collide_shape(PhysicsShapeQueryParameters p_shape, int p_max_results = (int) 32);
Dictionary get_rest_info(PhysicsShapeQueryParameters p_shape);
Dictionary intersect_ray(Vector3 p_from, Vector3 p_to, Array p_exclude = (Array) [], int p_collision_mask = (int) 2147483647, bool p_collide_with_bodies = (bool) True, bool p_collide_with_areas = (bool) False);
Array intersect_shape(PhysicsShapeQueryParameters p_shape, int p_max_results = (int) 32);
};
#endif