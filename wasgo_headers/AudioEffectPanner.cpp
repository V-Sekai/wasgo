/* THIS FILE IS GENERATED */
#include "AudioEffectPanner.h"
float AudioEffectPanner::get_pan(){
	return (float) _wasgo_AudioEffectPanner_wrapper_get_pan(wasgo_id));
}
void AudioEffectPanner::set_pan(float p_cpanume){
	_wasgo_AudioEffectPanner_wrapper_set_pan(wasgo_id, cpanume);
}

AudioEffectPanner::AudioEffectPanner(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
AudioEffectPanner::~AudioEffectPanner(){
}