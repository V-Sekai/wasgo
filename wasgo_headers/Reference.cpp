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

Reference::Reference(WasGoID p_wasgo_id) : Object(p_wasgo_id){
}
Reference::Reference(Object other) : Object(other._get_wasgo_id()){
}
Reference::Reference():Object(){
}
Reference Reference::new_instance(){
    return Reference(_wasgo_Reference_constructor());
}
WasGoID Reference::_get_wasgo_id(){
    return wasgo_id;
}
Reference::operator bool(){
    return (bool) wasgo_id;
}
