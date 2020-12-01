/* THIS FILE IS GENERATED */
#include "ConcavePolygonShape.h"
PoolVector3Array ConcavePolygonShape::get_faces(){
	return PoolVector3Array::from_wasgo_id(_wasgo_ConcavePolygonShape_wrapper_get_faces(wasgo_id));
}
void ConcavePolygonShape::set_faces(PoolVector3Array p_faces){
	_wasgo_ConcavePolygonShape_wrapper_set_faces(wasgo_id, ((Variant) p_faces).get_wasgo_id());
}