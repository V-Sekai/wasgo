/* THIS FILE IS GENERATED */
#include "Reference.h"
bool Reference::init_ref(){
	return (bool) _wasgo_Reference_wrapper_init_ref(wasgo_id));
}
bool Reference::reference(){
	return (bool) _wasgo_Reference_wrapper_reference(wasgo_id));
}
bool Reference::unreference(){
	return (bool) _wasgo_Reference_wrapper_unreference(wasgo_id));
}

Reference::Reference(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
Reference::~Reference(){
}