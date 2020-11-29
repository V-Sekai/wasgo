/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTPITCHSHIFT_H
#define AUDIOEFFECTPITCHSHIFT_H

#include "stdint.h"

#include "AudioEffect.h"
class AudioEffectPitchShift : public AudioEffect{
public: AudioEffectPitchShift();
enum FFT_Size{
FFT_SIZE_256,
FFT_SIZE_512,
FFT_SIZE_1024,
FFT_SIZE_2048,
FFT_SIZE_4096,
FFT_SIZE_MAX
};
AudioEffectPitchShift::FFT_Size get_fft_size();
int get_oversampling();
float get_pitch_scale();
void set_fft_size(AudioEffectPitchShift::FFT_Size p_size);
void set_oversampling(int p_amount);
void set_pitch_scale(float p_rate);
};
#endif