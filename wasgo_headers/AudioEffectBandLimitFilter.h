/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTBANDLIMITFILTER_H
#define AUDIOEFFECTBANDLIMITFILTER_H

#include "wasgo\wasgo.h"

#include "AudioEffectFilter.h"
class AudioEffectBandLimitFilter : public AudioEffectFilter{
public:

protected:
public:
explicit AudioEffectBandLimitFilter(WasGoId p_wasgo_id);
explicit AudioEffectBandLimitFilter(AudioEffectFilter other);
AudioEffectBandLimitFilter new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoId _wasgo_AudioEffectBandLimitFilter_constructor();
            
}
#endif