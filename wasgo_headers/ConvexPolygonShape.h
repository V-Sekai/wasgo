/* THIS FILE IS GENERATED */
#ifndef CONVEXPOLYGONSHAPE_H
#define CONVEXPOLYGONSHAPE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Shape.h"
class ConvexPolygonShape : public Shape{
PoolVector3Array get_points();
void set_points(PoolVector3Array p_points);

ConvexPolygonShape(WasGoId p_wasgo_id);
~ConvexPolygonShape();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_ConvexPolygonShape_wrapper_get_points(WasGoId wasgo_id);
void _wasgo_ConvexPolygonShape_wrapper_set_points(WasGoId wasgo_id, WasGo::WasGoId p_points);
}
#endif