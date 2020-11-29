/* THIS FILE IS GENERATED */
#ifndef AUDIOSTREAMGENERATOR_H
#define AUDIOSTREAMGENERATOR_H

#include "stdint.h"

#include "AudioStream.h"
class AudioStreamGenerator : public AudioStream{
public: AudioStreamGenerator();
float get_buffer_length();
float get_mix_rate();
void set_buffer_length(float p_seconds);
void set_mix_rate(float p_hz);
};
#endif