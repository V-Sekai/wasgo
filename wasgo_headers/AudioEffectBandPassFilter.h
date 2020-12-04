/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTBANDPASSFILTER_H
#define AUDIOEFFECTBANDPASSFILTER_H

#include "wasgo\wasgo.h"

#include "AudioEffectFilter.h"
class AudioEffectBandPassFilter : public AudioEffectFilter{
public:

protected:
public:
explicit AudioEffectBandPassFilter(WasGoID p_wasgo_id);
explicit AudioEffectBandPassFilter(AudioEffectFilter other);
AudioEffectBandPassFilter new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_AudioEffectBandPassFilter_constructor();
            
}
#endif