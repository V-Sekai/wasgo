/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTEQ6_H
#define AUDIOEFFECTEQ6_H

#include "wasgo\wasgo.h"

#include "AudioEffectEQ.h"
class AudioEffectEQ6 : public AudioEffectEQ{
public:

protected:
public:
explicit AudioEffectEQ6(WasGoId p_wasgo_id);
explicit AudioEffectEQ6(AudioEffectEQ other);
AudioEffectEQ6 new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoId _wasgo_AudioEffectEQ6_constructor();
            
}
#endif