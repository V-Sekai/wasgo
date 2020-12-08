/* THIS FILE IS GENERATED */
#ifndef AUDIOSTREAM_H
#define AUDIOSTREAM_H

#include "wasgo\wasgoid.h"

#include "Resource.h"
class AudioStream : public Resource{
public:
float get_length();

protected:
public:
explicit AudioStream(WasGoID p_wasgo_id);
explicit AudioStream(Resource other);
AudioStream();
AudioStream new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_AudioStream_wrapper_get_length(WasGoID wasgo_id);

    //constructor wrappers
    WasGoID _wasgo_AudioStream_constructor();
            
}
#endif