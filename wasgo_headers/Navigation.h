/* THIS FILE IS GENERATED */
#ifndef NAVIGATION_H
#define NAVIGATION_H

#include "stdint.h"

#include "Variant.h"
#include "Spatial.h"
#include "NavigationMesh.h"
#include "Object.h"
class Navigation : public Spatial{
public: Navigation();
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
};
#endif