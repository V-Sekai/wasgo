/* THIS FILE IS GENERATED */
#ifndef REMOTETRANSFORM2D_H
#define REMOTETRANSFORM2D_H

#include "stdint.h"

#include "Node2D.h"
#include "Variant.h"
class RemoteTransform2D : public Node2D{
public: RemoteTransform2D();
void force_update_cache();
NodePath get_remote_node();
bool get_update_position();
bool get_update_rotation();
bool get_update_scale();
bool get_use_global_coordinates();
void set_remote_node(NodePath p_path);
void set_update_position(bool p_update_remote_position);
void set_update_rotation(bool p_update_remote_rotation);
void set_update_scale(bool p_update_remote_scale);
void set_use_global_coordinates(bool p_use_global_coordinates);
};
#endif