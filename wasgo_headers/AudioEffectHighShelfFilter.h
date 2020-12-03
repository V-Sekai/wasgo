/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTHIGHSHELFFILTER_H
#define AUDIOEFFECTHIGHSHELFFILTER_H

#include "wasgo\wasgo.h"

#include "AudioEffectFilter.h"
class AudioEffectHighShelfFilter : public AudioEffectFilter{
public:

protected:
AudioEffectHighShelfFilter(WasGoId p_wasgo_id);
public:
AudioEffectHighShelfFilter();
~AudioEffectHighShelfFilter();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_AudioEffectHighShelfFilter_constructor();
    void _wasgo_AudioEffectHighShelfFilter_destructor(WasGoId p_wasgo_id);
            
}
#endif