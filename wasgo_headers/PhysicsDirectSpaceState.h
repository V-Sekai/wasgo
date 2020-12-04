/* THIS FILE IS GENERATED */
#ifndef PHYSICSDIRECTSPACESTATE_H
#define PHYSICSDIRECTSPACESTATE_H

#include "wasgo\wasgo.h"

#include "Vector3.h"
#include "PhysicsShapeQueryParameters.h"
#include "Object.h"
#include "Variant.h"
class PhysicsDirectSpaceState : public Object{
public:
Array cast_motion(PhysicsShapeQueryParameters p_shape, Vector3 p_motion);
Array collide_shape(PhysicsShapeQueryParameters p_shape, int p_max_results = (int) 32);
Dictionary get_rest_info(PhysicsShapeQueryParameters p_shape);
Dictionary intersect_ray(Vector3 p_from, Vector3 p_to, Array p_exclude = (Array) [], int p_collision_mask = (int) 2147483647, bool p_collide_with_bodies = (bool) true, bool p_collide_with_areas = (bool) false);
Array intersect_shape(PhysicsShapeQueryParameters p_shape, int p_max_results = (int) 32);
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_PhysicsDirectSpaceState_wrapper_cast_motion(WasGoID wasgo_id, WasGoID p_shape, const uint8_t * p_motion, int p_motion_wasgo_buffer_size);
WasGoID _wasgo_PhysicsDirectSpaceState_wrapper_collide_shape(WasGoID wasgo_id, WasGoID p_shape, int p_max_results);
WasGoID _wasgo_PhysicsDirectSpaceState_wrapper_get_rest_info(WasGoID wasgo_id, WasGoID p_shape);
WasGoID _wasgo_PhysicsDirectSpaceState_wrapper_intersect_ray(WasGoID wasgo_id, const uint8_t * p_from, int p_from_wasgo_buffer_size, const uint8_t * p_to, int p_to_wasgo_buffer_size, WasGoID p_exclude, int p_collision_mask, bool p_collide_with_bodies, bool p_collide_with_areas);
WasGoID _wasgo_PhysicsDirectSpaceState_wrapper_intersect_shape(WasGoID wasgo_id, WasGoID p_shape, int p_max_results);

    //constructor wrappers
    WasGoID _wasgo_PhysicsDirectSpaceState_constructor();
            
}
#endif