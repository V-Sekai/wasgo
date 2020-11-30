/* THIS FILE IS GENERATED */
#include "ColorRect.h"
Color ColorRect::get_frame_color(){
	return Color::from_wasgo_id(_wasgo_ColorRect_wrapper_get_frame_color(wasgo_id));
}
void ColorRect::set_frame_color(Color p_color){
	_wasgo_ColorRect_wrapper_set_frame_color(wasgo_id, ((Variant) color).get_wasgo_id());
}

ColorRect::ColorRect(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
ColorRect::~ColorRect(){
}