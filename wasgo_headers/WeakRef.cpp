/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "WeakRef.h"
Variant WeakRef::get_ref(){
	return Variant(_wasgo_WeakRef_wrapper_get_ref(wasgo_id));
}

WeakRef::WeakRef(WasGoID p_wasgo_id) : Reference(p_wasgo_id){
}
WeakRef::WeakRef(Reference other) : Reference(other._get_wasgo_id()){
    wasgo_id = _wasgo_WeakRef_constructor();
}
WeakRef::new_instance(){
    return WeakRef(_wasgo_WeakRef_constructor());
}