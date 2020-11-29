/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTSTEREOENHANCE_H
#define AUDIOEFFECTSTEREOENHANCE_H

#include "stdint.h"

#include "AudioEffect.h"
class AudioEffectStereoEnhance : public AudioEffect{
public: AudioEffectStereoEnhance();
float get_pan_pullout();
float get_surround();
float get_time_pullout();
void set_pan_pullout(float p_amount);
void set_surround(float p_amount);
void set_time_pullout(float p_amount);
};
#endif