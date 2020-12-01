/* THIS FILE IS GENERATED */
#ifndef PHYSICSMATERIAL_H
#define PHYSICSMATERIAL_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Resource.h"
class PhysicsMaterial : public Resource{
public:
float get_bounce();
float get_friction();
bool is_absorbent();
bool is_rough();
void set_absorbent(bool p_absorbent);
void set_bounce(float p_bounce);
void set_friction(float p_friction);
void set_rough(bool p_rough);

PhysicsMaterial(WasGoId p_wasgo_id);
~PhysicsMaterial();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_PhysicsMaterial_wrapper_get_bounce(WasGoId wasgo_id);
float _wasgo_PhysicsMaterial_wrapper_get_friction(WasGoId wasgo_id);
int _wasgo_PhysicsMaterial_wrapper_is_absorbent(WasGoId wasgo_id);
int _wasgo_PhysicsMaterial_wrapper_is_rough(WasGoId wasgo_id);
void _wasgo_PhysicsMaterial_wrapper_set_absorbent(WasGoId wasgo_id, bool p_absorbent);
void _wasgo_PhysicsMaterial_wrapper_set_bounce(WasGoId wasgo_id, float p_bounce);
void _wasgo_PhysicsMaterial_wrapper_set_friction(WasGoId wasgo_id, float p_friction);
void _wasgo_PhysicsMaterial_wrapper_set_rough(WasGoId wasgo_id, bool p_rough);
}
#endif