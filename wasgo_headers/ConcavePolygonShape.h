/* THIS FILE IS GENERATED */
#ifndef CONCAVEPOLYGONSHAPE_H
#define CONCAVEPOLYGONSHAPE_H

#include "wasgo\wasgo.h"

#include "Shape.h"
#include "Variant.h"
class ConcavePolygonShape : public Shape{
public:
PoolVector3Array get_faces();
void set_faces(PoolVector3Array p_faces);

protected:
ConcavePolygonShape(WasGoId p_wasgo_id);
public:
ConcavePolygonShape();
~ConcavePolygonShape();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_ConcavePolygonShape_wrapper_get_faces(WasGoId wasgo_id);
void _wasgo_ConcavePolygonShape_wrapper_set_faces(WasGoId wasgo_id, WasGoId p_faces);

    //constructor and destructor wrappers
    WasGoId _wasgo_ConcavePolygonShape_constructor();
    void _wasgo_ConcavePolygonShape_destructor(WasGoId p_wasgo_id);
            
}
#endif