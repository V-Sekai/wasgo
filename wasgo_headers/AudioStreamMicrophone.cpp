/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioStreamMicrophone.h"

AudioStreamMicrophone::AudioStreamMicrophone(WasGoId p_wasgo_id) : AudioStream(p_wasgo_id){
}
AudioStreamMicrophone::AudioStreamMicrophone(AudioStream other) : AudioStream(other._get_wasgo_id()){
    wasgo_id = _wasgo_AudioStreamMicrophone_constructor();
}
AudioStreamMicrophone::new_instance(){
    return AudioStreamMicrophone(_wasgo_AudioStreamMicrophone_constructor());
}