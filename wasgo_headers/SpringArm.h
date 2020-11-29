/* THIS FILE IS GENERATED */
#ifndef SPRINGARM_H
#define SPRINGARM_H

#include "stdint.h"

#include "Variant.h"
#include "Spatial.h"
#include "Shape.h"
class SpringArm : public Spatial{
public: SpringArm();
void add_excluded_object(RID p_RID);
void clear_excluded_objects();
int get_collision_mask();
float get_hit_length();
float get_length();
float get_margin();
Shape get_shape();
bool remove_excluded_object(RID p_RID);
void set_collision_mask(int p_mask);
void set_length(float p_length);
void set_margin(float p_margin);
void set_shape(Shape p_shape);
};
#endif