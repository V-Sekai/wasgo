/* THIS FILE IS GENERATED */
#include "Path.h"
Curve3D Path::get_curve(){
	return Curve3D::from_wasgo_id(_wasgo_Path_wrapper_get_curve(wasgo_id));
}
void Path::set_curve(Curve3D p_curve){
	_wasgo_Path_wrapper_set_curve(wasgo_id, ((Variant) p_curve).get_wasgo_id());
}