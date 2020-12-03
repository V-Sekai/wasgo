/* THIS FILE IS GENERATED */
#ifndef PANELCONTAINER_H
#define PANELCONTAINER_H

#include "wasgo\wasgo.h"

#include "Container.h"
class PanelContainer : public Container{
public:

protected:
PanelContainer(WasGoId p_wasgo_id);
public:
PanelContainer();
~PanelContainer();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_PanelContainer_constructor();
    void _wasgo_PanelContainer_destructor(WasGoId p_wasgo_id);
            
}
#endif