/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEEXPRESSION_H
#define VISUALSHADERNODEEXPRESSION_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "ustring.h"
#include "VisualShaderNodeGroupBase.h"
class VisualShaderNodeExpression : public VisualShaderNodeGroupBase{
public:
String get_expression();
void set_expression(String p_expression);

VisualShaderNodeExpression(WasGoId p_wasgo_id);
~VisualShaderNodeExpression();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_VisualShaderNodeExpression_wrapper_get_expression(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeExpression_wrapper_set_expression(WasGoId wasgo_id, WasGoId p_expression);
}
#endif