/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTEQ_H
#define AUDIOEFFECTEQ_H

#include "wasgo\wasgoid.h"

#include "AudioEffect.h"
class AudioEffectEQ : public AudioEffect{
public:
int get_band_count();
float get_band_gain_db(int p_band_idx);
void set_band_gain_db(int p_band_idx, float p_volume_db);

protected:
public:
explicit AudioEffectEQ(WasGoID p_wasgo_id);
explicit AudioEffectEQ(AudioEffect other);
AudioEffectEQ();
AudioEffectEQ new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_AudioEffectEQ_wrapper_get_band_count(WasGoID wasgo_id);
float _wasgo_AudioEffectEQ_wrapper_get_band_gain_db(WasGoID wasgo_id, int p_band_idx);
void _wasgo_AudioEffectEQ_wrapper_set_band_gain_db(WasGoID wasgo_id, int p_band_idx, float p_volume_db);

    //constructor wrappers
    WasGoID _wasgo_AudioEffectEQ_constructor();
            
}
#endif