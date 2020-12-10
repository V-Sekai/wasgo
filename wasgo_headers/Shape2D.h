/* THIS FILE IS GENERATED */
#ifndef SHAPE2D_H
#define SHAPE2D_H

#include "wasgo\wasgoid.h"

#include "Transform2D.h"
#include "RID.h"
#include "Resource.h"
#include "Variant.h"
#include "Vector2.h"
#include "Color.h"
class Shape2D : public Resource{
public:
bool collide(Transform2D p_local_xform, Shape2D p_with_shape, Transform2D p_shape_xform);
Array collide_and_get_contacts(Transform2D p_local_xform, Shape2D p_with_shape, Transform2D p_shape_xform);
bool collide_with_motion(Transform2D p_local_xform, Vector2 p_local_motion, Shape2D p_with_shape, Transform2D p_shape_xform, Vector2 p_shape_motion);
Array collide_with_motion_and_get_contacts(Transform2D p_local_xform, Vector2 p_local_motion, Shape2D p_with_shape, Transform2D p_shape_xform, Vector2 p_shape_motion);
void draw(RID p_canvas_item, Color p_color);
float get_custom_solver_bias();
void set_custom_solver_bias(float p_bias);

protected:
public:
explicit Shape2D(WasGoID p_wasgo_id);
explicit Shape2D(Resource other);
Shape2D();
Shape2D new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_Shape2D_wrapper_collide(WasGoID wasgo_id, const uint8_t * p_local_xform, int p_local_xform_wasgo_buffer_size, int wasgo_throwaway, WasGoID p_with_shape, const uint8_t * p_shape_xform, int p_shape_xform_wasgo_buffer_size);
WasGoID _wasgo_Shape2D_wrapper_collide_and_get_contacts(WasGoID wasgo_id, const uint8_t * p_local_xform, int p_local_xform_wasgo_buffer_size, int wasgo_throwaway, WasGoID p_with_shape, const uint8_t * p_shape_xform, int p_shape_xform_wasgo_buffer_size);
int _wasgo_Shape2D_wrapper_collide_with_motion(WasGoID wasgo_id, const uint8_t * p_local_xform, int p_local_xform_wasgo_buffer_size, int wasgo_throwaway, const uint8_t * p_local_motion, int p_local_motion_wasgo_buffer_size, WasGoID p_with_shape, const uint8_t * p_shape_xform, int p_shape_xform_wasgo_buffer_size, const uint8_t * p_shape_motion, int p_shape_motion_wasgo_buffer_size);
WasGoID _wasgo_Shape2D_wrapper_collide_with_motion_and_get_contacts(WasGoID wasgo_id, const uint8_t * p_local_xform, int p_local_xform_wasgo_buffer_size, int wasgo_throwaway, const uint8_t * p_local_motion, int p_local_motion_wasgo_buffer_size, WasGoID p_with_shape, const uint8_t * p_shape_xform, int p_shape_xform_wasgo_buffer_size, const uint8_t * p_shape_motion, int p_shape_motion_wasgo_buffer_size);
void _wasgo_Shape2D_wrapper_draw(WasGoID wasgo_id, const uint8_t * p_canvas_item, int p_canvas_item_wasgo_buffer_size, int wasgo_throwaway, const uint8_t * p_color, int p_color_wasgo_buffer_size);
float _wasgo_Shape2D_wrapper_get_custom_solver_bias(WasGoID wasgo_id);
void _wasgo_Shape2D_wrapper_set_custom_solver_bias(WasGoID wasgo_id, float p_bias);

    //constructor wrappers
    WasGoID _wasgo_Shape2D_constructor();
            
}
#endif