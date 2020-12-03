/* THIS FILE IS GENERATED */
#ifndef NAVIGATION_H
#define NAVIGATION_H

#include "wasgo\wasgo.h"

#include "Transform.h"
#include "Spatial.h"
#include "Object.h"
#include "NavigationMesh.h"
#include "Variant.h"
#include "Vector3.h"
class Navigation : public Spatial{
public:
Vector3 get_closest_point(Vector3 p_to_point);
Vector3 get_closest_point_normal(Vector3 p_to_point);
Object get_closest_point_owner(Vector3 p_to_point);
Vector3 get_closest_point_to_segment(Vector3 p_start, Vector3 p_end, bool p_use_collision = (bool) false);
PoolVector3Array get_simple_path(Vector3 p_start, Vector3 p_end, bool p_optimize = (bool) true);
Vector3 get_up_vector();
int navmesh_add(NavigationMesh p_mesh, Transform p_xform, Object p_owner = (Object) "");
void navmesh_remove(int p_id);
void navmesh_set_transform(int p_id, Transform p_xform);
void set_up_vector(Vector3 p_up);

protected:
Navigation(WasGoId p_wasgo_id);
public:
Navigation();
~Navigation();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Navigation_wrapper_get_closest_point(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_to_point, int p_to_point_wasgo_buffer_size);
void _wasgo_Navigation_wrapper_get_closest_point_normal(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_to_point, int p_to_point_wasgo_buffer_size);
WasGoId _wasgo_Navigation_wrapper_get_closest_point_owner(WasGoId wasgo_id, const uint8_t * p_to_point, int p_to_point_wasgo_buffer_size);
void _wasgo_Navigation_wrapper_get_closest_point_to_segment(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_start, int p_start_wasgo_buffer_size, const uint8_t * p_end, int p_end_wasgo_buffer_size, bool p_use_collision);
WasGoId _wasgo_Navigation_wrapper_get_simple_path(WasGoId wasgo_id, const uint8_t * p_start, int p_start_wasgo_buffer_size, const uint8_t * p_end, int p_end_wasgo_buffer_size, bool p_optimize);
void _wasgo_Navigation_wrapper_get_up_vector(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Navigation_wrapper_navmesh_add(WasGoId wasgo_id, WasGoId p_mesh, const uint8_t * p_xform, int p_xform_wasgo_buffer_size, WasGoId p_owner);
void _wasgo_Navigation_wrapper_navmesh_remove(WasGoId wasgo_id, int p_id);
void _wasgo_Navigation_wrapper_navmesh_set_transform(WasGoId wasgo_id, int p_id, const uint8_t * p_xform, int p_xform_wasgo_buffer_size);
void _wasgo_Navigation_wrapper_set_up_vector(WasGoId wasgo_id, const uint8_t * p_up, int p_up_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_Navigation_constructor();
    void _wasgo_Navigation_destructor(WasGoId p_wasgo_id);
            
}
#endif