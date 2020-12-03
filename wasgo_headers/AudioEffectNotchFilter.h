/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTNOTCHFILTER_H
#define AUDIOEFFECTNOTCHFILTER_H

#include "wasgo\wasgo.h"

#include "AudioEffectFilter.h"
class AudioEffectNotchFilter : public AudioEffectFilter{
public:

protected:
AudioEffectNotchFilter(WasGoId p_wasgo_id);
public:
AudioEffectNotchFilter();
~AudioEffectNotchFilter();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_AudioEffectNotchFilter_constructor();
    void _wasgo_AudioEffectNotchFilter_destructor(WasGoId p_wasgo_id);
            
}
#endif