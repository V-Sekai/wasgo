/* THIS FILE IS GENERATED */
#ifndef CHECKBOX_H
#define CHECKBOX_H

#include "wasgo\wasgo.h"

#include "Button.h"
class CheckBox : public Button{
public:

protected:
CheckBox(WasGoId p_wasgo_id);
public:
CheckBox();
~CheckBox();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_CheckBox_constructor();
    void _wasgo_CheckBox_destructor(WasGoId p_wasgo_id);
            
}
#endif