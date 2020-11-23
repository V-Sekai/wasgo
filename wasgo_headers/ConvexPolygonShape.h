/* THIS FILE IS GENERATED */
#ifndef CONVEXPOLYGONSHAPE_H
#define CONVEXPOLYGONSHAPE_H

#include <stdint.h>

#include "Shape.h"
#include "PoolVector3Array.h"
class ConvexPolygonShape : public Shape{
public: ConvexPolygonShape();
PoolVector3Array  get_points();
PoolVector3Array  get_points();
void  set_points(PoolVector3Array points);
};
#endif