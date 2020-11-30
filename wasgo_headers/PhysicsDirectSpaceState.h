/* THIS FILE IS GENERATED */
#ifndef PHYSICSDIRECTSPACESTATE_H
#define PHYSICSDIRECTSPACESTATE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Object.h"
#include "PhysicsShapeQueryParameters.h"
class PhysicsDirectSpaceState : public Object{
Array cast_motion(PhysicsShapeQueryParameters p_shape, Vector3 p_motion);
Array collide_shape(PhysicsShapeQueryParameters p_shape, int p_max_results = (int) 32);
Dictionary get_rest_info(PhysicsShapeQueryParameters p_shape);
Dictionary intersect_ray(Vector3 p_from, Vector3 p_to, Array p_exclude = (Array) [], int p_collision_mask = (int) 2147483647, bool p_collide_with_bodies = (bool) True, bool p_collide_with_areas = (bool) False);
Array intersect_shape(PhysicsShapeQueryParameters p_shape, int p_max_results = (int) 32);
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_PhysicsDirectSpaceState_wrapper_cast_motion(WasGoId wasgo_id, WasGo::WasGoId p_shape, WasGo::WasGoId p_motion);
WasGo::WasGoId _wasgo_PhysicsDirectSpaceState_wrapper_collide_shape(WasGoId wasgo_id, WasGo::WasGoId p_shape, int p_max_results);
WasGo::WasGoId _wasgo_PhysicsDirectSpaceState_wrapper_get_rest_info(WasGoId wasgo_id, WasGo::WasGoId p_shape);
WasGo::WasGoId _wasgo_PhysicsDirectSpaceState_wrapper_intersect_ray(WasGoId wasgo_id, WasGo::WasGoId p_from, WasGo::WasGoId p_to, WasGo::WasGoId p_exclude, int p_collision_mask, bool p_collide_with_bodies, bool p_collide_with_areas);
WasGo::WasGoId _wasgo_PhysicsDirectSpaceState_wrapper_intersect_shape(WasGoId wasgo_id, WasGo::WasGoId p_shape, int p_max_results);
}
#endif