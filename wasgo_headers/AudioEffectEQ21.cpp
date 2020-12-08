/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioEffectEQ21.h"

AudioEffectEQ21::AudioEffectEQ21(WasGoID p_wasgo_id) : AudioEffectEQ(p_wasgo_id){
}
AudioEffectEQ21::AudioEffectEQ21(AudioEffectEQ other) : AudioEffectEQ(other._get_wasgo_id()){
}
AudioEffectEQ21::AudioEffectEQ21():AudioEffectEQ(){
}
AudioEffectEQ21 AudioEffectEQ21::new_instance(){
    return AudioEffectEQ21(_wasgo_AudioEffectEQ21_constructor());
}
WasGoID AudioEffectEQ21::_get_wasgo_id(){
    return wasgo_id;
}
AudioEffectEQ21::operator bool(){
    return (bool) wasgo_id;
}
