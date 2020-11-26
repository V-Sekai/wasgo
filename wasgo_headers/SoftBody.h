/* THIS FILE IS GENERATED */
#ifndef SOFTBODY_H
#define SOFTBODY_H

#include <stdint.h>

#include "NodePath.h"
#include "Node.h"
#include "MeshInstance.h"
#include "Variant.h"
class SoftBody : public MeshInstance{
public: SoftBody();
void  _draw_soft_mesh();
void  _draw_soft_mesh();
void  add_collision_exception_with(Node body);
float  get_areaAngular_stiffness();
float  get_areaAngular_stiffness();
Array  get_collision_exceptions();
Array  get_collision_exceptions();
int  get_collision_layer();
int  get_collision_layer();
bool  get_collision_layer_bit(int bit);
int  get_collision_mask();
int  get_collision_mask();
bool  get_collision_mask_bit(int bit);
float  get_damping_coefficient();
float  get_damping_coefficient();
float  get_drag_coefficient();
float  get_drag_coefficient();
float  get_linear_stiffness();
float  get_linear_stiffness();
NodePath  get_parent_collision_ignore();
NodePath  get_parent_collision_ignore();
float  get_pose_matching_coefficient();
float  get_pose_matching_coefficient();
float  get_pressure_coefficient();
float  get_pressure_coefficient();
int  get_simulation_precision();
int  get_simulation_precision();
float  get_total_mass();
float  get_total_mass();
float  get_volume_stiffness();
float  get_volume_stiffness();
bool  is_ray_pickable();
bool  is_ray_pickable();
void  remove_collision_exception_with(Node body);
void  set_areaAngular_stiffness(float areaAngular_stiffness);
void  set_collision_layer(int collision_layer);
void  set_collision_layer_bit(int bit, bool value);
void  set_collision_mask(int collision_mask);
void  set_collision_mask_bit(int bit, bool value);
void  set_damping_coefficient(float damping_coefficient);
void  set_drag_coefficient(float drag_coefficient);
void  set_linear_stiffness(float linear_stiffness);
void  set_parent_collision_ignore(NodePath parent_collision_ignore);
void  set_pose_matching_coefficient(float pose_matching_coefficient);
void  set_pressure_coefficient(float pressure_coefficient);
void  set_ray_pickable(bool ray_pickable);
void  set_simulation_precision(int simulation_precision);
void  set_total_mass(float mass);
void  set_volume_stiffness(float volume_stiffness);
};
#endif