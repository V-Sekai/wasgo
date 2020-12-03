/* THIS FILE IS GENERATED */
#ifndef AUDIOBUSLAYOUT_H
#define AUDIOBUSLAYOUT_H

#include "wasgo\wasgo.h"

#include "Resource.h"
class AudioBusLayout : public Resource{
public:

protected:
AudioBusLayout(WasGoId p_wasgo_id);
public:
AudioBusLayout();
~AudioBusLayout();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_AudioBusLayout_constructor();
    void _wasgo_AudioBusLayout_destructor(WasGoId p_wasgo_id);
            
}
#endif