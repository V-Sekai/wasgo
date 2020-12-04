/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioEffectHighShelfFilter.h"

AudioEffectHighShelfFilter::AudioEffectHighShelfFilter(WasGoID p_wasgo_id) : AudioEffectFilter(p_wasgo_id){
}
AudioEffectHighShelfFilter::AudioEffectHighShelfFilter(AudioEffectFilter other) : AudioEffectFilter(other._get_wasgo_id()){
    wasgo_id = _wasgo_AudioEffectHighShelfFilter_constructor();
}
AudioEffectHighShelfFilter::new_instance(){
    return AudioEffectHighShelfFilter(_wasgo_AudioEffectHighShelfFilter_constructor());
}