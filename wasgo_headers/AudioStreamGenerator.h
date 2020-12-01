/* THIS FILE IS GENERATED */
#ifndef AUDIOSTREAMGENERATOR_H
#define AUDIOSTREAMGENERATOR_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "AudioStream.h"
class AudioStreamGenerator : public AudioStream{
public:
float get_buffer_length();
float get_mix_rate();
void set_buffer_length(float p_seconds);
void set_mix_rate(float p_hz);

AudioStreamGenerator(WasGoId p_wasgo_id);
~AudioStreamGenerator();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_AudioStreamGenerator_wrapper_get_buffer_length(WasGoId wasgo_id);
float _wasgo_AudioStreamGenerator_wrapper_get_mix_rate(WasGoId wasgo_id);
void _wasgo_AudioStreamGenerator_wrapper_set_buffer_length(WasGoId wasgo_id, float p_seconds);
void _wasgo_AudioStreamGenerator_wrapper_set_mix_rate(WasGoId wasgo_id, float p_hz);
}
#endif