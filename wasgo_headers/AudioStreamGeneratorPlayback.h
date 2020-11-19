/* THIS FILE IS GENERATED */
#ifndef AUDIOSTREAMGENERATORPLAYBACK_H
#define AUDIOSTREAMGENERATORPLAYBACK_H

#include <stdint.h>

#include "Vector2.h"
#include "PoolVector2Array.h"
#include "AudioStreamPlaybackResampled.h"
class AudioStreamGeneratorPlayback : public AudioStreamPlaybackResampled{
public: AudioStreamGeneratorPlayback();
bool  can_push_buffer(int amount);
void  clear_buffer();
void  clear_buffer();
int  get_frames_available();
int  get_frames_available();
int  get_skips();
int  get_skips();
bool  push_buffer(PoolVector2Array frames);
bool  push_frame(Vector2 frame);
};
#endif