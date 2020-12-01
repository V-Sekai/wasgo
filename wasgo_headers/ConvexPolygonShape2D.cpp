/* THIS FILE IS GENERATED */
#include "ConvexPolygonShape2D.h"
PoolVector2Array ConvexPolygonShape2D::get_points(){
	return PoolVector2Array::from_wasgo_id(_wasgo_ConvexPolygonShape2D_wrapper_get_points(wasgo_id));
}
void ConvexPolygonShape2D::set_point_cloud(PoolVector2Array p_point_cloud){
	_wasgo_ConvexPolygonShape2D_wrapper_set_point_cloud(wasgo_id, ((Variant) p_point_cloud).get_wasgo_id());
}
void ConvexPolygonShape2D::set_points(PoolVector2Array p_points){
	_wasgo_ConvexPolygonShape2D_wrapper_set_points(wasgo_id, ((Variant) p_points).get_wasgo_id());
}