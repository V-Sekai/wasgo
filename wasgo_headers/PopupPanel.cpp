/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PopupPanel.h"

PopupPanel::PopupPanel(WasGoID p_wasgo_id) : Popup(p_wasgo_id){
}
PopupPanel::PopupPanel(Popup other) : Popup(other._get_wasgo_id()){
}
PopupPanel::PopupPanel():Popup(){
}
PopupPanel PopupPanel::new_instance(){
    return PopupPanel(_wasgo_PopupPanel_constructor());
}
WasGoID PopupPanel::_get_wasgo_id(){
    return wasgo_id;
}
PopupPanel::operator bool(){
    return (bool) wasgo_id;
}
