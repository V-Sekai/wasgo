/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTSTEREOENHANCE_H
#define AUDIOEFFECTSTEREOENHANCE_H

#include "wasgo\wasgo.h"

#include "AudioEffect.h"
class AudioEffectStereoEnhance : public AudioEffect{
public:
float get_pan_pullout();
float get_surround();
float get_time_pullout();
void set_pan_pullout(float p_amount);
void set_surround(float p_amount);
void set_time_pullout(float p_amount);

protected:
public:
explicit AudioEffectStereoEnhance(WasGoId p_wasgo_id);
explicit AudioEffectStereoEnhance(AudioEffect other);
AudioEffectStereoEnhance new_instance();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_AudioEffectStereoEnhance_wrapper_get_pan_pullout(WasGoId wasgo_id);
float _wasgo_AudioEffectStereoEnhance_wrapper_get_surround(WasGoId wasgo_id);
float _wasgo_AudioEffectStereoEnhance_wrapper_get_time_pullout(WasGoId wasgo_id);
void _wasgo_AudioEffectStereoEnhance_wrapper_set_pan_pullout(WasGoId wasgo_id, float p_amount);
void _wasgo_AudioEffectStereoEnhance_wrapper_set_surround(WasGoId wasgo_id, float p_amount);
void _wasgo_AudioEffectStereoEnhance_wrapper_set_time_pullout(WasGoId wasgo_id, float p_amount);

    //constructor wrappers
    WasGoId _wasgo_AudioEffectStereoEnhance_constructor();
            
}
#endif