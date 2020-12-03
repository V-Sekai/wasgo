/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTBANDPASSFILTER_H
#define AUDIOEFFECTBANDPASSFILTER_H

#include "wasgo\wasgo.h"

#include "AudioEffectFilter.h"
class AudioEffectBandPassFilter : public AudioEffectFilter{
public:

protected:
AudioEffectBandPassFilter(WasGoId p_wasgo_id);
public:
AudioEffectBandPassFilter();
~AudioEffectBandPassFilter();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_AudioEffectBandPassFilter_constructor();
    void _wasgo_AudioEffectBandPassFilter_destructor(WasGoId p_wasgo_id);
            
}
#endif