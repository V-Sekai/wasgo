/* THIS FILE IS GENERATED */
#ifndef NAVIGATION_H
#define NAVIGATION_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "NavigationMesh.h"
#include "Variant.h"
#include "Object.h"
#include "Spatial.h"
class Navigation : public Spatial{
Vector3 get_closest_point(Vector3 p_to_point);
Vector3 get_closest_point_normal(Vector3 p_to_point);
Object get_closest_point_owner(Vector3 p_to_point);
Vector3 get_closest_point_to_segment(Vector3 p_start, Vector3 p_end, bool p_use_collision = (bool) False);
PoolVector3Array get_simple_path(Vector3 p_start, Vector3 p_end, bool p_optimize = (bool) True);
Vector3 get_up_vector();
int navmesh_add(NavigationMesh p_mesh, Transform p_xform, Object p_owner = (Object) "");
void navmesh_remove(int p_id);
void navmesh_set_transform(int p_id, Transform p_xform);
void set_up_vector(Vector3 p_up);

Navigation(WasGoId p_wasgo_id);
~Navigation();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_Navigation_wrapper_get_closest_point(WasGoId wasgo_id, WasGo::WasGoId p_to_point);
WasGo::WasGoId _wasgo_Navigation_wrapper_get_closest_point_normal(WasGoId wasgo_id, WasGo::WasGoId p_to_point);
WasGo::WasGoId _wasgo_Navigation_wrapper_get_closest_point_owner(WasGoId wasgo_id, WasGo::WasGoId p_to_point);
WasGo::WasGoId _wasgo_Navigation_wrapper_get_closest_point_to_segment(WasGoId wasgo_id, WasGo::WasGoId p_start, WasGo::WasGoId p_end, bool p_use_collision);
WasGo::WasGoId _wasgo_Navigation_wrapper_get_simple_path(WasGoId wasgo_id, WasGo::WasGoId p_start, WasGo::WasGoId p_end, bool p_optimize);
WasGo::WasGoId _wasgo_Navigation_wrapper_get_up_vector(WasGoId wasgo_id);
int _wasgo_Navigation_wrapper_navmesh_add(WasGoId wasgo_id, WasGo::WasGoId p_mesh, WasGo::WasGoId p_xform, WasGo::WasGoId p_owner);
void _wasgo_Navigation_wrapper_navmesh_remove(WasGoId wasgo_id, int p_id);
void _wasgo_Navigation_wrapper_navmesh_set_transform(WasGoId wasgo_id, int p_id, WasGo::WasGoId p_xform);
void _wasgo_Navigation_wrapper_set_up_vector(WasGoId wasgo_id, WasGo::WasGoId p_up);
}
#endif