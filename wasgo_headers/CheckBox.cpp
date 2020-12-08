/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "CheckBox.h"

CheckBox::CheckBox(WasGoID p_wasgo_id) : Button(p_wasgo_id){
}
CheckBox::CheckBox(Button other) : Button(other._get_wasgo_id()){
}
CheckBox::CheckBox():Button(){
}
CheckBox CheckBox::new_instance(){
    return CheckBox(_wasgo_CheckBox_constructor());
}
WasGoID CheckBox::_get_wasgo_id(){
    return wasgo_id;
}
CheckBox::operator bool(){
    return (bool) wasgo_id;
}
