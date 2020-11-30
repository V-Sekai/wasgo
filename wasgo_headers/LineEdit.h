/* THIS FILE IS GENERATED */
#ifndef LINEEDIT_H
#define LINEEDIT_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Control.h"
class LineEdit : public Control{
enum Align{
ALIGN_LEFT,
ALIGN_CENTER,
ALIGN_RIGHT,
ALIGN_FILL
};
enum MenuItems{
MENU_CUT,
MENU_COPY,
MENU_PASTE,
MENU_CLEAR,
MENU_SELECT_ALL,
MENU_UNDO,
MENU_REDO,
MENU_MAX
};

LineEdit(WasGoId p_wasgo_id);
~LineEdit();
            
};


//Wrapper Functions
extern "C"{
}
#endif