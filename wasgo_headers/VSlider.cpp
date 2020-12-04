/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VSlider.h"

VSlider::VSlider(WasGoID p_wasgo_id) : Slider(p_wasgo_id){
}
VSlider::VSlider(Slider other) : Slider(other._get_wasgo_id()){
    wasgo_id = _wasgo_VSlider_constructor();
}
VSlider::new_instance(){
    return VSlider(_wasgo_VSlider_constructor());
}