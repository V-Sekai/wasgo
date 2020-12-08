/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTINSTANCE_H
#define AUDIOEFFECTINSTANCE_H

#include "wasgo\wasgoid.h"

#include "Reference.h"
class AudioEffectInstance : public Reference{
public:

protected:
public:
explicit AudioEffectInstance(WasGoID p_wasgo_id);
explicit AudioEffectInstance(Reference other);
AudioEffectInstance();
AudioEffectInstance new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_AudioEffectInstance_constructor();
            
}
#endif