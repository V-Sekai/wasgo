/* THIS FILE IS GENERATED */
#ifndef CHECKBOX_H
#define CHECKBOX_H

#include "wasgo\wasgoid.h"

#include "Button.h"
class CheckBox : public Button{
public:

protected:
public:
explicit CheckBox(WasGoID p_wasgo_id);
explicit CheckBox(Button other);
CheckBox();
CheckBox new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_CheckBox_constructor();
            
}
#endif