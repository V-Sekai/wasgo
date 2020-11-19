/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "AudioEffect.h"
class AudioEffectSpectrumAnalyzer : public AudioEffect{
public: AudioEffectSpectrumAnalyzer();
enum FFT_Size{
FFT_SIZE_256: 0,
FFT_SIZE_512: 1,
FFT_SIZE_1024: 2,
FFT_SIZE_2048: 3,
FFT_SIZE_4096: 4,
};
float  get_buffer_length();
float  get_buffer_length();
enum.AudioEffectSpectrumAnalyzer::FFT_Size  get_fft_size();
enum.AudioEffectSpectrumAnalyzer::FFT_Size  get_fft_size();
float  get_tap_back_pos();
float  get_tap_back_pos();
void  set_buffer_length(float seconds);
void  set_fft_size(int size);
void  set_tap_back_pos(float seconds);
};