/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioEffectChorus.h"
float AudioEffectChorus::get_dry(){
	return (float) _wasgo_AudioEffectChorus_wrapper_get_dry(wasgo_id);
}
int AudioEffectChorus::get_voice_count(){
	return (int) _wasgo_AudioEffectChorus_wrapper_get_voice_count(wasgo_id);
}
float AudioEffectChorus::get_voice_cutoff_hz(int p_voice_idx){
	return (float) _wasgo_AudioEffectChorus_wrapper_get_voice_cutoff_hz(wasgo_id, p_voice_idx);
}
float AudioEffectChorus::get_voice_delay_ms(int p_voice_idx){
	return (float) _wasgo_AudioEffectChorus_wrapper_get_voice_delay_ms(wasgo_id, p_voice_idx);
}
float AudioEffectChorus::get_voice_depth_ms(int p_voice_idx){
	return (float) _wasgo_AudioEffectChorus_wrapper_get_voice_depth_ms(wasgo_id, p_voice_idx);
}
float AudioEffectChorus::get_voice_level_db(int p_voice_idx){
	return (float) _wasgo_AudioEffectChorus_wrapper_get_voice_level_db(wasgo_id, p_voice_idx);
}
float AudioEffectChorus::get_voice_pan(int p_voice_idx){
	return (float) _wasgo_AudioEffectChorus_wrapper_get_voice_pan(wasgo_id, p_voice_idx);
}
float AudioEffectChorus::get_voice_rate_hz(int p_voice_idx){
	return (float) _wasgo_AudioEffectChorus_wrapper_get_voice_rate_hz(wasgo_id, p_voice_idx);
}
float AudioEffectChorus::get_wet(){
	return (float) _wasgo_AudioEffectChorus_wrapper_get_wet(wasgo_id);
}
void AudioEffectChorus::set_dry(float p_amount){
	_wasgo_AudioEffectChorus_wrapper_set_dry(wasgo_id, p_amount);
}
void AudioEffectChorus::set_voice_count(int p_voices){
	_wasgo_AudioEffectChorus_wrapper_set_voice_count(wasgo_id, p_voices);
}
void AudioEffectChorus::set_voice_cutoff_hz(int p_voice_idx, float p_cutoff_hz){
	_wasgo_AudioEffectChorus_wrapper_set_voice_cutoff_hz(wasgo_id, p_voice_idx, p_cutoff_hz);
}
void AudioEffectChorus::set_voice_delay_ms(int p_voice_idx, float p_delay_ms){
	_wasgo_AudioEffectChorus_wrapper_set_voice_delay_ms(wasgo_id, p_voice_idx, p_delay_ms);
}
void AudioEffectChorus::set_voice_depth_ms(int p_voice_idx, float p_depth_ms){
	_wasgo_AudioEffectChorus_wrapper_set_voice_depth_ms(wasgo_id, p_voice_idx, p_depth_ms);
}
void AudioEffectChorus::set_voice_level_db(int p_voice_idx, float p_level_db){
	_wasgo_AudioEffectChorus_wrapper_set_voice_level_db(wasgo_id, p_voice_idx, p_level_db);
}
void AudioEffectChorus::set_voice_pan(int p_voice_idx, float p_pan){
	_wasgo_AudioEffectChorus_wrapper_set_voice_pan(wasgo_id, p_voice_idx, p_pan);
}
void AudioEffectChorus::set_voice_rate_hz(int p_voice_idx, float p_rate_hz){
	_wasgo_AudioEffectChorus_wrapper_set_voice_rate_hz(wasgo_id, p_voice_idx, p_rate_hz);
}
void AudioEffectChorus::set_wet(float p_amount){
	_wasgo_AudioEffectChorus_wrapper_set_wet(wasgo_id, p_amount);
}

AudioEffectChorus::AudioEffectChorus(WasGoID p_wasgo_id) : AudioEffect(p_wasgo_id){
}
AudioEffectChorus::AudioEffectChorus(AudioEffect other) : AudioEffect(other._get_wasgo_id()){
    wasgo_id = _wasgo_AudioEffectChorus_constructor();
}
AudioEffectChorus::new_instance(){
    return AudioEffectChorus(_wasgo_AudioEffectChorus_constructor());
}