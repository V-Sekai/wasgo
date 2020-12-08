/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTLOWPASSFILTER_H
#define AUDIOEFFECTLOWPASSFILTER_H

#include "wasgo\wasgoid.h"

#include "AudioEffectFilter.h"
class AudioEffectLowPassFilter : public AudioEffectFilter{
public:

protected:
public:
explicit AudioEffectLowPassFilter(WasGoID p_wasgo_id);
explicit AudioEffectLowPassFilter(AudioEffectFilter other);
AudioEffectLowPassFilter();
AudioEffectLowPassFilter new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_AudioEffectLowPassFilter_constructor();
            
}
#endif