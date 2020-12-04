/* THIS FILE IS GENERATED */
#ifndef HSPLITCONTAINER_H
#define HSPLITCONTAINER_H

#include "wasgo\wasgo.h"

#include "SplitContainer.h"
class HSplitContainer : public SplitContainer{
public:

protected:
public:
explicit HSplitContainer(WasGoId p_wasgo_id);
explicit HSplitContainer(SplitContainer other);
HSplitContainer new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoId _wasgo_HSplitContainer_constructor();
            
}
#endif