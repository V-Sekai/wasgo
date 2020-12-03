/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Slider.h"
int Slider::get_ticks(){
	return (int) _wasgo_Slider_wrapper_get_ticks(wasgo_id);
}
bool Slider::get_ticks_on_borders(){
	return (bool) _wasgo_Slider_wrapper_get_ticks_on_borders(wasgo_id);
}
bool Slider::is_editable(){
	return (bool) _wasgo_Slider_wrapper_is_editable(wasgo_id);
}
bool Slider::is_scrollable(){
	return (bool) _wasgo_Slider_wrapper_is_scrollable(wasgo_id);
}
void Slider::set_editable(bool p_editable){
	_wasgo_Slider_wrapper_set_editable(wasgo_id, p_editable);
}
void Slider::set_scrollable(bool p_scrollable){
	_wasgo_Slider_wrapper_set_scrollable(wasgo_id, p_scrollable);
}
void Slider::set_ticks(int p_count){
	_wasgo_Slider_wrapper_set_ticks(wasgo_id, p_count);
}
void Slider::set_ticks_on_borders(bool p_ticks_on_border){
	_wasgo_Slider_wrapper_set_ticks_on_borders(wasgo_id, p_ticks_on_border);
}