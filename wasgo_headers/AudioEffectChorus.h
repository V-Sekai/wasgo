/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTCHORUS_H
#define AUDIOEFFECTCHORUS_H

#include "wasgo\wasgoid.h"

#include "AudioEffect.h"
class AudioEffectChorus : public AudioEffect{
public:
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

protected:
public:
explicit AudioEffectChorus(WasGoID p_wasgo_id);
explicit AudioEffectChorus(AudioEffect other);
AudioEffectChorus();
AudioEffectChorus new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_AudioEffectChorus_wrapper_get_dry(WasGoID wasgo_id);
int _wasgo_AudioEffectChorus_wrapper_get_voice_count(WasGoID wasgo_id);
float _wasgo_AudioEffectChorus_wrapper_get_voice_cutoff_hz(WasGoID wasgo_id, int p_voice_idx);
float _wasgo_AudioEffectChorus_wrapper_get_voice_delay_ms(WasGoID wasgo_id, int p_voice_idx);
float _wasgo_AudioEffectChorus_wrapper_get_voice_depth_ms(WasGoID wasgo_id, int p_voice_idx);
float _wasgo_AudioEffectChorus_wrapper_get_voice_level_db(WasGoID wasgo_id, int p_voice_idx);
float _wasgo_AudioEffectChorus_wrapper_get_voice_pan(WasGoID wasgo_id, int p_voice_idx);
float _wasgo_AudioEffectChorus_wrapper_get_voice_rate_hz(WasGoID wasgo_id, int p_voice_idx);
float _wasgo_AudioEffectChorus_wrapper_get_wet(WasGoID wasgo_id);
void _wasgo_AudioEffectChorus_wrapper_set_dry(WasGoID wasgo_id, float p_amount);
void _wasgo_AudioEffectChorus_wrapper_set_voice_count(WasGoID wasgo_id, int p_voices);
void _wasgo_AudioEffectChorus_wrapper_set_voice_cutoff_hz(WasGoID wasgo_id, int p_voice_idx, float p_cutoff_hz);
void _wasgo_AudioEffectChorus_wrapper_set_voice_delay_ms(WasGoID wasgo_id, int p_voice_idx, float p_delay_ms);
void _wasgo_AudioEffectChorus_wrapper_set_voice_depth_ms(WasGoID wasgo_id, int p_voice_idx, float p_depth_ms);
void _wasgo_AudioEffectChorus_wrapper_set_voice_level_db(WasGoID wasgo_id, int p_voice_idx, float p_level_db);
void _wasgo_AudioEffectChorus_wrapper_set_voice_pan(WasGoID wasgo_id, int p_voice_idx, float p_pan);
void _wasgo_AudioEffectChorus_wrapper_set_voice_rate_hz(WasGoID wasgo_id, int p_voice_idx, float p_rate_hz);
void _wasgo_AudioEffectChorus_wrapper_set_wet(WasGoID wasgo_id, float p_amount);

    //constructor wrappers
    WasGoID _wasgo_AudioEffectChorus_constructor();
            
}
#endif