/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Shape2D.h"
bool Shape2D::collide(Transform2D p_local_xform, Shape2D p_with_shape, Transform2D p_shape_xform){

    Variant wasgo_var_local_xform = p_local_xform;
    uint8_t wasgo_buffer_local_xform[28];
    int wasgo_size_local_xform = 28;
    encode_variant(wasgo_var_local_xform, wasgo_buffer_local_xform, wasgo_size_local_xform);
    

    Variant wasgo_var_shape_xform = p_shape_xform;
    uint8_t wasgo_buffer_shape_xform[28];
    int wasgo_size_shape_xform = 28;
    encode_variant(wasgo_var_shape_xform, wasgo_buffer_shape_xform, wasgo_size_shape_xform);
    
	return (bool) _wasgo_Shape2D_wrapper_collide(wasgo_id, wasgo_buffer_local_xform, wasgo_size_local_xform, p_with_shape._get_wasgo_id(), wasgo_buffer_shape_xform, wasgo_size_shape_xform);
}
Array Shape2D::collide_and_get_contacts(Transform2D p_local_xform, Shape2D p_with_shape, Transform2D p_shape_xform){

    Variant wasgo_var_local_xform = p_local_xform;
    uint8_t wasgo_buffer_local_xform[28];
    int wasgo_size_local_xform = 28;
    encode_variant(wasgo_var_local_xform, wasgo_buffer_local_xform, wasgo_size_local_xform);
    

    Variant wasgo_var_shape_xform = p_shape_xform;
    uint8_t wasgo_buffer_shape_xform[28];
    int wasgo_size_shape_xform = 28;
    encode_variant(wasgo_var_shape_xform, wasgo_buffer_shape_xform, wasgo_size_shape_xform);
    
	return Array(_wasgo_Shape2D_wrapper_collide_and_get_contacts(wasgo_id, wasgo_buffer_local_xform, wasgo_size_local_xform, p_with_shape._get_wasgo_id(), wasgo_buffer_shape_xform, wasgo_size_shape_xform));
}
bool Shape2D::collide_with_motion(Transform2D p_local_xform, Vector2 p_local_motion, Shape2D p_with_shape, Transform2D p_shape_xform, Vector2 p_shape_motion){

    Variant wasgo_var_local_xform = p_local_xform;
    uint8_t wasgo_buffer_local_xform[28];
    int wasgo_size_local_xform = 28;
    encode_variant(wasgo_var_local_xform, wasgo_buffer_local_xform, wasgo_size_local_xform);
    

    Variant wasgo_var_local_motion = p_local_motion;
    uint8_t wasgo_buffer_local_motion[12];
    int wasgo_size_local_motion = 12;
    encode_variant(wasgo_var_local_motion, wasgo_buffer_local_motion, wasgo_size_local_motion);
    

    Variant wasgo_var_shape_xform = p_shape_xform;
    uint8_t wasgo_buffer_shape_xform[28];
    int wasgo_size_shape_xform = 28;
    encode_variant(wasgo_var_shape_xform, wasgo_buffer_shape_xform, wasgo_size_shape_xform);
    

    Variant wasgo_var_shape_motion = p_shape_motion;
    uint8_t wasgo_buffer_shape_motion[12];
    int wasgo_size_shape_motion = 12;
    encode_variant(wasgo_var_shape_motion, wasgo_buffer_shape_motion, wasgo_size_shape_motion);
    
	return (bool) _wasgo_Shape2D_wrapper_collide_with_motion(wasgo_id, wasgo_buffer_local_xform, wasgo_size_local_xform, wasgo_buffer_local_motion, wasgo_size_local_motion, p_with_shape._get_wasgo_id(), wasgo_buffer_shape_xform, wasgo_size_shape_xform, wasgo_buffer_shape_motion, wasgo_size_shape_motion);
}
Array Shape2D::collide_with_motion_and_get_contacts(Transform2D p_local_xform, Vector2 p_local_motion, Shape2D p_with_shape, Transform2D p_shape_xform, Vector2 p_shape_motion){

    Variant wasgo_var_local_xform = p_local_xform;
    uint8_t wasgo_buffer_local_xform[28];
    int wasgo_size_local_xform = 28;
    encode_variant(wasgo_var_local_xform, wasgo_buffer_local_xform, wasgo_size_local_xform);
    

    Variant wasgo_var_local_motion = p_local_motion;
    uint8_t wasgo_buffer_local_motion[12];
    int wasgo_size_local_motion = 12;
    encode_variant(wasgo_var_local_motion, wasgo_buffer_local_motion, wasgo_size_local_motion);
    

    Variant wasgo_var_shape_xform = p_shape_xform;
    uint8_t wasgo_buffer_shape_xform[28];
    int wasgo_size_shape_xform = 28;
    encode_variant(wasgo_var_shape_xform, wasgo_buffer_shape_xform, wasgo_size_shape_xform);
    

    Variant wasgo_var_shape_motion = p_shape_motion;
    uint8_t wasgo_buffer_shape_motion[12];
    int wasgo_size_shape_motion = 12;
    encode_variant(wasgo_var_shape_motion, wasgo_buffer_shape_motion, wasgo_size_shape_motion);
    
	return Array(_wasgo_Shape2D_wrapper_collide_with_motion_and_get_contacts(wasgo_id, wasgo_buffer_local_xform, wasgo_size_local_xform, wasgo_buffer_local_motion, wasgo_size_local_motion, p_with_shape._get_wasgo_id(), wasgo_buffer_shape_xform, wasgo_size_shape_xform, wasgo_buffer_shape_motion, wasgo_size_shape_motion));
}
void Shape2D::draw(RID p_canvas_item, Color p_color){

    Variant wasgo_var_canvas_item = p_canvas_item;
    uint8_t wasgo_buffer_canvas_item[0];
    int wasgo_size_canvas_item = 0;
    encode_variant(wasgo_var_canvas_item, wasgo_buffer_canvas_item, wasgo_size_canvas_item);
    

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_Shape2D_wrapper_draw(wasgo_id, wasgo_buffer_canvas_item, wasgo_size_canvas_item, wasgo_buffer_color, wasgo_size_color);
}
float Shape2D::get_custom_solver_bias(){
	return (float) _wasgo_Shape2D_wrapper_get_custom_solver_bias(wasgo_id);
}
void Shape2D::set_custom_solver_bias(float p_bias){
	_wasgo_Shape2D_wrapper_set_custom_solver_bias(wasgo_id, p_bias);
}