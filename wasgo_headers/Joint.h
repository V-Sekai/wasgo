/* THIS FILE IS GENERATED */
#ifndef JOINT_H
#define JOINT_H

#include "stdint.h"

#include "Variant.h"
#include "Spatial.h"
class Joint : public Spatial{
public: Joint();
bool get_exclude_nodes_from_collision();
NodePath get_node_a();
NodePath get_node_b();
int get_solver_priority();
void set_exclude_nodes_from_collision(bool p_enable);
void set_node_a(NodePath p_node);
void set_node_b(NodePath p_node);
void set_solver_priority(int p_priority);
};
#endif