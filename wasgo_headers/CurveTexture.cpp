/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "CurveTexture.h"
Curve CurveTexture::get_curve(){
	return Curve(_wasgo_CurveTexture_wrapper_get_curve(wasgo_id));
}
void CurveTexture::set_curve(Curve p_curve){
	_wasgo_CurveTexture_wrapper_set_curve(wasgo_id, p_curve._get_wasgo_id());
}
void CurveTexture::set_width(int p_width){
	_wasgo_CurveTexture_wrapper_set_width(wasgo_id, p_width);
}

CurveTexture::CurveTexture(WasGoId p_wasgo_id) : Texture(p_wasgo_id){
}
CurveTexture::CurveTexture(Texture other) : Texture(other._get_wasgo_id()){
    wasgo_id = _wasgo_CurveTexture_constructor();
}
CurveTexture::new_instance(){
    return CurveTexture(_wasgo_CurveTexture_constructor());
}