/* THIS FILE IS GENERATED */
#ifndef TOOLBUTTON_H
#define TOOLBUTTON_H

#include "wasgo\wasgo.h"

#include "Button.h"
class ToolButton : public Button{
public:

protected:
public:
explicit ToolButton(WasGoID p_wasgo_id);
explicit ToolButton(Button other);
ToolButton new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_ToolButton_constructor();
            
}
#endif