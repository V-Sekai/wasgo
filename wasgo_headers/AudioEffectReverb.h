/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTREVERB_H
#define AUDIOEFFECTREVERB_H

#include <stdint.h>

#include "AudioEffect.h"
class AudioEffectReverb : public AudioEffect{
public: AudioEffectReverb();
float  get_damping();
float  get_damping();
float  get_dry();
float  get_dry();
float  get_hpf();
float  get_hpf();
float  get_predelay_feedback();
float  get_predelay_feedback();
float  get_predelay_msec();
float  get_predelay_msec();
float  get_room_size();
float  get_room_size();
float  get_spread();
float  get_spread();
float  get_wet();
float  get_wet();
void  set_damping(float amount);
void  set_dry(float amount);
void  set_hpf(float amount);
void  set_predelay_feedback(float feedback);
void  set_predelay_msec(float msec);
void  set_room_size(float size);
void  set_spread(float amount);
void  set_wet(float amount);
};
#endif