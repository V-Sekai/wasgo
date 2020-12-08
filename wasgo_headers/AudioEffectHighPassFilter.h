/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTHIGHPASSFILTER_H
#define AUDIOEFFECTHIGHPASSFILTER_H

#include "wasgo\wasgoid.h"

#include "AudioEffectFilter.h"
class AudioEffectHighPassFilter : public AudioEffectFilter{
public:

protected:
public:
explicit AudioEffectHighPassFilter(WasGoID p_wasgo_id);
explicit AudioEffectHighPassFilter(AudioEffectFilter other);
AudioEffectHighPassFilter();
AudioEffectHighPassFilter new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_AudioEffectHighPassFilter_constructor();
            
}
#endif