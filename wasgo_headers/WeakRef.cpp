/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "WeakRef.h"
Variant WeakRef::get_ref(){
	return Variant(_wasgo_WeakRef_wrapper_get_ref(wasgo_id));
}

WeakRef::WeakRef(WasGoId p_wasgo_id) : Reference(p_wasgo_id){
}
WeakRef::WeakRef(){
    wasgo_id = _wasgo_WeakRef_constructor();
}
WeakRef::~WeakRef(){
    _wasgo_WeakRef_destructor(wasgo_id);
}