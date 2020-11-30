/* THIS FILE IS GENERATED */
#ifndef SPATIAL_H
#define SPATIAL_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Node.h"
#include "World.h"
class Spatial : public Node{
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

Spatial(WasGoId p_wasgo_id);
~Spatial();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Spatial_wrapper_force_update_transform(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Spatial_wrapper_get_global_transform(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Spatial_wrapper_get_parent_spatial(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Spatial_wrapper_get_rotation(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Spatial_wrapper_get_rotation_degrees(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Spatial_wrapper_get_scale(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Spatial_wrapper_get_transform(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Spatial_wrapper_get_translation(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Spatial_wrapper_get_world(WasGoId wasgo_id);
int _wasgo_Spatial_wrapper_is_scale_disabled(WasGoId wasgo_id);
int _wasgo_Spatial_wrapper_is_set_as_toplevel(WasGoId wasgo_id);
void _wasgo_Spatial_wrapper_set_as_toplevel(WasGoId wasgo_id, bool p_enable);
void _wasgo_Spatial_wrapper_set_disable_scale(WasGoId wasgo_id, bool p_disable);
void _wasgo_Spatial_wrapper_set_global_transform(WasGoId wasgo_id, WasGo::WasGoId p_global);
void _wasgo_Spatial_wrapper_set_ignore_transform_notification(WasGoId wasgo_id, bool p_enabled);
void _wasgo_Spatial_wrapper_set_rotation(WasGoId wasgo_id, WasGo::WasGoId p_euler);
void _wasgo_Spatial_wrapper_set_rotation_degrees(WasGoId wasgo_id, WasGo::WasGoId p_euler_degrees);
void _wasgo_Spatial_wrapper_set_scale(WasGoId wasgo_id, WasGo::WasGoId p_scale);
void _wasgo_Spatial_wrapper_set_transform(WasGoId wasgo_id, WasGo::WasGoId p_local);
void _wasgo_Spatial_wrapper_set_translation(WasGoId wasgo_id, WasGo::WasGoId p_translation);
}
#endif