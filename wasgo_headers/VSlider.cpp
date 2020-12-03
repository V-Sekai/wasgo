/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VSlider.h"

VSlider::VSlider(WasGoId p_wasgo_id) : Slider(p_wasgo_id){
}
VSlider::VSlider(){
    wasgo_id = _wasgo_VSlider_constructor();
}
VSlider::~VSlider(){
    _wasgo_VSlider_destructor(wasgo_id);
}