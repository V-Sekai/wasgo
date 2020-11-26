/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTCOMPRESSOR_H
#define AUDIOEFFECTCOMPRESSOR_H

#include <stdint.h>

#include "String.h"
#include "AudioEffect.h"
class AudioEffectCompressor : public AudioEffect{
public: AudioEffectCompressor();
float  get_attack_us();
float  get_attack_us();
float  get_gain();
float  get_gain();
float  get_mix();
float  get_mix();
float  get_ratio();
float  get_ratio();
float  get_release_ms();
float  get_release_ms();
String  get_sidechain();
String  get_sidechain();
float  get_threshold();
float  get_threshold();
void  set_attack_us(float attack_us);
void  set_gain(float gain);
void  set_mix(float mix);
void  set_ratio(float ratio);
void  set_release_ms(float release_ms);
void  set_sidechain(String sidechain);
void  set_threshold(float threshold);
};
#endif