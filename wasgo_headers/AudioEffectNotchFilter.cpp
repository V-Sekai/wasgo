/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioEffectNotchFilter.h"

AudioEffectNotchFilter::AudioEffectNotchFilter(WasGoId p_wasgo_id) : AudioEffectFilter(p_wasgo_id){
}
AudioEffectNotchFilter::AudioEffectNotchFilter(){
    wasgo_id = _wasgo_AudioEffectNotchFilter_constructor();
}
AudioEffectNotchFilter::~AudioEffectNotchFilter(){
    _wasgo_AudioEffectNotchFilter_destructor(wasgo_id);
}