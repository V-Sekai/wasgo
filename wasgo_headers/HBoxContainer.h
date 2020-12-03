/* THIS FILE IS GENERATED */
#ifndef HBOXCONTAINER_H
#define HBOXCONTAINER_H

#include "wasgo\wasgo.h"

#include "BoxContainer.h"
class HBoxContainer : public BoxContainer{
public:

protected:
HBoxContainer(WasGoId p_wasgo_id);
public:
HBoxContainer();
~HBoxContainer();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_HBoxContainer_constructor();
    void _wasgo_HBoxContainer_destructor(WasGoId p_wasgo_id);
            
}
#endif