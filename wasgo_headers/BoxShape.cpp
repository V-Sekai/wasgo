/* THIS FILE IS GENERATED */
#include "BoxShape.h"
Vector3 BoxShape::get_extents(){
	return Vector3::from_wasgo_id(_wasgo_BoxShape_wrapper_get_extents(wasgo_id));
}
void BoxShape::set_extents(Vector3 p_extents){
	_wasgo_BoxShape_wrapper_set_extents(wasgo_id, ((Variant) extents).get_wasgo_id());
}

BoxShape::BoxShape(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
BoxShape::~BoxShape(){
}