/* THIS FILE IS GENERATED */
#ifndef AUDIOSTREAMMICROPHONE_H
#define AUDIOSTREAMMICROPHONE_H

#include "wasgo\wasgo.h"

#include "AudioStream.h"
class AudioStreamMicrophone : public AudioStream{
public:

protected:
public:
explicit AudioStreamMicrophone(WasGoId p_wasgo_id);
explicit AudioStreamMicrophone(AudioStream other);
AudioStreamMicrophone new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoId _wasgo_AudioStreamMicrophone_constructor();
            
}
#endif