/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisibilityEnabler2D.h"
bool VisibilityEnabler2D::is_enabler_enabled(VisibilityEnabler2D::Enabler p_enabler){
	return (bool) _wasgo_VisibilityEnabler2D_wrapper_is_enabler_enabled(wasgo_id, p_enabler._get_wasgo_id());
}
void VisibilityEnabler2D::set_enabler(VisibilityEnabler2D::Enabler p_enabler, bool p_enabled){
	_wasgo_VisibilityEnabler2D_wrapper_set_enabler(wasgo_id, p_enabler._get_wasgo_id(), p_enabled);
}

VisibilityEnabler2D::VisibilityEnabler2D(WasGoID p_wasgo_id) : VisibilityNotifier2D(p_wasgo_id){
}
VisibilityEnabler2D::VisibilityEnabler2D(VisibilityNotifier2D other) : VisibilityNotifier2D(other._get_wasgo_id()){
}
VisibilityEnabler2D::VisibilityEnabler2D():VisibilityNotifier2D(){
}
VisibilityEnabler2D VisibilityEnabler2D::new_instance(){
    return VisibilityEnabler2D(_wasgo_VisibilityEnabler2D_constructor());
}
WasGoID VisibilityEnabler2D::_get_wasgo_id(){
    return wasgo_id;
}
VisibilityEnabler2D::operator bool(){
    return (bool) wasgo_id;
}
