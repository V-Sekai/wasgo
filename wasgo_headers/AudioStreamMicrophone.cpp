/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioStreamMicrophone.h"

AudioStreamMicrophone::AudioStreamMicrophone(WasGoId p_wasgo_id) : AudioStream(p_wasgo_id){
}
AudioStreamMicrophone::AudioStreamMicrophone(){
    wasgo_id = _wasgo_AudioStreamMicrophone_constructor();
}
AudioStreamMicrophone::~AudioStreamMicrophone(){
    _wasgo_AudioStreamMicrophone_destructor(wasgo_id);
}