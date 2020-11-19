/* THIS FILE IS GENERATED */
#ifndef PHYSICSMATERIAL_H
#define PHYSICSMATERIAL_H

#include <stdint.h>

#include "Resource.h"
class PhysicsMaterial : public Resource{
public: PhysicsMaterial();
float  get_bounce();
float  get_bounce();
float  get_friction();
float  get_friction();
bool  is_absorbent();
bool  is_absorbent();
bool  is_rough();
bool  is_rough();
void  set_absorbent(bool absorbent);
void  set_bounce(float bounce);
void  set_friction(float friction);
void  set_rough(bool rough);
};
#endif