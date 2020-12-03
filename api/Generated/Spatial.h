/* THIS FILE IS GENERATED */
#ifndef SPATIAL_H
#define SPATIAL_H

#include "wasgo\wasgo.h"

// #include "World.h"
#include "Vector3.h"
#include "Transform.h"
#include "Node.h"
// #include "SpatialGizmo.h"
class Spatial : public Node{
public:
void force_update_transform();
// SpatialGizmo get_gizmo();
Transform get_global_transform();
Spatial get_parent_spatial();
Vector3 get_rotation();
Vector3 get_rotation_degrees();
Vector3 get_scale();
Transform get_transform();
Vector3 get_translation();
// World get_world();
void global_rotate(Vector3 p_axis, float p_angle);
void global_scale(Vector3 p_scale);
void global_translate(Vector3 p_offset);
void hide();
bool is_local_transform_notification_enabled();
bool is_scale_disabled();
bool is_set_as_toplevel();
bool is_transform_notification_enabled();
bool is_visible();
bool is_visible_in_tree();
void look_at(Vector3 p_target, Vector3 p_up);
void look_at_from_position(Vector3 p_position, Vector3 p_target, Vector3 p_up);
void orthonormalize();
void rotate(Vector3 p_axis, float p_angle);
void rotate_object_local(Vector3 p_axis, float p_angle);
void rotate_x(float p_angle);
void rotate_y(float p_angle);
void rotate_z(float p_angle);
void scale_object_local(Vector3 p_scale);
void set_as_toplevel(bool p_enable);
void set_disable_scale(bool p_disable);
// void set_gizmo(SpatialGizmo p_gizmo);
void set_global_transform(Transform p_global);
void set_identity();
void set_ignore_transform_notification(bool p_enabled);
void set_notify_local_transform(bool p_enable);
void set_notify_transform(bool p_enable);
void set_rotation(Vector3 p_euler);
void set_rotation_degrees(Vector3 p_euler_degrees);
void set_scale(Vector3 p_scale);
void set_transform(Transform p_local);
void set_translation(Vector3 p_translation);
void set_visible(bool p_visible);
void show();
Vector3 to_global(Vector3 p_local_point);
Vector3 to_local(Vector3 p_global_point);
void translate(Vector3 p_offset);
void translate_object_local(Vector3 p_offset);
void update_gizmo();

protected:
// Spatial(WasGoId p_wasgo_id);
public:
// Spatial();
// ~Spatial();
explicit Spatial(WasGoId p_wasgo_id);
explicit Spatial(Node node);
static Spatial new_instance();
};


//Wrapper Functions
extern "C"{
void _wasgo_Spatial_wrapper_force_update_transform(WasGoId wasgo_id);
WasGoId _wasgo_Spatial_wrapper_get_gizmo(WasGoId wasgo_id);
void _wasgo_Spatial_wrapper_get_global_transform(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_Spatial_wrapper_get_parent_spatial(WasGoId wasgo_id);
void _wasgo_Spatial_wrapper_get_rotation(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Spatial_wrapper_get_rotation_degrees(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Spatial_wrapper_get_scale(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Spatial_wrapper_get_transform(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Spatial_wrapper_get_translation(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_Spatial_wrapper_get_world(WasGoId wasgo_id);
void _wasgo_Spatial_wrapper_global_rotate(WasGoId wasgo_id, const uint8_t * p_axis, int p_axis_wasgo_buffer_size, float p_angle);
void _wasgo_Spatial_wrapper_global_scale(WasGoId wasgo_id, const uint8_t * p_scale, int p_scale_wasgo_buffer_size);
void _wasgo_Spatial_wrapper_global_translate(WasGoId wasgo_id, const uint8_t * p_offset, int p_offset_wasgo_buffer_size);
void _wasgo_Spatial_wrapper_hide(WasGoId wasgo_id);
int _wasgo_Spatial_wrapper_is_local_transform_notification_enabled(WasGoId wasgo_id);
int _wasgo_Spatial_wrapper_is_scale_disabled(WasGoId wasgo_id);
int _wasgo_Spatial_wrapper_is_set_as_toplevel(WasGoId wasgo_id);
int _wasgo_Spatial_wrapper_is_transform_notification_enabled(WasGoId wasgo_id);
int _wasgo_Spatial_wrapper_is_visible(WasGoId wasgo_id);
int _wasgo_Spatial_wrapper_is_visible_in_tree(WasGoId wasgo_id);
void _wasgo_Spatial_wrapper_look_at(WasGoId wasgo_id, const uint8_t * p_target, int p_target_wasgo_buffer_size, const uint8_t * p_up, int p_up_wasgo_buffer_size);
void _wasgo_Spatial_wrapper_look_at_from_position(WasGoId wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size, const uint8_t * p_target, int p_target_wasgo_buffer_size, const uint8_t * p_up, int p_up_wasgo_buffer_size);
void _wasgo_Spatial_wrapper_orthonormalize(WasGoId wasgo_id);
void _wasgo_Spatial_wrapper_rotate(WasGoId wasgo_id, const uint8_t * p_axis, int p_axis_wasgo_buffer_size, float p_angle);
void _wasgo_Spatial_wrapper_rotate_object_local(WasGoId wasgo_id, const uint8_t * p_axis, int p_axis_wasgo_buffer_size, float p_angle);
void _wasgo_Spatial_wrapper_rotate_x(WasGoId wasgo_id, float p_angle);
void _wasgo_Spatial_wrapper_rotate_y(WasGoId wasgo_id, float p_angle);
void _wasgo_Spatial_wrapper_rotate_z(WasGoId wasgo_id, float p_angle);
void _wasgo_Spatial_wrapper_scale_object_local(WasGoId wasgo_id, const uint8_t * p_scale, int p_scale_wasgo_buffer_size);
void _wasgo_Spatial_wrapper_set_as_toplevel(WasGoId wasgo_id, bool p_enable);
void _wasgo_Spatial_wrapper_set_disable_scale(WasGoId wasgo_id, bool p_disable);
void _wasgo_Spatial_wrapper_set_gizmo(WasGoId wasgo_id, WasGoId p_gizmo);
void _wasgo_Spatial_wrapper_set_global_transform(WasGoId wasgo_id, const uint8_t * p_global, int p_global_wasgo_buffer_size);
void _wasgo_Spatial_wrapper_set_identity(WasGoId wasgo_id);
void _wasgo_Spatial_wrapper_set_ignore_transform_notification(WasGoId wasgo_id, bool p_enabled);
void _wasgo_Spatial_wrapper_set_notify_local_transform(WasGoId wasgo_id, bool p_enable);
void _wasgo_Spatial_wrapper_set_notify_transform(WasGoId wasgo_id, bool p_enable);
void _wasgo_Spatial_wrapper_set_rotation(WasGoId wasgo_id, const uint8_t * p_euler, int p_euler_wasgo_buffer_size);
void _wasgo_Spatial_wrapper_set_rotation_degrees(WasGoId wasgo_id, const uint8_t * p_euler_degrees, int p_euler_degrees_wasgo_buffer_size);
void _wasgo_Spatial_wrapper_set_scale(WasGoId wasgo_id, const uint8_t * p_scale, int p_scale_wasgo_buffer_size);
void _wasgo_Spatial_wrapper_set_transform(WasGoId wasgo_id, const uint8_t * p_local, int p_local_wasgo_buffer_size);
void _wasgo_Spatial_wrapper_set_translation(WasGoId wasgo_id, const uint8_t * p_translation, int p_translation_wasgo_buffer_size);
void _wasgo_Spatial_wrapper_set_visible(WasGoId wasgo_id, bool p_visible);
void _wasgo_Spatial_wrapper_show(WasGoId wasgo_id);
void _wasgo_Spatial_wrapper_to_global(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_local_point, int p_local_point_wasgo_buffer_size);
void _wasgo_Spatial_wrapper_to_local(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_global_point, int p_global_point_wasgo_buffer_size);
void _wasgo_Spatial_wrapper_translate(WasGoId wasgo_id, const uint8_t * p_offset, int p_offset_wasgo_buffer_size);
void _wasgo_Spatial_wrapper_translate_object_local(WasGoId wasgo_id, const uint8_t * p_offset, int p_offset_wasgo_buffer_size);
void _wasgo_Spatial_wrapper_update_gizmo(WasGoId wasgo_id);

    //constructor and destructor wrappers
    WasGoId _wasgo_Spatial_constructor();
    void _wasgo_Spatial_destructor(WasGoId p_wasgo_id);
            
}
#endif