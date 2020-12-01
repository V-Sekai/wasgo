/* THIS FILE IS GENERATED */
#include "Physics2DShapeQueryParameters.h"
int Physics2DShapeQueryParameters::get_collision_layer(){
	return (int) _wasgo_Physics2DShapeQueryParameters_wrapper_get_collision_layer(wasgo_id);
}
Array Physics2DShapeQueryParameters::get_exclude(){
	return Array::from_wasgo_id(_wasgo_Physics2DShapeQueryParameters_wrapper_get_exclude(wasgo_id));
}
float Physics2DShapeQueryParameters::get_margin(){
	return (float) _wasgo_Physics2DShapeQueryParameters_wrapper_get_margin(wasgo_id);
}
Vector2 Physics2DShapeQueryParameters::get_motion(){
	return Vector2::from_wasgo_id(_wasgo_Physics2DShapeQueryParameters_wrapper_get_motion(wasgo_id));
}
RID Physics2DShapeQueryParameters::get_shape_rid(){
	return RID::from_wasgo_id(_wasgo_Physics2DShapeQueryParameters_wrapper_get_shape_rid(wasgo_id));
}
Transform2D Physics2DShapeQueryParameters::get_transform(){
	return Transform2D::from_wasgo_id(_wasgo_Physics2DShapeQueryParameters_wrapper_get_transform(wasgo_id));
}
bool Physics2DShapeQueryParameters::is_collide_with_areas_enabled(){
	return (bool) _wasgo_Physics2DShapeQueryParameters_wrapper_is_collide_with_areas_enabled(wasgo_id);
}
bool Physics2DShapeQueryParameters::is_collide_with_bodies_enabled(){
	return (bool) _wasgo_Physics2DShapeQueryParameters_wrapper_is_collide_with_bodies_enabled(wasgo_id);
}
void Physics2DShapeQueryParameters::set_collide_with_areas(bool p_enable){
	_wasgo_Physics2DShapeQueryParameters_wrapper_set_collide_with_areas(wasgo_id, p_enable);
}
void Physics2DShapeQueryParameters::set_collide_with_bodies(bool p_enable){
	_wasgo_Physics2DShapeQueryParameters_wrapper_set_collide_with_bodies(wasgo_id, p_enable);
}
void Physics2DShapeQueryParameters::set_collision_layer(int p_collision_layer){
	_wasgo_Physics2DShapeQueryParameters_wrapper_set_collision_layer(wasgo_id, p_collision_layer);
}
void Physics2DShapeQueryParameters::set_exclude(Array p_exclude){
	_wasgo_Physics2DShapeQueryParameters_wrapper_set_exclude(wasgo_id, ((Variant) p_exclude).get_wasgo_id());
}
void Physics2DShapeQueryParameters::set_margin(float p_margin){
	_wasgo_Physics2DShapeQueryParameters_wrapper_set_margin(wasgo_id, p_margin);
}
void Physics2DShapeQueryParameters::set_motion(Vector2 p_motion){
	_wasgo_Physics2DShapeQueryParameters_wrapper_set_motion(wasgo_id, ((Variant) p_motion).get_wasgo_id());
}
void Physics2DShapeQueryParameters::set_shape(Resource p_shape){
	_wasgo_Physics2DShapeQueryParameters_wrapper_set_shape(wasgo_id, ((Variant) p_shape).get_wasgo_id());
}
void Physics2DShapeQueryParameters::set_shape_rid(RID p_shape){
	_wasgo_Physics2DShapeQueryParameters_wrapper_set_shape_rid(wasgo_id, ((Variant) p_shape).get_wasgo_id());
}
void Physics2DShapeQueryParameters::set_transform(Transform2D p_transform){
	_wasgo_Physics2DShapeQueryParameters_wrapper_set_transform(wasgo_id, ((Variant) p_transform).get_wasgo_id());
}