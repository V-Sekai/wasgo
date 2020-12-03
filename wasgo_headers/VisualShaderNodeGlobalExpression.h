/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEGLOBALEXPRESSION_H
#define VISUALSHADERNODEGLOBALEXPRESSION_H

#include "wasgo\wasgo.h"

#include "VisualShaderNodeExpression.h"
class VisualShaderNodeGlobalExpression : public VisualShaderNodeExpression{
public:

protected:
VisualShaderNodeGlobalExpression(WasGoId p_wasgo_id);
public:
VisualShaderNodeGlobalExpression();
~VisualShaderNodeGlobalExpression();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeGlobalExpression_constructor();
    void _wasgo_VisualShaderNodeGlobalExpression_destructor(WasGoId p_wasgo_id);
            
}
#endif