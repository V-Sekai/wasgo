/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTEQ_H
#define AUDIOEFFECTEQ_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "AudioEffect.h"
class AudioEffectEQ : public AudioEffect{
public:
int get_band_count();
float get_band_gain_db(int p_band_idx);
void set_band_gain_db(int p_band_idx, float p_volume_db);

AudioEffectEQ(WasGoId p_wasgo_id);
~AudioEffectEQ();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_AudioEffectEQ_wrapper_get_band_count(WasGoId wasgo_id);
float _wasgo_AudioEffectEQ_wrapper_get_band_gain_db(WasGoId wasgo_id, int p_band_idx);
void _wasgo_AudioEffectEQ_wrapper_set_band_gain_db(WasGoId wasgo_id, int p_band_idx, float p_volume_db);
}
#endif