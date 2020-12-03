/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioEffectBandLimitFilter.h"

AudioEffectBandLimitFilter::AudioEffectBandLimitFilter(WasGoId p_wasgo_id) : AudioEffectFilter(p_wasgo_id){
}
AudioEffectBandLimitFilter::AudioEffectBandLimitFilter(){
    wasgo_id = _wasgo_AudioEffectBandLimitFilter_constructor();
}
AudioEffectBandLimitFilter::~AudioEffectBandLimitFilter(){
    _wasgo_AudioEffectBandLimitFilter_destructor(wasgo_id);
}