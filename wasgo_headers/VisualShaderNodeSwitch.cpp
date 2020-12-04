/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeSwitch.h"

VisualShaderNodeSwitch::VisualShaderNodeSwitch(WasGoId p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeSwitch::VisualShaderNodeSwitch(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeSwitch_constructor();
}
VisualShaderNodeSwitch::new_instance(){
    return VisualShaderNodeSwitch(_wasgo_VisualShaderNodeSwitch_constructor());
}