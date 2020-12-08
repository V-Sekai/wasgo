/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioBusLayout.h"

AudioBusLayout::AudioBusLayout(WasGoID p_wasgo_id) : Resource(p_wasgo_id){
}
AudioBusLayout::AudioBusLayout(Resource other) : Resource(other._get_wasgo_id()){
}
AudioBusLayout::AudioBusLayout():Resource(){
}
AudioBusLayout AudioBusLayout::new_instance(){
    return AudioBusLayout(_wasgo_AudioBusLayout_constructor());
}
WasGoID AudioBusLayout::_get_wasgo_id(){
    return wasgo_id;
}
AudioBusLayout::operator bool(){
    return (bool) wasgo_id;
}
