/* THIS FILE IS GENERATED */
#ifndef CONFIRMATIONDIALOG_H
#define CONFIRMATIONDIALOG_H

#include "wasgo\wasgoid.h"

#include "Button.h"
#include "AcceptDialog.h"
class ConfirmationDialog : public AcceptDialog{
public:
Button get_cancel();

protected:
public:
explicit ConfirmationDialog(WasGoID p_wasgo_id);
explicit ConfirmationDialog(AcceptDialog other);
ConfirmationDialog();
ConfirmationDialog new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_ConfirmationDialog_wrapper_get_cancel(WasGoID wasgo_id);

    //constructor wrappers
    WasGoID _wasgo_ConfirmationDialog_constructor();
            
}
#endif