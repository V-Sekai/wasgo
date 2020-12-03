/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "WasGoRuntime.h"

WasGoRuntime::WasGoRuntime(WasGoId p_wasgo_id) : Object(p_wasgo_id){
}
WasGoRuntime::WasGoRuntime(){
    wasgo_id = _wasgo_WasGoRuntime_constructor();
}
WasGoRuntime::~WasGoRuntime(){
    _wasgo_WasGoRuntime_destructor(wasgo_id);
}