/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioEffectBandLimitFilter.h"

AudioEffectBandLimitFilter::AudioEffectBandLimitFilter(WasGoID p_wasgo_id) : AudioEffectFilter(p_wasgo_id){
}
AudioEffectBandLimitFilter::AudioEffectBandLimitFilter(AudioEffectFilter other) : AudioEffectFilter(other._get_wasgo_id()){
}
AudioEffectBandLimitFilter::AudioEffectBandLimitFilter():AudioEffectFilter(){
}
AudioEffectBandLimitFilter AudioEffectBandLimitFilter::new_instance(){
    return AudioEffectBandLimitFilter(_wasgo_AudioEffectBandLimitFilter_constructor());
}
WasGoID AudioEffectBandLimitFilter::_get_wasgo_id(){
    return wasgo_id;
}
AudioEffectBandLimitFilter::operator bool(){
    return (bool) wasgo_id;
}
