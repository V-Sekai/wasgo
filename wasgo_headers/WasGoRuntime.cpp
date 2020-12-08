/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "WasGoRuntime.h"

WasGoRuntime::WasGoRuntime(WasGoID p_wasgo_id) : Object(p_wasgo_id){
}
WasGoRuntime::WasGoRuntime(Object other) : Object(other._get_wasgo_id()){
}
WasGoRuntime::WasGoRuntime():Object(){
}
WasGoRuntime WasGoRuntime::new_instance(){
    return WasGoRuntime(_wasgo_WasGoRuntime_constructor());
}
WasGoID WasGoRuntime::_get_wasgo_id(){
    return wasgo_id;
}
WasGoRuntime::operator bool(){
    return (bool) wasgo_id;
}
