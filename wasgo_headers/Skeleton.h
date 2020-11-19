/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Transform.h"
#include "String.h"
#include "RID.h"
#include "Variant.h"
#include "Node.h"
#include "SkinReference.h"
#include "Skin.h"
#include "Spatial.h"
class Skeleton : public Spatial{
public: Skeleton();
void  add_bone(String name);
void  bind_child_node_to_bone(int bone_idx, Node node);
void  clear_bones();
void  clear_bones();
int  find_bone(String name);
int  get_bone_count();
int  get_bone_count();
Transform  get_bone_custom_pose(int bone_idx);
Transform  get_bone_global_pose(int bone_idx);
String  get_bone_name(int bone_idx);
int  get_bone_parent(int bone_idx);
Transform  get_bone_pose(int bone_idx);
Transform  get_bone_rest(int bone_idx);
Array  get_bound_child_nodes_to_bone(int bone_idx);
bool  is_bone_rest_disabled(int bone_idx);
void  localize_rests();
void  localize_rests();
void  physical_bones_add_collision_exception(RID exception);
void  physical_bones_remove_collision_exception(RID exception);
void  physical_bones_start_simulation(Array bones = []);
void  physical_bones_stop_simulation();
void  physical_bones_stop_simulation();
SkinReference  register_skin(Skin skin);
void  set_bone_custom_pose(int bone_idx, Transform custom_pose);
void  set_bone_disable_rest(int bone_idx, bool disable);
void  set_bone_global_pose_override(int bone_idx, Transform pose, float amount, bool persistent = false);
void  set_bone_parent(int bone_idx, int parent_idx);
void  set_bone_pose(int bone_idx, Transform pose);
void  set_bone_rest(int bone_idx, Transform rest);
void  unbind_child_node_from_bone(int bone_idx, Node node);
void  unparent_bone_and_rest(int bone_idx);
};