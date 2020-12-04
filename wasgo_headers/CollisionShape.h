/* THIS FILE IS GENERATED */
#ifndef COLLISIONSHAPE_H
#define COLLISIONSHAPE_H

#include "wasgo\wasgo.h"

#include "Spatial.h"
#include "Shape.h"
#include "Resource.h"
class CollisionShape : public Spatial{
public:
Shape get_shape();
bool is_disabled();
void make_convex_from_brothers();
void resource_changed(Resource p_resource);
void set_disabled(bool p_enable);
void set_shape(Shape p_shape);

protected:
public:
explicit CollisionShape(WasGoID p_wasgo_id);
explicit CollisionShape(Spatial other);
CollisionShape new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_CollisionShape_wrapper_get_shape(WasGoID wasgo_id);
int _wasgo_CollisionShape_wrapper_is_disabled(WasGoID wasgo_id);
void _wasgo_CollisionShape_wrapper_make_convex_from_brothers(WasGoID wasgo_id);
void _wasgo_CollisionShape_wrapper_resource_changed(WasGoID wasgo_id, WasGoID p_resource);
void _wasgo_CollisionShape_wrapper_set_disabled(WasGoID wasgo_id, bool p_enable);
void _wasgo_CollisionShape_wrapper_set_shape(WasGoID wasgo_id, WasGoID p_shape);

    //constructor wrappers
    WasGoID _wasgo_CollisionShape_constructor();
            
}
#endif