/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTREVERB_H
#define AUDIOEFFECTREVERB_H

#include "wasgo\wasgoid.h"

#include "AudioEffect.h"
class AudioEffectReverb : public AudioEffect{
public:
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

protected:
public:
explicit AudioEffectReverb(WasGoID p_wasgo_id);
explicit AudioEffectReverb(AudioEffect other);
AudioEffectReverb();
AudioEffectReverb new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_AudioEffectReverb_wrapper_get_damping(WasGoID wasgo_id);
float _wasgo_AudioEffectReverb_wrapper_get_dry(WasGoID wasgo_id);
float _wasgo_AudioEffectReverb_wrapper_get_hpf(WasGoID wasgo_id);
float _wasgo_AudioEffectReverb_wrapper_get_predelay_feedback(WasGoID wasgo_id);
float _wasgo_AudioEffectReverb_wrapper_get_predelay_msec(WasGoID wasgo_id);
float _wasgo_AudioEffectReverb_wrapper_get_room_size(WasGoID wasgo_id);
float _wasgo_AudioEffectReverb_wrapper_get_spread(WasGoID wasgo_id);
float _wasgo_AudioEffectReverb_wrapper_get_wet(WasGoID wasgo_id);
void _wasgo_AudioEffectReverb_wrapper_set_damping(WasGoID wasgo_id, float p_amount);
void _wasgo_AudioEffectReverb_wrapper_set_dry(WasGoID wasgo_id, float p_amount);
void _wasgo_AudioEffectReverb_wrapper_set_hpf(WasGoID wasgo_id, float p_amount);
void _wasgo_AudioEffectReverb_wrapper_set_predelay_feedback(WasGoID wasgo_id, float p_feedback);
void _wasgo_AudioEffectReverb_wrapper_set_predelay_msec(WasGoID wasgo_id, float p_msec);
void _wasgo_AudioEffectReverb_wrapper_set_room_size(WasGoID wasgo_id, float p_size);
void _wasgo_AudioEffectReverb_wrapper_set_spread(WasGoID wasgo_id, float p_amount);
void _wasgo_AudioEffectReverb_wrapper_set_wet(WasGoID wasgo_id, float p_amount);

    //constructor wrappers
    WasGoID _wasgo_AudioEffectReverb_constructor();
            
}
#endif