/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTEQ_H
#define AUDIOEFFECTEQ_H

#include <stdint.h>

#include "AudioEffect.h"
class AudioEffectEQ : public AudioEffect{
public: AudioEffectEQ();
int  get_band_count();
int  get_band_count();
float  get_band_gain_db(int band_idx);
void  set_band_gain_db(int band_idx, float volume_db);
};
#endif