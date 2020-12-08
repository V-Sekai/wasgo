/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioStreamMicrophone.h"

AudioStreamMicrophone::AudioStreamMicrophone(WasGoID p_wasgo_id) : AudioStream(p_wasgo_id){
}
AudioStreamMicrophone::AudioStreamMicrophone(AudioStream other) : AudioStream(other._get_wasgo_id()){
}
AudioStreamMicrophone::AudioStreamMicrophone():AudioStream(){
}
AudioStreamMicrophone AudioStreamMicrophone::new_instance(){
    return AudioStreamMicrophone(_wasgo_AudioStreamMicrophone_constructor());
}
WasGoID AudioStreamMicrophone::_get_wasgo_id(){
    return wasgo_id;
}
AudioStreamMicrophone::operator bool(){
    return (bool) wasgo_id;
}
