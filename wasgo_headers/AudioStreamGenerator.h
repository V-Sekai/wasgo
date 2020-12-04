/* THIS FILE IS GENERATED */
#ifndef AUDIOSTREAMGENERATOR_H
#define AUDIOSTREAMGENERATOR_H

#include "wasgo\wasgo.h"

#include "AudioStream.h"
class AudioStreamGenerator : public AudioStream{
public:
float get_buffer_length();
float get_mix_rate();
void set_buffer_length(float p_seconds);
void set_mix_rate(float p_hz);

protected:
public:
explicit AudioStreamGenerator(WasGoID p_wasgo_id);
explicit AudioStreamGenerator(AudioStream other);
AudioStreamGenerator new_instance();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_AudioStreamGenerator_wrapper_get_buffer_length(WasGoID wasgo_id);
float _wasgo_AudioStreamGenerator_wrapper_get_mix_rate(WasGoID wasgo_id);
void _wasgo_AudioStreamGenerator_wrapper_set_buffer_length(WasGoID wasgo_id, float p_seconds);
void _wasgo_AudioStreamGenerator_wrapper_set_mix_rate(WasGoID wasgo_id, float p_hz);

    //constructor wrappers
    WasGoID _wasgo_AudioStreamGenerator_constructor();
            
}
#endif