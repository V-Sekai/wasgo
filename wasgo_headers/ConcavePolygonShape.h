/* THIS FILE IS GENERATED */
#ifndef CONCAVEPOLYGONSHAPE_H
#define CONCAVEPOLYGONSHAPE_H

#include <stdint.h>

#include "Shape.h"
#include "PoolVector3Array.h"
class ConcavePolygonShape : public Shape{
public: ConcavePolygonShape();
PoolVector3Array  get_faces();
PoolVector3Array  get_faces();
void  set_faces(PoolVector3Array faces);
};
#endif