/* THIS FILE IS GENERATED */
#ifndef GENERIC6DOFJOINT_H
#define GENERIC6DOFJOINT_H

#include "wasgo\wasgo.h"

#include "Joint.h"
class Generic6DOFJoint : public Joint{
public:
enum Flag{
FLAG_ENABLE_LINEAR_LIMIT,
FLAG_ENABLE_ANGULAR_LIMIT,
FLAG_ENABLE_LINEAR_SPRING,
FLAG_ENABLE_ANGULAR_SPRING,
FLAG_ENABLE_MOTOR,
FLAG_ENABLE_LINEAR_MOTOR,
FLAG_MAX
};
enum Param{
PARAM_LINEAR_LOWER_LIMIT,
PARAM_LINEAR_UPPER_LIMIT,
PARAM_LINEAR_LIMIT_SOFTNESS,
PARAM_LINEAR_RESTITUTION,
PARAM_LINEAR_DAMPING,
PARAM_LINEAR_MOTOR_TARGET_VELOCITY,
PARAM_LINEAR_MOTOR_FORCE_LIMIT,
PARAM_LINEAR_SPRING_STIFFNESS,
PARAM_LINEAR_SPRING_DAMPING,
PARAM_LINEAR_SPRING_EQUILIBRIUM_POINT,
PARAM_ANGULAR_LOWER_LIMIT,
PARAM_ANGULAR_UPPER_LIMIT,
PARAM_ANGULAR_LIMIT_SOFTNESS,
PARAM_ANGULAR_DAMPING,
PARAM_ANGULAR_RESTITUTION,
PARAM_ANGULAR_FORCE_LIMIT,
PARAM_ANGULAR_ERP,
PARAM_ANGULAR_MOTOR_TARGET_VELOCITY,
PARAM_ANGULAR_MOTOR_FORCE_LIMIT,
PARAM_ANGULAR_SPRING_STIFFNESS,
PARAM_ANGULAR_SPRING_DAMPING,
PARAM_ANGULAR_SPRING_EQUILIBRIUM_POINT,
PARAM_MAX
};
bool get_flag_x(Generic6DOFJoint::Flag p_flag);
bool get_flag_y(Generic6DOFJoint::Flag p_flag);
bool get_flag_z(Generic6DOFJoint::Flag p_flag);
float get_param_x(Generic6DOFJoint::Param p_param);
float get_param_y(Generic6DOFJoint::Param p_param);
float get_param_z(Generic6DOFJoint::Param p_param);
int get_precision();
void set_flag_x(Generic6DOFJoint::Flag p_flag, bool p_value);
void set_flag_y(Generic6DOFJoint::Flag p_flag, bool p_value);
void set_flag_z(Generic6DOFJoint::Flag p_flag, bool p_value);
void set_param_x(Generic6DOFJoint::Param p_param, float p_value);
void set_param_y(Generic6DOFJoint::Param p_param, float p_value);
void set_param_z(Generic6DOFJoint::Param p_param, float p_value);
void set_precision(int p_precision);

protected:
public:
explicit Generic6DOFJoint(WasGoID p_wasgo_id);
explicit Generic6DOFJoint(Joint other);
Generic6DOFJoint new_instance();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_Generic6DOFJoint_wrapper_get_flag_x(WasGoID wasgo_id, WasGoID p_flag);
int _wasgo_Generic6DOFJoint_wrapper_get_flag_y(WasGoID wasgo_id, WasGoID p_flag);
int _wasgo_Generic6DOFJoint_wrapper_get_flag_z(WasGoID wasgo_id, WasGoID p_flag);
float _wasgo_Generic6DOFJoint_wrapper_get_param_x(WasGoID wasgo_id, WasGoID p_param);
float _wasgo_Generic6DOFJoint_wrapper_get_param_y(WasGoID wasgo_id, WasGoID p_param);
float _wasgo_Generic6DOFJoint_wrapper_get_param_z(WasGoID wasgo_id, WasGoID p_param);
int _wasgo_Generic6DOFJoint_wrapper_get_precision(WasGoID wasgo_id);
void _wasgo_Generic6DOFJoint_wrapper_set_flag_x(WasGoID wasgo_id, WasGoID p_flag, bool p_value);
void _wasgo_Generic6DOFJoint_wrapper_set_flag_y(WasGoID wasgo_id, WasGoID p_flag, bool p_value);
void _wasgo_Generic6DOFJoint_wrapper_set_flag_z(WasGoID wasgo_id, WasGoID p_flag, bool p_value);
void _wasgo_Generic6DOFJoint_wrapper_set_param_x(WasGoID wasgo_id, WasGoID p_param, float p_value);
void _wasgo_Generic6DOFJoint_wrapper_set_param_y(WasGoID wasgo_id, WasGoID p_param, float p_value);
void _wasgo_Generic6DOFJoint_wrapper_set_param_z(WasGoID wasgo_id, WasGoID p_param, float p_value);
void _wasgo_Generic6DOFJoint_wrapper_set_precision(WasGoID wasgo_id, int p_precision);

    //constructor wrappers
    WasGoID _wasgo_Generic6DOFJoint_constructor();
            
}
#endif