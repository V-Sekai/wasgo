/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTEQ_H
#define AUDIOEFFECTEQ_H

#include "stdint.h"

#include "AudioEffect.h"
class AudioEffectEQ : public AudioEffect{
public: AudioEffectEQ();
int get_band_count();
float get_band_gain_db(int p_band_idx);
void set_band_gain_db(int p_band_idx, float p_volume_db);
};
#endif