/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ConfirmationDialog.h"
Button ConfirmationDialog::get_cancel(){
	return Button(_wasgo_ConfirmationDialog_wrapper_get_cancel(wasgo_id));
}

ConfirmationDialog::ConfirmationDialog(WasGoId p_wasgo_id) : AcceptDialog(p_wasgo_id){
}
ConfirmationDialog::ConfirmationDialog(){
    wasgo_id = _wasgo_ConfirmationDialog_constructor();
}
ConfirmationDialog::~ConfirmationDialog(){
    _wasgo_ConfirmationDialog_destructor(wasgo_id);
}