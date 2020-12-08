/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTNOTCHFILTER_H
#define AUDIOEFFECTNOTCHFILTER_H

#include "wasgo\wasgoid.h"

#include "AudioEffectFilter.h"
class AudioEffectNotchFilter : public AudioEffectFilter{
public:

protected:
public:
explicit AudioEffectNotchFilter(WasGoID p_wasgo_id);
explicit AudioEffectNotchFilter(AudioEffectFilter other);
AudioEffectNotchFilter();
AudioEffectNotchFilter new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_AudioEffectNotchFilter_constructor();
            
}
#endif