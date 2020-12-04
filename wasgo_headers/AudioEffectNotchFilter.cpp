/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioEffectNotchFilter.h"

AudioEffectNotchFilter::AudioEffectNotchFilter(WasGoId p_wasgo_id) : AudioEffectFilter(p_wasgo_id){
}
AudioEffectNotchFilter::AudioEffectNotchFilter(AudioEffectFilter other) : AudioEffectFilter(other._get_wasgo_id()){
    wasgo_id = _wasgo_AudioEffectNotchFilter_constructor();
}
AudioEffectNotchFilter::new_instance(){
    return AudioEffectNotchFilter(_wasgo_AudioEffectNotchFilter_constructor());
}