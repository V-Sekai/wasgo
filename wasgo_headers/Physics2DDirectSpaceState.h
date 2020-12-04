/* THIS FILE IS GENERATED */
#ifndef PHYSICS2DDIRECTSPACESTATE_H
#define PHYSICS2DDIRECTSPACESTATE_H

#include "wasgo\wasgo.h"

#include "Vector2.h"
#include "Object.h"
#include "Physics2DShapeQueryParameters.h"
#include "Variant.h"
class Physics2DDirectSpaceState : public Object{
public:
Array cast_motion(Physics2DShapeQueryParameters p_shape);
Array collide_shape(Physics2DShapeQueryParameters p_shape, int p_max_results = (int) 32);
Dictionary get_rest_info(Physics2DShapeQueryParameters p_shape);
Array intersect_point(Vector2 p_point, int p_max_results = (int) 32, Array p_exclude = (Array) [], int p_collision_layer = (int) 2147483647, bool p_collide_with_bodies = (bool) true, bool p_collide_with_areas = (bool) false);
Array intersect_point_on_canvas(Vector2 p_point, int p_canvas_instance_id, int p_max_results = (int) 32, Array p_exclude = (Array) [], int p_collision_layer = (int) 2147483647, bool p_collide_with_bodies = (bool) true, bool p_collide_with_areas = (bool) false);
Dictionary intersect_ray(Vector2 p_from, Vector2 p_to, Array p_exclude = (Array) [], int p_collision_layer = (int) 2147483647, bool p_collide_with_bodies = (bool) true, bool p_collide_with_areas = (bool) false);
Array intersect_shape(Physics2DShapeQueryParameters p_shape, int p_max_results = (int) 32);
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_Physics2DDirectSpaceState_wrapper_cast_motion(WasGoId wasgo_id, WasGoId p_shape);
WasGoId _wasgo_Physics2DDirectSpaceState_wrapper_collide_shape(WasGoId wasgo_id, WasGoId p_shape, int p_max_results);
WasGoId _wasgo_Physics2DDirectSpaceState_wrapper_get_rest_info(WasGoId wasgo_id, WasGoId p_shape);
WasGoId _wasgo_Physics2DDirectSpaceState_wrapper_intersect_point(WasGoId wasgo_id, const uint8_t * p_point, int p_point_wasgo_buffer_size, int p_max_results, WasGoId p_exclude, int p_collision_layer, bool p_collide_with_bodies, bool p_collide_with_areas);
WasGoId _wasgo_Physics2DDirectSpaceState_wrapper_intersect_point_on_canvas(WasGoId wasgo_id, const uint8_t * p_point, int p_point_wasgo_buffer_size, int p_canvas_instance_id, int p_max_results, WasGoId p_exclude, int p_collision_layer, bool p_collide_with_bodies, bool p_collide_with_areas);
WasGoId _wasgo_Physics2DDirectSpaceState_wrapper_intersect_ray(WasGoId wasgo_id, const uint8_t * p_from, int p_from_wasgo_buffer_size, const uint8_t * p_to, int p_to_wasgo_buffer_size, WasGoId p_exclude, int p_collision_layer, bool p_collide_with_bodies, bool p_collide_with_areas);
WasGoId _wasgo_Physics2DDirectSpaceState_wrapper_intersect_shape(WasGoId wasgo_id, WasGoId p_shape, int p_max_results);

    //constructor and destructor wrappers
    WasGoId _wasgo_Physics2DDirectSpaceState_constructor();
    void _wasgo_Physics2DDirectSpaceState_destructor(WasGoId p_wasgo_id);
            
}
#endif