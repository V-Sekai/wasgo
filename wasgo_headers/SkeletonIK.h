/* THIS FILE IS GENERATED */
#ifndef SKELETONIK_H
#define SKELETONIK_H

#include <stdint.h>

#include "String.h"
#include "Skeleton.h"
#include "NodePath.h"
#include "Node.h"
#include "Transform.h"
#include "Vector3.h"
class SkeletonIK : public Node{
public: SkeletonIK();
float  get_interpolation();
float  get_interpolation();
Vector3  get_magnet_position();
Vector3  get_magnet_position();
int  get_max_iterations();
int  get_max_iterations();
float  get_min_distance();
float  get_min_distance();
Skeleton  get_parent_skeleton();
Skeleton  get_parent_skeleton();
String  get_root_bone();
String  get_root_bone();
NodePath  get_target_node();
NodePath  get_target_node();
Transform  get_target_transform();
Transform  get_target_transform();
String  get_tip_bone();
String  get_tip_bone();
bool  is_override_tip_basis();
bool  is_override_tip_basis();
bool  is_running();
bool  is_running();
bool  is_using_magnet();
bool  is_using_magnet();
void  set_interpolation(float interpolation);
void  set_magnet_position(Vector3 local_position);
void  set_max_iterations(int iterations);
void  set_min_distance(float min_distance);
void  set_override_tip_basis(bool override);
void  set_root_bone(String root_bone);
void  set_target_node(NodePath node);
void  set_target_transform(Transform target);
void  set_tip_bone(String tip_bone);
void  set_use_magnet(bool use);
void  start(bool one_time = false);
void  stop();
void  stop();
};
#endif