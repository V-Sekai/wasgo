/* THIS FILE IS GENERATED */
#ifndef PLANESHAPE_H
#define PLANESHAPE_H

#include "wasgo\wasgoid.h"

#include "Plane.h"
#include "Shape.h"
class PlaneShape : public Shape{
public:
Plane get_plane();
void set_plane(Plane p_plane);

protected:
public:
explicit PlaneShape(WasGoID p_wasgo_id);
explicit PlaneShape(Shape other);
PlaneShape();
PlaneShape new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_PlaneShape_wrapper_get_plane(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_PlaneShape_wrapper_set_plane(WasGoID wasgo_id, const uint8_t * p_plane, int p_plane_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_PlaneShape_constructor();
            
}
#endif