/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioEffectLowShelfFilter.h"

AudioEffectLowShelfFilter::AudioEffectLowShelfFilter(WasGoId p_wasgo_id) : AudioEffectFilter(p_wasgo_id){
}
AudioEffectLowShelfFilter::AudioEffectLowShelfFilter(AudioEffectFilter other) : AudioEffectFilter(other._get_wasgo_id()){
    wasgo_id = _wasgo_AudioEffectLowShelfFilter_constructor();
}
AudioEffectLowShelfFilter::new_instance(){
    return AudioEffectLowShelfFilter(_wasgo_AudioEffectLowShelfFilter_constructor());
}