/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ConcavePolygonShape.h"
PoolVector3Array ConcavePolygonShape::get_faces(){
	return PoolVector3Array(_wasgo_ConcavePolygonShape_wrapper_get_faces(wasgo_id));
}
void ConcavePolygonShape::set_faces(PoolVector3Array p_faces){
	_wasgo_ConcavePolygonShape_wrapper_set_faces(wasgo_id, p_faces._get_wasgo_id());
}

ConcavePolygonShape::ConcavePolygonShape(WasGoID p_wasgo_id) : Shape(p_wasgo_id){
}
ConcavePolygonShape::ConcavePolygonShape(Shape other) : Shape(other._get_wasgo_id()){
    wasgo_id = _wasgo_ConcavePolygonShape_constructor();
}
ConcavePolygonShape::new_instance(){
    return ConcavePolygonShape(_wasgo_ConcavePolygonShape_constructor());
}