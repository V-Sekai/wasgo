/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "JNISingleton.h"

JNISingleton::JNISingleton(WasGoId p_wasgo_id) : Object(p_wasgo_id){
}
JNISingleton::JNISingleton(Object other) : Object(other._get_wasgo_id()){
    wasgo_id = _wasgo_JNISingleton_constructor();
}
JNISingleton::new_instance(){
    return JNISingleton(_wasgo_JNISingleton_constructor());
}