/* THIS FILE IS GENERATED */
#include "CanvasModulate.h"
Color CanvasModulate::get_color(){
	return Color::from_wasgo_id(_wasgo_CanvasModulate_wrapper_get_color(wasgo_id));
}
void CanvasModulate::set_color(Color p_color){
	_wasgo_CanvasModulate_wrapper_set_color(wasgo_id, ((Variant) p_color).get_wasgo_id());
}