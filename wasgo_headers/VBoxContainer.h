/* THIS FILE IS GENERATED */
#ifndef VBOXCONTAINER_H
#define VBOXCONTAINER_H

#include "wasgo\wasgo.h"

#include "BoxContainer.h"
class VBoxContainer : public BoxContainer{
public:

protected:
VBoxContainer(WasGoId p_wasgo_id);
public:
VBoxContainer();
~VBoxContainer();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VBoxContainer_constructor();
    void _wasgo_VBoxContainer_destructor(WasGoId p_wasgo_id);
            
}
#endif