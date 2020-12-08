/* THIS FILE IS GENERATED */
#ifndef CAPSULESHAPE2D_H
#define CAPSULESHAPE2D_H

#include "wasgo\wasgoid.h"

#include "Shape2D.h"
class CapsuleShape2D : public Shape2D{
public:
float get_height();
float get_radius();
void set_height(float p_height);
void set_radius(float p_radius);

protected:
public:
explicit CapsuleShape2D(WasGoID p_wasgo_id);
explicit CapsuleShape2D(Shape2D other);
CapsuleShape2D();
CapsuleShape2D new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_CapsuleShape2D_wrapper_get_height(WasGoID wasgo_id);
float _wasgo_CapsuleShape2D_wrapper_get_radius(WasGoID wasgo_id);
void _wasgo_CapsuleShape2D_wrapper_set_height(WasGoID wasgo_id, float p_height);
void _wasgo_CapsuleShape2D_wrapper_set_radius(WasGoID wasgo_id, float p_radius);

    //constructor wrappers
    WasGoID _wasgo_CapsuleShape2D_constructor();
            
}
#endif