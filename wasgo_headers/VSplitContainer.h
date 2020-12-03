/* THIS FILE IS GENERATED */
#ifndef VSPLITCONTAINER_H
#define VSPLITCONTAINER_H

#include "wasgo\wasgo.h"

#include "SplitContainer.h"
class VSplitContainer : public SplitContainer{
public:

protected:
VSplitContainer(WasGoId p_wasgo_id);
public:
VSplitContainer();
~VSplitContainer();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VSplitContainer_constructor();
    void _wasgo_VSplitContainer_destructor(WasGoId p_wasgo_id);
            
}
#endif