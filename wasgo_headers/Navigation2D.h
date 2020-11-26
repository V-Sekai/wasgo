/* THIS FILE IS GENERATED */
#ifndef NAVIGATION2D_H
#define NAVIGATION2D_H

#include <stdint.h>

#include "Vector2.h"
#include "PoolVector2Array.h"
#include "Node2D.h"
#include "NavigationPolygon.h"
#include "Transform2D.h"
#include "Object.h"
class Navigation2D : public Node2D{
public: Navigation2D();
Vector2  get_closest_point(Vector2 to_point);
Object  get_closest_point_owner(Vector2 to_point);
PoolVector2Array  get_simple_path(Vector2 start, Vector2 end, bool optimize = true);
int  navpoly_add(NavigationPolygon mesh, Transform2D xform, Object owner = null);
void  navpoly_remove(int id);
void  navpoly_set_transform(int id, Transform2D xform);
};
#endif