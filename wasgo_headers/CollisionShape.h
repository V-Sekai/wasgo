/* THIS FILE IS GENERATED */
#ifndef COLLISIONSHAPE_H
#define COLLISIONSHAPE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Spatial.h"
#include "Resource.h"
#include "Shape.h"
class CollisionShape : public Spatial{
public:
Shape get_shape();
bool is_disabled();
void make_convex_from_brothers();
void resource_changed(Resource p_resource);
void set_disabled(bool p_enable);
void set_shape(Shape p_shape);

CollisionShape(WasGoId p_wasgo_id);
~CollisionShape();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_CollisionShape_wrapper_get_shape(WasGoId wasgo_id);
int _wasgo_CollisionShape_wrapper_is_disabled(WasGoId wasgo_id);
void _wasgo_CollisionShape_wrapper_make_convex_from_brothers(WasGoId wasgo_id);
void _wasgo_CollisionShape_wrapper_resource_changed(WasGoId wasgo_id, WasGoId p_resource);
void _wasgo_CollisionShape_wrapper_set_disabled(WasGoId wasgo_id, bool p_enable);
void _wasgo_CollisionShape_wrapper_set_shape(WasGoId wasgo_id, WasGoId p_shape);
}
#endif