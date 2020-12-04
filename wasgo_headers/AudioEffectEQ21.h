/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTEQ21_H
#define AUDIOEFFECTEQ21_H

#include "wasgo\wasgo.h"

#include "AudioEffectEQ.h"
class AudioEffectEQ21 : public AudioEffectEQ{
public:

protected:
public:
explicit AudioEffectEQ21(WasGoId p_wasgo_id);
explicit AudioEffectEQ21(AudioEffectEQ other);
AudioEffectEQ21 new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoId _wasgo_AudioEffectEQ21_constructor();
            
}
#endif