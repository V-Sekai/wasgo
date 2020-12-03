/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioBusLayout.h"

AudioBusLayout::AudioBusLayout(WasGoId p_wasgo_id) : Resource(p_wasgo_id){
}
AudioBusLayout::AudioBusLayout(){
    wasgo_id = _wasgo_AudioBusLayout_constructor();
}
AudioBusLayout::~AudioBusLayout(){
    _wasgo_AudioBusLayout_destructor(wasgo_id);
}