/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTLIMITER_H
#define AUDIOEFFECTLIMITER_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "AudioEffect.h"
class AudioEffectLimiter : public AudioEffect{
float get_ceiling_db();
float get_soft_clip_db();
float get_soft_clip_ratio();
float get_threshold_db();
void set_ceiling_db(float p_ceiling);
void set_soft_clip_db(float p_soft_clip);
void set_soft_clip_ratio(float p_soft_clip);
void set_threshold_db(float p_threshold);

AudioEffectLimiter(WasGoId p_wasgo_id);
~AudioEffectLimiter();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_AudioEffectLimiter_wrapper_get_ceiling_db(WasGoId wasgo_id);
float _wasgo_AudioEffectLimiter_wrapper_get_soft_clip_db(WasGoId wasgo_id);
float _wasgo_AudioEffectLimiter_wrapper_get_soft_clip_ratio(WasGoId wasgo_id);
float _wasgo_AudioEffectLimiter_wrapper_get_threshold_db(WasGoId wasgo_id);
void _wasgo_AudioEffectLimiter_wrapper_set_ceiling_db(WasGoId wasgo_id, float p_ceiling);
void _wasgo_AudioEffectLimiter_wrapper_set_soft_clip_db(WasGoId wasgo_id, float p_soft_clip);
void _wasgo_AudioEffectLimiter_wrapper_set_soft_clip_ratio(WasGoId wasgo_id, float p_soft_clip);
void _wasgo_AudioEffectLimiter_wrapper_set_threshold_db(WasGoId wasgo_id, float p_threshold);
}
#endif