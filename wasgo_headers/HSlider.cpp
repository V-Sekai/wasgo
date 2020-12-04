/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "HSlider.h"

HSlider::HSlider(WasGoID p_wasgo_id) : Slider(p_wasgo_id){
}
HSlider::HSlider(Slider other) : Slider(other._get_wasgo_id()){
    wasgo_id = _wasgo_HSlider_constructor();
}
HSlider::new_instance(){
    return HSlider(_wasgo_HSlider_constructor());
}