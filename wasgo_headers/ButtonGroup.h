/* THIS FILE IS GENERATED */
#ifndef BUTTONGROUP_H
#define BUTTONGROUP_H

#include "wasgo\wasgoid.h"

#include "BaseButton.h"
#include "Resource.h"
#include "Variant.h"
class ButtonGroup : public Resource{
public:
Array get_buttons();
BaseButton get_pressed_button();

protected:
public:
explicit ButtonGroup(WasGoID p_wasgo_id);
explicit ButtonGroup(Resource other);
ButtonGroup();
ButtonGroup new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_ButtonGroup_wrapper_get_buttons(WasGoID wasgo_id);
WasGoID _wasgo_ButtonGroup_wrapper_get_pressed_button(WasGoID wasgo_id);

    //constructor wrappers
    WasGoID _wasgo_ButtonGroup_constructor();
            
}
#endif