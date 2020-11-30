/* THIS FILE IS GENERATED */
#ifndef CAPSULESHAPE2D_H
#define CAPSULESHAPE2D_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Shape2D.h"
class CapsuleShape2D : public Shape2D{
float get_height();
float get_radius();
void set_height(float p_height);
void set_radius(float p_radius);

CapsuleShape2D(WasGoId p_wasgo_id);
~CapsuleShape2D();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_CapsuleShape2D_wrapper_get_height(WasGoId wasgo_id);
float _wasgo_CapsuleShape2D_wrapper_get_radius(WasGoId wasgo_id);
void _wasgo_CapsuleShape2D_wrapper_set_height(WasGoId wasgo_id, float p_height);
void _wasgo_CapsuleShape2D_wrapper_set_radius(WasGoId wasgo_id, float p_radius);
}
#endif