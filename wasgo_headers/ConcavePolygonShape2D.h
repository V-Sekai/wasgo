/* THIS FILE IS GENERATED */
#ifndef CONCAVEPOLYGONSHAPE2D_H
#define CONCAVEPOLYGONSHAPE2D_H

#include "stdint.h"

#include "Variant.h"
#include "Shape2D.h"
class ConcavePolygonShape2D : public Shape2D{
public: ConcavePolygonShape2D();
PoolVector2Array get_segments();
void set_segments(PoolVector2Array p_segments);
};
#endif