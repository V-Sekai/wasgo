/* THIS FILE IS GENERATED */
#include "SegmentShape2D.h"
Vector2 SegmentShape2D::get_a(){
	return Vector2::from_wasgo_id(_wasgo_SegmentShape2D_wrapper_get_a(wasgo_id));
}
Vector2 SegmentShape2D::get_b(){
	return Vector2::from_wasgo_id(_wasgo_SegmentShape2D_wrapper_get_b(wasgo_id));
}
void SegmentShape2D::set_a(Vector2 p_a){
	_wasgo_SegmentShape2D_wrapper_set_a(wasgo_id, ((Variant) a).get_wasgo_id());
}
void SegmentShape2D::set_b(Vector2 p_b){
	_wasgo_SegmentShape2D_wrapper_set_b(wasgo_id, ((Variant) b).get_wasgo_id());
}

SegmentShape2D::SegmentShape2D(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
SegmentShape2D::~SegmentShape2D(){
}