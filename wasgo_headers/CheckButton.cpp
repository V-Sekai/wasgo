/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "CheckButton.h"

CheckButton::CheckButton(WasGoID p_wasgo_id) : Button(p_wasgo_id){
}
CheckButton::CheckButton(Button other) : Button(other._get_wasgo_id()){
    wasgo_id = _wasgo_CheckButton_constructor();
}
CheckButton::new_instance(){
    return CheckButton(_wasgo_CheckButton_constructor());
}