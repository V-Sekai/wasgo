/* THIS FILE IS GENERATED */
#ifndef TOOLBUTTON_H
#define TOOLBUTTON_H

#include "wasgo\wasgo.h"

#include "Button.h"
class ToolButton : public Button{
public:

protected:
ToolButton(WasGoId p_wasgo_id);
public:
ToolButton();
~ToolButton();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_ToolButton_constructor();
    void _wasgo_ToolButton_destructor(WasGoId p_wasgo_id);
            
}
#endif