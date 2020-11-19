/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Shape.h"
#include "Resource.h"
#include "Spatial.h"
class CollisionShape : public Spatial{
public: CollisionShape();
void  _shape_changed();
void  _shape_changed();
void  _update_debug_shape();
void  _update_debug_shape();
Shape  get_shape();
Shape  get_shape();
bool  is_disabled();
bool  is_disabled();
void  make_convex_from_brothers();
void  make_convex_from_brothers();
void  resource_changed(Resource resource);
void  set_disabled(bool enable);
void  set_shape(Shape shape);
};