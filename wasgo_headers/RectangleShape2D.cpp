/* THIS FILE IS GENERATED */
#include "RectangleShape2D.h"
Vector2 RectangleShape2D::get_extents(){
	return Vector2::from_wasgo_id(_wasgo_RectangleShape2D_wrapper_get_extents(wasgo_id));
}
void RectangleShape2D::set_extents(Vector2 p_extents){
	_wasgo_RectangleShape2D_wrapper_set_extents(wasgo_id, ((Variant) extents).get_wasgo_id());
}

RectangleShape2D::RectangleShape2D(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
RectangleShape2D::~RectangleShape2D(){
}