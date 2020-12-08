/* THIS FILE IS GENERATED */
#ifndef CHECKBUTTON_H
#define CHECKBUTTON_H

#include "wasgo\wasgoid.h"

#include "Button.h"
class CheckButton : public Button{
public:

protected:
public:
explicit CheckButton(WasGoID p_wasgo_id);
explicit CheckButton(Button other);
CheckButton();
CheckButton new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_CheckButton_constructor();
            
}
#endif