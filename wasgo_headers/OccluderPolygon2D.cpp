/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "OccluderPolygon2D.h"
OccluderPolygon2D::CullMode OccluderPolygon2D::get_cull_mode(){
	return OccluderPolygon2D::CullMode(_wasgo_OccluderPolygon2D_wrapper_get_cull_mode(wasgo_id));
}
PoolVector2Array OccluderPolygon2D::get_polygon(){
	return PoolVector2Array(_wasgo_OccluderPolygon2D_wrapper_get_polygon(wasgo_id));
}
bool OccluderPolygon2D::is_closed(){
	return (bool) _wasgo_OccluderPolygon2D_wrapper_is_closed(wasgo_id);
}
void OccluderPolygon2D::set_closed(bool p_closed){
	_wasgo_OccluderPolygon2D_wrapper_set_closed(wasgo_id, p_closed);
}
void OccluderPolygon2D::set_cull_mode(OccluderPolygon2D::CullMode p_cull_mode){
	_wasgo_OccluderPolygon2D_wrapper_set_cull_mode(wasgo_id, p_cull_mode._get_wasgo_id());
}
void OccluderPolygon2D::set_polygon(PoolVector2Array p_polygon){
	_wasgo_OccluderPolygon2D_wrapper_set_polygon(wasgo_id, p_polygon._get_wasgo_id());
}

OccluderPolygon2D::OccluderPolygon2D(WasGoId p_wasgo_id) : Resource(p_wasgo_id){
}
OccluderPolygon2D::OccluderPolygon2D(){
    wasgo_id = _wasgo_OccluderPolygon2D_constructor();
}
OccluderPolygon2D::~OccluderPolygon2D(){
    _wasgo_OccluderPolygon2D_destructor(wasgo_id);
}