/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTSTEREOENHANCE_H
#define AUDIOEFFECTSTEREOENHANCE_H

#include "wasgo\wasgoid.h"

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
explicit AudioEffectStereoEnhance(WasGoID p_wasgo_id);
explicit AudioEffectStereoEnhance(AudioEffect other);
AudioEffectStereoEnhance();
AudioEffectStereoEnhance new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_AudioEffectStereoEnhance_wrapper_get_pan_pullout(WasGoID wasgo_id);
float _wasgo_AudioEffectStereoEnhance_wrapper_get_surround(WasGoID wasgo_id);
float _wasgo_AudioEffectStereoEnhance_wrapper_get_time_pullout(WasGoID wasgo_id);
void _wasgo_AudioEffectStereoEnhance_wrapper_set_pan_pullout(WasGoID wasgo_id, float p_amount);
void _wasgo_AudioEffectStereoEnhance_wrapper_set_surround(WasGoID wasgo_id, float p_amount);
void _wasgo_AudioEffectStereoEnhance_wrapper_set_time_pullout(WasGoID wasgo_id, float p_amount);

    //constructor wrappers
    WasGoID _wasgo_AudioEffectStereoEnhance_constructor();
            
}
#endif