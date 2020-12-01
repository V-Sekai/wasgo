/* THIS FILE IS GENERATED */
#ifndef NODE2D_H
#define NODE2D_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "CanvasItem.h"
#include "Vector2.h"
#include "Transform2D.h"
#include "Node.h"
class Node2D : public CanvasItem{
public:
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
void move_local_x(float p_delta, bool p_scaled = (bool) false);
void move_local_y(float p_delta, bool p_scaled = (bool) false);
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

Node2D(WasGoId p_wasgo_id);
~Node2D();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Node2D_wrapper_apply_scale(WasGoId wasgo_id, WasGoId p_ratio);
float _wasgo_Node2D_wrapper_get_angle_to(WasGoId wasgo_id, WasGoId p_point);
WasGoId _wasgo_Node2D_wrapper_get_global_position(WasGoId wasgo_id);
float _wasgo_Node2D_wrapper_get_global_rotation(WasGoId wasgo_id);
float _wasgo_Node2D_wrapper_get_global_rotation_degrees(WasGoId wasgo_id);
WasGoId _wasgo_Node2D_wrapper_get_global_scale(WasGoId wasgo_id);
WasGoId _wasgo_Node2D_wrapper_get_position(WasGoId wasgo_id);
WasGoId _wasgo_Node2D_wrapper_get_relative_transform_to_parent(WasGoId wasgo_id, WasGoId p_parent);
float _wasgo_Node2D_wrapper_get_rotation(WasGoId wasgo_id);
float _wasgo_Node2D_wrapper_get_rotation_degrees(WasGoId wasgo_id);
WasGoId _wasgo_Node2D_wrapper_get_scale(WasGoId wasgo_id);
int _wasgo_Node2D_wrapper_get_z_index(WasGoId wasgo_id);
void _wasgo_Node2D_wrapper_global_translate(WasGoId wasgo_id, WasGoId p_offset);
int _wasgo_Node2D_wrapper_is_z_relative(WasGoId wasgo_id);
void _wasgo_Node2D_wrapper_look_at(WasGoId wasgo_id, WasGoId p_point);
void _wasgo_Node2D_wrapper_move_local_x(WasGoId wasgo_id, float p_delta, bool p_scaled);
void _wasgo_Node2D_wrapper_move_local_y(WasGoId wasgo_id, float p_delta, bool p_scaled);
void _wasgo_Node2D_wrapper_rotate(WasGoId wasgo_id, float p_radians);
void _wasgo_Node2D_wrapper_set_global_position(WasGoId wasgo_id, WasGoId p_position);
void _wasgo_Node2D_wrapper_set_global_rotation(WasGoId wasgo_id, float p_radians);
void _wasgo_Node2D_wrapper_set_global_rotation_degrees(WasGoId wasgo_id, float p_degrees);
void _wasgo_Node2D_wrapper_set_global_scale(WasGoId wasgo_id, WasGoId p_scale);
void _wasgo_Node2D_wrapper_set_global_transform(WasGoId wasgo_id, WasGoId p_xform);
void _wasgo_Node2D_wrapper_set_position(WasGoId wasgo_id, WasGoId p_position);
void _wasgo_Node2D_wrapper_set_rotation(WasGoId wasgo_id, float p_radians);
void _wasgo_Node2D_wrapper_set_rotation_degrees(WasGoId wasgo_id, float p_degrees);
void _wasgo_Node2D_wrapper_set_scale(WasGoId wasgo_id, WasGoId p_scale);
void _wasgo_Node2D_wrapper_set_transform(WasGoId wasgo_id, WasGoId p_xform);
void _wasgo_Node2D_wrapper_set_z_as_relative(WasGoId wasgo_id, bool p_enable);
void _wasgo_Node2D_wrapper_set_z_index(WasGoId wasgo_id, int p_z_index);
WasGoId _wasgo_Node2D_wrapper_to_global(WasGoId wasgo_id, WasGoId p_local_point);
WasGoId _wasgo_Node2D_wrapper_to_local(WasGoId wasgo_id, WasGoId p_global_point);
void _wasgo_Node2D_wrapper_translate(WasGoId wasgo_id, WasGoId p_offset);
}
#endif