/* THIS FILE IS GENERATED */
#include "AudioEffectDelay.h"
float AudioEffectDelay::get_dry(){
	return (float) _wasgo_AudioEffectDelay_wrapper_get_dry(wasgo_id);
}
float AudioEffectDelay::get_feedback_delay_ms(){
	return (float) _wasgo_AudioEffectDelay_wrapper_get_feedback_delay_ms(wasgo_id);
}
float AudioEffectDelay::get_feedback_level_db(){
	return (float) _wasgo_AudioEffectDelay_wrapper_get_feedback_level_db(wasgo_id);
}
float AudioEffectDelay::get_feedback_lowpass(){
	return (float) _wasgo_AudioEffectDelay_wrapper_get_feedback_lowpass(wasgo_id);
}
float AudioEffectDelay::get_tap1_delay_ms(){
	return (float) _wasgo_AudioEffectDelay_wrapper_get_tap1_delay_ms(wasgo_id);
}
float AudioEffectDelay::get_tap1_level_db(){
	return (float) _wasgo_AudioEffectDelay_wrapper_get_tap1_level_db(wasgo_id);
}
float AudioEffectDelay::get_tap1_pan(){
	return (float) _wasgo_AudioEffectDelay_wrapper_get_tap1_pan(wasgo_id);
}
float AudioEffectDelay::get_tap2_delay_ms(){
	return (float) _wasgo_AudioEffectDelay_wrapper_get_tap2_delay_ms(wasgo_id);
}
float AudioEffectDelay::get_tap2_level_db(){
	return (float) _wasgo_AudioEffectDelay_wrapper_get_tap2_level_db(wasgo_id);
}
float AudioEffectDelay::get_tap2_pan(){
	return (float) _wasgo_AudioEffectDelay_wrapper_get_tap2_pan(wasgo_id);
}
bool AudioEffectDelay::is_feedback_active(){
	return (bool) _wasgo_AudioEffectDelay_wrapper_is_feedback_active(wasgo_id);
}
bool AudioEffectDelay::is_tap1_active(){
	return (bool) _wasgo_AudioEffectDelay_wrapper_is_tap1_active(wasgo_id);
}
bool AudioEffectDelay::is_tap2_active(){
	return (bool) _wasgo_AudioEffectDelay_wrapper_is_tap2_active(wasgo_id);
}
void AudioEffectDelay::set_dry(float p_amount){
	_wasgo_AudioEffectDelay_wrapper_set_dry(wasgo_id, p_amount);
}
void AudioEffectDelay::set_feedback_active(bool p_amount){
	_wasgo_AudioEffectDelay_wrapper_set_feedback_active(wasgo_id, p_amount);
}
void AudioEffectDelay::set_feedback_delay_ms(float p_amount){
	_wasgo_AudioEffectDelay_wrapper_set_feedback_delay_ms(wasgo_id, p_amount);
}
void AudioEffectDelay::set_feedback_level_db(float p_amount){
	_wasgo_AudioEffectDelay_wrapper_set_feedback_level_db(wasgo_id, p_amount);
}
void AudioEffectDelay::set_feedback_lowpass(float p_amount){
	_wasgo_AudioEffectDelay_wrapper_set_feedback_lowpass(wasgo_id, p_amount);
}
void AudioEffectDelay::set_tap1_active(bool p_amount){
	_wasgo_AudioEffectDelay_wrapper_set_tap1_active(wasgo_id, p_amount);
}
void AudioEffectDelay::set_tap1_delay_ms(float p_amount){
	_wasgo_AudioEffectDelay_wrapper_set_tap1_delay_ms(wasgo_id, p_amount);
}
void AudioEffectDelay::set_tap1_level_db(float p_amount){
	_wasgo_AudioEffectDelay_wrapper_set_tap1_level_db(wasgo_id, p_amount);
}
void AudioEffectDelay::set_tap1_pan(float p_amount){
	_wasgo_AudioEffectDelay_wrapper_set_tap1_pan(wasgo_id, p_amount);
}
void AudioEffectDelay::set_tap2_active(bool p_amount){
	_wasgo_AudioEffectDelay_wrapper_set_tap2_active(wasgo_id, p_amount);
}
void AudioEffectDelay::set_tap2_delay_ms(float p_amount){
	_wasgo_AudioEffectDelay_wrapper_set_tap2_delay_ms(wasgo_id, p_amount);
}
void AudioEffectDelay::set_tap2_level_db(float p_amount){
	_wasgo_AudioEffectDelay_wrapper_set_tap2_level_db(wasgo_id, p_amount);
}
void AudioEffectDelay::set_tap2_pan(float p_amount){
	_wasgo_AudioEffectDelay_wrapper_set_tap2_pan(wasgo_id, p_amount);
}