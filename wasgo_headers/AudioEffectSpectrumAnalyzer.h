/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTSPECTRUMANALYZER_H
#define AUDIOEFFECTSPECTRUMANALYZER_H

#include "wasgo\wasgo.h"

#include "AudioEffect.h"
class AudioEffectSpectrumAnalyzer : public AudioEffect{
public:
enum FFT_Size{
FFT_SIZE_256,
FFT_SIZE_512,
FFT_SIZE_1024,
FFT_SIZE_2048,
FFT_SIZE_4096,
FFT_SIZE_MAX
};
float get_buffer_length();
AudioEffectSpectrumAnalyzer::FFT_Size get_fft_size();
float get_tap_back_pos();
void set_buffer_length(float p_seconds);
void set_fft_size(AudioEffectSpectrumAnalyzer::FFT_Size p_size);
void set_tap_back_pos(float p_seconds);

protected:
public:
explicit AudioEffectSpectrumAnalyzer(WasGoId p_wasgo_id);
explicit AudioEffectSpectrumAnalyzer(AudioEffect other);
AudioEffectSpectrumAnalyzer new_instance();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_AudioEffectSpectrumAnalyzer_wrapper_get_buffer_length(WasGoId wasgo_id);
WasGoId _wasgo_AudioEffectSpectrumAnalyzer_wrapper_get_fft_size(WasGoId wasgo_id);
float _wasgo_AudioEffectSpectrumAnalyzer_wrapper_get_tap_back_pos(WasGoId wasgo_id);
void _wasgo_AudioEffectSpectrumAnalyzer_wrapper_set_buffer_length(WasGoId wasgo_id, float p_seconds);
void _wasgo_AudioEffectSpectrumAnalyzer_wrapper_set_fft_size(WasGoId wasgo_id, WasGoId p_size);
void _wasgo_AudioEffectSpectrumAnalyzer_wrapper_set_tap_back_pos(WasGoId wasgo_id, float p_seconds);

    //constructor wrappers
    WasGoId _wasgo_AudioEffectSpectrumAnalyzer_constructor();
            
}
#endif