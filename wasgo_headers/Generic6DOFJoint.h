/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Joint.h"
class Generic6DOFJoint : public Joint{
public: Generic6DOFJoint();
enum Param{
PARAM_LINEAR_LOWER_LIMIT: 0,
PARAM_LINEAR_UPPER_LIMIT: 1,
PARAM_LINEAR_LIMIT_SOFTNESS: 2,
PARAM_LINEAR_RESTITUTION: 3,
PARAM_LINEAR_DAMPING: 4,
PARAM_LINEAR_MOTOR_TARGET_VELOCITY: 5,
PARAM_LINEAR_MOTOR_FORCE_LIMIT: 6,
PARAM_ANGULAR_LOWER_LIMIT: 10,
PARAM_ANGULAR_UPPER_LIMIT: 11,
PARAM_ANGULAR_LIMIT_SOFTNESS: 12,
PARAM_ANGULAR_DAMPING: 13,
PARAM_ANGULAR_RESTITUTION: 14,
PARAM_ANGULAR_FORCE_LIMIT: 15,
PARAM_ANGULAR_ERP: 16,
PARAM_ANGULAR_MOTOR_TARGET_VELOCITY: 17,
PARAM_ANGULAR_MOTOR_FORCE_LIMIT: 18,
};
enum Flag{
FLAG_ENABLE_LINEAR_LIMIT: 0,
FLAG_ENABLE_ANGULAR_LIMIT: 1,
FLAG_ENABLE_ANGULAR_SPRING: 2,
FLAG_ENABLE_LINEAR_SPRING: 3,
FLAG_ENABLE_MOTOR: 4,
FLAG_ENABLE_LINEAR_MOTOR: 5,
};
float  _get_angular_hi_limit_x();
float  _get_angular_hi_limit_x();
float  _get_angular_hi_limit_y();
float  _get_angular_hi_limit_y();
float  _get_angular_hi_limit_z();
float  _get_angular_hi_limit_z();
float  _get_angular_lo_limit_x();
float  _get_angular_lo_limit_x();
float  _get_angular_lo_limit_y();
float  _get_angular_lo_limit_y();
float  _get_angular_lo_limit_z();
float  _get_angular_lo_limit_z();
void  _set_angular_hi_limit_x(float angle);
void  _set_angular_hi_limit_y(float angle);
void  _set_angular_hi_limit_z(float angle);
void  _set_angular_lo_limit_x(float angle);
void  _set_angular_lo_limit_y(float angle);
void  _set_angular_lo_limit_z(float angle);
bool  get_flag_x(int flag);
bool  get_flag_y(int flag);
bool  get_flag_z(int flag);
float  get_param_x(int param);
float  get_param_y(int param);
float  get_param_z(int param);
int  get_precision();
int  get_precision();
void  set_flag_x(int flag, bool value);
void  set_flag_y(int flag, bool value);
void  set_flag_z(int flag, bool value);
void  set_param_x(int param, float value);
void  set_param_y(int param, float value);
void  set_param_z(int param, float value);
void  set_precision(int precision);
};