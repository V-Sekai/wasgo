/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTEQ21_H
#define AUDIOEFFECTEQ21_H

#include "wasgo\wasgo.h"

#include "AudioEffectEQ.h"
class AudioEffectEQ21 : public AudioEffectEQ{
public:

protected:
AudioEffectEQ21(WasGoId p_wasgo_id);
public:
AudioEffectEQ21();
~AudioEffectEQ21();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_AudioEffectEQ21_constructor();
    void _wasgo_AudioEffectEQ21_destructor(WasGoId p_wasgo_id);
            
}
#endif