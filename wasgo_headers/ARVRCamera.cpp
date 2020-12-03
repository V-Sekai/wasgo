/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ARVRCamera.h"

ARVRCamera::ARVRCamera(WasGoId p_wasgo_id) : Camera(p_wasgo_id){
}
ARVRCamera::ARVRCamera(){
    wasgo_id = _wasgo_ARVRCamera_constructor();
}
ARVRCamera::~ARVRCamera(){
    _wasgo_ARVRCamera_destructor(wasgo_id);
}