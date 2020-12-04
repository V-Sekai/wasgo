/* THIS FILE IS GENERATED */
#ifndef AUDIOSTREAMRANDOMPITCH_H
#define AUDIOSTREAMRANDOMPITCH_H

#include "wasgo\wasgo.h"

#include "AudioStream.h"
class AudioStreamRandomPitch : public AudioStream{
public:
AudioStream get_audio_stream();
float get_random_pitch();
void set_audio_stream(AudioStream p_stream);
void set_random_pitch(float p_scale);

protected:
public:
explicit AudioStreamRandomPitch(WasGoID p_wasgo_id);
explicit AudioStreamRandomPitch(AudioStream other);
AudioStreamRandomPitch new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_AudioStreamRandomPitch_wrapper_get_audio_stream(WasGoID wasgo_id);
float _wasgo_AudioStreamRandomPitch_wrapper_get_random_pitch(WasGoID wasgo_id);
void _wasgo_AudioStreamRandomPitch_wrapper_set_audio_stream(WasGoID wasgo_id, WasGoID p_stream);
void _wasgo_AudioStreamRandomPitch_wrapper_set_random_pitch(WasGoID wasgo_id, float p_scale);

    //constructor wrappers
    WasGoID _wasgo_AudioStreamRandomPitch_constructor();
            
}
#endif