/* THIS FILE IS GENERATED */
#ifndef NAVIGATION_H
#define NAVIGATION_H

#include <stdint.h>

#include "Transform.h"
#include "PoolVector3Array.h"
#include "Spatial.h"
#include "Object.h"
#include "Vector3.h"
#include "NavigationMesh.h"
class Navigation : public Spatial{
public: Navigation();
Vector3  get_closest_point(Vector3 to_point);
Vector3  get_closest_point_normal(Vector3 to_point);
Object  get_closest_point_owner(Vector3 to_point);
Vector3  get_closest_point_to_segment(Vector3 start, Vector3 end, bool use_collision = false);
PoolVector3Array  get_simple_path(Vector3 start, Vector3 end, bool optimize = true);
Vector3  get_up_vector();
Vector3  get_up_vector();
int  navmesh_add(NavigationMesh mesh, Transform xform, Object owner = null);
void  navmesh_remove(int id);
void  navmesh_set_transform(int id, Transform xform);
void  set_up_vector(Vector3 up);
};
#endif