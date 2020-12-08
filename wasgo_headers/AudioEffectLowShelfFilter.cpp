/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioEffectLowShelfFilter.h"

AudioEffectLowShelfFilter::AudioEffectLowShelfFilter(WasGoID p_wasgo_id) : AudioEffectFilter(p_wasgo_id){
}
AudioEffectLowShelfFilter::AudioEffectLowShelfFilter(AudioEffectFilter other) : AudioEffectFilter(other._get_wasgo_id()){
}
AudioEffectLowShelfFilter::AudioEffectLowShelfFilter():AudioEffectFilter(){
}
AudioEffectLowShelfFilter AudioEffectLowShelfFilter::new_instance(){
    return AudioEffectLowShelfFilter(_wasgo_AudioEffectLowShelfFilter_constructor());
}
WasGoID AudioEffectLowShelfFilter::_get_wasgo_id(){
    return wasgo_id;
}
AudioEffectLowShelfFilter::operator bool(){
    return (bool) wasgo_id;
}
