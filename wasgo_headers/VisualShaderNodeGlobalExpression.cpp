/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeGlobalExpression.h"

VisualShaderNodeGlobalExpression::VisualShaderNodeGlobalExpression(WasGoId p_wasgo_id) : VisualShaderNodeExpression(p_wasgo_id){
}
VisualShaderNodeGlobalExpression::VisualShaderNodeGlobalExpression(VisualShaderNodeExpression other) : VisualShaderNodeExpression(other._get_wasgo_id()){
    wasgo_id = _wasgo_VisualShaderNodeGlobalExpression_constructor();
}
VisualShaderNodeGlobalExpression::new_instance(){
    return VisualShaderNodeGlobalExpression(_wasgo_VisualShaderNodeGlobalExpression_constructor());
}