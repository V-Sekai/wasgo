/* THIS FILE IS GENERATED */
#ifndef SKELETONIK_H
#define SKELETONIK_H

#include "stdint.h"

#include "Skeleton.h"
#include "Variant.h"
#include "Node.h"
class SkeletonIK : public Node{
public: SkeletonIK();
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
void start(bool p_one_time = (bool) False);
void stop();
};
#endif