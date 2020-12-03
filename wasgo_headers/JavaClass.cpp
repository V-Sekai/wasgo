/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "JavaClass.h"

JavaClass::JavaClass(WasGoId p_wasgo_id) : Reference(p_wasgo_id){
}
JavaClass::JavaClass(){
    wasgo_id = _wasgo_JavaClass_constructor();
}
JavaClass::~JavaClass(){
    _wasgo_JavaClass_destructor(wasgo_id);
}