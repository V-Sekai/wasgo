/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioEffectEQ10.h"

AudioEffectEQ10::AudioEffectEQ10(WasGoId p_wasgo_id) : AudioEffectEQ(p_wasgo_id){
}
AudioEffectEQ10::AudioEffectEQ10(AudioEffectEQ other) : AudioEffectEQ(other._get_wasgo_id()){
    wasgo_id = _wasgo_AudioEffectEQ10_constructor();
}
AudioEffectEQ10::new_instance(){
    return AudioEffectEQ10(_wasgo_AudioEffectEQ10_constructor());
}