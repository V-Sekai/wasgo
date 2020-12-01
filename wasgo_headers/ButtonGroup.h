/* THIS FILE IS GENERATED */
#ifndef BUTTONGROUP_H
#define BUTTONGROUP_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "BaseButton.h"
#include "Resource.h"
class ButtonGroup : public Resource{
public:
Array get_buttons();
BaseButton get_pressed_button();

ButtonGroup(WasGoId p_wasgo_id);
~ButtonGroup();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_ButtonGroup_wrapper_get_buttons(WasGoId wasgo_id);
WasGoId _wasgo_ButtonGroup_wrapper_get_pressed_button(WasGoId wasgo_id);
}
#endif