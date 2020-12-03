/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ToolButton.h"

ToolButton::ToolButton(WasGoId p_wasgo_id) : Button(p_wasgo_id){
}
ToolButton::ToolButton(){
    wasgo_id = _wasgo_ToolButton_constructor();
}
ToolButton::~ToolButton(){
    _wasgo_ToolButton_destructor(wasgo_id);
}