/* THIS FILE IS GENERATED */
#ifndef SKELETONIK_H
#define SKELETONIK_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Transform.h"
#include "Skeleton.h"
#include "NodePath.h"
#include "Vector3.h"
#include "ustring.h"
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

SkeletonIK(WasGoId p_wasgo_id);
~SkeletonIK();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_SkeletonIK_wrapper_get_interpolation(WasGoId wasgo_id);
WasGoId _wasgo_SkeletonIK_wrapper_get_magnet_position(WasGoId wasgo_id);
int _wasgo_SkeletonIK_wrapper_get_max_iterations(WasGoId wasgo_id);
float _wasgo_SkeletonIK_wrapper_get_min_distance(WasGoId wasgo_id);
WasGoId _wasgo_SkeletonIK_wrapper_get_parent_skeleton(WasGoId wasgo_id);
WasGoId _wasgo_SkeletonIK_wrapper_get_root_bone(WasGoId wasgo_id);
WasGoId _wasgo_SkeletonIK_wrapper_get_target_node(WasGoId wasgo_id);
WasGoId _wasgo_SkeletonIK_wrapper_get_target_transform(WasGoId wasgo_id);
WasGoId _wasgo_SkeletonIK_wrapper_get_tip_bone(WasGoId wasgo_id);
int _wasgo_SkeletonIK_wrapper_is_override_tip_basis(WasGoId wasgo_id);
int _wasgo_SkeletonIK_wrapper_is_running(WasGoId wasgo_id);
int _wasgo_SkeletonIK_wrapper_is_using_magnet(WasGoId wasgo_id);
void _wasgo_SkeletonIK_wrapper_set_interpolation(WasGoId wasgo_id, float p_interpolation);
void _wasgo_SkeletonIK_wrapper_set_magnet_position(WasGoId wasgo_id, WasGoId p_local_position);
void _wasgo_SkeletonIK_wrapper_set_max_iterations(WasGoId wasgo_id, int p_iterations);
void _wasgo_SkeletonIK_wrapper_set_min_distance(WasGoId wasgo_id, float p_min_distance);
void _wasgo_SkeletonIK_wrapper_set_override_tip_basis(WasGoId wasgo_id, bool p_override);
void _wasgo_SkeletonIK_wrapper_set_root_bone(WasGoId wasgo_id, WasGoId p_root_bone);
void _wasgo_SkeletonIK_wrapper_set_target_node(WasGoId wasgo_id, WasGoId p_node);
void _wasgo_SkeletonIK_wrapper_set_target_transform(WasGoId wasgo_id, WasGoId p_target);
void _wasgo_SkeletonIK_wrapper_set_tip_bone(WasGoId wasgo_id, WasGoId p_tip_bone);
void _wasgo_SkeletonIK_wrapper_set_use_magnet(WasGoId wasgo_id, bool p_use);
void _wasgo_SkeletonIK_wrapper_start(WasGoId wasgo_id, bool p_one_time);
void _wasgo_SkeletonIK_wrapper_stop(WasGoId wasgo_id);
}
#endif