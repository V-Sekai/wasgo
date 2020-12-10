/* THIS FILE IS GENERATED */
#ifndef SKELETONIK_H
#define SKELETONIK_H

#include "wasgo\wasgoid.h"

#include "NodePath.h"
#include "Skeleton.h"
#include "Transform.h"
#include "Ustring.h"
#include "Vector3.h"
#include "Node.h"
class SkeletonIK : public Node{
public:
float get_interpolation();
Vector3 get_magnet_position();
int get_max_iterations();
float get_min_distance();
Skeleton get_parent_skeleton();
String get_root_bone();
NodePath get_target_node();
Transform get_target_transform();
String get_tip_bone();
bool is_override_tip_basis();
bool is_running();
bool is_using_magnet();
void set_interpolation(float p_interpolation);
void set_magnet_position(Vector3 p_local_position);
void set_max_iterations(int p_iterations);
void set_min_distance(float p_min_distance);
void set_override_tip_basis(bool p_override);
void set_root_bone(String p_root_bone);
void set_target_node(NodePath p_node);
void set_target_transform(Transform p_target);
void set_tip_bone(String p_tip_bone);
void set_use_magnet(bool p_use);
void start(bool p_one_time = (bool) false);
void stop();

protected:
public:
explicit SkeletonIK(WasGoID p_wasgo_id);
explicit SkeletonIK(Node other);
SkeletonIK();
SkeletonIK new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_SkeletonIK_wrapper_get_interpolation(WasGoID wasgo_id);
void _wasgo_SkeletonIK_wrapper_get_magnet_position(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_SkeletonIK_wrapper_get_max_iterations(WasGoID wasgo_id);
float _wasgo_SkeletonIK_wrapper_get_min_distance(WasGoID wasgo_id);
WasGoID _wasgo_SkeletonIK_wrapper_get_parent_skeleton(WasGoID wasgo_id);
void _wasgo_SkeletonIK_wrapper_get_root_bone(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_SkeletonIK_wrapper_get_target_node(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_SkeletonIK_wrapper_get_target_transform(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_SkeletonIK_wrapper_get_tip_bone(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_SkeletonIK_wrapper_is_override_tip_basis(WasGoID wasgo_id);
int _wasgo_SkeletonIK_wrapper_is_running(WasGoID wasgo_id);
int _wasgo_SkeletonIK_wrapper_is_using_magnet(WasGoID wasgo_id);
void _wasgo_SkeletonIK_wrapper_set_interpolation(WasGoID wasgo_id, float p_interpolation);
void _wasgo_SkeletonIK_wrapper_set_magnet_position(WasGoID wasgo_id, const uint8_t * p_local_position, int p_local_position_wasgo_buffer_size);
void _wasgo_SkeletonIK_wrapper_set_max_iterations(WasGoID wasgo_id, int p_iterations);
void _wasgo_SkeletonIK_wrapper_set_min_distance(WasGoID wasgo_id, float p_min_distance);
void _wasgo_SkeletonIK_wrapper_set_override_tip_basis(WasGoID wasgo_id, bool p_override);
void _wasgo_SkeletonIK_wrapper_set_root_bone(WasGoID wasgo_id, const uint8_t * p_root_bone, int p_root_bone_wasgo_buffer_size);
void _wasgo_SkeletonIK_wrapper_set_target_node(WasGoID wasgo_id, const uint8_t * p_node, int p_node_wasgo_buffer_size);
void _wasgo_SkeletonIK_wrapper_set_target_transform(WasGoID wasgo_id, const uint8_t * p_target, int p_target_wasgo_buffer_size);
void _wasgo_SkeletonIK_wrapper_set_tip_bone(WasGoID wasgo_id, const uint8_t * p_tip_bone, int p_tip_bone_wasgo_buffer_size);
void _wasgo_SkeletonIK_wrapper_set_use_magnet(WasGoID wasgo_id, bool p_use);
void _wasgo_SkeletonIK_wrapper_start(WasGoID wasgo_id, bool p_one_time);
void _wasgo_SkeletonIK_wrapper_stop(WasGoID wasgo_id);

    //constructor wrappers
    WasGoID _wasgo_SkeletonIK_constructor();
            
}
#endif