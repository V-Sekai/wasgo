/* THIS FILE IS GENERATED */
#include "AudioEffectFilter.h"
float AudioEffectFilter::get_cutoff(){
	return (float) _wasgo_AudioEffectFilter_wrapper_get_cutoff(wasgo_id));
}
AudioEffectFilter::FilterDB AudioEffectFilter::get_db(){
	return AudioEffectFilter::FilterDB::from_wasgo_id(_wasgo_AudioEffectFilter_wrapper_get_db(wasgo_id));
}
float AudioEffectFilter::get_gain(){
	return (float) _wasgo_AudioEffectFilter_wrapper_get_gain(wasgo_id));
}
float AudioEffectFilter::get_resonance(){
	return (float) _wasgo_AudioEffectFilter_wrapper_get_resonance(wasgo_id));
}
void AudioEffectFilter::set_cutoff(float p_freq){
	_wasgo_AudioEffectFilter_wrapper_set_cutoff(wasgo_id, freq);
}
void AudioEffectFilter::set_db(AudioEffectFilter::FilterDB p_amount){
	_wasgo_AudioEffectFilter_wrapper_set_db(wasgo_id, ((Variant) amount).get_wasgo_id());
}
void AudioEffectFilter::set_gain(float p_amount){
	_wasgo_AudioEffectFilter_wrapper_set_gain(wasgo_id, amount);
}
void AudioEffectFilter::set_resonance(float p_amount){
	_wasgo_AudioEffectFilter_wrapper_set_resonance(wasgo_id, amount);
}

AudioEffectFilter::AudioEffectFilter(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
AudioEffectFilter::~AudioEffectFilter(){
}