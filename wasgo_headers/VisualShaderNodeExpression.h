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
public:
explicit VisualShaderNodeExpression(WasGoID p_wasgo_id);
explicit VisualShaderNodeExpression(VisualShaderNodeGroupBase other);
VisualShaderNodeExpression new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_VisualShaderNodeExpression_wrapper_get_expression(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_VisualShaderNodeExpression_wrapper_set_expression(WasGoID wasgo_id, const uint8_t * p_expression, int p_expression_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeExpression_constructor();
            
}
#endif