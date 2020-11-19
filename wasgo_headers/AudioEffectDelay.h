/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTDELAY_H
#define AUDIOEFFECTDELAY_H

#include <stdint.h>

#include "AudioEffect.h"
class AudioEffectDelay : public AudioEffect{
public: AudioEffectDelay();
float  get_dry();
float  get_dry();
float  get_feedback_delay_ms();
float  get_feedback_delay_ms();
float  get_feedback_level_db();
float  get_feedback_level_db();
float  get_feedback_lowpass();
float  get_feedback_lowpass();
float  get_tap1_delay_ms();
float  get_tap1_delay_ms();
float  get_tap1_level_db();
float  get_tap1_level_db();
float  get_tap1_pan();
float  get_tap1_pan();
float  get_tap2_delay_ms();
float  get_tap2_delay_ms();
float  get_tap2_level_db();
float  get_tap2_level_db();
float  get_tap2_pan();
float  get_tap2_pan();
bool  is_feedback_active();
bool  is_feedback_active();
bool  is_tap1_active();
bool  is_tap1_active();
bool  is_tap2_active();
bool  is_tap2_active();
void  set_dry(float amount);
void  set_feedback_active(bool amount);
void  set_feedback_delay_ms(float amount);
void  set_feedback_level_db(float amount);
void  set_feedback_lowpass(float amount);
void  set_tap1_active(bool amount);
void  set_tap1_delay_ms(float amount);
void  set_tap1_level_db(float amount);
void  set_tap1_pan(float amount);
void  set_tap2_active(bool amount);
void  set_tap2_delay_ms(float amount);
void  set_tap2_level_db(float amount);
void  set_tap2_pan(float amount);
};
#endif