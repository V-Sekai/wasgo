/* THIS FILE IS GENERATED */
#ifndef POSITION3D_H
#define POSITION3D_H

#include "wasgo\wasgo.h"

#include "Spatial.h"
class Position3D : public Spatial{
public:

protected:
Position3D(WasGoId p_wasgo_id);
public:
Position3D();
~Position3D();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_Position3D_constructor();
    void _wasgo_Position3D_destructor(WasGoId p_wasgo_id);
            
}
#endif