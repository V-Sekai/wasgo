/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTLIMITER_H
#define AUDIOEFFECTLIMITER_H

#include "stdint.h"

#include "AudioEffect.h"
class AudioEffectLimiter : public AudioEffect{
public: AudioEffectLimiter();
float get_ceiling_db();
float get_soft_clip_db();
float get_soft_clip_ratio();
float get_threshold_db();
void set_ceiling_db(float p_ceiling);
void set_soft_clip_db(float p_soft_clip);
void set_soft_clip_ratio(float p_soft_clip);
void set_threshold_db(float p_threshold);
};
#endif