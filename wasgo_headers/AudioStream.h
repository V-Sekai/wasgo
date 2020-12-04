/* THIS FILE IS GENERATED */
#ifndef AUDIOSTREAM_H
#define AUDIOSTREAM_H

#include "wasgo\wasgo.h"

#include "Resource.h"
class AudioStream : public Resource{
public:
float get_length();
};


//Wrapper Functions
extern "C"{
float _wasgo_AudioStream_wrapper_get_length(WasGoID wasgo_id);

    //constructor wrappers
    WasGoID _wasgo_AudioStream_constructor();
            
}
#endif