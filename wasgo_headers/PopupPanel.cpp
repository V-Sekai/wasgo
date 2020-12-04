/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PopupPanel.h"

PopupPanel::PopupPanel(WasGoId p_wasgo_id) : Popup(p_wasgo_id){
}
PopupPanel::PopupPanel(Popup other) : Popup(other._get_wasgo_id()){
    wasgo_id = _wasgo_PopupPanel_constructor();
}
PopupPanel::new_instance(){
    return PopupPanel(_wasgo_PopupPanel_constructor());
}