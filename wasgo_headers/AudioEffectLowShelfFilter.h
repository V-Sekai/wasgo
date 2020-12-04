/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTLOWSHELFFILTER_H
#define AUDIOEFFECTLOWSHELFFILTER_H

#include "wasgo\wasgo.h"

#include "AudioEffectFilter.h"
class AudioEffectLowShelfFilter : public AudioEffectFilter{
public:

protected:
public:
explicit AudioEffectLowShelfFilter(WasGoId p_wasgo_id);
explicit AudioEffectLowShelfFilter(AudioEffectFilter other);
AudioEffectLowShelfFilter new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoId _wasgo_AudioEffectLowShelfFilter_constructor();
            
}
#endif