/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTREVERB_H
#define AUDIOEFFECTREVERB_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "AudioEffect.h"
class AudioEffectReverb : public AudioEffect{
float get_damping();
float get_dry();
float get_hpf();
float get_predelay_feedback();
float get_predelay_msec();
float get_room_size();
float get_spread();
float get_wet();
void set_damping(float p_amount);
void set_dry(float p_amount);
void set_hpf(float p_amount);
void set_predelay_feedback(float p_feedback);
void set_predelay_msec(float p_msec);
void set_room_size(float p_size);
void set_spread(float p_amount);
void set_wet(float p_amount);

AudioEffectReverb(WasGoId p_wasgo_id);
~AudioEffectReverb();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_AudioEffectReverb_wrapper_get_damping(WasGoId wasgo_id);
float _wasgo_AudioEffectReverb_wrapper_get_dry(WasGoId wasgo_id);
float _wasgo_AudioEffectReverb_wrapper_get_hpf(WasGoId wasgo_id);
float _wasgo_AudioEffectReverb_wrapper_get_predelay_feedback(WasGoId wasgo_id);
float _wasgo_AudioEffectReverb_wrapper_get_predelay_msec(WasGoId wasgo_id);
float _wasgo_AudioEffectReverb_wrapper_get_room_size(WasGoId wasgo_id);
float _wasgo_AudioEffectReverb_wrapper_get_spread(WasGoId wasgo_id);
float _wasgo_AudioEffectReverb_wrapper_get_wet(WasGoId wasgo_id);
void _wasgo_AudioEffectReverb_wrapper_set_damping(WasGoId wasgo_id, float p_amount);
void _wasgo_AudioEffectReverb_wrapper_set_dry(WasGoId wasgo_id, float p_amount);
void _wasgo_AudioEffectReverb_wrapper_set_hpf(WasGoId wasgo_id, float p_amount);
void _wasgo_AudioEffectReverb_wrapper_set_predelay_feedback(WasGoId wasgo_id, float p_feedback);
void _wasgo_AudioEffectReverb_wrapper_set_predelay_msec(WasGoId wasgo_id, float p_msec);
void _wasgo_AudioEffectReverb_wrapper_set_room_size(WasGoId wasgo_id, float p_size);
void _wasgo_AudioEffectReverb_wrapper_set_spread(WasGoId wasgo_id, float p_amount);
void _wasgo_AudioEffectReverb_wrapper_set_wet(WasGoId wasgo_id, float p_amount);
}
#endif