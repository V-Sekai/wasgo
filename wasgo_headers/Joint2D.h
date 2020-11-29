/* THIS FILE IS GENERATED */
#ifndef JOINT2D_H
#define JOINT2D_H

#include "stdint.h"

#include "Node2D.h"
#include "Variant.h"
class Joint2D : public Node2D{
public: Joint2D();
float get_bias();
bool get_exclude_nodes_from_collision();
NodePath get_node_a();
NodePath get_node_b();
void set_bias(float p_bias);
void set_exclude_nodes_from_collision(bool p_enable);
void set_node_a(NodePath p_node);
void set_node_b(NodePath p_node);
};
#endif