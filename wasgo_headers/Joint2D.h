/* THIS FILE IS GENERATED */
#ifndef JOINT2D_H
#define JOINT2D_H

#include "wasgo\wasgoid.h"

#include "NodePath.h"
#include "Node2D.h"
class Joint2D : public Node2D{
public:
float get_bias();
bool get_exclude_nodes_from_collision();
NodePath get_node_a();
NodePath get_node_b();
void set_bias(float p_bias);
void set_exclude_nodes_from_collision(bool p_enable);
void set_node_a(NodePath p_node);
void set_node_b(NodePath p_node);

protected:
public:
explicit Joint2D(WasGoID p_wasgo_id);
explicit Joint2D(Node2D other);
Joint2D();
Joint2D new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_Joint2D_wrapper_get_bias(WasGoID wasgo_id);
int _wasgo_Joint2D_wrapper_get_exclude_nodes_from_collision(WasGoID wasgo_id);
void _wasgo_Joint2D_wrapper_get_node_a(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Joint2D_wrapper_get_node_b(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Joint2D_wrapper_set_bias(WasGoID wasgo_id, float p_bias);
void _wasgo_Joint2D_wrapper_set_exclude_nodes_from_collision(WasGoID wasgo_id, bool p_enable);
void _wasgo_Joint2D_wrapper_set_node_a(WasGoID wasgo_id, const uint8_t * p_node, int p_node_wasgo_buffer_size);
void _wasgo_Joint2D_wrapper_set_node_b(WasGoID wasgo_id, const uint8_t * p_node, int p_node_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_Joint2D_constructor();
            
}
#endif