/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTDELAY_H
#define AUDIOEFFECTDELAY_H

#include "wasgo\wasgoid.h"

#include "AudioEffect.h"
class AudioEffectDelay : public AudioEffect{
public:
float get_dry();
float get_feedback_delay_ms();
float get_feedback_level_db();
float get_feedback_lowpass();
float get_tap1_delay_ms();
float get_tap1_level_db();
float get_tap1_pan();
float get_tap2_delay_ms();
float get_tap2_level_db();
float get_tap2_pan();
bool is_feedback_active();
bool is_tap1_active();
bool is_tap2_active();
void set_dry(float p_amount);
void set_feedback_active(bool p_amount);
void set_feedback_delay_ms(float p_amount);
void set_feedback_level_db(float p_amount);
void set_feedback_lowpass(float p_amount);
void set_tap1_active(bool p_amount);
void set_tap1_delay_ms(float p_amount);
void set_tap1_level_db(float p_amount);
void set_tap1_pan(float p_amount);
void set_tap2_active(bool p_amount);
void set_tap2_delay_ms(float p_amount);
void set_tap2_level_db(float p_amount);
void set_tap2_pan(float p_amount);

protected:
public:
explicit AudioEffectDelay(WasGoID p_wasgo_id);
explicit AudioEffectDelay(AudioEffect other);
AudioEffectDelay();
AudioEffectDelay new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_AudioEffectDelay_wrapper_get_dry(WasGoID wasgo_id);
float _wasgo_AudioEffectDelay_wrapper_get_feedback_delay_ms(WasGoID wasgo_id);
float _wasgo_AudioEffectDelay_wrapper_get_feedback_level_db(WasGoID wasgo_id);
float _wasgo_AudioEffectDelay_wrapper_get_feedback_lowpass(WasGoID wasgo_id);
float _wasgo_AudioEffectDelay_wrapper_get_tap1_delay_ms(WasGoID wasgo_id);
float _wasgo_AudioEffectDelay_wrapper_get_tap1_level_db(WasGoID wasgo_id);
float _wasgo_AudioEffectDelay_wrapper_get_tap1_pan(WasGoID wasgo_id);
float _wasgo_AudioEffectDelay_wrapper_get_tap2_delay_ms(WasGoID wasgo_id);
float _wasgo_AudioEffectDelay_wrapper_get_tap2_level_db(WasGoID wasgo_id);
float _wasgo_AudioEffectDelay_wrapper_get_tap2_pan(WasGoID wasgo_id);
int _wasgo_AudioEffectDelay_wrapper_is_feedback_active(WasGoID wasgo_id);
int _wasgo_AudioEffectDelay_wrapper_is_tap1_active(WasGoID wasgo_id);
int _wasgo_AudioEffectDelay_wrapper_is_tap2_active(WasGoID wasgo_id);
void _wasgo_AudioEffectDelay_wrapper_set_dry(WasGoID wasgo_id, float p_amount);
void _wasgo_AudioEffectDelay_wrapper_set_feedback_active(WasGoID wasgo_id, bool p_amount);
void _wasgo_AudioEffectDelay_wrapper_set_feedback_delay_ms(WasGoID wasgo_id, float p_amount);
void _wasgo_AudioEffectDelay_wrapper_set_feedback_level_db(WasGoID wasgo_id, float p_amount);
void _wasgo_AudioEffectDelay_wrapper_set_feedback_lowpass(WasGoID wasgo_id, float p_amount);
void _wasgo_AudioEffectDelay_wrapper_set_tap1_active(WasGoID wasgo_id, bool p_amount);
void _wasgo_AudioEffectDelay_wrapper_set_tap1_delay_ms(WasGoID wasgo_id, float p_amount);
void _wasgo_AudioEffectDelay_wrapper_set_tap1_level_db(WasGoID wasgo_id, float p_amount);
void _wasgo_AudioEffectDelay_wrapper_set_tap1_pan(WasGoID wasgo_id, float p_amount);
void _wasgo_AudioEffectDelay_wrapper_set_tap2_active(WasGoID wasgo_id, bool p_amount);
void _wasgo_AudioEffectDelay_wrapper_set_tap2_delay_ms(WasGoID wasgo_id, float p_amount);
void _wasgo_AudioEffectDelay_wrapper_set_tap2_level_db(WasGoID wasgo_id, float p_amount);
void _wasgo_AudioEffectDelay_wrapper_set_tap2_pan(WasGoID wasgo_id, float p_amount);

    //constructor wrappers
    WasGoID _wasgo_AudioEffectDelay_constructor();
            
}
#endif