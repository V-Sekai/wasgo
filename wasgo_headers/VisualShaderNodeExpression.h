/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEEXPRESSION_H
#define VISUALSHADERNODEEXPRESSION_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "VisualShaderNodeGroupBase.h"
class VisualShaderNodeExpression : public VisualShaderNodeGroupBase{
String get_expression();
void set_expression(String p_expression);

VisualShaderNodeExpression(WasGoId p_wasgo_id);
~VisualShaderNodeExpression();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_VisualShaderNodeExpression_wrapper_get_expression(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeExpression_wrapper_set_expression(WasGoId wasgo_id, WasGo::WasGoId p_expression);
}
#endif