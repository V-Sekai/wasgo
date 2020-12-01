/* THIS FILE IS GENERATED */
#ifndef PLANESHAPE_H
#define PLANESHAPE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Shape.h"
#include "Plane.h"
class PlaneShape : public Shape{
public:
Plane get_plane();
void set_plane(Plane p_plane);

PlaneShape(WasGoId p_wasgo_id);
~PlaneShape();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_PlaneShape_wrapper_get_plane(WasGoId wasgo_id);
void _wasgo_PlaneShape_wrapper_set_plane(WasGoId wasgo_id, WasGoId p_plane);
}
#endif