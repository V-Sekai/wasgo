/* THIS FILE IS GENERATED */
#include "ParallaxLayer.h"
Vector2 ParallaxLayer::get_mirroring(){
	return Vector2::from_wasgo_id(_wasgo_ParallaxLayer_wrapper_get_mirroring(wasgo_id));
}
Vector2 ParallaxLayer::get_motion_offset(){
	return Vector2::from_wasgo_id(_wasgo_ParallaxLayer_wrapper_get_motion_offset(wasgo_id));
}
Vector2 ParallaxLayer::get_motion_scale(){
	return Vector2::from_wasgo_id(_wasgo_ParallaxLayer_wrapper_get_motion_scale(wasgo_id));
}
void ParallaxLayer::set_mirroring(Vector2 p_mirror){
	_wasgo_ParallaxLayer_wrapper_set_mirroring(wasgo_id, ((Variant) p_mirror).get_wasgo_id());
}
void ParallaxLayer::set_motion_offset(Vector2 p_offset){
	_wasgo_ParallaxLayer_wrapper_set_motion_offset(wasgo_id, ((Variant) p_offset).get_wasgo_id());
}
void ParallaxLayer::set_motion_scale(Vector2 p_scale){
	_wasgo_ParallaxLayer_wrapper_set_motion_scale(wasgo_id, ((Variant) p_scale).get_wasgo_id());
}