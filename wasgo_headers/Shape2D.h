/* THIS FILE IS GENERATED */
#ifndef SHAPE2D_H
#define SHAPE2D_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Transform2D.h"
#include "RID.h"
#include "Vector2.h"
#include "Resource.h"
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
};


//Wrapper Functions
extern "C"{
int _wasgo_Shape2D_wrapper_collide(WasGoId wasgo_id, WasGoId p_local_xform, WasGoId p_with_shape, WasGoId p_shape_xform);
WasGoId _wasgo_Shape2D_wrapper_collide_and_get_contacts(WasGoId wasgo_id, WasGoId p_local_xform, WasGoId p_with_shape, WasGoId p_shape_xform);
int _wasgo_Shape2D_wrapper_collide_with_motion(WasGoId wasgo_id, WasGoId p_local_xform, WasGoId p_local_motion, WasGoId p_with_shape, WasGoId p_shape_xform, WasGoId p_shape_motion);
WasGoId _wasgo_Shape2D_wrapper_collide_with_motion_and_get_contacts(WasGoId wasgo_id, WasGoId p_local_xform, WasGoId p_local_motion, WasGoId p_with_shape, WasGoId p_shape_xform, WasGoId p_shape_motion);
void _wasgo_Shape2D_wrapper_draw(WasGoId wasgo_id, WasGoId p_canvas_item, WasGoId p_color);
float _wasgo_Shape2D_wrapper_get_custom_solver_bias(WasGoId wasgo_id);
void _wasgo_Shape2D_wrapper_set_custom_solver_bias(WasGoId wasgo_id, float p_bias);
}
#endif