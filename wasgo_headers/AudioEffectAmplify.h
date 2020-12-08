/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTAMPLIFY_H
#define AUDIOEFFECTAMPLIFY_H

#include "wasgo\wasgoid.h"

#include "AudioEffect.h"
class AudioEffectAmplify : public AudioEffect{
public:
float get_volume_db();
void set_volume_db(float p_volume);

protected:
public:
explicit AudioEffectAmplify(WasGoID p_wasgo_id);
explicit AudioEffectAmplify(AudioEffect other);
AudioEffectAmplify();
AudioEffectAmplify new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_AudioEffectAmplify_wrapper_get_volume_db(WasGoID wasgo_id);
void _wasgo_AudioEffectAmplify_wrapper_set_volume_db(WasGoID wasgo_id, float p_volume);

    //constructor wrappers
    WasGoID _wasgo_AudioEffectAmplify_constructor();
            
}
#endif