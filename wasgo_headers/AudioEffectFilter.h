/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTFILTER_H
#define AUDIOEFFECTFILTER_H

#include "wasgo\wasgo.h"

#include "AudioEffect.h"
class AudioEffectFilter : public AudioEffect{
public:
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

protected:
public:
explicit AudioEffectFilter(WasGoID p_wasgo_id);
explicit AudioEffectFilter(AudioEffect other);
AudioEffectFilter new_instance();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_AudioEffectFilter_wrapper_get_cutoff(WasGoID wasgo_id);
WasGoID _wasgo_AudioEffectFilter_wrapper_get_db(WasGoID wasgo_id);
float _wasgo_AudioEffectFilter_wrapper_get_gain(WasGoID wasgo_id);
float _wasgo_AudioEffectFilter_wrapper_get_resonance(WasGoID wasgo_id);
void _wasgo_AudioEffectFilter_wrapper_set_cutoff(WasGoID wasgo_id, float p_freq);
void _wasgo_AudioEffectFilter_wrapper_set_db(WasGoID wasgo_id, WasGoID p_amount);
void _wasgo_AudioEffectFilter_wrapper_set_gain(WasGoID wasgo_id, float p_amount);
void _wasgo_AudioEffectFilter_wrapper_set_resonance(WasGoID wasgo_id, float p_amount);

    //constructor wrappers
    WasGoID _wasgo_AudioEffectFilter_constructor();
            
}
#endif