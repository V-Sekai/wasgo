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
public:
explicit CircleShape2D(WasGoID p_wasgo_id);
explicit CircleShape2D(Shape2D other);
CircleShape2D new_instance();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_CircleShape2D_wrapper_get_radius(WasGoID wasgo_id);
void _wasgo_CircleShape2D_wrapper_set_radius(WasGoID wasgo_id, float p_radius);

    //constructor wrappers
    WasGoID _wasgo_CircleShape2D_constructor();
            
}
#endif