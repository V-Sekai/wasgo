/* THIS FILE IS GENERATED */
#ifndef PHYSICSDIRECTSPACESTATE_H
#define PHYSICSDIRECTSPACESTATE_H

#include "wasgo\wasgo.h"

#include "Object.h"
#include "Vector3.h"
#include "PhysicsShapeQueryParameters.h"
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
WasGoId _wasgo_PhysicsDirectSpaceState_wrapper_cast_motion(WasGoId wasgo_id, WasGoId p_shape, const uint8_t * p_motion, int p_motion_wasgo_buffer_size);
WasGoId _wasgo_PhysicsDirectSpaceState_wrapper_collide_shape(WasGoId wasgo_id, WasGoId p_shape, int p_max_results);
WasGoId _wasgo_PhysicsDirectSpaceState_wrapper_get_rest_info(WasGoId wasgo_id, WasGoId p_shape);
WasGoId _wasgo_PhysicsDirectSpaceState_wrapper_intersect_ray(WasGoId wasgo_id, const uint8_t * p_from, int p_from_wasgo_buffer_size, const uint8_t * p_to, int p_to_wasgo_buffer_size, WasGoId p_exclude, int p_collision_mask, bool p_collide_with_bodies, bool p_collide_with_areas);
WasGoId _wasgo_PhysicsDirectSpaceState_wrapper_intersect_shape(WasGoId wasgo_id, WasGoId p_shape, int p_max_results);

    //constructor and destructor wrappers
    WasGoId _wasgo_PhysicsDirectSpaceState_constructor();
    void _wasgo_PhysicsDirectSpaceState_destructor(WasGoId p_wasgo_id);
            
}
#endif