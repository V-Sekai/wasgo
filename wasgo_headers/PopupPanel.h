/* THIS FILE IS GENERATED */
#ifndef POPUPPANEL_H
#define POPUPPANEL_H

#include "wasgo\wasgo.h"

#include "Popup.h"
class PopupPanel : public Popup{
public:

protected:
PopupPanel(WasGoId p_wasgo_id);
public:
PopupPanel();
~PopupPanel();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_PopupPanel_constructor();
    void _wasgo_PopupPanel_destructor(WasGoId p_wasgo_id);
            
}
#endif