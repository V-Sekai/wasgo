/* THIS FILE IS GENERATED */
#ifndef MENUBUTTON_H
#define MENUBUTTON_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "PopupMenu.h"
#include "Button.h"
class MenuButton : public Button{
PopupMenu get_popup();

MenuButton(WasGoId p_wasgo_id);
~MenuButton();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_MenuButton_wrapper_get_popup(WasGoId wasgo_id);
}
#endif