/* THIS FILE IS GENERATED */
#include "CanvasLayer.h"
RID CanvasLayer::get_canvas(){
	return RID::from_wasgo_id(_wasgo_CanvasLayer_wrapper_get_canvas(wasgo_id));
}
Node CanvasLayer::get_custom_viewport(){
	return Node::from_wasgo_id(_wasgo_CanvasLayer_wrapper_get_custom_viewport(wasgo_id));
}
float CanvasLayer::get_follow_viewport_scale(){
	return (float) _wasgo_CanvasLayer_wrapper_get_follow_viewport_scale(wasgo_id));
}
int CanvasLayer::get_layer(){
	return (int) _wasgo_CanvasLayer_wrapper_get_layer(wasgo_id));
}
Vector2 CanvasLayer::get_offset(){
	return Vector2::from_wasgo_id(_wasgo_CanvasLayer_wrapper_get_offset(wasgo_id));
}
float CanvasLayer::get_rotation(){
	return (float) _wasgo_CanvasLayer_wrapper_get_rotation(wasgo_id));
}
float CanvasLayer::get_rotation_degrees(){
	return (float) _wasgo_CanvasLayer_wrapper_get_rotation_degrees(wasgo_id));
}
Vector2 CanvasLayer::get_scale(){
	return Vector2::from_wasgo_id(_wasgo_CanvasLayer_wrapper_get_scale(wasgo_id));
}
Transform2D CanvasLayer::get_transform(){
	return Transform2D::from_wasgo_id(_wasgo_CanvasLayer_wrapper_get_transform(wasgo_id));
}
bool CanvasLayer::is_following_viewport(){
	return (bool) _wasgo_CanvasLayer_wrapper_is_following_viewport(wasgo_id));
}
void CanvasLayer::set_custom_viewport(Node p_viewport){
	_wasgo_CanvasLayer_wrapper_set_custom_viewport(wasgo_id, ((Variant) viewport).get_wasgo_id());
}
void CanvasLayer::set_follow_viewport(bool p_enable){
	_wasgo_CanvasLayer_wrapper_set_follow_viewport(wasgo_id, enable);
}
void CanvasLayer::set_follow_viewport_scale(float p_scale){
	_wasgo_CanvasLayer_wrapper_set_follow_viewport_scale(wasgo_id, scale);
}
void CanvasLayer::set_layer(int p_layer){
	_wasgo_CanvasLayer_wrapper_set_layer(wasgo_id, layer);
}
void CanvasLayer::set_offset(Vector2 p_offset){
	_wasgo_CanvasLayer_wrapper_set_offset(wasgo_id, ((Variant) offset).get_wasgo_id());
}
void CanvasLayer::set_rotation(float p_radians){
	_wasgo_CanvasLayer_wrapper_set_rotation(wasgo_id, radians);
}
void CanvasLayer::set_rotation_degrees(float p_degrees){
	_wasgo_CanvasLayer_wrapper_set_rotation_degrees(wasgo_id, degrees);
}
void CanvasLayer::set_scale(Vector2 p_scale){
	_wasgo_CanvasLayer_wrapper_set_scale(wasgo_id, ((Variant) scale).get_wasgo_id());
}
void CanvasLayer::set_transform(Transform2D p_transform){
	_wasgo_CanvasLayer_wrapper_set_transform(wasgo_id, ((Variant) transform).get_wasgo_id());
}

CanvasLayer::CanvasLayer(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
CanvasLayer::~CanvasLayer(){
}