/* THIS FILE IS GENERATED */
#ifndef COLLISIONSHAPE_H
#define COLLISIONSHAPE_H

#include "stdint.h"

#include "Resource.h"
#include "Spatial.h"
#include "Shape.h"
class CollisionShape : public Spatial{
public: CollisionShape();
Shape get_shape();
bool is_disabled();
void make_convex_from_brothers();
void resource_changed(Resource p_resource);
void set_disabled(bool p_enable);
void set_shape(Shape p_shape);
};
#endif