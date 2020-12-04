/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioEffectHighPassFilter.h"

AudioEffectHighPassFilter::AudioEffectHighPassFilter(WasGoID p_wasgo_id) : AudioEffectFilter(p_wasgo_id){
}
AudioEffectHighPassFilter::AudioEffectHighPassFilter(AudioEffectFilter other) : AudioEffectFilter(other._get_wasgo_id()){
    wasgo_id = _wasgo_AudioEffectHighPassFilter_constructor();
}
AudioEffectHighPassFilter::new_instance(){
    return AudioEffectHighPassFilter(_wasgo_AudioEffectHighPassFilter_constructor());
}