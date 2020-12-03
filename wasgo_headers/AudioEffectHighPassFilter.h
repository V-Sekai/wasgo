/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTHIGHPASSFILTER_H
#define AUDIOEFFECTHIGHPASSFILTER_H

#include "wasgo\wasgo.h"

#include "AudioEffectFilter.h"
class AudioEffectHighPassFilter : public AudioEffectFilter{
public:

protected:
AudioEffectHighPassFilter(WasGoId p_wasgo_id);
public:
AudioEffectHighPassFilter();
~AudioEffectHighPassFilter();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_AudioEffectHighPassFilter_constructor();
    void _wasgo_AudioEffectHighPassFilter_destructor(WasGoId p_wasgo_id);
            
}
#endif