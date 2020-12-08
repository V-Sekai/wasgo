/* THIS FILE IS GENERATED */
#ifndef JOINT_H
#define JOINT_H

#include "wasgo\wasgoid.h"

#include "Spatial.h"
#include "NodePath.h"
class Joint : public Spatial{
public:
bool get_exclude_nodes_from_collision();
NodePath get_node_a();
NodePath get_node_b();
int get_solver_priority();
void set_exclude_nodes_from_collision(bool p_enable);
void set_node_a(NodePath p_node);
void set_node_b(NodePath p_node);
void set_solver_priority(int p_priority);

protected:
public:
explicit Joint(WasGoID p_wasgo_id);
explicit Joint(Spatial other);
Joint();
Joint new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_Joint_wrapper_get_exclude_nodes_from_collision(WasGoID wasgo_id);
void _wasgo_Joint_wrapper_get_node_a(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Joint_wrapper_get_node_b(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Joint_wrapper_get_solver_priority(WasGoID wasgo_id);
void _wasgo_Joint_wrapper_set_exclude_nodes_from_collision(WasGoID wasgo_id, bool p_enable);
void _wasgo_Joint_wrapper_set_node_a(WasGoID wasgo_id, const uint8_t * p_node, int p_node_wasgo_buffer_size);
void _wasgo_Joint_wrapper_set_node_b(WasGoID wasgo_id, const uint8_t * p_node, int p_node_wasgo_buffer_size);
void _wasgo_Joint_wrapper_set_solver_priority(WasGoID wasgo_id, int p_priority);

    //constructor wrappers
    WasGoID _wasgo_Joint_constructor();
            
}
#endif