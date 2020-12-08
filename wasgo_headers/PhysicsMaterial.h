/* THIS FILE IS GENERATED */
#ifndef PHYSICSMATERIAL_H
#define PHYSICSMATERIAL_H

#include "wasgo\wasgoid.h"

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

protected:
public:
explicit PhysicsMaterial(WasGoID p_wasgo_id);
explicit PhysicsMaterial(Resource other);
PhysicsMaterial();
PhysicsMaterial new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_PhysicsMaterial_wrapper_get_bounce(WasGoID wasgo_id);
float _wasgo_PhysicsMaterial_wrapper_get_friction(WasGoID wasgo_id);
int _wasgo_PhysicsMaterial_wrapper_is_absorbent(WasGoID wasgo_id);
int _wasgo_PhysicsMaterial_wrapper_is_rough(WasGoID wasgo_id);
void _wasgo_PhysicsMaterial_wrapper_set_absorbent(WasGoID wasgo_id, bool p_absorbent);
void _wasgo_PhysicsMaterial_wrapper_set_bounce(WasGoID wasgo_id, float p_bounce);
void _wasgo_PhysicsMaterial_wrapper_set_friction(WasGoID wasgo_id, float p_friction);
void _wasgo_PhysicsMaterial_wrapper_set_rough(WasGoID wasgo_id, bool p_rough);

    //constructor wrappers
    WasGoID _wasgo_PhysicsMaterial_constructor();
            
}
#endif