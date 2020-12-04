/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioEffectStereoEnhance.h"
float AudioEffectStereoEnhance::get_pan_pullout(){
	return (float) _wasgo_AudioEffectStereoEnhance_wrapper_get_pan_pullout(wasgo_id);
}
float AudioEffectStereoEnhance::get_surround(){
	return (float) _wasgo_AudioEffectStereoEnhance_wrapper_get_surround(wasgo_id);
}
float AudioEffectStereoEnhance::get_time_pullout(){
	return (float) _wasgo_AudioEffectStereoEnhance_wrapper_get_time_pullout(wasgo_id);
}
void AudioEffectStereoEnhance::set_pan_pullout(float p_amount){
	_wasgo_AudioEffectStereoEnhance_wrapper_set_pan_pullout(wasgo_id, p_amount);
}
void AudioEffectStereoEnhance::set_surround(float p_amount){
	_wasgo_AudioEffectStereoEnhance_wrapper_set_surround(wasgo_id, p_amount);
}
void AudioEffectStereoEnhance::set_time_pullout(float p_amount){
	_wasgo_AudioEffectStereoEnhance_wrapper_set_time_pullout(wasgo_id, p_amount);
}

AudioEffectStereoEnhance::AudioEffectStereoEnhance(WasGoID p_wasgo_id) : AudioEffect(p_wasgo_id){
}
AudioEffectStereoEnhance::AudioEffectStereoEnhance(AudioEffect other) : AudioEffect(other._get_wasgo_id()){
    wasgo_id = _wasgo_AudioEffectStereoEnhance_constructor();
}
AudioEffectStereoEnhance::new_instance(){
    return AudioEffectStereoEnhance(_wasgo_AudioEffectStereoEnhance_constructor());
}