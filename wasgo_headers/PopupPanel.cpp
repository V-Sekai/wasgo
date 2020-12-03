/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PopupPanel.h"

PopupPanel::PopupPanel(WasGoId p_wasgo_id) : Popup(p_wasgo_id){
}
PopupPanel::PopupPanel(){
    wasgo_id = _wasgo_PopupPanel_constructor();
}
PopupPanel::~PopupPanel(){
    _wasgo_PopupPanel_destructor(wasgo_id);
}