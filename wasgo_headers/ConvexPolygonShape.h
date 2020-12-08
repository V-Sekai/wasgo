/* THIS FILE IS GENERATED */
#ifndef CONVEXPOLYGONSHAPE_H
#define CONVEXPOLYGONSHAPE_H

#include "wasgo\wasgoid.h"

#include "Variant.h"
#include "Shape.h"
class ConvexPolygonShape : public Shape{
public:
PoolVector3Array get_points();
void set_points(PoolVector3Array p_points);

protected:
public:
explicit ConvexPolygonShape(WasGoID p_wasgo_id);
explicit ConvexPolygonShape(Shape other);
ConvexPolygonShape();
ConvexPolygonShape new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_ConvexPolygonShape_wrapper_get_points(WasGoID wasgo_id);
void _wasgo_ConvexPolygonShape_wrapper_set_points(WasGoID wasgo_id, WasGoID p_points);

    //constructor wrappers
    WasGoID _wasgo_ConvexPolygonShape_constructor();
            
}
#endif