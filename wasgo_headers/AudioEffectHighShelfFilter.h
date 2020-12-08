/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTHIGHSHELFFILTER_H
#define AUDIOEFFECTHIGHSHELFFILTER_H

#include "wasgo\wasgoid.h"

#include "AudioEffectFilter.h"
class AudioEffectHighShelfFilter : public AudioEffectFilter{
public:

protected:
public:
explicit AudioEffectHighShelfFilter(WasGoID p_wasgo_id);
explicit AudioEffectHighShelfFilter(AudioEffectFilter other);
AudioEffectHighShelfFilter();
AudioEffectHighShelfFilter new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_AudioEffectHighShelfFilter_constructor();
            
}
#endif