/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioEffectEQ10.h"

AudioEffectEQ10::AudioEffectEQ10(WasGoID p_wasgo_id) : AudioEffectEQ(p_wasgo_id){
}
AudioEffectEQ10::AudioEffectEQ10(AudioEffectEQ other) : AudioEffectEQ(other._get_wasgo_id()){
}
AudioEffectEQ10::AudioEffectEQ10():AudioEffectEQ(){
}
AudioEffectEQ10 AudioEffectEQ10::new_instance(){
    return AudioEffectEQ10(_wasgo_AudioEffectEQ10_constructor());
}
WasGoID AudioEffectEQ10::_get_wasgo_id(){
    return wasgo_id;
}
AudioEffectEQ10::operator bool(){
    return (bool) wasgo_id;
}
