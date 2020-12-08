/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTPHASER_H
#define AUDIOEFFECTPHASER_H

#include "wasgo\wasgoid.h"

#include "AudioEffect.h"
class AudioEffectPhaser : public AudioEffect{
public:
float get_depth();
float get_feedback();
float get_range_max_hz();
float get_range_min_hz();
float get_rate_hz();
void set_depth(float p_depth);
void set_feedback(float p_fbk);
void set_range_max_hz(float p_hz);
void set_range_min_hz(float p_hz);
void set_rate_hz(float p_hz);

protected:
public:
explicit AudioEffectPhaser(WasGoID p_wasgo_id);
explicit AudioEffectPhaser(AudioEffect other);
AudioEffectPhaser();
AudioEffectPhaser new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_AudioEffectPhaser_wrapper_get_depth(WasGoID wasgo_id);
float _wasgo_AudioEffectPhaser_wrapper_get_feedback(WasGoID wasgo_id);
float _wasgo_AudioEffectPhaser_wrapper_get_range_max_hz(WasGoID wasgo_id);
float _wasgo_AudioEffectPhaser_wrapper_get_range_min_hz(WasGoID wasgo_id);
float _wasgo_AudioEffectPhaser_wrapper_get_rate_hz(WasGoID wasgo_id);
void _wasgo_AudioEffectPhaser_wrapper_set_depth(WasGoID wasgo_id, float p_depth);
void _wasgo_AudioEffectPhaser_wrapper_set_feedback(WasGoID wasgo_id, float p_fbk);
void _wasgo_AudioEffectPhaser_wrapper_set_range_max_hz(WasGoID wasgo_id, float p_hz);
void _wasgo_AudioEffectPhaser_wrapper_set_range_min_hz(WasGoID wasgo_id, float p_hz);
void _wasgo_AudioEffectPhaser_wrapper_set_rate_hz(WasGoID wasgo_id, float p_hz);

    //constructor wrappers
    WasGoID _wasgo_AudioEffectPhaser_constructor();
            
}
#endif