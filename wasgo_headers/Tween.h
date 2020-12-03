/* THIS FILE IS GENERATED */
#ifndef TWEEN_H
#define TWEEN_H

#include "wasgo\wasgo.h"

#include "ustring.h"
#include "Object.h"
#include "Variant.h"
#include "Node.h"
#include "NodePath.h"
class Tween : public Node{
public:
enum EaseType{
EASE_IN,
EASE_OUT,
EASE_IN_OUT,
EASE_OUT_IN
};
enum TransitionType{
TRANS_LINEAR,
TRANS_SINE,
TRANS_QUINT,
TRANS_QUART,
TRANS_QUAD,
TRANS_EXPO,
TRANS_ELASTIC,
TRANS_CUBIC,
TRANS_CIRC,
TRANS_BOUNCE,
TRANS_BACK
};
enum TweenProcessMode{
TWEEN_PROCESS_PHYSICS,
TWEEN_PROCESS_IDLE
};
bool follow_method(Object p_object, String p_method, Variant p_initial_val, Object p_target, String p_target_method, float p_duration, Tween::TransitionType p_trans_type = (Tween::TransitionType) 0, Tween::EaseType p_ease_type = (Tween::EaseType) 2, float p_delay = (float) 0);
bool follow_property(Object p_object, NodePath p_property, Variant p_initial_val, Object p_target, NodePath p_target_property, float p_duration, Tween::TransitionType p_trans_type = (Tween::TransitionType) 0, Tween::EaseType p_ease_type = (Tween::EaseType) 2, float p_delay = (float) 0);
float get_runtime();
float get_speed_scale();
Tween::TweenProcessMode get_tween_process_mode();
bool interpolate_callback(Object p_object, float p_duration, String p_callback, Variant p_arg1 = (Variant) "", Variant p_arg2 = (Variant) "", Variant p_arg3 = (Variant) "", Variant p_arg4 = (Variant) "", Variant p_arg5 = (Variant) "");
bool interpolate_deferred_callback(Object p_object, float p_duration, String p_callback, Variant p_arg1 = (Variant) "", Variant p_arg2 = (Variant) "", Variant p_arg3 = (Variant) "", Variant p_arg4 = (Variant) "", Variant p_arg5 = (Variant) "");
bool interpolate_method(Object p_object, String p_method, Variant p_initial_val, Variant p_final_val, float p_duration, Tween::TransitionType p_trans_type = (Tween::TransitionType) 0, Tween::EaseType p_ease_type = (Tween::EaseType) 2, float p_delay = (float) 0);
bool interpolate_property(Object p_object, NodePath p_property, Variant p_initial_val, Variant p_final_val, float p_duration, Tween::TransitionType p_trans_type = (Tween::TransitionType) 0, Tween::EaseType p_ease_type = (Tween::EaseType) 2, float p_delay = (float) 0);
bool is_active();
bool is_repeat();
bool remove(Object p_object, String p_key = (String) );
bool remove_all();
bool reset(Object p_object, String p_key = (String) );
bool reset_all();
bool resume(Object p_object, String p_key = (String) );
bool resume_all();
bool seek(float p_time);
void set_active(bool p_active);
void set_repeat(bool p_repeat);
void set_speed_scale(float p_speed);
void set_tween_process_mode(Tween::TweenProcessMode p_mode);
bool start();
bool stop(Object p_object, String p_key = (String) );
bool stop_all();
bool targeting_method(Object p_object, String p_method, Object p_initial, String p_initial_method, Variant p_final_val, float p_duration, Tween::TransitionType p_trans_type = (Tween::TransitionType) 0, Tween::EaseType p_ease_type = (Tween::EaseType) 2, float p_delay = (float) 0);
bool targeting_property(Object p_object, NodePath p_property, Object p_initial, NodePath p_initial_val, Variant p_final_val, float p_duration, Tween::TransitionType p_trans_type = (Tween::TransitionType) 0, Tween::EaseType p_ease_type = (Tween::EaseType) 2, float p_delay = (float) 0);
float tell();

protected:
Tween(WasGoId p_wasgo_id);
public:
Tween();
~Tween();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_Tween_wrapper_follow_method(WasGoId wasgo_id, WasGoId p_object, const uint8_t * p_method, int p_method_wasgo_buffer_size, WasGoId p_initial_val, WasGoId p_target, const uint8_t * p_target_method, int p_target_method_wasgo_buffer_size, float p_duration, WasGoId p_trans_type, WasGoId p_ease_type, float p_delay);
int _wasgo_Tween_wrapper_follow_property(WasGoId wasgo_id, WasGoId p_object, const uint8_t * p_property, int p_property_wasgo_buffer_size, WasGoId p_initial_val, WasGoId p_target, const uint8_t * p_target_property, int p_target_property_wasgo_buffer_size, float p_duration, WasGoId p_trans_type, WasGoId p_ease_type, float p_delay);
float _wasgo_Tween_wrapper_get_runtime(WasGoId wasgo_id);
float _wasgo_Tween_wrapper_get_speed_scale(WasGoId wasgo_id);
WasGoId _wasgo_Tween_wrapper_get_tween_process_mode(WasGoId wasgo_id);
int _wasgo_Tween_wrapper_interpolate_callback(WasGoId wasgo_id, WasGoId p_object, float p_duration, const uint8_t * p_callback, int p_callback_wasgo_buffer_size, WasGoId p_arg1, WasGoId p_arg2, WasGoId p_arg3, WasGoId p_arg4, WasGoId p_arg5);
int _wasgo_Tween_wrapper_interpolate_deferred_callback(WasGoId wasgo_id, WasGoId p_object, float p_duration, const uint8_t * p_callback, int p_callback_wasgo_buffer_size, WasGoId p_arg1, WasGoId p_arg2, WasGoId p_arg3, WasGoId p_arg4, WasGoId p_arg5);
int _wasgo_Tween_wrapper_interpolate_method(WasGoId wasgo_id, WasGoId p_object, const uint8_t * p_method, int p_method_wasgo_buffer_size, WasGoId p_initial_val, WasGoId p_final_val, float p_duration, WasGoId p_trans_type, WasGoId p_ease_type, float p_delay);
int _wasgo_Tween_wrapper_interpolate_property(WasGoId wasgo_id, WasGoId p_object, const uint8_t * p_property, int p_property_wasgo_buffer_size, WasGoId p_initial_val, WasGoId p_final_val, float p_duration, WasGoId p_trans_type, WasGoId p_ease_type, float p_delay);
int _wasgo_Tween_wrapper_is_active(WasGoId wasgo_id);
int _wasgo_Tween_wrapper_is_repeat(WasGoId wasgo_id);
int _wasgo_Tween_wrapper_remove(WasGoId wasgo_id, WasGoId p_object, const uint8_t * p_key, int p_key_wasgo_buffer_size);
int _wasgo_Tween_wrapper_remove_all(WasGoId wasgo_id);
int _wasgo_Tween_wrapper_reset(WasGoId wasgo_id, WasGoId p_object, const uint8_t * p_key, int p_key_wasgo_buffer_size);
int _wasgo_Tween_wrapper_reset_all(WasGoId wasgo_id);
int _wasgo_Tween_wrapper_resume(WasGoId wasgo_id, WasGoId p_object, const uint8_t * p_key, int p_key_wasgo_buffer_size);
int _wasgo_Tween_wrapper_resume_all(WasGoId wasgo_id);
int _wasgo_Tween_wrapper_seek(WasGoId wasgo_id, float p_time);
void _wasgo_Tween_wrapper_set_active(WasGoId wasgo_id, bool p_active);
void _wasgo_Tween_wrapper_set_repeat(WasGoId wasgo_id, bool p_repeat);
void _wasgo_Tween_wrapper_set_speed_scale(WasGoId wasgo_id, float p_speed);
void _wasgo_Tween_wrapper_set_tween_process_mode(WasGoId wasgo_id, WasGoId p_mode);
int _wasgo_Tween_wrapper_start(WasGoId wasgo_id);
int _wasgo_Tween_wrapper_stop(WasGoId wasgo_id, WasGoId p_object, const uint8_t * p_key, int p_key_wasgo_buffer_size);
int _wasgo_Tween_wrapper_stop_all(WasGoId wasgo_id);
int _wasgo_Tween_wrapper_targeting_method(WasGoId wasgo_id, WasGoId p_object, const uint8_t * p_method, int p_method_wasgo_buffer_size, WasGoId p_initial, const uint8_t * p_initial_method, int p_initial_method_wasgo_buffer_size, WasGoId p_final_val, float p_duration, WasGoId p_trans_type, WasGoId p_ease_type, float p_delay);
int _wasgo_Tween_wrapper_targeting_property(WasGoId wasgo_id, WasGoId p_object, const uint8_t * p_property, int p_property_wasgo_buffer_size, WasGoId p_initial, const uint8_t * p_initial_val, int p_initial_val_wasgo_buffer_size, WasGoId p_final_val, float p_duration, WasGoId p_trans_type, WasGoId p_ease_type, float p_delay);
float _wasgo_Tween_wrapper_tell(WasGoId wasgo_id);

    //constructor and destructor wrappers
    WasGoId _wasgo_Tween_constructor();
    void _wasgo_Tween_destructor(WasGoId p_wasgo_id);
            
}
#endif