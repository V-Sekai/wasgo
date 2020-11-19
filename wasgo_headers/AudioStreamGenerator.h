/* THIS FILE IS GENERATED */
#ifndef AUDIOSTREAMGENERATOR_H
#define AUDIOSTREAMGENERATOR_H

#include <stdint.h>

#include "AudioStream.h"
class AudioStreamGenerator : public AudioStream{
public: AudioStreamGenerator();
float  get_buffer_length();
float  get_buffer_length();
float  get_mix_rate();
float  get_mix_rate();
void  set_buffer_length(float seconds);
void  set_mix_rate(float hz);
};
#endif