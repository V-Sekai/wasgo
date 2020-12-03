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
ConeTwistJoint(WasGoId p_wasgo_id);
public:
ConeTwistJoint();
~ConeTwistJoint();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_ConeTwistJoint_wrapper_get_param(WasGoId wasgo_id, WasGoId p_param);
void _wasgo_ConeTwistJoint_wrapper_set_param(WasGoId wasgo_id, WasGoId p_param, float p_value);

    //constructor and destructor wrappers
    WasGoId _wasgo_ConeTwistJoint_constructor();
    void _wasgo_ConeTwistJoint_destructor(WasGoId p_wasgo_id);
            
}
#endif