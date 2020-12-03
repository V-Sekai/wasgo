/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Reference.h"
bool Reference::init_ref(){
	return (bool) _wasgo_Reference_wrapper_init_ref(wasgo_id);
}
bool Reference::reference(){
	return (bool) _wasgo_Reference_wrapper_reference(wasgo_id);
}
bool Reference::unreference(){
	return (bool) _wasgo_Reference_wrapper_unreference(wasgo_id);
}

Reference::Reference(WasGoId p_wasgo_id) : Object(p_wasgo_id){
}
Reference::Reference(){
    wasgo_id = _wasgo_Reference_constructor();
}
Reference::~Reference(){
    _wasgo_Reference_destructor(wasgo_id);
}