/* THIS FILE IS GENERATED */
#ifndef CAPSULESHAPE_H
#define CAPSULESHAPE_H

#include "wasgo\wasgoid.h"

#include "Shape.h"
class CapsuleShape : public Shape{
public:
float get_height();
float get_radius();
void set_height(float p_height);
void set_radius(float p_radius);

protected:
public:
explicit CapsuleShape(WasGoID p_wasgo_id);
explicit CapsuleShape(Shape other);
CapsuleShape();
CapsuleShape new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_CapsuleShape_wrapper_get_height(WasGoID wasgo_id);
float _wasgo_CapsuleShape_wrapper_get_radius(WasGoID wasgo_id);
void _wasgo_CapsuleShape_wrapper_set_height(WasGoID wasgo_id, float p_height);
void _wasgo_CapsuleShape_wrapper_set_radius(WasGoID wasgo_id, float p_radius);

    //constructor wrappers
    WasGoID _wasgo_CapsuleShape_constructor();
            
}
#endif