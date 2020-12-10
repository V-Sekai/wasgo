/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Tween.h"
bool Tween::follow_method(Object p_object, String p_method, Variant p_initial_val, Object p_target, String p_target_method, float p_duration, Tween::TransitionType p_trans_type, Tween::EaseType p_ease_type, float p_delay){

    Variant wasgo_var_method = p_method;
    int wasgo_size_method = 10 + String(p_method).size();
    uint8_t wasgo_buffer_method[wasgo_size_method];
    encode_variant(wasgo_var_method, wasgo_buffer_method, wasgo_size_method);
    

    Variant wasgo_var_initial_val = p_initial_val;
    uint8_t wasgo_buffer_initial_val[256];
    int wasgo_size_initial_val = 256;
    encode_variant(wasgo_var_initial_val, wasgo_buffer_initial_val, wasgo_size_initial_val);
    

    Variant wasgo_var_target_method = p_target_method;
    int wasgo_size_target_method = 10 + String(p_target_method).size();
    uint8_t wasgo_buffer_target_method[wasgo_size_target_method];
    encode_variant(wasgo_var_target_method, wasgo_buffer_target_method, wasgo_size_target_method);
    
	return (bool) _wasgo_Tween_wrapper_follow_method(wasgo_id, p_object._get_wasgo_id(), wasgo_buffer_method, wasgo_size_method, wasgo_size_method, wasgo_buffer_initial_val, wasgo_size_initial_val, p_target._get_wasgo_id(), wasgo_buffer_target_method, wasgo_size_target_method, p_duration, p_trans_type._get_wasgo_id(), p_ease_type._get_wasgo_id(), p_delay);
}
bool Tween::follow_property(Object p_object, NodePath p_property, Variant p_initial_val, Object p_target, NodePath p_target_property, float p_duration, Tween::TransitionType p_trans_type, Tween::EaseType p_ease_type, float p_delay){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = 10 + String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    

    Variant wasgo_var_initial_val = p_initial_val;
    uint8_t wasgo_buffer_initial_val[256];
    int wasgo_size_initial_val = 256;
    encode_variant(wasgo_var_initial_val, wasgo_buffer_initial_val, wasgo_size_initial_val);
    

    Variant wasgo_var_target_property = p_target_property;
    int wasgo_size_target_property = 10 + String(p_target_property).size();
    uint8_t wasgo_buffer_target_property[wasgo_size_target_property];
    encode_variant(wasgo_var_target_property, wasgo_buffer_target_property, wasgo_size_target_property);
    
	return (bool) _wasgo_Tween_wrapper_follow_property(wasgo_id, p_object._get_wasgo_id(), wasgo_buffer_property, wasgo_size_property, wasgo_size_property, wasgo_buffer_initial_val, wasgo_size_initial_val, p_target._get_wasgo_id(), wasgo_buffer_target_property, wasgo_size_target_property, p_duration, p_trans_type._get_wasgo_id(), p_ease_type._get_wasgo_id(), p_delay);
}
float Tween::get_runtime(){
	return (float) _wasgo_Tween_wrapper_get_runtime(wasgo_id);
}
float Tween::get_speed_scale(){
	return (float) _wasgo_Tween_wrapper_get_speed_scale(wasgo_id);
}
Tween::TweenProcessMode Tween::get_tween_process_mode(){
	return Tween::TweenProcessMode(_wasgo_Tween_wrapper_get_tween_process_mode(wasgo_id));
}
bool Tween::interpolate_callback(Object p_object, float p_duration, String p_callback, Variant p_arg1, Variant p_arg2, Variant p_arg3, Variant p_arg4, Variant p_arg5){

    Variant wasgo_var_callback = p_callback;
    int wasgo_size_callback = 10 + String(p_callback).size();
    uint8_t wasgo_buffer_callback[wasgo_size_callback];
    encode_variant(wasgo_var_callback, wasgo_buffer_callback, wasgo_size_callback);
    

    Variant wasgo_var_arg1 = p_arg1;
    uint8_t wasgo_buffer_arg1[256];
    int wasgo_size_arg1 = 256;
    encode_variant(wasgo_var_arg1, wasgo_buffer_arg1, wasgo_size_arg1);
    

    Variant wasgo_var_arg2 = p_arg2;
    uint8_t wasgo_buffer_arg2[256];
    int wasgo_size_arg2 = 256;
    encode_variant(wasgo_var_arg2, wasgo_buffer_arg2, wasgo_size_arg2);
    

    Variant wasgo_var_arg3 = p_arg3;
    uint8_t wasgo_buffer_arg3[256];
    int wasgo_size_arg3 = 256;
    encode_variant(wasgo_var_arg3, wasgo_buffer_arg3, wasgo_size_arg3);
    

    Variant wasgo_var_arg4 = p_arg4;
    uint8_t wasgo_buffer_arg4[256];
    int wasgo_size_arg4 = 256;
    encode_variant(wasgo_var_arg4, wasgo_buffer_arg4, wasgo_size_arg4);
    

    Variant wasgo_var_arg5 = p_arg5;
    uint8_t wasgo_buffer_arg5[256];
    int wasgo_size_arg5 = 256;
    encode_variant(wasgo_var_arg5, wasgo_buffer_arg5, wasgo_size_arg5);
    
	return (bool) _wasgo_Tween_wrapper_interpolate_callback(wasgo_id, p_object._get_wasgo_id(), p_duration, -69, wasgo_buffer_callback, wasgo_size_callback, wasgo_buffer_arg1, wasgo_size_arg1, wasgo_buffer_arg2, wasgo_size_arg2, wasgo_buffer_arg3, wasgo_size_arg3, wasgo_buffer_arg4, wasgo_size_arg4, wasgo_buffer_arg5, wasgo_size_arg5);
}
bool Tween::interpolate_deferred_callback(Object p_object, float p_duration, String p_callback, Variant p_arg1, Variant p_arg2, Variant p_arg3, Variant p_arg4, Variant p_arg5){

    Variant wasgo_var_callback = p_callback;
    int wasgo_size_callback = 10 + String(p_callback).size();
    uint8_t wasgo_buffer_callback[wasgo_size_callback];
    encode_variant(wasgo_var_callback, wasgo_buffer_callback, wasgo_size_callback);
    

    Variant wasgo_var_arg1 = p_arg1;
    uint8_t wasgo_buffer_arg1[256];
    int wasgo_size_arg1 = 256;
    encode_variant(wasgo_var_arg1, wasgo_buffer_arg1, wasgo_size_arg1);
    

    Variant wasgo_var_arg2 = p_arg2;
    uint8_t wasgo_buffer_arg2[256];
    int wasgo_size_arg2 = 256;
    encode_variant(wasgo_var_arg2, wasgo_buffer_arg2, wasgo_size_arg2);
    

    Variant wasgo_var_arg3 = p_arg3;
    uint8_t wasgo_buffer_arg3[256];
    int wasgo_size_arg3 = 256;
    encode_variant(wasgo_var_arg3, wasgo_buffer_arg3, wasgo_size_arg3);
    

    Variant wasgo_var_arg4 = p_arg4;
    uint8_t wasgo_buffer_arg4[256];
    int wasgo_size_arg4 = 256;
    encode_variant(wasgo_var_arg4, wasgo_buffer_arg4, wasgo_size_arg4);
    

    Variant wasgo_var_arg5 = p_arg5;
    uint8_t wasgo_buffer_arg5[256];
    int wasgo_size_arg5 = 256;
    encode_variant(wasgo_var_arg5, wasgo_buffer_arg5, wasgo_size_arg5);
    
	return (bool) _wasgo_Tween_wrapper_interpolate_deferred_callback(wasgo_id, p_object._get_wasgo_id(), p_duration, -69, wasgo_buffer_callback, wasgo_size_callback, wasgo_buffer_arg1, wasgo_size_arg1, wasgo_buffer_arg2, wasgo_size_arg2, wasgo_buffer_arg3, wasgo_size_arg3, wasgo_buffer_arg4, wasgo_size_arg4, wasgo_buffer_arg5, wasgo_size_arg5);
}
bool Tween::interpolate_method(Object p_object, String p_method, Variant p_initial_val, Variant p_final_val, float p_duration, Tween::TransitionType p_trans_type, Tween::EaseType p_ease_type, float p_delay){

    Variant wasgo_var_method = p_method;
    int wasgo_size_method = 10 + String(p_method).size();
    uint8_t wasgo_buffer_method[wasgo_size_method];
    encode_variant(wasgo_var_method, wasgo_buffer_method, wasgo_size_method);
    

    Variant wasgo_var_initial_val = p_initial_val;
    uint8_t wasgo_buffer_initial_val[256];
    int wasgo_size_initial_val = 256;
    encode_variant(wasgo_var_initial_val, wasgo_buffer_initial_val, wasgo_size_initial_val);
    

    Variant wasgo_var_final_val = p_final_val;
    uint8_t wasgo_buffer_final_val[256];
    int wasgo_size_final_val = 256;
    encode_variant(wasgo_var_final_val, wasgo_buffer_final_val, wasgo_size_final_val);
    
	return (bool) _wasgo_Tween_wrapper_interpolate_method(wasgo_id, p_object._get_wasgo_id(), wasgo_buffer_method, wasgo_size_method, wasgo_size_method, wasgo_buffer_initial_val, wasgo_size_initial_val, wasgo_buffer_final_val, wasgo_size_final_val, p_duration, p_trans_type._get_wasgo_id(), p_ease_type._get_wasgo_id(), p_delay);
}
bool Tween::interpolate_property(Object p_object, NodePath p_property, Variant p_initial_val, Variant p_final_val, float p_duration, Tween::TransitionType p_trans_type, Tween::EaseType p_ease_type, float p_delay){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = 10 + String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    

    Variant wasgo_var_initial_val = p_initial_val;
    uint8_t wasgo_buffer_initial_val[256];
    int wasgo_size_initial_val = 256;
    encode_variant(wasgo_var_initial_val, wasgo_buffer_initial_val, wasgo_size_initial_val);
    

    Variant wasgo_var_final_val = p_final_val;
    uint8_t wasgo_buffer_final_val[256];
    int wasgo_size_final_val = 256;
    encode_variant(wasgo_var_final_val, wasgo_buffer_final_val, wasgo_size_final_val);
    
	return (bool) _wasgo_Tween_wrapper_interpolate_property(wasgo_id, p_object._get_wasgo_id(), wasgo_buffer_property, wasgo_size_property, wasgo_size_property, wasgo_buffer_initial_val, wasgo_size_initial_val, wasgo_buffer_final_val, wasgo_size_final_val, p_duration, p_trans_type._get_wasgo_id(), p_ease_type._get_wasgo_id(), p_delay);
}
bool Tween::is_active(){
	return (bool) _wasgo_Tween_wrapper_is_active(wasgo_id);
}
bool Tween::is_repeat(){
	return (bool) _wasgo_Tween_wrapper_is_repeat(wasgo_id);
}
bool Tween::remove(Object p_object, String p_key){

    Variant wasgo_var_key = p_key;
    int wasgo_size_key = 10 + String(p_key).size();
    uint8_t wasgo_buffer_key[wasgo_size_key];
    encode_variant(wasgo_var_key, wasgo_buffer_key, wasgo_size_key);
    
	return (bool) _wasgo_Tween_wrapper_remove(wasgo_id, p_object._get_wasgo_id(), wasgo_buffer_key, wasgo_size_key, wasgo_size_key);
}
bool Tween::remove_all(){
	return (bool) _wasgo_Tween_wrapper_remove_all(wasgo_id);
}
bool Tween::reset(Object p_object, String p_key){

    Variant wasgo_var_key = p_key;
    int wasgo_size_key = 10 + String(p_key).size();
    uint8_t wasgo_buffer_key[wasgo_size_key];
    encode_variant(wasgo_var_key, wasgo_buffer_key, wasgo_size_key);
    
	return (bool) _wasgo_Tween_wrapper_reset(wasgo_id, p_object._get_wasgo_id(), wasgo_buffer_key, wasgo_size_key, wasgo_size_key);
}
bool Tween::reset_all(){
	return (bool) _wasgo_Tween_wrapper_reset_all(wasgo_id);
}
bool Tween::resume(Object p_object, String p_key){

    Variant wasgo_var_key = p_key;
    int wasgo_size_key = 10 + String(p_key).size();
    uint8_t wasgo_buffer_key[wasgo_size_key];
    encode_variant(wasgo_var_key, wasgo_buffer_key, wasgo_size_key);
    
	return (bool) _wasgo_Tween_wrapper_resume(wasgo_id, p_object._get_wasgo_id(), wasgo_buffer_key, wasgo_size_key, wasgo_size_key);
}
bool Tween::resume_all(){
	return (bool) _wasgo_Tween_wrapper_resume_all(wasgo_id);
}
bool Tween::seek(float p_time){
	return (bool) _wasgo_Tween_wrapper_seek(wasgo_id, p_time);
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
	_wasgo_Tween_wrapper_set_tween_process_mode(wasgo_id, p_mode._get_wasgo_id());
}
bool Tween::start(){
	return (bool) _wasgo_Tween_wrapper_start(wasgo_id);
}
bool Tween::stop(Object p_object, String p_key){

    Variant wasgo_var_key = p_key;
    int wasgo_size_key = 10 + String(p_key).size();
    uint8_t wasgo_buffer_key[wasgo_size_key];
    encode_variant(wasgo_var_key, wasgo_buffer_key, wasgo_size_key);
    
	return (bool) _wasgo_Tween_wrapper_stop(wasgo_id, p_object._get_wasgo_id(), wasgo_buffer_key, wasgo_size_key, wasgo_size_key);
}
bool Tween::stop_all(){
	return (bool) _wasgo_Tween_wrapper_stop_all(wasgo_id);
}
bool Tween::targeting_method(Object p_object, String p_method, Object p_initial, String p_initial_method, Variant p_final_val, float p_duration, Tween::TransitionType p_trans_type, Tween::EaseType p_ease_type, float p_delay){

    Variant wasgo_var_method = p_method;
    int wasgo_size_method = 10 + String(p_method).size();
    uint8_t wasgo_buffer_method[wasgo_size_method];
    encode_variant(wasgo_var_method, wasgo_buffer_method, wasgo_size_method);
    

    Variant wasgo_var_initial_method = p_initial_method;
    int wasgo_size_initial_method = 10 + String(p_initial_method).size();
    uint8_t wasgo_buffer_initial_method[wasgo_size_initial_method];
    encode_variant(wasgo_var_initial_method, wasgo_buffer_initial_method, wasgo_size_initial_method);
    

    Variant wasgo_var_final_val = p_final_val;
    uint8_t wasgo_buffer_final_val[256];
    int wasgo_size_final_val = 256;
    encode_variant(wasgo_var_final_val, wasgo_buffer_final_val, wasgo_size_final_val);
    
	return (bool) _wasgo_Tween_wrapper_targeting_method(wasgo_id, p_object._get_wasgo_id(), wasgo_buffer_method, wasgo_size_method, wasgo_size_method, p_initial._get_wasgo_id(), wasgo_buffer_initial_method, wasgo_size_initial_method, wasgo_buffer_final_val, wasgo_size_final_val, p_duration, p_trans_type._get_wasgo_id(), p_ease_type._get_wasgo_id(), p_delay);
}
bool Tween::targeting_property(Object p_object, NodePath p_property, Object p_initial, NodePath p_initial_val, Variant p_final_val, float p_duration, Tween::TransitionType p_trans_type, Tween::EaseType p_ease_type, float p_delay){

    Variant wasgo_var_property = p_property;
    int wasgo_size_property = 10 + String(p_property).size();
    uint8_t wasgo_buffer_property[wasgo_size_property];
    encode_variant(wasgo_var_property, wasgo_buffer_property, wasgo_size_property);
    

    Variant wasgo_var_initial_val = p_initial_val;
    int wasgo_size_initial_val = 10 + String(p_initial_val).size();
    uint8_t wasgo_buffer_initial_val[wasgo_size_initial_val];
    encode_variant(wasgo_var_initial_val, wasgo_buffer_initial_val, wasgo_size_initial_val);
    

    Variant wasgo_var_final_val = p_final_val;
    uint8_t wasgo_buffer_final_val[256];
    int wasgo_size_final_val = 256;
    encode_variant(wasgo_var_final_val, wasgo_buffer_final_val, wasgo_size_final_val);
    
	return (bool) _wasgo_Tween_wrapper_targeting_property(wasgo_id, p_object._get_wasgo_id(), wasgo_buffer_property, wasgo_size_property, wasgo_size_property, p_initial._get_wasgo_id(), wasgo_buffer_initial_val, wasgo_size_initial_val, wasgo_buffer_final_val, wasgo_size_final_val, p_duration, p_trans_type._get_wasgo_id(), p_ease_type._get_wasgo_id(), p_delay);
}
float Tween::tell(){
	return (float) _wasgo_Tween_wrapper_tell(wasgo_id);
}

Tween::Tween(WasGoID p_wasgo_id) : Node(p_wasgo_id){
}
Tween::Tween(Node other) : Node(other._get_wasgo_id()){
}
Tween::Tween():Node(){
}
Tween Tween::new_instance(){
    return Tween(_wasgo_Tween_constructor());
}
WasGoID Tween::_get_wasgo_id(){
    return wasgo_id;
}
Tween::operator bool(){
    return (bool) wasgo_id;
}
