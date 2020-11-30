/* THIS FILE IS GENERATED */
#ifndef BOXSHAPE_H
#define BOXSHAPE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Shape.h"
class BoxShape : public Shape{
Vector3 get_extents();
void set_extents(Vector3 p_extents);

BoxShape(WasGoId p_wasgo_id);
~BoxShape();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_BoxShape_wrapper_get_extents(WasGoId wasgo_id);
void _wasgo_BoxShape_wrapper_set_extents(WasGoId wasgo_id, WasGo::WasGoId p_extents);
}
#endif