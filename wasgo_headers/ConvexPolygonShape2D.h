/* THIS FILE IS GENERATED */
#ifndef CONVEXPOLYGONSHAPE2D_H
#define CONVEXPOLYGONSHAPE2D_H

#include "wasgo\wasgoid.h"

#include "Shape2D.h"
#include "Variant.h"
class ConvexPolygonShape2D : public Shape2D{
public:
PoolVector2Array get_points();
void set_point_cloud(PoolVector2Array p_point_cloud);
void set_points(PoolVector2Array p_points);

protected:
public:
explicit ConvexPolygonShape2D(WasGoID p_wasgo_id);
explicit ConvexPolygonShape2D(Shape2D other);
ConvexPolygonShape2D();
ConvexPolygonShape2D new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_ConvexPolygonShape2D_wrapper_get_points(WasGoID wasgo_id);
void _wasgo_ConvexPolygonShape2D_wrapper_set_point_cloud(WasGoID wasgo_id, WasGoID p_point_cloud);
void _wasgo_ConvexPolygonShape2D_wrapper_set_points(WasGoID wasgo_id, WasGoID p_points);

    //constructor wrappers
    WasGoID _wasgo_ConvexPolygonShape2D_constructor();
            
}
#endif