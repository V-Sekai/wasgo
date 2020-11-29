/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTREVERB_H
#define AUDIOEFFECTREVERB_H

#include "stdint.h"

#include "AudioEffect.h"
class AudioEffectReverb : public AudioEffect{
public: AudioEffectReverb();
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
};
#endif