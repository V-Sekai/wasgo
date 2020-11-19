/* THIS FILE IS GENERATED */
#ifndef CONETWISTJOINT_H
#define CONETWISTJOINT_H

#include <stdint.h>

#include "Joint.h"
class ConeTwistJoint : public Joint{
public: ConeTwistJoint();
enum Param{
PARAM_SWING_SPAN: 0,
PARAM_TWIST_SPAN: 1,
PARAM_BIAS: 2,
PARAM_SOFTNESS: 3,
PARAM_RELAXATION: 4,
};
float  _get_swing_span();
float  _get_swing_span();
float  _get_twist_span();
float  _get_twist_span();
void  _set_swing_span(float swing_span);
void  _set_twist_span(float twist_span);
float  get_param(int param);
void  set_param(int param, float value);
};
#endif