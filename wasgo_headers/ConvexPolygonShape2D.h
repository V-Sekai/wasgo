/* THIS FILE IS GENERATED */
#ifndef CONVEXPOLYGONSHAPE2D_H
#define CONVEXPOLYGONSHAPE2D_H

#include <stdint.h>

#include "Shape2D.h"
#include "PoolVector2Array.h"
class ConvexPolygonShape2D : public Shape2D{
public: ConvexPolygonShape2D();
PoolVector2Array  get_points();
PoolVector2Array  get_points();
void  set_point_cloud(PoolVector2Array point_cloud);
void  set_points(PoolVector2Array points);
};
#endif