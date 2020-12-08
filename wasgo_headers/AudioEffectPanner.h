/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTPANNER_H
#define AUDIOEFFECTPANNER_H

#include "wasgo\wasgoid.h"

#include "AudioEffect.h"
class AudioEffectPanner : public AudioEffect{
public:
float get_pan();
void set_pan(float p_cpanume);

protected:
public:
explicit AudioEffectPanner(WasGoID p_wasgo_id);
explicit AudioEffectPanner(AudioEffect other);
AudioEffectPanner();
AudioEffectPanner new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_AudioEffectPanner_wrapper_get_pan(WasGoID wasgo_id);
void _wasgo_AudioEffectPanner_wrapper_set_pan(WasGoID wasgo_id, float p_cpanume);

    //constructor wrappers
    WasGoID _wasgo_AudioEffectPanner_constructor();
            
}
#endif