/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODECOLORUNIFORM_H
#define VISUALSHADERNODECOLORUNIFORM_H

#include "wasgo\wasgo.h"

#include "VisualShaderNodeUniform.h"
class VisualShaderNodeColorUniform : public VisualShaderNodeUniform{
public:

protected:
VisualShaderNodeColorUniform(WasGoId p_wasgo_id);
public:
VisualShaderNodeColorUniform();
~VisualShaderNodeColorUniform();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualShaderNodeColorUniform_constructor();
    void _wasgo_VisualShaderNodeColorUniform_destructor(WasGoId p_wasgo_id);
            
}
#endif