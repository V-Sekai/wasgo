/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEGLOBALEXPRESSION_H
#define VISUALSHADERNODEGLOBALEXPRESSION_H

#include "wasgo\wasgo.h"

#include "VisualShaderNodeExpression.h"
class VisualShaderNodeGlobalExpression : public VisualShaderNodeExpression{
public:

protected:
public:
explicit VisualShaderNodeGlobalExpression(WasGoID p_wasgo_id);
explicit VisualShaderNodeGlobalExpression(VisualShaderNodeExpression other);
VisualShaderNodeGlobalExpression new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeGlobalExpression_constructor();
            
}
#endif