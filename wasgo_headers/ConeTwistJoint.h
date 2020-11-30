/* THIS FILE IS GENERATED */
#ifndef CONETWISTJOINT_H
#define CONETWISTJOINT_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Joint.h"
class ConeTwistJoint : public Joint{
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

ConeTwistJoint(WasGoId p_wasgo_id);
~ConeTwistJoint();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_ConeTwistJoint_wrapper_get_param(WasGoId wasgo_id, WasGo::WasGoId p_param);
void _wasgo_ConeTwistJoint_wrapper_set_param(WasGoId wasgo_id, WasGo::WasGoId p_param, float p_value);
}
#endif