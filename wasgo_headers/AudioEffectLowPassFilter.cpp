/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioEffectLowPassFilter.h"

AudioEffectLowPassFilter::AudioEffectLowPassFilter(WasGoID p_wasgo_id) : AudioEffectFilter(p_wasgo_id){
}
AudioEffectLowPassFilter::AudioEffectLowPassFilter(AudioEffectFilter other) : AudioEffectFilter(other._get_wasgo_id()){
    wasgo_id = _wasgo_AudioEffectLowPassFilter_constructor();
}
AudioEffectLowPassFilter::new_instance(){
    return AudioEffectLowPassFilter(_wasgo_AudioEffectLowPassFilter_constructor());
}