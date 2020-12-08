/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioEffectEQ6.h"

AudioEffectEQ6::AudioEffectEQ6(WasGoID p_wasgo_id) : AudioEffectEQ(p_wasgo_id){
}
AudioEffectEQ6::AudioEffectEQ6(AudioEffectEQ other) : AudioEffectEQ(other._get_wasgo_id()){
}
AudioEffectEQ6::AudioEffectEQ6():AudioEffectEQ(){
}
AudioEffectEQ6 AudioEffectEQ6::new_instance(){
    return AudioEffectEQ6(_wasgo_AudioEffectEQ6_constructor());
}
WasGoID AudioEffectEQ6::_get_wasgo_id(){
    return wasgo_id;
}
AudioEffectEQ6::operator bool(){
    return (bool) wasgo_id;
}
