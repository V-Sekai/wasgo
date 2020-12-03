/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTBANDLIMITFILTER_H
#define AUDIOEFFECTBANDLIMITFILTER_H

#include "wasgo\wasgo.h"

#include "AudioEffectFilter.h"
class AudioEffectBandLimitFilter : public AudioEffectFilter{
public:

protected:
AudioEffectBandLimitFilter(WasGoId p_wasgo_id);
public:
AudioEffectBandLimitFilter();
~AudioEffectBandLimitFilter();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_AudioEffectBandLimitFilter_constructor();
    void _wasgo_AudioEffectBandLimitFilter_destructor(WasGoId p_wasgo_id);
            
}
#endif