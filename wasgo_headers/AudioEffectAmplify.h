/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTAMPLIFY_H
#define AUDIOEFFECTAMPLIFY_H

#include "wasgo\wasgo.h"

#include "AudioEffect.h"
class AudioEffectAmplify : public AudioEffect{
public:
float get_volume_db();
void set_volume_db(float p_volume);

protected:
public:
explicit AudioEffectAmplify(WasGoId p_wasgo_id);
explicit AudioEffectAmplify(AudioEffect other);
AudioEffectAmplify new_instance();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_AudioEffectAmplify_wrapper_get_volume_db(WasGoId wasgo_id);
void _wasgo_AudioEffectAmplify_wrapper_set_volume_db(WasGoId wasgo_id, float p_volume);

    //constructor wrappers
    WasGoId _wasgo_AudioEffectAmplify_constructor();
            
}
#endif