/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTBANDLIMITFILTER_H
#define AUDIOEFFECTBANDLIMITFILTER_H

#include "wasgo\wasgoid.h"

#include "AudioEffectFilter.h"
class AudioEffectBandLimitFilter : public AudioEffectFilter{
public:

protected:
public:
explicit AudioEffectBandLimitFilter(WasGoID p_wasgo_id);
explicit AudioEffectBandLimitFilter(AudioEffectFilter other);
AudioEffectBandLimitFilter();
AudioEffectBandLimitFilter new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_AudioEffectBandLimitFilter_constructor();
            
}
#endif