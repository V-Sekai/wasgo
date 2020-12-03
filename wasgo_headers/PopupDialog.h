/* THIS FILE IS GENERATED */
#ifndef POPUPDIALOG_H
#define POPUPDIALOG_H

#include "wasgo\wasgo.h"

#include "Popup.h"
class PopupDialog : public Popup{
public:

protected:
PopupDialog(WasGoId p_wasgo_id);
public:
PopupDialog();
~PopupDialog();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_PopupDialog_constructor();
    void _wasgo_PopupDialog_destructor(WasGoId p_wasgo_id);
            
}
#endif