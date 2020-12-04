/* THIS FILE IS GENERATED */
#ifndef SPHERESHAPE_H
#define SPHERESHAPE_H

#include "wasgo\wasgo.h"

#include "Shape.h"
class SphereShape : public Shape{
public:
float get_radius();
void set_radius(float p_radius);

protected:
public:
explicit SphereShape(WasGoId p_wasgo_id);
explicit SphereShape(Shape other);
SphereShape new_instance();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_SphereShape_wrapper_get_radius(WasGoId wasgo_id);
void _wasgo_SphereShape_wrapper_set_radius(WasGoId wasgo_id, float p_radius);

    //constructor wrappers
    WasGoId _wasgo_SphereShape_constructor();
            
}
#endif