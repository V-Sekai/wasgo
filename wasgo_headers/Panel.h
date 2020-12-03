/* THIS FILE IS GENERATED */
#ifndef PANEL_H
#define PANEL_H

#include "wasgo\wasgo.h"

#include "Control.h"
class Panel : public Control{
public:

protected:
Panel(WasGoId p_wasgo_id);
public:
Panel();
~Panel();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_Panel_constructor();
    void _wasgo_Panel_destructor(WasGoId p_wasgo_id);
            
}
#endif