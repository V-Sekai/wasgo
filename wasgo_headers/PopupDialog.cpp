/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PopupDialog.h"

PopupDialog::PopupDialog(WasGoId p_wasgo_id) : Popup(p_wasgo_id){
}
PopupDialog::PopupDialog(){
    wasgo_id = _wasgo_PopupDialog_constructor();
}
PopupDialog::~PopupDialog(){
    _wasgo_PopupDialog_destructor(wasgo_id);
}