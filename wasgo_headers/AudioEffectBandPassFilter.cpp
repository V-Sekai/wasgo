/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioEffectBandPassFilter.h"

AudioEffectBandPassFilter::AudioEffectBandPassFilter(WasGoID p_wasgo_id) : AudioEffectFilter(p_wasgo_id){
}
AudioEffectBandPassFilter::AudioEffectBandPassFilter(AudioEffectFilter other) : AudioEffectFilter(other._get_wasgo_id()){
    wasgo_id = _wasgo_AudioEffectBandPassFilter_constructor();
}
AudioEffectBandPassFilter::new_instance(){
    return AudioEffectBandPassFilter(_wasgo_AudioEffectBandPassFilter_constructor());
}