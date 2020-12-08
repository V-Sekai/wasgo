/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ToolButton.h"

ToolButton::ToolButton(WasGoID p_wasgo_id) : Button(p_wasgo_id){
}
ToolButton::ToolButton(Button other) : Button(other._get_wasgo_id()){
}
ToolButton::ToolButton():Button(){
}
ToolButton ToolButton::new_instance(){
    return ToolButton(_wasgo_ToolButton_constructor());
}
WasGoID ToolButton::_get_wasgo_id(){
    return wasgo_id;
}
ToolButton::operator bool(){
    return (bool) wasgo_id;
}
