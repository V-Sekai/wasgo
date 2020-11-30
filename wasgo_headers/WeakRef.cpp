/* THIS FILE IS GENERATED */
#include "WeakRef.h"
Variant WeakRef::get_ref(){
	return Variant::from_wasgo_id(_wasgo_WeakRef_wrapper_get_ref(wasgo_id));
}

WeakRef::WeakRef(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
WeakRef::~WeakRef(){
}