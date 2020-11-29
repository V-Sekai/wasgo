/* THIS FILE IS GENERATED */
#ifndef NODE2D_H
#define NODE2D_H

#include "stdint.h"

#include "CanvasItem.h"
#include "Variant.h"
#include "Node.h"
class Node2D : public CanvasItem{
public: Node2D();
void apply_scale(Vector2 p_ratio);
float get_angle_to(Vector2 p_point);
Vector2 get_global_position();
float get_global_rotation();
float get_global_rotation_degrees();
Vector2 get_global_scale();
Vector2 get_position();
Transform2D get_relative_transform_to_parent(Node p_parent);
float get_rotation();
float get_rotation_degrees();
Vector2 get_scale();
int get_z_index();
void global_translate(Vector2 p_offset);
bool is_z_relative();
void look_at(Vector2 p_point);
void move_local_x(float p_delta, bool p_scaled = (bool) False);
void move_local_y(float p_delta, bool p_scaled = (bool) False);
void rotate(float p_radians);
void set_global_position(Vector2 p_position);
void set_global_rotation(float p_radians);
void set_global_rotation_degrees(float p_degrees);
void set_global_scale(Vector2 p_scale);
void set_global_transform(Transform2D p_xform);
void set_position(Vector2 p_position);
void set_rotation(float p_radians);
void set_rotation_degrees(float p_degrees);
void set_scale(Vector2 p_scale);
void set_transform(Transform2D p_xform);
void set_z_as_relative(bool p_enable);
void set_z_index(int p_z_index);
Vector2 to_global(Vector2 p_local_point);
Vector2 to_local(Vector2 p_global_point);
void translate(Vector2 p_offset);
};
#endif