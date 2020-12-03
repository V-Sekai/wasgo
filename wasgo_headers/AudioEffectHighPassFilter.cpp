/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioEffectHighPassFilter.h"

AudioEffectHighPassFilter::AudioEffectHighPassFilter(WasGoId p_wasgo_id) : AudioEffectFilter(p_wasgo_id){
}
AudioEffectHighPassFilter::AudioEffectHighPassFilter(){
    wasgo_id = _wasgo_AudioEffectHighPassFilter_constructor();
}
AudioEffectHighPassFilter::~AudioEffectHighPassFilter(){
    _wasgo_AudioEffectHighPassFilter_destructor(wasgo_id);
}