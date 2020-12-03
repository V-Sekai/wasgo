/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTEQ6_H
#define AUDIOEFFECTEQ6_H

#include "wasgo\wasgo.h"

#include "AudioEffectEQ.h"
class AudioEffectEQ6 : public AudioEffectEQ{
public:

protected:
AudioEffectEQ6(WasGoId p_wasgo_id);
public:
AudioEffectEQ6();
~AudioEffectEQ6();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_AudioEffectEQ6_constructor();
    void _wasgo_AudioEffectEQ6_destructor(WasGoId p_wasgo_id);
            
}
#endif