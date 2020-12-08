/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioEffectLowPassFilter.h"

AudioEffectLowPassFilter::AudioEffectLowPassFilter(WasGoID p_wasgo_id) : AudioEffectFilter(p_wasgo_id){
}
AudioEffectLowPassFilter::AudioEffectLowPassFilter(AudioEffectFilter other) : AudioEffectFilter(other._get_wasgo_id()){
}
AudioEffectLowPassFilter::AudioEffectLowPassFilter():AudioEffectFilter(){
}
AudioEffectLowPassFilter AudioEffectLowPassFilter::new_instance(){
    return AudioEffectLowPassFilter(_wasgo_AudioEffectLowPassFilter_constructor());
}
WasGoID AudioEffectLowPassFilter::_get_wasgo_id(){
    return wasgo_id;
}
AudioEffectLowPassFilter::operator bool(){
    return (bool) wasgo_id;
}
