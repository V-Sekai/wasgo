/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeScalarSwitch.h"

VisualShaderNodeScalarSwitch::VisualShaderNodeScalarSwitch(WasGoID p_wasgo_id) : VisualShaderNodeSwitch(p_wasgo_id){
}
VisualShaderNodeScalarSwitch::VisualShaderNodeScalarSwitch(VisualShaderNodeSwitch other) : VisualShaderNodeSwitch(other._get_wasgo_id()){
}
VisualShaderNodeScalarSwitch::VisualShaderNodeScalarSwitch():VisualShaderNodeSwitch(){
}
VisualShaderNodeScalarSwitch VisualShaderNodeScalarSwitch::new_instance(){
    return VisualShaderNodeScalarSwitch(_wasgo_VisualShaderNodeScalarSwitch_constructor());
}
WasGoID VisualShaderNodeScalarSwitch::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeScalarSwitch::operator bool(){
    return (bool) wasgo_id;
}
