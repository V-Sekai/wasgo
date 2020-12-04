/* THIS FILE IS GENERATED */
#ifndef CONCAVEPOLYGONSHAPE2D_H
#define CONCAVEPOLYGONSHAPE2D_H

#include "wasgo\wasgo.h"

#include "Shape2D.h"
#include "Variant.h"
class ConcavePolygonShape2D : public Shape2D{
public:
PoolVector2Array get_segments();
void set_segments(PoolVector2Array p_segments);

protected:
public:
explicit ConcavePolygonShape2D(WasGoId p_wasgo_id);
explicit ConcavePolygonShape2D(Shape2D other);
ConcavePolygonShape2D new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_ConcavePolygonShape2D_wrapper_get_segments(WasGoId wasgo_id);
void _wasgo_ConcavePolygonShape2D_wrapper_set_segments(WasGoId wasgo_id, WasGoId p_segments);

    //constructor wrappers
    WasGoId _wasgo_ConcavePolygonShape2D_constructor();
            
}
#endif