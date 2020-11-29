/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTFILTER_H
#define AUDIOEFFECTFILTER_H

#include "stdint.h"

#include "AudioEffect.h"
class AudioEffectFilter : public AudioEffect{
public: AudioEffectFilter();
enum FilterDB{
FILTER_6DB,
FILTER_12DB,
FILTER_18DB,
FILTER_24DB
};
float get_cutoff();
AudioEffectFilter::FilterDB get_db();
float get_gain();
float get_resonance();
void set_cutoff(float p_freq);
void set_db(AudioEffectFilter::FilterDB p_amount);
void set_gain(float p_amount);
void set_resonance(float p_amount);
};
#endif