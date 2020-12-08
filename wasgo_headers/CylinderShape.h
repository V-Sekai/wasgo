/* THIS FILE IS GENERATED */
#ifndef CYLINDERSHAPE_H
#define CYLINDERSHAPE_H

#include "wasgo\wasgoid.h"

#include "Shape.h"
class CylinderShape : public Shape{
public:
float get_height();
float get_radius();
void set_height(float p_height);
void set_radius(float p_radius);

protected:
public:
explicit CylinderShape(WasGoID p_wasgo_id);
explicit CylinderShape(Shape other);
CylinderShape();
CylinderShape new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_CylinderShape_wrapper_get_height(WasGoID wasgo_id);
float _wasgo_CylinderShape_wrapper_get_radius(WasGoID wasgo_id);
void _wasgo_CylinderShape_wrapper_set_height(WasGoID wasgo_id, float p_height);
void _wasgo_CylinderShape_wrapper_set_radius(WasGoID wasgo_id, float p_radius);

    //constructor wrappers
    WasGoID _wasgo_CylinderShape_constructor();
            
}
#endif