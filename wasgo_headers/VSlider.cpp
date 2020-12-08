/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VSlider.h"

VSlider::VSlider(WasGoID p_wasgo_id) : Slider(p_wasgo_id){
}
VSlider::VSlider(Slider other) : Slider(other._get_wasgo_id()){
}
VSlider::VSlider():Slider(){
}
VSlider VSlider::new_instance(){
    return VSlider(_wasgo_VSlider_constructor());
}
WasGoID VSlider::_get_wasgo_id(){
    return wasgo_id;
}
VSlider::operator bool(){
    return (bool) wasgo_id;
}
