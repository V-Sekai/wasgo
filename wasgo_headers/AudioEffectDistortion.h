/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTDISTORTION_H
#define AUDIOEFFECTDISTORTION_H

#include "stdint.h"

#include "AudioEffect.h"
class AudioEffectDistortion : public AudioEffect{
public: AudioEffectDistortion();
enum Mode{
MODE_CLIP,
MODE_ATAN,
MODE_LOFI,
MODE_OVERDRIVE,
MODE_WAVESHAPE
};
float get_drive();
float get_keep_hf_hz();
AudioEffectDistortion::Mode get_mode();
float get_post_gain();
float get_pre_gain();
void set_drive(float p_drive);
void set_keep_hf_hz(float p_keep_hf_hz);
void set_mode(AudioEffectDistortion::Mode p_mode);
void set_post_gain(float p_post_gain);
void set_pre_gain(float p_pre_gain);
};
#endif