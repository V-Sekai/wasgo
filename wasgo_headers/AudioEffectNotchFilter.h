/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTNOTCHFILTER_H
#define AUDIOEFFECTNOTCHFILTER_H

#include "wasgo\wasgo.h"

#include "AudioEffectFilter.h"
class AudioEffectNotchFilter : public AudioEffectFilter{
public:

protected:
public:
explicit AudioEffectNotchFilter(WasGoId p_wasgo_id);
explicit AudioEffectNotchFilter(AudioEffectFilter other);
AudioEffectNotchFilter new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoId _wasgo_AudioEffectNotchFilter_constructor();
            
}
#endif