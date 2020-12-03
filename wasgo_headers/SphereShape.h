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
SphereShape(WasGoId p_wasgo_id);
public:
SphereShape();
~SphereShape();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_SphereShape_wrapper_get_radius(WasGoId wasgo_id);
void _wasgo_SphereShape_wrapper_set_radius(WasGoId wasgo_id, float p_radius);

    //constructor and destructor wrappers
    WasGoId _wasgo_SphereShape_constructor();
    void _wasgo_SphereShape_destructor(WasGoId p_wasgo_id);
            
}
#endif