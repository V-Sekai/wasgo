/* THIS FILE IS GENERATED */
#ifndef POPUPDIALOG_H
#define POPUPDIALOG_H

#include "wasgo\wasgo.h"

#include "Popup.h"
class PopupDialog : public Popup{
public:

protected:
public:
explicit PopupDialog(WasGoId p_wasgo_id);
explicit PopupDialog(Popup other);
PopupDialog new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoId _wasgo_PopupDialog_constructor();
            
}
#endif