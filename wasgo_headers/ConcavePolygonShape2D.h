/* THIS FILE IS GENERATED */
#ifndef CONCAVEPOLYGONSHAPE2D_H
#define CONCAVEPOLYGONSHAPE2D_H

#include <stdint.h>

#include "Shape2D.h"
#include "PoolVector2Array.h"
class ConcavePolygonShape2D : public Shape2D{
public: ConcavePolygonShape2D();
PoolVector2Array  get_segments();
PoolVector2Array  get_segments();
void  set_segments(PoolVector2Array segments);
};
#endif