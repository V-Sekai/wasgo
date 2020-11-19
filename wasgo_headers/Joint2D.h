/* THIS FILE IS GENERATED */
#ifndef JOINT2D_H
#define JOINT2D_H

#include <stdint.h>

#include "NodePath.h"
#include "Node2D.h"
class Joint2D : public Node2D{
public: Joint2D();
float  get_bias();
float  get_bias();
bool  get_exclude_nodes_from_collision();
bool  get_exclude_nodes_from_collision();
NodePath  get_node_a();
NodePath  get_node_a();
NodePath  get_node_b();
NodePath  get_node_b();
void  set_bias(float bias);
void  set_exclude_nodes_from_collision(bool enable);
void  set_node_a(NodePath node);
void  set_node_b(NodePath node);
};
#endif