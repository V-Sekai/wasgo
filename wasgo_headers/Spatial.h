/* THIS FILE IS GENERATED */
#ifndef SPATIAL_H
#define SPATIAL_H

#include <stdint.h>

#include "Node.h"
#include "SpatialGizmo.h"
#include "Transform.h"
#include "Vector3.h"
#include "World.h"
class Spatial : public Node{
public: Spatial();
void  _update_gizmo();
void  _update_gizmo();
void  force_update_transform();
void  force_update_transform();
SpatialGizmo  get_gizmo();
SpatialGizmo  get_gizmo();
Transform  get_global_transform();
Transform  get_global_transform();
Spatial  get_parent_spatial();
Spatial  get_parent_spatial();
Vector3  get_rotation();
Vector3  get_rotation();
Vector3  get_rotation_degrees();
Vector3  get_rotation_degrees();
Vector3  get_scale();
Vector3  get_scale();
Transform  get_transform();
Transform  get_transform();
Vector3  get_translation();
Vector3  get_translation();
World  get_world();
World  get_world();
void  global_rotate(Vector3 axis, float angle);
void  global_scale(Vector3 scale);
void  global_translate(Vector3 offset);
void  hide();
void  hide();
bool  is_local_transform_notification_enabled();
bool  is_local_transform_notification_enabled();
bool  is_scale_disabled();
bool  is_scale_disabled();
bool  is_set_as_toplevel();
bool  is_set_as_toplevel();
bool  is_transform_notification_enabled();
bool  is_transform_notification_enabled();
bool  is_visible();
bool  is_visible();
bool  is_visible_in_tree();
bool  is_visible_in_tree();
void  look_at(Vector3 target, Vector3 up);
void  look_at_from_position(Vector3 position, Vector3 target, Vector3 up);
void  orthonormalize();
void  orthonormalize();
void  rotate(Vector3 axis, float angle);
void  rotate_object_local(Vector3 axis, float angle);
void  rotate_x(float angle);
void  rotate_y(float angle);
void  rotate_z(float angle);
void  scale_object_local(Vector3 scale);
void  set_as_toplevel(bool enable);
void  set_disable_scale(bool disable);
void  set_gizmo(SpatialGizmo gizmo);
void  set_global_transform(Transform global);
void  set_identity();
void  set_identity();
void  set_ignore_transform_notification(bool enabled);
void  set_notify_local_transform(bool enable);
void  set_notify_transform(bool enable);
void  set_rotation(Vector3 euler);
void  set_rotation_degrees(Vector3 euler_degrees);
void  set_scale(Vector3 scale);
void  set_transform(Transform local);
void  set_translation(Vector3 translation);
void  set_visible(bool visible);
void  show();
void  show();
Vector3  to_global(Vector3 local_point);
Vector3  to_local(Vector3 global_point);
void  translate(Vector3 offset);
void  translate_object_local(Vector3 offset);
void  update_gizmo();
void  update_gizmo();
};
#endif