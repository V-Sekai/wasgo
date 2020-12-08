/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ScrollBar.h"
float ScrollBar::get_custom_step(){
	return (float) _wasgo_ScrollBar_wrapper_get_custom_step(wasgo_id);
}
void ScrollBar::set_custom_step(float p_step){
	_wasgo_ScrollBar_wrapper_set_custom_step(wasgo_id, p_step);
}

ScrollBar::ScrollBar(WasGoID p_wasgo_id) : Range(p_wasgo_id){
}
ScrollBar::ScrollBar(Range other) : Range(other._get_wasgo_id()){
}
ScrollBar::ScrollBar():Range(){
}
ScrollBar ScrollBar::new_instance(){
    return ScrollBar(_wasgo_ScrollBar_constructor());
}
WasGoID ScrollBar::_get_wasgo_id(){
    return wasgo_id;
}
ScrollBar::operator bool(){
    return (bool) wasgo_id;
}
