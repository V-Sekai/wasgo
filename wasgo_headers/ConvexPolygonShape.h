/* THIS FILE IS GENERATED */
#ifndef CONVEXPOLYGONSHAPE_H
#define CONVEXPOLYGONSHAPE_H

#include "wasgo\wasgo.h"

#include "Shape.h"
#include "Variant.h"
class ConvexPolygonShape : public Shape{
public:
PoolVector3Array get_points();
void set_points(PoolVector3Array p_points);

protected:
public:
explicit ConvexPolygonShape(WasGoId p_wasgo_id);
explicit ConvexPolygonShape(Shape other);
ConvexPolygonShape new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_ConvexPolygonShape_wrapper_get_points(WasGoId wasgo_id);
void _wasgo_ConvexPolygonShape_wrapper_set_points(WasGoId wasgo_id, WasGoId p_points);

    //constructor wrappers
    WasGoId _wasgo_ConvexPolygonShape_constructor();
            
}
#endif