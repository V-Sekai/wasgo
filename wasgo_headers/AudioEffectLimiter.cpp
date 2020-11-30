/* THIS FILE IS GENERATED */
#include "AudioEffectLimiter.h"
float AudioEffectLimiter::get_ceiling_db(){
	return (float) _wasgo_AudioEffectLimiter_wrapper_get_ceiling_db(wasgo_id));
}
float AudioEffectLimiter::get_soft_clip_db(){
	return (float) _wasgo_AudioEffectLimiter_wrapper_get_soft_clip_db(wasgo_id));
}
float AudioEffectLimiter::get_soft_clip_ratio(){
	return (float) _wasgo_AudioEffectLimiter_wrapper_get_soft_clip_ratio(wasgo_id));
}
float AudioEffectLimiter::get_threshold_db(){
	return (float) _wasgo_AudioEffectLimiter_wrapper_get_threshold_db(wasgo_id));
}
void AudioEffectLimiter::set_ceiling_db(float p_ceiling){
	_wasgo_AudioEffectLimiter_wrapper_set_ceiling_db(wasgo_id, ceiling);
}
void AudioEffectLimiter::set_soft_clip_db(float p_soft_clip){
	_wasgo_AudioEffectLimiter_wrapper_set_soft_clip_db(wasgo_id, soft_clip);
}
void AudioEffectLimiter::set_soft_clip_ratio(float p_soft_clip){
	_wasgo_AudioEffectLimiter_wrapper_set_soft_clip_ratio(wasgo_id, soft_clip);
}
void AudioEffectLimiter::set_threshold_db(float p_threshold){
	_wasgo_AudioEffectLimiter_wrapper_set_threshold_db(wasgo_id, threshold);
}

AudioEffectLimiter::AudioEffectLimiter(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
AudioEffectLimiter::~AudioEffectLimiter(){
}