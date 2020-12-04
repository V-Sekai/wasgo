/* THIS FILE IS GENERATED */
#ifndef PANELCONTAINER_H
#define PANELCONTAINER_H

#include "wasgo\wasgo.h"

#include "Container.h"
class PanelContainer : public Container{
public:

protected:
public:
explicit PanelContainer(WasGoId p_wasgo_id);
explicit PanelContainer(Container other);
PanelContainer new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoId _wasgo_PanelContainer_constructor();
            
}
#endif