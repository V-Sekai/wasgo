/* THIS FILE IS GENERATED */
#ifndef AUDIOSTREAMGENERATORPLAYBACK_H
#define AUDIOSTREAMGENERATORPLAYBACK_H

#include "wasgo\wasgoid.h"

#include "Vector2.h"
#include "AudioStreamPlaybackResampled.h"
#include "Variant.h"
class AudioStreamGeneratorPlayback : public AudioStreamPlaybackResampled{
public:
bool can_push_buffer(int p_amount);
void clear_buffer();
int get_frames_available();
int get_skips();
bool push_buffer(PoolVector2Array p_frames);
bool push_frame(Vector2 p_frame);

protected:
public:
explicit AudioStreamGeneratorPlayback(WasGoID p_wasgo_id);
explicit AudioStreamGeneratorPlayback(AudioStreamPlaybackResampled other);
AudioStreamGeneratorPlayback();
AudioStreamGeneratorPlayback new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_AudioStreamGeneratorPlayback_wrapper_can_push_buffer(WasGoID wasgo_id, int p_amount);
void _wasgo_AudioStreamGeneratorPlayback_wrapper_clear_buffer(WasGoID wasgo_id);
int _wasgo_AudioStreamGeneratorPlayback_wrapper_get_frames_available(WasGoID wasgo_id);
int _wasgo_AudioStreamGeneratorPlayback_wrapper_get_skips(WasGoID wasgo_id);
int _wasgo_AudioStreamGeneratorPlayback_wrapper_push_buffer(WasGoID wasgo_id, WasGoID p_frames);
int _wasgo_AudioStreamGeneratorPlayback_wrapper_push_frame(WasGoID wasgo_id, const uint8_t * p_frame, int p_frame_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_AudioStreamGeneratorPlayback_constructor();
            
}
#endif