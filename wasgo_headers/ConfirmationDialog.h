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
public:
explicit ConfirmationDialog(WasGoId p_wasgo_id);
explicit ConfirmationDialog(AcceptDialog other);
ConfirmationDialog new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_ConfirmationDialog_wrapper_get_cancel(WasGoId wasgo_id);

    //constructor wrappers
    WasGoId _wasgo_ConfirmationDialog_constructor();
            
}
#endif