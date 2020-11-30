/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTCHORUS_H
#define AUDIOEFFECTCHORUS_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "AudioEffect.h"
class AudioEffectChorus : public AudioEffect{
float get_dry();
int get_voice_count();
float get_voice_cutoff_hz(int p_voice_idx);
float get_voice_delay_ms(int p_voice_idx);
float get_voice_depth_ms(int p_voice_idx);
float get_voice_level_db(int p_voice_idx);
float get_voice_pan(int p_voice_idx);
float get_voice_rate_hz(int p_voice_idx);
float get_wet();
void set_dry(float p_amount);
void set_voice_count(int p_voices);
void set_voice_cutoff_hz(int p_voice_idx, float p_cutoff_hz);
void set_voice_delay_ms(int p_voice_idx, float p_delay_ms);
void set_voice_depth_ms(int p_voice_idx, float p_depth_ms);
void set_voice_level_db(int p_voice_idx, float p_level_db);
void set_voice_pan(int p_voice_idx, float p_pan);
void set_voice_rate_hz(int p_voice_idx, float p_rate_hz);
void set_wet(float p_amount);

AudioEffectChorus(WasGoId p_wasgo_id);
~AudioEffectChorus();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_AudioEffectChorus_wrapper_get_dry(WasGoId wasgo_id);
int _wasgo_AudioEffectChorus_wrapper_get_voice_count(WasGoId wasgo_id);
float _wasgo_AudioEffectChorus_wrapper_get_voice_cutoff_hz(WasGoId wasgo_id, int p_voice_idx);
float _wasgo_AudioEffectChorus_wrapper_get_voice_delay_ms(WasGoId wasgo_id, int p_voice_idx);
float _wasgo_AudioEffectChorus_wrapper_get_voice_depth_ms(WasGoId wasgo_id, int p_voice_idx);
float _wasgo_AudioEffectChorus_wrapper_get_voice_level_db(WasGoId wasgo_id, int p_voice_idx);
float _wasgo_AudioEffectChorus_wrapper_get_voice_pan(WasGoId wasgo_id, int p_voice_idx);
float _wasgo_AudioEffectChorus_wrapper_get_voice_rate_hz(WasGoId wasgo_id, int p_voice_idx);
float _wasgo_AudioEffectChorus_wrapper_get_wet(WasGoId wasgo_id);
void _wasgo_AudioEffectChorus_wrapper_set_dry(WasGoId wasgo_id, float p_amount);
void _wasgo_AudioEffectChorus_wrapper_set_voice_count(WasGoId wasgo_id, int p_voices);
void _wasgo_AudioEffectChorus_wrapper_set_voice_cutoff_hz(WasGoId wasgo_id, int p_voice_idx, float p_cutoff_hz);
void _wasgo_AudioEffectChorus_wrapper_set_voice_delay_ms(WasGoId wasgo_id, int p_voice_idx, float p_delay_ms);
void _wasgo_AudioEffectChorus_wrapper_set_voice_depth_ms(WasGoId wasgo_id, int p_voice_idx, float p_depth_ms);
void _wasgo_AudioEffectChorus_wrapper_set_voice_level_db(WasGoId wasgo_id, int p_voice_idx, float p_level_db);
void _wasgo_AudioEffectChorus_wrapper_set_voice_pan(WasGoId wasgo_id, int p_voice_idx, float p_pan);
void _wasgo_AudioEffectChorus_wrapper_set_voice_rate_hz(WasGoId wasgo_id, int p_voice_idx, float p_rate_hz);
void _wasgo_AudioEffectChorus_wrapper_set_wet(WasGoId wasgo_id, float p_amount);
}
#endif