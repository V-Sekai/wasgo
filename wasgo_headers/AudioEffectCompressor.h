/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTCOMPRESSOR_H
#define AUDIOEFFECTCOMPRESSOR_H

#include "wasgo\wasgo.h"

#include "AudioEffect.h"
#include "ustring.h"
class AudioEffectCompressor : public AudioEffect{
public:
float get_attack_us();
float get_gain();
float get_mix();
float get_ratio();
float get_release_ms();
String get_sidechain();
float get_threshold();
void set_attack_us(float p_attack_us);
void set_gain(float p_gain);
void set_mix(float p_mix);
void set_ratio(float p_ratio);
void set_release_ms(float p_release_ms);
void set_sidechain(String p_sidechain);
void set_threshold(float p_threshold);

protected:
public:
explicit AudioEffectCompressor(WasGoID p_wasgo_id);
explicit AudioEffectCompressor(AudioEffect other);
AudioEffectCompressor new_instance();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_AudioEffectCompressor_wrapper_get_attack_us(WasGoID wasgo_id);
float _wasgo_AudioEffectCompressor_wrapper_get_gain(WasGoID wasgo_id);
float _wasgo_AudioEffectCompressor_wrapper_get_mix(WasGoID wasgo_id);
float _wasgo_AudioEffectCompressor_wrapper_get_ratio(WasGoID wasgo_id);
float _wasgo_AudioEffectCompressor_wrapper_get_release_ms(WasGoID wasgo_id);
void _wasgo_AudioEffectCompressor_wrapper_get_sidechain(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_AudioEffectCompressor_wrapper_get_threshold(WasGoID wasgo_id);
void _wasgo_AudioEffectCompressor_wrapper_set_attack_us(WasGoID wasgo_id, float p_attack_us);
void _wasgo_AudioEffectCompressor_wrapper_set_gain(WasGoID wasgo_id, float p_gain);
void _wasgo_AudioEffectCompressor_wrapper_set_mix(WasGoID wasgo_id, float p_mix);
void _wasgo_AudioEffectCompressor_wrapper_set_ratio(WasGoID wasgo_id, float p_ratio);
void _wasgo_AudioEffectCompressor_wrapper_set_release_ms(WasGoID wasgo_id, float p_release_ms);
void _wasgo_AudioEffectCompressor_wrapper_set_sidechain(WasGoID wasgo_id, const uint8_t * p_sidechain, int p_sidechain_wasgo_buffer_size);
void _wasgo_AudioEffectCompressor_wrapper_set_threshold(WasGoID wasgo_id, float p_threshold);

    //constructor wrappers
    WasGoID _wasgo_AudioEffectCompressor_constructor();
            
}
#endif