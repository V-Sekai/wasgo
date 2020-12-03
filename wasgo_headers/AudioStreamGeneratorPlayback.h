/* THIS FILE IS GENERATED */
#ifndef AUDIOSTREAMGENERATORPLAYBACK_H
#define AUDIOSTREAMGENERATORPLAYBACK_H

#include "wasgo\wasgo.h"

#include "Vector2.h"
#include "Variant.h"
#include "AudioStreamPlaybackResampled.h"
class AudioStreamGeneratorPlayback : public AudioStreamPlaybackResampled{
public:
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
int _wasgo_AudioStreamGeneratorPlayback_wrapper_push_buffer(WasGoId wasgo_id, WasGoId p_frames);
int _wasgo_AudioStreamGeneratorPlayback_wrapper_push_frame(WasGoId wasgo_id, const uint8_t * p_frame, int p_frame_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_AudioStreamGeneratorPlayback_constructor();
    void _wasgo_AudioStreamGeneratorPlayback_destructor(WasGoId p_wasgo_id);
            
}
#endif