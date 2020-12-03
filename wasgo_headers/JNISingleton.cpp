/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "JNISingleton.h"

JNISingleton::JNISingleton(WasGoId p_wasgo_id) : Object(p_wasgo_id){
}
JNISingleton::JNISingleton(){
    wasgo_id = _wasgo_JNISingleton_constructor();
}
JNISingleton::~JNISingleton(){
    _wasgo_JNISingleton_destructor(wasgo_id);
}