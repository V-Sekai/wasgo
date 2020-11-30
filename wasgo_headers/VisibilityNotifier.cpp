/* THIS FILE IS GENERATED */
#include "VisibilityNotifier.h"
AABB VisibilityNotifier::get_aabb(){
	return AABB::from_wasgo_id(_wasgo_VisibilityNotifier_wrapper_get_aabb(wasgo_id));
}
bool VisibilityNotifier::is_on_screen(){
	return (bool) _wasgo_VisibilityNotifier_wrapper_is_on_screen(wasgo_id));
}
void VisibilityNotifier::set_aabb(AABB p_rect){
	_wasgo_VisibilityNotifier_wrapper_set_aabb(wasgo_id, ((Variant) rect).get_wasgo_id());
}

VisibilityNotifier::VisibilityNotifier(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
VisibilityNotifier::~VisibilityNotifier(){
}