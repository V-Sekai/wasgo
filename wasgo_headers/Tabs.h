/* THIS FILE IS GENERATED */
#ifndef TABS_H
#define TABS_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Control.h"
class Tabs : public Control{
enum CloseButtonDisplayPolicy{
CLOSE_BUTTON_SHOW_NEVER,
CLOSE_BUTTON_SHOW_ACTIVE_ONLY,
CLOSE_BUTTON_SHOW_ALWAYS,
CLOSE_BUTTON_MAX
};
enum TabAlign{
ALIGN_LEFT,
ALIGN_CENTER,
ALIGN_RIGHT,
ALIGN_MAX
};

Tabs(WasGoId p_wasgo_id);
~Tabs();
            
};


//Wrapper Functions
extern "C"{
}
#endif