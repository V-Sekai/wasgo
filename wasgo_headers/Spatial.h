/* THIS FILE IS GENERATED */
#ifndef SPATIAL_H
#define SPATIAL_H

#include "stdint.h"

#include "Variant.h"
#include "World.h"
#include "Node.h"
class Spatial : public Node{
public: Spatial();
void force_update_transform();
Transform get_global_transform();
Spatial get_parent_spatial();
Vector3 get_rotation();
Vector3 get_rotation_degrees();
Vector3 get_scale();
Transform get_transform();
Vector3 get_translation();
World get_world();
bool is_scale_disabled();
bool is_set_as_toplevel();
void set_as_toplevel(bool p_enable);
void set_disable_scale(bool p_disable);
void set_global_transform(Transform p_global);
void set_ignore_transform_notification(bool p_enabled);
void set_rotation(Vector3 p_euler);
void set_rotation_degrees(Vector3 p_euler_degrees);
void set_scale(Vector3 p_scale);
void set_transform(Transform p_local);
void set_translation(Vector3 p_translation);
};
#endif