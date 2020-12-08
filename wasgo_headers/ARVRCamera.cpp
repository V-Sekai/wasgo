/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ARVRCamera.h"

ARVRCamera::ARVRCamera(WasGoID p_wasgo_id) : Camera(p_wasgo_id){
}
ARVRCamera::ARVRCamera(Camera other) : Camera(other._get_wasgo_id()){
}
ARVRCamera::ARVRCamera():Camera(){
}
ARVRCamera ARVRCamera::new_instance(){
    return ARVRCamera(_wasgo_ARVRCamera_constructor());
}
WasGoID ARVRCamera::_get_wasgo_id(){
    return wasgo_id;
}
ARVRCamera::operator bool(){
    return (bool) wasgo_id;
}
