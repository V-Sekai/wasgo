/* THIS FILE IS GENERATED */
#ifndef CONETWISTJOINT_H
#define CONETWISTJOINT_H

#include "stdint.h"

#include "Joint.h"
class ConeTwistJoint : public Joint{
public: ConeTwistJoint();
enum Param{
PARAM_SWING_SPAN,
PARAM_TWIST_SPAN,
PARAM_BIAS,
PARAM_SOFTNESS,
PARAM_RELAXATION,
PARAM_MAX
};
float get_param(ConeTwistJoint::Param p_param);
void set_param(ConeTwistJoint::Param p_param, float p_value);
};
#endif