/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "CollisionShape.h"
Shape CollisionShape::get_shape(){
	return Shape(_wasgo_CollisionShape_wrapper_get_shape(wasgo_id));
}
bool CollisionShape::is_disabled(){
	return (bool) _wasgo_CollisionShape_wrapper_is_disabled(wasgo_id);
}
void CollisionShape::make_convex_from_brothers(){
	_wasgo_CollisionShape_wrapper_make_convex_from_brothers(wasgo_id);
}
void CollisionShape::resource_changed(Resource p_resource){
	_wasgo_CollisionShape_wrapper_resource_changed(wasgo_id, p_resource._get_wasgo_id());
}
void CollisionShape::set_disabled(bool p_enable){
	_wasgo_CollisionShape_wrapper_set_disabled(wasgo_id, p_enable);
}
void CollisionShape::set_shape(Shape p_shape){
	_wasgo_CollisionShape_wrapper_set_shape(wasgo_id, p_shape._get_wasgo_id());
}

CollisionShape::CollisionShape(WasGoId p_wasgo_id) : Spatial(p_wasgo_id){
}
CollisionShape::CollisionShape(Spatial other) : Spatial(other._get_wasgo_id()){
    wasgo_id = _wasgo_CollisionShape_constructor();
}
CollisionShape::new_instance(){
    return CollisionShape(_wasgo_CollisionShape_constructor());
}