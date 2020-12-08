/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Shape.h"
float Shape::get_margin(){
	return (float) _wasgo_Shape_wrapper_get_margin(wasgo_id);
}
void Shape::set_margin(float p_margin){
	_wasgo_Shape_wrapper_set_margin(wasgo_id, p_margin);
}

Shape::Shape(WasGoID p_wasgo_id) : Resource(p_wasgo_id){
}
Shape::Shape(Resource other) : Resource(other._get_wasgo_id()){
}
Shape::Shape():Resource(){
}
Shape Shape::new_instance(){
    return Shape(_wasgo_Shape_constructor());
}
WasGoID Shape::_get_wasgo_id(){
    return wasgo_id;
}
Shape::operator bool(){
    return (bool) wasgo_id;
}
