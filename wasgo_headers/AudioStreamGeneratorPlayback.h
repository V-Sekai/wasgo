/* THIS FILE IS GENERATED */
#ifndef AUDIOSTREAMGENERATORPLAYBACK_H
#define AUDIOSTREAMGENERATORPLAYBACK_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "AudioStreamPlaybackResampled.h"
class AudioStreamGeneratorPlayback : public AudioStreamPlaybackResampled{
bool can_push_buffer(int p_amount);
void clear_buffer();
int get_frames_available();
int get_skips();
bool push_buffer(PoolVector2Array p_frames);
bool push_frame(Vector2 p_frame);
};


//Wrapper Functions
extern "C"{
int _wasgo_AudioStreamGeneratorPlayback_wrapper_can_push_buffer(WasGoId wasgo_id, int p_amount);
void _wasgo_AudioStreamGeneratorPlayback_wrapper_clear_buffer(WasGoId wasgo_id);
int _wasgo_AudioStreamGeneratorPlayback_wrapper_get_frames_available(WasGoId wasgo_id);
int _wasgo_AudioStreamGeneratorPlayback_wrapper_get_skips(WasGoId wasgo_id);
int _wasgo_AudioStreamGeneratorPlayback_wrapper_push_buffer(WasGoId wasgo_id, WasGo::WasGoId p_frames);
int _wasgo_AudioStreamGeneratorPlayback_wrapper_push_frame(WasGoId wasgo_id, WasGo::WasGoId p_frame);
}
#endif