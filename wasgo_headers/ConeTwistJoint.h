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
explicit ConeTwistJoint(WasGoID p_wasgo_id);
explicit ConeTwistJoint(Joint other);
ConeTwistJoint new_instance();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_ConeTwistJoint_wrapper_get_param(WasGoID wasgo_id, WasGoID p_param);
void _wasgo_ConeTwistJoint_wrapper_set_param(WasGoID wasgo_id, WasGoID p_param, float p_value);

    //constructor wrappers
    WasGoID _wasgo_ConeTwistJoint_constructor();
            
}
#endif