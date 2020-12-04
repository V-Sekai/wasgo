/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEGLOBALEXPRESSION_H
#define VISUALSHADERNODEGLOBALEXPRESSION_H

#include "wasgo\wasgo.h"

#include "VisualShaderNodeExpression.h"
class VisualShaderNodeGlobalExpression : public VisualShaderNodeExpression{
public:

protected:
public:
explicit VisualShaderNodeGlobalExpression(WasGoId p_wasgo_id);
explicit VisualShaderNodeGlobalExpression(VisualShaderNodeExpression other);
VisualShaderNodeGlobalExpression new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoId _wasgo_VisualShaderNodeGlobalExpression_constructor();
            
}
#endif