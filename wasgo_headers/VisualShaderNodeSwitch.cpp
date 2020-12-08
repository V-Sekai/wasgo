/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeSwitch.h"

VisualShaderNodeSwitch::VisualShaderNodeSwitch(WasGoID p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeSwitch::VisualShaderNodeSwitch(VisualShaderNode other) : VisualShaderNode(other._get_wasgo_id()){
}
VisualShaderNodeSwitch::VisualShaderNodeSwitch():VisualShaderNode(){
}
VisualShaderNodeSwitch VisualShaderNodeSwitch::new_instance(){
    return VisualShaderNodeSwitch(_wasgo_VisualShaderNodeSwitch_constructor());
}
WasGoID VisualShaderNodeSwitch::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeSwitch::operator bool(){
    return (bool) wasgo_id;
}
