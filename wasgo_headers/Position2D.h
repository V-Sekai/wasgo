/* THIS FILE IS GENERATED */
#ifndef POSITION2D_H
#define POSITION2D_H

#include "wasgo\wasgoid.h"

#include "Node2D.h"
class Position2D : public Node2D{
public:

protected:
public:
explicit Position2D(WasGoID p_wasgo_id);
explicit Position2D(Node2D other);
Position2D();
Position2D new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_Position2D_constructor();
            
}
#endif