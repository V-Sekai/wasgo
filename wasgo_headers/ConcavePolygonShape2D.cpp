/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ConcavePolygonShape2D.h"
PoolVector2Array ConcavePolygonShape2D::get_segments(){
	return PoolVector2Array(_wasgo_ConcavePolygonShape2D_wrapper_get_segments(wasgo_id));
}
void ConcavePolygonShape2D::set_segments(PoolVector2Array p_segments){
	_wasgo_ConcavePolygonShape2D_wrapper_set_segments(wasgo_id, p_segments._get_wasgo_id());
}

ConcavePolygonShape2D::ConcavePolygonShape2D(WasGoID p_wasgo_id) : Shape2D(p_wasgo_id){
}
ConcavePolygonShape2D::ConcavePolygonShape2D(Shape2D other) : Shape2D(other._get_wasgo_id()){
}
ConcavePolygonShape2D::ConcavePolygonShape2D():Shape2D(){
}
ConcavePolygonShape2D ConcavePolygonShape2D::new_instance(){
    return ConcavePolygonShape2D(_wasgo_ConcavePolygonShape2D_constructor());
}
WasGoID ConcavePolygonShape2D::_get_wasgo_id(){
    return wasgo_id;
}
ConcavePolygonShape2D::operator bool(){
    return (bool) wasgo_id;
}
