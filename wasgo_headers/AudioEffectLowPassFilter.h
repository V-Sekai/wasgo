/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTLOWPASSFILTER_H
#define AUDIOEFFECTLOWPASSFILTER_H

#include "wasgo\wasgo.h"

#include "AudioEffectFilter.h"
class AudioEffectLowPassFilter : public AudioEffectFilter{
public:

protected:
public:
explicit AudioEffectLowPassFilter(WasGoID p_wasgo_id);
explicit AudioEffectLowPassFilter(AudioEffectFilter other);
AudioEffectLowPassFilter new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_AudioEffectLowPassFilter_constructor();
            
}
#endif