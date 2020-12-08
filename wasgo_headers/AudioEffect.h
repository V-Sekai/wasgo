/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECT_H
#define AUDIOEFFECT_H

#include "wasgo\wasgoid.h"

#include "Resource.h"
class AudioEffect : public Resource{
public:

protected:
public:
explicit AudioEffect(WasGoID p_wasgo_id);
explicit AudioEffect(Resource other);
AudioEffect();
AudioEffect new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_AudioEffect_constructor();
            
}
#endif