/* THIS FILE IS GENERATED */
#ifndef BOXSHAPE_H
#define BOXSHAPE_H

#include "wasgo\wasgoid.h"

#include "Vector3.h"
#include "Shape.h"
class BoxShape : public Shape{
public:
Vector3 get_extents();
void set_extents(Vector3 p_extents);

protected:
public:
explicit BoxShape(WasGoID p_wasgo_id);
explicit BoxShape(Shape other);
BoxShape();
BoxShape new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_BoxShape_wrapper_get_extents(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_BoxShape_wrapper_set_extents(WasGoID wasgo_id, const uint8_t * p_extents, int p_extents_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_BoxShape_constructor();
            
}
#endif