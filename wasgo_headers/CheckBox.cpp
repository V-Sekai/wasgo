/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "CheckBox.h"

CheckBox::CheckBox(WasGoId p_wasgo_id) : Button(p_wasgo_id){
}
CheckBox::CheckBox(Button other) : Button(other._get_wasgo_id()){
    wasgo_id = _wasgo_CheckBox_constructor();
}
CheckBox::new_instance(){
    return CheckBox(_wasgo_CheckBox_constructor());
}