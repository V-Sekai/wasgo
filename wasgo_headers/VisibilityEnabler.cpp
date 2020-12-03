/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisibilityEnabler.h"
bool VisibilityEnabler::is_enabler_enabled(VisibilityEnabler::Enabler p_enabler){
	return (bool) _wasgo_VisibilityEnabler_wrapper_is_enabler_enabled(wasgo_id, p_enabler._get_wasgo_id());
}
void VisibilityEnabler::set_enabler(VisibilityEnabler::Enabler p_enabler, bool p_enabled){
	_wasgo_VisibilityEnabler_wrapper_set_enabler(wasgo_id, p_enabler._get_wasgo_id(), p_enabled);
}

VisibilityEnabler::VisibilityEnabler(WasGoId p_wasgo_id) : VisibilityNotifier(p_wasgo_id){
}
VisibilityEnabler::VisibilityEnabler(){
    wasgo_id = _wasgo_VisibilityEnabler_constructor();
}
VisibilityEnabler::~VisibilityEnabler(){
    _wasgo_VisibilityEnabler_destructor(wasgo_id);
}