/* THIS FILE IS GENERATED */
#ifndef CONVEXPOLYGONSHAPE2D_H
#define CONVEXPOLYGONSHAPE2D_H

#include "wasgo\wasgo.h"

#include "Shape2D.h"
#include "Variant.h"
class ConvexPolygonShape2D : public Shape2D{
public:
PoolVector2Array get_points();
void set_point_cloud(PoolVector2Array p_point_cloud);
void set_points(PoolVector2Array p_points);

protected:
ConvexPolygonShape2D(WasGoId p_wasgo_id);
public:
ConvexPolygonShape2D();
~ConvexPolygonShape2D();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_ConvexPolygonShape2D_wrapper_get_points(WasGoId wasgo_id);
void _wasgo_ConvexPolygonShape2D_wrapper_set_point_cloud(WasGoId wasgo_id, WasGoId p_point_cloud);
void _wasgo_ConvexPolygonShape2D_wrapper_set_points(WasGoId wasgo_id, WasGoId p_points);

    //constructor and destructor wrappers
    WasGoId _wasgo_ConvexPolygonShape2D_constructor();
    void _wasgo_ConvexPolygonShape2D_destructor(WasGoId p_wasgo_id);
            
}
#endif