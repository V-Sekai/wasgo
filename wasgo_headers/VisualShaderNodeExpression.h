/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEEXPRESSION_H
#define VISUALSHADERNODEEXPRESSION_H

#include "wasgo\wasgo.h"

#include "VisualShaderNodeGroupBase.h"
#include "ustring.h"
class VisualShaderNodeExpression : public VisualShaderNodeGroupBase{
public:
String get_expression();
void set_expression(String p_expression);

protected:
VisualShaderNodeExpression(WasGoId p_wasgo_id);
public:
VisualShaderNodeExpression();
~VisualShaderNodeExpression();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_VisualShaderNodeExpression_wrapper_get_expression(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_VisualShaderNodeExpression_wrapper_set_expression(WasGoId wasgo_id, const uint8_t * p_expression, int p_expression_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeExpression_constructor();
    void _wasgo_VisualShaderNodeExpression_destructor(WasGoId p_wasgo_id);
            
}
#endif