/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTPHASER_H
#define AUDIOEFFECTPHASER_H

#include "stdint.h"

#include "AudioEffect.h"
class AudioEffectPhaser : public AudioEffect{
public: AudioEffectPhaser();
float get_depth();
float get_feedback();
float get_range_max_hz();
float get_range_min_hz();
float get_rate_hz();
void set_depth(float p_depth);
void set_feedback(float p_fbk);
void set_range_max_hz(float p_hz);
void set_range_min_hz(float p_hz);
void set_rate_hz(float p_hz);
};
#endif