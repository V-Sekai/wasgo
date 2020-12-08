/* THIS FILE IS GENERATED */
#ifndef HBOXCONTAINER_H
#define HBOXCONTAINER_H

#include "wasgo\wasgoid.h"

#include "BoxContainer.h"
class HBoxContainer : public BoxContainer{
public:

protected:
public:
explicit HBoxContainer(WasGoID p_wasgo_id);
explicit HBoxContainer(BoxContainer other);
HBoxContainer();
HBoxContainer new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_HBoxContainer_constructor();
            
}
#endif