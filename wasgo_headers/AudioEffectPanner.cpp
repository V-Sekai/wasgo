/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioEffectPanner.h"
float AudioEffectPanner::get_pan(){
	return (float) _wasgo_AudioEffectPanner_wrapper_get_pan(wasgo_id);
}
void AudioEffectPanner::set_pan(float p_cpanume){
	_wasgo_AudioEffectPanner_wrapper_set_pan(wasgo_id, p_cpanume);
}

AudioEffectPanner::AudioEffectPanner(WasGoID p_wasgo_id) : AudioEffect(p_wasgo_id){
}
AudioEffectPanner::AudioEffectPanner(AudioEffect other) : AudioEffect(other._get_wasgo_id()){
}
AudioEffectPanner::AudioEffectPanner():AudioEffect(){
}
AudioEffectPanner AudioEffectPanner::new_instance(){
    return AudioEffectPanner(_wasgo_AudioEffectPanner_constructor());
}
WasGoID AudioEffectPanner::_get_wasgo_id(){
    return wasgo_id;
}
AudioEffectPanner::operator bool(){
    return (bool) wasgo_id;
}
