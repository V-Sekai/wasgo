/* THIS FILE IS GENERATED */
#include "StyleBoxLine.h"
Color StyleBoxLine::get_color(){
	return Color::from_wasgo_id(_wasgo_StyleBoxLine_wrapper_get_color(wasgo_id));
}
float StyleBoxLine::get_grow_begin(){
	return (float) _wasgo_StyleBoxLine_wrapper_get_grow_begin(wasgo_id));
}
float StyleBoxLine::get_grow_end(){
	return (float) _wasgo_StyleBoxLine_wrapper_get_grow_end(wasgo_id));
}
int StyleBoxLine::get_thickness(){
	return (int) _wasgo_StyleBoxLine_wrapper_get_thickness(wasgo_id));
}
bool StyleBoxLine::is_vertical(){
	return (bool) _wasgo_StyleBoxLine_wrapper_is_vertical(wasgo_id));
}
void StyleBoxLine::set_color(Color p_color){
	_wasgo_StyleBoxLine_wrapper_set_color(wasgo_id, ((Variant) color).get_wasgo_id());
}
void StyleBoxLine::set_grow_begin(float p_offset){
	_wasgo_StyleBoxLine_wrapper_set_grow_begin(wasgo_id, offset);
}
void StyleBoxLine::set_grow_end(float p_offset){
	_wasgo_StyleBoxLine_wrapper_set_grow_end(wasgo_id, offset);
}
void StyleBoxLine::set_thickness(int p_thickness){
	_wasgo_StyleBoxLine_wrapper_set_thickness(wasgo_id, thickness);
}
void StyleBoxLine::set_vertical(bool p_vertical){
	_wasgo_StyleBoxLine_wrapper_set_vertical(wasgo_id, vertical);
}

StyleBoxLine::StyleBoxLine(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
StyleBoxLine::~StyleBoxLine(){
}