/* THIS FILE IS GENERATED */
#ifndef VSPLITCONTAINER_H
#define VSPLITCONTAINER_H

#include "wasgo\wasgo.h"

#include "SplitContainer.h"
class VSplitContainer : public SplitContainer{
public:

protected:
public:
explicit VSplitContainer(WasGoID p_wasgo_id);
explicit VSplitContainer(SplitContainer other);
VSplitContainer new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VSplitContainer_constructor();
            
}
#endif