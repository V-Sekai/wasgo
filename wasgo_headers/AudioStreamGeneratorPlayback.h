/* THIS FILE IS GENERATED */
#ifndef AUDIOSTREAMGENERATORPLAYBACK_H
#define AUDIOSTREAMGENERATORPLAYBACK_H

#include "stdint.h"

#include "Variant.h"
#include "AudioStreamPlaybackResampled.h"
class AudioStreamGeneratorPlayback : public AudioStreamPlaybackResampled{
public: AudioStreamGeneratorPlayback();
bool can_push_buffer(int p_amount);
void clear_buffer();
int get_frames_available();
int get_skips();
bool push_buffer(PoolVector2Array p_frames);
bool push_frame(Vector2 p_frame);
};
#endif