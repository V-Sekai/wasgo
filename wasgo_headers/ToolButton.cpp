/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ToolButton.h"

ToolButton::ToolButton(WasGoID p_wasgo_id) : Button(p_wasgo_id){
}
ToolButton::ToolButton(Button other) : Button(other._get_wasgo_id()){
    wasgo_id = _wasgo_ToolButton_constructor();
}
ToolButton::new_instance(){
    return ToolButton(_wasgo_ToolButton_constructor());
}