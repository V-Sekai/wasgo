/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTLOWSHELFFILTER_H
#define AUDIOEFFECTLOWSHELFFILTER_H

#include "wasgo\wasgo.h"

#include "AudioEffectFilter.h"
class AudioEffectLowShelfFilter : public AudioEffectFilter{
public:

protected:
AudioEffectLowShelfFilter(WasGoId p_wasgo_id);
public:
AudioEffectLowShelfFilter();
~AudioEffectLowShelfFilter();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_AudioEffectLowShelfFilter_constructor();
    void _wasgo_AudioEffectLowShelfFilter_destructor(WasGoId p_wasgo_id);
            
}
#endif