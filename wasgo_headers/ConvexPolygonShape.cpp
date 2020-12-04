/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ConvexPolygonShape.h"
PoolVector3Array ConvexPolygonShape::get_points(){
	return PoolVector3Array(_wasgo_ConvexPolygonShape_wrapper_get_points(wasgo_id));
}
void ConvexPolygonShape::set_points(PoolVector3Array p_points){
	_wasgo_ConvexPolygonShape_wrapper_set_points(wasgo_id, p_points._get_wasgo_id());
}

ConvexPolygonShape::ConvexPolygonShape(WasGoId p_wasgo_id) : Shape(p_wasgo_id){
}
ConvexPolygonShape::ConvexPolygonShape(Shape other) : Shape(other._get_wasgo_id()){
    wasgo_id = _wasgo_ConvexPolygonShape_constructor();
}
ConvexPolygonShape::new_instance(){
    return ConvexPolygonShape(_wasgo_ConvexPolygonShape_constructor());
}