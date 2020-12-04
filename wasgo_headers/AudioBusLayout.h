/* THIS FILE IS GENERATED */
#ifndef AUDIOBUSLAYOUT_H
#define AUDIOBUSLAYOUT_H

#include "wasgo\wasgo.h"

#include "Resource.h"
class AudioBusLayout : public Resource{
public:

protected:
public:
explicit AudioBusLayout(WasGoID p_wasgo_id);
explicit AudioBusLayout(Resource other);
AudioBusLayout new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_AudioBusLayout_constructor();
            
}
#endif