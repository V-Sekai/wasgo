/* THIS FILE IS GENERATED */
#ifndef CONVEXPOLYGONSHAPE2D_H
#define CONVEXPOLYGONSHAPE2D_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Shape2D.h"
class ConvexPolygonShape2D : public Shape2D{
PoolVector2Array get_points();
void set_point_cloud(PoolVector2Array p_point_cloud);
void set_points(PoolVector2Array p_points);

ConvexPolygonShape2D(WasGoId p_wasgo_id);
~ConvexPolygonShape2D();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_ConvexPolygonShape2D_wrapper_get_points(WasGoId wasgo_id);
void _wasgo_ConvexPolygonShape2D_wrapper_set_point_cloud(WasGoId wasgo_id, WasGo::WasGoId p_point_cloud);
void _wasgo_ConvexPolygonShape2D_wrapper_set_points(WasGoId wasgo_id, WasGo::WasGoId p_points);
}
#endif