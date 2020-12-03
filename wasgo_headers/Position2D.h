/* THIS FILE IS GENERATED */
#ifndef POSITION2D_H
#define POSITION2D_H

#include "wasgo\wasgo.h"

#include "Node2D.h"
class Position2D : public Node2D{
public:

protected:
Position2D(WasGoId p_wasgo_id);
public:
Position2D();
~Position2D();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_Position2D_constructor();
    void _wasgo_Position2D_destructor(WasGoId p_wasgo_id);
            
}
#endif