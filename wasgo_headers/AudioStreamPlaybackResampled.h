/* THIS FILE IS GENERATED */
#ifndef AUDIOSTREAMPLAYBACKRESAMPLED_H
#define AUDIOSTREAMPLAYBACKRESAMPLED_H

#include "wasgo\wasgoid.h"

#include "AudioStreamPlayback.h"
class AudioStreamPlaybackResampled : public AudioStreamPlayback{
public:

protected:
public:
explicit AudioStreamPlaybackResampled(WasGoID p_wasgo_id);
explicit AudioStreamPlaybackResampled(AudioStreamPlayback other);
AudioStreamPlaybackResampled();
AudioStreamPlaybackResampled new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_AudioStreamPlaybackResampled_constructor();
            
}
#endif