/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioEffectHighPassFilter.h"

AudioEffectHighPassFilter::AudioEffectHighPassFilter(WasGoID p_wasgo_id) : AudioEffectFilter(p_wasgo_id){
}
AudioEffectHighPassFilter::AudioEffectHighPassFilter(AudioEffectFilter other) : AudioEffectFilter(other._get_wasgo_id()){
}
AudioEffectHighPassFilter::AudioEffectHighPassFilter():AudioEffectFilter(){
}
AudioEffectHighPassFilter AudioEffectHighPassFilter::new_instance(){
    return AudioEffectHighPassFilter(_wasgo_AudioEffectHighPassFilter_constructor());
}
WasGoID AudioEffectHighPassFilter::_get_wasgo_id(){
    return wasgo_id;
}
AudioEffectHighPassFilter::operator bool(){
    return (bool) wasgo_id;
}
