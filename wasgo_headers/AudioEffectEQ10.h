/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTEQ10_H
#define AUDIOEFFECTEQ10_H

#include "wasgo\wasgo.h"

#include "AudioEffectEQ.h"
class AudioEffectEQ10 : public AudioEffectEQ{
public:

protected:
public:
explicit AudioEffectEQ10(WasGoID p_wasgo_id);
explicit AudioEffectEQ10(AudioEffectEQ other);
AudioEffectEQ10 new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_AudioEffectEQ10_constructor();
            
}
#endif