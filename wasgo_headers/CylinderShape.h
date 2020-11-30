/* THIS FILE IS GENERATED */
#ifndef CYLINDERSHAPE_H
#define CYLINDERSHAPE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Shape.h"
class CylinderShape : public Shape{
float get_height();
float get_radius();
void set_height(float p_height);
void set_radius(float p_radius);

CylinderShape(WasGoId p_wasgo_id);
~CylinderShape();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_CylinderShape_wrapper_get_height(WasGoId wasgo_id);
float _wasgo_CylinderShape_wrapper_get_radius(WasGoId wasgo_id);
void _wasgo_CylinderShape_wrapper_set_height(WasGoId wasgo_id, float p_height);
void _wasgo_CylinderShape_wrapper_set_radius(WasGoId wasgo_id, float p_radius);
}
#endif