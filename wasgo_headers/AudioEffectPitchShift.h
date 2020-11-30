/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTPITCHSHIFT_H
#define AUDIOEFFECTPITCHSHIFT_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "AudioEffect.h"
class AudioEffectPitchShift : public AudioEffect{
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

AudioEffectPitchShift(WasGoId p_wasgo_id);
~AudioEffectPitchShift();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_AudioEffectPitchShift_wrapper_get_fft_size(WasGoId wasgo_id);
int _wasgo_AudioEffectPitchShift_wrapper_get_oversampling(WasGoId wasgo_id);
float _wasgo_AudioEffectPitchShift_wrapper_get_pitch_scale(WasGoId wasgo_id);
void _wasgo_AudioEffectPitchShift_wrapper_set_fft_size(WasGoId wasgo_id, WasGo::WasGoId p_size);
void _wasgo_AudioEffectPitchShift_wrapper_set_oversampling(WasGoId wasgo_id, int p_amount);
void _wasgo_AudioEffectPitchShift_wrapper_set_pitch_scale(WasGoId wasgo_id, float p_rate);
}
#endif