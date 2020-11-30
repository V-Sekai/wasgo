/* THIS FILE IS GENERATED */
#include "AudioStreamGenerator.h"
float AudioStreamGenerator::get_buffer_length(){
	return (float) _wasgo_AudioStreamGenerator_wrapper_get_buffer_length(wasgo_id));
}
float AudioStreamGenerator::get_mix_rate(){
	return (float) _wasgo_AudioStreamGenerator_wrapper_get_mix_rate(wasgo_id));
}
void AudioStreamGenerator::set_buffer_length(float p_seconds){
	_wasgo_AudioStreamGenerator_wrapper_set_buffer_length(wasgo_id, seconds);
}
void AudioStreamGenerator::set_mix_rate(float p_hz){
	_wasgo_AudioStreamGenerator_wrapper_set_mix_rate(wasgo_id, hz);
}

AudioStreamGenerator::AudioStreamGenerator(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
AudioStreamGenerator::~AudioStreamGenerator(){
}