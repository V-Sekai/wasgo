/* THIS FILE IS GENERATED */
#ifndef CHECKBUTTON_H
#define CHECKBUTTON_H

#include "wasgo\wasgo.h"

#include "Button.h"
class CheckButton : public Button{
public:

protected:
public:
explicit CheckButton(WasGoId p_wasgo_id);
explicit CheckButton(Button other);
CheckButton new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoId _wasgo_CheckButton_constructor();
            
}
#endif