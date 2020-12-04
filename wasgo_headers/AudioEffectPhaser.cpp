/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioEffectPhaser.h"
float AudioEffectPhaser::get_depth(){
	return (float) _wasgo_AudioEffectPhaser_wrapper_get_depth(wasgo_id);
}
float AudioEffectPhaser::get_feedback(){
	return (float) _wasgo_AudioEffectPhaser_wrapper_get_feedback(wasgo_id);
}
float AudioEffectPhaser::get_range_max_hz(){
	return (float) _wasgo_AudioEffectPhaser_wrapper_get_range_max_hz(wasgo_id);
}
float AudioEffectPhaser::get_range_min_hz(){
	return (float) _wasgo_AudioEffectPhaser_wrapper_get_range_min_hz(wasgo_id);
}
float AudioEffectPhaser::get_rate_hz(){
	return (float) _wasgo_AudioEffectPhaser_wrapper_get_rate_hz(wasgo_id);
}
void AudioEffectPhaser::set_depth(float p_depth){
	_wasgo_AudioEffectPhaser_wrapper_set_depth(wasgo_id, p_depth);
}
void AudioEffectPhaser::set_feedback(float p_fbk){
	_wasgo_AudioEffectPhaser_wrapper_set_feedback(wasgo_id, p_fbk);
}
void AudioEffectPhaser::set_range_max_hz(float p_hz){
	_wasgo_AudioEffectPhaser_wrapper_set_range_max_hz(wasgo_id, p_hz);
}
void AudioEffectPhaser::set_range_min_hz(float p_hz){
	_wasgo_AudioEffectPhaser_wrapper_set_range_min_hz(wasgo_id, p_hz);
}
void AudioEffectPhaser::set_rate_hz(float p_hz){
	_wasgo_AudioEffectPhaser_wrapper_set_rate_hz(wasgo_id, p_hz);
}

AudioEffectPhaser::AudioEffectPhaser(WasGoId p_wasgo_id) : AudioEffect(p_wasgo_id){
}
AudioEffectPhaser::AudioEffectPhaser(AudioEffect other) : AudioEffect(other._get_wasgo_id()){
    wasgo_id = _wasgo_AudioEffectPhaser_constructor();
}
AudioEffectPhaser::new_instance(){
    return AudioEffectPhaser(_wasgo_AudioEffectPhaser_constructor());
}