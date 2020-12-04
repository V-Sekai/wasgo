/* THIS FILE IS GENERATED */
#ifndef BUTTONGROUP_H
#define BUTTONGROUP_H

#include "wasgo\wasgo.h"

#include "Resource.h"
#include "BaseButton.h"
#include "Variant.h"
class ButtonGroup : public Resource{
public:
Array get_buttons();
BaseButton get_pressed_button();

protected:
public:
explicit ButtonGroup(WasGoId p_wasgo_id);
explicit ButtonGroup(Resource other);
ButtonGroup new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_ButtonGroup_wrapper_get_buttons(WasGoId wasgo_id);
WasGoId _wasgo_ButtonGroup_wrapper_get_pressed_button(WasGoId wasgo_id);

    //constructor wrappers
    WasGoId _wasgo_ButtonGroup_constructor();
            
}
#endif