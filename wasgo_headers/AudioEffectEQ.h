/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTEQ_H
#define AUDIOEFFECTEQ_H

#include "wasgo\wasgo.h"

#include "AudioEffect.h"
class AudioEffectEQ : public AudioEffect{
public:
int get_band_count();
float get_band_gain_db(int p_band_idx);
void set_band_gain_db(int p_band_idx, float p_volume_db);

protected:
public:
explicit AudioEffectEQ(WasGoId p_wasgo_id);
explicit AudioEffectEQ(AudioEffect other);
AudioEffectEQ new_instance();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_AudioEffectEQ_wrapper_get_band_count(WasGoId wasgo_id);
float _wasgo_AudioEffectEQ_wrapper_get_band_gain_db(WasGoId wasgo_id, int p_band_idx);
void _wasgo_AudioEffectEQ_wrapper_set_band_gain_db(WasGoId wasgo_id, int p_band_idx, float p_volume_db);

    //constructor wrappers
    WasGoId _wasgo_AudioEffectEQ_constructor();
            
}
#endif