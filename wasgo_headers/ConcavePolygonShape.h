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
public:
explicit ConcavePolygonShape(WasGoID p_wasgo_id);
explicit ConcavePolygonShape(Shape other);
ConcavePolygonShape new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_ConcavePolygonShape_wrapper_get_faces(WasGoID wasgo_id);
void _wasgo_ConcavePolygonShape_wrapper_set_faces(WasGoID wasgo_id, WasGoID p_faces);

    //constructor wrappers
    WasGoID _wasgo_ConcavePolygonShape_constructor();
            
}
#endif