/* THIS FILE IS GENERATED */
#include "CurveTexture.h"
Curve CurveTexture::get_curve(){
	return Curve::from_wasgo_id(_wasgo_CurveTexture_wrapper_get_curve(wasgo_id));
}
void CurveTexture::set_curve(Curve p_curve){
	_wasgo_CurveTexture_wrapper_set_curve(wasgo_id, ((Variant) p_curve).get_wasgo_id());
}
void CurveTexture::set_width(int p_width){
	_wasgo_CurveTexture_wrapper_set_width(wasgo_id, p_width);
}