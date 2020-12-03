/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODEBOOLEANUNIFORM_H
#define VISUALSHADERNODEBOOLEANUNIFORM_H

#include "wasgo\wasgo.h"

#include "VisualShaderNodeUniform.h"
class VisualShaderNodeBooleanUniform : public VisualShaderNodeUniform{
public:

protected:
VisualShaderNodeBooleanUniform(WasGoId p_wasgo_id);
public:
VisualShaderNodeBooleanUniform();
~VisualShaderNodeBooleanUniform();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeBooleanUniform_constructor();
    void _wasgo_VisualShaderNodeBooleanUniform_destructor(WasGoId p_wasgo_id);
            
}
#endif