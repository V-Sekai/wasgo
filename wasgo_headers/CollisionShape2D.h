/* THIS FILE IS GENERATED */
#ifndef COLLISIONSHAPE2D_H
#define COLLISIONSHAPE2D_H

#include "stdint.h"

#include "Node2D.h"
#include "Shape2D.h"
class CollisionShape2D : public Node2D{
public: CollisionShape2D();
float get_one_way_collision_margin();
Shape2D get_shape();
bool is_disabled();
bool is_one_way_collision_enabled();
void set_disabled(bool p_disabled);
void set_one_way_collision(bool p_enabled);
void set_one_way_collision_margin(float p_margin);
void set_shape(Shape2D p_shape);
};
#endif