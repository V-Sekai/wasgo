/* THIS FILE IS GENERATED */
#ifndef JOINT_H
#define JOINT_H

#include <stdint.h>

#include "Spatial.h"
#include "NodePath.h"
class Joint : public Spatial{
public: Joint();
bool  get_exclude_nodes_from_collision();
bool  get_exclude_nodes_from_collision();
NodePath  get_node_a();
NodePath  get_node_a();
NodePath  get_node_b();
NodePath  get_node_b();
int  get_solver_priority();
int  get_solver_priority();
void  set_exclude_nodes_from_collision(bool enable);
void  set_node_a(NodePath node);
void  set_node_b(NodePath node);
void  set_solver_priority(int priority);
};
#endif