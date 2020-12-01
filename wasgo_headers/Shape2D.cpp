/* THIS FILE IS GENERATED */
#include "Shape2D.h"
bool Shape2D::collide(Transform2D p_local_xform, Shape2D p_with_shape, Transform2D p_shape_xform){
	return (bool) _wasgo_Shape2D_wrapper_collide(wasgo_id, ((Variant) p_local_xform).get_wasgo_id(), ((Variant) p_with_shape).get_wasgo_id(), ((Variant) p_shape_xform).get_wasgo_id());
}
Array Shape2D::collide_and_get_contacts(Transform2D p_local_xform, Shape2D p_with_shape, Transform2D p_shape_xform){
	return Array::from_wasgo_id(_wasgo_Shape2D_wrapper_collide_and_get_contacts(wasgo_id, ((Variant) p_local_xform).get_wasgo_id(), ((Variant) p_with_shape).get_wasgo_id(), ((Variant) p_shape_xform).get_wasgo_id()));
}
bool Shape2D::collide_with_motion(Transform2D p_local_xform, Vector2 p_local_motion, Shape2D p_with_shape, Transform2D p_shape_xform, Vector2 p_shape_motion){
	return (bool) _wasgo_Shape2D_wrapper_collide_with_motion(wasgo_id, ((Variant) p_local_xform).get_wasgo_id(), ((Variant) p_local_motion).get_wasgo_id(), ((Variant) p_with_shape).get_wasgo_id(), ((Variant) p_shape_xform).get_wasgo_id(), ((Variant) p_shape_motion).get_wasgo_id());
}
Array Shape2D::collide_with_motion_and_get_contacts(Transform2D p_local_xform, Vector2 p_local_motion, Shape2D p_with_shape, Transform2D p_shape_xform, Vector2 p_shape_motion){
	return Array::from_wasgo_id(_wasgo_Shape2D_wrapper_collide_with_motion_and_get_contacts(wasgo_id, ((Variant) p_local_xform).get_wasgo_id(), ((Variant) p_local_motion).get_wasgo_id(), ((Variant) p_with_shape).get_wasgo_id(), ((Variant) p_shape_xform).get_wasgo_id(), ((Variant) p_shape_motion).get_wasgo_id()));
}
void Shape2D::draw(RID p_canvas_item, Color p_color){
	_wasgo_Shape2D_wrapper_draw(wasgo_id, ((Variant) p_canvas_item).get_wasgo_id(), ((Variant) p_color).get_wasgo_id());
}
float Shape2D::get_custom_solver_bias(){
	return (float) _wasgo_Shape2D_wrapper_get_custom_solver_bias(wasgo_id);
}
void Shape2D::set_custom_solver_bias(float p_bias){
	_wasgo_Shape2D_wrapper_set_custom_solver_bias(wasgo_id, p_bias);
}