/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ConfirmationDialog.h"
Button ConfirmationDialog::get_cancel(){
	return Button(_wasgo_ConfirmationDialog_wrapper_get_cancel(wasgo_id));
}

ConfirmationDialog::ConfirmationDialog(WasGoID p_wasgo_id) : AcceptDialog(p_wasgo_id){
}
ConfirmationDialog::ConfirmationDialog(AcceptDialog other) : AcceptDialog(other._get_wasgo_id()){
}
ConfirmationDialog::ConfirmationDialog():AcceptDialog(){
}
ConfirmationDialog ConfirmationDialog::new_instance(){
    return ConfirmationDialog(_wasgo_ConfirmationDialog_constructor());
}
WasGoID ConfirmationDialog::_get_wasgo_id(){
    return wasgo_id;
}
ConfirmationDialog::operator bool(){
    return (bool) wasgo_id;
}
