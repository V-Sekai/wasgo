/* THIS FILE IS GENERATED */
#ifndef SKELETON_H
#define SKELETON_H

#include "stdint.h"

#include "SkinReference.h"
#include "Variant.h"
#include "Spatial.h"
#include "Node.h"
#include "Skin.h"
class Skeleton : public Spatial{
public: Skeleton();
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
void physical_bones_start_simulation(Array p_bones = (Array) []);
void physical_bones_stop_simulation();
SkinReference register_skin(Skin p_skin);
void set_bone_custom_pose(int p_bone_idx, Transform p_custom_pose);
void set_bone_disable_rest(int p_bone_idx, bool p_disable);
void set_bone_global_pose_override(int p_bone_idx, Transform p_pose, float p_amount, bool p_persistent = (bool) False);
void set_bone_parent(int p_bone_idx, int p_parent_idx);
void set_bone_pose(int p_bone_idx, Transform p_pose);
void set_bone_rest(int p_bone_idx, Transform p_rest);
void unbind_child_node_from_bone(int p_bone_idx, Node p_node);
void unparent_bone_and_rest(int p_bone_idx);
};
#endif