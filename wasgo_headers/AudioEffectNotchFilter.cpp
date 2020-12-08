/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioEffectNotchFilter.h"

AudioEffectNotchFilter::AudioEffectNotchFilter(WasGoID p_wasgo_id) : AudioEffectFilter(p_wasgo_id){
}
AudioEffectNotchFilter::AudioEffectNotchFilter(AudioEffectFilter other) : AudioEffectFilter(other._get_wasgo_id()){
}
AudioEffectNotchFilter::AudioEffectNotchFilter():AudioEffectFilter(){
}
AudioEffectNotchFilter AudioEffectNotchFilter::new_instance(){
    return AudioEffectNotchFilter(_wasgo_AudioEffectNotchFilter_constructor());
}
WasGoID AudioEffectNotchFilter::_get_wasgo_id(){
    return wasgo_id;
}
AudioEffectNotchFilter::operator bool(){
    return (bool) wasgo_id;
}
