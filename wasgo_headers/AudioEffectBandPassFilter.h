/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTBANDPASSFILTER_H
#define AUDIOEFFECTBANDPASSFILTER_H

#include "wasgo\wasgoid.h"

#include "AudioEffectFilter.h"
class AudioEffectBandPassFilter : public AudioEffectFilter{
public:

protected:
public:
explicit AudioEffectBandPassFilter(WasGoID p_wasgo_id);
explicit AudioEffectBandPassFilter(AudioEffectFilter other);
AudioEffectBandPassFilter();
AudioEffectBandPassFilter new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_AudioEffectBandPassFilter_constructor();
            
}
#endif