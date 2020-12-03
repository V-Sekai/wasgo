/* THIS FILE IS GENERATED */
#ifndef CHECKBUTTON_H
#define CHECKBUTTON_H

#include "wasgo\wasgo.h"

#include "Button.h"
class CheckButton : public Button{
public:

protected:
CheckButton(WasGoId p_wasgo_id);
public:
CheckButton();
~CheckButton();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_CheckButton_constructor();
    void _wasgo_CheckButton_destructor(WasGoId p_wasgo_id);
            
}
#endif