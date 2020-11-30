/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTAMPLIFY_H
#define AUDIOEFFECTAMPLIFY_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "AudioEffect.h"
class AudioEffectAmplify : public AudioEffect{
float get_volume_db();
void set_volume_db(float p_volume);

AudioEffectAmplify(WasGoId p_wasgo_id);
~AudioEffectAmplify();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_AudioEffectAmplify_wrapper_get_volume_db(WasGoId wasgo_id);
void _wasgo_AudioEffectAmplify_wrapper_set_volume_db(WasGoId wasgo_id, float p_volume);
}
#endif