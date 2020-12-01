/* THIS FILE IS GENERATED */
#ifndef CONFIRMATIONDIALOG_H
#define CONFIRMATIONDIALOG_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "AcceptDialog.h"
#include "Button.h"
class ConfirmationDialog : public AcceptDialog{
public:
Button get_cancel();

ConfirmationDialog(WasGoId p_wasgo_id);
~ConfirmationDialog();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_ConfirmationDialog_wrapper_get_cancel(WasGoId wasgo_id);
}
#endif