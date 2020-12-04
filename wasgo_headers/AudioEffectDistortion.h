/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTDISTORTION_H
#define AUDIOEFFECTDISTORTION_H

#include "wasgo\wasgo.h"

#include "AudioEffect.h"
class AudioEffectDistortion : public AudioEffect{
public:
enum Mode{
MODE_CLIP,
MODE_ATAN,
MODE_LOFI,
MODE_OVERDRIVE,
MODE_WAVESHAPE
};
float get_drive();
float get_keep_hf_hz();
AudioEffectDistortion::Mode get_mode();
float get_post_gain();
float get_pre_gain();
void set_drive(float p_drive);
void set_keep_hf_hz(float p_keep_hf_hz);
void set_mode(AudioEffectDistortion::Mode p_mode);
void set_post_gain(float p_post_gain);
void set_pre_gain(float p_pre_gain);

protected:
public:
explicit AudioEffectDistortion(WasGoID p_wasgo_id);
explicit AudioEffectDistortion(AudioEffect other);
AudioEffectDistortion new_instance();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_AudioEffectDistortion_wrapper_get_drive(WasGoID wasgo_id);
float _wasgo_AudioEffectDistortion_wrapper_get_keep_hf_hz(WasGoID wasgo_id);
WasGoID _wasgo_AudioEffectDistortion_wrapper_get_mode(WasGoID wasgo_id);
float _wasgo_AudioEffectDistortion_wrapper_get_post_gain(WasGoID wasgo_id);
float _wasgo_AudioEffectDistortion_wrapper_get_pre_gain(WasGoID wasgo_id);
void _wasgo_AudioEffectDistortion_wrapper_set_drive(WasGoID wasgo_id, float p_drive);
void _wasgo_AudioEffectDistortion_wrapper_set_keep_hf_hz(WasGoID wasgo_id, float p_keep_hf_hz);
void _wasgo_AudioEffectDistortion_wrapper_set_mode(WasGoID wasgo_id, WasGoID p_mode);
void _wasgo_AudioEffectDistortion_wrapper_set_post_gain(WasGoID wasgo_id, float p_post_gain);
void _wasgo_AudioEffectDistortion_wrapper_set_pre_gain(WasGoID wasgo_id, float p_pre_gain);

    //constructor wrappers
    WasGoID _wasgo_AudioEffectDistortion_constructor();
            
}
#endif