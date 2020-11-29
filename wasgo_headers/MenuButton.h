/* THIS FILE IS GENERATED */
#ifndef MENUBUTTON_H
#define MENUBUTTON_H

#include "stdint.h"

#include "Button.h"
#include "PopupMenu.h"
class MenuButton : public Button{
public: MenuButton();
PopupMenu get_popup();
};
#endif