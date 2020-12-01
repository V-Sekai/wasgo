/* THIS FILE IS GENERATED */
#ifndef BASEBUTTON_H
#define BASEBUTTON_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Control.h"
class BaseButton : public Control{
public:
enum ActionMode{
ACTION_MODE_BUTTON_PRESS,
ACTION_MODE_BUTTON_RELEASE
};
enum DrawMode{
DRAW_NORMAL,
DRAW_PRESSED,
DRAW_HOVER,
DRAW_DISABLED,
DRAW_HOVER_PRESSED
};
};


//Wrapper Functions
extern "C"{
}
#endif