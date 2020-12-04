/* THIS FILE IS GENERATED */
#ifndef PINJOINT_H
#define PINJOINT_H

#include "wasgo\wasgo.h"

#include "Joint.h"
class PinJoint : public Joint{
public:
enum Param{
PARAM_BIAS,
PARAM_DAMPING,
PARAM_IMPULSE_CLAMP
};
float get_param(PinJoint::Param p_param);
void set_param(PinJoint::Param p_param, float p_value);

protected:
public:
explicit PinJoint(WasGoID p_wasgo_id);
explicit PinJoint(Joint other);
PinJoint new_instance();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_PinJoint_wrapper_get_param(WasGoID wasgo_id, WasGoID p_param);
void _wasgo_PinJoint_wrapper_set_param(WasGoID wasgo_id, WasGoID p_param, float p_value);

    //constructor wrappers
    WasGoID _wasgo_PinJoint_constructor();
            
}
#endif