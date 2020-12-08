/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PopupDialog.h"

PopupDialog::PopupDialog(WasGoID p_wasgo_id) : Popup(p_wasgo_id){
}
PopupDialog::PopupDialog(Popup other) : Popup(other._get_wasgo_id()){
}
PopupDialog::PopupDialog():Popup(){
}
PopupDialog PopupDialog::new_instance(){
    return PopupDialog(_wasgo_PopupDialog_constructor());
}
WasGoID PopupDialog::_get_wasgo_id(){
    return wasgo_id;
}
PopupDialog::operator bool(){
    return (bool) wasgo_id;
}
