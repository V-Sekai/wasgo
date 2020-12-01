/* THIS FILE IS GENERATED */
#include "Tween.h"
float Tween::get_speed_scale(){
	return (float) _wasgo_Tween_wrapper_get_speed_scale(wasgo_id);
}
Tween::TweenProcessMode Tween::get_tween_process_mode(){
	return Tween::TweenProcessMode::from_wasgo_id(_wasgo_Tween_wrapper_get_tween_process_mode(wasgo_id));
}
bool Tween::is_active(){
	return (bool) _wasgo_Tween_wrapper_is_active(wasgo_id);
}
bool Tween::is_repeat(){
	return (bool) _wasgo_Tween_wrapper_is_repeat(wasgo_id);
}
bool Tween::remove(Object p_object, String p_key = (String) ){
	return (bool) _wasgo_Tween_wrapper_remove(wasgo_id, ((Variant) p_object).get_wasgo_id(), ((Variant) p_key).get_wasgo_id());
}
bool Tween::reset(Object p_object, String p_key = (String) ){
	return (bool) _wasgo_Tween_wrapper_reset(wasgo_id, ((Variant) p_object).get_wasgo_id(), ((Variant) p_key).get_wasgo_id());
}
bool Tween::reset_all(){
	return (bool) _wasgo_Tween_wrapper_reset_all(wasgo_id);
}
bool Tween::resume(Object p_object, String p_key = (String) ){
	return (bool) _wasgo_Tween_wrapper_resume(wasgo_id, ((Variant) p_object).get_wasgo_id(), ((Variant) p_key).get_wasgo_id());
}
bool Tween::resume_all(){
	return (bool) _wasgo_Tween_wrapper_resume_all(wasgo_id);
}
void Tween::set_active(bool p_active){
	_wasgo_Tween_wrapper_set_active(wasgo_id, p_active);
}
void Tween::set_repeat(bool p_repeat){
	_wasgo_Tween_wrapper_set_repeat(wasgo_id, p_repeat);
}
void Tween::set_speed_scale(float p_speed){
	_wasgo_Tween_wrapper_set_speed_scale(wasgo_id, p_speed);
}
void Tween::set_tween_process_mode(Tween::TweenProcessMode p_mode){
	_wasgo_Tween_wrapper_set_tween_process_mode(wasgo_id, ((Variant) p_mode).get_wasgo_id());
}
bool Tween::start(){
	return (bool) _wasgo_Tween_wrapper_start(wasgo_id);
}
bool Tween::stop(Object p_object, String p_key = (String) ){
	return (bool) _wasgo_Tween_wrapper_stop(wasgo_id, ((Variant) p_object).get_wasgo_id(), ((Variant) p_key).get_wasgo_id());
}
bool Tween::stop_all(){
	return (bool) _wasgo_Tween_wrapper_stop_all(wasgo_id);
}