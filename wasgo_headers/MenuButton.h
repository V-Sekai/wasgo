/* THIS FILE IS GENERATED */
#ifndef MENUBUTTON_H
#define MENUBUTTON_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Button.h"
#include "PopupMenu.h"
class MenuButton : public Button{
public:
PopupMenu get_popup();

MenuButton(WasGoId p_wasgo_id);
~MenuButton();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_MenuButton_wrapper_get_popup(WasGoId wasgo_id);
}
#endif