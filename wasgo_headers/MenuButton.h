/* THIS FILE IS GENERATED */
#ifndef MENUBUTTON_H
#define MENUBUTTON_H

#include "wasgo\wasgoid.h"

#include "Button.h"
#include "PopupMenu.h"
class MenuButton : public Button{
public:
PopupMenu get_popup();
bool is_switch_on_hover();
void set_disable_shortcuts(bool p_disabled);
void set_switch_on_hover(bool p_enable);

protected:
public:
explicit MenuButton(WasGoID p_wasgo_id);
explicit MenuButton(Button other);
MenuButton();
MenuButton new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_MenuButton_wrapper_get_popup(WasGoID wasgo_id);
int _wasgo_MenuButton_wrapper_is_switch_on_hover(WasGoID wasgo_id);
void _wasgo_MenuButton_wrapper_set_disable_shortcuts(WasGoID wasgo_id, bool p_disabled);
void _wasgo_MenuButton_wrapper_set_switch_on_hover(WasGoID wasgo_id, bool p_enable);

    //constructor wrappers
    WasGoID _wasgo_MenuButton_constructor();
            
}
#endif