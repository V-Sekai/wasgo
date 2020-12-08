/* THIS FILE IS GENERATED */
#ifndef VSPLITCONTAINER_H
#define VSPLITCONTAINER_H

#include "wasgo\wasgoid.h"

#include "SplitContainer.h"
class VSplitContainer : public SplitContainer{
public:

protected:
public:
explicit VSplitContainer(WasGoID p_wasgo_id);
explicit VSplitContainer(SplitContainer other);
VSplitContainer();
VSplitContainer new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VSplitContainer_constructor();
            
}
#endif