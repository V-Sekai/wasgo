/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTHIGHSHELFFILTER_H
#define AUDIOEFFECTHIGHSHELFFILTER_H

#include "wasgo\wasgo.h"

#include "AudioEffectFilter.h"
class AudioEffectHighShelfFilter : public AudioEffectFilter{
public:

protected:
public:
explicit AudioEffectHighShelfFilter(WasGoId p_wasgo_id);
explicit AudioEffectHighShelfFilter(AudioEffectFilter other);
AudioEffectHighShelfFilter new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoId _wasgo_AudioEffectHighShelfFilter_constructor();
            
}
#endif