/* THIS FILE IS GENERATED */
#ifndef POPUPDIALOG_H
#define POPUPDIALOG_H

#include "wasgo\wasgoid.h"

#include "Popup.h"
class PopupDialog : public Popup{
public:

protected:
public:
explicit PopupDialog(WasGoID p_wasgo_id);
explicit PopupDialog(Popup other);
PopupDialog();
PopupDialog new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_PopupDialog_constructor();
            
}
#endif