/* THIS FILE IS GENERATED */
#ifndef PHYSICALBONE_H
#define PHYSICALBONE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "PhysicsBody.h"
class PhysicalBone : public PhysicsBody{
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

PhysicalBone(WasGoId p_wasgo_id);
~PhysicalBone();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_PhysicalBone_wrapper_apply_central_impulse(WasGoId wasgo_id, WasGo::WasGoId p_impulse);
void _wasgo_PhysicalBone_wrapper_apply_impulse(WasGoId wasgo_id, WasGo::WasGoId p_position, WasGo::WasGoId p_impulse);
}
#endif