/* THIS FILE IS GENERATED */
#ifndef VBOXCONTAINER_H
#define VBOXCONTAINER_H

#include "wasgo\wasgoid.h"

#include "BoxContainer.h"
class VBoxContainer : public BoxContainer{
public:

protected:
public:
explicit VBoxContainer(WasGoID p_wasgo_id);
explicit VBoxContainer(BoxContainer other);
VBoxContainer();
VBoxContainer new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VBoxContainer_constructor();
            
}
#endif