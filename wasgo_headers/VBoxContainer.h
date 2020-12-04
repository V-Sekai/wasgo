/* THIS FILE IS GENERATED */
#ifndef VBOXCONTAINER_H
#define VBOXCONTAINER_H

#include "wasgo\wasgo.h"

#include "BoxContainer.h"
class VBoxContainer : public BoxContainer{
public:

protected:
public:
explicit VBoxContainer(WasGoId p_wasgo_id);
explicit VBoxContainer(BoxContainer other);
VBoxContainer new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoId _wasgo_VBoxContainer_constructor();
            
}
#endif