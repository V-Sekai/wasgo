/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ARVRCamera.h"

ARVRCamera::ARVRCamera(WasGoID p_wasgo_id) : Camera(p_wasgo_id){
}
ARVRCamera::ARVRCamera(Camera other) : Camera(other._get_wasgo_id()){
    wasgo_id = _wasgo_ARVRCamera_constructor();
}
ARVRCamera::new_instance(){
    return ARVRCamera(_wasgo_ARVRCamera_constructor());
}