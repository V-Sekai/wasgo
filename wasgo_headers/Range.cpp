/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Range.h"
float Range::get_as_ratio(){
	return (float) _wasgo_Range_wrapper_get_as_ratio(wasgo_id);
}
float Range::get_max(){
	return (float) _wasgo_Range_wrapper_get_max(wasgo_id);
}
float Range::get_min(){
	return (float) _wasgo_Range_wrapper_get_min(wasgo_id);
}
float Range::get_page(){
	return (float) _wasgo_Range_wrapper_get_page(wasgo_id);
}
float Range::get_step(){
	return (float) _wasgo_Range_wrapper_get_step(wasgo_id);
}
float Range::get_value(){
	return (float) _wasgo_Range_wrapper_get_value(wasgo_id);
}
bool Range::is_greater_allowed(){
	return (bool) _wasgo_Range_wrapper_is_greater_allowed(wasgo_id);
}
bool Range::is_lesser_allowed(){
	return (bool) _wasgo_Range_wrapper_is_lesser_allowed(wasgo_id);
}
bool Range::is_ratio_exp(){
	return (bool) _wasgo_Range_wrapper_is_ratio_exp(wasgo_id);
}
bool Range::is_using_rounded_values(){
	return (bool) _wasgo_Range_wrapper_is_using_rounded_values(wasgo_id);
}
void Range::set_allow_greater(bool p_allow){
	_wasgo_Range_wrapper_set_allow_greater(wasgo_id, p_allow);
}
void Range::set_allow_lesser(bool p_allow){
	_wasgo_Range_wrapper_set_allow_lesser(wasgo_id, p_allow);
}
void Range::set_as_ratio(float p_value){
	_wasgo_Range_wrapper_set_as_ratio(wasgo_id, p_value);
}
void Range::set_exp_ratio(bool p_enabled){
	_wasgo_Range_wrapper_set_exp_ratio(wasgo_id, p_enabled);
}
void Range::set_max(float p_maximum){
	_wasgo_Range_wrapper_set_max(wasgo_id, p_maximum);
}
void Range::set_min(float p_minimum){
	_wasgo_Range_wrapper_set_min(wasgo_id, p_minimum);
}
void Range::set_page(float p_pagesize){
	_wasgo_Range_wrapper_set_page(wasgo_id, p_pagesize);
}
void Range::set_step(float p_step){
	_wasgo_Range_wrapper_set_step(wasgo_id, p_step);
}
void Range::set_use_rounded_values(bool p_enabled){
	_wasgo_Range_wrapper_set_use_rounded_values(wasgo_id, p_enabled);
}
void Range::set_value(float p_value){
	_wasgo_Range_wrapper_set_value(wasgo_id, p_value);
}
void Range::share(Node p_with){
	_wasgo_Range_wrapper_share(wasgo_id, p_with._get_wasgo_id());
}
void Range::unshare(){
	_wasgo_Range_wrapper_unshare(wasgo_id);
}

Range::Range(WasGoID p_wasgo_id) : Control(p_wasgo_id){
}
Range::Range(Control other) : Control(other._get_wasgo_id()){
}
Range::Range():Control(){
}
Range Range::new_instance(){
    return Range(_wasgo_Range_constructor());
}
WasGoID Range::_get_wasgo_id(){
    return wasgo_id;
}
Range::operator bool(){
    return (bool) wasgo_id;
}
