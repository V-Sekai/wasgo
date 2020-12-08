/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "JNISingleton.h"

JNISingleton::JNISingleton(WasGoID p_wasgo_id) : Object(p_wasgo_id){
}
JNISingleton::JNISingleton(Object other) : Object(other._get_wasgo_id()){
}
JNISingleton::JNISingleton():Object(){
}
JNISingleton JNISingleton::new_instance(){
    return JNISingleton(_wasgo_JNISingleton_constructor());
}
WasGoID JNISingleton::_get_wasgo_id(){
    return wasgo_id;
}
JNISingleton::operator bool(){
    return (bool) wasgo_id;
}
