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

ViewportContainer::ViewportContainer(WasGoID p_wasgo_id) : Container(p_wasgo_id){
}
ViewportContainer::ViewportContainer(Container other) : Container(other._get_wasgo_id()){
}
ViewportContainer::ViewportContainer():Container(){
}
ViewportContainer ViewportContainer::new_instance(){
    return ViewportContainer(_wasgo_ViewportContainer_constructor());
}
WasGoID ViewportContainer::_get_wasgo_id(){
    return wasgo_id;
}
ViewportContainer::operator bool(){
    return (bool) wasgo_id;
}
