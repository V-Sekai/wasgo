/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "CircleShape2D.h"
float CircleShape2D::get_radius(){
	return (float) _wasgo_CircleShape2D_wrapper_get_radius(wasgo_id);
}
void CircleShape2D::set_radius(float p_radius){
	_wasgo_CircleShape2D_wrapper_set_radius(wasgo_id, p_radius);
}

CircleShape2D::CircleShape2D(WasGoID p_wasgo_id) : Shape2D(p_wasgo_id){
}
CircleShape2D::CircleShape2D(Shape2D other) : Shape2D(other._get_wasgo_id()){
}
CircleShape2D::CircleShape2D():Shape2D(){
}
CircleShape2D CircleShape2D::new_instance(){
    return CircleShape2D(_wasgo_CircleShape2D_constructor());
}
WasGoID CircleShape2D::_get_wasgo_id(){
    return wasgo_id;
}
CircleShape2D::operator bool(){
    return (bool) wasgo_id;
}
