/* THIS FILE IS GENERATED */
#ifndef BOXSHAPE_H
#define BOXSHAPE_H

#include "wasgo\wasgo.h"

#include "Shape.h"
#include "Vector3.h"
class BoxShape : public Shape{
public:
Vector3 get_extents();
void set_extents(Vector3 p_extents);

protected:
BoxShape(WasGoId p_wasgo_id);
public:
BoxShape();
~BoxShape();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_BoxShape_wrapper_get_extents(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_BoxShape_wrapper_set_extents(WasGoId wasgo_id, const uint8_t * p_extents, int p_extents_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_BoxShape_constructor();
    void _wasgo_BoxShape_destructor(WasGoId p_wasgo_id);
            
}
#endif