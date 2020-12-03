/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Generic6DOFJoint.h"
bool Generic6DOFJoint::get_flag_x(Generic6DOFJoint::Flag p_flag){
	return (bool) _wasgo_Generic6DOFJoint_wrapper_get_flag_x(wasgo_id, p_flag._get_wasgo_id());
}
bool Generic6DOFJoint::get_flag_y(Generic6DOFJoint::Flag p_flag){
	return (bool) _wasgo_Generic6DOFJoint_wrapper_get_flag_y(wasgo_id, p_flag._get_wasgo_id());
}
bool Generic6DOFJoint::get_flag_z(Generic6DOFJoint::Flag p_flag){
	return (bool) _wasgo_Generic6DOFJoint_wrapper_get_flag_z(wasgo_id, p_flag._get_wasgo_id());
}
float Generic6DOFJoint::get_param_x(Generic6DOFJoint::Param p_param){
	return (float) _wasgo_Generic6DOFJoint_wrapper_get_param_x(wasgo_id, p_param._get_wasgo_id());
}
float Generic6DOFJoint::get_param_y(Generic6DOFJoint::Param p_param){
	return (float) _wasgo_Generic6DOFJoint_wrapper_get_param_y(wasgo_id, p_param._get_wasgo_id());
}
float Generic6DOFJoint::get_param_z(Generic6DOFJoint::Param p_param){
	return (float) _wasgo_Generic6DOFJoint_wrapper_get_param_z(wasgo_id, p_param._get_wasgo_id());
}
int Generic6DOFJoint::get_precision(){
	return (int) _wasgo_Generic6DOFJoint_wrapper_get_precision(wasgo_id);
}
void Generic6DOFJoint::set_flag_x(Generic6DOFJoint::Flag p_flag, bool p_value){
	_wasgo_Generic6DOFJoint_wrapper_set_flag_x(wasgo_id, p_flag._get_wasgo_id(), p_value);
}
void Generic6DOFJoint::set_flag_y(Generic6DOFJoint::Flag p_flag, bool p_value){
	_wasgo_Generic6DOFJoint_wrapper_set_flag_y(wasgo_id, p_flag._get_wasgo_id(), p_value);
}
void Generic6DOFJoint::set_flag_z(Generic6DOFJoint::Flag p_flag, bool p_value){
	_wasgo_Generic6DOFJoint_wrapper_set_flag_z(wasgo_id, p_flag._get_wasgo_id(), p_value);
}
void Generic6DOFJoint::set_param_x(Generic6DOFJoint::Param p_param, float p_value){
	_wasgo_Generic6DOFJoint_wrapper_set_param_x(wasgo_id, p_param._get_wasgo_id(), p_value);
}
void Generic6DOFJoint::set_param_y(Generic6DOFJoint::Param p_param, float p_value){
	_wasgo_Generic6DOFJoint_wrapper_set_param_y(wasgo_id, p_param._get_wasgo_id(), p_value);
}
void Generic6DOFJoint::set_param_z(Generic6DOFJoint::Param p_param, float p_value){
	_wasgo_Generic6DOFJoint_wrapper_set_param_z(wasgo_id, p_param._get_wasgo_id(), p_value);
}
void Generic6DOFJoint::set_precision(int p_precision){
	_wasgo_Generic6DOFJoint_wrapper_set_precision(wasgo_id, p_precision);
}

Generic6DOFJoint::Generic6DOFJoint(WasGoId p_wasgo_id) : Joint(p_wasgo_id){
}
Generic6DOFJoint::Generic6DOFJoint(){
    wasgo_id = _wasgo_Generic6DOFJoint_constructor();
}
Generic6DOFJoint::~Generic6DOFJoint(){
    _wasgo_Generic6DOFJoint_destructor(wasgo_id);
}