/* THIS FILE IS GENERATED */
#ifndef PHYSICSMATERIAL_H
#define PHYSICSMATERIAL_H

#include "stdint.h"

#include "Resource.h"
class PhysicsMaterial : public Resource{
public: PhysicsMaterial();
float get_bounce();
float get_friction();
bool is_absorbent();
bool is_rough();
void set_absorbent(bool p_absorbent);
void set_bounce(float p_bounce);
void set_friction(float p_friction);
void set_rough(bool p_rough);
};
#endif