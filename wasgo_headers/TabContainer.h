/* THIS FILE IS GENERATED */
#ifndef TABCONTAINER_H
#define TABCONTAINER_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Container.h"
class TabContainer : public Container{
enum TabAlign{
ALIGN_LEFT,
ALIGN_CENTER,
ALIGN_RIGHT
};

TabContainer(WasGoId p_wasgo_id);
~TabContainer();
            
};


//Wrapper Functions
extern "C"{
}
#endif