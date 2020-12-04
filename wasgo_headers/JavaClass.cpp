/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "JavaClass.h"

JavaClass::JavaClass(WasGoID p_wasgo_id) : Reference(p_wasgo_id){
}
JavaClass::JavaClass(Reference other) : Reference(other._get_wasgo_id()){
    wasgo_id = _wasgo_JavaClass_constructor();
}
JavaClass::new_instance(){
    return JavaClass(_wasgo_JavaClass_constructor());
}