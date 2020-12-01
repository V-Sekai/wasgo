/* THIS FILE IS GENERATED */
#ifndef CONCAVEPOLYGONSHAPE_H
#define CONCAVEPOLYGONSHAPE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Shape.h"
class ConcavePolygonShape : public Shape{
public:
PoolVector3Array get_faces();
void set_faces(PoolVector3Array p_faces);

ConcavePolygonShape(WasGoId p_wasgo_id);
~ConcavePolygonShape();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_ConcavePolygonShape_wrapper_get_faces(WasGoId wasgo_id);
void _wasgo_ConcavePolygonShape_wrapper_set_faces(WasGoId wasgo_id, WasGoId p_faces);
}
#endif