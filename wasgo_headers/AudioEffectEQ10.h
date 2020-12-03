/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTEQ10_H
#define AUDIOEFFECTEQ10_H

#include "wasgo\wasgo.h"

#include "AudioEffectEQ.h"
class AudioEffectEQ10 : public AudioEffectEQ{
public:

protected:
AudioEffectEQ10(WasGoId p_wasgo_id);
public:
AudioEffectEQ10();
~AudioEffectEQ10();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_AudioEffectEQ10_constructor();
    void _wasgo_AudioEffectEQ10_destructor(WasGoId p_wasgo_id);
            
}
#endif