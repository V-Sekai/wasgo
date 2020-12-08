/* THIS FILE IS GENERATED */
#ifndef PANELCONTAINER_H
#define PANELCONTAINER_H

#include "wasgo\wasgoid.h"

#include "Container.h"
class PanelContainer : public Container{
public:

protected:
public:
explicit PanelContainer(WasGoID p_wasgo_id);
explicit PanelContainer(Container other);
PanelContainer();
PanelContainer new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_PanelContainer_constructor();
            
}
#endif