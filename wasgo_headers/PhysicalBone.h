/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Transform.h"
#include "Vector3.h"
#include "PhysicsBody.h"
#include "Object.h"
class PhysicalBone : public PhysicsBody{
public: PhysicalBone();
enum JointType{
JOINT_TYPE_NONE: 0,
JOINT_TYPE_PIN: 1,
JOINT_TYPE_CONE: 2,
JOINT_TYPE_HINGE: 3,
JOINT_TYPE_SLIDER: 4,
};
void  _direct_state_changed(Object arg0);
void  apply_central_impulse(Vector3 impulse);
void  apply_impulse(Vector3 position, Vector3 impulse);
Transform  get_body_offset();
Transform  get_body_offset();
int  get_bone_id();
int  get_bone_id();
float  get_bounce();
float  get_bounce();
float  get_friction();
float  get_friction();
float  get_gravity_scale();
float  get_gravity_scale();
Transform  get_joint_offset();
Transform  get_joint_offset();
enum.PhysicalBone::JointType  get_joint_type();
enum.PhysicalBone::JointType  get_joint_type();
float  get_mass();
float  get_mass();
bool  get_simulate_physics();
bool  get_simulate_physics();
float  get_weight();
float  get_weight();
bool  is_simulating_physics();
bool  is_simulating_physics();
bool  is_static_body();
bool  is_static_body();
void  set_body_offset(Transform offset);
void  set_bounce(float bounce);
void  set_friction(float friction);
void  set_gravity_scale(float gravity_scale);
void  set_joint_offset(Transform offset);
void  set_joint_type(int joint_type);
void  set_mass(float mass);
void  set_weight(float weight);
};