/* THIS FILE IS GENERATED */
#ifndef PINJOINT_H
#define PINJOINT_H

#include "stdint.h"

#include "Joint.h"
class PinJoint : public Joint{
public: PinJoint();
enum Param{
PARAM_BIAS,
PARAM_DAMPING,
PARAM_IMPULSE_CLAMP
};
float get_param(PinJoint::Param p_param);
void set_param(PinJoint::Param p_param, float p_value);
};
#endif