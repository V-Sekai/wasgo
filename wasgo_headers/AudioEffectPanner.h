/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTPANNER_H
#define AUDIOEFFECTPANNER_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "AudioEffect.h"
class AudioEffectPanner : public AudioEffect{
public:
float get_pan();
void set_pan(float p_cpanume);

AudioEffectPanner(WasGoId p_wasgo_id);
~AudioEffectPanner();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_AudioEffectPanner_wrapper_get_pan(WasGoId wasgo_id);
void _wasgo_AudioEffectPanner_wrapper_set_pan(WasGoId wasgo_id, float p_cpanume);
}
#endif