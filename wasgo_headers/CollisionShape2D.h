/* THIS FILE IS GENERATED */
#ifndef COLLISIONSHAPE2D_H
#define COLLISIONSHAPE2D_H

#include "wasgo\wasgo.h"

#include "Node2D.h"
#include "Shape2D.h"
class CollisionShape2D : public Node2D{
public:
float get_one_way_collision_margin();
Shape2D get_shape();
bool is_disabled();
bool is_one_way_collision_enabled();
void set_disabled(bool p_disabled);
void set_one_way_collision(bool p_enabled);
void set_one_way_collision_margin(float p_margin);
void set_shape(Shape2D p_shape);

protected:
public:
explicit CollisionShape2D(WasGoID p_wasgo_id);
explicit CollisionShape2D(Node2D other);
CollisionShape2D new_instance();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_CollisionShape2D_wrapper_get_one_way_collision_margin(WasGoID wasgo_id);
WasGoID _wasgo_CollisionShape2D_wrapper_get_shape(WasGoID wasgo_id);
int _wasgo_CollisionShape2D_wrapper_is_disabled(WasGoID wasgo_id);
int _wasgo_CollisionShape2D_wrapper_is_one_way_collision_enabled(WasGoID wasgo_id);
void _wasgo_CollisionShape2D_wrapper_set_disabled(WasGoID wasgo_id, bool p_disabled);
void _wasgo_CollisionShape2D_wrapper_set_one_way_collision(WasGoID wasgo_id, bool p_enabled);
void _wasgo_CollisionShape2D_wrapper_set_one_way_collision_margin(WasGoID wasgo_id, float p_margin);
void _wasgo_CollisionShape2D_wrapper_set_shape(WasGoID wasgo_id, WasGoID p_shape);

    //constructor wrappers
    WasGoID _wasgo_CollisionShape2D_constructor();
            
}
#endif