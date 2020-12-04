/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioEffectDistortion.h"
float AudioEffectDistortion::get_drive(){
	return (float) _wasgo_AudioEffectDistortion_wrapper_get_drive(wasgo_id);
}
float AudioEffectDistortion::get_keep_hf_hz(){
	return (float) _wasgo_AudioEffectDistortion_wrapper_get_keep_hf_hz(wasgo_id);
}
AudioEffectDistortion::Mode AudioEffectDistortion::get_mode(){
	return AudioEffectDistortion::Mode(_wasgo_AudioEffectDistortion_wrapper_get_mode(wasgo_id));
}
float AudioEffectDistortion::get_post_gain(){
	return (float) _wasgo_AudioEffectDistortion_wrapper_get_post_gain(wasgo_id);
}
float AudioEffectDistortion::get_pre_gain(){
	return (float) _wasgo_AudioEffectDistortion_wrapper_get_pre_gain(wasgo_id);
}
void AudioEffectDistortion::set_drive(float p_drive){
	_wasgo_AudioEffectDistortion_wrapper_set_drive(wasgo_id, p_drive);
}
void AudioEffectDistortion::set_keep_hf_hz(float p_keep_hf_hz){
	_wasgo_AudioEffectDistortion_wrapper_set_keep_hf_hz(wasgo_id, p_keep_hf_hz);
}
void AudioEffectDistortion::set_mode(AudioEffectDistortion::Mode p_mode){
	_wasgo_AudioEffectDistortion_wrapper_set_mode(wasgo_id, p_mode._get_wasgo_id());
}
void AudioEffectDistortion::set_post_gain(float p_post_gain){
	_wasgo_AudioEffectDistortion_wrapper_set_post_gain(wasgo_id, p_post_gain);
}
void AudioEffectDistortion::set_pre_gain(float p_pre_gain){
	_wasgo_AudioEffectDistortion_wrapper_set_pre_gain(wasgo_id, p_pre_gain);
}

AudioEffectDistortion::AudioEffectDistortion(WasGoID p_wasgo_id) : AudioEffect(p_wasgo_id){
}
AudioEffectDistortion::AudioEffectDistortion(AudioEffect other) : AudioEffect(other._get_wasgo_id()){
    wasgo_id = _wasgo_AudioEffectDistortion_constructor();
}
AudioEffectDistortion::new_instance(){
    return AudioEffectDistortion(_wasgo_AudioEffectDistortion_constructor());
}