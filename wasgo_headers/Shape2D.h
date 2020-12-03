/* THIS FILE IS GENERATED */
#ifndef SHAPE2D_H
#define SHAPE2D_H

#include "wasgo\wasgo.h"

#include "Color.h"
#include "Vector2.h"
#include "RID.h"
#include "Resource.h"
#include "Variant.h"
#include "Transform2D.h"
class Shape2D : public Resource{
public:
bool collide(Transform2D p_local_xform, Shape2D p_with_shape, Transform2D p_shape_xform);
Array collide_and_get_contacts(Transform2D p_local_xform, Shape2D p_with_shape, Transform2D p_shape_xform);
bool collide_with_motion(Transform2D p_local_xform, Vector2 p_local_motion, Shape2D p_with_shape, Transform2D p_shape_xform, Vector2 p_shape_motion);
Array collide_with_motion_and_get_contacts(Transform2D p_local_xform, Vector2 p_local_motion, Shape2D p_with_shape, Transform2D p_shape_xform, Vector2 p_shape_motion);
void draw(RID p_canvas_item, Color p_color);
float get_custom_solver_bias();
void set_custom_solver_bias(float p_bias);
};


//Wrapper Functions
extern "C"{
int _wasgo_Shape2D_wrapper_collide(WasGoId wasgo_id, const uint8_t * p_local_xform, int p_local_xform_wasgo_buffer_size, WasGoId p_with_shape, const uint8_t * p_shape_xform, int p_shape_xform_wasgo_buffer_size);
WasGoId _wasgo_Shape2D_wrapper_collide_and_get_contacts(WasGoId wasgo_id, const uint8_t * p_local_xform, int p_local_xform_wasgo_buffer_size, WasGoId p_with_shape, const uint8_t * p_shape_xform, int p_shape_xform_wasgo_buffer_size);
int _wasgo_Shape2D_wrapper_collide_with_motion(WasGoId wasgo_id, const uint8_t * p_local_xform, int p_local_xform_wasgo_buffer_size, const uint8_t * p_local_motion, int p_local_motion_wasgo_buffer_size, WasGoId p_with_shape, const uint8_t * p_shape_xform, int p_shape_xform_wasgo_buffer_size, const uint8_t * p_shape_motion, int p_shape_motion_wasgo_buffer_size);
WasGoId _wasgo_Shape2D_wrapper_collide_with_motion_and_get_contacts(WasGoId wasgo_id, const uint8_t * p_local_xform, int p_local_xform_wasgo_buffer_size, const uint8_t * p_local_motion, int p_local_motion_wasgo_buffer_size, WasGoId p_with_shape, const uint8_t * p_shape_xform, int p_shape_xform_wasgo_buffer_size, const uint8_t * p_shape_motion, int p_shape_motion_wasgo_buffer_size);
void _wasgo_Shape2D_wrapper_draw(WasGoId wasgo_id, const uint8_t * p_canvas_item, int p_canvas_item_wasgo_buffer_size, const uint8_t * p_color, int p_color_wasgo_buffer_size);
float _wasgo_Shape2D_wrapper_get_custom_solver_bias(WasGoId wasgo_id);
void _wasgo_Shape2D_wrapper_set_custom_solver_bias(WasGoId wasgo_id, float p_bias);

    //constructor and destructor wrappers
    WasGoId _wasgo_Shape2D_constructor();
    void _wasgo_Shape2D_destructor(WasGoId p_wasgo_id);
            
}
#endif