/* THIS FILE IS GENERATED */
#ifndef NODE2D_H
#define NODE2D_H

#include "wasgo\wasgoid.h"

#include "Vector2.h"
class Node;
#include "CanvasItem.h"
#include "Transform2D.h"
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

protected:
public:
explicit Node2D(WasGoID p_wasgo_id);
explicit Node2D(CanvasItem other);
Node2D();
Node2D new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Node2D_wrapper_apply_scale(WasGoID wasgo_id, const uint8_t * p_ratio, int p_ratio_wasgo_buffer_size);
float _wasgo_Node2D_wrapper_get_angle_to(WasGoID wasgo_id, const uint8_t * p_point, int p_point_wasgo_buffer_size);
void _wasgo_Node2D_wrapper_get_global_position(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_Node2D_wrapper_get_global_rotation(WasGoID wasgo_id);
float _wasgo_Node2D_wrapper_get_global_rotation_degrees(WasGoID wasgo_id);
void _wasgo_Node2D_wrapper_get_global_scale(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Node2D_wrapper_get_position(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Node2D_wrapper_get_relative_transform_to_parent(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, WasGoID p_parent);
float _wasgo_Node2D_wrapper_get_rotation(WasGoID wasgo_id);
float _wasgo_Node2D_wrapper_get_rotation_degrees(WasGoID wasgo_id);
void _wasgo_Node2D_wrapper_get_scale(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Node2D_wrapper_get_z_index(WasGoID wasgo_id);
void _wasgo_Node2D_wrapper_global_translate(WasGoID wasgo_id, const uint8_t * p_offset, int p_offset_wasgo_buffer_size);
int _wasgo_Node2D_wrapper_is_z_relative(WasGoID wasgo_id);
void _wasgo_Node2D_wrapper_look_at(WasGoID wasgo_id, const uint8_t * p_point, int p_point_wasgo_buffer_size);
void _wasgo_Node2D_wrapper_move_local_x(WasGoID wasgo_id, float p_delta, bool p_scaled);
void _wasgo_Node2D_wrapper_move_local_y(WasGoID wasgo_id, float p_delta, bool p_scaled);
void _wasgo_Node2D_wrapper_rotate(WasGoID wasgo_id, float p_radians);
void _wasgo_Node2D_wrapper_set_global_position(WasGoID wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_Node2D_wrapper_set_global_rotation(WasGoID wasgo_id, float p_radians);
void _wasgo_Node2D_wrapper_set_global_rotation_degrees(WasGoID wasgo_id, float p_degrees);
void _wasgo_Node2D_wrapper_set_global_scale(WasGoID wasgo_id, const uint8_t * p_scale, int p_scale_wasgo_buffer_size);
void _wasgo_Node2D_wrapper_set_global_transform(WasGoID wasgo_id, const uint8_t * p_xform, int p_xform_wasgo_buffer_size);
void _wasgo_Node2D_wrapper_set_position(WasGoID wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size);
void _wasgo_Node2D_wrapper_set_rotation(WasGoID wasgo_id, float p_radians);
void _wasgo_Node2D_wrapper_set_rotation_degrees(WasGoID wasgo_id, float p_degrees);
void _wasgo_Node2D_wrapper_set_scale(WasGoID wasgo_id, const uint8_t * p_scale, int p_scale_wasgo_buffer_size);
void _wasgo_Node2D_wrapper_set_transform(WasGoID wasgo_id, const uint8_t * p_xform, int p_xform_wasgo_buffer_size);
void _wasgo_Node2D_wrapper_set_z_as_relative(WasGoID wasgo_id, bool p_enable);
void _wasgo_Node2D_wrapper_set_z_index(WasGoID wasgo_id, int p_z_index);
void _wasgo_Node2D_wrapper_to_global(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, const uint8_t * p_local_point, int p_local_point_wasgo_buffer_size);
void _wasgo_Node2D_wrapper_to_local(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, const uint8_t * p_global_point, int p_global_point_wasgo_buffer_size);
void _wasgo_Node2D_wrapper_translate(WasGoID wasgo_id, const uint8_t * p_offset, int p_offset_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_Node2D_constructor();
            
}
#endif