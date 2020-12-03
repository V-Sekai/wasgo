/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTPANNER_H
#define AUDIOEFFECTPANNER_H

#include "wasgo\wasgo.h"

#include "AudioEffect.h"
class AudioEffectPanner : public AudioEffect{
public:
float get_pan();
void set_pan(float p_cpanume);

protected:
AudioEffectPanner(WasGoId p_wasgo_id);
public:
AudioEffectPanner();
~AudioEffectPanner();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_AudioEffectPanner_wrapper_get_pan(WasGoId wasgo_id);
void _wasgo_AudioEffectPanner_wrapper_set_pan(WasGoId wasgo_id, float p_cpanume);

    //constructor and destructor wrappers
    WasGoId _wasgo_AudioEffectPanner_constructor();
    void _wasgo_AudioEffectPanner_destructor(WasGoId p_wasgo_id);
            
}
#endif