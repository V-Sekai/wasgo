/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Node2D.h"
#include "Shape2D.h"
class CollisionShape2D : public Node2D{
public: CollisionShape2D();
void  _shape_changed();
void  _shape_changed();
float  get_one_way_collision_margin();
float  get_one_way_collision_margin();
Shape2D  get_shape();
Shape2D  get_shape();
bool  is_disabled();
bool  is_disabled();
bool  is_one_way_collision_enabled();
bool  is_one_way_collision_enabled();
void  set_disabled(bool disabled);
void  set_one_way_collision(bool enabled);
void  set_one_way_collision_margin(float margin);
void  set_shape(Shape2D shape);
};