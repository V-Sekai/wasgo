/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeBooleanUniform.h"

VisualShaderNodeBooleanUniform::VisualShaderNodeBooleanUniform(WasGoID p_wasgo_id) : VisualShaderNodeUniform(p_wasgo_id){
}
VisualShaderNodeBooleanUniform::VisualShaderNodeBooleanUniform(VisualShaderNodeUniform other) : VisualShaderNodeUniform(other._get_wasgo_id()){
}
VisualShaderNodeBooleanUniform::VisualShaderNodeBooleanUniform():VisualShaderNodeUniform(){
}
VisualShaderNodeBooleanUniform VisualShaderNodeBooleanUniform::new_instance(){
    return VisualShaderNodeBooleanUniform(_wasgo_VisualShaderNodeBooleanUniform_constructor());
}
WasGoID VisualShaderNodeBooleanUniform::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeBooleanUniform::operator bool(){
    return (bool) wasgo_id;
}
