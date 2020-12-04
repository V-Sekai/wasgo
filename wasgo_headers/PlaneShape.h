/* THIS FILE IS GENERATED */
#ifndef PLANESHAPE_H
#define PLANESHAPE_H

#include "wasgo\wasgo.h"

#include "Shape.h"
#include "Plane.h"
class PlaneShape : public Shape{
public:
Plane get_plane();
void set_plane(Plane p_plane);

protected:
PlaneShape(WasGoId p_wasgo_id);
public:
PlaneShape();
~PlaneShape();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_PlaneShape_wrapper_get_plane(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_PlaneShape_wrapper_set_plane(WasGoId wasgo_id, const uint8_t * p_plane, int p_plane_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_PlaneShape_constructor();
    void _wasgo_PlaneShape_destructor(WasGoId p_wasgo_id);
            
}
#endif