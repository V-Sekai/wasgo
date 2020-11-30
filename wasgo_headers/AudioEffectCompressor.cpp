/* THIS FILE IS GENERATED */
#include "AudioEffectCompressor.h"
float AudioEffectCompressor::get_attack_us(){
	return (float) _wasgo_AudioEffectCompressor_wrapper_get_attack_us(wasgo_id));
}
float AudioEffectCompressor::get_gain(){
	return (float) _wasgo_AudioEffectCompressor_wrapper_get_gain(wasgo_id));
}
float AudioEffectCompressor::get_mix(){
	return (float) _wasgo_AudioEffectCompressor_wrapper_get_mix(wasgo_id));
}
float AudioEffectCompressor::get_ratio(){
	return (float) _wasgo_AudioEffectCompressor_wrapper_get_ratio(wasgo_id));
}
float AudioEffectCompressor::get_release_ms(){
	return (float) _wasgo_AudioEffectCompressor_wrapper_get_release_ms(wasgo_id));
}
String AudioEffectCompressor::get_sidechain(){
	return String::from_wasgo_id(_wasgo_AudioEffectCompressor_wrapper_get_sidechain(wasgo_id));
}
float AudioEffectCompressor::get_threshold(){
	return (float) _wasgo_AudioEffectCompressor_wrapper_get_threshold(wasgo_id));
}
void AudioEffectCompressor::set_attack_us(float p_attack_us){
	_wasgo_AudioEffectCompressor_wrapper_set_attack_us(wasgo_id, attack_us);
}
void AudioEffectCompressor::set_gain(float p_gain){
	_wasgo_AudioEffectCompressor_wrapper_set_gain(wasgo_id, gain);
}
void AudioEffectCompressor::set_mix(float p_mix){
	_wasgo_AudioEffectCompressor_wrapper_set_mix(wasgo_id, mix);
}
void AudioEffectCompressor::set_ratio(float p_ratio){
	_wasgo_AudioEffectCompressor_wrapper_set_ratio(wasgo_id, ratio);
}
void AudioEffectCompressor::set_release_ms(float p_release_ms){
	_wasgo_AudioEffectCompressor_wrapper_set_release_ms(wasgo_id, release_ms);
}
void AudioEffectCompressor::set_sidechain(String p_sidechain){
	_wasgo_AudioEffectCompressor_wrapper_set_sidechain(wasgo_id, ((Variant) sidechain).get_wasgo_id());
}
void AudioEffectCompressor::set_threshold(float p_threshold){
	_wasgo_AudioEffectCompressor_wrapper_set_threshold(wasgo_id, threshold);
}

AudioEffectCompressor::AudioEffectCompressor(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
AudioEffectCompressor::~AudioEffectCompressor(){
}