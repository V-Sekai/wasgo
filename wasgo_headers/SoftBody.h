/* THIS FILE IS GENERATED */
#ifndef SOFTBODY_H
#define SOFTBODY_H

#include "wasgo\wasgo.h"

#include "Node.h"
#include "NodePath.h"
#include "MeshInstance.h"
#include "Variant.h"
class SoftBody : public MeshInstance{
public:
void add_collision_exception_with(Node p_body);
float get_areaAngular_stiffness();
Array get_collision_exceptions();
int get_collision_layer();
bool get_collision_layer_bit(int p_bit);
int get_collision_mask();
bool get_collision_mask_bit(int p_bit);
float get_damping_coefficient();
float get_drag_coefficient();
float get_linear_stiffness();
NodePath get_parent_collision_ignore();
float get_pose_matching_coefficient();
float get_pressure_coefficient();
int get_simulation_precision();
float get_total_mass();
float get_volume_stiffness();
bool is_ray_pickable();
void remove_collision_exception_with(Node p_body);
void set_areaAngular_stiffness(float p_areaAngular_stiffness);
void set_collision_layer(int p_collision_layer);
void set_collision_layer_bit(int p_bit, bool p_value);
void set_collision_mask(int p_collision_mask);
void set_collision_mask_bit(int p_bit, bool p_value);
void set_damping_coefficient(float p_damping_coefficient);
void set_drag_coefficient(float p_drag_coefficient);
void set_linear_stiffness(float p_linear_stiffness);
void set_parent_collision_ignore(NodePath p_parent_collision_ignore);
void set_pose_matching_coefficient(float p_pose_matching_coefficient);
void set_pressure_coefficient(float p_pressure_coefficient);
void set_ray_pickable(bool p_ray_pickable);
void set_simulation_precision(int p_simulation_precision);
void set_total_mass(float p_mass);
void set_volume_stiffness(float p_volume_stiffness);

protected:
public:
explicit SoftBody(WasGoId p_wasgo_id);
explicit SoftBody(MeshInstance other);
SoftBody new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_SoftBody_wrapper_add_collision_exception_with(WasGoId wasgo_id, WasGoId p_body);
float _wasgo_SoftBody_wrapper_get_areaAngular_stiffness(WasGoId wasgo_id);
WasGoId _wasgo_SoftBody_wrapper_get_collision_exceptions(WasGoId wasgo_id);
int _wasgo_SoftBody_wrapper_get_collision_layer(WasGoId wasgo_id);
int _wasgo_SoftBody_wrapper_get_collision_layer_bit(WasGoId wasgo_id, int p_bit);
int _wasgo_SoftBody_wrapper_get_collision_mask(WasGoId wasgo_id);
int _wasgo_SoftBody_wrapper_get_collision_mask_bit(WasGoId wasgo_id, int p_bit);
float _wasgo_SoftBody_wrapper_get_damping_coefficient(WasGoId wasgo_id);
float _wasgo_SoftBody_wrapper_get_drag_coefficient(WasGoId wasgo_id);
float _wasgo_SoftBody_wrapper_get_linear_stiffness(WasGoId wasgo_id);
void _wasgo_SoftBody_wrapper_get_parent_collision_ignore(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_SoftBody_wrapper_get_pose_matching_coefficient(WasGoId wasgo_id);
float _wasgo_SoftBody_wrapper_get_pressure_coefficient(WasGoId wasgo_id);
int _wasgo_SoftBody_wrapper_get_simulation_precision(WasGoId wasgo_id);
float _wasgo_SoftBody_wrapper_get_total_mass(WasGoId wasgo_id);
float _wasgo_SoftBody_wrapper_get_volume_stiffness(WasGoId wasgo_id);
int _wasgo_SoftBody_wrapper_is_ray_pickable(WasGoId wasgo_id);
void _wasgo_SoftBody_wrapper_remove_collision_exception_with(WasGoId wasgo_id, WasGoId p_body);
void _wasgo_SoftBody_wrapper_set_areaAngular_stiffness(WasGoId wasgo_id, float p_areaAngular_stiffness);
void _wasgo_SoftBody_wrapper_set_collision_layer(WasGoId wasgo_id, int p_collision_layer);
void _wasgo_SoftBody_wrapper_set_collision_layer_bit(WasGoId wasgo_id, int p_bit, bool p_value);
void _wasgo_SoftBody_wrapper_set_collision_mask(WasGoId wasgo_id, int p_collision_mask);
void _wasgo_SoftBody_wrapper_set_collision_mask_bit(WasGoId wasgo_id, int p_bit, bool p_value);
void _wasgo_SoftBody_wrapper_set_damping_coefficient(WasGoId wasgo_id, float p_damping_coefficient);
void _wasgo_SoftBody_wrapper_set_drag_coefficient(WasGoId wasgo_id, float p_drag_coefficient);
void _wasgo_SoftBody_wrapper_set_linear_stiffness(WasGoId wasgo_id, float p_linear_stiffness);
void _wasgo_SoftBody_wrapper_set_parent_collision_ignore(WasGoId wasgo_id, const uint8_t * p_parent_collision_ignore, int p_parent_collision_ignore_wasgo_buffer_size);
void _wasgo_SoftBody_wrapper_set_pose_matching_coefficient(WasGoId wasgo_id, float p_pose_matching_coefficient);
void _wasgo_SoftBody_wrapper_set_pressure_coefficient(WasGoId wasgo_id, float p_pressure_coefficient);
void _wasgo_SoftBody_wrapper_set_ray_pickable(WasGoId wasgo_id, bool p_ray_pickable);
void _wasgo_SoftBody_wrapper_set_simulation_precision(WasGoId wasgo_id, int p_simulation_precision);
void _wasgo_SoftBody_wrapper_set_total_mass(WasGoId wasgo_id, float p_mass);
void _wasgo_SoftBody_wrapper_set_volume_stiffness(WasGoId wasgo_id, float p_volume_stiffness);

    //constructor wrappers
    WasGoId _wasgo_SoftBody_constructor();
            
}
#endif