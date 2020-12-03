/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioEffectBandPassFilter.h"

AudioEffectBandPassFilter::AudioEffectBandPassFilter(WasGoId p_wasgo_id) : AudioEffectFilter(p_wasgo_id){
}
AudioEffectBandPassFilter::AudioEffectBandPassFilter(){
    wasgo_id = _wasgo_AudioEffectBandPassFilter_constructor();
}
AudioEffectBandPassFilter::~AudioEffectBandPassFilter(){
    _wasgo_AudioEffectBandPassFilter_destructor(wasgo_id);
}