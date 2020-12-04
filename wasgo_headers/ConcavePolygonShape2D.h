/* THIS FILE IS GENERATED */
#ifndef CONCAVEPOLYGONSHAPE2D_H
#define CONCAVEPOLYGONSHAPE2D_H

#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Shape2D.h"
class ConcavePolygonShape2D : public Shape2D{
public:
PoolVector2Array get_segments();
void set_segments(PoolVector2Array p_segments);

protected:
public:
explicit ConcavePolygonShape2D(WasGoID p_wasgo_id);
explicit ConcavePolygonShape2D(Shape2D other);
ConcavePolygonShape2D new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_ConcavePolygonShape2D_wrapper_get_segments(WasGoID wasgo_id);
void _wasgo_ConcavePolygonShape2D_wrapper_set_segments(WasGoID wasgo_id, WasGoID p_segments);

    //constructor wrappers
    WasGoID _wasgo_ConcavePolygonShape2D_constructor();
            
}
#endif