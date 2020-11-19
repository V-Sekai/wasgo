/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "RID.h"
#include "Transform.h"
#include "Reference.h"
#include "Resource.h"
#include "Variant.h"
class PhysicsShapeQueryParameters : public Reference{
public: PhysicsShapeQueryParameters();
int  get_collision_mask();
int  get_collision_mask();
Array  get_exclude();
Array  get_exclude();
float  get_margin();
float  get_margin();
RID  get_shape_rid();
RID  get_shape_rid();
Transform  get_transform();
Transform  get_transform();
bool  is_collide_with_areas_enabled();
bool  is_collide_with_areas_enabled();
bool  is_collide_with_bodies_enabled();
bool  is_collide_with_bodies_enabled();
void  set_collide_with_areas(bool enable);
void  set_collide_with_bodies(bool enable);
void  set_collision_mask(int collision_mask);
void  set_exclude(Array exclude);
void  set_margin(float margin);
void  set_shape(Resource shape);
void  set_shape_rid(RID shape);
void  set_transform(Transform transform);
};