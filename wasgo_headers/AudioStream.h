/* THIS FILE IS GENERATED */
#ifndef AUDIOSTREAM_H
#define AUDIOSTREAM_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Resource.h"
class AudioStream : public Resource{
float get_length();
};


//Wrapper Functions
extern "C"{
float _wasgo_AudioStream_wrapper_get_length(WasGoId wasgo_id);
}
#endif