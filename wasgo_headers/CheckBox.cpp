/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "CheckBox.h"

CheckBox::CheckBox(WasGoId p_wasgo_id) : Button(p_wasgo_id){
}
CheckBox::CheckBox(){
    wasgo_id = _wasgo_CheckBox_constructor();
}
CheckBox::~CheckBox(){
    _wasgo_CheckBox_destructor(wasgo_id);
}