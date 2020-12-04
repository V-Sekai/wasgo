/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTHIGHPASSFILTER_H
#define AUDIOEFFECTHIGHPASSFILTER_H

#include "wasgo\wasgo.h"

#include "AudioEffectFilter.h"
class AudioEffectHighPassFilter : public AudioEffectFilter{
public:

protected:
public:
explicit AudioEffectHighPassFilter(WasGoID p_wasgo_id);
explicit AudioEffectHighPassFilter(AudioEffectFilter other);
AudioEffectHighPassFilter new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_AudioEffectHighPassFilter_constructor();
            
}
#endif