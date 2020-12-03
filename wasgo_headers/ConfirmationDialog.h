/* THIS FILE IS GENERATED */
#ifndef CONFIRMATIONDIALOG_H
#define CONFIRMATIONDIALOG_H

#include "wasgo\wasgo.h"

#include "AcceptDialog.h"
#include "Button.h"
class ConfirmationDialog : public AcceptDialog{
public:
Button get_cancel();

protected:
ConfirmationDialog(WasGoId p_wasgo_id);
public:
ConfirmationDialog();
~ConfirmationDialog();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_ConfirmationDialog_wrapper_get_cancel(WasGoId wasgo_id);

    //constructor and destructor wrappers
    WasGoId _wasgo_ConfirmationDialog_constructor();
    void _wasgo_ConfirmationDialog_destructor(WasGoId p_wasgo_id);
            
}
#endif