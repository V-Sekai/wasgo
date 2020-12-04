/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEBOOLEANUNIFORM_H
#define VISUALSHADERNODEBOOLEANUNIFORM_H

#include "wasgo\wasgo.h"

#include "VisualShaderNodeUniform.h"
class VisualShaderNodeBooleanUniform : public VisualShaderNodeUniform{
public:

protected:
public:
explicit VisualShaderNodeBooleanUniform(WasGoID p_wasgo_id);
explicit VisualShaderNodeBooleanUniform(VisualShaderNodeUniform other);
VisualShaderNodeBooleanUniform new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeBooleanUniform_constructor();
            
}
#endif