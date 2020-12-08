/* THIS FILE IS GENERATED */
#ifndef SKELETON_H
#define SKELETON_H

#include "wasgo\wasgoid.h"

#include "Skin.h"
class Node;
#include "Variant.h"
#include "Spatial.h"
#include "Transform.h"
#include "SkinReference.h"
#include "RID.h"
#include "Ustring.h"
class Skeleton : public Spatial{
public:
void add_bone(String p_name);
void bind_child_node_to_bone(int p_bone_idx, Node p_node);
void clear_bones();
void clear_bones_global_pose_override();
int find_bone(String p_name);
int get_bone_count();
Transform get_bone_custom_pose(int p_bone_idx);
Transform get_bone_global_pose(int p_bone_idx);
String get_bone_name(int p_bone_idx);
int get_bone_parent(int p_bone_idx);
Transform get_bone_pose(int p_bone_idx);
Transform get_bone_rest(int p_bone_idx);
Array get_bound_child_nodes_to_bone(int p_bone_idx);
bool is_bone_rest_disabled(int p_bone_idx);
void localize_rests();
void physical_bones_add_collision_exception(RID p_exception);
void physical_bones_remove_collision_exception(RID p_exception);
void physical_bones_start_simulation(Array p_bones = Array());
void physical_bones_stop_simulation();
SkinReference register_skin(Skin p_skin);
void set_bone_custom_pose(int p_bone_idx, Transform p_custom_pose);
void set_bone_disable_rest(int p_bone_idx, bool p_disable);
void set_bone_global_pose_override(int p_bone_idx, Transform p_pose, float p_amount, bool p_persistent = (bool) false);
void set_bone_parent(int p_bone_idx, int p_parent_idx);
void set_bone_pose(int p_bone_idx, Transform p_pose);
void set_bone_rest(int p_bone_idx, Transform p_rest);
void unbind_child_node_from_bone(int p_bone_idx, Node p_node);
void unparent_bone_and_rest(int p_bone_idx);

protected:
public:
explicit Skeleton(WasGoID p_wasgo_id);
explicit Skeleton(Spatial other);
Skeleton();
Skeleton new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Skeleton_wrapper_add_bone(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_Skeleton_wrapper_bind_child_node_to_bone(WasGoID wasgo_id, int p_bone_idx, WasGoID p_node);
void _wasgo_Skeleton_wrapper_clear_bones(WasGoID wasgo_id);
void _wasgo_Skeleton_wrapper_clear_bones_global_pose_override(WasGoID wasgo_id);
int _wasgo_Skeleton_wrapper_find_bone(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
int _wasgo_Skeleton_wrapper_get_bone_count(WasGoID wasgo_id);
void _wasgo_Skeleton_wrapper_get_bone_custom_pose(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_bone_idx);
void _wasgo_Skeleton_wrapper_get_bone_global_pose(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_bone_idx);
void _wasgo_Skeleton_wrapper_get_bone_name(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_bone_idx);
int _wasgo_Skeleton_wrapper_get_bone_parent(WasGoID wasgo_id, int p_bone_idx);
void _wasgo_Skeleton_wrapper_get_bone_pose(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_bone_idx);
void _wasgo_Skeleton_wrapper_get_bone_rest(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_bone_idx);
WasGoID _wasgo_Skeleton_wrapper_get_bound_child_nodes_to_bone(WasGoID wasgo_id, int p_bone_idx);
int _wasgo_Skeleton_wrapper_is_bone_rest_disabled(WasGoID wasgo_id, int p_bone_idx);
void _wasgo_Skeleton_wrapper_localize_rests(WasGoID wasgo_id);
void _wasgo_Skeleton_wrapper_physical_bones_add_collision_exception(WasGoID wasgo_id, const uint8_t * p_exception, int p_exception_wasgo_buffer_size);
void _wasgo_Skeleton_wrapper_physical_bones_remove_collision_exception(WasGoID wasgo_id, const uint8_t * p_exception, int p_exception_wasgo_buffer_size);
void _wasgo_Skeleton_wrapper_physical_bones_start_simulation(WasGoID wasgo_id, WasGoID p_bones);
void _wasgo_Skeleton_wrapper_physical_bones_stop_simulation(WasGoID wasgo_id);
WasGoID _wasgo_Skeleton_wrapper_register_skin(WasGoID wasgo_id, WasGoID p_skin);
void _wasgo_Skeleton_wrapper_set_bone_custom_pose(WasGoID wasgo_id, int p_bone_idx, const uint8_t * p_custom_pose, int p_custom_pose_wasgo_buffer_size);
void _wasgo_Skeleton_wrapper_set_bone_disable_rest(WasGoID wasgo_id, int p_bone_idx, bool p_disable);
void _wasgo_Skeleton_wrapper_set_bone_global_pose_override(WasGoID wasgo_id, int p_bone_idx, const uint8_t * p_pose, int p_pose_wasgo_buffer_size, float p_amount, bool p_persistent);
void _wasgo_Skeleton_wrapper_set_bone_parent(WasGoID wasgo_id, int p_bone_idx, int p_parent_idx);
void _wasgo_Skeleton_wrapper_set_bone_pose(WasGoID wasgo_id, int p_bone_idx, const uint8_t * p_pose, int p_pose_wasgo_buffer_size);
void _wasgo_Skeleton_wrapper_set_bone_rest(WasGoID wasgo_id, int p_bone_idx, const uint8_t * p_rest, int p_rest_wasgo_buffer_size);
void _wasgo_Skeleton_wrapper_unbind_child_node_from_bone(WasGoID wasgo_id, int p_bone_idx, WasGoID p_node);
void _wasgo_Skeleton_wrapper_unparent_bone_and_rest(WasGoID wasgo_id, int p_bone_idx);

    //constructor wrappers
    WasGoID _wasgo_Skeleton_constructor();
            
}
#endif