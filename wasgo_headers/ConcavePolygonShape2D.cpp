/* THIS FILE IS GENERATED */
#include "ConcavePolygonShape2D.h"
PoolVector2Array ConcavePolygonShape2D::get_segments(){
	return PoolVector2Array::from_wasgo_id(_wasgo_ConcavePolygonShape2D_wrapper_get_segments(wasgo_id));
}
void ConcavePolygonShape2D::set_segments(PoolVector2Array p_segments){
	_wasgo_ConcavePolygonShape2D_wrapper_set_segments(wasgo_id, ((Variant) segments).get_wasgo_id());
}

ConcavePolygonShape2D::ConcavePolygonShape2D(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
ConcavePolygonShape2D::~ConcavePolygonShape2D(){
}