/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioEffectBandLimitFilter.h"

AudioEffectBandLimitFilter::AudioEffectBandLimitFilter(WasGoId p_wasgo_id) : AudioEffectFilter(p_wasgo_id){
}
AudioEffectBandLimitFilter::AudioEffectBandLimitFilter(AudioEffectFilter other) : AudioEffectFilter(other._get_wasgo_id()){
    wasgo_id = _wasgo_AudioEffectBandLimitFilter_constructor();
}
AudioEffectBandLimitFilter::new_instance(){
    return AudioEffectBandLimitFilter(_wasgo_AudioEffectBandLimitFilter_constructor());
}