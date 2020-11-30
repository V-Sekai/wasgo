/* THIS FILE IS GENERATED */
#include "ConvexPolygonShape.h"
PoolVector3Array ConvexPolygonShape::get_points(){
	return PoolVector3Array::from_wasgo_id(_wasgo_ConvexPolygonShape_wrapper_get_points(wasgo_id));
}
void ConvexPolygonShape::set_points(PoolVector3Array p_points){
	_wasgo_ConvexPolygonShape_wrapper_set_points(wasgo_id, ((Variant) points).get_wasgo_id());
}

ConvexPolygonShape::ConvexPolygonShape(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
ConvexPolygonShape::~ConvexPolygonShape(){
}