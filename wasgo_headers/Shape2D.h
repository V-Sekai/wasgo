/* THIS FILE IS GENERATED */
#ifndef SHAPE2D_H
#define SHAPE2D_H

#include <stdint.h>

#include "Vector2.h"
#include "Resource.h"
#include "Transform2D.h"
#include "Variant.h"
class Shape2D : public Resource{
public: Shape2D();
bool  collide(Transform2D local_xform, Shape2D with_shape, Transform2D shape_xform);
Array  collide_and_get_contacts(Transform2D local_xform, Shape2D with_shape, Transform2D shape_xform);
bool  collide_with_motion(Transform2D local_xform, Vector2 local_motion, Shape2D with_shape, Transform2D shape_xform, Vector2 shape_motion);
Array  collide_with_motion_and_get_contacts(Transform2D local_xform, Vector2 local_motion, Shape2D with_shape, Transform2D shape_xform, Vector2 shape_motion);
float  get_custom_solver_bias();
float  get_custom_solver_bias();
void  set_custom_solver_bias(float bias);
};
#endif