/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioEffectLowPassFilter.h"

AudioEffectLowPassFilter::AudioEffectLowPassFilter(WasGoId p_wasgo_id) : AudioEffectFilter(p_wasgo_id){
}
AudioEffectLowPassFilter::AudioEffectLowPassFilter(){
    wasgo_id = _wasgo_AudioEffectLowPassFilter_constructor();
}
AudioEffectLowPassFilter::~AudioEffectLowPassFilter(){
    _wasgo_AudioEffectLowPassFilter_destructor(wasgo_id);
}