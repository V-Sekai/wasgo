/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioEffectCompressor.h"
float AudioEffectCompressor::get_attack_us(){
	return (float) _wasgo_AudioEffectCompressor_wrapper_get_attack_us(wasgo_id);
}
float AudioEffectCompressor::get_gain(){
	return (float) _wasgo_AudioEffectCompressor_wrapper_get_gain(wasgo_id);
}
float AudioEffectCompressor::get_mix(){
	return (float) _wasgo_AudioEffectCompressor_wrapper_get_mix(wasgo_id);
}
float AudioEffectCompressor::get_ratio(){
	return (float) _wasgo_AudioEffectCompressor_wrapper_get_ratio(wasgo_id);
}
float AudioEffectCompressor::get_release_ms(){
	return (float) _wasgo_AudioEffectCompressor_wrapper_get_release_ms(wasgo_id);
}
String AudioEffectCompressor::get_sidechain(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_AudioEffectCompressor_wrapper_get_sidechain(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
float AudioEffectCompressor::get_threshold(){
	return (float) _wasgo_AudioEffectCompressor_wrapper_get_threshold(wasgo_id);
}
void AudioEffectCompressor::set_attack_us(float p_attack_us){
	_wasgo_AudioEffectCompressor_wrapper_set_attack_us(wasgo_id, p_attack_us);
}
void AudioEffectCompressor::set_gain(float p_gain){
	_wasgo_AudioEffectCompressor_wrapper_set_gain(wasgo_id, p_gain);
}
void AudioEffectCompressor::set_mix(float p_mix){
	_wasgo_AudioEffectCompressor_wrapper_set_mix(wasgo_id, p_mix);
}
void AudioEffectCompressor::set_ratio(float p_ratio){
	_wasgo_AudioEffectCompressor_wrapper_set_ratio(wasgo_id, p_ratio);
}
void AudioEffectCompressor::set_release_ms(float p_release_ms){
	_wasgo_AudioEffectCompressor_wrapper_set_release_ms(wasgo_id, p_release_ms);
}
void AudioEffectCompressor::set_sidechain(String p_sidechain){

    Variant wasgo_var_sidechain = p_sidechain;
    int wasgo_size_sidechain = String(p_sidechain).size();
    uint8_t wasgo_buffer_sidechain[wasgo_size_sidechain];
    encode_variant(wasgo_var_sidechain, wasgo_buffer_sidechain, wasgo_size_sidechain);
    
	_wasgo_AudioEffectCompressor_wrapper_set_sidechain(wasgo_id, wasgo_buffer_sidechain, wasgo_size_sidechain);
}
void AudioEffectCompressor::set_threshold(float p_threshold){
	_wasgo_AudioEffectCompressor_wrapper_set_threshold(wasgo_id, p_threshold);
}

AudioEffectCompressor::AudioEffectCompressor(WasGoID p_wasgo_id) : AudioEffect(p_wasgo_id){
}
AudioEffectCompressor::AudioEffectCompressor(AudioEffect other) : AudioEffect(other._get_wasgo_id()){
    wasgo_id = _wasgo_AudioEffectCompressor_constructor();
}
AudioEffectCompressor::new_instance(){
    return AudioEffectCompressor(_wasgo_AudioEffectCompressor_constructor());
}