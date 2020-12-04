/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioEffectEQ21.h"

AudioEffectEQ21::AudioEffectEQ21(WasGoID p_wasgo_id) : AudioEffectEQ(p_wasgo_id){
}
AudioEffectEQ21::AudioEffectEQ21(AudioEffectEQ other) : AudioEffectEQ(other._get_wasgo_id()){
    wasgo_id = _wasgo_AudioEffectEQ21_constructor();
}
AudioEffectEQ21::new_instance(){
    return AudioEffectEQ21(_wasgo_AudioEffectEQ21_constructor());
}