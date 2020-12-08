/* THIS FILE IS GENERATED */
#ifndef SPHERESHAPE_H
#define SPHERESHAPE_H

#include "wasgo\wasgoid.h"

#include "Shape.h"
class SphereShape : public Shape{
public:
float get_radius();
void set_radius(float p_radius);

protected:
public:
explicit SphereShape(WasGoID p_wasgo_id);
explicit SphereShape(Shape other);
SphereShape();
SphereShape new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_SphereShape_wrapper_get_radius(WasGoID wasgo_id);
void _wasgo_SphereShape_wrapper_set_radius(WasGoID wasgo_id, float p_radius);

    //constructor wrappers
    WasGoID _wasgo_SphereShape_constructor();
            
}
#endif