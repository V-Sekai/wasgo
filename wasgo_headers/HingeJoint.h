/* THIS FILE IS GENERATED */
#ifndef HINGEJOINT_H
#define HINGEJOINT_H

#include "stdint.h"

#include "Joint.h"
class HingeJoint : public Joint{
public: HingeJoint();
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
};
#endif