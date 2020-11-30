/* THIS FILE IS GENERATED */
#include "ReferenceRect.h"
Color ReferenceRect::get_border_color(){
	return Color::from_wasgo_id(_wasgo_ReferenceRect_wrapper_get_border_color(wasgo_id));
}
float ReferenceRect::get_border_width(){
	return (float) _wasgo_ReferenceRect_wrapper_get_border_width(wasgo_id));
}
bool ReferenceRect::get_editor_only(){
	return (bool) _wasgo_ReferenceRect_wrapper_get_editor_only(wasgo_id));
}
void ReferenceRect::set_border_color(Color p_color){
	_wasgo_ReferenceRect_wrapper_set_border_color(wasgo_id, ((Variant) color).get_wasgo_id());
}
void ReferenceRect::set_border_width(float p_width){
	_wasgo_ReferenceRect_wrapper_set_border_width(wasgo_id, width);
}
void ReferenceRect::set_editor_only(bool p_enabled){
	_wasgo_ReferenceRect_wrapper_set_editor_only(wasgo_id, enabled);
}

ReferenceRect::ReferenceRect(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
ReferenceRect::~ReferenceRect(){
}