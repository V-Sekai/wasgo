/* THIS FILE IS GENERATED */
#ifndef PANEL_H
#define PANEL_H

#include "wasgo\wasgoid.h"

#include "Control.h"
class Panel : public Control{
public:

protected:
public:
explicit Panel(WasGoID p_wasgo_id);
explicit Panel(Control other);
Panel();
Panel new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_Panel_constructor();
            
}
#endif