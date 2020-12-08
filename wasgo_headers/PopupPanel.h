/* THIS FILE IS GENERATED */
#ifndef POPUPPANEL_H
#define POPUPPANEL_H

#include "wasgo\wasgoid.h"

#include "Popup.h"
class PopupPanel : public Popup{
public:

protected:
public:
explicit PopupPanel(WasGoID p_wasgo_id);
explicit PopupPanel(Popup other);
PopupPanel();
PopupPanel new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_PopupPanel_constructor();
            
}
#endif