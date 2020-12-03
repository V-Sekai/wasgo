/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTLOWPASSFILTER_H
#define AUDIOEFFECTLOWPASSFILTER_H

#include "wasgo\wasgo.h"

#include "AudioEffectFilter.h"
class AudioEffectLowPassFilter : public AudioEffectFilter{
public:

protected:
AudioEffectLowPassFilter(WasGoId p_wasgo_id);
public:
AudioEffectLowPassFilter();
~AudioEffectLowPassFilter();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_AudioEffectLowPassFilter_constructor();
    void _wasgo_AudioEffectLowPassFilter_destructor(WasGoId p_wasgo_id);
            
}
#endif