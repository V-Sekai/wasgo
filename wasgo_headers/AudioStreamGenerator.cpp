/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioStreamGenerator.h"
float AudioStreamGenerator::get_buffer_length(){
	return (float) _wasgo_AudioStreamGenerator_wrapper_get_buffer_length(wasgo_id);
}
float AudioStreamGenerator::get_mix_rate(){
	return (float) _wasgo_AudioStreamGenerator_wrapper_get_mix_rate(wasgo_id);
}
void AudioStreamGenerator::set_buffer_length(float p_seconds){
	_wasgo_AudioStreamGenerator_wrapper_set_buffer_length(wasgo_id, p_seconds);
}
void AudioStreamGenerator::set_mix_rate(float p_hz){
	_wasgo_AudioStreamGenerator_wrapper_set_mix_rate(wasgo_id, p_hz);
}

AudioStreamGenerator::AudioStreamGenerator(WasGoId p_wasgo_id) : AudioStream(p_wasgo_id){
}
AudioStreamGenerator::AudioStreamGenerator(){
    wasgo_id = _wasgo_AudioStreamGenerator_constructor();
}
AudioStreamGenerator::~AudioStreamGenerator(){
    _wasgo_AudioStreamGenerator_destructor(wasgo_id);
}