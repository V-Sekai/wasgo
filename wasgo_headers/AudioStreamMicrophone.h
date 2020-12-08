/* THIS FILE IS GENERATED */
#ifndef AUDIOSTREAMMICROPHONE_H
#define AUDIOSTREAMMICROPHONE_H

#include "wasgo\wasgoid.h"

#include "AudioStream.h"
class AudioStreamMicrophone : public AudioStream{
public:

protected:
public:
explicit AudioStreamMicrophone(WasGoID p_wasgo_id);
explicit AudioStreamMicrophone(AudioStream other);
AudioStreamMicrophone();
AudioStreamMicrophone new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_AudioStreamMicrophone_constructor();
            
}
#endif