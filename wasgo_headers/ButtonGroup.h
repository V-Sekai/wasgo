/* THIS FILE IS GENERATED */
#ifndef BUTTONGROUP_H
#define BUTTONGROUP_H

#include "wasgo\wasgo.h"

#include "BaseButton.h"
#include "Resource.h"
#include "Variant.h"
class ButtonGroup : public Resource{
public:
Array get_buttons();
BaseButton get_pressed_button();

protected:
ButtonGroup(WasGoId p_wasgo_id);
public:
ButtonGroup();
~ButtonGroup();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_ButtonGroup_wrapper_get_buttons(WasGoId wasgo_id);
WasGoId _wasgo_ButtonGroup_wrapper_get_pressed_button(WasGoId wasgo_id);

    //constructor and destructor wrappers
    WasGoId _wasgo_ButtonGroup_constructor();
    void _wasgo_ButtonGroup_destructor(WasGoId p_wasgo_id);
            
}
#endif