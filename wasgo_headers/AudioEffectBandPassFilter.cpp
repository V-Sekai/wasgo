/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioEffectBandPassFilter.h"

AudioEffectBandPassFilter::AudioEffectBandPassFilter(WasGoID p_wasgo_id) : AudioEffectFilter(p_wasgo_id){
}
AudioEffectBandPassFilter::AudioEffectBandPassFilter(AudioEffectFilter other) : AudioEffectFilter(other._get_wasgo_id()){
}
AudioEffectBandPassFilter::AudioEffectBandPassFilter():AudioEffectFilter(){
}
AudioEffectBandPassFilter AudioEffectBandPassFilter::new_instance(){
    return AudioEffectBandPassFilter(_wasgo_AudioEffectBandPassFilter_constructor());
}
WasGoID AudioEffectBandPassFilter::_get_wasgo_id(){
    return wasgo_id;
}
AudioEffectBandPassFilter::operator bool(){
    return (bool) wasgo_id;
}
