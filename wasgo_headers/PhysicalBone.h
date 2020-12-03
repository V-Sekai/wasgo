/* THIS FILE IS GENERATED */
#ifndef PHYSICALBONE_H
#define PHYSICALBONE_H

#include "wasgo\wasgo.h"

#include "Vector3.h"
#include "PhysicsBody.h"
#include "Transform.h"
class PhysicalBone : public PhysicsBody{
public:
enum JointType{
JOINT_TYPE_NONE,
JOINT_TYPE_PIN,
JOINT_TYPE_CONE,
JOINT_TYPE_HINGE,
JOINT_TYPE_SLIDER,
JOINT_TYPE_6DOF
};
void apply_central_impulse(Vector3 p_impulse);
void apply_impulse(Vector3 p_position, Vector3 p_impulse);
Transform get_body_offset();
int get_bone_id();
float get_bounce();
float get_friction();
float get_gravity_scale();
Transform get_joint_offset();
PhysicalBone::JointType get_joint_type();
float get_mass();
bool get_simulate_physics();
float get_weight();
bool is_simulating_physics();
bool is_static_body();
void set_body_offset(Transform p_offset);
void set_bounce(float p_bounce);
void set_friction(float p_friction);
void set_gravity_scale(float p_gravity_scale);
void set_joint_offset(Transform p_offset);
void set_joint_type(PhysicalBone::JointType p_joint_type);
void set_mass(float p_mass);
void set_weight(float p_weight);

protected:
PhysicalBone(WasGoId p_wasgo_id);
public:
PhysicalBone();
~PhysicalBone();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_PhysicalBone_wrapper_apply_central_impulse(WasGoId wasgo_id, const uint8_t * p_impulse, int p_impulse_wasgo_buffer_size);
void _wasgo_PhysicalBone_wrapper_apply_impulse(WasGoId wasgo_id, const uint8_t * p_position, int p_position_wasgo_buffer_size, const uint8_t * p_impulse, int p_impulse_wasgo_buffer_size);
void _wasgo_PhysicalBone_wrapper_get_body_offset(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_PhysicalBone_wrapper_get_bone_id(WasGoId wasgo_id);
float _wasgo_PhysicalBone_wrapper_get_bounce(WasGoId wasgo_id);
float _wasgo_PhysicalBone_wrapper_get_friction(WasGoId wasgo_id);
float _wasgo_PhysicalBone_wrapper_get_gravity_scale(WasGoId wasgo_id);
void _wasgo_PhysicalBone_wrapper_get_joint_offset(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_PhysicalBone_wrapper_get_joint_type(WasGoId wasgo_id);
float _wasgo_PhysicalBone_wrapper_get_mass(WasGoId wasgo_id);
int _wasgo_PhysicalBone_wrapper_get_simulate_physics(WasGoId wasgo_id);
float _wasgo_PhysicalBone_wrapper_get_weight(WasGoId wasgo_id);
int _wasgo_PhysicalBone_wrapper_is_simulating_physics(WasGoId wasgo_id);
int _wasgo_PhysicalBone_wrapper_is_static_body(WasGoId wasgo_id);
void _wasgo_PhysicalBone_wrapper_set_body_offset(WasGoId wasgo_id, const uint8_t * p_offset, int p_offset_wasgo_buffer_size);
void _wasgo_PhysicalBone_wrapper_set_bounce(WasGoId wasgo_id, float p_bounce);
void _wasgo_PhysicalBone_wrapper_set_friction(WasGoId wasgo_id, float p_friction);
void _wasgo_PhysicalBone_wrapper_set_gravity_scale(WasGoId wasgo_id, float p_gravity_scale);
void _wasgo_PhysicalBone_wrapper_set_joint_offset(WasGoId wasgo_id, const uint8_t * p_offset, int p_offset_wasgo_buffer_size);
void _wasgo_PhysicalBone_wrapper_set_joint_type(WasGoId wasgo_id, WasGoId p_joint_type);
void _wasgo_PhysicalBone_wrapper_set_mass(WasGoId wasgo_id, float p_mass);
void _wasgo_PhysicalBone_wrapper_set_weight(WasGoId wasgo_id, float p_weight);

    //constructor and destructor wrappers
    WasGoId _wasgo_PhysicalBone_constructor();
    void _wasgo_PhysicalBone_destructor(WasGoId p_wasgo_id);
            
}
#endif