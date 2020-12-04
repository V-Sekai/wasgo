/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioEffectEQ6.h"

AudioEffectEQ6::AudioEffectEQ6(WasGoId p_wasgo_id) : AudioEffectEQ(p_wasgo_id){
}
AudioEffectEQ6::AudioEffectEQ6(AudioEffectEQ other) : AudioEffectEQ(other._get_wasgo_id()){
    wasgo_id = _wasgo_AudioEffectEQ6_constructor();
}
AudioEffectEQ6::new_instance(){
    return AudioEffectEQ6(_wasgo_AudioEffectEQ6_constructor());
}