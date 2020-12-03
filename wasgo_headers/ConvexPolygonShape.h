/* THIS FILE IS GENERATED */
#ifndef CONVEXPOLYGONSHAPE_H
#define CONVEXPOLYGONSHAPE_H

#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Shape.h"
class ConvexPolygonShape : public Shape{
public:
PoolVector3Array get_points();
void set_points(PoolVector3Array p_points);

protected:
ConvexPolygonShape(WasGoId p_wasgo_id);
public:
ConvexPolygonShape();
~ConvexPolygonShape();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_ConvexPolygonShape_wrapper_get_points(WasGoId wasgo_id);
void _wasgo_ConvexPolygonShape_wrapper_set_points(WasGoId wasgo_id, WasGoId p_points);

    //constructor and destructor wrappers
    WasGoId _wasgo_ConvexPolygonShape_constructor();
    void _wasgo_ConvexPolygonShape_destructor(WasGoId p_wasgo_id);
            
}
#endif