/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODECOLORUNIFORM_H
#define VISUALSHADERNODECOLORUNIFORM_H

#include "wasgo\wasgo.h"

#include "VisualShaderNodeUniform.h"
class VisualShaderNodeColorUniform : public VisualShaderNodeUniform{
public:

protected:
public:
explicit VisualShaderNodeColorUniform(WasGoID p_wasgo_id);
explicit VisualShaderNodeColorUniform(VisualShaderNodeUniform other);
VisualShaderNodeColorUniform new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeColorUniform_constructor();
            
}
#endif