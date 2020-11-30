/* THIS FILE IS GENERATED */
#ifndef COLLISIONSHAPE2D_H
#define COLLISIONSHAPE2D_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Node2D.h"
#include "Shape2D.h"
class CollisionShape2D : public Node2D{
float get_one_way_collision_margin();
Shape2D get_shape();
bool is_disabled();
bool is_one_way_collision_enabled();
void set_disabled(bool p_disabled);
void set_one_way_collision(bool p_enabled);
void set_one_way_collision_margin(float p_margin);
void set_shape(Shape2D p_shape);

CollisionShape2D(WasGoId p_wasgo_id);
~CollisionShape2D();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_CollisionShape2D_wrapper_get_one_way_collision_margin(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_CollisionShape2D_wrapper_get_shape(WasGoId wasgo_id);
int _wasgo_CollisionShape2D_wrapper_is_disabled(WasGoId wasgo_id);
int _wasgo_CollisionShape2D_wrapper_is_one_way_collision_enabled(WasGoId wasgo_id);
void _wasgo_CollisionShape2D_wrapper_set_disabled(WasGoId wasgo_id, bool p_disabled);
void _wasgo_CollisionShape2D_wrapper_set_one_way_collision(WasGoId wasgo_id, bool p_enabled);
void _wasgo_CollisionShape2D_wrapper_set_one_way_collision_margin(WasGoId wasgo_id, float p_margin);
void _wasgo_CollisionShape2D_wrapper_set_shape(WasGoId wasgo_id, WasGo::WasGoId p_shape);
}
#endif