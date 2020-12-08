/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioEffectFilter.h"
float AudioEffectFilter::get_cutoff(){
	return (float) _wasgo_AudioEffectFilter_wrapper_get_cutoff(wasgo_id);
}
AudioEffectFilter::FilterDB AudioEffectFilter::get_db(){
	return AudioEffectFilter::FilterDB(_wasgo_AudioEffectFilter_wrapper_get_db(wasgo_id));
}
float AudioEffectFilter::get_gain(){
	return (float) _wasgo_AudioEffectFilter_wrapper_get_gain(wasgo_id);
}
float AudioEffectFilter::get_resonance(){
	return (float) _wasgo_AudioEffectFilter_wrapper_get_resonance(wasgo_id);
}
void AudioEffectFilter::set_cutoff(float p_freq){
	_wasgo_AudioEffectFilter_wrapper_set_cutoff(wasgo_id, p_freq);
}
void AudioEffectFilter::set_db(AudioEffectFilter::FilterDB p_amount){
	_wasgo_AudioEffectFilter_wrapper_set_db(wasgo_id, p_amount._get_wasgo_id());
}
void AudioEffectFilter::set_gain(float p_amount){
	_wasgo_AudioEffectFilter_wrapper_set_gain(wasgo_id, p_amount);
}
void AudioEffectFilter::set_resonance(float p_amount){
	_wasgo_AudioEffectFilter_wrapper_set_resonance(wasgo_id, p_amount);
}

AudioEffectFilter::AudioEffectFilter(WasGoID p_wasgo_id) : AudioEffect(p_wasgo_id){
}
AudioEffectFilter::AudioEffectFilter(AudioEffect other) : AudioEffect(other._get_wasgo_id()){
}
AudioEffectFilter::AudioEffectFilter():AudioEffect(){
}
AudioEffectFilter AudioEffectFilter::new_instance(){
    return AudioEffectFilter(_wasgo_AudioEffectFilter_constructor());
}
WasGoID AudioEffectFilter::_get_wasgo_id(){
    return wasgo_id;
}
AudioEffectFilter::operator bool(){
    return (bool) wasgo_id;
}
