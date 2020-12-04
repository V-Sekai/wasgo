/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Path.h"
Curve3D Path::get_curve(){
	return Curve3D(_wasgo_Path_wrapper_get_curve(wasgo_id));
}
void Path::set_curve(Curve3D p_curve){
	_wasgo_Path_wrapper_set_curve(wasgo_id, p_curve._get_wasgo_id());
}

Path::Path(WasGoId p_wasgo_id) : Spatial(p_wasgo_id){
}
Path::Path(Spatial other) : Spatial(other._get_wasgo_id()){
    wasgo_id = _wasgo_Path_constructor();
}
Path::new_instance(){
    return Path(_wasgo_Path_constructor());
}