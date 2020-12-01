/* THIS FILE IS GENERATED */
#include "OccluderPolygon2D.h"
OccluderPolygon2D::CullMode OccluderPolygon2D::get_cull_mode(){
	return OccluderPolygon2D::CullMode::from_wasgo_id(_wasgo_OccluderPolygon2D_wrapper_get_cull_mode(wasgo_id));
}
PoolVector2Array OccluderPolygon2D::get_polygon(){
	return PoolVector2Array::from_wasgo_id(_wasgo_OccluderPolygon2D_wrapper_get_polygon(wasgo_id));
}
bool OccluderPolygon2D::is_closed(){
	return (bool) _wasgo_OccluderPolygon2D_wrapper_is_closed(wasgo_id);
}
void OccluderPolygon2D::set_closed(bool p_closed){
	_wasgo_OccluderPolygon2D_wrapper_set_closed(wasgo_id, p_closed);
}
void OccluderPolygon2D::set_cull_mode(OccluderPolygon2D::CullMode p_cull_mode){
	_wasgo_OccluderPolygon2D_wrapper_set_cull_mode(wasgo_id, ((Variant) p_cull_mode).get_wasgo_id());
}
void OccluderPolygon2D::set_polygon(PoolVector2Array p_polygon){
	_wasgo_OccluderPolygon2D_wrapper_set_polygon(wasgo_id, ((Variant) p_polygon).get_wasgo_id());
}