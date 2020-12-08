/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "JavaClass.h"

JavaClass::JavaClass(WasGoID p_wasgo_id) : Reference(p_wasgo_id){
}
JavaClass::JavaClass(Reference other) : Reference(other._get_wasgo_id()){
}
JavaClass::JavaClass():Reference(){
}
JavaClass JavaClass::new_instance(){
    return JavaClass(_wasgo_JavaClass_constructor());
}
WasGoID JavaClass::_get_wasgo_id(){
    return wasgo_id;
}
JavaClass::operator bool(){
    return (bool) wasgo_id;
}
