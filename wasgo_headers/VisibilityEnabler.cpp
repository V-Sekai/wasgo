/* THIS FILE IS GENERATED */
#include "VisibilityEnabler.h"
bool VisibilityEnabler::is_enabler_enabled(VisibilityEnabler::Enabler p_enabler){
	return (bool) _wasgo_VisibilityEnabler_wrapper_is_enabler_enabled(wasgo_id, ((Variant) enabler).get_wasgo_id()));
}
void VisibilityEnabler::set_enabler(VisibilityEnabler::Enabler p_enabler, bool p_enabled){
	_wasgo_VisibilityEnabler_wrapper_set_enabler(wasgo_id, ((Variant) enabler).get_wasgo_id(), enabled);
}

VisibilityEnabler::VisibilityEnabler(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
VisibilityEnabler::~VisibilityEnabler(){
}