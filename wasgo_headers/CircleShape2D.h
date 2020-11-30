/* THIS FILE IS GENERATED */
#ifndef CIRCLESHAPE2D_H
#define CIRCLESHAPE2D_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Shape2D.h"
class CircleShape2D : public Shape2D{
float get_radius();
void set_radius(float p_radius);

CircleShape2D(WasGoId p_wasgo_id);
~CircleShape2D();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_CircleShape2D_wrapper_get_radius(WasGoId wasgo_id);
void _wasgo_CircleShape2D_wrapper_set_radius(WasGoId wasgo_id, float p_radius);
}
#endif