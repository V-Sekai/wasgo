/* THIS FILE IS GENERATED */
#ifndef AUDIOSTREAMPLAYBACK_H
#define AUDIOSTREAMPLAYBACK_H

#include "wasgo\wasgoid.h"

#include "Reference.h"
class AudioStreamPlayback : public Reference{
public:

protected:
public:
explicit AudioStreamPlayback(WasGoID p_wasgo_id);
explicit AudioStreamPlayback(Reference other);
AudioStreamPlayback();
AudioStreamPlayback new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_AudioStreamPlayback_constructor();
            
}
#endif