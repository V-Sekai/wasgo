/* THIS FILE IS GENERATED */
#ifndef BOXSHAPE_H
#define BOXSHAPE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Shape.h"
#include "Vector3.h"
class BoxShape : public Shape{
public:
Vector3 get_extents();
void set_extents(Vector3 p_extents);

BoxShape(WasGoId p_wasgo_id);
~BoxShape();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_BoxShape_wrapper_get_extents(WasGoId wasgo_id);
void _wasgo_BoxShape_wrapper_set_extents(WasGoId wasgo_id, WasGoId p_extents);
}
#endif