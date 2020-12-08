/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTLOWSHELFFILTER_H
#define AUDIOEFFECTLOWSHELFFILTER_H

#include "wasgo\wasgoid.h"

#include "AudioEffectFilter.h"
class AudioEffectLowShelfFilter : public AudioEffectFilter{
public:

protected:
public:
explicit AudioEffectLowShelfFilter(WasGoID p_wasgo_id);
explicit AudioEffectLowShelfFilter(AudioEffectFilter other);
AudioEffectLowShelfFilter();
AudioEffectLowShelfFilter new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_AudioEffectLowShelfFilter_constructor();
            
}
#endif