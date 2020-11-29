/* THIS FILE IS GENERATED */
#ifndef AUDIOSTREAMRANDOMPITCH_H
#define AUDIOSTREAMRANDOMPITCH_H

#include "stdint.h"

#include "AudioStream.h"
class AudioStreamRandomPitch : public AudioStream{
public: AudioStreamRandomPitch();
AudioStream get_audio_stream();
float get_random_pitch();
void set_audio_stream(AudioStream p_stream);
void set_random_pitch(float p_scale);
};
#endif