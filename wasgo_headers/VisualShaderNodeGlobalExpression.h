/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEGLOBALEXPRESSION_H
#define VISUALSHADERNODEGLOBALEXPRESSION_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNodeExpression.h"
class VisualShaderNodeGlobalExpression : public VisualShaderNodeExpression{
public:

protected:
public:
explicit VisualShaderNodeGlobalExpression(WasGoID p_wasgo_id);
explicit VisualShaderNodeGlobalExpression(VisualShaderNodeExpression other);
VisualShaderNodeGlobalExpression();
VisualShaderNodeGlobalExpression new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeGlobalExpression_constructor();
            
}
#endif