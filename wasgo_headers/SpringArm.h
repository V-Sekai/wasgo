/* THIS FILE IS GENERATED */
#ifndef SPRINGARM_H
#define SPRINGARM_H

#include <stdint.h>

#include "Spatial.h"
#include "Shape.h"
#include "RID.h"
class SpringArm : public Spatial{
public: SpringArm();
void  add_excluded_object(RID RID);
void  clear_excluded_objects();
void  clear_excluded_objects();
int  get_collision_mask();
int  get_collision_mask();
float  get_hit_length();
float  get_hit_length();
float  get_length();
float  get_length();
float  get_margin();
float  get_margin();
Shape  get_shape();
Shape  get_shape();
bool  remove_excluded_object(RID RID);
void  set_collision_mask(int mask);
void  set_length(float length);
void  set_margin(float margin);
void  set_shape(Shape shape);
};
#endif