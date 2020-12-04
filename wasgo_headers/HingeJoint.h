/* THIS FILE IS GENERATED */
#ifndef HINGEJOINT_H
#define HINGEJOINT_H

#include "wasgo\wasgo.h"

#include "Joint.h"
class HingeJoint : public Joint{
public:
enum Flag{
FLAG_USE_LIMIT,
FLAG_ENABLE_MOTOR,
FLAG_MAX
};
enum Param{
PARAM_BIAS,
PARAM_LIMIT_UPPER,
PARAM_LIMIT_LOWER,
PARAM_LIMIT_BIAS,
PARAM_LIMIT_SOFTNESS,
PARAM_LIMIT_RELAXATION,
PARAM_MOTOR_TARGET_VELOCITY,
PARAM_MOTOR_MAX_IMPULSE,
PARAM_MAX
};
bool get_flag(HingeJoint::Flag p_flag);
float get_param(HingeJoint::Param p_param);
void set_flag(HingeJoint::Flag p_flag, bool p_enabled);
void set_param(HingeJoint::Param p_param, float p_value);

protected:
public:
explicit HingeJoint(WasGoId p_wasgo_id);
explicit HingeJoint(Joint other);
HingeJoint new_instance();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_HingeJoint_wrapper_get_flag(WasGoId wasgo_id, WasGoId p_flag);
float _wasgo_HingeJoint_wrapper_get_param(WasGoId wasgo_id, WasGoId p_param);
void _wasgo_HingeJoint_wrapper_set_flag(WasGoId wasgo_id, WasGoId p_flag, bool p_enabled);
void _wasgo_HingeJoint_wrapper_set_param(WasGoId wasgo_id, WasGoId p_param, float p_value);

    //constructor wrappers
    WasGoId _wasgo_HingeJoint_constructor();
            
}
#endif