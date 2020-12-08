/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeGlobalExpression.h"

VisualShaderNodeGlobalExpression::VisualShaderNodeGlobalExpression(WasGoID p_wasgo_id) : VisualShaderNodeExpression(p_wasgo_id){
}
VisualShaderNodeGlobalExpression::VisualShaderNodeGlobalExpression(VisualShaderNodeExpression other) : VisualShaderNodeExpression(other._get_wasgo_id()){
}
VisualShaderNodeGlobalExpression::VisualShaderNodeGlobalExpression():VisualShaderNodeExpression(){
}
VisualShaderNodeGlobalExpression VisualShaderNodeGlobalExpression::new_instance(){
    return VisualShaderNodeGlobalExpression(_wasgo_VisualShaderNodeGlobalExpression_constructor());
}
WasGoID VisualShaderNodeGlobalExpression::_get_wasgo_id(){
    return wasgo_id;
}
VisualShaderNodeGlobalExpression::operator bool(){
    return (bool) wasgo_id;
}
