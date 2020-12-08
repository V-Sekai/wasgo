/* THIS FILE IS GENERATED */
#ifndef SPATIALGIZMO_H
#define SPATIALGIZMO_H

#include "wasgo\wasgoid.h"

#include "Reference.h"
class SpatialGizmo : public Reference{
public:

protected:
public:
explicit SpatialGizmo(WasGoID p_wasgo_id);
explicit SpatialGizmo(Reference other);
SpatialGizmo();
SpatialGizmo new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_SpatialGizmo_constructor();
            
}
#endif