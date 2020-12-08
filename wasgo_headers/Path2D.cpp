/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Path2D.h"
Curve2D Path2D::get_curve(){
	return Curve2D(_wasgo_Path2D_wrapper_get_curve(wasgo_id));
}
void Path2D::set_curve(Curve2D p_curve){
	_wasgo_Path2D_wrapper_set_curve(wasgo_id, p_curve._get_wasgo_id());
}

Path2D::Path2D(WasGoID p_wasgo_id) : Node2D(p_wasgo_id){
}
Path2D::Path2D(Node2D other) : Node2D(other._get_wasgo_id()){
}
Path2D::Path2D():Node2D(){
}
Path2D Path2D::new_instance(){
    return Path2D(_wasgo_Path2D_constructor());
}
WasGoID Path2D::_get_wasgo_id(){
    return wasgo_id;
}
Path2D::operator bool(){
    return (bool) wasgo_id;
}
