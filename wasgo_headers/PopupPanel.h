/* THIS FILE IS GENERATED */
#ifndef POPUPPANEL_H
#define POPUPPANEL_H

#include "wasgo\wasgo.h"

#include "Popup.h"
class PopupPanel : public Popup{
public:

protected:
public:
explicit PopupPanel(WasGoID p_wasgo_id);
explicit PopupPanel(Popup other);
PopupPanel new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_PopupPanel_constructor();
            
}
#endif