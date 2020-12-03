/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "CheckButton.h"

CheckButton::CheckButton(WasGoId p_wasgo_id) : Button(p_wasgo_id){
}
CheckButton::CheckButton(){
    wasgo_id = _wasgo_CheckButton_constructor();
}
CheckButton::~CheckButton(){
    _wasgo_CheckButton_destructor(wasgo_id);
}