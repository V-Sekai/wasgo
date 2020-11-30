/* THIS FILE IS GENERATED */
#include "AudioEffectSpectrumAnalyzer.h"
float AudioEffectSpectrumAnalyzer::get_buffer_length(){
	return (float) _wasgo_AudioEffectSpectrumAnalyzer_wrapper_get_buffer_length(wasgo_id));
}
AudioEffectSpectrumAnalyzer::FFT_Size AudioEffectSpectrumAnalyzer::get_fft_size(){
	return AudioEffectSpectrumAnalyzer::FFT_Size::from_wasgo_id(_wasgo_AudioEffectSpectrumAnalyzer_wrapper_get_fft_size(wasgo_id));
}
float AudioEffectSpectrumAnalyzer::get_tap_back_pos(){
	return (float) _wasgo_AudioEffectSpectrumAnalyzer_wrapper_get_tap_back_pos(wasgo_id));
}
void AudioEffectSpectrumAnalyzer::set_buffer_length(float p_seconds){
	_wasgo_AudioEffectSpectrumAnalyzer_wrapper_set_buffer_length(wasgo_id, seconds);
}
void AudioEffectSpectrumAnalyzer::set_fft_size(AudioEffectSpectrumAnalyzer::FFT_Size p_size){
	_wasgo_AudioEffectSpectrumAnalyzer_wrapper_set_fft_size(wasgo_id, ((Variant) size).get_wasgo_id());
}
void AudioEffectSpectrumAnalyzer::set_tap_back_pos(float p_seconds){
	_wasgo_AudioEffectSpectrumAnalyzer_wrapper_set_tap_back_pos(wasgo_id, seconds);
}

AudioEffectSpectrumAnalyzer::AudioEffectSpectrumAnalyzer(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
AudioEffectSpectrumAnalyzer::~AudioEffectSpectrumAnalyzer(){
}