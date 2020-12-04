/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeScalarSwitch.h"

VisualShaderNodeScalarSwitch::VisualShaderNodeScalarSwitch(WasGoId p_wasgo_id) : VisualShaderNodeSwitch(p_wasgo_id){
}
VisualShaderNodeScalarSwitch::VisualShaderNodeScalarSwitch(VisualShaderNodeSwitch other) : VisualShaderNodeSwitch(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeScalarSwitch_constructor();
}
VisualShaderNodeScalarSwitch::new_instance(){
    return VisualShaderNodeScalarSwitch(_wasgo_VisualShaderNodeScalarSwitch_constructor());
}