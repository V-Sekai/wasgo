/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ConvexPolygonShape2D.h"
PoolVector2Array ConvexPolygonShape2D::get_points(){
	return PoolVector2Array(_wasgo_ConvexPolygonShape2D_wrapper_get_points(wasgo_id));
}
void ConvexPolygonShape2D::set_point_cloud(PoolVector2Array p_point_cloud){
	_wasgo_ConvexPolygonShape2D_wrapper_set_point_cloud(wasgo_id, p_point_cloud._get_wasgo_id());
}
void ConvexPolygonShape2D::set_points(PoolVector2Array p_points){
	_wasgo_ConvexPolygonShape2D_wrapper_set_points(wasgo_id, p_points._get_wasgo_id());
}

ConvexPolygonShape2D::ConvexPolygonShape2D(WasGoId p_wasgo_id) : Shape2D(p_wasgo_id){
}
ConvexPolygonShape2D::ConvexPolygonShape2D(Shape2D other) : Shape2D(other._get_wasgo_id()){
    wasgo_id = _wasgo_ConvexPolygonShape2D_constructor();
}
ConvexPolygonShape2D::new_instance(){
    return ConvexPolygonShape2D(_wasgo_ConvexPolygonShape2D_constructor());
}