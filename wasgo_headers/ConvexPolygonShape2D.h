/* THIS FILE IS GENERATED */
#ifndef CONVEXPOLYGONSHAPE2D_H
#define CONVEXPOLYGONSHAPE2D_H

#include "stdint.h"

#include "Variant.h"
#include "Shape2D.h"
class ConvexPolygonShape2D : public Shape2D{
public: ConvexPolygonShape2D();
PoolVector2Array get_points();
void set_point_cloud(PoolVector2Array p_point_cloud);
void set_points(PoolVector2Array p_points);
};
#endif