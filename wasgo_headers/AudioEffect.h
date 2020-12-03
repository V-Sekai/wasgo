/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECT_H
#define AUDIOEFFECT_H

#include "wasgo\wasgo.h"

#include "Resource.h"
class AudioEffect : public Resource{
public:
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_AudioEffect_constructor();
    void _wasgo_AudioEffect_destructor(WasGoId p_wasgo_id);
            
}
#endif