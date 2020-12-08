/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeColorUniform.h"

VisualShaderNodeColorUniform::VisualShaderNodeColorUniform(WasGoID p_wasgo_id) : VisualShaderNodeUniform(p_wasgo_id){
}
VisualShaderNodeColorUniform::VisualShaderNodeColorUniform(VisualShaderNodeUniform other) : VisualShaderNodeUniform(other._get_wasgo_id()){
}
VisualShaderNodeColorUniform::VisualShaderNodeColorUniform():VisualShaderNodeUniform(){
}
VisualShaderNodeColorUniform VisualShaderNodeColorUniform::new_instance(){
    return VisualShaderNodeColorUniform(_wasgo_VisualShaderNodeColorUniform_constructor());
}
WasGoID VisualShaderNodeColorUniform::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeColorUniform::operator bool(){
    return (bool) wasgo_id;
}
