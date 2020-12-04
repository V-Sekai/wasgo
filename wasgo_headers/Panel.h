/* THIS FILE IS GENERATED */
#ifndef PANEL_H
#define PANEL_H

#include "wasgo\wasgo.h"

#include "Control.h"
class Panel : public Control{
public:

protected:
public:
explicit Panel(WasGoId p_wasgo_id);
explicit Panel(Control other);
Panel new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoId _wasgo_Panel_constructor();
            
}
#endif