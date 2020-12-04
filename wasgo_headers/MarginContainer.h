/* THIS FILE IS GENERATED */
#ifndef MARGINCONTAINER_H
#define MARGINCONTAINER_H

#include "wasgo\wasgo.h"

#include "Container.h"
class MarginContainer : public Container{
public:

protected:
public:
explicit MarginContainer(WasGoId p_wasgo_id);
explicit MarginContainer(Container other);
MarginContainer new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoId _wasgo_MarginContainer_constructor();
            
}
#endif