/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioBusLayout.h"

AudioBusLayout::AudioBusLayout(WasGoID p_wasgo_id) : Resource(p_wasgo_id){
}
AudioBusLayout::AudioBusLayout(Resource other) : Resource(other._get_wasgo_id()){
    wasgo_id = _wasgo_AudioBusLayout_constructor();
}
AudioBusLayout::new_instance(){
    return AudioBusLayout(_wasgo_AudioBusLayout_constructor());
}