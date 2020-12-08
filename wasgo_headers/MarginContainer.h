/* THIS FILE IS GENERATED */
#ifndef MARGINCONTAINER_H
#define MARGINCONTAINER_H

#include "wasgo\wasgoid.h"

#include "Container.h"
class MarginContainer : public Container{
public:

protected:
public:
explicit MarginContainer(WasGoID p_wasgo_id);
explicit MarginContainer(Container other);
MarginContainer();
MarginContainer new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_MarginContainer_constructor();
            
}
#endif