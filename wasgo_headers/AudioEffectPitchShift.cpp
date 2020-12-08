/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioEffectPitchShift.h"
AudioEffectPitchShift::FFT_Size AudioEffectPitchShift::get_fft_size(){
	return AudioEffectPitchShift::FFT_Size(_wasgo_AudioEffectPitchShift_wrapper_get_fft_size(wasgo_id));
}
int AudioEffectPitchShift::get_oversampling(){
	return (int) _wasgo_AudioEffectPitchShift_wrapper_get_oversampling(wasgo_id);
}
float AudioEffectPitchShift::get_pitch_scale(){
	return (float) _wasgo_AudioEffectPitchShift_wrapper_get_pitch_scale(wasgo_id);
}
void AudioEffectPitchShift::set_fft_size(AudioEffectPitchShift::FFT_Size p_size){
	_wasgo_AudioEffectPitchShift_wrapper_set_fft_size(wasgo_id, p_size._get_wasgo_id());
}
void AudioEffectPitchShift::set_oversampling(int p_amount){
	_wasgo_AudioEffectPitchShift_wrapper_set_oversampling(wasgo_id, p_amount);
}
void AudioEffectPitchShift::set_pitch_scale(float p_rate){
	_wasgo_AudioEffectPitchShift_wrapper_set_pitch_scale(wasgo_id, p_rate);
}

AudioEffectPitchShift::AudioEffectPitchShift(WasGoID p_wasgo_id) : AudioEffect(p_wasgo_id){
}
AudioEffectPitchShift::AudioEffectPitchShift(AudioEffect other) : AudioEffect(other._get_wasgo_id()){
}
AudioEffectPitchShift::AudioEffectPitchShift():AudioEffect(){
}
AudioEffectPitchShift AudioEffectPitchShift::new_instance(){
    return AudioEffectPitchShift(_wasgo_AudioEffectPitchShift_constructor());
}
WasGoID AudioEffectPitchShift::_get_wasgo_id(){
    return wasgo_id;
}
AudioEffectPitchShift::operator bool(){
    return (bool) wasgo_id;
}
