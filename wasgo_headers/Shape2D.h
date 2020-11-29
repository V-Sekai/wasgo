/* THIS FILE IS GENERATED */
#ifndef SHAPE2D_H
#define SHAPE2D_H

#include "stdint.h"

#include "Variant.h"
#include "Resource.h"
class Shape2D : public Resource{
public: Shape2D();
bool collide(Transform2D p_local_xform, Shape2D p_with_shape, Transform2D p_shape_xform);
Array collide_and_get_contacts(Transform2D p_local_xform, Shape2D p_with_shape, Transform2D p_shape_xform);
bool collide_with_motion(Transform2D p_local_xform, Vector2 p_local_motion, Shape2D p_with_shape, Transform2D p_shape_xform, Vector2 p_shape_motion);
Array collide_with_motion_and_get_contacts(Transform2D p_local_xform, Vector2 p_local_motion, Shape2D p_with_shape, Transform2D p_shape_xform, Vector2 p_shape_motion);
void draw(RID p_canvas_item, Color p_color);
float get_custom_solver_bias();
void set_custom_solver_bias(float p_bias);
};
#endif