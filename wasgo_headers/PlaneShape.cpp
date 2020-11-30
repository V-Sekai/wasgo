/* THIS FILE IS GENERATED */
#include "PlaneShape.h"
Plane PlaneShape::get_plane(){
	return Plane::from_wasgo_id(_wasgo_PlaneShape_wrapper_get_plane(wasgo_id));
}
void PlaneShape::set_plane(Plane p_plane){
	_wasgo_PlaneShape_wrapper_set_plane(wasgo_id, ((Variant) plane).get_wasgo_id());
}

PlaneShape::PlaneShape(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
PlaneShape::~PlaneShape(){
}