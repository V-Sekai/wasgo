/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PopupDialog.h"

PopupDialog::PopupDialog(WasGoId p_wasgo_id) : Popup(p_wasgo_id){
}
PopupDialog::PopupDialog(Popup other) : Popup(other._get_wasgo_id()){
    wasgo_id = _wasgo_PopupDialog_constructor();
}
PopupDialog::new_instance(){
    return PopupDialog(_wasgo_PopupDialog_constructor());
}