/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTCOMPRESSOR_H
#define AUDIOEFFECTCOMPRESSOR_H

#include "stdint.h"

#include "Variant.h"
#include "AudioEffect.h"
class AudioEffectCompressor : public AudioEffect{
public: AudioEffectCompressor();
float get_attack_us();
float get_gain();
float get_mix();
float get_ratio();
float get_release_ms();
String get_sidechain();
float get_threshold();
void set_attack_us(float p_attack_us);
void set_gain(float p_gain);
void set_mix(float p_mix);
void set_ratio(float p_ratio);
void set_release_ms(float p_release_ms);
void set_sidechain(String p_sidechain);
void set_threshold(float p_threshold);
};
#endif