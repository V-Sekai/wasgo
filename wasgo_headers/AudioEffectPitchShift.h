/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "AudioEffect.h"
class AudioEffectPitchShift : public AudioEffect{
public: AudioEffectPitchShift();
enum FFT_Size{
FFT_SIZE_256: 0,
FFT_SIZE_512: 1,
FFT_SIZE_1024: 2,
FFT_SIZE_2048: 3,
FFT_SIZE_4096: 4,
};
enum.AudioEffectPitchShift::FFT_Size  get_fft_size();
enum.AudioEffectPitchShift::FFT_Size  get_fft_size();
int  get_oversampling();
int  get_oversampling();
float  get_pitch_scale();
float  get_pitch_scale();
void  set_fft_size(int size);
void  set_oversampling(int amount);
void  set_pitch_scale(float rate);
};