/* THIS FILE IS GENERATED */
#ifndef NAVIGATION2D_H
#define NAVIGATION2D_H

#include "stdint.h"

#include "Node2D.h"
#include "Variant.h"
#include "NavigationPolygon.h"
#include "Object.h"
class Navigation2D : public Node2D{
public: Navigation2D();
Vector2 get_closest_point(Vector2 p_to_point);
Object get_closest_point_owner(Vector2 p_to_point);
PoolVector2Array get_simple_path(Vector2 p_start, Vector2 p_end, bool p_optimize = (bool) True);
int navpoly_add(NavigationPolygon p_mesh, Transform2D p_xform, Object p_owner = (Object) "");
void navpoly_remove(int p_id);
void navpoly_set_transform(int p_id, Transform2D p_xform);
};
#endif