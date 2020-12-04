/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ARVROrigin.h"
float ARVROrigin::get_world_scale(){
	return (float) _wasgo_ARVROrigin_wrapper_get_world_scale(wasgo_id);
}
void ARVROrigin::set_world_scale(float p_world_scale){
	_wasgo_ARVROrigin_wrapper_set_world_scale(wasgo_id, p_world_scale);
}

ARVROrigin::ARVROrigin(WasGoID p_wasgo_id) : Spatial(p_wasgo_id){
}
ARVROrigin::ARVROrigin(Spatial other) : Spatial(other._get_wasgo_id()){
    wasgo_id = _wasgo_ARVROrigin_constructor();
}
ARVROrigin::new_instance(){
    return ARVROrigin(_wasgo_ARVROrigin_constructor());
}