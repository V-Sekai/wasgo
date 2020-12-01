/* THIS FILE IS GENERATED */
#include "Path2D.h"
Curve2D Path2D::get_curve(){
	return Curve2D::from_wasgo_id(_wasgo_Path2D_wrapper_get_curve(wasgo_id));
}
void Path2D::set_curve(Curve2D p_curve){
	_wasgo_Path2D_wrapper_set_curve(wasgo_id, ((Variant) p_curve).get_wasgo_id());
}