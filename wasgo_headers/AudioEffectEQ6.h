/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTEQ6_H
#define AUDIOEFFECTEQ6_H

#include "wasgo\wasgoid.h"

#include "AudioEffectEQ.h"
class AudioEffectEQ6 : public AudioEffectEQ{
public:

protected:
public:
explicit AudioEffectEQ6(WasGoID p_wasgo_id);
explicit AudioEffectEQ6(AudioEffectEQ other);
AudioEffectEQ6();
AudioEffectEQ6 new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_AudioEffectEQ6_constructor();
            
}
#endif