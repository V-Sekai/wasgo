/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioEffectLimiter.h"
float AudioEffectLimiter::get_ceiling_db(){
	return (float) _wasgo_AudioEffectLimiter_wrapper_get_ceiling_db(wasgo_id);
}
float AudioEffectLimiter::get_soft_clip_db(){
	return (float) _wasgo_AudioEffectLimiter_wrapper_get_soft_clip_db(wasgo_id);
}
float AudioEffectLimiter::get_soft_clip_ratio(){
	return (float) _wasgo_AudioEffectLimiter_wrapper_get_soft_clip_ratio(wasgo_id);
}
float AudioEffectLimiter::get_threshold_db(){
	return (float) _wasgo_AudioEffectLimiter_wrapper_get_threshold_db(wasgo_id);
}
void AudioEffectLimiter::set_ceiling_db(float p_ceiling){
	_wasgo_AudioEffectLimiter_wrapper_set_ceiling_db(wasgo_id, p_ceiling);
}
void AudioEffectLimiter::set_soft_clip_db(float p_soft_clip){
	_wasgo_AudioEffectLimiter_wrapper_set_soft_clip_db(wasgo_id, p_soft_clip);
}
void AudioEffectLimiter::set_soft_clip_ratio(float p_soft_clip){
	_wasgo_AudioEffectLimiter_wrapper_set_soft_clip_ratio(wasgo_id, p_soft_clip);
}
void AudioEffectLimiter::set_threshold_db(float p_threshold){
	_wasgo_AudioEffectLimiter_wrapper_set_threshold_db(wasgo_id, p_threshold);
}

AudioEffectLimiter::AudioEffectLimiter(WasGoID p_wasgo_id) : AudioEffect(p_wasgo_id){
}
AudioEffectLimiter::AudioEffectLimiter(AudioEffect other) : AudioEffect(other._get_wasgo_id()){
}
AudioEffectLimiter::AudioEffectLimiter():AudioEffect(){
}
AudioEffectLimiter AudioEffectLimiter::new_instance(){
    return AudioEffectLimiter(_wasgo_AudioEffectLimiter_constructor());
}
WasGoID AudioEffectLimiter::_get_wasgo_id(){
    return wasgo_id;
}
AudioEffectLimiter::operator bool(){
    return (bool) wasgo_id;
}
