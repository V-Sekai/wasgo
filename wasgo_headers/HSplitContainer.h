/* THIS FILE IS GENERATED */
#ifndef HSPLITCONTAINER_H
#define HSPLITCONTAINER_H

#include "wasgo\wasgo.h"

#include "SplitContainer.h"
class HSplitContainer : public SplitContainer{
public:

protected:
HSplitContainer(WasGoId p_wasgo_id);
public:
HSplitContainer();
~HSplitContainer();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_HSplitContainer_constructor();
    void _wasgo_HSplitContainer_destructor(WasGoId p_wasgo_id);
            
}
#endif