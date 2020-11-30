/* THIS FILE IS GENERATED */
#include "AudioEffectAmplify.h"
float AudioEffectAmplify::get_volume_db(){
	return (float) _wasgo_AudioEffectAmplify_wrapper_get_volume_db(wasgo_id));
}
void AudioEffectAmplify::set_volume_db(float p_volume){
	_wasgo_AudioEffectAmplify_wrapper_set_volume_db(wasgo_id, volume);
}

AudioEffectAmplify::AudioEffectAmplify(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
AudioEffectAmplify::~AudioEffectAmplify(){
}