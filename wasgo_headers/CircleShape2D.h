/* THIS FILE IS GENERATED */
#ifndef CIRCLESHAPE2D_H
#define CIRCLESHAPE2D_H

#include "wasgo\wasgo.h"

#include "Shape2D.h"
class CircleShape2D : public Shape2D{
public:
float get_radius();
void set_radius(float p_radius);

protected:
CircleShape2D(WasGoId p_wasgo_id);
public:
CircleShape2D();
~CircleShape2D();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_CircleShape2D_wrapper_get_radius(WasGoId wasgo_id);
void _wasgo_CircleShape2D_wrapper_set_radius(WasGoId wasgo_id, float p_radius);

    //constructor and destructor wrappers
    WasGoId _wasgo_CircleShape2D_constructor();
    void _wasgo_CircleShape2D_destructor(WasGoId p_wasgo_id);
            
}
#endif