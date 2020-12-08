/* THIS FILE IS GENERATED */
#ifndef HSPLITCONTAINER_H
#define HSPLITCONTAINER_H

#include "wasgo\wasgoid.h"

#include "SplitContainer.h"
class HSplitContainer : public SplitContainer{
public:

protected:
public:
explicit HSplitContainer(WasGoID p_wasgo_id);
explicit HSplitContainer(SplitContainer other);
HSplitContainer();
HSplitContainer new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_HSplitContainer_constructor();
            
}
#endif