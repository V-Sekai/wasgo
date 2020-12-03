/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ViewportContainer.h"
int ViewportContainer::get_stretch_shrink(){
	return (int) _wasgo_ViewportContainer_wrapper_get_stretch_shrink(wasgo_id);
}
bool ViewportContainer::is_stretch_enabled(){
	return (bool) _wasgo_ViewportContainer_wrapper_is_stretch_enabled(wasgo_id);
}
void ViewportContainer::set_stretch(bool p_enable){
	_wasgo_ViewportContainer_wrapper_set_stretch(wasgo_id, p_enable);
}
void ViewportContainer::set_stretch_shrink(int p_amount){
	_wasgo_ViewportContainer_wrapper_set_stretch_shrink(wasgo_id, p_amount);
}

ViewportContainer::ViewportContainer(WasGoId p_wasgo_id) : Container(p_wasgo_id){
}
ViewportContainer::ViewportContainer(){
    wasgo_id = _wasgo_ViewportContainer_constructor();
}
ViewportContainer::~ViewportContainer(){
    _wasgo_ViewportContainer_destructor(wasgo_id);
}