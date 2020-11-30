/* THIS FILE IS GENERATED */
#include "Object.h"
void Object::free(){
	_wasgo_Object_wrapper_free(wasgo_id);
}

Object::Object(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
Object::~Object(){
}