/* THIS FILE IS GENERATED */
#ifndef POSITION3D_H
#define POSITION3D_H

#include "wasgo\wasgo.h"

#include "Spatial.h"
class Position3D : public Spatial{
public:

protected:
public:
explicit Position3D(WasGoID p_wasgo_id);
explicit Position3D(Spatial other);
Position3D new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_Position3D_constructor();
            
}
#endif