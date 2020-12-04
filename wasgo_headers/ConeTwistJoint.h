/* THIS FILE IS GENERATED */
#ifndef CONETWISTJOINT_H
#define CONETWISTJOINT_H

#include "wasgo\wasgo.h"

#include "Joint.h"
class ConeTwistJoint : public Joint{
public:
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

protected:
public:
explicit ConeTwistJoint(WasGoId p_wasgo_id);
explicit ConeTwistJoint(Joint other);
ConeTwistJoint new_instance();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_ConeTwistJoint_wrapper_get_param(WasGoId wasgo_id, WasGoId p_param);
void _wasgo_ConeTwistJoint_wrapper_set_param(WasGoId wasgo_id, WasGoId p_param, float p_value);

    //constructor wrappers
    WasGoId _wasgo_ConeTwistJoint_constructor();
            
}
#endif