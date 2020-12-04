/* THIS FILE IS GENERATED */
#ifndef POSITION2D_H
#define POSITION2D_H

#include "wasgo\wasgo.h"

#include "Node2D.h"
class Position2D : public Node2D{
public:

protected:
public:
explicit Position2D(WasGoId p_wasgo_id);
explicit Position2D(Node2D other);
Position2D new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoId _wasgo_Position2D_constructor();
            
}
#endif