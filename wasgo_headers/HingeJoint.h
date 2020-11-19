/* THIS FILE IS GENERATED */
#ifndef HINGEJOINT_H
#define HINGEJOINT_H

#include <stdint.h>

#include "Joint.h"
class HingeJoint : public Joint{
public: HingeJoint();
enum Param{
PARAM_BIAS: 0,
PARAM_LIMIT_UPPER: 1,
PARAM_LIMIT_LOWER: 2,
PARAM_LIMIT_BIAS: 3,
PARAM_LIMIT_SOFTNESS: 4,
PARAM_LIMIT_RELAXATION: 5,
PARAM_MOTOR_TARGET_VELOCITY: 6,
PARAM_MOTOR_MAX_IMPULSE: 7,
};
enum Flag{
FLAG_USE_LIMIT: 0,
FLAG_ENABLE_MOTOR: 1,
};
float  _get_lower_limit();
float  _get_lower_limit();
float  _get_upper_limit();
float  _get_upper_limit();
void  _set_lower_limit(float lower_limit);
void  _set_upper_limit(float upper_limit);
bool  get_flag(int flag);
float  get_param(int param);
void  set_flag(int flag, bool enabled);
void  set_param(int param, float value);
};
#endif