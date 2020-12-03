/* THIS FILE IS GENERATED */
#ifndef AUDIOSTREAMMICROPHONE_H
#define AUDIOSTREAMMICROPHONE_H

#include "wasgo\wasgo.h"

#include "AudioStream.h"
class AudioStreamMicrophone : public AudioStream{
public:

protected:
AudioStreamMicrophone(WasGoId p_wasgo_id);
public:
AudioStreamMicrophone();
~AudioStreamMicrophone();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_AudioStreamMicrophone_constructor();
    void _wasgo_AudioStreamMicrophone_destructor(WasGoId p_wasgo_id);
            
}
#endif