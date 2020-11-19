/* THIS FILE IS GENERATED */
#ifndef PINJOINT_H
#define PINJOINT_H

#include <stdint.h>

#include "Joint.h"
class PinJoint : public Joint{
public: PinJoint();
enum Param{
PARAM_BIAS: 0,
PARAM_DAMPING: 1,
};
float  get_param(int param);
void  set_param(int param, float value);
};
#endif