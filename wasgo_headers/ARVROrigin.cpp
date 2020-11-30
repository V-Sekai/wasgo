/* THIS FILE IS GENERATED */
#include "ARVROrigin.h"
float ARVROrigin::get_world_scale(){
	return (float) _wasgo_ARVROrigin_wrapper_get_world_scale(wasgo_id));
}
void ARVROrigin::set_world_scale(float p_world_scale){
	_wasgo_ARVROrigin_wrapper_set_world_scale(wasgo_id, world_scale);
}

ARVROrigin::ARVROrigin(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
ARVROrigin::~ARVROrigin(){
}