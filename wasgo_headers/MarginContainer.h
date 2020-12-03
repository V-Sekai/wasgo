/* THIS FILE IS GENERATED */
#ifndef MARGINCONTAINER_H
#define MARGINCONTAINER_H

#include "wasgo\wasgo.h"

#include "Container.h"
class MarginContainer : public Container{
public:

protected:
MarginContainer(WasGoId p_wasgo_id);
public:
MarginContainer();
~MarginContainer();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_MarginContainer_constructor();
    void _wasgo_MarginContainer_destructor(WasGoId p_wasgo_id);
            
}
#endif