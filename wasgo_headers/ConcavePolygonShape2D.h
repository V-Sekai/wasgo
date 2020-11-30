/* THIS FILE IS GENERATED */
#ifndef CONCAVEPOLYGONSHAPE2D_H
#define CONCAVEPOLYGONSHAPE2D_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Shape2D.h"
class ConcavePolygonShape2D : public Shape2D{
PoolVector2Array get_segments();
void set_segments(PoolVector2Array p_segments);

ConcavePolygonShape2D(WasGoId p_wasgo_id);
~ConcavePolygonShape2D();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_ConcavePolygonShape2D_wrapper_get_segments(WasGoId wasgo_id);
void _wasgo_ConcavePolygonShape2D_wrapper_set_segments(WasGoId wasgo_id, WasGo::WasGoId p_segments);
}
#endif