/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTSPECTRUMANALYZER_H
#define AUDIOEFFECTSPECTRUMANALYZER_H

#include "stdint.h"

#include "AudioEffect.h"
class AudioEffectSpectrumAnalyzer : public AudioEffect{
public: AudioEffectSpectrumAnalyzer();
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
};
#endif