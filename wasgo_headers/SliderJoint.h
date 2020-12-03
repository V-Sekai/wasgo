/* THIS FILE IS GENERATED */
#ifndef SLIDERJOINT_H
#define SLIDERJOINT_H

#include "wasgo\wasgo.h"

#include "Joint.h"
class SliderJoint : public Joint{
public:
enum Param{
PARAM_LINEAR_LIMIT_UPPER,
PARAM_LINEAR_LIMIT_LOWER,
PARAM_LINEAR_LIMIT_SOFTNESS,
PARAM_LINEAR_LIMIT_RESTITUTION,
PARAM_LINEAR_LIMIT_DAMPING,
PARAM_LINEAR_MOTION_SOFTNESS,
PARAM_LINEAR_MOTION_RESTITUTION,
PARAM_LINEAR_MOTION_DAMPING,
PARAM_LINEAR_ORTHOGONAL_SOFTNESS,
PARAM_LINEAR_ORTHOGONAL_RESTITUTION,
PARAM_LINEAR_ORTHOGONAL_DAMPING,
PARAM_ANGULAR_LIMIT_UPPER,
PARAM_ANGULAR_LIMIT_LOWER,
PARAM_ANGULAR_LIMIT_SOFTNESS,
PARAM_ANGULAR_LIMIT_RESTITUTION,
PARAM_ANGULAR_LIMIT_DAMPING,
PARAM_ANGULAR_MOTION_SOFTNESS,
PARAM_ANGULAR_MOTION_RESTITUTION,
PARAM_ANGULAR_MOTION_DAMPING,
PARAM_ANGULAR_ORTHOGONAL_SOFTNESS,
PARAM_ANGULAR_ORTHOGONAL_RESTITUTION,
PARAM_ANGULAR_ORTHOGONAL_DAMPING,
PARAM_MAX
};
float get_param(SliderJoint::Param p_param);
void set_param(SliderJoint::Param p_param, float p_value);

protected:
SliderJoint(WasGoId p_wasgo_id);
public:
SliderJoint();
~SliderJoint();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_SliderJoint_wrapper_get_param(WasGoId wasgo_id, WasGoId p_param);
void _wasgo_SliderJoint_wrapper_set_param(WasGoId wasgo_id, WasGoId p_param, float p_value);

    //constructor and destructor wrappers
    WasGoId _wasgo_SliderJoint_constructor();
    void _wasgo_SliderJoint_destructor(WasGoId p_wasgo_id);
            
}
#endif