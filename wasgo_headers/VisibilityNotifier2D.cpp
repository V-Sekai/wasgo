/* THIS FILE IS GENERATED */
#include "VisibilityNotifier2D.h"
Rect2 VisibilityNotifier2D::get_rect(){
	return Rect2::from_wasgo_id(_wasgo_VisibilityNotifier2D_wrapper_get_rect(wasgo_id));
}
bool VisibilityNotifier2D::is_on_screen(){
	return (bool) _wasgo_VisibilityNotifier2D_wrapper_is_on_screen(wasgo_id));
}
void VisibilityNotifier2D::set_rect(Rect2 p_rect){
	_wasgo_VisibilityNotifier2D_wrapper_set_rect(wasgo_id, ((Variant) rect).get_wasgo_id());
}

VisibilityNotifier2D::VisibilityNotifier2D(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
VisibilityNotifier2D::~VisibilityNotifier2D(){
}