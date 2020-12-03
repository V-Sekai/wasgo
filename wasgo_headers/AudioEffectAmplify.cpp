/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioEffectAmplify.h"
float AudioEffectAmplify::get_volume_db(){
	return (float) _wasgo_AudioEffectAmplify_wrapper_get_volume_db(wasgo_id);
}
void AudioEffectAmplify::set_volume_db(float p_volume){
	_wasgo_AudioEffectAmplify_wrapper_set_volume_db(wasgo_id, p_volume);
}

AudioEffectAmplify::AudioEffectAmplify(WasGoId p_wasgo_id) : AudioEffect(p_wasgo_id){
}
AudioEffectAmplify::AudioEffectAmplify(){
    wasgo_id = _wasgo_AudioEffectAmplify_constructor();
}
AudioEffectAmplify::~AudioEffectAmplify(){
    _wasgo_AudioEffectAmplify_destructor(wasgo_id);
}