/* THIS FILE IS GENERATED */
#ifndef NODE2D_H
#define NODE2D_H

#include <stdint.h>

#include "Vector2.h"
#include "Transform2D.h"
#include "Node.h"
#include "CanvasItem.h"
class Node2D : public CanvasItem{
public: Node2D();
void  apply_scale(Vector2 ratio);
float  get_angle_to(Vector2 point);
Vector2  get_global_position();
Vector2  get_global_position();
float  get_global_rotation();
float  get_global_rotation();
float  get_global_rotation_degrees();
float  get_global_rotation_degrees();
Vector2  get_global_scale();
Vector2  get_global_scale();
Vector2  get_position();
Vector2  get_position();
Transform2D  get_relative_transform_to_parent(Node parent);
float  get_rotation();
float  get_rotation();
float  get_rotation_degrees();
float  get_rotation_degrees();
Vector2  get_scale();
Vector2  get_scale();
int  get_z_index();
int  get_z_index();
void  global_translate(Vector2 offset);
bool  is_z_relative();
bool  is_z_relative();
void  look_at(Vector2 point);
void  move_local_x(float delta, bool scaled = false);
void  move_local_y(float delta, bool scaled = false);
void  rotate(float radians);
void  set_global_position(Vector2 position);
void  set_global_rotation(float radians);
void  set_global_rotation_degrees(float degrees);
void  set_global_scale(Vector2 scale);
void  set_global_transform(Transform2D xform);
void  set_position(Vector2 position);
void  set_rotation(float radians);
void  set_rotation_degrees(float degrees);
void  set_scale(Vector2 scale);
void  set_transform(Transform2D xform);
void  set_z_as_relative(bool enable);
void  set_z_index(int z_index);
Vector2  to_global(Vector2 local_point);
Vector2  to_local(Vector2 global_point);
void  translate(Vector2 offset);
};
#endif