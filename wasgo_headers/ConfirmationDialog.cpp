/* THIS FILE IS GENERATED */
#include "ConfirmationDialog.h"
Button ConfirmationDialog::get_cancel(){
	return Button::from_wasgo_id(_wasgo_ConfirmationDialog_wrapper_get_cancel(wasgo_id));
}

ConfirmationDialog::ConfirmationDialog(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
ConfirmationDialog::~ConfirmationDialog(){
}